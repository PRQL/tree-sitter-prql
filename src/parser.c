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
#define STATE_COUNT 591
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 206
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
  sym_keyword_mod = 46,
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
  anon_sym_LBRACE = 73,
  anon_sym_RBRACE = 74,
  anon_sym_DOT = 75,
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
  sym_module_definition = 126,
  sym_module_call = 127,
  sym_from_text = 128,
  sym_loop = 129,
  sym_transforms = 130,
  sym_from = 131,
  sym__table_selection = 132,
  sym__table_reference = 133,
  sym_derives = 134,
  sym__tuples = 135,
  sym_append = 136,
  sym_filter = 137,
  sym__boolean_expression = 138,
  sym_case = 139,
  sym_case_condition = 140,
  sym_aggregate = 141,
  sym__agg_keywords = 142,
  sym_aggregate_operation = 143,
  sym__aggregate_func = 144,
  sym_sorts = 145,
  sym__sort_instruction = 146,
  sym_direction = 147,
  sym_takes = 148,
  sym_window = 149,
  sym_window_definitions = 150,
  sym__window_definition = 151,
  sym_group = 152,
  sym_joins = 153,
  sym__join_definition = 154,
  sym_conditions = 155,
  sym__self_join = 156,
  sym_select = 157,
  sym_term = 158,
  sym__expression = 159,
  sym_literal = 160,
  sym_f_string = 161,
  sym_s_string = 162,
  sym__double_quote_string = 163,
  sym__single_quote_string = 164,
  aux_sym__inner_triple_quotes = 165,
  sym__triple_quote_string = 166,
  sym__double_f_string = 167,
  sym__triple_f_string = 168,
  sym__double_s_string = 169,
  sym__triple_s_string = 170,
  sym_literal_string = 171,
  aux_sym__friendly_number = 172,
  sym_integer = 173,
  sym_decimal_number = 174,
  sym_field = 175,
  sym__alias_identifier = 176,
  sym_identifier = 177,
  sym_range = 178,
  sym__agg_rhs_assignment = 179,
  sym_assignment = 180,
  sym_binary_expression = 181,
  sym__date = 182,
  sym_date = 183,
  sym__time = 184,
  sym_time = 185,
  sym_timestamp = 186,
  sym_timezone = 187,
  sym_comment = 188,
  aux_sym_program_repeat1 = 189,
  aux_sym_program_repeat2 = 190,
  aux_sym_variable_repeat1 = 191,
  aux_sym_function_definition_repeat1 = 192,
  aux_sym_function_call_repeat1 = 193,
  aux_sym_module_definition_repeat1 = 194,
  aux_sym_module_call_repeat1 = 195,
  aux_sym_transforms_repeat1 = 196,
  aux_sym__tuples_repeat1 = 197,
  aux_sym_case_repeat1 = 198,
  aux_sym_case_repeat2 = 199,
  aux_sym_aggregate_repeat1 = 200,
  aux_sym_sorts_repeat1 = 201,
  aux_sym_window_definitions_repeat1 = 202,
  aux_sym_group_repeat1 = 203,
  aux_sym_group_repeat2 = 204,
  aux_sym_conditions_repeat1 = 205,
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
  [sym_keyword_mod] = "keyword_mod",
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
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [anon_sym_DOT] = ".",
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
  [sym_module_definition] = "module_definition",
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
  [aux_sym_module_definition_repeat1] = "module_definition_repeat1",
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
  [sym_keyword_mod] = sym_keyword_mod,
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
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_DOT] = anon_sym_DOT,
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
  [sym_module_definition] = sym_module_definition,
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
  [aux_sym_module_definition_repeat1] = aux_sym_module_definition_repeat1,
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
  [sym_keyword_mod] = {
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
  [anon_sym_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOT] = {
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
  [sym_module_definition] = {
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
  [aux_sym_module_definition_repeat1] = {
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
  [6] = 3,
  [7] = 7,
  [8] = 8,
  [9] = 8,
  [10] = 8,
  [11] = 8,
  [12] = 12,
  [13] = 3,
  [14] = 14,
  [15] = 15,
  [16] = 16,
  [17] = 17,
  [18] = 18,
  [19] = 19,
  [20] = 20,
  [21] = 21,
  [22] = 22,
  [23] = 23,
  [24] = 24,
  [25] = 25,
  [26] = 26,
  [27] = 23,
  [28] = 23,
  [29] = 29,
  [30] = 23,
  [31] = 31,
  [32] = 22,
  [33] = 33,
  [34] = 19,
  [35] = 20,
  [36] = 22,
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
  [62] = 20,
  [63] = 63,
  [64] = 63,
  [65] = 19,
  [66] = 66,
  [67] = 67,
  [68] = 68,
  [69] = 69,
  [70] = 70,
  [71] = 71,
  [72] = 72,
  [73] = 73,
  [74] = 70,
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
  [90] = 20,
  [91] = 91,
  [92] = 92,
  [93] = 93,
  [94] = 94,
  [95] = 19,
  [96] = 3,
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
  [119] = 119,
  [120] = 120,
  [121] = 121,
  [122] = 122,
  [123] = 123,
  [124] = 124,
  [125] = 125,
  [126] = 126,
  [127] = 63,
  [128] = 70,
  [129] = 129,
  [130] = 130,
  [131] = 130,
  [132] = 15,
  [133] = 15,
  [134] = 14,
  [135] = 17,
  [136] = 136,
  [137] = 137,
  [138] = 19,
  [139] = 20,
  [140] = 136,
  [141] = 14,
  [142] = 15,
  [143] = 17,
  [144] = 20,
  [145] = 14,
  [146] = 19,
  [147] = 147,
  [148] = 147,
  [149] = 17,
  [150] = 137,
  [151] = 21,
  [152] = 152,
  [153] = 152,
  [154] = 154,
  [155] = 154,
  [156] = 21,
  [157] = 157,
  [158] = 88,
  [159] = 79,
  [160] = 130,
  [161] = 161,
  [162] = 162,
  [163] = 75,
  [164] = 161,
  [165] = 97,
  [166] = 88,
  [167] = 162,
  [168] = 79,
  [169] = 67,
  [170] = 75,
  [171] = 97,
  [172] = 124,
  [173] = 124,
  [174] = 123,
  [175] = 123,
  [176] = 21,
  [177] = 157,
  [178] = 67,
  [179] = 19,
  [180] = 20,
  [181] = 181,
  [182] = 61,
  [183] = 20,
  [184] = 15,
  [185] = 136,
  [186] = 19,
  [187] = 187,
  [188] = 147,
  [189] = 17,
  [190] = 14,
  [191] = 20,
  [192] = 19,
  [193] = 70,
  [194] = 63,
  [195] = 75,
  [196] = 162,
  [197] = 161,
  [198] = 157,
  [199] = 79,
  [200] = 21,
  [201] = 154,
  [202] = 123,
  [203] = 67,
  [204] = 124,
  [205] = 88,
  [206] = 97,
  [207] = 152,
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
  [259] = 259,
  [260] = 260,
  [261] = 261,
  [262] = 262,
  [263] = 263,
  [264] = 264,
  [265] = 265,
  [266] = 266,
  [267] = 267,
  [268] = 268,
  [269] = 269,
  [270] = 270,
  [271] = 271,
  [272] = 272,
  [273] = 130,
  [274] = 274,
  [275] = 275,
  [276] = 276,
  [277] = 277,
  [278] = 278,
  [279] = 279,
  [280] = 280,
  [281] = 15,
  [282] = 136,
  [283] = 283,
  [284] = 17,
  [285] = 285,
  [286] = 283,
  [287] = 287,
  [288] = 283,
  [289] = 289,
  [290] = 290,
  [291] = 291,
  [292] = 292,
  [293] = 20,
  [294] = 14,
  [295] = 283,
  [296] = 296,
  [297] = 19,
  [298] = 152,
  [299] = 123,
  [300] = 300,
  [301] = 301,
  [302] = 161,
  [303] = 88,
  [304] = 304,
  [305] = 79,
  [306] = 306,
  [307] = 75,
  [308] = 162,
  [309] = 309,
  [310] = 67,
  [311] = 97,
  [312] = 124,
  [313] = 313,
  [314] = 314,
  [315] = 314,
  [316] = 316,
  [317] = 317,
  [318] = 318,
  [319] = 21,
  [320] = 320,
  [321] = 321,
  [322] = 322,
  [323] = 323,
  [324] = 324,
  [325] = 325,
  [326] = 326,
  [327] = 327,
  [328] = 328,
  [329] = 329,
  [330] = 330,
  [331] = 331,
  [332] = 332,
  [333] = 333,
  [334] = 334,
  [335] = 335,
  [336] = 336,
  [337] = 337,
  [338] = 338,
  [339] = 339,
  [340] = 340,
  [341] = 341,
  [342] = 342,
  [343] = 343,
  [344] = 344,
  [345] = 345,
  [346] = 346,
  [347] = 67,
  [348] = 348,
  [349] = 349,
  [350] = 350,
  [351] = 351,
  [352] = 352,
  [353] = 353,
  [354] = 354,
  [355] = 355,
  [356] = 356,
  [357] = 357,
  [358] = 358,
  [359] = 14,
  [360] = 15,
  [361] = 361,
  [362] = 362,
  [363] = 363,
  [364] = 353,
  [365] = 365,
  [366] = 366,
  [367] = 17,
  [368] = 368,
  [369] = 369,
  [370] = 370,
  [371] = 371,
  [372] = 372,
  [373] = 21,
  [374] = 374,
  [375] = 375,
  [376] = 376,
  [377] = 377,
  [378] = 17,
  [379] = 379,
  [380] = 380,
  [381] = 381,
  [382] = 14,
  [383] = 15,
  [384] = 69,
  [385] = 385,
  [386] = 386,
  [387] = 387,
  [388] = 388,
  [389] = 75,
  [390] = 390,
  [391] = 391,
  [392] = 392,
  [393] = 393,
  [394] = 394,
  [395] = 88,
  [396] = 20,
  [397] = 397,
  [398] = 397,
  [399] = 79,
  [400] = 400,
  [401] = 397,
  [402] = 402,
  [403] = 19,
  [404] = 21,
  [405] = 97,
  [406] = 406,
  [407] = 407,
  [408] = 397,
  [409] = 124,
  [410] = 410,
  [411] = 123,
  [412] = 397,
  [413] = 413,
  [414] = 397,
  [415] = 397,
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
  [431] = 67,
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
  [451] = 421,
  [452] = 452,
  [453] = 453,
  [454] = 454,
  [455] = 455,
  [456] = 444,
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
  [477] = 477,
  [478] = 478,
  [479] = 479,
  [480] = 480,
  [481] = 481,
  [482] = 482,
  [483] = 483,
  [484] = 484,
  [485] = 485,
  [486] = 486,
  [487] = 487,
  [488] = 488,
  [489] = 489,
  [490] = 490,
  [491] = 491,
  [492] = 492,
  [493] = 493,
  [494] = 494,
  [495] = 495,
  [496] = 496,
  [497] = 497,
  [498] = 498,
  [499] = 499,
  [500] = 500,
  [501] = 501,
  [502] = 502,
  [503] = 503,
  [504] = 504,
  [505] = 505,
  [506] = 506,
  [507] = 478,
  [508] = 485,
  [509] = 509,
  [510] = 510,
  [511] = 511,
  [512] = 512,
  [513] = 504,
  [514] = 505,
  [515] = 504,
  [516] = 478,
  [517] = 485,
  [518] = 509,
  [519] = 519,
  [520] = 520,
  [521] = 504,
  [522] = 505,
  [523] = 523,
  [524] = 478,
  [525] = 485,
  [526] = 509,
  [527] = 527,
  [528] = 528,
  [529] = 504,
  [530] = 505,
  [531] = 531,
  [532] = 478,
  [533] = 485,
  [534] = 509,
  [535] = 504,
  [536] = 505,
  [537] = 537,
  [538] = 478,
  [539] = 485,
  [540] = 509,
  [541] = 504,
  [542] = 542,
  [543] = 485,
  [544] = 504,
  [545] = 504,
  [546] = 504,
  [547] = 504,
  [548] = 503,
  [549] = 549,
  [550] = 550,
  [551] = 551,
  [552] = 500,
  [553] = 503,
  [554] = 549,
  [555] = 550,
  [556] = 556,
  [557] = 503,
  [558] = 549,
  [559] = 550,
  [560] = 505,
  [561] = 503,
  [562] = 549,
  [563] = 550,
  [564] = 503,
  [565] = 549,
  [566] = 550,
  [567] = 503,
  [568] = 549,
  [569] = 503,
  [570] = 503,
  [571] = 503,
  [572] = 503,
  [573] = 573,
  [574] = 549,
  [575] = 575,
  [576] = 576,
  [577] = 550,
  [578] = 481,
  [579] = 579,
  [580] = 580,
  [581] = 509,
  [582] = 582,
  [583] = 511,
  [584] = 584,
  [585] = 585,
  [586] = 487,
  [587] = 587,
  [588] = 488,
  [589] = 589,
  [590] = 590,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(507);
      if (lookahead == '!') ADVANCE(924);
      if (lookahead == '"') ADVANCE(626);
      if (lookahead == '#') ADVANCE(917);
      if (lookahead == '&') ADVANCE(22);
      if (lookahead == '\'') ADVANCE(630);
      if (lookahead == '(') ADVANCE(614);
      if (lookahead == ')') ADVANCE(616);
      if (lookahead == '*') ADVANCE(898);
      if (lookahead == '+') ADVANCE(624);
      if (lookahead == ',') ADVANCE(615);
      if (lookahead == '-') ADVANCE(623);
      if (lookahead == '.') ADVANCE(620);
      if (lookahead == '/') ADVANCE(899);
      if (lookahead == ':') ADVANCE(594);
      if (lookahead == '<') ADVANCE(904);
      if (lookahead == '=') ADVANCE(613);
      if (lookahead == '>') ADVANCE(902);
      if (lookahead == '?') ADVANCE(29);
      if (lookahead == '@') ADVANCE(912);
      if (lookahead == 'A') ADVANCE(91);
      if (lookahead == 'C') ADVANCE(30);
      if (lookahead == 'D') ADVANCE(74);
      if (lookahead == 'E') ADVANCE(220);
      if (lookahead == 'F') ADVANCE(34);
      if (lookahead == 'G') ADVANCE(176);
      if (lookahead == 'I') ADVANCE(134);
      if (lookahead == 'J') ADVANCE(162);
      if (lookahead == 'L') ADVANCE(31);
      if (lookahead == 'M') ADVANCE(32);
      if (lookahead == 'N') ADVANCE(210);
      if (lookahead == 'P') ADVANCE(170);
      if (lookahead == 'R') ADVANCE(38);
      if (lookahead == 'S') ADVANCE(77);
      if (lookahead == 'T') ADVANCE(914);
      if (lookahead == 'V') ADVANCE(79);
      if (lookahead == 'W') ADVANCE(103);
      if (lookahead == 'Z') ADVANCE(916);
      if (lookahead == '_') ADVANCE(644);
      if (lookahead == '`') ADVANCE(646);
      if (lookahead == 'a') ADVANCE(300);
      if (lookahead == 'c') ADVANCE(223);
      if (lookahead == 'd') ADVANCE(278);
      if (lookahead == 'e') ADVANCE(472);
      if (lookahead == 'f') ADVANCE(9);
      if (lookahead == 'g') ADVANCE(413);
      if (lookahead == 'i') ADVANCE(361);
      if (lookahead == 'j') ADVANCE(394);
      if (lookahead == 'l') ADVANCE(224);
      if (lookahead == 'm') ADVANCE(225);
      if (lookahead == 'n') ADVANCE(457);
      if (lookahead == 'p') ADVANCE(406);
      if (lookahead == 'r') ADVANCE(229);
      if (lookahead == 's') ADVANCE(10);
      if (lookahead == 't') ADVANCE(227);
      if (lookahead == 'v') ADVANCE(283);
      if (lookahead == 'w') ADVANCE(316);
      if (lookahead == '{') ADVANCE(618);
      if (lookahead == '|') ADVANCE(926);
      if (lookahead == '}') ADVANCE(619);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(500)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(643);
      END_STATE();
    case 1:
      if (lookahead == '!') ADVANCE(25);
      if (lookahead == '"') ADVANCE(626);
      if (lookahead == '#') ADVANCE(917);
      if (lookahead == '&') ADVANCE(22);
      if (lookahead == '\'') ADVANCE(630);
      if (lookahead == '(') ADVANCE(614);
      if (lookahead == ')') ADVANCE(616);
      if (lookahead == '*') ADVANCE(898);
      if (lookahead == '+') ADVANCE(624);
      if (lookahead == ',') ADVANCE(615);
      if (lookahead == '-') ADVANCE(622);
      if (lookahead == '.') ADVANCE(620);
      if (lookahead == '/') ADVANCE(899);
      if (lookahead == '<') ADVANCE(904);
      if (lookahead == '=') ADVANCE(26);
      if (lookahead == '>') ADVANCE(902);
      if (lookahead == '?') ADVANCE(29);
      if (lookahead == 'F') ADVANCE(652);
      if (lookahead == 'N') ADVANCE(761);
      if (lookahead == 'T') ADVANCE(735);
      if (lookahead == '_') ADVANCE(645);
      if (lookahead == '`') ADVANCE(646);
      if (lookahead == 'f') ADVANCE(777);
      if (lookahead == 'n') ADVANCE(885);
      if (lookahead == 't') ADVANCE(860);
      if (lookahead == '|') ADVANCE(926);
      if (lookahead == '}') ADVANCE(619);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(479)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(643);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(895);
      END_STATE();
    case 2:
      if (lookahead == '!') ADVANCE(25);
      if (lookahead == '"') ADVANCE(626);
      if (lookahead == '#') ADVANCE(917);
      if (lookahead == '&') ADVANCE(22);
      if (lookahead == '\'') ADVANCE(630);
      if (lookahead == ')') ADVANCE(616);
      if (lookahead == '*') ADVANCE(898);
      if (lookahead == '+') ADVANCE(624);
      if (lookahead == ',') ADVANCE(615);
      if (lookahead == '-') ADVANCE(622);
      if (lookahead == '.') ADVANCE(620);
      if (lookahead == '/') ADVANCE(899);
      if (lookahead == '<') ADVANCE(904);
      if (lookahead == '=') ADVANCE(27);
      if (lookahead == '>') ADVANCE(902);
      if (lookahead == '?') ADVANCE(29);
      if (lookahead == 'A') ADVANCE(691);
      if (lookahead == 'D') ADVANCE(683);
      if (lookahead == 'F') ADVANCE(651);
      if (lookahead == 'G') ADVANCE(740);
      if (lookahead == 'I') ADVANCE(717);
      if (lookahead == 'J') ADVANCE(728);
      if (lookahead == 'L') ADVANCE(726);
      if (lookahead == 'N') ADVANCE(761);
      if (lookahead == 'R') ADVANCE(681);
      if (lookahead == 'S') ADVANCE(684);
      if (lookahead == 'T') ADVANCE(656);
      if (lookahead == '_') ADVANCE(645);
      if (lookahead == '`') ADVANCE(646);
      if (lookahead == 'a') ADVANCE(816);
      if (lookahead == 'd') ADVANCE(808);
      if (lookahead == 'f') ADVANCE(776);
      if (lookahead == 'g') ADVANCE(865);
      if (lookahead == 'i') ADVANCE(842);
      if (lookahead == 'j') ADVANCE(853);
      if (lookahead == 'l') ADVANCE(851);
      if (lookahead == 'n') ADVANCE(885);
      if (lookahead == 'r') ADVANCE(806);
      if (lookahead == 's') ADVANCE(809);
      if (lookahead == 't') ADVANCE(781);
      if (lookahead == '|') ADVANCE(926);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(477)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(643);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(895);
      END_STATE();
    case 3:
      if (lookahead == '!') ADVANCE(923);
      if (lookahead == '"') ADVANCE(626);
      if (lookahead == '#') ADVANCE(917);
      if (lookahead == '\'') ADVANCE(630);
      if (lookahead == '(') ADVANCE(614);
      if (lookahead == ')') ADVANCE(616);
      if (lookahead == ',') ADVANCE(615);
      if (lookahead == '-') ADVANCE(622);
      if (lookahead == '.') ADVANCE(620);
      if (lookahead == '=') ADVANCE(26);
      if (lookahead == '@') ADVANCE(912);
      if (lookahead == 'F') ADVANCE(652);
      if (lookahead == 'N') ADVANCE(761);
      if (lookahead == 'T') ADVANCE(735);
      if (lookahead == '_') ADVANCE(645);
      if (lookahead == '`') ADVANCE(646);
      if (lookahead == 'f') ADVANCE(647);
      if (lookahead == 'n') ADVANCE(885);
      if (lookahead == 's') ADVANCE(649);
      if (lookahead == 't') ADVANCE(860);
      if (lookahead == '{') ADVANCE(618);
      if (lookahead == '|') ADVANCE(925);
      if (lookahead == '}') ADVANCE(619);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(478)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(643);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(895);
      END_STATE();
    case 4:
      if (lookahead == '"') ADVANCE(626);
      if (lookahead == '#') ADVANCE(917);
      if (lookahead == '\'') ADVANCE(630);
      if (lookahead == '(') ADVANCE(614);
      if (lookahead == ')') ADVANCE(616);
      if (lookahead == ',') ADVANCE(615);
      if (lookahead == '-') ADVANCE(622);
      if (lookahead == '.') ADVANCE(620);
      if (lookahead == ':') ADVANCE(594);
      if (lookahead == 'F') ADVANCE(652);
      if (lookahead == 'N') ADVANCE(761);
      if (lookahead == 'T') ADVANCE(735);
      if (lookahead == '_') ADVANCE(645);
      if (lookahead == '`') ADVANCE(646);
      if (lookahead == 'f') ADVANCE(777);
      if (lookahead == 'n') ADVANCE(885);
      if (lookahead == 't') ADVANCE(860);
      if (lookahead == '|') ADVANCE(925);
      if (lookahead == '}') ADVANCE(619);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(481)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(643);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(895);
      END_STATE();
    case 5:
      if (lookahead == '"') ADVANCE(626);
      if (lookahead == '#') ADVANCE(917);
      if (lookahead == '\'') ADVANCE(630);
      if (lookahead == '(') ADVANCE(614);
      if (lookahead == ',') ADVANCE(615);
      if (lookahead == '-') ADVANCE(622);
      if (lookahead == '.') ADVANCE(620);
      if (lookahead == '@') ADVANCE(912);
      if (lookahead == 'A') ADVANCE(765);
      if (lookahead == 'C') ADVANCE(720);
      if (lookahead == 'F') ADVANCE(652);
      if (lookahead == 'M') ADVANCE(653);
      if (lookahead == 'N') ADVANCE(761);
      if (lookahead == 'R') ADVANCE(655);
      if (lookahead == 'S') ADVANCE(746);
      if (lookahead == 'T') ADVANCE(735);
      if (lookahead == '_') ADVANCE(645);
      if (lookahead == '`') ADVANCE(646);
      if (lookahead == 'a') ADVANCE(889);
      if (lookahead == 'c') ADVANCE(845);
      if (lookahead == 'f') ADVANCE(647);
      if (lookahead == 'm') ADVANCE(778);
      if (lookahead == 'n') ADVANCE(885);
      if (lookahead == 'r') ADVANCE(780);
      if (lookahead == 's') ADVANCE(648);
      if (lookahead == 't') ADVANCE(860);
      if (lookahead == '|') ADVANCE(925);
      if (lookahead == '}') ADVANCE(619);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(475)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(643);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(895);
      END_STATE();
    case 6:
      if (lookahead == '"') ADVANCE(626);
      if (lookahead == '#') ADVANCE(917);
      if (lookahead == '\'') ADVANCE(630);
      if (lookahead == '(') ADVANCE(614);
      if (lookahead == '-') ADVANCE(622);
      if (lookahead == '.') ADVANCE(620);
      if (lookahead == '@') ADVANCE(912);
      if (lookahead == 'A') ADVANCE(765);
      if (lookahead == 'C') ADVANCE(657);
      if (lookahead == 'F') ADVANCE(652);
      if (lookahead == 'M') ADVANCE(653);
      if (lookahead == 'N') ADVANCE(761);
      if (lookahead == 'S') ADVANCE(746);
      if (lookahead == 'T') ADVANCE(735);
      if (lookahead == '_') ADVANCE(645);
      if (lookahead == '`') ADVANCE(646);
      if (lookahead == 'a') ADVANCE(889);
      if (lookahead == 'c') ADVANCE(782);
      if (lookahead == 'f') ADVANCE(647);
      if (lookahead == 'm') ADVANCE(778);
      if (lookahead == 'n') ADVANCE(885);
      if (lookahead == 's') ADVANCE(648);
      if (lookahead == 't') ADVANCE(860);
      if (lookahead == '|') ADVANCE(925);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(476)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(643);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(895);
      END_STATE();
    case 7:
      if (lookahead == '"') ADVANCE(626);
      if (lookahead == '#') ADVANCE(917);
      if (lookahead == '\'') ADVANCE(630);
      if (lookahead == '(') ADVANCE(614);
      if (lookahead == '-') ADVANCE(622);
      if (lookahead == '.') ADVANCE(620);
      if (lookahead == '@') ADVANCE(912);
      if (lookahead == 'A') ADVANCE(765);
      if (lookahead == 'C') ADVANCE(727);
      if (lookahead == 'F') ADVANCE(652);
      if (lookahead == 'M') ADVANCE(653);
      if (lookahead == 'N') ADVANCE(761);
      if (lookahead == 'S') ADVANCE(746);
      if (lookahead == 'T') ADVANCE(735);
      if (lookahead == '_') ADVANCE(645);
      if (lookahead == '`') ADVANCE(646);
      if (lookahead == 'a') ADVANCE(889);
      if (lookahead == 'c') ADVANCE(852);
      if (lookahead == 'f') ADVANCE(647);
      if (lookahead == 'm') ADVANCE(778);
      if (lookahead == 'n') ADVANCE(885);
      if (lookahead == 's') ADVANCE(648);
      if (lookahead == 't') ADVANCE(860);
      if (lookahead == '|') ADVANCE(925);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(491)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(643);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(895);
      END_STATE();
    case 8:
      if (lookahead == '"') ADVANCE(626);
      if (lookahead == '#') ADVANCE(917);
      if (lookahead == '\'') ADVANCE(630);
      if (lookahead == ')') ADVANCE(616);
      if (lookahead == ',') ADVANCE(615);
      if (lookahead == '-') ADVANCE(622);
      if (lookahead == '.') ADVANCE(620);
      if (lookahead == ':') ADVANCE(594);
      if (lookahead == 'A') ADVANCE(691);
      if (lookahead == 'D') ADVANCE(683);
      if (lookahead == 'F') ADVANCE(651);
      if (lookahead == 'G') ADVANCE(740);
      if (lookahead == 'I') ADVANCE(717);
      if (lookahead == 'J') ADVANCE(728);
      if (lookahead == 'L') ADVANCE(726);
      if (lookahead == 'N') ADVANCE(761);
      if (lookahead == 'R') ADVANCE(681);
      if (lookahead == 'S') ADVANCE(684);
      if (lookahead == 'T') ADVANCE(656);
      if (lookahead == '_') ADVANCE(645);
      if (lookahead == '`') ADVANCE(646);
      if (lookahead == 'a') ADVANCE(816);
      if (lookahead == 'd') ADVANCE(808);
      if (lookahead == 'f') ADVANCE(776);
      if (lookahead == 'g') ADVANCE(865);
      if (lookahead == 'i') ADVANCE(842);
      if (lookahead == 'j') ADVANCE(853);
      if (lookahead == 'l') ADVANCE(851);
      if (lookahead == 'n') ADVANCE(885);
      if (lookahead == 'r') ADVANCE(806);
      if (lookahead == 's') ADVANCE(809);
      if (lookahead == 't') ADVANCE(781);
      if (lookahead == '|') ADVANCE(925);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(480)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(643);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(895);
      END_STATE();
    case 9:
      if (lookahead == '"') ADVANCE(639);
      if (lookahead == 'a') ADVANCE(354);
      if (lookahead == 'i') ADVANCE(338);
      if (lookahead == 'o') ADVANCE(416);
      if (lookahead == 'r') ADVANCE(389);
      if (lookahead == 'u') ADVANCE(349);
      END_STATE();
    case 10:
      if (lookahead == '"') ADVANCE(641);
      if (lookahead == 'e') ADVANCE(346);
      if (lookahead == 'i') ADVANCE(254);
      if (lookahead == 'o') ADVANCE(417);
      if (lookahead == 'q') ADVANCE(339);
      if (lookahead == 't') ADVANCE(258);
      if (lookahead == 'u') ADVANCE(356);
      END_STATE();
    case 11:
      if (lookahead == '"') ADVANCE(640);
      END_STATE();
    case 12:
      if (lookahead == '"') ADVANCE(642);
      END_STATE();
    case 13:
      if (lookahead == '"') ADVANCE(638);
      END_STATE();
    case 14:
      if (lookahead == '"') ADVANCE(13);
      END_STATE();
    case 15:
      if (lookahead == '#') ADVANCE(917);
      if (lookahead == '(') ADVANCE(614);
      if (lookahead == 'F') ADVANCE(738);
      if (lookahead == '`') ADVANCE(646);
      if (lookahead == 'f') ADVANCE(863);
      if (lookahead == '|') ADVANCE(925);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(483)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(911);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(895);
      END_STATE();
    case 16:
      if (lookahead == '#') ADVANCE(917);
      if (lookahead == '+') ADVANCE(624);
      if (lookahead == ',') ADVANCE(615);
      if (lookahead == '-') ADVANCE(622);
      if (lookahead == '`') ADVANCE(646);
      if (lookahead == '{') ADVANCE(618);
      if (lookahead == '|') ADVANCE(925);
      if (lookahead == '}') ADVANCE(619);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(482)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(492);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(895);
      END_STATE();
    case 17:
      if (lookahead == '#') ADVANCE(917);
      if (lookahead == ',') ADVANCE(615);
      if (lookahead == '-') ADVANCE(28);
      if (lookahead == '.') ADVANCE(620);
      if (lookahead == ':') ADVANCE(594);
      if (lookahead == '`') ADVANCE(646);
      if (lookahead == '|') ADVANCE(925);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(486)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(643);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(895);
      END_STATE();
    case 18:
      if (lookahead == '#') ADVANCE(917);
      if (lookahead == '-') ADVANCE(28);
      if (lookahead == '.') ADVANCE(620);
      if (lookahead == '_') ADVANCE(645);
      if (lookahead == '`') ADVANCE(646);
      if (lookahead == '|') ADVANCE(925);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(484)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(643);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(895);
      END_STATE();
    case 19:
      if (lookahead == '#') ADVANCE(917);
      if (lookahead == 'S') ADVANCE(699);
      if (lookahead == '`') ADVANCE(646);
      if (lookahead == 's') ADVANCE(824);
      if (lookahead == '|') ADVANCE(925);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(485)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(895);
      END_STATE();
    case 20:
      if (lookahead == '#') ADVANCE(917);
      if (lookahead == '`') ADVANCE(646);
      if (lookahead == '|') ADVANCE(925);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(488)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(911);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(895);
      END_STATE();
    case 21:
      if (lookahead == '#') ADVANCE(917);
      if (lookahead == '|') ADVANCE(925);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(490)
      if (lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(896);
      END_STATE();
    case 22:
      if (lookahead == '&') ADVANCE(907);
      END_STATE();
    case 23:
      if (lookahead == '.') ADVANCE(233);
      END_STATE();
    case 24:
      if (lookahead == '.') ADVANCE(897);
      END_STATE();
    case 25:
      if (lookahead == '=') ADVANCE(901);
      END_STATE();
    case 26:
      if (lookahead == '=') ADVANCE(625);
      END_STATE();
    case 27:
      if (lookahead == '=') ADVANCE(625);
      if (lookahead == '>') ADVANCE(621);
      END_STATE();
    case 28:
      if (lookahead == '>') ADVANCE(617);
      END_STATE();
    case 29:
      if (lookahead == '?') ADVANCE(906);
      END_STATE();
    case 30:
      if (lookahead == 'A') ADVANCE(186);
      if (lookahead == 'O') ADVANCE(212);
      if (lookahead == 'S') ADVANCE(215);
      END_STATE();
    case 31:
      if (lookahead == 'A') ADVANCE(93);
      if (lookahead == 'E') ADVANCE(39);
      if (lookahead == 'O') ADVANCE(156);
      END_STATE();
    case 32:
      if (lookahead == 'A') ADVANCE(165);
      if (lookahead == 'I') ADVANCE(136);
      if (lookahead == 'O') ADVANCE(50);
      END_STATE();
    case 33:
      if (lookahead == 'A') ADVANCE(114);
      END_STATE();
    case 34:
      if (lookahead == 'A') ADVANCE(127);
      if (lookahead == 'I') ADVANCE(117);
      if (lookahead == 'O') ADVANCE(179);
      if (lookahead == 'R') ADVANCE(158);
      if (lookahead == 'U') ADVANCE(123);
      END_STATE();
    case 35:
      if (lookahead == 'A') ADVANCE(127);
      if (lookahead == 'I') ADVANCE(116);
      if (lookahead == 'R') ADVANCE(158);
      if (lookahead == 'U') ADVANCE(135);
      END_STATE();
    case 36:
      if (lookahead == 'A') ADVANCE(113);
      END_STATE();
    case 37:
      if (lookahead == 'A') ADVANCE(113);
      if (lookahead == 'R') ADVANCE(214);
      END_STATE();
    case 38:
      if (lookahead == 'A') ADVANCE(137);
      if (lookahead == 'E') ADVANCE(133);
      if (lookahead == 'I') ADVANCE(94);
      if (lookahead == 'O') ADVANCE(125);
      END_STATE();
    case 39:
      if (lookahead == 'A') ADVANCE(51);
      if (lookahead == 'F') ADVANCE(194);
      if (lookahead == 'T') ADVANCE(589);
      END_STATE();
    case 40:
      if (lookahead == 'A') ADVANCE(199);
      END_STATE();
    case 41:
      if (lookahead == 'A') ADVANCE(121);
      END_STATE();
    case 42:
      if (lookahead == 'A') ADVANCE(99);
      END_STATE();
    case 43:
      if (lookahead == 'A') ADVANCE(206);
      END_STATE();
    case 44:
      if (lookahead == 'A') ADVANCE(150);
      END_STATE();
    case 45:
      if (lookahead == 'B') ADVANCE(85);
      END_STATE();
    case 46:
      if (lookahead == 'C') ADVANCE(587);
      END_STATE();
    case 47:
      if (lookahead == 'C') ADVANCE(200);
      END_STATE();
    case 48:
      if (lookahead == 'C') ADVANCE(203);
      END_STATE();
    case 49:
      if (lookahead == 'C') ADVANCE(204);
      END_STATE();
    case 50:
      if (lookahead == 'D') ADVANCE(585);
      END_STATE();
    case 51:
      if (lookahead == 'D') ADVANCE(560);
      END_STATE();
    case 52:
      if (lookahead == 'D') ADVANCE(566);
      END_STATE();
    case 53:
      if (lookahead == 'D') ADVANCE(535);
      END_STATE();
    case 54:
      if (lookahead == 'D') ADVANCE(110);
      END_STATE();
    case 55:
      if (lookahead == 'D') ADVANCE(63);
      END_STATE();
    case 56:
      if (lookahead == 'D') ADVANCE(155);
      END_STATE();
    case 57:
      if (lookahead == 'D') ADVANCE(75);
      END_STATE();
    case 58:
      if (lookahead == 'D') ADVANCE(57);
      END_STATE();
    case 59:
      if (lookahead == 'D') ADVANCE(108);
      END_STATE();
    case 60:
      if (lookahead == 'E') ADVANCE(133);
      END_STATE();
    case 61:
      if (lookahead == 'E') ADVANCE(133);
      if (lookahead == 'I') ADVANCE(94);
      if (lookahead == 'O') ADVANCE(126);
      END_STATE();
    case 62:
      if (lookahead == 'E') ADVANCE(533);
      END_STATE();
    case 63:
      if (lookahead == 'E') ADVANCE(569);
      END_STATE();
    case 64:
      if (lookahead == 'E') ADVANCE(522);
      END_STATE();
    case 65:
      if (lookahead == 'E') ADVANCE(529);
      END_STATE();
    case 66:
      if (lookahead == 'E') ADVANCE(531);
      END_STATE();
    case 67:
      if (lookahead == 'E') ADVANCE(514);
      END_STATE();
    case 68:
      if (lookahead == 'E') ADVANCE(537);
      END_STATE();
    case 69:
      if (lookahead == 'E') ADVANCE(541);
      END_STATE();
    case 70:
      if (lookahead == 'E') ADVANCE(518);
      END_STATE();
    case 71:
      if (lookahead == 'E') ADVANCE(90);
      if (lookahead == 'O') ADVANCE(156);
      END_STATE();
    case 72:
      if (lookahead == 'E') ADVANCE(221);
      END_STATE();
    case 73:
      if (lookahead == 'E') ADVANCE(47);
      END_STATE();
    case 74:
      if (lookahead == 'E') ADVANCE(175);
      END_STATE();
    case 75:
      if (lookahead == 'E') ADVANCE(216);
      END_STATE();
    case 76:
      if (lookahead == 'E') ADVANCE(100);
      END_STATE();
    case 77:
      if (lookahead == 'E') ADVANCE(122);
      if (lookahead == 'I') ADVANCE(55);
      if (lookahead == 'O') ADVANCE(180);
      if (lookahead == 'T') ADVANCE(58);
      if (lookahead == 'U') ADVANCE(129);
      END_STATE();
    case 78:
      if (lookahead == 'E') ADVANCE(122);
      if (lookahead == 'O') ADVANCE(180);
      END_STATE();
    case 79:
      if (lookahead == 'E') ADVANCE(178);
      END_STATE();
    case 80:
      if (lookahead == 'E') ADVANCE(177);
      if (lookahead == 'G') ADVANCE(553);
      END_STATE();
    case 81:
      if (lookahead == 'E') ADVANCE(171);
      END_STATE();
    case 82:
      if (lookahead == 'E') ADVANCE(172);
      END_STATE();
    case 83:
      if (lookahead == 'E') ADVANCE(173);
      END_STATE();
    case 84:
      if (lookahead == 'E') ADVANCE(201);
      END_STATE();
    case 85:
      if (lookahead == 'E') ADVANCE(174);
      END_STATE();
    case 86:
      if (lookahead == 'E') ADVANCE(182);
      END_STATE();
    case 87:
      if (lookahead == 'E') ADVANCE(192);
      if (lookahead == 'O') ADVANCE(156);
      END_STATE();
    case 88:
      if (lookahead == 'E') ADVANCE(48);
      END_STATE();
    case 89:
      if (lookahead == 'E') ADVANCE(149);
      END_STATE();
    case 90:
      if (lookahead == 'F') ADVANCE(194);
      if (lookahead == 'T') ADVANCE(589);
      END_STATE();
    case 91:
      if (lookahead == 'G') ADVANCE(97);
      if (lookahead == 'L') ADVANCE(115);
      if (lookahead == 'P') ADVANCE(168);
      if (lookahead == 'V') ADVANCE(80);
      END_STATE();
    case 92:
      if (lookahead == 'G') ADVANCE(97);
      if (lookahead == 'P') ADVANCE(168);
      END_STATE();
    case 93:
      if (lookahead == 'G') ADVANCE(559);
      if (lookahead == 'S') ADVANCE(193);
      END_STATE();
    case 94:
      if (lookahead == 'G') ADVANCE(101);
      END_STATE();
    case 95:
      if (lookahead == 'G') ADVANCE(577);
      END_STATE();
    case 96:
      if (lookahead == 'G') ADVANCE(579);
      END_STATE();
    case 97:
      if (lookahead == 'G') ADVANCE(181);
      END_STATE();
    case 98:
      if (lookahead == 'G') ADVANCE(84);
      END_STATE();
    case 99:
      if (lookahead == 'G') ADVANCE(69);
      END_STATE();
    case 100:
      if (lookahead == 'G') ADVANCE(43);
      END_STATE();
    case 101:
      if (lookahead == 'H') ADVANCE(198);
      END_STATE();
    case 102:
      if (lookahead == 'I') ADVANCE(217);
      END_STATE();
    case 103:
      if (lookahead == 'I') ADVANCE(145);
      END_STATE();
    case 104:
      if (lookahead == 'I') ADVANCE(138);
      END_STATE();
    case 105:
      if (lookahead == 'I') ADVANCE(144);
      END_STATE();
    case 106:
      if (lookahead == 'I') ADVANCE(116);
      if (lookahead == 'O') ADVANCE(179);
      if (lookahead == 'R') ADVANCE(158);
      if (lookahead == 'U') ADVANCE(123);
      END_STATE();
    case 107:
      if (lookahead == 'I') ADVANCE(116);
      if (lookahead == 'R') ADVANCE(158);
      if (lookahead == 'U') ADVANCE(135);
      END_STATE();
    case 108:
      if (lookahead == 'I') ADVANCE(147);
      END_STATE();
    case 109:
      if (lookahead == 'I') ADVANCE(152);
      END_STATE();
    case 110:
      if (lookahead == 'I') ADVANCE(190);
      END_STATE();
    case 111:
      if (lookahead == 'I') ADVANCE(160);
      END_STATE();
    case 112:
      if (lookahead == 'K') ADVANCE(563);
      END_STATE();
    case 113:
      if (lookahead == 'K') ADVANCE(64);
      END_STATE();
    case 114:
      if (lookahead == 'K') ADVANCE(64);
      if (lookahead == 'R') ADVANCE(98);
      END_STATE();
    case 115:
      if (lookahead == 'L') ADVANCE(567);
      END_STATE();
    case 116:
      if (lookahead == 'L') ADVANCE(207);
      END_STATE();
    case 117:
      if (lookahead == 'L') ADVANCE(207);
      if (lookahead == 'R') ADVANCE(188);
      END_STATE();
    case 118:
      if (lookahead == 'L') ADVANCE(574);
      END_STATE();
    case 119:
      if (lookahead == 'L') ADVANCE(580);
      END_STATE();
    case 120:
      if (lookahead == 'L') ADVANCE(591);
      END_STATE();
    case 121:
      if (lookahead == 'L') ADVANCE(584);
      END_STATE();
    case 122:
      if (lookahead == 'L') ADVANCE(73);
      END_STATE();
    case 123:
      if (lookahead == 'L') ADVANCE(118);
      if (lookahead == 'N') ADVANCE(46);
      END_STATE();
    case 124:
      if (lookahead == 'L') ADVANCE(119);
      END_STATE();
    case 125:
      if (lookahead == 'L') ADVANCE(128);
      if (lookahead == 'U') ADVANCE(148);
      if (lookahead == 'W') ADVANCE(185);
      END_STATE();
    case 126:
      if (lookahead == 'L') ADVANCE(128);
      if (lookahead == 'W') ADVANCE(184);
      END_STATE();
    case 127:
      if (lookahead == 'L') ADVANCE(189);
      END_STATE();
    case 128:
      if (lookahead == 'L') ADVANCE(105);
      END_STATE();
    case 129:
      if (lookahead == 'M') ADVANCE(555);
      END_STATE();
    case 130:
      if (lookahead == 'M') ADVANCE(508);
      END_STATE();
    case 131:
      if (lookahead == 'M') ADVANCE(45);
      END_STATE();
    case 132:
      if (lookahead == 'M') ADVANCE(40);
      END_STATE();
    case 133:
      if (lookahead == 'M') ADVANCE(163);
      END_STATE();
    case 134:
      if (lookahead == 'N') ADVANCE(575);
      END_STATE();
    case 135:
      if (lookahead == 'N') ADVANCE(46);
      END_STATE();
    case 136:
      if (lookahead == 'N') ADVANCE(543);
      END_STATE();
    case 137:
      if (lookahead == 'N') ADVANCE(112);
      END_STATE();
    case 138:
      if (lookahead == 'N') ADVANCE(525);
      END_STATE();
    case 139:
      if (lookahead == 'N') ADVANCE(610);
      END_STATE();
    case 140:
      if (lookahead == 'N') ADVANCE(592);
      END_STATE();
    case 141:
      if (lookahead == 'N') ADVANCE(151);
      END_STATE();
    case 142:
      if (lookahead == 'N') ADVANCE(41);
      if (lookahead == 'S') ADVANCE(88);
      END_STATE();
    case 143:
      if (lookahead == 'N') ADVANCE(213);
      END_STATE();
    case 144:
      if (lookahead == 'N') ADVANCE(95);
      END_STATE();
    case 145:
      if (lookahead == 'N') ADVANCE(56);
      END_STATE();
    case 146:
      if (lookahead == 'N') ADVANCE(196);
      END_STATE();
    case 147:
      if (lookahead == 'N') ADVANCE(96);
      END_STATE();
    case 148:
      if (lookahead == 'N') ADVANCE(52);
      END_STATE();
    case 149:
      if (lookahead == 'N') ADVANCE(53);
      END_STATE();
    case 150:
      if (lookahead == 'N') ADVANCE(59);
      END_STATE();
    case 151:
      if (lookahead == 'N') ADVANCE(81);
      if (lookahead == 'T') ADVANCE(86);
      END_STATE();
    case 152:
      if (lookahead == 'N') ADVANCE(49);
      END_STATE();
    case 153:
      if (lookahead == 'N') ADVANCE(209);
      END_STATE();
    case 154:
      if (lookahead == 'O') ADVANCE(50);
      END_STATE();
    case 155:
      if (lookahead == 'O') ADVANCE(219);
      END_STATE();
    case 156:
      if (lookahead == 'O') ADVANCE(166);
      END_STATE();
    case 157:
      if (lookahead == 'O') ADVANCE(211);
      END_STATE();
    case 158:
      if (lookahead == 'O') ADVANCE(130);
      END_STATE();
    case 159:
      if (lookahead == 'O') ADVANCE(139);
      END_STATE();
    case 160:
      if (lookahead == 'O') ADVANCE(140);
      END_STATE();
    case 161:
      if (lookahead == 'O') ADVANCE(104);
      END_STATE();
    case 162:
      if (lookahead == 'O') ADVANCE(104);
      if (lookahead == 'S') ADVANCE(159);
      END_STATE();
    case 163:
      if (lookahead == 'O') ADVANCE(218);
      END_STATE();
    case 164:
      if (lookahead == 'P') ADVANCE(44);
      END_STATE();
    case 165:
      if (lookahead == 'P') ADVANCE(568);
      if (lookahead == 'X') ADVANCE(545);
      END_STATE();
    case 166:
      if (lookahead == 'P') ADVANCE(582);
      END_STATE();
    case 167:
      if (lookahead == 'P') ADVANCE(516);
      END_STATE();
    case 168:
      if (lookahead == 'P') ADVANCE(89);
      END_STATE();
    case 169:
      if (lookahead == 'Q') ADVANCE(120);
      END_STATE();
    case 170:
      if (lookahead == 'R') ADVANCE(169);
      END_STATE();
    case 171:
      if (lookahead == 'R') ADVANCE(571);
      END_STATE();
    case 172:
      if (lookahead == 'R') ADVANCE(142);
      END_STATE();
    case 173:
      if (lookahead == 'R') ADVANCE(512);
      END_STATE();
    case 174:
      if (lookahead == 'R') ADVANCE(565);
      END_STATE();
    case 175:
      if (lookahead == 'R') ADVANCE(102);
      END_STATE();
    case 176:
      if (lookahead == 'R') ADVANCE(157);
      END_STATE();
    case 177:
      if (lookahead == 'R') ADVANCE(42);
      END_STATE();
    case 178:
      if (lookahead == 'R') ADVANCE(187);
      END_STATE();
    case 179:
      if (lookahead == 'R') ADVANCE(132);
      END_STATE();
    case 180:
      if (lookahead == 'R') ADVANCE(195);
      END_STATE();
    case 181:
      if (lookahead == 'R') ADVANCE(76);
      END_STATE();
    case 182:
      if (lookahead == 'R') ADVANCE(191);
      END_STATE();
    case 183:
      if (lookahead == 'S') ADVANCE(215);
      END_STATE();
    case 184:
      if (lookahead == 'S') ADVANCE(578);
      END_STATE();
    case 185:
      if (lookahead == 'S') ADVANCE(578);
      if (lookahead == '_') ADVANCE(143);
      END_STATE();
    case 186:
      if (lookahead == 'S') ADVANCE(62);
      END_STATE();
    case 187:
      if (lookahead == 'S') ADVANCE(111);
      END_STATE();
    case 188:
      if (lookahead == 'S') ADVANCE(197);
      END_STATE();
    case 189:
      if (lookahead == 'S') ADVANCE(66);
      END_STATE();
    case 190:
      if (lookahead == 'S') ADVANCE(208);
      END_STATE();
    case 191:
      if (lookahead == 'S') ADVANCE(88);
      END_STATE();
    case 192:
      if (lookahead == 'T') ADVANCE(589);
      END_STATE();
    case 193:
      if (lookahead == 'T') ADVANCE(562);
      END_STATE();
    case 194:
      if (lookahead == 'T') ADVANCE(572);
      END_STATE();
    case 195:
      if (lookahead == 'T') ADVANCE(520);
      END_STATE();
    case 196:
      if (lookahead == 'T') ADVANCE(549);
      END_STATE();
    case 197:
      if (lookahead == 'T') ADVANCE(561);
      END_STATE();
    case 198:
      if (lookahead == 'T') ADVANCE(573);
      END_STATE();
    case 199:
      if (lookahead == 'T') ADVANCE(608);
      END_STATE();
    case 200:
      if (lookahead == 'T') ADVANCE(527);
      END_STATE();
    case 201:
      if (lookahead == 'T') ADVANCE(593);
      END_STATE();
    case 202:
      if (lookahead == 'T') ADVANCE(606);
      END_STATE();
    case 203:
      if (lookahead == 'T') ADVANCE(539);
      END_STATE();
    case 204:
      if (lookahead == 'T') ADVANCE(557);
      END_STATE();
    case 205:
      if (lookahead == 'T') ADVANCE(72);
      END_STATE();
    case 206:
      if (lookahead == 'T') ADVANCE(70);
      END_STATE();
    case 207:
      if (lookahead == 'T') ADVANCE(83);
      END_STATE();
    case 208:
      if (lookahead == 'T') ADVANCE(109);
      END_STATE();
    case 209:
      if (lookahead == 'T') ADVANCE(86);
      END_STATE();
    case 210:
      if (lookahead == 'U') ADVANCE(124);
      END_STATE();
    case 211:
      if (lookahead == 'U') ADVANCE(167);
      END_STATE();
    case 212:
      if (lookahead == 'U') ADVANCE(146);
      END_STATE();
    case 213:
      if (lookahead == 'U') ADVANCE(131);
      END_STATE();
    case 214:
      if (lookahead == 'U') ADVANCE(65);
      END_STATE();
    case 215:
      if (lookahead == 'V') ADVANCE(609);
      END_STATE();
    case 216:
      if (lookahead == 'V') ADVANCE(551);
      END_STATE();
    case 217:
      if (lookahead == 'V') ADVANCE(67);
      END_STATE();
    case 218:
      if (lookahead == 'V') ADVANCE(68);
      END_STATE();
    case 219:
      if (lookahead == 'W') ADVANCE(524);
      END_STATE();
    case 220:
      if (lookahead == 'X') ADVANCE(164);
      END_STATE();
    case 221:
      if (lookahead == 'X') ADVANCE(202);
      END_STATE();
    case 222:
      if (lookahead == '_') ADVANCE(371);
      if (lookahead == 's') ADVANCE(578);
      END_STATE();
    case 223:
      if (lookahead == 'a') ADVANCE(425);
      if (lookahead == 'o') ADVANCE(460);
      if (lookahead == 's') ADVANCE(465);
      END_STATE();
    case 224:
      if (lookahead == 'a') ADVANCE(302);
      if (lookahead == 'e') ADVANCE(230);
      if (lookahead == 'o') ADVANCE(387);
      END_STATE();
    case 225:
      if (lookahead == 'a') ADVANCE(397);
      if (lookahead == 'i') ADVANCE(362);
      if (lookahead == 'o') ADVANCE(249);
      END_STATE();
    case 226:
      if (lookahead == 'a') ADVANCE(333);
      END_STATE();
    case 227:
      if (lookahead == 'a') ADVANCE(333);
      if (lookahead == 'r') ADVANCE(462);
      END_STATE();
    case 228:
      if (lookahead == 'a') ADVANCE(354);
      if (lookahead == 'i') ADVANCE(337);
      if (lookahead == 'r') ADVANCE(389);
      if (lookahead == 'u') ADVANCE(363);
      END_STATE();
    case 229:
      if (lookahead == 'a') ADVANCE(364);
      if (lookahead == 'e') ADVANCE(360);
      if (lookahead == 'i') ADVANCE(303);
      if (lookahead == 'o') ADVANCE(352);
      END_STATE();
    case 230:
      if (lookahead == 'a') ADVANCE(250);
      if (lookahead == 'f') ADVANCE(439);
      if (lookahead == 't') ADVANCE(589);
      END_STATE();
    case 231:
      if (lookahead == 'a') ADVANCE(335);
      END_STATE();
    case 232:
      if (lookahead == 'a') ADVANCE(443);
      END_STATE();
    case 233:
      if (lookahead == 'a') ADVANCE(369);
      if (lookahead == 'b') ADVANCE(320);
      if (lookahead == 'c') ADVANCE(347);
      if (lookahead == 'd') ADVANCE(458);
      if (lookahead == 'g') ADVANCE(289);
      if (lookahead == 'h') ADVANCE(328);
      if (lookahead == 'm') ADVANCE(427);
      if (lookahead == 'p') ADVANCE(395);
      if (lookahead == 's') ADVANCE(378);
      END_STATE();
    case 234:
      if (lookahead == 'a') ADVANCE(343);
      END_STATE();
    case 235:
      if (lookahead == 'a') ADVANCE(309);
      END_STATE();
    case 236:
      if (lookahead == 'a') ADVANCE(332);
      END_STATE();
    case 237:
      if (lookahead == 'a') ADVANCE(332);
      if (lookahead == 'r') ADVANCE(462);
      END_STATE();
    case 238:
      if (lookahead == 'a') ADVANCE(451);
      END_STATE();
    case 239:
      if (lookahead == 'a') ADVANCE(379);
      END_STATE();
    case 240:
      if (lookahead == 'b') ADVANCE(605);
      END_STATE();
    case 241:
      if (lookahead == 'b') ADVANCE(292);
      END_STATE();
    case 242:
      if (lookahead == 'c') ADVANCE(587);
      END_STATE();
    case 243:
      if (lookahead == 'c') ADVANCE(598);
      END_STATE();
    case 244:
      if (lookahead == 'c') ADVANCE(334);
      END_STATE();
    case 245:
      if (lookahead == 'c') ADVANCE(331);
      END_STATE();
    case 246:
      if (lookahead == 'c') ADVANCE(444);
      END_STATE();
    case 247:
      if (lookahead == 'c') ADVANCE(447);
      END_STATE();
    case 248:
      if (lookahead == 'c') ADVANCE(448);
      END_STATE();
    case 249:
      if (lookahead == 'd') ADVANCE(585);
      END_STATE();
    case 250:
      if (lookahead == 'd') ADVANCE(560);
      END_STATE();
    case 251:
      if (lookahead == 'd') ADVANCE(566);
      END_STATE();
    case 252:
      if (lookahead == 'd') ADVANCE(535);
      END_STATE();
    case 253:
      if (lookahead == 'd') ADVANCE(240);
      END_STATE();
    case 254:
      if (lookahead == 'd') ADVANCE(263);
      END_STATE();
    case 255:
      if (lookahead == 'd') ADVANCE(327);
      END_STATE();
    case 256:
      if (lookahead == 'd') ADVANCE(385);
      END_STATE();
    case 257:
      if (lookahead == 'd') ADVANCE(279);
      END_STATE();
    case 258:
      if (lookahead == 'd') ADVANCE(257);
      END_STATE();
    case 259:
      if (lookahead == 'd') ADVANCE(322);
      END_STATE();
    case 260:
      if (lookahead == 'e') ADVANCE(360);
      END_STATE();
    case 261:
      if (lookahead == 'e') ADVANCE(360);
      if (lookahead == 'i') ADVANCE(303);
      if (lookahead == 'o') ADVANCE(353);
      END_STATE();
    case 262:
      if (lookahead == 'e') ADVANCE(533);
      END_STATE();
    case 263:
      if (lookahead == 'e') ADVANCE(569);
      END_STATE();
    case 264:
      if (lookahead == 'e') ADVANCE(522);
      END_STATE();
    case 265:
      if (lookahead == 'e') ADVANCE(529);
      END_STATE();
    case 266:
      if (lookahead == 'e') ADVANCE(531);
      END_STATE();
    case 267:
      if (lookahead == 'e') ADVANCE(514);
      END_STATE();
    case 268:
      if (lookahead == 'e') ADVANCE(537);
      END_STATE();
    case 269:
      if (lookahead == 'e') ADVANCE(541);
      END_STATE();
    case 270:
      if (lookahead == 'e') ADVANCE(599);
      END_STATE();
    case 271:
      if (lookahead == 'e') ADVANCE(518);
      END_STATE();
    case 272:
      if (lookahead == 'e') ADVANCE(603);
      END_STATE();
    case 273:
      if (lookahead == 'e') ADVANCE(604);
      END_STATE();
    case 274:
      if (lookahead == 'e') ADVANCE(597);
      END_STATE();
    case 275:
      if (lookahead == 'e') ADVANCE(298);
      if (lookahead == 'o') ADVANCE(387);
      END_STATE();
    case 276:
      if (lookahead == 'e') ADVANCE(473);
      END_STATE();
    case 277:
      if (lookahead == 'e') ADVANCE(246);
      END_STATE();
    case 278:
      if (lookahead == 'e') ADVANCE(412);
      END_STATE();
    case 279:
      if (lookahead == 'e') ADVANCE(466);
      END_STATE();
    case 280:
      if (lookahead == 'e') ADVANCE(310);
      END_STATE();
    case 281:
      if (lookahead == 'e') ADVANCE(346);
      if (lookahead == 'o') ADVANCE(417);
      END_STATE();
    case 282:
      if (lookahead == 'e') ADVANCE(346);
      if (lookahead == 'o') ADVANCE(417);
      if (lookahead == 'q') ADVANCE(339);
      END_STATE();
    case 283:
      if (lookahead == 'e') ADVANCE(415);
      END_STATE();
    case 284:
      if (lookahead == 'e') ADVANCE(424);
      END_STATE();
    case 285:
      if (lookahead == 'e') ADVANCE(414);
      if (lookahead == 'g') ADVANCE(553);
      END_STATE();
    case 286:
      if (lookahead == 'e') ADVANCE(407);
      END_STATE();
    case 287:
      if (lookahead == 'e') ADVANCE(408);
      END_STATE();
    case 288:
      if (lookahead == 'e') ADVANCE(409);
      END_STATE();
    case 289:
      if (lookahead == 'e') ADVANCE(382);
      END_STATE();
    case 290:
      if (lookahead == 'e') ADVANCE(445);
      END_STATE();
    case 291:
      if (lookahead == 'e') ADVANCE(419);
      END_STATE();
    case 292:
      if (lookahead == 'e') ADVANCE(410);
      END_STATE();
    case 293:
      if (lookahead == 'e') ADVANCE(411);
      END_STATE();
    case 294:
      if (lookahead == 'e') ADVANCE(421);
      END_STATE();
    case 295:
      if (lookahead == 'e') ADVANCE(437);
      if (lookahead == 'o') ADVANCE(387);
      END_STATE();
    case 296:
      if (lookahead == 'e') ADVANCE(247);
      END_STATE();
    case 297:
      if (lookahead == 'e') ADVANCE(377);
      END_STATE();
    case 298:
      if (lookahead == 'f') ADVANCE(439);
      if (lookahead == 't') ADVANCE(589);
      END_STATE();
    case 299:
      if (lookahead == 'f') ADVANCE(348);
      END_STATE();
    case 300:
      if (lookahead == 'g') ADVANCE(307);
      if (lookahead == 'l') ADVANCE(336);
      if (lookahead == 'p') ADVANCE(401);
      if (lookahead == 'v') ADVANCE(285);
      END_STATE();
    case 301:
      if (lookahead == 'g') ADVANCE(307);
      if (lookahead == 'p') ADVANCE(401);
      END_STATE();
    case 302:
      if (lookahead == 'g') ADVANCE(559);
      if (lookahead == 's') ADVANCE(438);
      END_STATE();
    case 303:
      if (lookahead == 'g') ADVANCE(312);
      END_STATE();
    case 304:
      if (lookahead == 'g') ADVANCE(577);
      END_STATE();
    case 305:
      if (lookahead == 'g') ADVANCE(579);
      END_STATE();
    case 306:
      if (lookahead == 'g') ADVANCE(402);
      END_STATE();
    case 307:
      if (lookahead == 'g') ADVANCE(418);
      END_STATE();
    case 308:
      if (lookahead == 'g') ADVANCE(290);
      END_STATE();
    case 309:
      if (lookahead == 'g') ADVANCE(269);
      END_STATE();
    case 310:
      if (lookahead == 'g') ADVANCE(238);
      END_STATE();
    case 311:
      if (lookahead == 'g') ADVANCE(420);
      END_STATE();
    case 312:
      if (lookahead == 'h') ADVANCE(442);
      END_STATE();
    case 313:
      if (lookahead == 'h') ADVANCE(391);
      END_STATE();
    case 314:
      if (lookahead == 'i') ADVANCE(595);
      END_STATE();
    case 315:
      if (lookahead == 'i') ADVANCE(467);
      END_STATE();
    case 316:
      if (lookahead == 'i') ADVANCE(373);
      END_STATE();
    case 317:
      if (lookahead == 'i') ADVANCE(245);
      END_STATE();
    case 318:
      if (lookahead == 'i') ADVANCE(243);
      END_STATE();
    case 319:
      if (lookahead == 'i') ADVANCE(365);
      END_STATE();
    case 320:
      if (lookahead == 'i') ADVANCE(306);
      END_STATE();
    case 321:
      if (lookahead == 'i') ADVANCE(372);
      END_STATE();
    case 322:
      if (lookahead == 'i') ADVANCE(376);
      END_STATE();
    case 323:
      if (lookahead == 'i') ADVANCE(381);
      END_STATE();
    case 324:
      if (lookahead == 'i') ADVANCE(337);
      if (lookahead == 'o') ADVANCE(416);
      if (lookahead == 'r') ADVANCE(389);
      if (lookahead == 'u') ADVANCE(349);
      END_STATE();
    case 325:
      if (lookahead == 'i') ADVANCE(337);
      if (lookahead == 'r') ADVANCE(389);
      if (lookahead == 'u') ADVANCE(363);
      END_STATE();
    case 326:
      if (lookahead == 'i') ADVANCE(392);
      END_STATE();
    case 327:
      if (lookahead == 'i') ADVANCE(432);
      END_STATE();
    case 328:
      if (lookahead == 'i') ADVANCE(469);
      END_STATE();
    case 329:
      if (lookahead == 'i') ADVANCE(452);
      END_STATE();
    case 330:
      if (lookahead == 'k') ADVANCE(563);
      END_STATE();
    case 331:
      if (lookahead == 'k') ADVANCE(313);
      END_STATE();
    case 332:
      if (lookahead == 'k') ADVANCE(264);
      END_STATE();
    case 333:
      if (lookahead == 'k') ADVANCE(264);
      if (lookahead == 'r') ADVANCE(308);
      END_STATE();
    case 334:
      if (lookahead == 'k') ADVANCE(253);
      END_STATE();
    case 335:
      if (lookahead == 'k') ADVANCE(273);
      END_STATE();
    case 336:
      if (lookahead == 'l') ADVANCE(567);
      END_STATE();
    case 337:
      if (lookahead == 'l') ADVANCE(453);
      END_STATE();
    case 338:
      if (lookahead == 'l') ADVANCE(453);
      if (lookahead == 'r') ADVANCE(428);
      END_STATE();
    case 339:
      if (lookahead == 'l') ADVANCE(23);
      END_STATE();
    case 340:
      if (lookahead == 'l') ADVANCE(574);
      END_STATE();
    case 341:
      if (lookahead == 'l') ADVANCE(580);
      END_STATE();
    case 342:
      if (lookahead == 'l') ADVANCE(591);
      END_STATE();
    case 343:
      if (lookahead == 'l') ADVANCE(584);
      END_STATE();
    case 344:
      if (lookahead == 'l') ADVANCE(600);
      END_STATE();
    case 345:
      if (lookahead == 'l') ADVANCE(601);
      END_STATE();
    case 346:
      if (lookahead == 'l') ADVANCE(277);
      END_STATE();
    case 347:
      if (lookahead == 'l') ADVANCE(317);
      END_STATE();
    case 348:
      if (lookahead == 'l') ADVANCE(231);
      END_STATE();
    case 349:
      if (lookahead == 'l') ADVANCE(340);
      if (lookahead == 'n') ADVANCE(242);
      END_STATE();
    case 350:
      if (lookahead == 'l') ADVANCE(341);
      END_STATE();
    case 351:
      if (lookahead == 'l') ADVANCE(329);
      END_STATE();
    case 352:
      if (lookahead == 'l') ADVANCE(355);
      if (lookahead == 'u') ADVANCE(375);
      if (lookahead == 'w') ADVANCE(222);
      END_STATE();
    case 353:
      if (lookahead == 'l') ADVANCE(355);
      if (lookahead == 'w') ADVANCE(423);
      END_STATE();
    case 354:
      if (lookahead == 'l') ADVANCE(430);
      END_STATE();
    case 355:
      if (lookahead == 'l') ADVANCE(321);
      END_STATE();
    case 356:
      if (lookahead == 'm') ADVANCE(555);
      END_STATE();
    case 357:
      if (lookahead == 'm') ADVANCE(241);
      END_STATE();
    case 358:
      if (lookahead == 'm') ADVANCE(509);
      END_STATE();
    case 359:
      if (lookahead == 'm') ADVANCE(232);
      END_STATE();
    case 360:
      if (lookahead == 'm') ADVANCE(396);
      END_STATE();
    case 361:
      if (lookahead == 'n') ADVANCE(576);
      END_STATE();
    case 362:
      if (lookahead == 'n') ADVANCE(543);
      END_STATE();
    case 363:
      if (lookahead == 'n') ADVANCE(242);
      END_STATE();
    case 364:
      if (lookahead == 'n') ADVANCE(330);
      END_STATE();
    case 365:
      if (lookahead == 'n') ADVANCE(525);
      END_STATE();
    case 366:
      if (lookahead == 'n') ADVANCE(610);
      END_STATE();
    case 367:
      if (lookahead == 'n') ADVANCE(592);
      END_STATE();
    case 368:
      if (lookahead == 'n') ADVANCE(380);
      END_STATE();
    case 369:
      if (lookahead == 'n') ADVANCE(429);
      END_STATE();
    case 370:
      if (lookahead == 'n') ADVANCE(234);
      if (lookahead == 's') ADVANCE(296);
      END_STATE();
    case 371:
      if (lookahead == 'n') ADVANCE(461);
      END_STATE();
    case 372:
      if (lookahead == 'n') ADVANCE(304);
      END_STATE();
    case 373:
      if (lookahead == 'n') ADVANCE(256);
      END_STATE();
    case 374:
      if (lookahead == 'n') ADVANCE(449);
      END_STATE();
    case 375:
      if (lookahead == 'n') ADVANCE(251);
      END_STATE();
    case 376:
      if (lookahead == 'n') ADVANCE(305);
      END_STATE();
    case 377:
      if (lookahead == 'n') ADVANCE(252);
      END_STATE();
    case 378:
      if (lookahead == 'n') ADVANCE(386);
      if (lookahead == 'q') ADVANCE(351);
      END_STATE();
    case 379:
      if (lookahead == 'n') ADVANCE(259);
      END_STATE();
    case 380:
      if (lookahead == 'n') ADVANCE(286);
      if (lookahead == 't') ADVANCE(294);
      END_STATE();
    case 381:
      if (lookahead == 'n') ADVANCE(248);
      END_STATE();
    case 382:
      if (lookahead == 'n') ADVANCE(291);
      END_STATE();
    case 383:
      if (lookahead == 'n') ADVANCE(455);
      END_STATE();
    case 384:
      if (lookahead == 'o') ADVANCE(249);
      END_STATE();
    case 385:
      if (lookahead == 'o') ADVANCE(470);
      END_STATE();
    case 386:
      if (lookahead == 'o') ADVANCE(471);
      END_STATE();
    case 387:
      if (lookahead == 'o') ADVANCE(399);
      END_STATE();
    case 388:
      if (lookahead == 'o') ADVANCE(459);
      END_STATE();
    case 389:
      if (lookahead == 'o') ADVANCE(358);
      END_STATE();
    case 390:
      if (lookahead == 'o') ADVANCE(366);
      END_STATE();
    case 391:
      if (lookahead == 'o') ADVANCE(463);
      END_STATE();
    case 392:
      if (lookahead == 'o') ADVANCE(367);
      END_STATE();
    case 393:
      if (lookahead == 'o') ADVANCE(319);
      END_STATE();
    case 394:
      if (lookahead == 'o') ADVANCE(319);
      if (lookahead == 's') ADVANCE(390);
      END_STATE();
    case 395:
      if (lookahead == 'o') ADVANCE(431);
      END_STATE();
    case 396:
      if (lookahead == 'o') ADVANCE(468);
      END_STATE();
    case 397:
      if (lookahead == 'p') ADVANCE(568);
      if (lookahead == 'x') ADVANCE(545);
      END_STATE();
    case 398:
      if (lookahead == 'p') ADVANCE(239);
      END_STATE();
    case 399:
      if (lookahead == 'p') ADVANCE(582);
      END_STATE();
    case 400:
      if (lookahead == 'p') ADVANCE(516);
      END_STATE();
    case 401:
      if (lookahead == 'p') ADVANCE(297);
      END_STATE();
    case 402:
      if (lookahead == 'q') ADVANCE(464);
      END_STATE();
    case 403:
      if (lookahead == 'q') ADVANCE(342);
      END_STATE();
    case 404:
      if (lookahead == 'q') ADVANCE(344);
      END_STATE();
    case 405:
      if (lookahead == 'q') ADVANCE(345);
      END_STATE();
    case 406:
      if (lookahead == 'r') ADVANCE(403);
      END_STATE();
    case 407:
      if (lookahead == 'r') ADVANCE(571);
      END_STATE();
    case 408:
      if (lookahead == 'r') ADVANCE(370);
      END_STATE();
    case 409:
      if (lookahead == 'r') ADVANCE(512);
      END_STATE();
    case 410:
      if (lookahead == 'r') ADVANCE(565);
      END_STATE();
    case 411:
      if (lookahead == 'r') ADVANCE(474);
      END_STATE();
    case 412:
      if (lookahead == 'r') ADVANCE(315);
      END_STATE();
    case 413:
      if (lookahead == 'r') ADVANCE(388);
      END_STATE();
    case 414:
      if (lookahead == 'r') ADVANCE(235);
      END_STATE();
    case 415:
      if (lookahead == 'r') ADVANCE(426);
      END_STATE();
    case 416:
      if (lookahead == 'r') ADVANCE(359);
      END_STATE();
    case 417:
      if (lookahead == 'r') ADVANCE(440);
      END_STATE();
    case 418:
      if (lookahead == 'r') ADVANCE(280);
      END_STATE();
    case 419:
      if (lookahead == 'r') ADVANCE(318);
      END_STATE();
    case 420:
      if (lookahead == 'r') ADVANCE(284);
      END_STATE();
    case 421:
      if (lookahead == 'r') ADVANCE(435);
      END_STATE();
    case 422:
      if (lookahead == 's') ADVANCE(465);
      END_STATE();
    case 423:
      if (lookahead == 's') ADVANCE(578);
      END_STATE();
    case 424:
      if (lookahead == 's') ADVANCE(602);
      END_STATE();
    case 425:
      if (lookahead == 's') ADVANCE(262);
      END_STATE();
    case 426:
      if (lookahead == 's') ADVANCE(326);
      END_STATE();
    case 427:
      if (lookahead == 's') ADVANCE(434);
      if (lookahead == 'y') ADVANCE(436);
      END_STATE();
    case 428:
      if (lookahead == 's') ADVANCE(441);
      END_STATE();
    case 429:
      if (lookahead == 's') ADVANCE(314);
      END_STATE();
    case 430:
      if (lookahead == 's') ADVANCE(266);
      END_STATE();
    case 431:
      if (lookahead == 's') ADVANCE(456);
      END_STATE();
    case 432:
      if (lookahead == 's') ADVANCE(454);
      END_STATE();
    case 433:
      if (lookahead == 's') ADVANCE(274);
      END_STATE();
    case 434:
      if (lookahead == 's') ADVANCE(404);
      END_STATE();
    case 435:
      if (lookahead == 's') ADVANCE(296);
      END_STATE();
    case 436:
      if (lookahead == 's') ADVANCE(405);
      END_STATE();
    case 437:
      if (lookahead == 't') ADVANCE(589);
      END_STATE();
    case 438:
      if (lookahead == 't') ADVANCE(562);
      END_STATE();
    case 439:
      if (lookahead == 't') ADVANCE(572);
      END_STATE();
    case 440:
      if (lookahead == 't') ADVANCE(520);
      END_STATE();
    case 441:
      if (lookahead == 't') ADVANCE(561);
      END_STATE();
    case 442:
      if (lookahead == 't') ADVANCE(573);
      END_STATE();
    case 443:
      if (lookahead == 't') ADVANCE(608);
      END_STATE();
    case 444:
      if (lookahead == 't') ADVANCE(527);
      END_STATE();
    case 445:
      if (lookahead == 't') ADVANCE(593);
      END_STATE();
    case 446:
      if (lookahead == 't') ADVANCE(606);
      END_STATE();
    case 447:
      if (lookahead == 't') ADVANCE(539);
      END_STATE();
    case 448:
      if (lookahead == 't') ADVANCE(557);
      END_STATE();
    case 449:
      if (lookahead == 't') ADVANCE(550);
      END_STATE();
    case 450:
      if (lookahead == 't') ADVANCE(276);
      END_STATE();
    case 451:
      if (lookahead == 't') ADVANCE(271);
      END_STATE();
    case 452:
      if (lookahead == 't') ADVANCE(272);
      END_STATE();
    case 453:
      if (lookahead == 't') ADVANCE(288);
      END_STATE();
    case 454:
      if (lookahead == 't') ADVANCE(323);
      END_STATE();
    case 455:
      if (lookahead == 't') ADVANCE(294);
      END_STATE();
    case 456:
      if (lookahead == 't') ADVANCE(311);
      END_STATE();
    case 457:
      if (lookahead == 'u') ADVANCE(350);
      END_STATE();
    case 458:
      if (lookahead == 'u') ADVANCE(244);
      END_STATE();
    case 459:
      if (lookahead == 'u') ADVANCE(400);
      END_STATE();
    case 460:
      if (lookahead == 'u') ADVANCE(374);
      END_STATE();
    case 461:
      if (lookahead == 'u') ADVANCE(357);
      END_STATE();
    case 462:
      if (lookahead == 'u') ADVANCE(265);
      END_STATE();
    case 463:
      if (lookahead == 'u') ADVANCE(433);
      END_STATE();
    case 464:
      if (lookahead == 'u') ADVANCE(293);
      END_STATE();
    case 465:
      if (lookahead == 'v') ADVANCE(609);
      END_STATE();
    case 466:
      if (lookahead == 'v') ADVANCE(551);
      END_STATE();
    case 467:
      if (lookahead == 'v') ADVANCE(267);
      END_STATE();
    case 468:
      if (lookahead == 'v') ADVANCE(268);
      END_STATE();
    case 469:
      if (lookahead == 'v') ADVANCE(270);
      END_STATE();
    case 470:
      if (lookahead == 'w') ADVANCE(524);
      END_STATE();
    case 471:
      if (lookahead == 'w') ADVANCE(299);
      END_STATE();
    case 472:
      if (lookahead == 'x') ADVANCE(398);
      END_STATE();
    case 473:
      if (lookahead == 'x') ADVANCE(446);
      END_STATE();
    case 474:
      if (lookahead == 'y') ADVANCE(596);
      END_STATE();
    case 475:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(475)
      if (lookahead == '"') ADVANCE(626);
      if (lookahead == '#') ADVANCE(917);
      if (lookahead == '\'') ADVANCE(630);
      if (lookahead == '(') ADVANCE(614);
      if (lookahead == ',') ADVANCE(615);
      if (lookahead == '-') ADVANCE(622);
      if (lookahead == '.') ADVANCE(620);
      if (lookahead == '@') ADVANCE(912);
      if (lookahead == 'A') ADVANCE(765);
      if (lookahead == 'C') ADVANCE(720);
      if (lookahead == 'F') ADVANCE(652);
      if (lookahead == 'M') ADVANCE(653);
      if (lookahead == 'N') ADVANCE(761);
      if (lookahead == 'R') ADVANCE(655);
      if (lookahead == 'S') ADVANCE(746);
      if (lookahead == 'T') ADVANCE(735);
      if (lookahead == '_') ADVANCE(645);
      if (lookahead == '`') ADVANCE(646);
      if (lookahead == 'a') ADVANCE(889);
      if (lookahead == 'c') ADVANCE(845);
      if (lookahead == 'f') ADVANCE(647);
      if (lookahead == 'm') ADVANCE(778);
      if (lookahead == 'n') ADVANCE(885);
      if (lookahead == 'r') ADVANCE(780);
      if (lookahead == 's') ADVANCE(648);
      if (lookahead == 't') ADVANCE(860);
      if (lookahead == '|') ADVANCE(925);
      if (lookahead == '}') ADVANCE(619);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(643);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(895);
      END_STATE();
    case 476:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(476)
      if (lookahead == '"') ADVANCE(626);
      if (lookahead == '#') ADVANCE(917);
      if (lookahead == '\'') ADVANCE(630);
      if (lookahead == '(') ADVANCE(614);
      if (lookahead == '-') ADVANCE(622);
      if (lookahead == '.') ADVANCE(620);
      if (lookahead == '@') ADVANCE(912);
      if (lookahead == 'A') ADVANCE(765);
      if (lookahead == 'C') ADVANCE(657);
      if (lookahead == 'F') ADVANCE(652);
      if (lookahead == 'M') ADVANCE(653);
      if (lookahead == 'N') ADVANCE(761);
      if (lookahead == 'S') ADVANCE(746);
      if (lookahead == 'T') ADVANCE(735);
      if (lookahead == '_') ADVANCE(645);
      if (lookahead == '`') ADVANCE(646);
      if (lookahead == 'a') ADVANCE(889);
      if (lookahead == 'c') ADVANCE(782);
      if (lookahead == 'f') ADVANCE(647);
      if (lookahead == 'm') ADVANCE(778);
      if (lookahead == 'n') ADVANCE(885);
      if (lookahead == 's') ADVANCE(648);
      if (lookahead == 't') ADVANCE(860);
      if (lookahead == '|') ADVANCE(925);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(643);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(895);
      END_STATE();
    case 477:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(477)
      if (lookahead == '!') ADVANCE(25);
      if (lookahead == '"') ADVANCE(626);
      if (lookahead == '#') ADVANCE(917);
      if (lookahead == '&') ADVANCE(22);
      if (lookahead == '\'') ADVANCE(630);
      if (lookahead == ')') ADVANCE(616);
      if (lookahead == '*') ADVANCE(898);
      if (lookahead == '+') ADVANCE(624);
      if (lookahead == ',') ADVANCE(615);
      if (lookahead == '-') ADVANCE(622);
      if (lookahead == '.') ADVANCE(620);
      if (lookahead == '/') ADVANCE(899);
      if (lookahead == '<') ADVANCE(904);
      if (lookahead == '=') ADVANCE(27);
      if (lookahead == '>') ADVANCE(902);
      if (lookahead == '?') ADVANCE(29);
      if (lookahead == 'A') ADVANCE(691);
      if (lookahead == 'D') ADVANCE(683);
      if (lookahead == 'F') ADVANCE(651);
      if (lookahead == 'G') ADVANCE(740);
      if (lookahead == 'I') ADVANCE(717);
      if (lookahead == 'J') ADVANCE(728);
      if (lookahead == 'L') ADVANCE(726);
      if (lookahead == 'N') ADVANCE(761);
      if (lookahead == 'R') ADVANCE(681);
      if (lookahead == 'S') ADVANCE(684);
      if (lookahead == 'T') ADVANCE(656);
      if (lookahead == '_') ADVANCE(645);
      if (lookahead == '`') ADVANCE(646);
      if (lookahead == 'a') ADVANCE(816);
      if (lookahead == 'd') ADVANCE(808);
      if (lookahead == 'f') ADVANCE(776);
      if (lookahead == 'g') ADVANCE(865);
      if (lookahead == 'i') ADVANCE(842);
      if (lookahead == 'j') ADVANCE(853);
      if (lookahead == 'l') ADVANCE(851);
      if (lookahead == 'n') ADVANCE(885);
      if (lookahead == 'r') ADVANCE(806);
      if (lookahead == 's') ADVANCE(809);
      if (lookahead == 't') ADVANCE(781);
      if (lookahead == '|') ADVANCE(926);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(643);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(895);
      END_STATE();
    case 478:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(478)
      if (lookahead == '!') ADVANCE(923);
      if (lookahead == '"') ADVANCE(626);
      if (lookahead == '#') ADVANCE(917);
      if (lookahead == '\'') ADVANCE(630);
      if (lookahead == '(') ADVANCE(614);
      if (lookahead == ')') ADVANCE(616);
      if (lookahead == ',') ADVANCE(615);
      if (lookahead == '-') ADVANCE(622);
      if (lookahead == '.') ADVANCE(620);
      if (lookahead == '=') ADVANCE(26);
      if (lookahead == '@') ADVANCE(912);
      if (lookahead == 'F') ADVANCE(652);
      if (lookahead == 'N') ADVANCE(761);
      if (lookahead == 'T') ADVANCE(735);
      if (lookahead == '_') ADVANCE(645);
      if (lookahead == '`') ADVANCE(646);
      if (lookahead == 'f') ADVANCE(647);
      if (lookahead == 'n') ADVANCE(885);
      if (lookahead == 's') ADVANCE(649);
      if (lookahead == 't') ADVANCE(860);
      if (lookahead == '{') ADVANCE(618);
      if (lookahead == '|') ADVANCE(925);
      if (lookahead == '}') ADVANCE(619);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(643);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(895);
      END_STATE();
    case 479:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(479)
      if (lookahead == '!') ADVANCE(25);
      if (lookahead == '"') ADVANCE(626);
      if (lookahead == '#') ADVANCE(917);
      if (lookahead == '&') ADVANCE(22);
      if (lookahead == '\'') ADVANCE(630);
      if (lookahead == '(') ADVANCE(614);
      if (lookahead == ')') ADVANCE(616);
      if (lookahead == '*') ADVANCE(898);
      if (lookahead == '+') ADVANCE(624);
      if (lookahead == ',') ADVANCE(615);
      if (lookahead == '-') ADVANCE(622);
      if (lookahead == '.') ADVANCE(620);
      if (lookahead == '/') ADVANCE(899);
      if (lookahead == '<') ADVANCE(904);
      if (lookahead == '=') ADVANCE(26);
      if (lookahead == '>') ADVANCE(902);
      if (lookahead == '?') ADVANCE(29);
      if (lookahead == 'F') ADVANCE(652);
      if (lookahead == 'N') ADVANCE(761);
      if (lookahead == 'T') ADVANCE(735);
      if (lookahead == '_') ADVANCE(645);
      if (lookahead == '`') ADVANCE(646);
      if (lookahead == 'f') ADVANCE(777);
      if (lookahead == 'n') ADVANCE(885);
      if (lookahead == 't') ADVANCE(860);
      if (lookahead == '|') ADVANCE(926);
      if (lookahead == '}') ADVANCE(619);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(643);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(895);
      END_STATE();
    case 480:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(480)
      if (lookahead == '"') ADVANCE(626);
      if (lookahead == '#') ADVANCE(917);
      if (lookahead == '\'') ADVANCE(630);
      if (lookahead == ')') ADVANCE(616);
      if (lookahead == ',') ADVANCE(615);
      if (lookahead == '-') ADVANCE(622);
      if (lookahead == '.') ADVANCE(620);
      if (lookahead == ':') ADVANCE(594);
      if (lookahead == 'A') ADVANCE(691);
      if (lookahead == 'D') ADVANCE(683);
      if (lookahead == 'F') ADVANCE(651);
      if (lookahead == 'G') ADVANCE(740);
      if (lookahead == 'I') ADVANCE(717);
      if (lookahead == 'J') ADVANCE(728);
      if (lookahead == 'L') ADVANCE(726);
      if (lookahead == 'N') ADVANCE(761);
      if (lookahead == 'R') ADVANCE(681);
      if (lookahead == 'S') ADVANCE(684);
      if (lookahead == 'T') ADVANCE(656);
      if (lookahead == '_') ADVANCE(645);
      if (lookahead == '`') ADVANCE(646);
      if (lookahead == 'a') ADVANCE(816);
      if (lookahead == 'd') ADVANCE(808);
      if (lookahead == 'f') ADVANCE(776);
      if (lookahead == 'g') ADVANCE(865);
      if (lookahead == 'i') ADVANCE(842);
      if (lookahead == 'j') ADVANCE(853);
      if (lookahead == 'l') ADVANCE(851);
      if (lookahead == 'n') ADVANCE(885);
      if (lookahead == 'r') ADVANCE(806);
      if (lookahead == 's') ADVANCE(809);
      if (lookahead == 't') ADVANCE(781);
      if (lookahead == '|') ADVANCE(925);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(643);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(895);
      END_STATE();
    case 481:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(481)
      if (lookahead == '"') ADVANCE(626);
      if (lookahead == '#') ADVANCE(917);
      if (lookahead == '\'') ADVANCE(630);
      if (lookahead == '(') ADVANCE(614);
      if (lookahead == ')') ADVANCE(616);
      if (lookahead == ',') ADVANCE(615);
      if (lookahead == '-') ADVANCE(622);
      if (lookahead == '.') ADVANCE(620);
      if (lookahead == ':') ADVANCE(594);
      if (lookahead == 'F') ADVANCE(652);
      if (lookahead == 'N') ADVANCE(761);
      if (lookahead == 'T') ADVANCE(735);
      if (lookahead == '_') ADVANCE(645);
      if (lookahead == '`') ADVANCE(646);
      if (lookahead == 'f') ADVANCE(777);
      if (lookahead == 'n') ADVANCE(885);
      if (lookahead == 't') ADVANCE(860);
      if (lookahead == '|') ADVANCE(925);
      if (lookahead == '}') ADVANCE(619);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(643);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(895);
      END_STATE();
    case 482:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(482)
      if (lookahead == '#') ADVANCE(917);
      if (lookahead == '+') ADVANCE(624);
      if (lookahead == ',') ADVANCE(615);
      if (lookahead == '-') ADVANCE(622);
      if (lookahead == '`') ADVANCE(646);
      if (lookahead == '{') ADVANCE(618);
      if (lookahead == '|') ADVANCE(925);
      if (lookahead == '}') ADVANCE(619);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(492);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(895);
      END_STATE();
    case 483:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(483)
      if (lookahead == '#') ADVANCE(917);
      if (lookahead == '(') ADVANCE(614);
      if (lookahead == 'F') ADVANCE(738);
      if (lookahead == '`') ADVANCE(646);
      if (lookahead == 'f') ADVANCE(863);
      if (lookahead == '|') ADVANCE(925);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(911);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(895);
      END_STATE();
    case 484:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(484)
      if (lookahead == '#') ADVANCE(917);
      if (lookahead == '-') ADVANCE(28);
      if (lookahead == '.') ADVANCE(620);
      if (lookahead == '_') ADVANCE(645);
      if (lookahead == '`') ADVANCE(646);
      if (lookahead == '|') ADVANCE(925);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(643);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(895);
      END_STATE();
    case 485:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(485)
      if (lookahead == '#') ADVANCE(917);
      if (lookahead == 'S') ADVANCE(699);
      if (lookahead == '`') ADVANCE(646);
      if (lookahead == 's') ADVANCE(824);
      if (lookahead == '|') ADVANCE(925);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(895);
      END_STATE();
    case 486:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(486)
      if (lookahead == '#') ADVANCE(917);
      if (lookahead == ',') ADVANCE(615);
      if (lookahead == '-') ADVANCE(28);
      if (lookahead == '.') ADVANCE(620);
      if (lookahead == ':') ADVANCE(594);
      if (lookahead == '`') ADVANCE(646);
      if (lookahead == '|') ADVANCE(925);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(643);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(895);
      END_STATE();
    case 487:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(636);
      if (lookahead == '"') ADVANCE(635);
      if (lookahead == '#') ADVANCE(917);
      if (lookahead == '|') ADVANCE(925);
      if (lookahead != 0) ADVANCE(634);
      END_STATE();
    case 488:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(488)
      if (lookahead == '#') ADVANCE(917);
      if (lookahead == '`') ADVANCE(646);
      if (lookahead == '|') ADVANCE(925);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(911);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(895);
      END_STATE();
    case 489:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(637);
      if (lookahead == '#') ADVANCE(917);
      if (lookahead == '|') ADVANCE(925);
      if (lookahead != 0) ADVANCE(634);
      END_STATE();
    case 490:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(490)
      if (lookahead == '#') ADVANCE(917);
      if (lookahead == '|') ADVANCE(925);
      if (lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(896);
      END_STATE();
    case 491:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(491)
      if (lookahead == '"') ADVANCE(626);
      if (lookahead == '#') ADVANCE(917);
      if (lookahead == '\'') ADVANCE(630);
      if (lookahead == '(') ADVANCE(614);
      if (lookahead == '-') ADVANCE(622);
      if (lookahead == '.') ADVANCE(620);
      if (lookahead == '@') ADVANCE(912);
      if (lookahead == 'A') ADVANCE(765);
      if (lookahead == 'C') ADVANCE(727);
      if (lookahead == 'F') ADVANCE(652);
      if (lookahead == 'M') ADVANCE(653);
      if (lookahead == 'N') ADVANCE(761);
      if (lookahead == 'S') ADVANCE(746);
      if (lookahead == 'T') ADVANCE(735);
      if (lookahead == '_') ADVANCE(645);
      if (lookahead == '`') ADVANCE(646);
      if (lookahead == 'a') ADVANCE(889);
      if (lookahead == 'c') ADVANCE(852);
      if (lookahead == 'f') ADVANCE(647);
      if (lookahead == 'm') ADVANCE(778);
      if (lookahead == 'n') ADVANCE(885);
      if (lookahead == 's') ADVANCE(648);
      if (lookahead == 't') ADVANCE(860);
      if (lookahead == '|') ADVANCE(925);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(643);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(895);
      END_STATE();
    case 492:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(913);
      END_STATE();
    case 493:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(909);
      END_STATE();
    case 494:
      if (eof) ADVANCE(507);
      if (lookahead == '!') ADVANCE(25);
      if (lookahead == '"') ADVANCE(626);
      if (lookahead == '#') ADVANCE(917);
      if (lookahead == '&') ADVANCE(22);
      if (lookahead == '\'') ADVANCE(630);
      if (lookahead == '(') ADVANCE(614);
      if (lookahead == ')') ADVANCE(616);
      if (lookahead == '*') ADVANCE(898);
      if (lookahead == '+') ADVANCE(624);
      if (lookahead == ',') ADVANCE(615);
      if (lookahead == '-') ADVANCE(622);
      if (lookahead == '.') ADVANCE(620);
      if (lookahead == '/') ADVANCE(899);
      if (lookahead == '<') ADVANCE(904);
      if (lookahead == '=') ADVANCE(612);
      if (lookahead == '>') ADVANCE(902);
      if (lookahead == '?') ADVANCE(29);
      if (lookahead == 'A') ADVANCE(691);
      if (lookahead == 'D') ADVANCE(683);
      if (lookahead == 'F') ADVANCE(650);
      if (lookahead == 'G') ADVANCE(740);
      if (lookahead == 'I') ADVANCE(717);
      if (lookahead == 'J') ADVANCE(728);
      if (lookahead == 'L') ADVANCE(685);
      if (lookahead == 'M') ADVANCE(724);
      if (lookahead == 'N') ADVANCE(761);
      if (lookahead == 'R') ADVANCE(681);
      if (lookahead == 'S') ADVANCE(684);
      if (lookahead == 'T') ADVANCE(656);
      if (lookahead == '_') ADVANCE(645);
      if (lookahead == '`') ADVANCE(646);
      if (lookahead == 'a') ADVANCE(816);
      if (lookahead == 'd') ADVANCE(808);
      if (lookahead == 'f') ADVANCE(775);
      if (lookahead == 'g') ADVANCE(865);
      if (lookahead == 'i') ADVANCE(842);
      if (lookahead == 'j') ADVANCE(853);
      if (lookahead == 'l') ADVANCE(810);
      if (lookahead == 'm') ADVANCE(849);
      if (lookahead == 'n') ADVANCE(885);
      if (lookahead == 'r') ADVANCE(806);
      if (lookahead == 's') ADVANCE(809);
      if (lookahead == 't') ADVANCE(781);
      if (lookahead == '|') ADVANCE(926);
      if (lookahead == '}') ADVANCE(619);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(502)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(643);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(895);
      END_STATE();
    case 495:
      if (eof) ADVANCE(507);
      if (lookahead == '!') ADVANCE(25);
      if (lookahead == '#') ADVANCE(917);
      if (lookahead == '&') ADVANCE(22);
      if (lookahead == '(') ADVANCE(614);
      if (lookahead == ')') ADVANCE(616);
      if (lookahead == '*') ADVANCE(898);
      if (lookahead == '+') ADVANCE(624);
      if (lookahead == ',') ADVANCE(615);
      if (lookahead == '-') ADVANCE(622);
      if (lookahead == '.') ADVANCE(620);
      if (lookahead == '/') ADVANCE(899);
      if (lookahead == ':') ADVANCE(594);
      if (lookahead == '<') ADVANCE(904);
      if (lookahead == '=') ADVANCE(613);
      if (lookahead == '>') ADVANCE(902);
      if (lookahead == '?') ADVANCE(29);
      if (lookahead == 'A') ADVANCE(92);
      if (lookahead == 'D') ADVANCE(74);
      if (lookahead == 'F') ADVANCE(107);
      if (lookahead == 'G') ADVANCE(176);
      if (lookahead == 'I') ADVANCE(153);
      if (lookahead == 'J') ADVANCE(161);
      if (lookahead == 'L') ADVANCE(87);
      if (lookahead == 'M') ADVANCE(154);
      if (lookahead == 'R') ADVANCE(60);
      if (lookahead == 'S') ADVANCE(78);
      if (lookahead == 'T') ADVANCE(915);
      if (lookahead == 'Z') ADVANCE(916);
      if (lookahead == '_') ADVANCE(644);
      if (lookahead == 'a') ADVANCE(301);
      if (lookahead == 'd') ADVANCE(278);
      if (lookahead == 'f') ADVANCE(325);
      if (lookahead == 'g') ADVANCE(413);
      if (lookahead == 'i') ADVANCE(383);
      if (lookahead == 'j') ADVANCE(393);
      if (lookahead == 'l') ADVANCE(295);
      if (lookahead == 'm') ADVANCE(384);
      if (lookahead == 'r') ADVANCE(260);
      if (lookahead == 's') ADVANCE(281);
      if (lookahead == 't') ADVANCE(236);
      if (lookahead == '|') ADVANCE(926);
      if (lookahead == '}') ADVANCE(619);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(503)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(643);
      END_STATE();
    case 496:
      if (eof) ADVANCE(507);
      if (lookahead == '!') ADVANCE(25);
      if (lookahead == '#') ADVANCE(917);
      if (lookahead == '&') ADVANCE(22);
      if (lookahead == ')') ADVANCE(616);
      if (lookahead == '*') ADVANCE(898);
      if (lookahead == '+') ADVANCE(624);
      if (lookahead == ',') ADVANCE(615);
      if (lookahead == '-') ADVANCE(622);
      if (lookahead == '/') ADVANCE(899);
      if (lookahead == '<') ADVANCE(904);
      if (lookahead == '=') ADVANCE(612);
      if (lookahead == '>') ADVANCE(902);
      if (lookahead == '?') ADVANCE(29);
      if (lookahead == 'A') ADVANCE(92);
      if (lookahead == 'D') ADVANCE(74);
      if (lookahead == 'F') ADVANCE(107);
      if (lookahead == 'G') ADVANCE(176);
      if (lookahead == 'I') ADVANCE(153);
      if (lookahead == 'J') ADVANCE(161);
      if (lookahead == 'L') ADVANCE(87);
      if (lookahead == 'M') ADVANCE(154);
      if (lookahead == 'R') ADVANCE(60);
      if (lookahead == 'S') ADVANCE(78);
      if (lookahead == 'T') ADVANCE(36);
      if (lookahead == 'a') ADVANCE(301);
      if (lookahead == 'd') ADVANCE(278);
      if (lookahead == 'f') ADVANCE(325);
      if (lookahead == 'g') ADVANCE(413);
      if (lookahead == 'i') ADVANCE(383);
      if (lookahead == 'j') ADVANCE(393);
      if (lookahead == 'l') ADVANCE(295);
      if (lookahead == 'm') ADVANCE(384);
      if (lookahead == 'r') ADVANCE(260);
      if (lookahead == 's') ADVANCE(281);
      if (lookahead == 't') ADVANCE(236);
      if (lookahead == '|') ADVANCE(926);
      if (lookahead == '}') ADVANCE(619);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(505)
      END_STATE();
    case 497:
      if (eof) ADVANCE(507);
      if (lookahead == '"') ADVANCE(626);
      if (lookahead == '#') ADVANCE(917);
      if (lookahead == '\'') ADVANCE(630);
      if (lookahead == '(') ADVANCE(614);
      if (lookahead == ')') ADVANCE(616);
      if (lookahead == ',') ADVANCE(615);
      if (lookahead == '-') ADVANCE(622);
      if (lookahead == '.') ADVANCE(620);
      if (lookahead == '=') ADVANCE(611);
      if (lookahead == 'A') ADVANCE(92);
      if (lookahead == 'D') ADVANCE(74);
      if (lookahead == 'F') ADVANCE(35);
      if (lookahead == 'G') ADVANCE(176);
      if (lookahead == 'I') ADVANCE(153);
      if (lookahead == 'J') ADVANCE(161);
      if (lookahead == 'L') ADVANCE(87);
      if (lookahead == 'M') ADVANCE(154);
      if (lookahead == 'N') ADVANCE(210);
      if (lookahead == 'R') ADVANCE(60);
      if (lookahead == 'S') ADVANCE(78);
      if (lookahead == 'T') ADVANCE(37);
      if (lookahead == 'W') ADVANCE(103);
      if (lookahead == '_') ADVANCE(644);
      if (lookahead == 'a') ADVANCE(301);
      if (lookahead == 'd') ADVANCE(278);
      if (lookahead == 'f') ADVANCE(228);
      if (lookahead == 'g') ADVANCE(413);
      if (lookahead == 'i') ADVANCE(383);
      if (lookahead == 'j') ADVANCE(393);
      if (lookahead == 'l') ADVANCE(295);
      if (lookahead == 'm') ADVANCE(384);
      if (lookahead == 'n') ADVANCE(457);
      if (lookahead == 'r') ADVANCE(260);
      if (lookahead == 's') ADVANCE(281);
      if (lookahead == 't') ADVANCE(237);
      if (lookahead == 'w') ADVANCE(316);
      if (lookahead == '{') ADVANCE(618);
      if (lookahead == '|') ADVANCE(925);
      if (lookahead == '}') ADVANCE(619);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(506)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(643);
      END_STATE();
    case 498:
      if (eof) ADVANCE(507);
      if (lookahead == '"') ADVANCE(626);
      if (lookahead == '#') ADVANCE(917);
      if (lookahead == '\'') ADVANCE(630);
      if (lookahead == '-') ADVANCE(622);
      if (lookahead == '.') ADVANCE(620);
      if (lookahead == ':') ADVANCE(594);
      if (lookahead == 'A') ADVANCE(691);
      if (lookahead == 'D') ADVANCE(683);
      if (lookahead == 'F') ADVANCE(650);
      if (lookahead == 'G') ADVANCE(740);
      if (lookahead == 'I') ADVANCE(717);
      if (lookahead == 'J') ADVANCE(728);
      if (lookahead == 'L') ADVANCE(685);
      if (lookahead == 'M') ADVANCE(724);
      if (lookahead == 'N') ADVANCE(761);
      if (lookahead == 'R') ADVANCE(681);
      if (lookahead == 'S') ADVANCE(684);
      if (lookahead == 'T') ADVANCE(656);
      if (lookahead == '_') ADVANCE(645);
      if (lookahead == '`') ADVANCE(646);
      if (lookahead == 'a') ADVANCE(816);
      if (lookahead == 'd') ADVANCE(808);
      if (lookahead == 'f') ADVANCE(775);
      if (lookahead == 'g') ADVANCE(865);
      if (lookahead == 'i') ADVANCE(842);
      if (lookahead == 'j') ADVANCE(853);
      if (lookahead == 'l') ADVANCE(810);
      if (lookahead == 'm') ADVANCE(849);
      if (lookahead == 'n') ADVANCE(885);
      if (lookahead == 'r') ADVANCE(806);
      if (lookahead == 's') ADVANCE(809);
      if (lookahead == 't') ADVANCE(781);
      if (lookahead == '|') ADVANCE(925);
      if (lookahead == '}') ADVANCE(619);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(504)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(643);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(895);
      END_STATE();
    case 499:
      if (eof) ADVANCE(507);
      if (lookahead == '"') ADVANCE(14);
      if (lookahead == '#') ADVANCE(917);
      if (lookahead == '\'') ADVANCE(630);
      if (lookahead == '(') ADVANCE(614);
      if (lookahead == ')') ADVANCE(616);
      if (lookahead == ',') ADVANCE(615);
      if (lookahead == '-') ADVANCE(622);
      if (lookahead == '.') ADVANCE(24);
      if (lookahead == ':') ADVANCE(594);
      if (lookahead == '=') ADVANCE(611);
      if (lookahead == '@') ADVANCE(912);
      if (lookahead == 'A') ADVANCE(92);
      if (lookahead == 'C') ADVANCE(183);
      if (lookahead == 'D') ADVANCE(74);
      if (lookahead == 'E') ADVANCE(220);
      if (lookahead == 'F') ADVANCE(106);
      if (lookahead == 'G') ADVANCE(176);
      if (lookahead == 'I') ADVANCE(141);
      if (lookahead == 'J') ADVANCE(162);
      if (lookahead == 'L') ADVANCE(71);
      if (lookahead == 'M') ADVANCE(154);
      if (lookahead == 'P') ADVANCE(170);
      if (lookahead == 'R') ADVANCE(61);
      if (lookahead == 'S') ADVANCE(78);
      if (lookahead == 'T') ADVANCE(33);
      if (lookahead == 'V') ADVANCE(79);
      if (lookahead == 'W') ADVANCE(103);
      if (lookahead == '_') ADVANCE(644);
      if (lookahead == '`') ADVANCE(646);
      if (lookahead == 'a') ADVANCE(301);
      if (lookahead == 'c') ADVANCE(422);
      if (lookahead == 'd') ADVANCE(278);
      if (lookahead == 'e') ADVANCE(472);
      if (lookahead == 'f') ADVANCE(324);
      if (lookahead == 'g') ADVANCE(413);
      if (lookahead == 'i') ADVANCE(368);
      if (lookahead == 'j') ADVANCE(394);
      if (lookahead == 'l') ADVANCE(275);
      if (lookahead == 'm') ADVANCE(384);
      if (lookahead == 'p') ADVANCE(406);
      if (lookahead == 'r') ADVANCE(261);
      if (lookahead == 's') ADVANCE(282);
      if (lookahead == 't') ADVANCE(226);
      if (lookahead == 'v') ADVANCE(283);
      if (lookahead == 'w') ADVANCE(316);
      if (lookahead == '{') ADVANCE(618);
      if (lookahead == '|') ADVANCE(925);
      if (lookahead == '}') ADVANCE(619);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(501)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(643);
      END_STATE();
    case 500:
      if (eof) ADVANCE(507);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(500)
      if (lookahead == '!') ADVANCE(924);
      if (lookahead == '"') ADVANCE(626);
      if (lookahead == '#') ADVANCE(917);
      if (lookahead == '&') ADVANCE(22);
      if (lookahead == '\'') ADVANCE(630);
      if (lookahead == '(') ADVANCE(614);
      if (lookahead == ')') ADVANCE(616);
      if (lookahead == '*') ADVANCE(898);
      if (lookahead == '+') ADVANCE(624);
      if (lookahead == ',') ADVANCE(615);
      if (lookahead == '-') ADVANCE(623);
      if (lookahead == '.') ADVANCE(620);
      if (lookahead == '/') ADVANCE(899);
      if (lookahead == ':') ADVANCE(594);
      if (lookahead == '<') ADVANCE(904);
      if (lookahead == '=') ADVANCE(613);
      if (lookahead == '>') ADVANCE(902);
      if (lookahead == '?') ADVANCE(29);
      if (lookahead == '@') ADVANCE(912);
      if (lookahead == 'A') ADVANCE(91);
      if (lookahead == 'C') ADVANCE(30);
      if (lookahead == 'D') ADVANCE(74);
      if (lookahead == 'E') ADVANCE(220);
      if (lookahead == 'F') ADVANCE(34);
      if (lookahead == 'G') ADVANCE(176);
      if (lookahead == 'I') ADVANCE(134);
      if (lookahead == 'J') ADVANCE(162);
      if (lookahead == 'L') ADVANCE(31);
      if (lookahead == 'M') ADVANCE(32);
      if (lookahead == 'N') ADVANCE(210);
      if (lookahead == 'P') ADVANCE(170);
      if (lookahead == 'R') ADVANCE(38);
      if (lookahead == 'S') ADVANCE(77);
      if (lookahead == 'T') ADVANCE(914);
      if (lookahead == 'V') ADVANCE(79);
      if (lookahead == 'W') ADVANCE(103);
      if (lookahead == 'Z') ADVANCE(916);
      if (lookahead == '_') ADVANCE(644);
      if (lookahead == '`') ADVANCE(646);
      if (lookahead == 'a') ADVANCE(300);
      if (lookahead == 'c') ADVANCE(223);
      if (lookahead == 'd') ADVANCE(278);
      if (lookahead == 'e') ADVANCE(472);
      if (lookahead == 'f') ADVANCE(9);
      if (lookahead == 'g') ADVANCE(413);
      if (lookahead == 'i') ADVANCE(361);
      if (lookahead == 'j') ADVANCE(394);
      if (lookahead == 'l') ADVANCE(224);
      if (lookahead == 'm') ADVANCE(225);
      if (lookahead == 'n') ADVANCE(457);
      if (lookahead == 'p') ADVANCE(406);
      if (lookahead == 'r') ADVANCE(229);
      if (lookahead == 's') ADVANCE(10);
      if (lookahead == 't') ADVANCE(227);
      if (lookahead == 'v') ADVANCE(283);
      if (lookahead == 'w') ADVANCE(316);
      if (lookahead == '{') ADVANCE(618);
      if (lookahead == '|') ADVANCE(926);
      if (lookahead == '}') ADVANCE(619);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(643);
      END_STATE();
    case 501:
      if (eof) ADVANCE(507);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(501)
      if (lookahead == '"') ADVANCE(14);
      if (lookahead == '#') ADVANCE(917);
      if (lookahead == '\'') ADVANCE(630);
      if (lookahead == '(') ADVANCE(614);
      if (lookahead == ')') ADVANCE(616);
      if (lookahead == ',') ADVANCE(615);
      if (lookahead == '-') ADVANCE(622);
      if (lookahead == '.') ADVANCE(24);
      if (lookahead == ':') ADVANCE(594);
      if (lookahead == '=') ADVANCE(611);
      if (lookahead == '@') ADVANCE(912);
      if (lookahead == 'A') ADVANCE(92);
      if (lookahead == 'C') ADVANCE(183);
      if (lookahead == 'D') ADVANCE(74);
      if (lookahead == 'E') ADVANCE(220);
      if (lookahead == 'F') ADVANCE(106);
      if (lookahead == 'G') ADVANCE(176);
      if (lookahead == 'I') ADVANCE(141);
      if (lookahead == 'J') ADVANCE(162);
      if (lookahead == 'L') ADVANCE(71);
      if (lookahead == 'M') ADVANCE(154);
      if (lookahead == 'P') ADVANCE(170);
      if (lookahead == 'R') ADVANCE(61);
      if (lookahead == 'S') ADVANCE(78);
      if (lookahead == 'T') ADVANCE(33);
      if (lookahead == 'V') ADVANCE(79);
      if (lookahead == 'W') ADVANCE(103);
      if (lookahead == '_') ADVANCE(644);
      if (lookahead == '`') ADVANCE(646);
      if (lookahead == 'a') ADVANCE(301);
      if (lookahead == 'c') ADVANCE(422);
      if (lookahead == 'd') ADVANCE(278);
      if (lookahead == 'e') ADVANCE(472);
      if (lookahead == 'f') ADVANCE(324);
      if (lookahead == 'g') ADVANCE(413);
      if (lookahead == 'i') ADVANCE(368);
      if (lookahead == 'j') ADVANCE(394);
      if (lookahead == 'l') ADVANCE(275);
      if (lookahead == 'm') ADVANCE(384);
      if (lookahead == 'p') ADVANCE(406);
      if (lookahead == 'r') ADVANCE(261);
      if (lookahead == 's') ADVANCE(282);
      if (lookahead == 't') ADVANCE(226);
      if (lookahead == 'v') ADVANCE(283);
      if (lookahead == 'w') ADVANCE(316);
      if (lookahead == '{') ADVANCE(618);
      if (lookahead == '|') ADVANCE(925);
      if (lookahead == '}') ADVANCE(619);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(643);
      END_STATE();
    case 502:
      if (eof) ADVANCE(507);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(502)
      if (lookahead == '!') ADVANCE(25);
      if (lookahead == '"') ADVANCE(626);
      if (lookahead == '#') ADVANCE(917);
      if (lookahead == '&') ADVANCE(22);
      if (lookahead == '\'') ADVANCE(630);
      if (lookahead == '(') ADVANCE(614);
      if (lookahead == ')') ADVANCE(616);
      if (lookahead == '*') ADVANCE(898);
      if (lookahead == '+') ADVANCE(624);
      if (lookahead == ',') ADVANCE(615);
      if (lookahead == '-') ADVANCE(622);
      if (lookahead == '.') ADVANCE(620);
      if (lookahead == '/') ADVANCE(899);
      if (lookahead == '<') ADVANCE(904);
      if (lookahead == '=') ADVANCE(612);
      if (lookahead == '>') ADVANCE(902);
      if (lookahead == '?') ADVANCE(29);
      if (lookahead == 'A') ADVANCE(691);
      if (lookahead == 'D') ADVANCE(683);
      if (lookahead == 'F') ADVANCE(650);
      if (lookahead == 'G') ADVANCE(740);
      if (lookahead == 'I') ADVANCE(717);
      if (lookahead == 'J') ADVANCE(728);
      if (lookahead == 'L') ADVANCE(685);
      if (lookahead == 'M') ADVANCE(724);
      if (lookahead == 'N') ADVANCE(761);
      if (lookahead == 'R') ADVANCE(681);
      if (lookahead == 'S') ADVANCE(684);
      if (lookahead == 'T') ADVANCE(656);
      if (lookahead == '_') ADVANCE(645);
      if (lookahead == '`') ADVANCE(646);
      if (lookahead == 'a') ADVANCE(816);
      if (lookahead == 'd') ADVANCE(808);
      if (lookahead == 'f') ADVANCE(775);
      if (lookahead == 'g') ADVANCE(865);
      if (lookahead == 'i') ADVANCE(842);
      if (lookahead == 'j') ADVANCE(853);
      if (lookahead == 'l') ADVANCE(810);
      if (lookahead == 'm') ADVANCE(849);
      if (lookahead == 'n') ADVANCE(885);
      if (lookahead == 'r') ADVANCE(806);
      if (lookahead == 's') ADVANCE(809);
      if (lookahead == 't') ADVANCE(781);
      if (lookahead == '|') ADVANCE(926);
      if (lookahead == '}') ADVANCE(619);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(643);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(895);
      END_STATE();
    case 503:
      if (eof) ADVANCE(507);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(503)
      if (lookahead == '!') ADVANCE(25);
      if (lookahead == '#') ADVANCE(917);
      if (lookahead == '&') ADVANCE(22);
      if (lookahead == '(') ADVANCE(614);
      if (lookahead == ')') ADVANCE(616);
      if (lookahead == '*') ADVANCE(898);
      if (lookahead == '+') ADVANCE(624);
      if (lookahead == ',') ADVANCE(615);
      if (lookahead == '-') ADVANCE(622);
      if (lookahead == '.') ADVANCE(620);
      if (lookahead == '/') ADVANCE(899);
      if (lookahead == ':') ADVANCE(594);
      if (lookahead == '<') ADVANCE(904);
      if (lookahead == '=') ADVANCE(613);
      if (lookahead == '>') ADVANCE(902);
      if (lookahead == '?') ADVANCE(29);
      if (lookahead == 'A') ADVANCE(92);
      if (lookahead == 'D') ADVANCE(74);
      if (lookahead == 'F') ADVANCE(107);
      if (lookahead == 'G') ADVANCE(176);
      if (lookahead == 'I') ADVANCE(153);
      if (lookahead == 'J') ADVANCE(161);
      if (lookahead == 'L') ADVANCE(87);
      if (lookahead == 'M') ADVANCE(154);
      if (lookahead == 'R') ADVANCE(60);
      if (lookahead == 'S') ADVANCE(78);
      if (lookahead == 'T') ADVANCE(915);
      if (lookahead == 'Z') ADVANCE(916);
      if (lookahead == '_') ADVANCE(644);
      if (lookahead == 'a') ADVANCE(301);
      if (lookahead == 'd') ADVANCE(278);
      if (lookahead == 'f') ADVANCE(325);
      if (lookahead == 'g') ADVANCE(413);
      if (lookahead == 'i') ADVANCE(383);
      if (lookahead == 'j') ADVANCE(393);
      if (lookahead == 'l') ADVANCE(295);
      if (lookahead == 'm') ADVANCE(384);
      if (lookahead == 'r') ADVANCE(260);
      if (lookahead == 's') ADVANCE(281);
      if (lookahead == 't') ADVANCE(236);
      if (lookahead == '|') ADVANCE(926);
      if (lookahead == '}') ADVANCE(619);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(643);
      END_STATE();
    case 504:
      if (eof) ADVANCE(507);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(504)
      if (lookahead == '"') ADVANCE(626);
      if (lookahead == '#') ADVANCE(917);
      if (lookahead == '\'') ADVANCE(630);
      if (lookahead == '-') ADVANCE(622);
      if (lookahead == '.') ADVANCE(620);
      if (lookahead == ':') ADVANCE(594);
      if (lookahead == 'A') ADVANCE(691);
      if (lookahead == 'D') ADVANCE(683);
      if (lookahead == 'F') ADVANCE(650);
      if (lookahead == 'G') ADVANCE(740);
      if (lookahead == 'I') ADVANCE(717);
      if (lookahead == 'J') ADVANCE(728);
      if (lookahead == 'L') ADVANCE(685);
      if (lookahead == 'M') ADVANCE(724);
      if (lookahead == 'N') ADVANCE(761);
      if (lookahead == 'R') ADVANCE(681);
      if (lookahead == 'S') ADVANCE(684);
      if (lookahead == 'T') ADVANCE(656);
      if (lookahead == '_') ADVANCE(645);
      if (lookahead == '`') ADVANCE(646);
      if (lookahead == 'a') ADVANCE(816);
      if (lookahead == 'd') ADVANCE(808);
      if (lookahead == 'f') ADVANCE(775);
      if (lookahead == 'g') ADVANCE(865);
      if (lookahead == 'i') ADVANCE(842);
      if (lookahead == 'j') ADVANCE(853);
      if (lookahead == 'l') ADVANCE(810);
      if (lookahead == 'm') ADVANCE(849);
      if (lookahead == 'n') ADVANCE(885);
      if (lookahead == 'r') ADVANCE(806);
      if (lookahead == 's') ADVANCE(809);
      if (lookahead == 't') ADVANCE(781);
      if (lookahead == '|') ADVANCE(925);
      if (lookahead == '}') ADVANCE(619);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(643);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(895);
      END_STATE();
    case 505:
      if (eof) ADVANCE(507);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(505)
      if (lookahead == '!') ADVANCE(25);
      if (lookahead == '#') ADVANCE(917);
      if (lookahead == '&') ADVANCE(22);
      if (lookahead == ')') ADVANCE(616);
      if (lookahead == '*') ADVANCE(898);
      if (lookahead == '+') ADVANCE(624);
      if (lookahead == ',') ADVANCE(615);
      if (lookahead == '-') ADVANCE(622);
      if (lookahead == '/') ADVANCE(899);
      if (lookahead == '<') ADVANCE(904);
      if (lookahead == '=') ADVANCE(612);
      if (lookahead == '>') ADVANCE(902);
      if (lookahead == '?') ADVANCE(29);
      if (lookahead == 'A') ADVANCE(92);
      if (lookahead == 'D') ADVANCE(74);
      if (lookahead == 'F') ADVANCE(107);
      if (lookahead == 'G') ADVANCE(176);
      if (lookahead == 'I') ADVANCE(153);
      if (lookahead == 'J') ADVANCE(161);
      if (lookahead == 'L') ADVANCE(87);
      if (lookahead == 'M') ADVANCE(154);
      if (lookahead == 'R') ADVANCE(60);
      if (lookahead == 'S') ADVANCE(78);
      if (lookahead == 'T') ADVANCE(36);
      if (lookahead == 'a') ADVANCE(301);
      if (lookahead == 'd') ADVANCE(278);
      if (lookahead == 'f') ADVANCE(325);
      if (lookahead == 'g') ADVANCE(413);
      if (lookahead == 'i') ADVANCE(383);
      if (lookahead == 'j') ADVANCE(393);
      if (lookahead == 'l') ADVANCE(295);
      if (lookahead == 'm') ADVANCE(384);
      if (lookahead == 'r') ADVANCE(260);
      if (lookahead == 's') ADVANCE(281);
      if (lookahead == 't') ADVANCE(236);
      if (lookahead == '|') ADVANCE(926);
      if (lookahead == '}') ADVANCE(619);
      END_STATE();
    case 506:
      if (eof) ADVANCE(507);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(506)
      if (lookahead == '"') ADVANCE(626);
      if (lookahead == '#') ADVANCE(917);
      if (lookahead == '\'') ADVANCE(630);
      if (lookahead == '(') ADVANCE(614);
      if (lookahead == ')') ADVANCE(616);
      if (lookahead == ',') ADVANCE(615);
      if (lookahead == '-') ADVANCE(622);
      if (lookahead == '.') ADVANCE(620);
      if (lookahead == '=') ADVANCE(611);
      if (lookahead == 'A') ADVANCE(92);
      if (lookahead == 'D') ADVANCE(74);
      if (lookahead == 'F') ADVANCE(35);
      if (lookahead == 'G') ADVANCE(176);
      if (lookahead == 'I') ADVANCE(153);
      if (lookahead == 'J') ADVANCE(161);
      if (lookahead == 'L') ADVANCE(87);
      if (lookahead == 'M') ADVANCE(154);
      if (lookahead == 'N') ADVANCE(210);
      if (lookahead == 'R') ADVANCE(60);
      if (lookahead == 'S') ADVANCE(78);
      if (lookahead == 'T') ADVANCE(37);
      if (lookahead == 'W') ADVANCE(103);
      if (lookahead == '_') ADVANCE(644);
      if (lookahead == 'a') ADVANCE(301);
      if (lookahead == 'd') ADVANCE(278);
      if (lookahead == 'f') ADVANCE(228);
      if (lookahead == 'g') ADVANCE(413);
      if (lookahead == 'i') ADVANCE(383);
      if (lookahead == 'j') ADVANCE(393);
      if (lookahead == 'l') ADVANCE(295);
      if (lookahead == 'm') ADVANCE(384);
      if (lookahead == 'n') ADVANCE(457);
      if (lookahead == 'r') ADVANCE(260);
      if (lookahead == 's') ADVANCE(281);
      if (lookahead == 't') ADVANCE(237);
      if (lookahead == 'w') ADVANCE(316);
      if (lookahead == '{') ADVANCE(618);
      if (lookahead == '|') ADVANCE(925);
      if (lookahead == '}') ADVANCE(619);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(643);
      END_STATE();
    case 507:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 508:
      ACCEPT_TOKEN(sym_keyword_from);
      if (lookahead == '_') ADVANCE(205);
      END_STATE();
    case 509:
      ACCEPT_TOKEN(sym_keyword_from);
      if (lookahead == '_') ADVANCE(450);
      END_STATE();
    case 510:
      ACCEPT_TOKEN(sym_keyword_from);
      if (lookahead == '_') ADVANCE(758);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(895);
      END_STATE();
    case 511:
      ACCEPT_TOKEN(sym_keyword_from);
      if (lookahead == '_') ADVANCE(882);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(895);
      END_STATE();
    case 512:
      ACCEPT_TOKEN(sym_keyword_filter);
      END_STATE();
    case 513:
      ACCEPT_TOKEN(sym_keyword_filter);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(895);
      END_STATE();
    case 514:
      ACCEPT_TOKEN(sym_keyword_derive);
      END_STATE();
    case 515:
      ACCEPT_TOKEN(sym_keyword_derive);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(895);
      END_STATE();
    case 516:
      ACCEPT_TOKEN(sym_keyword_group);
      END_STATE();
    case 517:
      ACCEPT_TOKEN(sym_keyword_group);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(895);
      END_STATE();
    case 518:
      ACCEPT_TOKEN(sym_keyword_aggregate);
      END_STATE();
    case 519:
      ACCEPT_TOKEN(sym_keyword_aggregate);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(895);
      END_STATE();
    case 520:
      ACCEPT_TOKEN(sym_keyword_sort);
      END_STATE();
    case 521:
      ACCEPT_TOKEN(sym_keyword_sort);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(895);
      END_STATE();
    case 522:
      ACCEPT_TOKEN(sym_keyword_take);
      END_STATE();
    case 523:
      ACCEPT_TOKEN(sym_keyword_take);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(895);
      END_STATE();
    case 524:
      ACCEPT_TOKEN(sym_keyword_window);
      END_STATE();
    case 525:
      ACCEPT_TOKEN(sym_keyword_join);
      END_STATE();
    case 526:
      ACCEPT_TOKEN(sym_keyword_join);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(895);
      END_STATE();
    case 527:
      ACCEPT_TOKEN(sym_keyword_select);
      END_STATE();
    case 528:
      ACCEPT_TOKEN(sym_keyword_select);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(895);
      END_STATE();
    case 529:
      ACCEPT_TOKEN(sym_keyword_true);
      END_STATE();
    case 530:
      ACCEPT_TOKEN(sym_keyword_true);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(895);
      END_STATE();
    case 531:
      ACCEPT_TOKEN(sym_keyword_false);
      END_STATE();
    case 532:
      ACCEPT_TOKEN(sym_keyword_false);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(895);
      END_STATE();
    case 533:
      ACCEPT_TOKEN(sym_keyword_case);
      END_STATE();
    case 534:
      ACCEPT_TOKEN(sym_keyword_case);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(895);
      END_STATE();
    case 535:
      ACCEPT_TOKEN(sym_keyword_append);
      END_STATE();
    case 536:
      ACCEPT_TOKEN(sym_keyword_append);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(895);
      END_STATE();
    case 537:
      ACCEPT_TOKEN(sym_keyword_remove);
      END_STATE();
    case 538:
      ACCEPT_TOKEN(sym_keyword_remove);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(895);
      END_STATE();
    case 539:
      ACCEPT_TOKEN(sym_keyword_intersect);
      END_STATE();
    case 540:
      ACCEPT_TOKEN(sym_keyword_intersect);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(895);
      END_STATE();
    case 541:
      ACCEPT_TOKEN(sym_keyword_average);
      END_STATE();
    case 542:
      ACCEPT_TOKEN(sym_keyword_average);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(895);
      END_STATE();
    case 543:
      ACCEPT_TOKEN(sym_keyword_min);
      END_STATE();
    case 544:
      ACCEPT_TOKEN(sym_keyword_min);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(895);
      END_STATE();
    case 545:
      ACCEPT_TOKEN(sym_keyword_max);
      END_STATE();
    case 546:
      ACCEPT_TOKEN(sym_keyword_max);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(895);
      END_STATE();
    case 547:
      ACCEPT_TOKEN(sym_keyword_count);
      if (lookahead == '_') ADVANCE(663);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(895);
      END_STATE();
    case 548:
      ACCEPT_TOKEN(sym_keyword_count);
      if (lookahead == '_') ADVANCE(788);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(895);
      END_STATE();
    case 549:
      ACCEPT_TOKEN(sym_keyword_count);
      if (lookahead == '_') ADVANCE(54);
      END_STATE();
    case 550:
      ACCEPT_TOKEN(sym_keyword_count);
      if (lookahead == '_') ADVANCE(255);
      END_STATE();
    case 551:
      ACCEPT_TOKEN(sym_keyword_stddev);
      END_STATE();
    case 552:
      ACCEPT_TOKEN(sym_keyword_stddev);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(895);
      END_STATE();
    case 553:
      ACCEPT_TOKEN(sym_keyword_avg);
      END_STATE();
    case 554:
      ACCEPT_TOKEN(sym_keyword_avg);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(895);
      END_STATE();
    case 555:
      ACCEPT_TOKEN(sym_keyword_sum);
      END_STATE();
    case 556:
      ACCEPT_TOKEN(sym_keyword_sum);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(895);
      END_STATE();
    case 557:
      ACCEPT_TOKEN(sym_keyword_count_distinct);
      END_STATE();
    case 558:
      ACCEPT_TOKEN(sym_keyword_count_distinct);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(895);
      END_STATE();
    case 559:
      ACCEPT_TOKEN(sym_keyword_lag);
      END_STATE();
    case 560:
      ACCEPT_TOKEN(sym_keyword_lead);
      END_STATE();
    case 561:
      ACCEPT_TOKEN(sym_keyword_first);
      END_STATE();
    case 562:
      ACCEPT_TOKEN(sym_keyword_last);
      END_STATE();
    case 563:
      ACCEPT_TOKEN(sym_keyword_rank);
      END_STATE();
    case 564:
      ACCEPT_TOKEN(sym_keyword_rank);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(895);
      END_STATE();
    case 565:
      ACCEPT_TOKEN(sym_keyword_row_number);
      END_STATE();
    case 566:
      ACCEPT_TOKEN(sym_keyword_round);
      END_STATE();
    case 567:
      ACCEPT_TOKEN(sym_keyword_all);
      END_STATE();
    case 568:
      ACCEPT_TOKEN(sym_keyword_map);
      END_STATE();
    case 569:
      ACCEPT_TOKEN(sym_keyword_side);
      END_STATE();
    case 570:
      ACCEPT_TOKEN(sym_keyword_side);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(895);
      END_STATE();
    case 571:
      ACCEPT_TOKEN(sym_keyword_inner);
      END_STATE();
    case 572:
      ACCEPT_TOKEN(sym_keyword_left);
      END_STATE();
    case 573:
      ACCEPT_TOKEN(sym_keyword_right);
      END_STATE();
    case 574:
      ACCEPT_TOKEN(sym_keyword_full);
      END_STATE();
    case 575:
      ACCEPT_TOKEN(sym_keyword_in);
      if (lookahead == 'N') ADVANCE(81);
      if (lookahead == 'T') ADVANCE(82);
      END_STATE();
    case 576:
      ACCEPT_TOKEN(sym_keyword_in);
      if (lookahead == 'n') ADVANCE(286);
      if (lookahead == 't') ADVANCE(287);
      END_STATE();
    case 577:
      ACCEPT_TOKEN(sym_keyword_rolling);
      END_STATE();
    case 578:
      ACCEPT_TOKEN(sym_keyword_rows);
      END_STATE();
    case 579:
      ACCEPT_TOKEN(sym_keyword_expanding);
      END_STATE();
    case 580:
      ACCEPT_TOKEN(sym_keyword_null);
      END_STATE();
    case 581:
      ACCEPT_TOKEN(sym_keyword_null);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(895);
      END_STATE();
    case 582:
      ACCEPT_TOKEN(sym_keyword_loop);
      END_STATE();
    case 583:
      ACCEPT_TOKEN(sym_keyword_loop);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(895);
      END_STATE();
    case 584:
      ACCEPT_TOKEN(sym_keyword_internal);
      END_STATE();
    case 585:
      ACCEPT_TOKEN(sym_keyword_mod);
      END_STATE();
    case 586:
      ACCEPT_TOKEN(sym_keyword_mod);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(895);
      END_STATE();
    case 587:
      ACCEPT_TOKEN(sym_keyword_func);
      END_STATE();
    case 588:
      ACCEPT_TOKEN(sym_keyword_func);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(895);
      END_STATE();
    case 589:
      ACCEPT_TOKEN(sym_keyword_let);
      END_STATE();
    case 590:
      ACCEPT_TOKEN(sym_keyword_let);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(895);
      END_STATE();
    case 591:
      ACCEPT_TOKEN(sym_keyword_prql);
      END_STATE();
    case 592:
      ACCEPT_TOKEN(sym_keyword_version);
      END_STATE();
    case 593:
      ACCEPT_TOKEN(sym_keyword_target);
      END_STATE();
    case 594:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 595:
      ACCEPT_TOKEN(anon_sym_sql_DOTansi);
      END_STATE();
    case 596:
      ACCEPT_TOKEN(anon_sym_sql_DOTbigquery);
      END_STATE();
    case 597:
      ACCEPT_TOKEN(anon_sym_sql_DOTclickhouse);
      END_STATE();
    case 598:
      ACCEPT_TOKEN(anon_sym_sql_DOTgeneric);
      END_STATE();
    case 599:
      ACCEPT_TOKEN(anon_sym_sql_DOThive);
      END_STATE();
    case 600:
      ACCEPT_TOKEN(anon_sym_sql_DOTmssql);
      END_STATE();
    case 601:
      ACCEPT_TOKEN(anon_sym_sql_DOTmysql);
      END_STATE();
    case 602:
      ACCEPT_TOKEN(anon_sym_sql_DOTpostgres);
      END_STATE();
    case 603:
      ACCEPT_TOKEN(anon_sym_sql_DOTsqlite);
      END_STATE();
    case 604:
      ACCEPT_TOKEN(anon_sym_sql_DOTsnowflake);
      END_STATE();
    case 605:
      ACCEPT_TOKEN(anon_sym_sql_DOTduckdb);
      END_STATE();
    case 606:
      ACCEPT_TOKEN(sym_keyword_from_text);
      END_STATE();
    case 607:
      ACCEPT_TOKEN(sym_keyword_from_text);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(895);
      END_STATE();
    case 608:
      ACCEPT_TOKEN(sym_keyword_format);
      END_STATE();
    case 609:
      ACCEPT_TOKEN(sym_keyword_csv);
      END_STATE();
    case 610:
      ACCEPT_TOKEN(sym_keyword_json);
      END_STATE();
    case 611:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 612:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead == '=') ADVANCE(625);
      END_STATE();
    case 613:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead == '=') ADVANCE(625);
      if (lookahead == '>') ADVANCE(621);
      END_STATE();
    case 614:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 615:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 616:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 617:
      ACCEPT_TOKEN(anon_sym_DASH_GT);
      END_STATE();
    case 618:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 619:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 620:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 621:
      ACCEPT_TOKEN(anon_sym_EQ_GT);
      END_STATE();
    case 622:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 623:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '>') ADVANCE(617);
      END_STATE();
    case 624:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 625:
      ACCEPT_TOKEN(anon_sym_EQ_EQ);
      END_STATE();
    case 626:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 627:
      ACCEPT_TOKEN(aux_sym__double_quote_string_token1);
      if (lookahead == '#') ADVANCE(919);
      if (lookahead == '|') ADVANCE(928);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(628);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(629);
      END_STATE();
    case 628:
      ACCEPT_TOKEN(aux_sym__double_quote_string_token1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(628);
      if (lookahead == '#') ADVANCE(919);
      if (lookahead == '|') ADVANCE(928);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(629);
      END_STATE();
    case 629:
      ACCEPT_TOKEN(aux_sym__double_quote_string_token1);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(629);
      END_STATE();
    case 630:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 631:
      ACCEPT_TOKEN(aux_sym__single_quote_string_token1);
      if (lookahead == '#') ADVANCE(920);
      if (lookahead == '|') ADVANCE(929);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(632);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(633);
      END_STATE();
    case 632:
      ACCEPT_TOKEN(aux_sym__single_quote_string_token1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(632);
      if (lookahead == '#') ADVANCE(920);
      if (lookahead == '|') ADVANCE(929);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(633);
      END_STATE();
    case 633:
      ACCEPT_TOKEN(aux_sym__single_quote_string_token1);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(633);
      END_STATE();
    case 634:
      ACCEPT_TOKEN(aux_sym__inner_triple_quotes_token1);
      END_STATE();
    case 635:
      ACCEPT_TOKEN(aux_sym__inner_triple_quotes_token1);
      if (lookahead == '"') ADVANCE(13);
      END_STATE();
    case 636:
      ACCEPT_TOKEN(aux_sym__inner_triple_quotes_token1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(636);
      if (lookahead == '"') ADVANCE(635);
      if (lookahead == '#') ADVANCE(917);
      if (lookahead == '|') ADVANCE(925);
      if (lookahead != 0) ADVANCE(634);
      END_STATE();
    case 637:
      ACCEPT_TOKEN(aux_sym__inner_triple_quotes_token1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(637);
      if (lookahead == '#') ADVANCE(917);
      if (lookahead == '|') ADVANCE(925);
      if (lookahead != 0) ADVANCE(634);
      END_STATE();
    case 638:
      ACCEPT_TOKEN(anon_sym_DQUOTE_DQUOTE_DQUOTE);
      END_STATE();
    case 639:
      ACCEPT_TOKEN(anon_sym_f_DQUOTE);
      if (lookahead == '"') ADVANCE(11);
      END_STATE();
    case 640:
      ACCEPT_TOKEN(anon_sym_f_DQUOTE_DQUOTE_DQUOTE);
      END_STATE();
    case 641:
      ACCEPT_TOKEN(anon_sym_s_DQUOTE);
      if (lookahead == '"') ADVANCE(12);
      END_STATE();
    case 642:
      ACCEPT_TOKEN(anon_sym_s_DQUOTE_DQUOTE_DQUOTE);
      END_STATE();
    case 643:
      ACCEPT_TOKEN(sym__natural_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(643);
      END_STATE();
    case 644:
      ACCEPT_TOKEN(anon_sym__);
      END_STATE();
    case 645:
      ACCEPT_TOKEN(anon_sym__);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(895);
      END_STATE();
    case 646:
      ACCEPT_TOKEN(anon_sym_BQUOTE);
      END_STATE();
    case 647:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '"') ADVANCE(639);
      if (lookahead == 'a') ADVANCE(827);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(895);
      END_STATE();
    case 648:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '"') ADVANCE(641);
      if (lookahead == 't') ADVANCE(791);
      if (lookahead == 'u') ADVANCE(832);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(895);
      END_STATE();
    case 649:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '"') ADVANCE(641);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(895);
      END_STATE();
    case 650:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'A') ADVANCE(702);
      if (lookahead == 'I') ADVANCE(706);
      if (lookahead == 'R') ADVANCE(722);
      if (lookahead == 'U') ADVANCE(716);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(895);
      END_STATE();
    case 651:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'A') ADVANCE(702);
      if (lookahead == 'I') ADVANCE(706);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(895);
      END_STATE();
    case 652:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'A') ADVANCE(702);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(895);
      END_STATE();
    case 653:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'A') ADVANCE(769);
      if (lookahead == 'I') ADVANCE(711);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(895);
      END_STATE();
    case 654:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'A') ADVANCE(693);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(895);
      END_STATE();
    case 655:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'A') ADVANCE(712);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(895);
      END_STATE();
    case 656:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'A') ADVANCE(701);
      if (lookahead == 'R') ADVANCE(760);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(895);
      END_STATE();
    case 657:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'A') ADVANCE(744);
      if (lookahead == 'O') ADVANCE(764);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(895);
      END_STATE();
    case 658:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'A') ADVANCE(759);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(895);
      END_STATE();
    case 659:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'C') ADVANCE(588);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(895);
      END_STATE();
    case 660:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'C') ADVANCE(748);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(895);
      END_STATE();
    case 661:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'C') ADVANCE(751);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(895);
      END_STATE();
    case 662:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'C') ADVANCE(753);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(895);
      END_STATE();
    case 663:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'D') ADVANCE(695);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(895);
      END_STATE();
    case 664:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'D') ADVANCE(586);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(895);
      END_STATE();
    case 665:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'D') ADVANCE(536);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(895);
      END_STATE();
    case 666:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'D') ADVANCE(667);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(895);
      END_STATE();
    case 667:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'D') ADVANCE(678);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(895);
      END_STATE();
    case 668:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'D') ADVANCE(677);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(895);
      END_STATE();
    case 669:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'E') ADVANCE(530);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(895);
      END_STATE();
    case 670:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'E') ADVANCE(532);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(895);
      END_STATE();
    case 671:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'E') ADVANCE(542);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(895);
      END_STATE();
    case 672:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'E') ADVANCE(523);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(895);
      END_STATE();
    case 673:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'E') ADVANCE(515);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(895);
      END_STATE();
    case 674:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'E') ADVANCE(538);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(895);
      END_STATE();
    case 675:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'E') ADVANCE(519);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(895);
      END_STATE();
    case 676:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'E') ADVANCE(534);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(895);
      END_STATE();
    case 677:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'E') ADVANCE(570);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(895);
      END_STATE();
    case 678:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'E') ADVANCE(766);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(895);
      END_STATE();
    case 679:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'E') ADVANCE(734);
      if (lookahead == 'G') ADVANCE(554);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(895);
      END_STATE();
    case 680:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'E') ADVANCE(770);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(895);
      END_STATE();
    case 681:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'E') ADVANCE(710);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(895);
      END_STATE();
    case 682:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'E') ADVANCE(692);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(895);
      END_STATE();
    case 683:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'E') ADVANCE(736);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(895);
      END_STATE();
    case 684:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'E') ADVANCE(705);
      if (lookahead == 'O') ADVANCE(737);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(895);
      END_STATE();
    case 685:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'E') ADVANCE(749);
      if (lookahead == 'O') ADVANCE(721);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(895);
      END_STATE();
    case 686:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'E') ADVANCE(741);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(895);
      END_STATE();
    case 687:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'E') ADVANCE(733);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(895);
      END_STATE();
    case 688:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'E') ADVANCE(718);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(895);
      END_STATE();
    case 689:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'E') ADVANCE(661);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(895);
      END_STATE();
    case 690:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'E') ADVANCE(662);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(895);
      END_STATE();
    case 691:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'G') ADVANCE(694);
      if (lookahead == 'P') ADVANCE(732);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(895);
      END_STATE();
    case 692:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'G') ADVANCE(658);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(895);
      END_STATE();
    case 693:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'G') ADVANCE(671);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(895);
      END_STATE();
    case 694:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'G') ADVANCE(739);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(895);
      END_STATE();
    case 695:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'I') ADVANCE(743);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(895);
      END_STATE();
    case 696:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'I') ADVANCE(767);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(895);
      END_STATE();
    case 697:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'I') ADVANCE(714);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(895);
      END_STATE();
    case 698:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'I') ADVANCE(715);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(895);
      END_STATE();
    case 699:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'I') ADVANCE(668);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(895);
      END_STATE();
    case 700:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'K') ADVANCE(564);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(895);
      END_STATE();
    case 701:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'K') ADVANCE(672);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(895);
      END_STATE();
    case 702:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'L') ADVANCE(742);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(895);
      END_STATE();
    case 703:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'L') ADVANCE(581);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(895);
      END_STATE();
    case 704:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'L') ADVANCE(703);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(895);
      END_STATE();
    case 705:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'L') ADVANCE(689);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(895);
      END_STATE();
    case 706:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'L') ADVANCE(757);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(895);
      END_STATE();
    case 707:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'M') ADVANCE(556);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(895);
      END_STATE();
    case 708:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'M') ADVANCE(510);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(895);
      END_STATE();
    case 709:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'M') ADVANCE(773);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(895);
      END_STATE();
    case 710:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'M') ADVANCE(729);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(895);
      END_STATE();
    case 711:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'N') ADVANCE(544);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(895);
      END_STATE();
    case 712:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'N') ADVANCE(700);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(895);
      END_STATE();
    case 713:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'N') ADVANCE(747);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(895);
      END_STATE();
    case 714:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'N') ADVANCE(660);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(895);
      END_STATE();
    case 715:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'N') ADVANCE(526);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(895);
      END_STATE();
    case 716:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'N') ADVANCE(659);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(895);
      END_STATE();
    case 717:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'N') ADVANCE(756);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(895);
      END_STATE();
    case 718:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'N') ADVANCE(665);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(895);
      END_STATE();
    case 719:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'N') ADVANCE(754);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(895);
      END_STATE();
    case 720:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'O') ADVANCE(762);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(895);
      END_STATE();
    case 721:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'O') ADVANCE(730);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(895);
      END_STATE();
    case 722:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'O') ADVANCE(708);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(895);
      END_STATE();
    case 723:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'O') ADVANCE(763);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(895);
      END_STATE();
    case 724:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'O') ADVANCE(664);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(895);
      END_STATE();
    case 725:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'O') ADVANCE(709);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(895);
      END_STATE();
    case 726:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'O') ADVANCE(721);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(895);
      END_STATE();
    case 727:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'O') ADVANCE(764);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(895);
      END_STATE();
    case 728:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'O') ADVANCE(698);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(895);
      END_STATE();
    case 729:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'O') ADVANCE(768);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(895);
      END_STATE();
    case 730:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'P') ADVANCE(583);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(895);
      END_STATE();
    case 731:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'P') ADVANCE(517);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(895);
      END_STATE();
    case 732:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'P') ADVANCE(688);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(895);
      END_STATE();
    case 733:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'R') ADVANCE(513);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(895);
      END_STATE();
    case 734:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'R') ADVANCE(654);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(895);
      END_STATE();
    case 735:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'R') ADVANCE(760);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(895);
      END_STATE();
    case 736:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'R') ADVANCE(696);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(895);
      END_STATE();
    case 737:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'R') ADVANCE(750);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(895);
      END_STATE();
    case 738:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'R') ADVANCE(725);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(895);
      END_STATE();
    case 739:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'R') ADVANCE(682);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(895);
      END_STATE();
    case 740:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'R') ADVANCE(723);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(895);
      END_STATE();
    case 741:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'R') ADVANCE(745);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(895);
      END_STATE();
    case 742:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'S') ADVANCE(670);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(895);
      END_STATE();
    case 743:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'S') ADVANCE(755);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(895);
      END_STATE();
    case 744:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'S') ADVANCE(676);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(895);
      END_STATE();
    case 745:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'S') ADVANCE(690);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(895);
      END_STATE();
    case 746:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'T') ADVANCE(666);
      if (lookahead == 'U') ADVANCE(707);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(895);
      END_STATE();
    case 747:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'T') ADVANCE(547);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(895);
      END_STATE();
    case 748:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'T') ADVANCE(558);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(895);
      END_STATE();
    case 749:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'T') ADVANCE(590);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(895);
      END_STATE();
    case 750:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'T') ADVANCE(521);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(895);
      END_STATE();
    case 751:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'T') ADVANCE(528);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(895);
      END_STATE();
    case 752:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'T') ADVANCE(607);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(895);
      END_STATE();
    case 753:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'T') ADVANCE(540);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(895);
      END_STATE();
    case 754:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'T') ADVANCE(771);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(895);
      END_STATE();
    case 755:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'T') ADVANCE(697);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(895);
      END_STATE();
    case 756:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'T') ADVANCE(686);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(895);
      END_STATE();
    case 757:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'T') ADVANCE(687);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(895);
      END_STATE();
    case 758:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'T') ADVANCE(680);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(895);
      END_STATE();
    case 759:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'T') ADVANCE(675);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(895);
      END_STATE();
    case 760:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'U') ADVANCE(669);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(895);
      END_STATE();
    case 761:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'U') ADVANCE(704);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(895);
      END_STATE();
    case 762:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'U') ADVANCE(713);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(895);
      END_STATE();
    case 763:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'U') ADVANCE(731);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(895);
      END_STATE();
    case 764:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'U') ADVANCE(719);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(895);
      END_STATE();
    case 765:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'V') ADVANCE(679);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(895);
      END_STATE();
    case 766:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'V') ADVANCE(552);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(895);
      END_STATE();
    case 767:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'V') ADVANCE(673);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(895);
      END_STATE();
    case 768:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'V') ADVANCE(674);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(895);
      END_STATE();
    case 769:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'X') ADVANCE(546);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(895);
      END_STATE();
    case 770:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'X') ADVANCE(752);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(895);
      END_STATE();
    case 771:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '_') ADVANCE(663);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(895);
      END_STATE();
    case 772:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '_') ADVANCE(788);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(895);
      END_STATE();
    case 773:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '_') ADVANCE(758);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(895);
      END_STATE();
    case 774:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '_') ADVANCE(882);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(895);
      END_STATE();
    case 775:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'a') ADVANCE(827);
      if (lookahead == 'i') ADVANCE(831);
      if (lookahead == 'r') ADVANCE(847);
      if (lookahead == 'u') ADVANCE(841);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(895);
      END_STATE();
    case 776:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'a') ADVANCE(827);
      if (lookahead == 'i') ADVANCE(831);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(895);
      END_STATE();
    case 777:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'a') ADVANCE(827);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(895);
      END_STATE();
    case 778:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'a') ADVANCE(893);
      if (lookahead == 'i') ADVANCE(836);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(895);
      END_STATE();
    case 779:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'a') ADVANCE(818);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(895);
      END_STATE();
    case 780:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'a') ADVANCE(837);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(895);
      END_STATE();
    case 781:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'a') ADVANCE(826);
      if (lookahead == 'r') ADVANCE(884);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(895);
      END_STATE();
    case 782:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'a') ADVANCE(869);
      if (lookahead == 'o') ADVANCE(888);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(895);
      END_STATE();
    case 783:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'a') ADVANCE(883);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(895);
      END_STATE();
    case 784:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'c') ADVANCE(588);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(895);
      END_STATE();
    case 785:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'c') ADVANCE(871);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(895);
      END_STATE();
    case 786:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'c') ADVANCE(874);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(895);
      END_STATE();
    case 787:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'c') ADVANCE(876);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(895);
      END_STATE();
    case 788:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'd') ADVANCE(820);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(895);
      END_STATE();
    case 789:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'd') ADVANCE(586);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(895);
      END_STATE();
    case 790:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'd') ADVANCE(536);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(895);
      END_STATE();
    case 791:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'd') ADVANCE(792);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(895);
      END_STATE();
    case 792:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'd') ADVANCE(803);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(895);
      END_STATE();
    case 793:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'd') ADVANCE(802);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(895);
      END_STATE();
    case 794:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(530);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(895);
      END_STATE();
    case 795:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(532);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(895);
      END_STATE();
    case 796:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(542);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(895);
      END_STATE();
    case 797:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(523);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(895);
      END_STATE();
    case 798:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(515);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(895);
      END_STATE();
    case 799:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(538);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(895);
      END_STATE();
    case 800:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(519);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(895);
      END_STATE();
    case 801:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(534);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(895);
      END_STATE();
    case 802:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(570);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(895);
      END_STATE();
    case 803:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(890);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(895);
      END_STATE();
    case 804:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(859);
      if (lookahead == 'g') ADVANCE(554);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(895);
      END_STATE();
    case 805:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(894);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(895);
      END_STATE();
    case 806:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(835);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(895);
      END_STATE();
    case 807:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(817);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(895);
      END_STATE();
    case 808:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(861);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(895);
      END_STATE();
    case 809:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(830);
      if (lookahead == 'o') ADVANCE(862);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(895);
      END_STATE();
    case 810:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(872);
      if (lookahead == 'o') ADVANCE(846);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(895);
      END_STATE();
    case 811:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(866);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(895);
      END_STATE();
    case 812:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(858);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(895);
      END_STATE();
    case 813:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(843);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(895);
      END_STATE();
    case 814:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(786);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(895);
      END_STATE();
    case 815:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(787);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(895);
      END_STATE();
    case 816:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'g') ADVANCE(819);
      if (lookahead == 'p') ADVANCE(857);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(895);
      END_STATE();
    case 817:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'g') ADVANCE(783);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(895);
      END_STATE();
    case 818:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'g') ADVANCE(796);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(895);
      END_STATE();
    case 819:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'g') ADVANCE(864);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(895);
      END_STATE();
    case 820:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'i') ADVANCE(868);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(895);
      END_STATE();
    case 821:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'i') ADVANCE(891);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(895);
      END_STATE();
    case 822:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'i') ADVANCE(839);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(895);
      END_STATE();
    case 823:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'i') ADVANCE(840);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(895);
      END_STATE();
    case 824:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'i') ADVANCE(793);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(895);
      END_STATE();
    case 825:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'k') ADVANCE(564);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(895);
      END_STATE();
    case 826:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'k') ADVANCE(797);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(895);
      END_STATE();
    case 827:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'l') ADVANCE(867);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(895);
      END_STATE();
    case 828:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'l') ADVANCE(581);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(895);
      END_STATE();
    case 829:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'l') ADVANCE(828);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(895);
      END_STATE();
    case 830:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'l') ADVANCE(814);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(895);
      END_STATE();
    case 831:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'l') ADVANCE(881);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(895);
      END_STATE();
    case 832:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'm') ADVANCE(556);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(895);
      END_STATE();
    case 833:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'm') ADVANCE(511);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(895);
      END_STATE();
    case 834:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'm') ADVANCE(774);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(895);
      END_STATE();
    case 835:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'm') ADVANCE(854);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(895);
      END_STATE();
    case 836:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'n') ADVANCE(544);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(895);
      END_STATE();
    case 837:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'n') ADVANCE(825);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(895);
      END_STATE();
    case 838:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'n') ADVANCE(877);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(895);
      END_STATE();
    case 839:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'n') ADVANCE(785);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(895);
      END_STATE();
    case 840:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'n') ADVANCE(526);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(895);
      END_STATE();
    case 841:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'n') ADVANCE(784);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(895);
      END_STATE();
    case 842:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'n') ADVANCE(880);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(895);
      END_STATE();
    case 843:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'n') ADVANCE(790);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(895);
      END_STATE();
    case 844:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'n') ADVANCE(879);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(895);
      END_STATE();
    case 845:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'o') ADVANCE(886);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(895);
      END_STATE();
    case 846:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'o') ADVANCE(855);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(895);
      END_STATE();
    case 847:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'o') ADVANCE(833);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(895);
      END_STATE();
    case 848:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'o') ADVANCE(887);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(895);
      END_STATE();
    case 849:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'o') ADVANCE(789);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(895);
      END_STATE();
    case 850:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'o') ADVANCE(834);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(895);
      END_STATE();
    case 851:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'o') ADVANCE(846);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(895);
      END_STATE();
    case 852:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'o') ADVANCE(888);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(895);
      END_STATE();
    case 853:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'o') ADVANCE(823);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(895);
      END_STATE();
    case 854:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'o') ADVANCE(892);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(895);
      END_STATE();
    case 855:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'p') ADVANCE(583);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(895);
      END_STATE();
    case 856:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'p') ADVANCE(517);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(895);
      END_STATE();
    case 857:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'p') ADVANCE(813);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(895);
      END_STATE();
    case 858:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'r') ADVANCE(513);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(895);
      END_STATE();
    case 859:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'r') ADVANCE(779);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(895);
      END_STATE();
    case 860:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'r') ADVANCE(884);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(895);
      END_STATE();
    case 861:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'r') ADVANCE(821);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(895);
      END_STATE();
    case 862:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'r') ADVANCE(873);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(895);
      END_STATE();
    case 863:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'r') ADVANCE(850);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(895);
      END_STATE();
    case 864:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'r') ADVANCE(807);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(895);
      END_STATE();
    case 865:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'r') ADVANCE(848);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(895);
      END_STATE();
    case 866:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'r') ADVANCE(870);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(895);
      END_STATE();
    case 867:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 's') ADVANCE(795);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(895);
      END_STATE();
    case 868:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 's') ADVANCE(878);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(895);
      END_STATE();
    case 869:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 's') ADVANCE(801);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(895);
      END_STATE();
    case 870:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 's') ADVANCE(815);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(895);
      END_STATE();
    case 871:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 't') ADVANCE(558);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(895);
      END_STATE();
    case 872:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 't') ADVANCE(590);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(895);
      END_STATE();
    case 873:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 't') ADVANCE(521);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(895);
      END_STATE();
    case 874:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 't') ADVANCE(528);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(895);
      END_STATE();
    case 875:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 't') ADVANCE(607);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(895);
      END_STATE();
    case 876:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 't') ADVANCE(540);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(895);
      END_STATE();
    case 877:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 't') ADVANCE(548);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(895);
      END_STATE();
    case 878:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 't') ADVANCE(822);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(895);
      END_STATE();
    case 879:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 't') ADVANCE(772);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(895);
      END_STATE();
    case 880:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 't') ADVANCE(811);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(895);
      END_STATE();
    case 881:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 't') ADVANCE(812);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(895);
      END_STATE();
    case 882:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 't') ADVANCE(805);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(895);
      END_STATE();
    case 883:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 't') ADVANCE(800);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(895);
      END_STATE();
    case 884:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'u') ADVANCE(794);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(895);
      END_STATE();
    case 885:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'u') ADVANCE(829);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(895);
      END_STATE();
    case 886:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'u') ADVANCE(838);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(895);
      END_STATE();
    case 887:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'u') ADVANCE(856);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(895);
      END_STATE();
    case 888:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'u') ADVANCE(844);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(895);
      END_STATE();
    case 889:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'v') ADVANCE(804);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(895);
      END_STATE();
    case 890:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'v') ADVANCE(552);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(895);
      END_STATE();
    case 891:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'v') ADVANCE(798);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(895);
      END_STATE();
    case 892:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'v') ADVANCE(799);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(895);
      END_STATE();
    case 893:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'x') ADVANCE(546);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(895);
      END_STATE();
    case 894:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'x') ADVANCE(875);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(895);
      END_STATE();
    case 895:
      ACCEPT_TOKEN(sym__identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(895);
      END_STATE();
    case 896:
      ACCEPT_TOKEN(sym__identifier_dot);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(896);
      END_STATE();
    case 897:
      ACCEPT_TOKEN(anon_sym_DOT_DOT);
      END_STATE();
    case 898:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 899:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead == '/') ADVANCE(900);
      END_STATE();
    case 900:
      ACCEPT_TOKEN(anon_sym_SLASH_SLASH);
      END_STATE();
    case 901:
      ACCEPT_TOKEN(anon_sym_BANG_EQ);
      END_STATE();
    case 902:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '=') ADVANCE(903);
      END_STATE();
    case 903:
      ACCEPT_TOKEN(anon_sym_GT_EQ);
      END_STATE();
    case 904:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '=') ADVANCE(905);
      END_STATE();
    case 905:
      ACCEPT_TOKEN(anon_sym_LT_EQ);
      END_STATE();
    case 906:
      ACCEPT_TOKEN(anon_sym_QMARK_QMARK);
      END_STATE();
    case 907:
      ACCEPT_TOKEN(anon_sym_AMP_AMP);
      END_STATE();
    case 908:
      ACCEPT_TOKEN(anon_sym_PIPE_PIPE);
      END_STATE();
    case 909:
      ACCEPT_TOKEN(aux_sym__date_token1);
      END_STATE();
    case 910:
      ACCEPT_TOKEN(aux_sym__date_token2);
      END_STATE();
    case 911:
      ACCEPT_TOKEN(aux_sym__date_token2);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(910);
      END_STATE();
    case 912:
      ACCEPT_TOKEN(anon_sym_AT);
      END_STATE();
    case 913:
      ACCEPT_TOKEN(aux_sym__time_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(493);
      END_STATE();
    case 914:
      ACCEPT_TOKEN(anon_sym_T);
      if (lookahead == 'A') ADVANCE(114);
      if (lookahead == 'R') ADVANCE(214);
      END_STATE();
    case 915:
      ACCEPT_TOKEN(anon_sym_T);
      if (lookahead == 'A') ADVANCE(113);
      END_STATE();
    case 916:
      ACCEPT_TOKEN(anon_sym_Z);
      END_STATE();
    case 917:
      ACCEPT_TOKEN(anon_sym_POUND);
      END_STATE();
    case 918:
      ACCEPT_TOKEN(anon_sym_POUND);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(922);
      END_STATE();
    case 919:
      ACCEPT_TOKEN(anon_sym_POUND);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(629);
      END_STATE();
    case 920:
      ACCEPT_TOKEN(anon_sym_POUND);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(633);
      END_STATE();
    case 921:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == '#') ADVANCE(918);
      if (lookahead == '|') ADVANCE(927);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(921);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(922);
      END_STATE();
    case 922:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(922);
      END_STATE();
    case 923:
      ACCEPT_TOKEN(sym_bang);
      END_STATE();
    case 924:
      ACCEPT_TOKEN(sym_bang);
      if (lookahead == '=') ADVANCE(901);
      END_STATE();
    case 925:
      ACCEPT_TOKEN(sym_pipe);
      END_STATE();
    case 926:
      ACCEPT_TOKEN(sym_pipe);
      if (lookahead == '|') ADVANCE(908);
      END_STATE();
    case 927:
      ACCEPT_TOKEN(sym_pipe);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(922);
      END_STATE();
    case 928:
      ACCEPT_TOKEN(sym_pipe);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(629);
      END_STATE();
    case 929:
      ACCEPT_TOKEN(sym_pipe);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(633);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 499},
  [2] = {.lex_state = 5},
  [3] = {.lex_state = 494},
  [4] = {.lex_state = 5},
  [5] = {.lex_state = 5},
  [6] = {.lex_state = 494},
  [7] = {.lex_state = 5},
  [8] = {.lex_state = 6},
  [9] = {.lex_state = 6},
  [10] = {.lex_state = 6},
  [11] = {.lex_state = 6},
  [12] = {.lex_state = 7},
  [13] = {.lex_state = 2},
  [14] = {.lex_state = 495},
  [15] = {.lex_state = 495},
  [16] = {.lex_state = 3},
  [17] = {.lex_state = 495},
  [18] = {.lex_state = 3},
  [19] = {.lex_state = 494},
  [20] = {.lex_state = 494},
  [21] = {.lex_state = 495},
  [22] = {.lex_state = 3},
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
  [34] = {.lex_state = 494},
  [35] = {.lex_state = 494},
  [36] = {.lex_state = 3},
  [37] = {.lex_state = 495},
  [38] = {.lex_state = 3},
  [39] = {.lex_state = 3},
  [40] = {.lex_state = 495},
  [41] = {.lex_state = 3},
  [42] = {.lex_state = 3},
  [43] = {.lex_state = 3},
  [44] = {.lex_state = 3},
  [45] = {.lex_state = 495},
  [46] = {.lex_state = 3},
  [47] = {.lex_state = 3},
  [48] = {.lex_state = 3},
  [49] = {.lex_state = 3},
  [50] = {.lex_state = 3},
  [51] = {.lex_state = 3},
  [52] = {.lex_state = 495},
  [53] = {.lex_state = 3},
  [54] = {.lex_state = 3},
  [55] = {.lex_state = 3},
  [56] = {.lex_state = 3},
  [57] = {.lex_state = 3},
  [58] = {.lex_state = 3},
  [59] = {.lex_state = 495},
  [60] = {.lex_state = 3},
  [61] = {.lex_state = 495},
  [62] = {.lex_state = 495},
  [63] = {.lex_state = 498},
  [64] = {.lex_state = 498},
  [65] = {.lex_state = 495},
  [66] = {.lex_state = 495},
  [67] = {.lex_state = 495},
  [68] = {.lex_state = 495},
  [69] = {.lex_state = 495},
  [70] = {.lex_state = 498},
  [71] = {.lex_state = 495},
  [72] = {.lex_state = 495},
  [73] = {.lex_state = 495},
  [74] = {.lex_state = 498},
  [75] = {.lex_state = 495},
  [76] = {.lex_state = 495},
  [77] = {.lex_state = 3},
  [78] = {.lex_state = 495},
  [79] = {.lex_state = 495},
  [80] = {.lex_state = 3},
  [81] = {.lex_state = 495},
  [82] = {.lex_state = 3},
  [83] = {.lex_state = 3},
  [84] = {.lex_state = 495},
  [85] = {.lex_state = 495},
  [86] = {.lex_state = 495},
  [87] = {.lex_state = 3},
  [88] = {.lex_state = 495},
  [89] = {.lex_state = 3},
  [90] = {.lex_state = 2},
  [91] = {.lex_state = 495},
  [92] = {.lex_state = 3},
  [93] = {.lex_state = 3},
  [94] = {.lex_state = 3},
  [95] = {.lex_state = 2},
  [96] = {.lex_state = 1},
  [97] = {.lex_state = 495},
  [98] = {.lex_state = 3},
  [99] = {.lex_state = 3},
  [100] = {.lex_state = 3},
  [101] = {.lex_state = 3},
  [102] = {.lex_state = 3},
  [103] = {.lex_state = 495},
  [104] = {.lex_state = 3},
  [105] = {.lex_state = 3},
  [106] = {.lex_state = 3},
  [107] = {.lex_state = 495},
  [108] = {.lex_state = 495},
  [109] = {.lex_state = 495},
  [110] = {.lex_state = 495},
  [111] = {.lex_state = 495},
  [112] = {.lex_state = 495},
  [113] = {.lex_state = 495},
  [114] = {.lex_state = 3},
  [115] = {.lex_state = 495},
  [116] = {.lex_state = 495},
  [117] = {.lex_state = 495},
  [118] = {.lex_state = 3},
  [119] = {.lex_state = 495},
  [120] = {.lex_state = 495},
  [121] = {.lex_state = 495},
  [122] = {.lex_state = 495},
  [123] = {.lex_state = 495},
  [124] = {.lex_state = 495},
  [125] = {.lex_state = 495},
  [126] = {.lex_state = 495},
  [127] = {.lex_state = 8},
  [128] = {.lex_state = 8},
  [129] = {.lex_state = 495},
  [130] = {.lex_state = 496},
  [131] = {.lex_state = 496},
  [132] = {.lex_state = 499},
  [133] = {.lex_state = 498},
  [134] = {.lex_state = 498},
  [135] = {.lex_state = 498},
  [136] = {.lex_state = 498},
  [137] = {.lex_state = 499},
  [138] = {.lex_state = 498},
  [139] = {.lex_state = 498},
  [140] = {.lex_state = 498},
  [141] = {.lex_state = 498},
  [142] = {.lex_state = 498},
  [143] = {.lex_state = 498},
  [144] = {.lex_state = 498},
  [145] = {.lex_state = 499},
  [146] = {.lex_state = 498},
  [147] = {.lex_state = 499},
  [148] = {.lex_state = 499},
  [149] = {.lex_state = 499},
  [150] = {.lex_state = 499},
  [151] = {.lex_state = 498},
  [152] = {.lex_state = 498},
  [153] = {.lex_state = 498},
  [154] = {.lex_state = 499},
  [155] = {.lex_state = 499},
  [156] = {.lex_state = 499},
  [157] = {.lex_state = 499},
  [158] = {.lex_state = 498},
  [159] = {.lex_state = 498},
  [160] = {.lex_state = 496},
  [161] = {.lex_state = 498},
  [162] = {.lex_state = 498},
  [163] = {.lex_state = 498},
  [164] = {.lex_state = 498},
  [165] = {.lex_state = 498},
  [166] = {.lex_state = 498},
  [167] = {.lex_state = 498},
  [168] = {.lex_state = 498},
  [169] = {.lex_state = 498},
  [170] = {.lex_state = 498},
  [171] = {.lex_state = 498},
  [172] = {.lex_state = 498},
  [173] = {.lex_state = 498},
  [174] = {.lex_state = 498},
  [175] = {.lex_state = 498},
  [176] = {.lex_state = 498},
  [177] = {.lex_state = 499},
  [178] = {.lex_state = 498},
  [179] = {.lex_state = 1},
  [180] = {.lex_state = 1},
  [181] = {.lex_state = 499},
  [182] = {.lex_state = 499},
  [183] = {.lex_state = 497},
  [184] = {.lex_state = 8},
  [185] = {.lex_state = 8},
  [186] = {.lex_state = 497},
  [187] = {.lex_state = 499},
  [188] = {.lex_state = 499},
  [189] = {.lex_state = 8},
  [190] = {.lex_state = 8},
  [191] = {.lex_state = 8},
  [192] = {.lex_state = 8},
  [193] = {.lex_state = 4},
  [194] = {.lex_state = 4},
  [195] = {.lex_state = 8},
  [196] = {.lex_state = 8},
  [197] = {.lex_state = 8},
  [198] = {.lex_state = 499},
  [199] = {.lex_state = 8},
  [200] = {.lex_state = 8},
  [201] = {.lex_state = 499},
  [202] = {.lex_state = 8},
  [203] = {.lex_state = 8},
  [204] = {.lex_state = 8},
  [205] = {.lex_state = 8},
  [206] = {.lex_state = 8},
  [207] = {.lex_state = 8},
  [208] = {.lex_state = 499},
  [209] = {.lex_state = 499},
  [210] = {.lex_state = 499},
  [211] = {.lex_state = 499},
  [212] = {.lex_state = 499},
  [213] = {.lex_state = 499},
  [214] = {.lex_state = 499},
  [215] = {.lex_state = 499},
  [216] = {.lex_state = 499},
  [217] = {.lex_state = 499},
  [218] = {.lex_state = 499},
  [219] = {.lex_state = 499},
  [220] = {.lex_state = 499},
  [221] = {.lex_state = 499},
  [222] = {.lex_state = 499},
  [223] = {.lex_state = 499},
  [224] = {.lex_state = 499},
  [225] = {.lex_state = 499},
  [226] = {.lex_state = 499},
  [227] = {.lex_state = 499},
  [228] = {.lex_state = 499},
  [229] = {.lex_state = 499},
  [230] = {.lex_state = 499},
  [231] = {.lex_state = 499},
  [232] = {.lex_state = 499},
  [233] = {.lex_state = 499},
  [234] = {.lex_state = 499},
  [235] = {.lex_state = 499},
  [236] = {.lex_state = 499},
  [237] = {.lex_state = 499},
  [238] = {.lex_state = 499},
  [239] = {.lex_state = 499},
  [240] = {.lex_state = 499},
  [241] = {.lex_state = 499},
  [242] = {.lex_state = 499},
  [243] = {.lex_state = 499},
  [244] = {.lex_state = 499},
  [245] = {.lex_state = 499},
  [246] = {.lex_state = 499},
  [247] = {.lex_state = 499},
  [248] = {.lex_state = 499},
  [249] = {.lex_state = 499},
  [250] = {.lex_state = 499},
  [251] = {.lex_state = 499},
  [252] = {.lex_state = 499},
  [253] = {.lex_state = 499},
  [254] = {.lex_state = 499},
  [255] = {.lex_state = 499},
  [256] = {.lex_state = 495},
  [257] = {.lex_state = 499},
  [258] = {.lex_state = 499},
  [259] = {.lex_state = 499},
  [260] = {.lex_state = 499},
  [261] = {.lex_state = 499},
  [262] = {.lex_state = 499},
  [263] = {.lex_state = 499},
  [264] = {.lex_state = 499},
  [265] = {.lex_state = 499},
  [266] = {.lex_state = 499},
  [267] = {.lex_state = 499},
  [268] = {.lex_state = 499},
  [269] = {.lex_state = 499},
  [270] = {.lex_state = 499},
  [271] = {.lex_state = 3},
  [272] = {.lex_state = 3},
  [273] = {.lex_state = 494},
  [274] = {.lex_state = 3},
  [275] = {.lex_state = 494},
  [276] = {.lex_state = 494},
  [277] = {.lex_state = 494},
  [278] = {.lex_state = 494},
  [279] = {.lex_state = 494},
  [280] = {.lex_state = 3},
  [281] = {.lex_state = 4},
  [282] = {.lex_state = 4},
  [283] = {.lex_state = 497},
  [284] = {.lex_state = 4},
  [285] = {.lex_state = 497},
  [286] = {.lex_state = 497},
  [287] = {.lex_state = 494},
  [288] = {.lex_state = 497},
  [289] = {.lex_state = 494},
  [290] = {.lex_state = 494},
  [291] = {.lex_state = 499},
  [292] = {.lex_state = 497},
  [293] = {.lex_state = 4},
  [294] = {.lex_state = 4},
  [295] = {.lex_state = 497},
  [296] = {.lex_state = 497},
  [297] = {.lex_state = 4},
  [298] = {.lex_state = 4},
  [299] = {.lex_state = 4},
  [300] = {.lex_state = 494},
  [301] = {.lex_state = 494},
  [302] = {.lex_state = 4},
  [303] = {.lex_state = 4},
  [304] = {.lex_state = 494},
  [305] = {.lex_state = 4},
  [306] = {.lex_state = 494},
  [307] = {.lex_state = 4},
  [308] = {.lex_state = 4},
  [309] = {.lex_state = 2},
  [310] = {.lex_state = 4},
  [311] = {.lex_state = 4},
  [312] = {.lex_state = 4},
  [313] = {.lex_state = 494},
  [314] = {.lex_state = 494},
  [315] = {.lex_state = 494},
  [316] = {.lex_state = 2},
  [317] = {.lex_state = 494},
  [318] = {.lex_state = 494},
  [319] = {.lex_state = 4},
  [320] = {.lex_state = 494},
  [321] = {.lex_state = 494},
  [322] = {.lex_state = 499},
  [323] = {.lex_state = 499},
  [324] = {.lex_state = 499},
  [325] = {.lex_state = 499},
  [326] = {.lex_state = 499},
  [327] = {.lex_state = 499},
  [328] = {.lex_state = 499},
  [329] = {.lex_state = 499},
  [330] = {.lex_state = 499},
  [331] = {.lex_state = 499},
  [332] = {.lex_state = 499},
  [333] = {.lex_state = 499},
  [334] = {.lex_state = 499},
  [335] = {.lex_state = 16},
  [336] = {.lex_state = 499},
  [337] = {.lex_state = 499},
  [338] = {.lex_state = 499},
  [339] = {.lex_state = 499},
  [340] = {.lex_state = 499},
  [341] = {.lex_state = 497},
  [342] = {.lex_state = 499},
  [343] = {.lex_state = 497},
  [344] = {.lex_state = 497},
  [345] = {.lex_state = 499},
  [346] = {.lex_state = 16},
  [347] = {.lex_state = 499},
  [348] = {.lex_state = 16},
  [349] = {.lex_state = 499},
  [350] = {.lex_state = 499},
  [351] = {.lex_state = 16},
  [352] = {.lex_state = 497},
  [353] = {.lex_state = 15},
  [354] = {.lex_state = 499},
  [355] = {.lex_state = 499},
  [356] = {.lex_state = 16},
  [357] = {.lex_state = 499},
  [358] = {.lex_state = 499},
  [359] = {.lex_state = 18},
  [360] = {.lex_state = 18},
  [361] = {.lex_state = 19},
  [362] = {.lex_state = 499},
  [363] = {.lex_state = 499},
  [364] = {.lex_state = 15},
  [365] = {.lex_state = 499},
  [366] = {.lex_state = 499},
  [367] = {.lex_state = 18},
  [368] = {.lex_state = 499},
  [369] = {.lex_state = 499},
  [370] = {.lex_state = 499},
  [371] = {.lex_state = 17},
  [372] = {.lex_state = 499},
  [373] = {.lex_state = 18},
  [374] = {.lex_state = 499},
  [375] = {.lex_state = 17},
  [376] = {.lex_state = 499},
  [377] = {.lex_state = 499},
  [378] = {.lex_state = 497},
  [379] = {.lex_state = 16},
  [380] = {.lex_state = 499},
  [381] = {.lex_state = 499},
  [382] = {.lex_state = 497},
  [383] = {.lex_state = 497},
  [384] = {.lex_state = 17},
  [385] = {.lex_state = 499},
  [386] = {.lex_state = 16},
  [387] = {.lex_state = 499},
  [388] = {.lex_state = 16},
  [389] = {.lex_state = 17},
  [390] = {.lex_state = 499},
  [391] = {.lex_state = 499},
  [392] = {.lex_state = 499},
  [393] = {.lex_state = 16},
  [394] = {.lex_state = 499},
  [395] = {.lex_state = 17},
  [396] = {.lex_state = 17},
  [397] = {.lex_state = 497},
  [398] = {.lex_state = 497},
  [399] = {.lex_state = 17},
  [400] = {.lex_state = 17},
  [401] = {.lex_state = 497},
  [402] = {.lex_state = 499},
  [403] = {.lex_state = 17},
  [404] = {.lex_state = 497},
  [405] = {.lex_state = 17},
  [406] = {.lex_state = 499},
  [407] = {.lex_state = 16},
  [408] = {.lex_state = 497},
  [409] = {.lex_state = 17},
  [410] = {.lex_state = 16},
  [411] = {.lex_state = 17},
  [412] = {.lex_state = 497},
  [413] = {.lex_state = 499},
  [414] = {.lex_state = 497},
  [415] = {.lex_state = 497},
  [416] = {.lex_state = 499},
  [417] = {.lex_state = 499},
  [418] = {.lex_state = 16},
  [419] = {.lex_state = 499},
  [420] = {.lex_state = 499},
  [421] = {.lex_state = 499},
  [422] = {.lex_state = 499},
  [423] = {.lex_state = 16},
  [424] = {.lex_state = 487},
  [425] = {.lex_state = 499},
  [426] = {.lex_state = 499},
  [427] = {.lex_state = 499},
  [428] = {.lex_state = 487},
  [429] = {.lex_state = 499},
  [430] = {.lex_state = 20},
  [431] = {.lex_state = 17},
  [432] = {.lex_state = 499},
  [433] = {.lex_state = 499},
  [434] = {.lex_state = 499},
  [435] = {.lex_state = 487},
  [436] = {.lex_state = 499},
  [437] = {.lex_state = 499},
  [438] = {.lex_state = 499},
  [439] = {.lex_state = 16},
  [440] = {.lex_state = 499},
  [441] = {.lex_state = 499},
  [442] = {.lex_state = 499},
  [443] = {.lex_state = 499},
  [444] = {.lex_state = 16},
  [445] = {.lex_state = 16},
  [446] = {.lex_state = 499},
  [447] = {.lex_state = 499},
  [448] = {.lex_state = 499},
  [449] = {.lex_state = 16},
  [450] = {.lex_state = 499},
  [451] = {.lex_state = 499},
  [452] = {.lex_state = 17},
  [453] = {.lex_state = 487},
  [454] = {.lex_state = 499},
  [455] = {.lex_state = 17},
  [456] = {.lex_state = 16},
  [457] = {.lex_state = 16},
  [458] = {.lex_state = 499},
  [459] = {.lex_state = 499},
  [460] = {.lex_state = 489},
  [461] = {.lex_state = 489},
  [462] = {.lex_state = 499},
  [463] = {.lex_state = 499},
  [464] = {.lex_state = 499},
  [465] = {.lex_state = 16},
  [466] = {.lex_state = 499},
  [467] = {.lex_state = 16},
  [468] = {.lex_state = 499},
  [469] = {.lex_state = 499},
  [470] = {.lex_state = 5},
  [471] = {.lex_state = 499},
  [472] = {.lex_state = 499},
  [473] = {.lex_state = 489},
  [474] = {.lex_state = 487},
  [475] = {.lex_state = 16},
  [476] = {.lex_state = 499},
  [477] = {.lex_state = 921},
  [478] = {.lex_state = 499},
  [479] = {.lex_state = 499},
  [480] = {.lex_state = 15},
  [481] = {.lex_state = 15},
  [482] = {.lex_state = 5},
  [483] = {.lex_state = 499},
  [484] = {.lex_state = 5},
  [485] = {.lex_state = 5},
  [486] = {.lex_state = 499},
  [487] = {.lex_state = 499},
  [488] = {.lex_state = 499},
  [489] = {.lex_state = 499},
  [490] = {.lex_state = 499},
  [491] = {.lex_state = 499},
  [492] = {.lex_state = 499},
  [493] = {.lex_state = 15},
  [494] = {.lex_state = 499},
  [495] = {.lex_state = 499},
  [496] = {.lex_state = 499},
  [497] = {.lex_state = 499},
  [498] = {.lex_state = 499},
  [499] = {.lex_state = 499},
  [500] = {.lex_state = 499},
  [501] = {.lex_state = 499},
  [502] = {.lex_state = 499},
  [503] = {.lex_state = 21},
  [504] = {.lex_state = 499},
  [505] = {.lex_state = 499},
  [506] = {.lex_state = 499},
  [507] = {.lex_state = 499},
  [508] = {.lex_state = 5},
  [509] = {.lex_state = 499},
  [510] = {.lex_state = 499},
  [511] = {.lex_state = 15},
  [512] = {.lex_state = 5},
  [513] = {.lex_state = 499},
  [514] = {.lex_state = 499},
  [515] = {.lex_state = 499},
  [516] = {.lex_state = 499},
  [517] = {.lex_state = 5},
  [518] = {.lex_state = 499},
  [519] = {.lex_state = 499},
  [520] = {.lex_state = 499},
  [521] = {.lex_state = 499},
  [522] = {.lex_state = 499},
  [523] = {.lex_state = 499},
  [524] = {.lex_state = 499},
  [525] = {.lex_state = 5},
  [526] = {.lex_state = 499},
  [527] = {.lex_state = 499},
  [528] = {.lex_state = 5},
  [529] = {.lex_state = 499},
  [530] = {.lex_state = 499},
  [531] = {.lex_state = 499},
  [532] = {.lex_state = 499},
  [533] = {.lex_state = 5},
  [534] = {.lex_state = 499},
  [535] = {.lex_state = 499},
  [536] = {.lex_state = 499},
  [537] = {.lex_state = 499},
  [538] = {.lex_state = 499},
  [539] = {.lex_state = 5},
  [540] = {.lex_state = 499},
  [541] = {.lex_state = 499},
  [542] = {.lex_state = 499},
  [543] = {.lex_state = 5},
  [544] = {.lex_state = 499},
  [545] = {.lex_state = 499},
  [546] = {.lex_state = 499},
  [547] = {.lex_state = 499},
  [548] = {.lex_state = 21},
  [549] = {.lex_state = 627},
  [550] = {.lex_state = 631},
  [551] = {.lex_state = 499},
  [552] = {.lex_state = 499},
  [553] = {.lex_state = 21},
  [554] = {.lex_state = 627},
  [555] = {.lex_state = 631},
  [556] = {.lex_state = 499},
  [557] = {.lex_state = 21},
  [558] = {.lex_state = 627},
  [559] = {.lex_state = 631},
  [560] = {.lex_state = 499},
  [561] = {.lex_state = 21},
  [562] = {.lex_state = 627},
  [563] = {.lex_state = 631},
  [564] = {.lex_state = 21},
  [565] = {.lex_state = 627},
  [566] = {.lex_state = 631},
  [567] = {.lex_state = 21},
  [568] = {.lex_state = 627},
  [569] = {.lex_state = 21},
  [570] = {.lex_state = 21},
  [571] = {.lex_state = 21},
  [572] = {.lex_state = 21},
  [573] = {.lex_state = 499},
  [574] = {.lex_state = 627},
  [575] = {.lex_state = 499},
  [576] = {.lex_state = 499},
  [577] = {.lex_state = 631},
  [578] = {.lex_state = 15},
  [579] = {.lex_state = 627},
  [580] = {.lex_state = 499},
  [581] = {.lex_state = 499},
  [582] = {.lex_state = 627},
  [583] = {.lex_state = 15},
  [584] = {.lex_state = 15},
  [585] = {.lex_state = 499},
  [586] = {.lex_state = 499},
  [587] = {.lex_state = 499},
  [588] = {.lex_state = 499},
  [589] = {.lex_state = 499},
  [590] = {(TSStateId)(-1)},
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
    [sym_keyword_mod] = ACTIONS(1),
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
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_DOT] = ACTIONS(1),
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
    [sym_program] = STATE(573),
    [sym_prql] = STATE(358),
    [sym_pipeline] = STATE(376),
    [sym_variable] = STATE(376),
    [sym_function_definition] = STATE(376),
    [sym_module_definition] = STATE(376),
    [sym_from_text] = STATE(147),
    [sym_from] = STATE(147),
    [sym_comment] = STATE(1),
    [aux_sym_program_repeat1] = STATE(291),
    [aux_sym_program_repeat2] = STATE(324),
    [ts_builtin_sym_end] = ACTIONS(7),
    [sym_keyword_from] = ACTIONS(9),
    [sym_keyword_mod] = ACTIONS(11),
    [sym_keyword_func] = ACTIONS(13),
    [sym_keyword_let] = ACTIONS(15),
    [sym_keyword_prql] = ACTIONS(17),
    [sym_keyword_from_text] = ACTIONS(19),
    [anon_sym_POUND] = ACTIONS(3),
    [sym_pipe] = ACTIONS(21),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 37,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(21), 1,
      sym_pipe,
    ACTIONS(29), 1,
      sym_keyword_count_distinct,
    ACTIONS(31), 1,
      anon_sym_LPAREN,
    ACTIONS(33), 1,
      anon_sym_COMMA,
    ACTIONS(35), 1,
      anon_sym_RBRACE,
    ACTIONS(37), 1,
      anon_sym_DOT,
    ACTIONS(39), 1,
      anon_sym_DASH,
    ACTIONS(41), 1,
      anon_sym_DQUOTE,
    ACTIONS(43), 1,
      anon_sym_SQUOTE,
    ACTIONS(45), 1,
      anon_sym_f_DQUOTE,
    ACTIONS(47), 1,
      anon_sym_f_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(49), 1,
      anon_sym_s_DQUOTE,
    ACTIONS(51), 1,
      anon_sym_s_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(53), 1,
      sym__natural_number,
    ACTIONS(55), 1,
      anon_sym__,
    ACTIONS(57), 1,
      anon_sym_BQUOTE,
    ACTIONS(59), 1,
      sym__identifier,
    ACTIONS(61), 1,
      anon_sym_AT,
    STATE(2), 1,
      sym_comment,
    STATE(17), 1,
      aux_sym__friendly_number,
    STATE(71), 1,
      sym_identifier,
    STATE(72), 1,
      sym__double_quote_string,
    STATE(75), 1,
      sym_integer,
    STATE(79), 1,
      sym__single_quote_string,
    STATE(89), 1,
      sym__agg_keywords,
    STATE(276), 1,
      sym_binary_expression,
    STATE(306), 1,
      sym__expression,
    STATE(484), 1,
      sym__alias_identifier,
    ACTIONS(27), 2,
      sym_keyword_count,
      sym_keyword_rank,
    STATE(76), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(78), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(88), 2,
      sym_literal_string,
      sym_decimal_number,
    ACTIONS(23), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(437), 3,
      sym_aggregate_operation,
      sym__aggregate_func,
      sym_assignment,
    ACTIONS(25), 6,
      sym_keyword_average,
      sym_keyword_min,
      sym_keyword_max,
      sym_keyword_stddev,
      sym_keyword_avg,
      sym_keyword_sum,
    STATE(81), 7,
      sym_literal,
      sym_f_string,
      sym_s_string,
      sym_field,
      sym_date,
      sym_time,
      sym_timestamp,
  [131] = 21,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(69), 1,
      anon_sym_DOT,
    ACTIONS(71), 1,
      anon_sym_DQUOTE,
    ACTIONS(73), 1,
      anon_sym_SQUOTE,
    ACTIONS(75), 1,
      sym__natural_number,
    ACTIONS(77), 1,
      anon_sym__,
    ACTIONS(79), 1,
      anon_sym_BQUOTE,
    ACTIONS(81), 1,
      sym__identifier,
    STATE(3), 1,
      sym_comment,
    STATE(70), 1,
      aux_sym_function_call_repeat1,
    STATE(136), 1,
      sym_identifier,
    STATE(143), 1,
      aux_sym__friendly_number,
    STATE(161), 1,
      sym_literal,
    STATE(162), 1,
      sym__call_parameter,
    STATE(170), 1,
      sym_integer,
    STATE(166), 2,
      sym_literal_string,
      sym_decimal_number,
    STATE(168), 2,
      sym__double_quote_string,
      sym__single_quote_string,
    ACTIONS(67), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    ACTIONS(63), 12,
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
      sym_keyword_loop,
      sym_keyword_mod,
      sym_keyword_func,
      sym_keyword_let,
      sym_keyword_from_text,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
  [229] = 36,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(21), 1,
      sym_pipe,
    ACTIONS(29), 1,
      sym_keyword_count_distinct,
    ACTIONS(31), 1,
      anon_sym_LPAREN,
    ACTIONS(37), 1,
      anon_sym_DOT,
    ACTIONS(39), 1,
      anon_sym_DASH,
    ACTIONS(41), 1,
      anon_sym_DQUOTE,
    ACTIONS(43), 1,
      anon_sym_SQUOTE,
    ACTIONS(45), 1,
      anon_sym_f_DQUOTE,
    ACTIONS(47), 1,
      anon_sym_f_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(49), 1,
      anon_sym_s_DQUOTE,
    ACTIONS(51), 1,
      anon_sym_s_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(53), 1,
      sym__natural_number,
    ACTIONS(55), 1,
      anon_sym__,
    ACTIONS(57), 1,
      anon_sym_BQUOTE,
    ACTIONS(59), 1,
      sym__identifier,
    ACTIONS(61), 1,
      anon_sym_AT,
    ACTIONS(83), 1,
      anon_sym_RBRACE,
    STATE(4), 1,
      sym_comment,
    STATE(17), 1,
      aux_sym__friendly_number,
    STATE(71), 1,
      sym_identifier,
    STATE(72), 1,
      sym__double_quote_string,
    STATE(75), 1,
      sym_integer,
    STATE(79), 1,
      sym__single_quote_string,
    STATE(89), 1,
      sym__agg_keywords,
    STATE(278), 1,
      sym_binary_expression,
    STATE(306), 1,
      sym__expression,
    STATE(484), 1,
      sym__alias_identifier,
    ACTIONS(27), 2,
      sym_keyword_count,
      sym_keyword_rank,
    STATE(76), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(78), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(88), 2,
      sym_literal_string,
      sym_decimal_number,
    ACTIONS(23), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(469), 3,
      sym_aggregate_operation,
      sym__aggregate_func,
      sym_assignment,
    ACTIONS(25), 6,
      sym_keyword_average,
      sym_keyword_min,
      sym_keyword_max,
      sym_keyword_stddev,
      sym_keyword_avg,
      sym_keyword_sum,
    STATE(81), 7,
      sym_literal,
      sym_f_string,
      sym_s_string,
      sym_field,
      sym_date,
      sym_time,
      sym_timestamp,
  [357] = 36,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(21), 1,
      sym_pipe,
    ACTIONS(29), 1,
      sym_keyword_count_distinct,
    ACTIONS(31), 1,
      anon_sym_LPAREN,
    ACTIONS(37), 1,
      anon_sym_DOT,
    ACTIONS(39), 1,
      anon_sym_DASH,
    ACTIONS(41), 1,
      anon_sym_DQUOTE,
    ACTIONS(43), 1,
      anon_sym_SQUOTE,
    ACTIONS(45), 1,
      anon_sym_f_DQUOTE,
    ACTIONS(47), 1,
      anon_sym_f_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(49), 1,
      anon_sym_s_DQUOTE,
    ACTIONS(51), 1,
      anon_sym_s_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(53), 1,
      sym__natural_number,
    ACTIONS(55), 1,
      anon_sym__,
    ACTIONS(57), 1,
      anon_sym_BQUOTE,
    ACTIONS(59), 1,
      sym__identifier,
    ACTIONS(61), 1,
      anon_sym_AT,
    ACTIONS(85), 1,
      anon_sym_RBRACE,
    STATE(5), 1,
      sym_comment,
    STATE(17), 1,
      aux_sym__friendly_number,
    STATE(71), 1,
      sym_identifier,
    STATE(72), 1,
      sym__double_quote_string,
    STATE(75), 1,
      sym_integer,
    STATE(79), 1,
      sym__single_quote_string,
    STATE(89), 1,
      sym__agg_keywords,
    STATE(278), 1,
      sym_binary_expression,
    STATE(306), 1,
      sym__expression,
    STATE(484), 1,
      sym__alias_identifier,
    ACTIONS(27), 2,
      sym_keyword_count,
      sym_keyword_rank,
    STATE(76), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(78), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(88), 2,
      sym_literal_string,
      sym_decimal_number,
    ACTIONS(23), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(469), 3,
      sym_aggregate_operation,
      sym__aggregate_func,
      sym_assignment,
    ACTIONS(25), 6,
      sym_keyword_average,
      sym_keyword_min,
      sym_keyword_max,
      sym_keyword_stddev,
      sym_keyword_avg,
      sym_keyword_sum,
    STATE(81), 7,
      sym_literal,
      sym_f_string,
      sym_s_string,
      sym_field,
      sym_date,
      sym_time,
      sym_timestamp,
  [485] = 21,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(89), 1,
      anon_sym_DOT,
    ACTIONS(91), 1,
      anon_sym_DQUOTE,
    ACTIONS(93), 1,
      anon_sym_SQUOTE,
    ACTIONS(95), 1,
      sym__natural_number,
    ACTIONS(97), 1,
      anon_sym__,
    ACTIONS(99), 1,
      anon_sym_BQUOTE,
    ACTIONS(101), 1,
      sym__identifier,
    STATE(6), 1,
      sym_comment,
    STATE(74), 1,
      aux_sym_function_call_repeat1,
    STATE(135), 1,
      aux_sym__friendly_number,
    STATE(140), 1,
      sym_identifier,
    STATE(163), 1,
      sym_integer,
    STATE(164), 1,
      sym_literal,
    STATE(167), 1,
      sym__call_parameter,
    STATE(158), 2,
      sym_literal_string,
      sym_decimal_number,
    STATE(159), 2,
      sym__double_quote_string,
      sym__single_quote_string,
    ACTIONS(87), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    ACTIONS(63), 12,
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
      sym_keyword_loop,
      sym_keyword_mod,
      sym_keyword_func,
      sym_keyword_let,
      sym_keyword_from_text,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
  [583] = 35,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(21), 1,
      sym_pipe,
    ACTIONS(29), 1,
      sym_keyword_count_distinct,
    ACTIONS(31), 1,
      anon_sym_LPAREN,
    ACTIONS(37), 1,
      anon_sym_DOT,
    ACTIONS(39), 1,
      anon_sym_DASH,
    ACTIONS(41), 1,
      anon_sym_DQUOTE,
    ACTIONS(43), 1,
      anon_sym_SQUOTE,
    ACTIONS(45), 1,
      anon_sym_f_DQUOTE,
    ACTIONS(47), 1,
      anon_sym_f_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(49), 1,
      anon_sym_s_DQUOTE,
    ACTIONS(51), 1,
      anon_sym_s_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(53), 1,
      sym__natural_number,
    ACTIONS(55), 1,
      anon_sym__,
    ACTIONS(57), 1,
      anon_sym_BQUOTE,
    ACTIONS(59), 1,
      sym__identifier,
    ACTIONS(61), 1,
      anon_sym_AT,
    STATE(7), 1,
      sym_comment,
    STATE(17), 1,
      aux_sym__friendly_number,
    STATE(71), 1,
      sym_identifier,
    STATE(72), 1,
      sym__double_quote_string,
    STATE(75), 1,
      sym_integer,
    STATE(79), 1,
      sym__single_quote_string,
    STATE(89), 1,
      sym__agg_keywords,
    STATE(278), 1,
      sym_binary_expression,
    STATE(306), 1,
      sym__expression,
    STATE(484), 1,
      sym__alias_identifier,
    ACTIONS(27), 2,
      sym_keyword_count,
      sym_keyword_rank,
    STATE(76), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(78), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(88), 2,
      sym_literal_string,
      sym_decimal_number,
    ACTIONS(23), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(469), 3,
      sym_aggregate_operation,
      sym__aggregate_func,
      sym_assignment,
    ACTIONS(25), 6,
      sym_keyword_average,
      sym_keyword_min,
      sym_keyword_max,
      sym_keyword_stddev,
      sym_keyword_avg,
      sym_keyword_sum,
    STATE(81), 7,
      sym_literal,
      sym_f_string,
      sym_s_string,
      sym_field,
      sym_date,
      sym_time,
      sym_timestamp,
  [708] = 34,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(21), 1,
      sym_pipe,
    ACTIONS(37), 1,
      anon_sym_DOT,
    ACTIONS(39), 1,
      anon_sym_DASH,
    ACTIONS(41), 1,
      anon_sym_DQUOTE,
    ACTIONS(43), 1,
      anon_sym_SQUOTE,
    ACTIONS(45), 1,
      anon_sym_f_DQUOTE,
    ACTIONS(47), 1,
      anon_sym_f_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(49), 1,
      anon_sym_s_DQUOTE,
    ACTIONS(51), 1,
      anon_sym_s_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(53), 1,
      sym__natural_number,
    ACTIONS(55), 1,
      anon_sym__,
    ACTIONS(61), 1,
      anon_sym_AT,
    ACTIONS(103), 1,
      sym_keyword_case,
    ACTIONS(105), 1,
      anon_sym_LPAREN,
    ACTIONS(107), 1,
      anon_sym_BQUOTE,
    ACTIONS(109), 1,
      sym__identifier,
    STATE(6), 1,
      sym_identifier,
    STATE(8), 1,
      sym_comment,
    STATE(17), 1,
      aux_sym__friendly_number,
    STATE(72), 1,
      sym__double_quote_string,
    STATE(75), 1,
      sym_integer,
    STATE(77), 1,
      sym__agg_keywords,
    STATE(79), 1,
      sym__single_quote_string,
    STATE(125), 1,
      sym__expression,
    STATE(232), 1,
      sym__agg_rhs_assignment,
    STATE(484), 1,
      sym__alias_identifier,
    STATE(76), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(78), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(88), 2,
      sym_literal_string,
      sym_decimal_number,
    STATE(228), 2,
      sym_function_call,
      sym_case,
    ACTIONS(23), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    ACTIONS(25), 7,
      sym_keyword_average,
      sym_keyword_min,
      sym_keyword_max,
      sym_keyword_stddev,
      sym_keyword_avg,
      sym_keyword_sum,
      sym_keyword_count_distinct,
    STATE(81), 8,
      sym_literal,
      sym_f_string,
      sym_s_string,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [830] = 34,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(21), 1,
      sym_pipe,
    ACTIONS(37), 1,
      anon_sym_DOT,
    ACTIONS(39), 1,
      anon_sym_DASH,
    ACTIONS(41), 1,
      anon_sym_DQUOTE,
    ACTIONS(43), 1,
      anon_sym_SQUOTE,
    ACTIONS(45), 1,
      anon_sym_f_DQUOTE,
    ACTIONS(47), 1,
      anon_sym_f_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(49), 1,
      anon_sym_s_DQUOTE,
    ACTIONS(51), 1,
      anon_sym_s_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(53), 1,
      sym__natural_number,
    ACTIONS(55), 1,
      anon_sym__,
    ACTIONS(61), 1,
      anon_sym_AT,
    ACTIONS(103), 1,
      sym_keyword_case,
    ACTIONS(105), 1,
      anon_sym_LPAREN,
    ACTIONS(111), 1,
      anon_sym_BQUOTE,
    ACTIONS(113), 1,
      sym__identifier,
    STATE(9), 1,
      sym_comment,
    STATE(17), 1,
      aux_sym__friendly_number,
    STATE(72), 1,
      sym__double_quote_string,
    STATE(75), 1,
      sym_integer,
    STATE(77), 1,
      sym__agg_keywords,
    STATE(79), 1,
      sym__single_quote_string,
    STATE(96), 1,
      sym_identifier,
    STATE(125), 1,
      sym__expression,
    STATE(232), 1,
      sym__agg_rhs_assignment,
    STATE(484), 1,
      sym__alias_identifier,
    STATE(76), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(78), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(88), 2,
      sym_literal_string,
      sym_decimal_number,
    STATE(228), 2,
      sym_function_call,
      sym_case,
    ACTIONS(23), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    ACTIONS(25), 7,
      sym_keyword_average,
      sym_keyword_min,
      sym_keyword_max,
      sym_keyword_stddev,
      sym_keyword_avg,
      sym_keyword_sum,
      sym_keyword_count_distinct,
    STATE(81), 8,
      sym_literal,
      sym_f_string,
      sym_s_string,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [952] = 34,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(21), 1,
      sym_pipe,
    ACTIONS(37), 1,
      anon_sym_DOT,
    ACTIONS(39), 1,
      anon_sym_DASH,
    ACTIONS(41), 1,
      anon_sym_DQUOTE,
    ACTIONS(43), 1,
      anon_sym_SQUOTE,
    ACTIONS(45), 1,
      anon_sym_f_DQUOTE,
    ACTIONS(47), 1,
      anon_sym_f_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(49), 1,
      anon_sym_s_DQUOTE,
    ACTIONS(51), 1,
      anon_sym_s_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(53), 1,
      sym__natural_number,
    ACTIONS(55), 1,
      anon_sym__,
    ACTIONS(61), 1,
      anon_sym_AT,
    ACTIONS(103), 1,
      sym_keyword_case,
    ACTIONS(105), 1,
      anon_sym_LPAREN,
    ACTIONS(115), 1,
      anon_sym_BQUOTE,
    ACTIONS(117), 1,
      sym__identifier,
    STATE(3), 1,
      sym_identifier,
    STATE(10), 1,
      sym_comment,
    STATE(17), 1,
      aux_sym__friendly_number,
    STATE(72), 1,
      sym__double_quote_string,
    STATE(75), 1,
      sym_integer,
    STATE(77), 1,
      sym__agg_keywords,
    STATE(79), 1,
      sym__single_quote_string,
    STATE(125), 1,
      sym__expression,
    STATE(232), 1,
      sym__agg_rhs_assignment,
    STATE(484), 1,
      sym__alias_identifier,
    STATE(76), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(78), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(88), 2,
      sym_literal_string,
      sym_decimal_number,
    STATE(228), 2,
      sym_function_call,
      sym_case,
    ACTIONS(23), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    ACTIONS(25), 7,
      sym_keyword_average,
      sym_keyword_min,
      sym_keyword_max,
      sym_keyword_stddev,
      sym_keyword_avg,
      sym_keyword_sum,
      sym_keyword_count_distinct,
    STATE(81), 8,
      sym_literal,
      sym_f_string,
      sym_s_string,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [1074] = 34,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(21), 1,
      sym_pipe,
    ACTIONS(37), 1,
      anon_sym_DOT,
    ACTIONS(39), 1,
      anon_sym_DASH,
    ACTIONS(41), 1,
      anon_sym_DQUOTE,
    ACTIONS(43), 1,
      anon_sym_SQUOTE,
    ACTIONS(45), 1,
      anon_sym_f_DQUOTE,
    ACTIONS(47), 1,
      anon_sym_f_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(49), 1,
      anon_sym_s_DQUOTE,
    ACTIONS(51), 1,
      anon_sym_s_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(53), 1,
      sym__natural_number,
    ACTIONS(55), 1,
      anon_sym__,
    ACTIONS(61), 1,
      anon_sym_AT,
    ACTIONS(103), 1,
      sym_keyword_case,
    ACTIONS(105), 1,
      anon_sym_LPAREN,
    ACTIONS(119), 1,
      anon_sym_BQUOTE,
    ACTIONS(121), 1,
      sym__identifier,
    STATE(11), 1,
      sym_comment,
    STATE(13), 1,
      sym_identifier,
    STATE(17), 1,
      aux_sym__friendly_number,
    STATE(72), 1,
      sym__double_quote_string,
    STATE(75), 1,
      sym_integer,
    STATE(77), 1,
      sym__agg_keywords,
    STATE(79), 1,
      sym__single_quote_string,
    STATE(125), 1,
      sym__expression,
    STATE(232), 1,
      sym__agg_rhs_assignment,
    STATE(484), 1,
      sym__alias_identifier,
    STATE(76), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(78), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(88), 2,
      sym_literal_string,
      sym_decimal_number,
    STATE(228), 2,
      sym_function_call,
      sym_case,
    ACTIONS(23), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    ACTIONS(25), 7,
      sym_keyword_average,
      sym_keyword_min,
      sym_keyword_max,
      sym_keyword_stddev,
      sym_keyword_avg,
      sym_keyword_sum,
      sym_keyword_count_distinct,
    STATE(81), 8,
      sym_literal,
      sym_f_string,
      sym_s_string,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [1196] = 34,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(21), 1,
      sym_pipe,
    ACTIONS(31), 1,
      anon_sym_LPAREN,
    ACTIONS(37), 1,
      anon_sym_DOT,
    ACTIONS(39), 1,
      anon_sym_DASH,
    ACTIONS(41), 1,
      anon_sym_DQUOTE,
    ACTIONS(43), 1,
      anon_sym_SQUOTE,
    ACTIONS(45), 1,
      anon_sym_f_DQUOTE,
    ACTIONS(47), 1,
      anon_sym_f_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(49), 1,
      anon_sym_s_DQUOTE,
    ACTIONS(51), 1,
      anon_sym_s_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(53), 1,
      sym__natural_number,
    ACTIONS(55), 1,
      anon_sym__,
    ACTIONS(61), 1,
      anon_sym_AT,
    ACTIONS(111), 1,
      anon_sym_BQUOTE,
    ACTIONS(113), 1,
      sym__identifier,
    STATE(12), 1,
      sym_comment,
    STATE(17), 1,
      aux_sym__friendly_number,
    STATE(72), 1,
      sym__double_quote_string,
    STATE(75), 1,
      sym_integer,
    STATE(77), 1,
      sym__agg_keywords,
    STATE(79), 1,
      sym__single_quote_string,
    STATE(96), 1,
      sym_identifier,
    STATE(304), 1,
      sym__expression,
    STATE(315), 1,
      sym_binary_expression,
    STATE(484), 1,
      sym__alias_identifier,
    STATE(501), 1,
      sym_function_call,
    STATE(506), 1,
      sym__agg_rhs_assignment,
    STATE(76), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(78), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(88), 2,
      sym_literal_string,
      sym_decimal_number,
    ACTIONS(23), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    ACTIONS(25), 7,
      sym_keyword_average,
      sym_keyword_min,
      sym_keyword_max,
      sym_keyword_stddev,
      sym_keyword_avg,
      sym_keyword_sum,
      sym_keyword_count_distinct,
    STATE(81), 7,
      sym_literal,
      sym_f_string,
      sym_s_string,
      sym_field,
      sym_date,
      sym_time,
      sym_timestamp,
  [1316] = 21,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(125), 1,
      anon_sym_DOT,
    ACTIONS(127), 1,
      anon_sym_DQUOTE,
    ACTIONS(129), 1,
      anon_sym_SQUOTE,
    ACTIONS(131), 1,
      sym__natural_number,
    ACTIONS(133), 1,
      anon_sym__,
    ACTIONS(135), 1,
      anon_sym_BQUOTE,
    ACTIONS(137), 1,
      sym__identifier,
    STATE(13), 1,
      sym_comment,
    STATE(128), 1,
      aux_sym_function_call_repeat1,
    STATE(185), 1,
      sym_identifier,
    STATE(189), 1,
      aux_sym__friendly_number,
    STATE(195), 1,
      sym_integer,
    STATE(196), 1,
      sym__call_parameter,
    STATE(197), 1,
      sym_literal,
    STATE(199), 2,
      sym__double_quote_string,
      sym__single_quote_string,
    STATE(205), 2,
      sym_literal_string,
      sym_decimal_number,
    ACTIONS(123), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    ACTIONS(63), 13,
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
    ACTIONS(65), 15,
      sym_keyword_filter,
      sym_keyword_derive,
      sym_keyword_group,
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
  [1410] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(143), 2,
      sym__natural_number,
      anon_sym__,
    STATE(14), 2,
      aux_sym__friendly_number,
      sym_comment,
    ACTIONS(141), 5,
      sym_keyword_from,
      anon_sym_EQ,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(139), 35,
      ts_builtin_sym_end,
      sym_keyword_filter,
      sym_keyword_derive,
      sym_keyword_group,
      sym_keyword_aggregate,
      sym_keyword_sort,
      sym_keyword_take,
      sym_keyword_join,
      sym_keyword_select,
      sym_keyword_append,
      sym_keyword_remove,
      sym_keyword_intersect,
      sym_keyword_loop,
      sym_keyword_mod,
      sym_keyword_func,
      sym_keyword_let,
      sym_keyword_from_text,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_DOT,
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
  [1469] = 7,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    STATE(14), 1,
      aux_sym__friendly_number,
    STATE(15), 1,
      sym_comment,
    ACTIONS(53), 2,
      sym__natural_number,
      anon_sym__,
    ACTIONS(148), 5,
      sym_keyword_from,
      anon_sym_EQ,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(146), 35,
      ts_builtin_sym_end,
      sym_keyword_filter,
      sym_keyword_derive,
      sym_keyword_group,
      sym_keyword_aggregate,
      sym_keyword_sort,
      sym_keyword_take,
      sym_keyword_join,
      sym_keyword_select,
      sym_keyword_append,
      sym_keyword_remove,
      sym_keyword_intersect,
      sym_keyword_loop,
      sym_keyword_mod,
      sym_keyword_func,
      sym_keyword_let,
      sym_keyword_from_text,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_DOT,
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
  [1530] = 36,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(21), 1,
      sym_pipe,
    ACTIONS(31), 1,
      anon_sym_LPAREN,
    ACTIONS(37), 1,
      anon_sym_DOT,
    ACTIONS(39), 1,
      anon_sym_DASH,
    ACTIONS(41), 1,
      anon_sym_DQUOTE,
    ACTIONS(43), 1,
      anon_sym_SQUOTE,
    ACTIONS(45), 1,
      anon_sym_f_DQUOTE,
    ACTIONS(47), 1,
      anon_sym_f_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(49), 1,
      anon_sym_s_DQUOTE,
    ACTIONS(51), 1,
      anon_sym_s_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(53), 1,
      sym__natural_number,
    ACTIONS(55), 1,
      anon_sym__,
    ACTIONS(57), 1,
      anon_sym_BQUOTE,
    ACTIONS(59), 1,
      sym__identifier,
    ACTIONS(61), 1,
      anon_sym_AT,
    ACTIONS(150), 1,
      anon_sym_COMMA,
    ACTIONS(152), 1,
      anon_sym_RBRACE,
    STATE(16), 1,
      sym_comment,
    STATE(17), 1,
      aux_sym__friendly_number,
    STATE(26), 1,
      aux_sym_case_repeat1,
    STATE(71), 1,
      sym_identifier,
    STATE(72), 1,
      sym__double_quote_string,
    STATE(75), 1,
      sym_integer,
    STATE(79), 1,
      sym__single_quote_string,
    STATE(271), 1,
      sym_case_condition,
    STATE(309), 1,
      sym_literal,
    STATE(316), 1,
      sym_binary_expression,
    STATE(321), 1,
      sym__expression,
    STATE(442), 1,
      aux_sym_case_repeat2,
    STATE(484), 1,
      sym__alias_identifier,
    STATE(76), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(78), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(88), 2,
      sym_literal_string,
      sym_decimal_number,
    ACTIONS(23), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(81), 6,
      sym_f_string,
      sym_s_string,
      sym_field,
      sym_date,
      sym_time,
      sym_timestamp,
  [1649] = 7,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    STATE(14), 1,
      aux_sym__friendly_number,
    STATE(17), 1,
      sym_comment,
    ACTIONS(53), 2,
      sym__natural_number,
      anon_sym__,
    ACTIONS(156), 5,
      sym_keyword_from,
      anon_sym_EQ,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(154), 35,
      ts_builtin_sym_end,
      sym_keyword_filter,
      sym_keyword_derive,
      sym_keyword_group,
      sym_keyword_aggregate,
      sym_keyword_sort,
      sym_keyword_take,
      sym_keyword_join,
      sym_keyword_select,
      sym_keyword_append,
      sym_keyword_remove,
      sym_keyword_intersect,
      sym_keyword_loop,
      sym_keyword_mod,
      sym_keyword_func,
      sym_keyword_let,
      sym_keyword_from_text,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_DOT,
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
  [1710] = 33,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(21), 1,
      sym_pipe,
    ACTIONS(31), 1,
      anon_sym_LPAREN,
    ACTIONS(37), 1,
      anon_sym_DOT,
    ACTIONS(39), 1,
      anon_sym_DASH,
    ACTIONS(41), 1,
      anon_sym_DQUOTE,
    ACTIONS(43), 1,
      anon_sym_SQUOTE,
    ACTIONS(45), 1,
      anon_sym_f_DQUOTE,
    ACTIONS(47), 1,
      anon_sym_f_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(49), 1,
      anon_sym_s_DQUOTE,
    ACTIONS(51), 1,
      anon_sym_s_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(53), 1,
      sym__natural_number,
    ACTIONS(55), 1,
      anon_sym__,
    ACTIONS(57), 1,
      anon_sym_BQUOTE,
    ACTIONS(59), 1,
      sym__identifier,
    ACTIONS(61), 1,
      anon_sym_AT,
    ACTIONS(158), 1,
      anon_sym_COMMA,
    ACTIONS(160), 1,
      anon_sym_RBRACE,
    STATE(17), 1,
      aux_sym__friendly_number,
    STATE(18), 1,
      sym_comment,
    STATE(71), 1,
      sym_identifier,
    STATE(72), 1,
      sym__double_quote_string,
    STATE(75), 1,
      sym_integer,
    STATE(79), 1,
      sym__single_quote_string,
    STATE(218), 1,
      sym_assignment,
    STATE(273), 1,
      sym__expression,
    STATE(434), 1,
      sym_term,
    STATE(484), 1,
      sym__alias_identifier,
    STATE(76), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(78), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(88), 2,
      sym_literal_string,
      sym_decimal_number,
    ACTIONS(23), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(81), 8,
      sym_literal,
      sym_f_string,
      sym_s_string,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [1822] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    STATE(19), 1,
      sym_comment,
    ACTIONS(164), 17,
      anon_sym_RBRACE,
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
    ACTIONS(162), 25,
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
      sym_keyword_mod,
      sym_keyword_func,
      sym_keyword_let,
      sym_keyword_from_text,
      anon_sym__,
      sym__identifier,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
  [1878] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    STATE(20), 1,
      sym_comment,
    ACTIONS(168), 17,
      anon_sym_RBRACE,
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
    ACTIONS(166), 25,
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
      sym_keyword_mod,
      sym_keyword_func,
      sym_keyword_let,
      sym_keyword_from_text,
      anon_sym__,
      sym__identifier,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
  [1934] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    STATE(21), 1,
      sym_comment,
    ACTIONS(172), 5,
      sym_keyword_from,
      anon_sym_EQ,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(170), 37,
      ts_builtin_sym_end,
      sym_keyword_filter,
      sym_keyword_derive,
      sym_keyword_group,
      sym_keyword_aggregate,
      sym_keyword_sort,
      sym_keyword_take,
      sym_keyword_join,
      sym_keyword_select,
      sym_keyword_append,
      sym_keyword_remove,
      sym_keyword_intersect,
      sym_keyword_loop,
      sym_keyword_mod,
      sym_keyword_func,
      sym_keyword_let,
      sym_keyword_from_text,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_DOT,
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
  [1990] = 33,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(21), 1,
      sym_pipe,
    ACTIONS(31), 1,
      anon_sym_LPAREN,
    ACTIONS(37), 1,
      anon_sym_DOT,
    ACTIONS(39), 1,
      anon_sym_DASH,
    ACTIONS(41), 1,
      anon_sym_DQUOTE,
    ACTIONS(43), 1,
      anon_sym_SQUOTE,
    ACTIONS(45), 1,
      anon_sym_f_DQUOTE,
    ACTIONS(47), 1,
      anon_sym_f_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(49), 1,
      anon_sym_s_DQUOTE,
    ACTIONS(51), 1,
      anon_sym_s_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(53), 1,
      sym__natural_number,
    ACTIONS(55), 1,
      anon_sym__,
    ACTIONS(57), 1,
      anon_sym_BQUOTE,
    ACTIONS(59), 1,
      sym__identifier,
    ACTIONS(61), 1,
      anon_sym_AT,
    ACTIONS(174), 1,
      anon_sym_LBRACE,
    ACTIONS(176), 1,
      sym_bang,
    STATE(17), 1,
      aux_sym__friendly_number,
    STATE(22), 1,
      sym_comment,
    STATE(71), 1,
      sym_identifier,
    STATE(72), 1,
      sym__double_quote_string,
    STATE(75), 1,
      sym_integer,
    STATE(79), 1,
      sym__single_quote_string,
    STATE(130), 1,
      sym__expression,
    STATE(218), 1,
      sym_assignment,
    STATE(262), 1,
      sym_term,
    STATE(484), 1,
      sym__alias_identifier,
    STATE(76), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(78), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(88), 2,
      sym_literal_string,
      sym_decimal_number,
    ACTIONS(23), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(81), 8,
      sym_literal,
      sym_f_string,
      sym_s_string,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [2102] = 32,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(21), 1,
      sym_pipe,
    ACTIONS(31), 1,
      anon_sym_LPAREN,
    ACTIONS(37), 1,
      anon_sym_DOT,
    ACTIONS(39), 1,
      anon_sym_DASH,
    ACTIONS(41), 1,
      anon_sym_DQUOTE,
    ACTIONS(43), 1,
      anon_sym_SQUOTE,
    ACTIONS(45), 1,
      anon_sym_f_DQUOTE,
    ACTIONS(47), 1,
      anon_sym_f_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(49), 1,
      anon_sym_s_DQUOTE,
    ACTIONS(51), 1,
      anon_sym_s_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(53), 1,
      sym__natural_number,
    ACTIONS(55), 1,
      anon_sym__,
    ACTIONS(57), 1,
      anon_sym_BQUOTE,
    ACTIONS(59), 1,
      sym__identifier,
    ACTIONS(61), 1,
      anon_sym_AT,
    ACTIONS(178), 1,
      anon_sym_LBRACE,
    STATE(17), 1,
      aux_sym__friendly_number,
    STATE(23), 1,
      sym_comment,
    STATE(71), 1,
      sym_identifier,
    STATE(72), 1,
      sym__double_quote_string,
    STATE(75), 1,
      sym_integer,
    STATE(79), 1,
      sym__single_quote_string,
    STATE(160), 1,
      sym__expression,
    STATE(241), 1,
      sym_assignment,
    STATE(484), 1,
      sym__alias_identifier,
    STATE(76), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(78), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(88), 2,
      sym_literal_string,
      sym_decimal_number,
    STATE(245), 2,
      sym__tuples,
      sym_term,
    ACTIONS(23), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(81), 8,
      sym_literal,
      sym_f_string,
      sym_s_string,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [2212] = 33,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(21), 1,
      sym_pipe,
    ACTIONS(31), 1,
      anon_sym_LPAREN,
    ACTIONS(37), 1,
      anon_sym_DOT,
    ACTIONS(39), 1,
      anon_sym_DASH,
    ACTIONS(41), 1,
      anon_sym_DQUOTE,
    ACTIONS(43), 1,
      anon_sym_SQUOTE,
    ACTIONS(45), 1,
      anon_sym_f_DQUOTE,
    ACTIONS(47), 1,
      anon_sym_f_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(49), 1,
      anon_sym_s_DQUOTE,
    ACTIONS(51), 1,
      anon_sym_s_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(53), 1,
      sym__natural_number,
    ACTIONS(55), 1,
      anon_sym__,
    ACTIONS(57), 1,
      anon_sym_BQUOTE,
    ACTIONS(59), 1,
      sym__identifier,
    ACTIONS(61), 1,
      anon_sym_AT,
    ACTIONS(180), 1,
      anon_sym_COMMA,
    ACTIONS(182), 1,
      anon_sym_RBRACE,
    STATE(17), 1,
      aux_sym__friendly_number,
    STATE(24), 1,
      sym_comment,
    STATE(71), 1,
      sym_identifier,
    STATE(72), 1,
      sym__double_quote_string,
    STATE(75), 1,
      sym_integer,
    STATE(79), 1,
      sym__single_quote_string,
    STATE(218), 1,
      sym_assignment,
    STATE(273), 1,
      sym__expression,
    STATE(458), 1,
      sym_term,
    STATE(484), 1,
      sym__alias_identifier,
    STATE(76), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(78), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(88), 2,
      sym_literal_string,
      sym_decimal_number,
    ACTIONS(23), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(81), 8,
      sym_literal,
      sym_f_string,
      sym_s_string,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [2324] = 33,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(21), 1,
      sym_pipe,
    ACTIONS(31), 1,
      anon_sym_LPAREN,
    ACTIONS(37), 1,
      anon_sym_DOT,
    ACTIONS(39), 1,
      anon_sym_DASH,
    ACTIONS(41), 1,
      anon_sym_DQUOTE,
    ACTIONS(43), 1,
      anon_sym_SQUOTE,
    ACTIONS(45), 1,
      anon_sym_f_DQUOTE,
    ACTIONS(47), 1,
      anon_sym_f_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(49), 1,
      anon_sym_s_DQUOTE,
    ACTIONS(51), 1,
      anon_sym_s_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(53), 1,
      sym__natural_number,
    ACTIONS(55), 1,
      anon_sym__,
    ACTIONS(57), 1,
      anon_sym_BQUOTE,
    ACTIONS(59), 1,
      sym__identifier,
    ACTIONS(61), 1,
      anon_sym_AT,
    ACTIONS(184), 1,
      anon_sym_COMMA,
    ACTIONS(186), 1,
      anon_sym_RBRACE,
    STATE(17), 1,
      aux_sym__friendly_number,
    STATE(25), 1,
      sym_comment,
    STATE(71), 1,
      sym_identifier,
    STATE(72), 1,
      sym__double_quote_string,
    STATE(75), 1,
      sym_integer,
    STATE(79), 1,
      sym__single_quote_string,
    STATE(218), 1,
      sym_assignment,
    STATE(273), 1,
      sym__expression,
    STATE(429), 1,
      sym_term,
    STATE(484), 1,
      sym__alias_identifier,
    STATE(76), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(78), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(88), 2,
      sym_literal_string,
      sym_decimal_number,
    ACTIONS(23), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(81), 8,
      sym_literal,
      sym_f_string,
      sym_s_string,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [2436] = 33,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(21), 1,
      sym_pipe,
    ACTIONS(191), 1,
      anon_sym_LPAREN,
    ACTIONS(196), 1,
      anon_sym_DOT,
    ACTIONS(199), 1,
      anon_sym_DASH,
    ACTIONS(202), 1,
      anon_sym_DQUOTE,
    ACTIONS(205), 1,
      anon_sym_SQUOTE,
    ACTIONS(208), 1,
      anon_sym_f_DQUOTE,
    ACTIONS(211), 1,
      anon_sym_f_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(214), 1,
      anon_sym_s_DQUOTE,
    ACTIONS(217), 1,
      anon_sym_s_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(220), 1,
      sym__natural_number,
    ACTIONS(223), 1,
      anon_sym__,
    ACTIONS(226), 1,
      anon_sym_BQUOTE,
    ACTIONS(229), 1,
      sym__identifier,
    ACTIONS(232), 1,
      anon_sym_AT,
    STATE(17), 1,
      aux_sym__friendly_number,
    STATE(71), 1,
      sym_identifier,
    STATE(72), 1,
      sym__double_quote_string,
    STATE(75), 1,
      sym_integer,
    STATE(79), 1,
      sym__single_quote_string,
    STATE(271), 1,
      sym_case_condition,
    STATE(309), 1,
      sym_literal,
    STATE(316), 1,
      sym_binary_expression,
    STATE(321), 1,
      sym__expression,
    STATE(484), 1,
      sym__alias_identifier,
    ACTIONS(194), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
    STATE(26), 2,
      sym_comment,
      aux_sym_case_repeat1,
    STATE(76), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(78), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(88), 2,
      sym_literal_string,
      sym_decimal_number,
    ACTIONS(188), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(81), 6,
      sym_f_string,
      sym_s_string,
      sym_field,
      sym_date,
      sym_time,
      sym_timestamp,
  [2548] = 32,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(21), 1,
      sym_pipe,
    ACTIONS(31), 1,
      anon_sym_LPAREN,
    ACTIONS(37), 1,
      anon_sym_DOT,
    ACTIONS(39), 1,
      anon_sym_DASH,
    ACTIONS(41), 1,
      anon_sym_DQUOTE,
    ACTIONS(43), 1,
      anon_sym_SQUOTE,
    ACTIONS(45), 1,
      anon_sym_f_DQUOTE,
    ACTIONS(47), 1,
      anon_sym_f_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(49), 1,
      anon_sym_s_DQUOTE,
    ACTIONS(51), 1,
      anon_sym_s_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(53), 1,
      sym__natural_number,
    ACTIONS(55), 1,
      anon_sym__,
    ACTIONS(57), 1,
      anon_sym_BQUOTE,
    ACTIONS(59), 1,
      sym__identifier,
    ACTIONS(61), 1,
      anon_sym_AT,
    ACTIONS(178), 1,
      anon_sym_LBRACE,
    STATE(17), 1,
      aux_sym__friendly_number,
    STATE(27), 1,
      sym_comment,
    STATE(71), 1,
      sym_identifier,
    STATE(72), 1,
      sym__double_quote_string,
    STATE(75), 1,
      sym_integer,
    STATE(79), 1,
      sym__single_quote_string,
    STATE(241), 1,
      sym_assignment,
    STATE(273), 1,
      sym__expression,
    STATE(484), 1,
      sym__alias_identifier,
    STATE(76), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(78), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(88), 2,
      sym_literal_string,
      sym_decimal_number,
    STATE(245), 2,
      sym__tuples,
      sym_term,
    ACTIONS(23), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(81), 8,
      sym_literal,
      sym_f_string,
      sym_s_string,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [2658] = 32,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(21), 1,
      sym_pipe,
    ACTIONS(31), 1,
      anon_sym_LPAREN,
    ACTIONS(37), 1,
      anon_sym_DOT,
    ACTIONS(39), 1,
      anon_sym_DASH,
    ACTIONS(41), 1,
      anon_sym_DQUOTE,
    ACTIONS(43), 1,
      anon_sym_SQUOTE,
    ACTIONS(45), 1,
      anon_sym_f_DQUOTE,
    ACTIONS(47), 1,
      anon_sym_f_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(49), 1,
      anon_sym_s_DQUOTE,
    ACTIONS(51), 1,
      anon_sym_s_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(53), 1,
      sym__natural_number,
    ACTIONS(55), 1,
      anon_sym__,
    ACTIONS(57), 1,
      anon_sym_BQUOTE,
    ACTIONS(59), 1,
      sym__identifier,
    ACTIONS(61), 1,
      anon_sym_AT,
    ACTIONS(178), 1,
      anon_sym_LBRACE,
    STATE(17), 1,
      aux_sym__friendly_number,
    STATE(28), 1,
      sym_comment,
    STATE(71), 1,
      sym_identifier,
    STATE(72), 1,
      sym__double_quote_string,
    STATE(75), 1,
      sym_integer,
    STATE(79), 1,
      sym__single_quote_string,
    STATE(130), 1,
      sym__expression,
    STATE(241), 1,
      sym_assignment,
    STATE(484), 1,
      sym__alias_identifier,
    STATE(76), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(78), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(88), 2,
      sym_literal_string,
      sym_decimal_number,
    STATE(245), 2,
      sym__tuples,
      sym_term,
    ACTIONS(23), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(81), 8,
      sym_literal,
      sym_f_string,
      sym_s_string,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [2768] = 34,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(21), 1,
      sym_pipe,
    ACTIONS(31), 1,
      anon_sym_LPAREN,
    ACTIONS(37), 1,
      anon_sym_DOT,
    ACTIONS(39), 1,
      anon_sym_DASH,
    ACTIONS(41), 1,
      anon_sym_DQUOTE,
    ACTIONS(43), 1,
      anon_sym_SQUOTE,
    ACTIONS(45), 1,
      anon_sym_f_DQUOTE,
    ACTIONS(47), 1,
      anon_sym_f_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(49), 1,
      anon_sym_s_DQUOTE,
    ACTIONS(51), 1,
      anon_sym_s_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(53), 1,
      sym__natural_number,
    ACTIONS(55), 1,
      anon_sym__,
    ACTIONS(57), 1,
      anon_sym_BQUOTE,
    ACTIONS(59), 1,
      sym__identifier,
    ACTIONS(61), 1,
      anon_sym_AT,
    STATE(17), 1,
      aux_sym__friendly_number,
    STATE(26), 1,
      aux_sym_case_repeat1,
    STATE(29), 1,
      sym_comment,
    STATE(71), 1,
      sym_identifier,
    STATE(72), 1,
      sym__double_quote_string,
    STATE(75), 1,
      sym_integer,
    STATE(79), 1,
      sym__single_quote_string,
    STATE(271), 1,
      sym_case_condition,
    STATE(309), 1,
      sym_literal,
    STATE(316), 1,
      sym_binary_expression,
    STATE(321), 1,
      sym__expression,
    STATE(484), 1,
      sym__alias_identifier,
    ACTIONS(235), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
    STATE(76), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(78), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(88), 2,
      sym_literal_string,
      sym_decimal_number,
    ACTIONS(23), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(81), 6,
      sym_f_string,
      sym_s_string,
      sym_field,
      sym_date,
      sym_time,
      sym_timestamp,
  [2882] = 32,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(21), 1,
      sym_pipe,
    ACTIONS(31), 1,
      anon_sym_LPAREN,
    ACTIONS(37), 1,
      anon_sym_DOT,
    ACTIONS(39), 1,
      anon_sym_DASH,
    ACTIONS(41), 1,
      anon_sym_DQUOTE,
    ACTIONS(43), 1,
      anon_sym_SQUOTE,
    ACTIONS(45), 1,
      anon_sym_f_DQUOTE,
    ACTIONS(47), 1,
      anon_sym_f_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(49), 1,
      anon_sym_s_DQUOTE,
    ACTIONS(51), 1,
      anon_sym_s_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(53), 1,
      sym__natural_number,
    ACTIONS(55), 1,
      anon_sym__,
    ACTIONS(57), 1,
      anon_sym_BQUOTE,
    ACTIONS(59), 1,
      sym__identifier,
    ACTIONS(61), 1,
      anon_sym_AT,
    ACTIONS(178), 1,
      anon_sym_LBRACE,
    STATE(17), 1,
      aux_sym__friendly_number,
    STATE(30), 1,
      sym_comment,
    STATE(71), 1,
      sym_identifier,
    STATE(72), 1,
      sym__double_quote_string,
    STATE(75), 1,
      sym_integer,
    STATE(79), 1,
      sym__single_quote_string,
    STATE(131), 1,
      sym__expression,
    STATE(241), 1,
      sym_assignment,
    STATE(484), 1,
      sym__alias_identifier,
    STATE(76), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(78), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(88), 2,
      sym_literal_string,
      sym_decimal_number,
    STATE(245), 2,
      sym__tuples,
      sym_term,
    ACTIONS(23), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(81), 8,
      sym_literal,
      sym_f_string,
      sym_s_string,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [2992] = 35,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(21), 1,
      sym_pipe,
    ACTIONS(31), 1,
      anon_sym_LPAREN,
    ACTIONS(37), 1,
      anon_sym_DOT,
    ACTIONS(39), 1,
      anon_sym_DASH,
    ACTIONS(41), 1,
      anon_sym_DQUOTE,
    ACTIONS(43), 1,
      anon_sym_SQUOTE,
    ACTIONS(45), 1,
      anon_sym_f_DQUOTE,
    ACTIONS(47), 1,
      anon_sym_f_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(49), 1,
      anon_sym_s_DQUOTE,
    ACTIONS(51), 1,
      anon_sym_s_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(53), 1,
      sym__natural_number,
    ACTIONS(55), 1,
      anon_sym__,
    ACTIONS(57), 1,
      anon_sym_BQUOTE,
    ACTIONS(59), 1,
      sym__identifier,
    ACTIONS(61), 1,
      anon_sym_AT,
    ACTIONS(237), 1,
      anon_sym_COMMA,
    ACTIONS(239), 1,
      anon_sym_RBRACE,
    STATE(16), 1,
      aux_sym_case_repeat1,
    STATE(17), 1,
      aux_sym__friendly_number,
    STATE(31), 1,
      sym_comment,
    STATE(71), 1,
      sym_identifier,
    STATE(72), 1,
      sym__double_quote_string,
    STATE(75), 1,
      sym_integer,
    STATE(79), 1,
      sym__single_quote_string,
    STATE(271), 1,
      sym_case_condition,
    STATE(309), 1,
      sym_literal,
    STATE(316), 1,
      sym_binary_expression,
    STATE(321), 1,
      sym__expression,
    STATE(484), 1,
      sym__alias_identifier,
    STATE(76), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(78), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(88), 2,
      sym_literal_string,
      sym_decimal_number,
    ACTIONS(23), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(81), 6,
      sym_f_string,
      sym_s_string,
      sym_field,
      sym_date,
      sym_time,
      sym_timestamp,
  [3108] = 33,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(21), 1,
      sym_pipe,
    ACTIONS(31), 1,
      anon_sym_LPAREN,
    ACTIONS(37), 1,
      anon_sym_DOT,
    ACTIONS(39), 1,
      anon_sym_DASH,
    ACTIONS(41), 1,
      anon_sym_DQUOTE,
    ACTIONS(43), 1,
      anon_sym_SQUOTE,
    ACTIONS(45), 1,
      anon_sym_f_DQUOTE,
    ACTIONS(47), 1,
      anon_sym_f_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(49), 1,
      anon_sym_s_DQUOTE,
    ACTIONS(51), 1,
      anon_sym_s_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(53), 1,
      sym__natural_number,
    ACTIONS(55), 1,
      anon_sym__,
    ACTIONS(57), 1,
      anon_sym_BQUOTE,
    ACTIONS(59), 1,
      sym__identifier,
    ACTIONS(61), 1,
      anon_sym_AT,
    ACTIONS(174), 1,
      anon_sym_LBRACE,
    ACTIONS(176), 1,
      sym_bang,
    STATE(17), 1,
      aux_sym__friendly_number,
    STATE(32), 1,
      sym_comment,
    STATE(71), 1,
      sym_identifier,
    STATE(72), 1,
      sym__double_quote_string,
    STATE(75), 1,
      sym_integer,
    STATE(79), 1,
      sym__single_quote_string,
    STATE(160), 1,
      sym__expression,
    STATE(218), 1,
      sym_assignment,
    STATE(262), 1,
      sym_term,
    STATE(484), 1,
      sym__alias_identifier,
    STATE(76), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(78), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(88), 2,
      sym_literal_string,
      sym_decimal_number,
    ACTIONS(23), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(81), 8,
      sym_literal,
      sym_f_string,
      sym_s_string,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [3220] = 33,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(21), 1,
      sym_pipe,
    ACTIONS(37), 1,
      anon_sym_DOT,
    ACTIONS(39), 1,
      anon_sym_DASH,
    ACTIONS(41), 1,
      anon_sym_DQUOTE,
    ACTIONS(43), 1,
      anon_sym_SQUOTE,
    ACTIONS(45), 1,
      anon_sym_f_DQUOTE,
    ACTIONS(47), 1,
      anon_sym_f_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(49), 1,
      anon_sym_s_DQUOTE,
    ACTIONS(51), 1,
      anon_sym_s_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(53), 1,
      sym__natural_number,
    ACTIONS(55), 1,
      anon_sym__,
    ACTIONS(57), 1,
      anon_sym_BQUOTE,
    ACTIONS(59), 1,
      sym__identifier,
    ACTIONS(61), 1,
      anon_sym_AT,
    ACTIONS(241), 1,
      anon_sym_LPAREN,
    ACTIONS(243), 1,
      anon_sym_COMMA,
    ACTIONS(245), 1,
      anon_sym_RBRACE,
    STATE(17), 1,
      aux_sym__friendly_number,
    STATE(33), 1,
      sym_comment,
    STATE(71), 1,
      sym_identifier,
    STATE(72), 1,
      sym__double_quote_string,
    STATE(75), 1,
      sym_integer,
    STATE(79), 1,
      sym__single_quote_string,
    STATE(218), 1,
      sym_assignment,
    STATE(273), 1,
      sym__expression,
    STATE(448), 1,
      sym_term,
    STATE(484), 1,
      sym__alias_identifier,
    STATE(76), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(78), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(88), 2,
      sym_literal_string,
      sym_decimal_number,
    ACTIONS(23), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(81), 8,
      sym_literal,
      sym_f_string,
      sym_s_string,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [3332] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    STATE(34), 1,
      sym_comment,
    ACTIONS(164), 17,
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
    ACTIONS(162), 25,
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
      sym_keyword_mod,
      sym_keyword_func,
      sym_keyword_let,
      sym_keyword_from_text,
      anon_sym__,
      sym__identifier,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
  [3388] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    STATE(35), 1,
      sym_comment,
    ACTIONS(168), 17,
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
    ACTIONS(166), 25,
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
      sym_keyword_mod,
      sym_keyword_func,
      sym_keyword_let,
      sym_keyword_from_text,
      anon_sym__,
      sym__identifier,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
  [3444] = 33,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(21), 1,
      sym_pipe,
    ACTIONS(31), 1,
      anon_sym_LPAREN,
    ACTIONS(37), 1,
      anon_sym_DOT,
    ACTIONS(39), 1,
      anon_sym_DASH,
    ACTIONS(41), 1,
      anon_sym_DQUOTE,
    ACTIONS(43), 1,
      anon_sym_SQUOTE,
    ACTIONS(45), 1,
      anon_sym_f_DQUOTE,
    ACTIONS(47), 1,
      anon_sym_f_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(49), 1,
      anon_sym_s_DQUOTE,
    ACTIONS(51), 1,
      anon_sym_s_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(53), 1,
      sym__natural_number,
    ACTIONS(55), 1,
      anon_sym__,
    ACTIONS(57), 1,
      anon_sym_BQUOTE,
    ACTIONS(59), 1,
      sym__identifier,
    ACTIONS(61), 1,
      anon_sym_AT,
    ACTIONS(174), 1,
      anon_sym_LBRACE,
    ACTIONS(176), 1,
      sym_bang,
    STATE(17), 1,
      aux_sym__friendly_number,
    STATE(36), 1,
      sym_comment,
    STATE(71), 1,
      sym_identifier,
    STATE(72), 1,
      sym__double_quote_string,
    STATE(75), 1,
      sym_integer,
    STATE(79), 1,
      sym__single_quote_string,
    STATE(131), 1,
      sym__expression,
    STATE(218), 1,
      sym_assignment,
    STATE(262), 1,
      sym_term,
    STATE(484), 1,
      sym__alias_identifier,
    STATE(76), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(78), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(88), 2,
      sym_literal_string,
      sym_decimal_number,
    ACTIONS(23), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(81), 8,
      sym_literal,
      sym_f_string,
      sym_s_string,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [3556] = 7,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(251), 1,
      anon_sym_COLON,
    ACTIONS(253), 1,
      anon_sym_DOT,
    STATE(37), 1,
      sym_comment,
    ACTIONS(249), 5,
      sym_keyword_from,
      anon_sym_EQ,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(247), 34,
      ts_builtin_sym_end,
      sym_keyword_filter,
      sym_keyword_derive,
      sym_keyword_group,
      sym_keyword_aggregate,
      sym_keyword_sort,
      sym_keyword_take,
      sym_keyword_join,
      sym_keyword_select,
      sym_keyword_append,
      sym_keyword_remove,
      sym_keyword_intersect,
      sym_keyword_loop,
      sym_keyword_mod,
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
  [3615] = 32,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(21), 1,
      sym_pipe,
    ACTIONS(37), 1,
      anon_sym_DOT,
    ACTIONS(39), 1,
      anon_sym_DASH,
    ACTIONS(41), 1,
      anon_sym_DQUOTE,
    ACTIONS(43), 1,
      anon_sym_SQUOTE,
    ACTIONS(45), 1,
      anon_sym_f_DQUOTE,
    ACTIONS(47), 1,
      anon_sym_f_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(49), 1,
      anon_sym_s_DQUOTE,
    ACTIONS(51), 1,
      anon_sym_s_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(53), 1,
      sym__natural_number,
    ACTIONS(55), 1,
      anon_sym__,
    ACTIONS(57), 1,
      anon_sym_BQUOTE,
    ACTIONS(59), 1,
      sym__identifier,
    ACTIONS(61), 1,
      anon_sym_AT,
    ACTIONS(255), 1,
      anon_sym_LPAREN,
    ACTIONS(257), 1,
      anon_sym_RBRACE,
    STATE(17), 1,
      aux_sym__friendly_number,
    STATE(38), 1,
      sym_comment,
    STATE(71), 1,
      sym_identifier,
    STATE(72), 1,
      sym__double_quote_string,
    STATE(75), 1,
      sym_integer,
    STATE(79), 1,
      sym__single_quote_string,
    STATE(218), 1,
      sym_assignment,
    STATE(273), 1,
      sym__expression,
    STATE(476), 1,
      sym_term,
    STATE(484), 1,
      sym__alias_identifier,
    STATE(76), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(78), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(88), 2,
      sym_literal_string,
      sym_decimal_number,
    ACTIONS(23), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(81), 8,
      sym_literal,
      sym_f_string,
      sym_s_string,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [3724] = 32,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(21), 1,
      sym_pipe,
    ACTIONS(31), 1,
      anon_sym_LPAREN,
    ACTIONS(37), 1,
      anon_sym_DOT,
    ACTIONS(39), 1,
      anon_sym_DASH,
    ACTIONS(41), 1,
      anon_sym_DQUOTE,
    ACTIONS(43), 1,
      anon_sym_SQUOTE,
    ACTIONS(45), 1,
      anon_sym_f_DQUOTE,
    ACTIONS(47), 1,
      anon_sym_f_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(49), 1,
      anon_sym_s_DQUOTE,
    ACTIONS(51), 1,
      anon_sym_s_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(53), 1,
      sym__natural_number,
    ACTIONS(55), 1,
      anon_sym__,
    ACTIONS(57), 1,
      anon_sym_BQUOTE,
    ACTIONS(59), 1,
      sym__identifier,
    ACTIONS(61), 1,
      anon_sym_AT,
    ACTIONS(259), 1,
      anon_sym_RBRACE,
    STATE(17), 1,
      aux_sym__friendly_number,
    STATE(39), 1,
      sym_comment,
    STATE(71), 1,
      sym_identifier,
    STATE(72), 1,
      sym__double_quote_string,
    STATE(75), 1,
      sym_integer,
    STATE(79), 1,
      sym__single_quote_string,
    STATE(218), 1,
      sym_assignment,
    STATE(273), 1,
      sym__expression,
    STATE(459), 1,
      sym_term,
    STATE(484), 1,
      sym__alias_identifier,
    STATE(76), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(78), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(88), 2,
      sym_literal_string,
      sym_decimal_number,
    ACTIONS(23), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(81), 8,
      sym_literal,
      sym_f_string,
      sym_s_string,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [3833] = 7,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(265), 1,
      anon_sym_COLON,
    ACTIONS(267), 1,
      anon_sym_DOT,
    STATE(40), 1,
      sym_comment,
    ACTIONS(263), 5,
      sym_keyword_from,
      anon_sym_EQ,
      anon_sym_SLASH,
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
      sym_keyword_join,
      sym_keyword_select,
      sym_keyword_append,
      sym_keyword_remove,
      sym_keyword_intersect,
      sym_keyword_loop,
      sym_keyword_mod,
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
  [3892] = 32,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(21), 1,
      sym_pipe,
    ACTIONS(31), 1,
      anon_sym_LPAREN,
    ACTIONS(37), 1,
      anon_sym_DOT,
    ACTIONS(39), 1,
      anon_sym_DASH,
    ACTIONS(41), 1,
      anon_sym_DQUOTE,
    ACTIONS(43), 1,
      anon_sym_SQUOTE,
    ACTIONS(45), 1,
      anon_sym_f_DQUOTE,
    ACTIONS(47), 1,
      anon_sym_f_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(49), 1,
      anon_sym_s_DQUOTE,
    ACTIONS(51), 1,
      anon_sym_s_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(53), 1,
      sym__natural_number,
    ACTIONS(55), 1,
      anon_sym__,
    ACTIONS(57), 1,
      anon_sym_BQUOTE,
    ACTIONS(59), 1,
      sym__identifier,
    ACTIONS(61), 1,
      anon_sym_AT,
    ACTIONS(269), 1,
      anon_sym_RBRACE,
    STATE(17), 1,
      aux_sym__friendly_number,
    STATE(41), 1,
      sym_comment,
    STATE(71), 1,
      sym_identifier,
    STATE(72), 1,
      sym__double_quote_string,
    STATE(75), 1,
      sym_integer,
    STATE(79), 1,
      sym__single_quote_string,
    STATE(218), 1,
      sym_assignment,
    STATE(273), 1,
      sym__expression,
    STATE(459), 1,
      sym_term,
    STATE(484), 1,
      sym__alias_identifier,
    STATE(76), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(78), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(88), 2,
      sym_literal_string,
      sym_decimal_number,
    ACTIONS(23), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(81), 8,
      sym_literal,
      sym_f_string,
      sym_s_string,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [4001] = 33,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(21), 1,
      sym_pipe,
    ACTIONS(31), 1,
      anon_sym_LPAREN,
    ACTIONS(37), 1,
      anon_sym_DOT,
    ACTIONS(39), 1,
      anon_sym_DASH,
    ACTIONS(41), 1,
      anon_sym_DQUOTE,
    ACTIONS(43), 1,
      anon_sym_SQUOTE,
    ACTIONS(45), 1,
      anon_sym_f_DQUOTE,
    ACTIONS(47), 1,
      anon_sym_f_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(49), 1,
      anon_sym_s_DQUOTE,
    ACTIONS(51), 1,
      anon_sym_s_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(53), 1,
      sym__natural_number,
    ACTIONS(55), 1,
      anon_sym__,
    ACTIONS(57), 1,
      anon_sym_BQUOTE,
    ACTIONS(59), 1,
      sym__identifier,
    ACTIONS(61), 1,
      anon_sym_AT,
    ACTIONS(271), 1,
      anon_sym_RPAREN,
    ACTIONS(273), 1,
      anon_sym_EQ_EQ,
    STATE(17), 1,
      aux_sym__friendly_number,
    STATE(42), 1,
      sym_comment,
    STATE(71), 1,
      sym_identifier,
    STATE(72), 1,
      sym__double_quote_string,
    STATE(75), 1,
      sym_integer,
    STATE(79), 1,
      sym__single_quote_string,
    STATE(277), 1,
      sym_binary_expression,
    STATE(321), 1,
      sym__expression,
    STATE(484), 1,
      sym__alias_identifier,
    STATE(497), 1,
      sym__self_join,
    STATE(76), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(78), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(88), 2,
      sym_literal_string,
      sym_decimal_number,
    ACTIONS(23), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(81), 7,
      sym_literal,
      sym_f_string,
      sym_s_string,
      sym_field,
      sym_date,
      sym_time,
      sym_timestamp,
  [4112] = 32,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(21), 1,
      sym_pipe,
    ACTIONS(31), 1,
      anon_sym_LPAREN,
    ACTIONS(37), 1,
      anon_sym_DOT,
    ACTIONS(39), 1,
      anon_sym_DASH,
    ACTIONS(41), 1,
      anon_sym_DQUOTE,
    ACTIONS(43), 1,
      anon_sym_SQUOTE,
    ACTIONS(45), 1,
      anon_sym_f_DQUOTE,
    ACTIONS(47), 1,
      anon_sym_f_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(49), 1,
      anon_sym_s_DQUOTE,
    ACTIONS(51), 1,
      anon_sym_s_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(53), 1,
      sym__natural_number,
    ACTIONS(55), 1,
      anon_sym__,
    ACTIONS(57), 1,
      anon_sym_BQUOTE,
    ACTIONS(59), 1,
      sym__identifier,
    ACTIONS(61), 1,
      anon_sym_AT,
    ACTIONS(275), 1,
      anon_sym_RBRACE,
    STATE(17), 1,
      aux_sym__friendly_number,
    STATE(43), 1,
      sym_comment,
    STATE(71), 1,
      sym_identifier,
    STATE(72), 1,
      sym__double_quote_string,
    STATE(75), 1,
      sym_integer,
    STATE(79), 1,
      sym__single_quote_string,
    STATE(218), 1,
      sym_assignment,
    STATE(273), 1,
      sym__expression,
    STATE(459), 1,
      sym_term,
    STATE(484), 1,
      sym__alias_identifier,
    STATE(76), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(78), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(88), 2,
      sym_literal_string,
      sym_decimal_number,
    ACTIONS(23), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(81), 8,
      sym_literal,
      sym_f_string,
      sym_s_string,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [4221] = 32,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(21), 1,
      sym_pipe,
    ACTIONS(31), 1,
      anon_sym_LPAREN,
    ACTIONS(37), 1,
      anon_sym_DOT,
    ACTIONS(39), 1,
      anon_sym_DASH,
    ACTIONS(41), 1,
      anon_sym_DQUOTE,
    ACTIONS(43), 1,
      anon_sym_SQUOTE,
    ACTIONS(45), 1,
      anon_sym_f_DQUOTE,
    ACTIONS(47), 1,
      anon_sym_f_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(49), 1,
      anon_sym_s_DQUOTE,
    ACTIONS(51), 1,
      anon_sym_s_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(53), 1,
      sym__natural_number,
    ACTIONS(55), 1,
      anon_sym__,
    ACTIONS(57), 1,
      anon_sym_BQUOTE,
    ACTIONS(59), 1,
      sym__identifier,
    ACTIONS(61), 1,
      anon_sym_AT,
    ACTIONS(277), 1,
      anon_sym_RBRACE,
    STATE(17), 1,
      aux_sym__friendly_number,
    STATE(44), 1,
      sym_comment,
    STATE(71), 1,
      sym_identifier,
    STATE(72), 1,
      sym__double_quote_string,
    STATE(75), 1,
      sym_integer,
    STATE(79), 1,
      sym__single_quote_string,
    STATE(218), 1,
      sym_assignment,
    STATE(273), 1,
      sym__expression,
    STATE(459), 1,
      sym_term,
    STATE(484), 1,
      sym__alias_identifier,
    STATE(76), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(78), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(88), 2,
      sym_literal_string,
      sym_decimal_number,
    ACTIONS(23), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(81), 8,
      sym_literal,
      sym_f_string,
      sym_s_string,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [4330] = 9,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(285), 1,
      anon_sym_Z,
    STATE(45), 1,
      sym_comment,
    STATE(86), 1,
      sym_timezone,
    STATE(493), 1,
      sym_direction,
    ACTIONS(283), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(281), 5,
      sym_keyword_from,
      anon_sym_EQ,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(279), 31,
      ts_builtin_sym_end,
      sym_keyword_filter,
      sym_keyword_derive,
      sym_keyword_group,
      sym_keyword_aggregate,
      sym_keyword_sort,
      sym_keyword_take,
      sym_keyword_join,
      sym_keyword_select,
      sym_keyword_append,
      sym_keyword_remove,
      sym_keyword_intersect,
      sym_keyword_loop,
      sym_keyword_mod,
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
  [4393] = 32,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(21), 1,
      sym_pipe,
    ACTIONS(37), 1,
      anon_sym_DOT,
    ACTIONS(39), 1,
      anon_sym_DASH,
    ACTIONS(41), 1,
      anon_sym_DQUOTE,
    ACTIONS(43), 1,
      anon_sym_SQUOTE,
    ACTIONS(45), 1,
      anon_sym_f_DQUOTE,
    ACTIONS(47), 1,
      anon_sym_f_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(49), 1,
      anon_sym_s_DQUOTE,
    ACTIONS(51), 1,
      anon_sym_s_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(53), 1,
      sym__natural_number,
    ACTIONS(55), 1,
      anon_sym__,
    ACTIONS(57), 1,
      anon_sym_BQUOTE,
    ACTIONS(59), 1,
      sym__identifier,
    ACTIONS(61), 1,
      anon_sym_AT,
    ACTIONS(255), 1,
      anon_sym_LPAREN,
    ACTIONS(287), 1,
      anon_sym_RBRACE,
    STATE(17), 1,
      aux_sym__friendly_number,
    STATE(46), 1,
      sym_comment,
    STATE(71), 1,
      sym_identifier,
    STATE(72), 1,
      sym__double_quote_string,
    STATE(75), 1,
      sym_integer,
    STATE(79), 1,
      sym__single_quote_string,
    STATE(218), 1,
      sym_assignment,
    STATE(273), 1,
      sym__expression,
    STATE(476), 1,
      sym_term,
    STATE(484), 1,
      sym__alias_identifier,
    STATE(76), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(78), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(88), 2,
      sym_literal_string,
      sym_decimal_number,
    ACTIONS(23), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(81), 8,
      sym_literal,
      sym_f_string,
      sym_s_string,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [4502] = 32,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(21), 1,
      sym_pipe,
    ACTIONS(31), 1,
      anon_sym_LPAREN,
    ACTIONS(37), 1,
      anon_sym_DOT,
    ACTIONS(39), 1,
      anon_sym_DASH,
    ACTIONS(41), 1,
      anon_sym_DQUOTE,
    ACTIONS(43), 1,
      anon_sym_SQUOTE,
    ACTIONS(45), 1,
      anon_sym_f_DQUOTE,
    ACTIONS(47), 1,
      anon_sym_f_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(49), 1,
      anon_sym_s_DQUOTE,
    ACTIONS(51), 1,
      anon_sym_s_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(53), 1,
      sym__natural_number,
    ACTIONS(55), 1,
      anon_sym__,
    ACTIONS(57), 1,
      anon_sym_BQUOTE,
    ACTIONS(59), 1,
      sym__identifier,
    ACTIONS(61), 1,
      anon_sym_AT,
    ACTIONS(289), 1,
      anon_sym_RBRACE,
    STATE(17), 1,
      aux_sym__friendly_number,
    STATE(47), 1,
      sym_comment,
    STATE(71), 1,
      sym_identifier,
    STATE(72), 1,
      sym__double_quote_string,
    STATE(75), 1,
      sym_integer,
    STATE(79), 1,
      sym__single_quote_string,
    STATE(218), 1,
      sym_assignment,
    STATE(273), 1,
      sym__expression,
    STATE(459), 1,
      sym_term,
    STATE(484), 1,
      sym__alias_identifier,
    STATE(76), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(78), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(88), 2,
      sym_literal_string,
      sym_decimal_number,
    ACTIONS(23), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(81), 8,
      sym_literal,
      sym_f_string,
      sym_s_string,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [4611] = 32,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(21), 1,
      sym_pipe,
    ACTIONS(37), 1,
      anon_sym_DOT,
    ACTIONS(39), 1,
      anon_sym_DASH,
    ACTIONS(41), 1,
      anon_sym_DQUOTE,
    ACTIONS(43), 1,
      anon_sym_SQUOTE,
    ACTIONS(45), 1,
      anon_sym_f_DQUOTE,
    ACTIONS(47), 1,
      anon_sym_f_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(49), 1,
      anon_sym_s_DQUOTE,
    ACTIONS(51), 1,
      anon_sym_s_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(53), 1,
      sym__natural_number,
    ACTIONS(55), 1,
      anon_sym__,
    ACTIONS(57), 1,
      anon_sym_BQUOTE,
    ACTIONS(59), 1,
      sym__identifier,
    ACTIONS(61), 1,
      anon_sym_AT,
    ACTIONS(255), 1,
      anon_sym_LPAREN,
    ACTIONS(291), 1,
      anon_sym_RBRACE,
    STATE(17), 1,
      aux_sym__friendly_number,
    STATE(48), 1,
      sym_comment,
    STATE(71), 1,
      sym_identifier,
    STATE(72), 1,
      sym__double_quote_string,
    STATE(75), 1,
      sym_integer,
    STATE(79), 1,
      sym__single_quote_string,
    STATE(218), 1,
      sym_assignment,
    STATE(273), 1,
      sym__expression,
    STATE(476), 1,
      sym_term,
    STATE(484), 1,
      sym__alias_identifier,
    STATE(76), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(78), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(88), 2,
      sym_literal_string,
      sym_decimal_number,
    ACTIONS(23), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(81), 8,
      sym_literal,
      sym_f_string,
      sym_s_string,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [4720] = 34,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(21), 1,
      sym_pipe,
    ACTIONS(31), 1,
      anon_sym_LPAREN,
    ACTIONS(37), 1,
      anon_sym_DOT,
    ACTIONS(39), 1,
      anon_sym_DASH,
    ACTIONS(41), 1,
      anon_sym_DQUOTE,
    ACTIONS(43), 1,
      anon_sym_SQUOTE,
    ACTIONS(45), 1,
      anon_sym_f_DQUOTE,
    ACTIONS(47), 1,
      anon_sym_f_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(49), 1,
      anon_sym_s_DQUOTE,
    ACTIONS(51), 1,
      anon_sym_s_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(53), 1,
      sym__natural_number,
    ACTIONS(55), 1,
      anon_sym__,
    ACTIONS(57), 1,
      anon_sym_BQUOTE,
    ACTIONS(59), 1,
      sym__identifier,
    ACTIONS(61), 1,
      anon_sym_AT,
    ACTIONS(293), 1,
      anon_sym_RBRACE,
    STATE(17), 1,
      aux_sym__friendly_number,
    STATE(29), 1,
      aux_sym_case_repeat1,
    STATE(49), 1,
      sym_comment,
    STATE(71), 1,
      sym_identifier,
    STATE(72), 1,
      sym__double_quote_string,
    STATE(75), 1,
      sym_integer,
    STATE(79), 1,
      sym__single_quote_string,
    STATE(271), 1,
      sym_case_condition,
    STATE(309), 1,
      sym_literal,
    STATE(316), 1,
      sym_binary_expression,
    STATE(321), 1,
      sym__expression,
    STATE(484), 1,
      sym__alias_identifier,
    STATE(76), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(78), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(88), 2,
      sym_literal_string,
      sym_decimal_number,
    ACTIONS(23), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(81), 6,
      sym_f_string,
      sym_s_string,
      sym_field,
      sym_date,
      sym_time,
      sym_timestamp,
  [4833] = 34,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(21), 1,
      sym_pipe,
    ACTIONS(31), 1,
      anon_sym_LPAREN,
    ACTIONS(37), 1,
      anon_sym_DOT,
    ACTIONS(39), 1,
      anon_sym_DASH,
    ACTIONS(41), 1,
      anon_sym_DQUOTE,
    ACTIONS(43), 1,
      anon_sym_SQUOTE,
    ACTIONS(45), 1,
      anon_sym_f_DQUOTE,
    ACTIONS(47), 1,
      anon_sym_f_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(49), 1,
      anon_sym_s_DQUOTE,
    ACTIONS(51), 1,
      anon_sym_s_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(53), 1,
      sym__natural_number,
    ACTIONS(55), 1,
      anon_sym__,
    ACTIONS(57), 1,
      anon_sym_BQUOTE,
    ACTIONS(59), 1,
      sym__identifier,
    ACTIONS(61), 1,
      anon_sym_AT,
    ACTIONS(295), 1,
      anon_sym_RBRACE,
    STATE(17), 1,
      aux_sym__friendly_number,
    STATE(29), 1,
      aux_sym_case_repeat1,
    STATE(50), 1,
      sym_comment,
    STATE(71), 1,
      sym_identifier,
    STATE(72), 1,
      sym__double_quote_string,
    STATE(75), 1,
      sym_integer,
    STATE(79), 1,
      sym__single_quote_string,
    STATE(271), 1,
      sym_case_condition,
    STATE(309), 1,
      sym_literal,
    STATE(316), 1,
      sym_binary_expression,
    STATE(321), 1,
      sym__expression,
    STATE(484), 1,
      sym__alias_identifier,
    STATE(76), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(78), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(88), 2,
      sym_literal_string,
      sym_decimal_number,
    ACTIONS(23), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(81), 6,
      sym_f_string,
      sym_s_string,
      sym_field,
      sym_date,
      sym_time,
      sym_timestamp,
  [4946] = 32,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(21), 1,
      sym_pipe,
    ACTIONS(31), 1,
      anon_sym_LPAREN,
    ACTIONS(37), 1,
      anon_sym_DOT,
    ACTIONS(39), 1,
      anon_sym_DASH,
    ACTIONS(41), 1,
      anon_sym_DQUOTE,
    ACTIONS(43), 1,
      anon_sym_SQUOTE,
    ACTIONS(45), 1,
      anon_sym_f_DQUOTE,
    ACTIONS(47), 1,
      anon_sym_f_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(49), 1,
      anon_sym_s_DQUOTE,
    ACTIONS(51), 1,
      anon_sym_s_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(53), 1,
      sym__natural_number,
    ACTIONS(55), 1,
      anon_sym__,
    ACTIONS(57), 1,
      anon_sym_BQUOTE,
    ACTIONS(59), 1,
      sym__identifier,
    ACTIONS(61), 1,
      anon_sym_AT,
    ACTIONS(297), 1,
      anon_sym_LBRACE,
    STATE(17), 1,
      aux_sym__friendly_number,
    STATE(51), 1,
      sym_comment,
    STATE(71), 1,
      sym_identifier,
    STATE(72), 1,
      sym__double_quote_string,
    STATE(75), 1,
      sym_integer,
    STATE(79), 1,
      sym__single_quote_string,
    STATE(218), 1,
      sym_assignment,
    STATE(273), 1,
      sym__expression,
    STATE(484), 1,
      sym__alias_identifier,
    STATE(551), 1,
      sym_term,
    STATE(76), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(78), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(88), 2,
      sym_literal_string,
      sym_decimal_number,
    ACTIONS(23), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(81), 8,
      sym_literal,
      sym_f_string,
      sym_s_string,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [5055] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(303), 1,
      anon_sym_DOT,
    STATE(52), 1,
      sym_comment,
    ACTIONS(301), 5,
      sym_keyword_from,
      anon_sym_EQ,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(299), 34,
      ts_builtin_sym_end,
      sym_keyword_filter,
      sym_keyword_derive,
      sym_keyword_group,
      sym_keyword_aggregate,
      sym_keyword_sort,
      sym_keyword_take,
      sym_keyword_join,
      sym_keyword_select,
      sym_keyword_append,
      sym_keyword_remove,
      sym_keyword_intersect,
      sym_keyword_loop,
      sym_keyword_mod,
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
  [5111] = 30,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(21), 1,
      sym_pipe,
    ACTIONS(31), 1,
      anon_sym_LPAREN,
    ACTIONS(37), 1,
      anon_sym_DOT,
    ACTIONS(39), 1,
      anon_sym_DASH,
    ACTIONS(41), 1,
      anon_sym_DQUOTE,
    ACTIONS(43), 1,
      anon_sym_SQUOTE,
    ACTIONS(45), 1,
      anon_sym_f_DQUOTE,
    ACTIONS(47), 1,
      anon_sym_f_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(49), 1,
      anon_sym_s_DQUOTE,
    ACTIONS(51), 1,
      anon_sym_s_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(53), 1,
      sym__natural_number,
    ACTIONS(55), 1,
      anon_sym__,
    ACTIONS(57), 1,
      anon_sym_BQUOTE,
    ACTIONS(59), 1,
      sym__identifier,
    ACTIONS(61), 1,
      anon_sym_AT,
    STATE(17), 1,
      aux_sym__friendly_number,
    STATE(53), 1,
      sym_comment,
    STATE(71), 1,
      sym_identifier,
    STATE(72), 1,
      sym__double_quote_string,
    STATE(75), 1,
      sym_integer,
    STATE(79), 1,
      sym__single_quote_string,
    STATE(289), 1,
      sym__expression,
    STATE(484), 1,
      sym__alias_identifier,
    ACTIONS(305), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
    STATE(76), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(78), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(88), 2,
      sym_literal_string,
      sym_decimal_number,
    ACTIONS(23), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(81), 8,
      sym_literal,
      sym_f_string,
      sym_s_string,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [5215] = 33,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(21), 1,
      sym_pipe,
    ACTIONS(31), 1,
      anon_sym_LPAREN,
    ACTIONS(37), 1,
      anon_sym_DOT,
    ACTIONS(39), 1,
      anon_sym_DASH,
    ACTIONS(41), 1,
      anon_sym_DQUOTE,
    ACTIONS(43), 1,
      anon_sym_SQUOTE,
    ACTIONS(45), 1,
      anon_sym_f_DQUOTE,
    ACTIONS(47), 1,
      anon_sym_f_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(49), 1,
      anon_sym_s_DQUOTE,
    ACTIONS(51), 1,
      anon_sym_s_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(53), 1,
      sym__natural_number,
    ACTIONS(55), 1,
      anon_sym__,
    ACTIONS(57), 1,
      anon_sym_BQUOTE,
    ACTIONS(59), 1,
      sym__identifier,
    ACTIONS(61), 1,
      anon_sym_AT,
    STATE(17), 1,
      aux_sym__friendly_number,
    STATE(29), 1,
      aux_sym_case_repeat1,
    STATE(54), 1,
      sym_comment,
    STATE(71), 1,
      sym_identifier,
    STATE(72), 1,
      sym__double_quote_string,
    STATE(75), 1,
      sym_integer,
    STATE(79), 1,
      sym__single_quote_string,
    STATE(271), 1,
      sym_case_condition,
    STATE(309), 1,
      sym_literal,
    STATE(316), 1,
      sym_binary_expression,
    STATE(321), 1,
      sym__expression,
    STATE(484), 1,
      sym__alias_identifier,
    STATE(76), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(78), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(88), 2,
      sym_literal_string,
      sym_decimal_number,
    ACTIONS(23), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(81), 6,
      sym_f_string,
      sym_s_string,
      sym_field,
      sym_date,
      sym_time,
      sym_timestamp,
  [5325] = 31,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(21), 1,
      sym_pipe,
    ACTIONS(31), 1,
      anon_sym_LPAREN,
    ACTIONS(37), 1,
      anon_sym_DOT,
    ACTIONS(39), 1,
      anon_sym_DASH,
    ACTIONS(41), 1,
      anon_sym_DQUOTE,
    ACTIONS(43), 1,
      anon_sym_SQUOTE,
    ACTIONS(45), 1,
      anon_sym_f_DQUOTE,
    ACTIONS(47), 1,
      anon_sym_f_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(49), 1,
      anon_sym_s_DQUOTE,
    ACTIONS(51), 1,
      anon_sym_s_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(53), 1,
      sym__natural_number,
    ACTIONS(55), 1,
      anon_sym__,
    ACTIONS(57), 1,
      anon_sym_BQUOTE,
    ACTIONS(59), 1,
      sym__identifier,
    ACTIONS(61), 1,
      anon_sym_AT,
    STATE(17), 1,
      aux_sym__friendly_number,
    STATE(55), 1,
      sym_comment,
    STATE(71), 1,
      sym_identifier,
    STATE(72), 1,
      sym__double_quote_string,
    STATE(75), 1,
      sym_integer,
    STATE(79), 1,
      sym__single_quote_string,
    STATE(218), 1,
      sym_assignment,
    STATE(273), 1,
      sym__expression,
    STATE(484), 1,
      sym__alias_identifier,
    STATE(556), 1,
      sym_term,
    STATE(76), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(78), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(88), 2,
      sym_literal_string,
      sym_decimal_number,
    ACTIONS(23), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(81), 8,
      sym_literal,
      sym_f_string,
      sym_s_string,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [5431] = 30,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(21), 1,
      sym_pipe,
    ACTIONS(31), 1,
      anon_sym_LPAREN,
    ACTIONS(37), 1,
      anon_sym_DOT,
    ACTIONS(39), 1,
      anon_sym_DASH,
    ACTIONS(41), 1,
      anon_sym_DQUOTE,
    ACTIONS(43), 1,
      anon_sym_SQUOTE,
    ACTIONS(45), 1,
      anon_sym_f_DQUOTE,
    ACTIONS(47), 1,
      anon_sym_f_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(49), 1,
      anon_sym_s_DQUOTE,
    ACTIONS(51), 1,
      anon_sym_s_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(53), 1,
      sym__natural_number,
    ACTIONS(55), 1,
      anon_sym__,
    ACTIONS(57), 1,
      anon_sym_BQUOTE,
    ACTIONS(59), 1,
      sym__identifier,
    ACTIONS(61), 1,
      anon_sym_AT,
    STATE(17), 1,
      aux_sym__friendly_number,
    STATE(56), 1,
      sym_comment,
    STATE(71), 1,
      sym_identifier,
    STATE(72), 1,
      sym__double_quote_string,
    STATE(75), 1,
      sym_integer,
    STATE(79), 1,
      sym__single_quote_string,
    STATE(289), 1,
      sym__expression,
    STATE(484), 1,
      sym__alias_identifier,
    ACTIONS(305), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
    STATE(76), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(78), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(88), 2,
      sym_literal_string,
      sym_decimal_number,
    ACTIONS(23), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(81), 8,
      sym_literal,
      sym_f_string,
      sym_s_string,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [5535] = 31,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(21), 1,
      sym_pipe,
    ACTIONS(37), 1,
      anon_sym_DOT,
    ACTIONS(39), 1,
      anon_sym_DASH,
    ACTIONS(41), 1,
      anon_sym_DQUOTE,
    ACTIONS(43), 1,
      anon_sym_SQUOTE,
    ACTIONS(45), 1,
      anon_sym_f_DQUOTE,
    ACTIONS(47), 1,
      anon_sym_f_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(49), 1,
      anon_sym_s_DQUOTE,
    ACTIONS(51), 1,
      anon_sym_s_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(53), 1,
      sym__natural_number,
    ACTIONS(55), 1,
      anon_sym__,
    ACTIONS(57), 1,
      anon_sym_BQUOTE,
    ACTIONS(59), 1,
      sym__identifier,
    ACTIONS(61), 1,
      anon_sym_AT,
    ACTIONS(255), 1,
      anon_sym_LPAREN,
    STATE(17), 1,
      aux_sym__friendly_number,
    STATE(57), 1,
      sym_comment,
    STATE(71), 1,
      sym_identifier,
    STATE(72), 1,
      sym__double_quote_string,
    STATE(75), 1,
      sym_integer,
    STATE(79), 1,
      sym__single_quote_string,
    STATE(218), 1,
      sym_assignment,
    STATE(273), 1,
      sym__expression,
    STATE(476), 1,
      sym_term,
    STATE(484), 1,
      sym__alias_identifier,
    STATE(76), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(78), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(88), 2,
      sym_literal_string,
      sym_decimal_number,
    ACTIONS(23), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(81), 8,
      sym_literal,
      sym_f_string,
      sym_s_string,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [5641] = 31,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(21), 1,
      sym_pipe,
    ACTIONS(31), 1,
      anon_sym_LPAREN,
    ACTIONS(37), 1,
      anon_sym_DOT,
    ACTIONS(39), 1,
      anon_sym_DASH,
    ACTIONS(41), 1,
      anon_sym_DQUOTE,
    ACTIONS(43), 1,
      anon_sym_SQUOTE,
    ACTIONS(45), 1,
      anon_sym_f_DQUOTE,
    ACTIONS(47), 1,
      anon_sym_f_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(49), 1,
      anon_sym_s_DQUOTE,
    ACTIONS(51), 1,
      anon_sym_s_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(53), 1,
      sym__natural_number,
    ACTIONS(55), 1,
      anon_sym__,
    ACTIONS(57), 1,
      anon_sym_BQUOTE,
    ACTIONS(59), 1,
      sym__identifier,
    ACTIONS(61), 1,
      anon_sym_AT,
    STATE(17), 1,
      aux_sym__friendly_number,
    STATE(58), 1,
      sym_comment,
    STATE(71), 1,
      sym_identifier,
    STATE(72), 1,
      sym__double_quote_string,
    STATE(75), 1,
      sym_integer,
    STATE(79), 1,
      sym__single_quote_string,
    STATE(218), 1,
      sym_assignment,
    STATE(273), 1,
      sym__expression,
    STATE(459), 1,
      sym_term,
    STATE(484), 1,
      sym__alias_identifier,
    STATE(76), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(78), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(88), 2,
      sym_literal_string,
      sym_decimal_number,
    ACTIONS(23), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(81), 8,
      sym_literal,
      sym_f_string,
      sym_s_string,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [5747] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    STATE(59), 1,
      sym_comment,
    ACTIONS(263), 5,
      sym_keyword_from,
      anon_sym_EQ,
      anon_sym_SLASH,
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
      sym_keyword_join,
      sym_keyword_select,
      sym_keyword_append,
      sym_keyword_remove,
      sym_keyword_intersect,
      sym_keyword_loop,
      sym_keyword_mod,
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
  [5800] = 30,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(21), 1,
      sym_pipe,
    ACTIONS(37), 1,
      anon_sym_DOT,
    ACTIONS(39), 1,
      anon_sym_DASH,
    ACTIONS(41), 1,
      anon_sym_DQUOTE,
    ACTIONS(43), 1,
      anon_sym_SQUOTE,
    ACTIONS(45), 1,
      anon_sym_f_DQUOTE,
    ACTIONS(47), 1,
      anon_sym_f_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(49), 1,
      anon_sym_s_DQUOTE,
    ACTIONS(51), 1,
      anon_sym_s_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(53), 1,
      sym__natural_number,
    ACTIONS(55), 1,
      anon_sym__,
    ACTIONS(57), 1,
      anon_sym_BQUOTE,
    ACTIONS(59), 1,
      sym__identifier,
    ACTIONS(61), 1,
      anon_sym_AT,
    ACTIONS(307), 1,
      anon_sym_LPAREN,
    STATE(17), 1,
      aux_sym__friendly_number,
    STATE(60), 1,
      sym_comment,
    STATE(71), 1,
      sym_identifier,
    STATE(72), 1,
      sym__double_quote_string,
    STATE(75), 1,
      sym_integer,
    STATE(79), 1,
      sym__single_quote_string,
    STATE(129), 1,
      sym__expression,
    STATE(270), 1,
      sym__boolean_expression,
    STATE(484), 1,
      sym__alias_identifier,
    STATE(76), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(78), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(88), 2,
      sym_literal_string,
      sym_decimal_number,
    ACTIONS(23), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(81), 8,
      sym_literal,
      sym_f_string,
      sym_s_string,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [5903] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    STATE(61), 1,
      sym_comment,
    ACTIONS(311), 6,
      sym_keyword_from,
      anon_sym_EQ,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_T,
    ACTIONS(309), 33,
      ts_builtin_sym_end,
      sym_keyword_filter,
      sym_keyword_derive,
      sym_keyword_group,
      sym_keyword_aggregate,
      sym_keyword_sort,
      sym_keyword_take,
      sym_keyword_join,
      sym_keyword_select,
      sym_keyword_append,
      sym_keyword_remove,
      sym_keyword_intersect,
      sym_keyword_loop,
      sym_keyword_mod,
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
  [5956] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    STATE(62), 1,
      sym_comment,
    ACTIONS(166), 5,
      sym_keyword_from,
      anon_sym_EQ,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(168), 34,
      ts_builtin_sym_end,
      sym_keyword_filter,
      sym_keyword_derive,
      sym_keyword_group,
      sym_keyword_aggregate,
      sym_keyword_sort,
      sym_keyword_take,
      sym_keyword_join,
      sym_keyword_select,
      sym_keyword_append,
      sym_keyword_remove,
      sym_keyword_intersect,
      sym_keyword_loop,
      sym_keyword_mod,
      sym_keyword_func,
      sym_keyword_let,
      sym_keyword_from_text,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_DOT,
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
  [6009] = 21,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(21), 1,
      sym_pipe,
    ACTIONS(318), 1,
      anon_sym_RBRACE,
    ACTIONS(320), 1,
      anon_sym_DOT,
    ACTIONS(323), 1,
      anon_sym_DASH,
    ACTIONS(326), 1,
      anon_sym_DQUOTE,
    ACTIONS(329), 1,
      anon_sym_SQUOTE,
    ACTIONS(332), 1,
      sym__natural_number,
    ACTIONS(335), 1,
      anon_sym__,
    ACTIONS(338), 1,
      anon_sym_BQUOTE,
    ACTIONS(341), 1,
      sym__identifier,
    STATE(135), 1,
      aux_sym__friendly_number,
    STATE(140), 1,
      sym_identifier,
    STATE(163), 1,
      sym_integer,
    STATE(164), 1,
      sym_literal,
    STATE(167), 1,
      sym__call_parameter,
    STATE(63), 2,
      sym_comment,
      aux_sym_function_call_repeat1,
    STATE(158), 2,
      sym_literal_string,
      sym_decimal_number,
    STATE(159), 2,
      sym__double_quote_string,
      sym__single_quote_string,
    ACTIONS(315), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    ACTIONS(313), 17,
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
      sym_keyword_mod,
      sym_keyword_func,
      sym_keyword_let,
      sym_keyword_from_text,
  [6094] = 21,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(21), 1,
      sym_pipe,
    ACTIONS(318), 1,
      ts_builtin_sym_end,
    ACTIONS(347), 1,
      anon_sym_DOT,
    ACTIONS(350), 1,
      anon_sym_DASH,
    ACTIONS(353), 1,
      anon_sym_DQUOTE,
    ACTIONS(356), 1,
      anon_sym_SQUOTE,
    ACTIONS(359), 1,
      sym__natural_number,
    ACTIONS(362), 1,
      anon_sym__,
    ACTIONS(365), 1,
      anon_sym_BQUOTE,
    ACTIONS(368), 1,
      sym__identifier,
    STATE(136), 1,
      sym_identifier,
    STATE(143), 1,
      aux_sym__friendly_number,
    STATE(161), 1,
      sym_literal,
    STATE(162), 1,
      sym__call_parameter,
    STATE(170), 1,
      sym_integer,
    STATE(64), 2,
      sym_comment,
      aux_sym_function_call_repeat1,
    STATE(166), 2,
      sym_literal_string,
      sym_decimal_number,
    STATE(168), 2,
      sym__double_quote_string,
      sym__single_quote_string,
    ACTIONS(344), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    ACTIONS(313), 17,
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
      sym_keyword_mod,
      sym_keyword_func,
      sym_keyword_let,
      sym_keyword_from_text,
  [6179] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    STATE(65), 1,
      sym_comment,
    ACTIONS(162), 5,
      sym_keyword_from,
      anon_sym_EQ,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(164), 34,
      ts_builtin_sym_end,
      sym_keyword_filter,
      sym_keyword_derive,
      sym_keyword_group,
      sym_keyword_aggregate,
      sym_keyword_sort,
      sym_keyword_take,
      sym_keyword_join,
      sym_keyword_select,
      sym_keyword_append,
      sym_keyword_remove,
      sym_keyword_intersect,
      sym_keyword_loop,
      sym_keyword_mod,
      sym_keyword_func,
      sym_keyword_let,
      sym_keyword_from_text,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_DOT,
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
  [6232] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    STATE(66), 1,
      sym_comment,
    ACTIONS(373), 5,
      sym_keyword_from,
      anon_sym_EQ,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(371), 34,
      ts_builtin_sym_end,
      sym_keyword_filter,
      sym_keyword_derive,
      sym_keyword_group,
      sym_keyword_aggregate,
      sym_keyword_sort,
      sym_keyword_take,
      sym_keyword_join,
      sym_keyword_select,
      sym_keyword_append,
      sym_keyword_remove,
      sym_keyword_intersect,
      sym_keyword_loop,
      sym_keyword_mod,
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
  [6285] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    STATE(67), 1,
      sym_comment,
    ACTIONS(377), 5,
      sym_keyword_from,
      anon_sym_EQ,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(375), 34,
      ts_builtin_sym_end,
      sym_keyword_filter,
      sym_keyword_derive,
      sym_keyword_group,
      sym_keyword_aggregate,
      sym_keyword_sort,
      sym_keyword_take,
      sym_keyword_join,
      sym_keyword_select,
      sym_keyword_append,
      sym_keyword_remove,
      sym_keyword_intersect,
      sym_keyword_loop,
      sym_keyword_mod,
      sym_keyword_func,
      sym_keyword_let,
      sym_keyword_from_text,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_DOT,
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
  [6338] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(383), 1,
      anon_sym_T,
    STATE(68), 1,
      sym_comment,
    ACTIONS(381), 5,
      sym_keyword_from,
      anon_sym_EQ,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(379), 33,
      ts_builtin_sym_end,
      sym_keyword_filter,
      sym_keyword_derive,
      sym_keyword_group,
      sym_keyword_aggregate,
      sym_keyword_sort,
      sym_keyword_take,
      sym_keyword_join,
      sym_keyword_select,
      sym_keyword_append,
      sym_keyword_remove,
      sym_keyword_intersect,
      sym_keyword_loop,
      sym_keyword_mod,
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
  [6393] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(389), 1,
      sym__natural_number,
    STATE(69), 1,
      sym_comment,
    ACTIONS(387), 5,
      sym_keyword_from,
      anon_sym_EQ,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(385), 33,
      ts_builtin_sym_end,
      sym_keyword_filter,
      sym_keyword_derive,
      sym_keyword_group,
      sym_keyword_aggregate,
      sym_keyword_sort,
      sym_keyword_take,
      sym_keyword_join,
      sym_keyword_select,
      sym_keyword_append,
      sym_keyword_remove,
      sym_keyword_intersect,
      sym_keyword_loop,
      sym_keyword_mod,
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
  [6448] = 22,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(21), 1,
      sym_pipe,
    ACTIONS(69), 1,
      anon_sym_DOT,
    ACTIONS(71), 1,
      anon_sym_DQUOTE,
    ACTIONS(73), 1,
      anon_sym_SQUOTE,
    ACTIONS(75), 1,
      sym__natural_number,
    ACTIONS(77), 1,
      anon_sym__,
    ACTIONS(79), 1,
      anon_sym_BQUOTE,
    ACTIONS(81), 1,
      sym__identifier,
    ACTIONS(391), 1,
      ts_builtin_sym_end,
    ACTIONS(395), 1,
      anon_sym_DASH,
    STATE(64), 1,
      aux_sym_function_call_repeat1,
    STATE(70), 1,
      sym_comment,
    STATE(136), 1,
      sym_identifier,
    STATE(143), 1,
      aux_sym__friendly_number,
    STATE(161), 1,
      sym_literal,
    STATE(162), 1,
      sym__call_parameter,
    STATE(170), 1,
      sym_integer,
    STATE(166), 2,
      sym_literal_string,
      sym_decimal_number,
    STATE(168), 2,
      sym__double_quote_string,
      sym__single_quote_string,
    ACTIONS(67), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    ACTIONS(393), 17,
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
      sym_keyword_mod,
      sym_keyword_func,
      sym_keyword_let,
      sym_keyword_from_text,
  [6535] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(397), 1,
      anon_sym_DOT,
    STATE(71), 1,
      sym_comment,
    ACTIONS(65), 5,
      sym_keyword_from,
      anon_sym_EQ,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(63), 33,
      ts_builtin_sym_end,
      sym_keyword_filter,
      sym_keyword_derive,
      sym_keyword_group,
      sym_keyword_aggregate,
      sym_keyword_sort,
      sym_keyword_take,
      sym_keyword_join,
      sym_keyword_select,
      sym_keyword_append,
      sym_keyword_remove,
      sym_keyword_intersect,
      sym_keyword_loop,
      sym_keyword_mod,
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
  [6590] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(403), 1,
      anon_sym_DOT,
    STATE(72), 1,
      sym_comment,
    ACTIONS(401), 5,
      sym_keyword_from,
      anon_sym_EQ,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(399), 33,
      ts_builtin_sym_end,
      sym_keyword_filter,
      sym_keyword_derive,
      sym_keyword_group,
      sym_keyword_aggregate,
      sym_keyword_sort,
      sym_keyword_take,
      sym_keyword_join,
      sym_keyword_select,
      sym_keyword_append,
      sym_keyword_remove,
      sym_keyword_intersect,
      sym_keyword_loop,
      sym_keyword_mod,
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
  [6645] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    STATE(73), 1,
      sym_comment,
    ACTIONS(301), 5,
      sym_keyword_from,
      anon_sym_EQ,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(299), 34,
      ts_builtin_sym_end,
      sym_keyword_filter,
      sym_keyword_derive,
      sym_keyword_group,
      sym_keyword_aggregate,
      sym_keyword_sort,
      sym_keyword_take,
      sym_keyword_join,
      sym_keyword_select,
      sym_keyword_append,
      sym_keyword_remove,
      sym_keyword_intersect,
      sym_keyword_loop,
      sym_keyword_mod,
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
  [6698] = 22,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(21), 1,
      sym_pipe,
    ACTIONS(89), 1,
      anon_sym_DOT,
    ACTIONS(91), 1,
      anon_sym_DQUOTE,
    ACTIONS(93), 1,
      anon_sym_SQUOTE,
    ACTIONS(95), 1,
      sym__natural_number,
    ACTIONS(97), 1,
      anon_sym__,
    ACTIONS(99), 1,
      anon_sym_BQUOTE,
    ACTIONS(101), 1,
      sym__identifier,
    ACTIONS(391), 1,
      anon_sym_RBRACE,
    ACTIONS(405), 1,
      anon_sym_DASH,
    STATE(63), 1,
      aux_sym_function_call_repeat1,
    STATE(74), 1,
      sym_comment,
    STATE(135), 1,
      aux_sym__friendly_number,
    STATE(140), 1,
      sym_identifier,
    STATE(163), 1,
      sym_integer,
    STATE(164), 1,
      sym_literal,
    STATE(167), 1,
      sym__call_parameter,
    STATE(158), 2,
      sym_literal_string,
      sym_decimal_number,
    STATE(159), 2,
      sym__double_quote_string,
      sym__single_quote_string,
    ACTIONS(87), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    ACTIONS(393), 17,
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
      sym_keyword_mod,
      sym_keyword_func,
      sym_keyword_let,
      sym_keyword_from_text,
  [6785] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(411), 1,
      anon_sym_DOT,
    STATE(75), 1,
      sym_comment,
    ACTIONS(409), 5,
      sym_keyword_from,
      anon_sym_EQ,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(407), 33,
      ts_builtin_sym_end,
      sym_keyword_filter,
      sym_keyword_derive,
      sym_keyword_group,
      sym_keyword_aggregate,
      sym_keyword_sort,
      sym_keyword_take,
      sym_keyword_join,
      sym_keyword_select,
      sym_keyword_append,
      sym_keyword_remove,
      sym_keyword_intersect,
      sym_keyword_loop,
      sym_keyword_mod,
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
  [6840] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    STATE(76), 1,
      sym_comment,
    ACTIONS(415), 5,
      sym_keyword_from,
      anon_sym_EQ,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(413), 33,
      ts_builtin_sym_end,
      sym_keyword_filter,
      sym_keyword_derive,
      sym_keyword_group,
      sym_keyword_aggregate,
      sym_keyword_sort,
      sym_keyword_take,
      sym_keyword_join,
      sym_keyword_select,
      sym_keyword_append,
      sym_keyword_remove,
      sym_keyword_intersect,
      sym_keyword_loop,
      sym_keyword_mod,
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
  [6892] = 29,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(21), 1,
      sym_pipe,
    ACTIONS(31), 1,
      anon_sym_LPAREN,
    ACTIONS(37), 1,
      anon_sym_DOT,
    ACTIONS(39), 1,
      anon_sym_DASH,
    ACTIONS(41), 1,
      anon_sym_DQUOTE,
    ACTIONS(43), 1,
      anon_sym_SQUOTE,
    ACTIONS(45), 1,
      anon_sym_f_DQUOTE,
    ACTIONS(47), 1,
      anon_sym_f_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(49), 1,
      anon_sym_s_DQUOTE,
    ACTIONS(51), 1,
      anon_sym_s_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(53), 1,
      sym__natural_number,
    ACTIONS(55), 1,
      anon_sym__,
    ACTIONS(57), 1,
      anon_sym_BQUOTE,
    ACTIONS(59), 1,
      sym__identifier,
    ACTIONS(61), 1,
      anon_sym_AT,
    STATE(17), 1,
      aux_sym__friendly_number,
    STATE(71), 1,
      sym_identifier,
    STATE(72), 1,
      sym__double_quote_string,
    STATE(75), 1,
      sym_integer,
    STATE(77), 1,
      sym_comment,
    STATE(79), 1,
      sym__single_quote_string,
    STATE(126), 1,
      sym__expression,
    STATE(484), 1,
      sym__alias_identifier,
    STATE(76), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(78), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(88), 2,
      sym_literal_string,
      sym_decimal_number,
    ACTIONS(23), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(81), 8,
      sym_literal,
      sym_f_string,
      sym_s_string,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [6992] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    STATE(78), 1,
      sym_comment,
    ACTIONS(419), 5,
      sym_keyword_from,
      anon_sym_EQ,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(417), 33,
      ts_builtin_sym_end,
      sym_keyword_filter,
      sym_keyword_derive,
      sym_keyword_group,
      sym_keyword_aggregate,
      sym_keyword_sort,
      sym_keyword_take,
      sym_keyword_join,
      sym_keyword_select,
      sym_keyword_append,
      sym_keyword_remove,
      sym_keyword_intersect,
      sym_keyword_loop,
      sym_keyword_mod,
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
  [7044] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    STATE(79), 1,
      sym_comment,
    ACTIONS(401), 5,
      sym_keyword_from,
      anon_sym_EQ,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(399), 33,
      ts_builtin_sym_end,
      sym_keyword_filter,
      sym_keyword_derive,
      sym_keyword_group,
      sym_keyword_aggregate,
      sym_keyword_sort,
      sym_keyword_take,
      sym_keyword_join,
      sym_keyword_select,
      sym_keyword_append,
      sym_keyword_remove,
      sym_keyword_intersect,
      sym_keyword_loop,
      sym_keyword_mod,
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
  [7096] = 30,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(21), 1,
      sym_pipe,
    ACTIONS(31), 1,
      anon_sym_LPAREN,
    ACTIONS(37), 1,
      anon_sym_DOT,
    ACTIONS(39), 1,
      anon_sym_DASH,
    ACTIONS(41), 1,
      anon_sym_DQUOTE,
    ACTIONS(43), 1,
      anon_sym_SQUOTE,
    ACTIONS(45), 1,
      anon_sym_f_DQUOTE,
    ACTIONS(47), 1,
      anon_sym_f_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(49), 1,
      anon_sym_s_DQUOTE,
    ACTIONS(51), 1,
      anon_sym_s_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(53), 1,
      sym__natural_number,
    ACTIONS(55), 1,
      anon_sym__,
    ACTIONS(57), 1,
      anon_sym_BQUOTE,
    ACTIONS(59), 1,
      sym__identifier,
    ACTIONS(61), 1,
      anon_sym_AT,
    STATE(17), 1,
      aux_sym__friendly_number,
    STATE(71), 1,
      sym_identifier,
    STATE(72), 1,
      sym__double_quote_string,
    STATE(75), 1,
      sym_integer,
    STATE(79), 1,
      sym__single_quote_string,
    STATE(80), 1,
      sym_comment,
    STATE(314), 1,
      sym_binary_expression,
    STATE(320), 1,
      sym__expression,
    STATE(484), 1,
      sym__alias_identifier,
    STATE(76), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(78), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(88), 2,
      sym_literal_string,
      sym_decimal_number,
    ACTIONS(23), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(81), 7,
      sym_literal,
      sym_f_string,
      sym_s_string,
      sym_field,
      sym_date,
      sym_time,
      sym_timestamp,
  [7198] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    STATE(81), 1,
      sym_comment,
    ACTIONS(423), 5,
      sym_keyword_from,
      anon_sym_EQ,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(421), 33,
      ts_builtin_sym_end,
      sym_keyword_filter,
      sym_keyword_derive,
      sym_keyword_group,
      sym_keyword_aggregate,
      sym_keyword_sort,
      sym_keyword_take,
      sym_keyword_join,
      sym_keyword_select,
      sym_keyword_append,
      sym_keyword_remove,
      sym_keyword_intersect,
      sym_keyword_loop,
      sym_keyword_mod,
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
  [7250] = 30,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(21), 1,
      sym_pipe,
    ACTIONS(31), 1,
      anon_sym_LPAREN,
    ACTIONS(37), 1,
      anon_sym_DOT,
    ACTIONS(39), 1,
      anon_sym_DASH,
    ACTIONS(41), 1,
      anon_sym_DQUOTE,
    ACTIONS(43), 1,
      anon_sym_SQUOTE,
    ACTIONS(45), 1,
      anon_sym_f_DQUOTE,
    ACTIONS(47), 1,
      anon_sym_f_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(49), 1,
      anon_sym_s_DQUOTE,
    ACTIONS(51), 1,
      anon_sym_s_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(53), 1,
      sym__natural_number,
    ACTIONS(55), 1,
      anon_sym__,
    ACTIONS(57), 1,
      anon_sym_BQUOTE,
    ACTIONS(59), 1,
      sym__identifier,
    ACTIONS(61), 1,
      anon_sym_AT,
    STATE(17), 1,
      aux_sym__friendly_number,
    STATE(71), 1,
      sym_identifier,
    STATE(72), 1,
      sym__double_quote_string,
    STATE(75), 1,
      sym_integer,
    STATE(79), 1,
      sym__single_quote_string,
    STATE(82), 1,
      sym_comment,
    STATE(287), 1,
      sym_binary_expression,
    STATE(321), 1,
      sym__expression,
    STATE(484), 1,
      sym__alias_identifier,
    STATE(76), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(78), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(88), 2,
      sym_literal_string,
      sym_decimal_number,
    ACTIONS(23), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(81), 7,
      sym_literal,
      sym_f_string,
      sym_s_string,
      sym_field,
      sym_date,
      sym_time,
      sym_timestamp,
  [7352] = 29,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(21), 1,
      sym_pipe,
    ACTIONS(31), 1,
      anon_sym_LPAREN,
    ACTIONS(37), 1,
      anon_sym_DOT,
    ACTIONS(39), 1,
      anon_sym_DASH,
    ACTIONS(41), 1,
      anon_sym_DQUOTE,
    ACTIONS(43), 1,
      anon_sym_SQUOTE,
    ACTIONS(45), 1,
      anon_sym_f_DQUOTE,
    ACTIONS(47), 1,
      anon_sym_f_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(49), 1,
      anon_sym_s_DQUOTE,
    ACTIONS(51), 1,
      anon_sym_s_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(53), 1,
      sym__natural_number,
    ACTIONS(55), 1,
      anon_sym__,
    ACTIONS(57), 1,
      anon_sym_BQUOTE,
    ACTIONS(59), 1,
      sym__identifier,
    ACTIONS(61), 1,
      anon_sym_AT,
    STATE(17), 1,
      aux_sym__friendly_number,
    STATE(71), 1,
      sym_identifier,
    STATE(72), 1,
      sym__double_quote_string,
    STATE(75), 1,
      sym_integer,
    STATE(79), 1,
      sym__single_quote_string,
    STATE(83), 1,
      sym_comment,
    STATE(117), 1,
      sym__expression,
    STATE(484), 1,
      sym__alias_identifier,
    STATE(76), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(78), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(88), 2,
      sym_literal_string,
      sym_decimal_number,
    ACTIONS(23), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(81), 8,
      sym_literal,
      sym_f_string,
      sym_s_string,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [7452] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    STATE(84), 1,
      sym_comment,
    ACTIONS(427), 5,
      sym_keyword_from,
      anon_sym_EQ,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(425), 33,
      ts_builtin_sym_end,
      sym_keyword_filter,
      sym_keyword_derive,
      sym_keyword_group,
      sym_keyword_aggregate,
      sym_keyword_sort,
      sym_keyword_take,
      sym_keyword_join,
      sym_keyword_select,
      sym_keyword_append,
      sym_keyword_remove,
      sym_keyword_intersect,
      sym_keyword_loop,
      sym_keyword_mod,
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
  [7504] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    STATE(85), 1,
      sym_comment,
    ACTIONS(431), 5,
      sym_keyword_from,
      anon_sym_EQ,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(429), 33,
      ts_builtin_sym_end,
      sym_keyword_filter,
      sym_keyword_derive,
      sym_keyword_group,
      sym_keyword_aggregate,
      sym_keyword_sort,
      sym_keyword_take,
      sym_keyword_join,
      sym_keyword_select,
      sym_keyword_append,
      sym_keyword_remove,
      sym_keyword_intersect,
      sym_keyword_loop,
      sym_keyword_mod,
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
  [7556] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    STATE(86), 1,
      sym_comment,
    ACTIONS(435), 5,
      sym_keyword_from,
      anon_sym_EQ,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(433), 33,
      ts_builtin_sym_end,
      sym_keyword_filter,
      sym_keyword_derive,
      sym_keyword_group,
      sym_keyword_aggregate,
      sym_keyword_sort,
      sym_keyword_take,
      sym_keyword_join,
      sym_keyword_select,
      sym_keyword_append,
      sym_keyword_remove,
      sym_keyword_intersect,
      sym_keyword_loop,
      sym_keyword_mod,
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
  [7608] = 30,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(21), 1,
      sym_pipe,
    ACTIONS(31), 1,
      anon_sym_LPAREN,
    ACTIONS(37), 1,
      anon_sym_DOT,
    ACTIONS(39), 1,
      anon_sym_DASH,
    ACTIONS(41), 1,
      anon_sym_DQUOTE,
    ACTIONS(43), 1,
      anon_sym_SQUOTE,
    ACTIONS(45), 1,
      anon_sym_f_DQUOTE,
    ACTIONS(47), 1,
      anon_sym_f_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(49), 1,
      anon_sym_s_DQUOTE,
    ACTIONS(51), 1,
      anon_sym_s_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(53), 1,
      sym__natural_number,
    ACTIONS(55), 1,
      anon_sym__,
    ACTIONS(57), 1,
      anon_sym_BQUOTE,
    ACTIONS(59), 1,
      sym__identifier,
    ACTIONS(61), 1,
      anon_sym_AT,
    STATE(17), 1,
      aux_sym__friendly_number,
    STATE(71), 1,
      sym_identifier,
    STATE(72), 1,
      sym__double_quote_string,
    STATE(75), 1,
      sym_integer,
    STATE(79), 1,
      sym__single_quote_string,
    STATE(87), 1,
      sym_comment,
    STATE(315), 1,
      sym_binary_expression,
    STATE(318), 1,
      sym__expression,
    STATE(484), 1,
      sym__alias_identifier,
    STATE(76), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(78), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(88), 2,
      sym_literal_string,
      sym_decimal_number,
    ACTIONS(23), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(81), 7,
      sym_literal,
      sym_f_string,
      sym_s_string,
      sym_field,
      sym_date,
      sym_time,
      sym_timestamp,
  [7710] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    STATE(88), 1,
      sym_comment,
    ACTIONS(409), 5,
      sym_keyword_from,
      anon_sym_EQ,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(407), 33,
      ts_builtin_sym_end,
      sym_keyword_filter,
      sym_keyword_derive,
      sym_keyword_group,
      sym_keyword_aggregate,
      sym_keyword_sort,
      sym_keyword_take,
      sym_keyword_join,
      sym_keyword_select,
      sym_keyword_append,
      sym_keyword_remove,
      sym_keyword_intersect,
      sym_keyword_loop,
      sym_keyword_mod,
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
  [7762] = 29,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(21), 1,
      sym_pipe,
    ACTIONS(31), 1,
      anon_sym_LPAREN,
    ACTIONS(37), 1,
      anon_sym_DOT,
    ACTIONS(39), 1,
      anon_sym_DASH,
    ACTIONS(41), 1,
      anon_sym_DQUOTE,
    ACTIONS(43), 1,
      anon_sym_SQUOTE,
    ACTIONS(45), 1,
      anon_sym_f_DQUOTE,
    ACTIONS(47), 1,
      anon_sym_f_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(49), 1,
      anon_sym_s_DQUOTE,
    ACTIONS(51), 1,
      anon_sym_s_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(53), 1,
      sym__natural_number,
    ACTIONS(55), 1,
      anon_sym__,
    ACTIONS(57), 1,
      anon_sym_BQUOTE,
    ACTIONS(59), 1,
      sym__identifier,
    ACTIONS(61), 1,
      anon_sym_AT,
    STATE(17), 1,
      aux_sym__friendly_number,
    STATE(71), 1,
      sym_identifier,
    STATE(72), 1,
      sym__double_quote_string,
    STATE(75), 1,
      sym_integer,
    STATE(79), 1,
      sym__single_quote_string,
    STATE(89), 1,
      sym_comment,
    STATE(290), 1,
      sym__expression,
    STATE(484), 1,
      sym__alias_identifier,
    STATE(76), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(78), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(88), 2,
      sym_literal_string,
      sym_decimal_number,
    ACTIONS(23), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(81), 8,
      sym_literal,
      sym_f_string,
      sym_s_string,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [7862] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    STATE(90), 1,
      sym_comment,
    ACTIONS(168), 18,
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
    ACTIONS(166), 20,
      sym_keyword_filter,
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
  [7914] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    STATE(91), 1,
      sym_comment,
    ACTIONS(439), 5,
      sym_keyword_from,
      anon_sym_EQ,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(437), 33,
      ts_builtin_sym_end,
      sym_keyword_filter,
      sym_keyword_derive,
      sym_keyword_group,
      sym_keyword_aggregate,
      sym_keyword_sort,
      sym_keyword_take,
      sym_keyword_join,
      sym_keyword_select,
      sym_keyword_append,
      sym_keyword_remove,
      sym_keyword_intersect,
      sym_keyword_loop,
      sym_keyword_mod,
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
  [7966] = 29,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(21), 1,
      sym_pipe,
    ACTIONS(31), 1,
      anon_sym_LPAREN,
    ACTIONS(37), 1,
      anon_sym_DOT,
    ACTIONS(39), 1,
      anon_sym_DASH,
    ACTIONS(41), 1,
      anon_sym_DQUOTE,
    ACTIONS(43), 1,
      anon_sym_SQUOTE,
    ACTIONS(45), 1,
      anon_sym_f_DQUOTE,
    ACTIONS(47), 1,
      anon_sym_f_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(49), 1,
      anon_sym_s_DQUOTE,
    ACTIONS(51), 1,
      anon_sym_s_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(53), 1,
      sym__natural_number,
    ACTIONS(55), 1,
      anon_sym__,
    ACTIONS(57), 1,
      anon_sym_BQUOTE,
    ACTIONS(59), 1,
      sym__identifier,
    ACTIONS(61), 1,
      anon_sym_AT,
    STATE(17), 1,
      aux_sym__friendly_number,
    STATE(71), 1,
      sym_identifier,
    STATE(72), 1,
      sym__double_quote_string,
    STATE(75), 1,
      sym_integer,
    STATE(79), 1,
      sym__single_quote_string,
    STATE(92), 1,
      sym_comment,
    STATE(300), 1,
      sym__expression,
    STATE(484), 1,
      sym__alias_identifier,
    STATE(76), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(78), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(88), 2,
      sym_literal_string,
      sym_decimal_number,
    ACTIONS(23), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(81), 8,
      sym_literal,
      sym_f_string,
      sym_s_string,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [8066] = 30,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(21), 1,
      sym_pipe,
    ACTIONS(31), 1,
      anon_sym_LPAREN,
    ACTIONS(37), 1,
      anon_sym_DOT,
    ACTIONS(39), 1,
      anon_sym_DASH,
    ACTIONS(41), 1,
      anon_sym_DQUOTE,
    ACTIONS(43), 1,
      anon_sym_SQUOTE,
    ACTIONS(45), 1,
      anon_sym_f_DQUOTE,
    ACTIONS(47), 1,
      anon_sym_f_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(49), 1,
      anon_sym_s_DQUOTE,
    ACTIONS(51), 1,
      anon_sym_s_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(53), 1,
      sym__natural_number,
    ACTIONS(55), 1,
      anon_sym__,
    ACTIONS(57), 1,
      anon_sym_BQUOTE,
    ACTIONS(59), 1,
      sym__identifier,
    ACTIONS(61), 1,
      anon_sym_AT,
    STATE(17), 1,
      aux_sym__friendly_number,
    STATE(71), 1,
      sym_identifier,
    STATE(72), 1,
      sym__double_quote_string,
    STATE(75), 1,
      sym_integer,
    STATE(79), 1,
      sym__single_quote_string,
    STATE(93), 1,
      sym_comment,
    STATE(301), 1,
      sym_binary_expression,
    STATE(320), 1,
      sym__expression,
    STATE(484), 1,
      sym__alias_identifier,
    STATE(76), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(78), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(88), 2,
      sym_literal_string,
      sym_decimal_number,
    ACTIONS(23), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(81), 7,
      sym_literal,
      sym_f_string,
      sym_s_string,
      sym_field,
      sym_date,
      sym_time,
      sym_timestamp,
  [8168] = 30,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(21), 1,
      sym_pipe,
    ACTIONS(31), 1,
      anon_sym_LPAREN,
    ACTIONS(37), 1,
      anon_sym_DOT,
    ACTIONS(39), 1,
      anon_sym_DASH,
    ACTIONS(41), 1,
      anon_sym_DQUOTE,
    ACTIONS(43), 1,
      anon_sym_SQUOTE,
    ACTIONS(45), 1,
      anon_sym_f_DQUOTE,
    ACTIONS(47), 1,
      anon_sym_f_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(49), 1,
      anon_sym_s_DQUOTE,
    ACTIONS(51), 1,
      anon_sym_s_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(53), 1,
      sym__natural_number,
    ACTIONS(55), 1,
      anon_sym__,
    ACTIONS(57), 1,
      anon_sym_BQUOTE,
    ACTIONS(59), 1,
      sym__identifier,
    ACTIONS(61), 1,
      anon_sym_AT,
    STATE(17), 1,
      aux_sym__friendly_number,
    STATE(71), 1,
      sym_identifier,
    STATE(72), 1,
      sym__double_quote_string,
    STATE(75), 1,
      sym_integer,
    STATE(79), 1,
      sym__single_quote_string,
    STATE(94), 1,
      sym_comment,
    STATE(317), 1,
      sym_binary_expression,
    STATE(320), 1,
      sym__expression,
    STATE(484), 1,
      sym__alias_identifier,
    STATE(76), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(78), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(88), 2,
      sym_literal_string,
      sym_decimal_number,
    ACTIONS(23), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(81), 7,
      sym_literal,
      sym_f_string,
      sym_s_string,
      sym_field,
      sym_date,
      sym_time,
      sym_timestamp,
  [8270] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    STATE(95), 1,
      sym_comment,
    ACTIONS(164), 18,
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
    ACTIONS(162), 20,
      sym_keyword_filter,
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
  [8322] = 21,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(443), 1,
      anon_sym_DOT,
    ACTIONS(445), 1,
      anon_sym_DQUOTE,
    ACTIONS(447), 1,
      anon_sym_SQUOTE,
    ACTIONS(449), 1,
      sym__natural_number,
    ACTIONS(451), 1,
      anon_sym__,
    ACTIONS(453), 1,
      anon_sym_BQUOTE,
    ACTIONS(455), 1,
      sym__identifier,
    STATE(96), 1,
      sym_comment,
    STATE(193), 1,
      aux_sym_function_call_repeat1,
    STATE(282), 1,
      sym_identifier,
    STATE(284), 1,
      aux_sym__friendly_number,
    STATE(302), 1,
      sym_literal,
    STATE(307), 1,
      sym_integer,
    STATE(308), 1,
      sym__call_parameter,
    STATE(303), 2,
      sym_literal_string,
      sym_decimal_number,
    STATE(305), 2,
      sym__double_quote_string,
      sym__single_quote_string,
    ACTIONS(65), 3,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(441), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    ACTIONS(63), 15,
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
  [8406] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    STATE(97), 1,
      sym_comment,
    ACTIONS(387), 5,
      sym_keyword_from,
      anon_sym_EQ,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(385), 33,
      ts_builtin_sym_end,
      sym_keyword_filter,
      sym_keyword_derive,
      sym_keyword_group,
      sym_keyword_aggregate,
      sym_keyword_sort,
      sym_keyword_take,
      sym_keyword_join,
      sym_keyword_select,
      sym_keyword_append,
      sym_keyword_remove,
      sym_keyword_intersect,
      sym_keyword_loop,
      sym_keyword_mod,
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
  [8458] = 29,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(21), 1,
      sym_pipe,
    ACTIONS(31), 1,
      anon_sym_LPAREN,
    ACTIONS(37), 1,
      anon_sym_DOT,
    ACTIONS(39), 1,
      anon_sym_DASH,
    ACTIONS(41), 1,
      anon_sym_DQUOTE,
    ACTIONS(43), 1,
      anon_sym_SQUOTE,
    ACTIONS(45), 1,
      anon_sym_f_DQUOTE,
    ACTIONS(47), 1,
      anon_sym_f_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(49), 1,
      anon_sym_s_DQUOTE,
    ACTIONS(51), 1,
      anon_sym_s_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(53), 1,
      sym__natural_number,
    ACTIONS(55), 1,
      anon_sym__,
    ACTIONS(57), 1,
      anon_sym_BQUOTE,
    ACTIONS(59), 1,
      sym__identifier,
    ACTIONS(61), 1,
      anon_sym_AT,
    STATE(17), 1,
      aux_sym__friendly_number,
    STATE(71), 1,
      sym_identifier,
    STATE(72), 1,
      sym__double_quote_string,
    STATE(75), 1,
      sym_integer,
    STATE(79), 1,
      sym__single_quote_string,
    STATE(98), 1,
      sym_comment,
    STATE(313), 1,
      sym__expression,
    STATE(484), 1,
      sym__alias_identifier,
    STATE(76), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(78), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(88), 2,
      sym_literal_string,
      sym_decimal_number,
    ACTIONS(23), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(81), 8,
      sym_literal,
      sym_f_string,
      sym_s_string,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [8558] = 29,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(21), 1,
      sym_pipe,
    ACTIONS(31), 1,
      anon_sym_LPAREN,
    ACTIONS(37), 1,
      anon_sym_DOT,
    ACTIONS(39), 1,
      anon_sym_DASH,
    ACTIONS(41), 1,
      anon_sym_DQUOTE,
    ACTIONS(43), 1,
      anon_sym_SQUOTE,
    ACTIONS(45), 1,
      anon_sym_f_DQUOTE,
    ACTIONS(47), 1,
      anon_sym_f_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(49), 1,
      anon_sym_s_DQUOTE,
    ACTIONS(51), 1,
      anon_sym_s_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(53), 1,
      sym__natural_number,
    ACTIONS(55), 1,
      anon_sym__,
    ACTIONS(57), 1,
      anon_sym_BQUOTE,
    ACTIONS(59), 1,
      sym__identifier,
    ACTIONS(61), 1,
      anon_sym_AT,
    STATE(17), 1,
      aux_sym__friendly_number,
    STATE(71), 1,
      sym_identifier,
    STATE(72), 1,
      sym__double_quote_string,
    STATE(75), 1,
      sym_integer,
    STATE(79), 1,
      sym__single_quote_string,
    STATE(99), 1,
      sym_comment,
    STATE(108), 1,
      sym__expression,
    STATE(484), 1,
      sym__alias_identifier,
    STATE(76), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(78), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(88), 2,
      sym_literal_string,
      sym_decimal_number,
    ACTIONS(23), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(81), 8,
      sym_literal,
      sym_f_string,
      sym_s_string,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [8658] = 29,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(21), 1,
      sym_pipe,
    ACTIONS(31), 1,
      anon_sym_LPAREN,
    ACTIONS(37), 1,
      anon_sym_DOT,
    ACTIONS(39), 1,
      anon_sym_DASH,
    ACTIONS(41), 1,
      anon_sym_DQUOTE,
    ACTIONS(43), 1,
      anon_sym_SQUOTE,
    ACTIONS(45), 1,
      anon_sym_f_DQUOTE,
    ACTIONS(47), 1,
      anon_sym_f_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(49), 1,
      anon_sym_s_DQUOTE,
    ACTIONS(51), 1,
      anon_sym_s_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(53), 1,
      sym__natural_number,
    ACTIONS(55), 1,
      anon_sym__,
    ACTIONS(57), 1,
      anon_sym_BQUOTE,
    ACTIONS(59), 1,
      sym__identifier,
    ACTIONS(61), 1,
      anon_sym_AT,
    STATE(17), 1,
      aux_sym__friendly_number,
    STATE(71), 1,
      sym_identifier,
    STATE(72), 1,
      sym__double_quote_string,
    STATE(75), 1,
      sym_integer,
    STATE(79), 1,
      sym__single_quote_string,
    STATE(100), 1,
      sym_comment,
    STATE(109), 1,
      sym__expression,
    STATE(484), 1,
      sym__alias_identifier,
    STATE(76), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(78), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(88), 2,
      sym_literal_string,
      sym_decimal_number,
    ACTIONS(23), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(81), 8,
      sym_literal,
      sym_f_string,
      sym_s_string,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [8758] = 29,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(21), 1,
      sym_pipe,
    ACTIONS(31), 1,
      anon_sym_LPAREN,
    ACTIONS(37), 1,
      anon_sym_DOT,
    ACTIONS(39), 1,
      anon_sym_DASH,
    ACTIONS(41), 1,
      anon_sym_DQUOTE,
    ACTIONS(43), 1,
      anon_sym_SQUOTE,
    ACTIONS(45), 1,
      anon_sym_f_DQUOTE,
    ACTIONS(47), 1,
      anon_sym_f_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(49), 1,
      anon_sym_s_DQUOTE,
    ACTIONS(51), 1,
      anon_sym_s_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(53), 1,
      sym__natural_number,
    ACTIONS(55), 1,
      anon_sym__,
    ACTIONS(57), 1,
      anon_sym_BQUOTE,
    ACTIONS(59), 1,
      sym__identifier,
    ACTIONS(61), 1,
      anon_sym_AT,
    STATE(17), 1,
      aux_sym__friendly_number,
    STATE(71), 1,
      sym_identifier,
    STATE(72), 1,
      sym__double_quote_string,
    STATE(75), 1,
      sym_integer,
    STATE(79), 1,
      sym__single_quote_string,
    STATE(101), 1,
      sym_comment,
    STATE(110), 1,
      sym__expression,
    STATE(484), 1,
      sym__alias_identifier,
    STATE(76), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(78), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(88), 2,
      sym_literal_string,
      sym_decimal_number,
    ACTIONS(23), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(81), 8,
      sym_literal,
      sym_f_string,
      sym_s_string,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [8858] = 29,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(21), 1,
      sym_pipe,
    ACTIONS(31), 1,
      anon_sym_LPAREN,
    ACTIONS(37), 1,
      anon_sym_DOT,
    ACTIONS(39), 1,
      anon_sym_DASH,
    ACTIONS(41), 1,
      anon_sym_DQUOTE,
    ACTIONS(43), 1,
      anon_sym_SQUOTE,
    ACTIONS(45), 1,
      anon_sym_f_DQUOTE,
    ACTIONS(47), 1,
      anon_sym_f_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(49), 1,
      anon_sym_s_DQUOTE,
    ACTIONS(51), 1,
      anon_sym_s_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(53), 1,
      sym__natural_number,
    ACTIONS(55), 1,
      anon_sym__,
    ACTIONS(57), 1,
      anon_sym_BQUOTE,
    ACTIONS(59), 1,
      sym__identifier,
    ACTIONS(61), 1,
      anon_sym_AT,
    STATE(17), 1,
      aux_sym__friendly_number,
    STATE(71), 1,
      sym_identifier,
    STATE(72), 1,
      sym__double_quote_string,
    STATE(75), 1,
      sym_integer,
    STATE(79), 1,
      sym__single_quote_string,
    STATE(102), 1,
      sym_comment,
    STATE(111), 1,
      sym__expression,
    STATE(484), 1,
      sym__alias_identifier,
    STATE(76), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(78), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(88), 2,
      sym_literal_string,
      sym_decimal_number,
    ACTIONS(23), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(81), 8,
      sym_literal,
      sym_f_string,
      sym_s_string,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [8958] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    STATE(103), 1,
      sym_comment,
    ACTIONS(459), 5,
      sym_keyword_from,
      anon_sym_EQ,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(457), 33,
      ts_builtin_sym_end,
      sym_keyword_filter,
      sym_keyword_derive,
      sym_keyword_group,
      sym_keyword_aggregate,
      sym_keyword_sort,
      sym_keyword_take,
      sym_keyword_join,
      sym_keyword_select,
      sym_keyword_append,
      sym_keyword_remove,
      sym_keyword_intersect,
      sym_keyword_loop,
      sym_keyword_mod,
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
  [9010] = 29,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(21), 1,
      sym_pipe,
    ACTIONS(31), 1,
      anon_sym_LPAREN,
    ACTIONS(37), 1,
      anon_sym_DOT,
    ACTIONS(39), 1,
      anon_sym_DASH,
    ACTIONS(41), 1,
      anon_sym_DQUOTE,
    ACTIONS(43), 1,
      anon_sym_SQUOTE,
    ACTIONS(45), 1,
      anon_sym_f_DQUOTE,
    ACTIONS(47), 1,
      anon_sym_f_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(49), 1,
      anon_sym_s_DQUOTE,
    ACTIONS(51), 1,
      anon_sym_s_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(53), 1,
      sym__natural_number,
    ACTIONS(55), 1,
      anon_sym__,
    ACTIONS(57), 1,
      anon_sym_BQUOTE,
    ACTIONS(59), 1,
      sym__identifier,
    ACTIONS(61), 1,
      anon_sym_AT,
    STATE(17), 1,
      aux_sym__friendly_number,
    STATE(71), 1,
      sym_identifier,
    STATE(72), 1,
      sym__double_quote_string,
    STATE(75), 1,
      sym_integer,
    STATE(79), 1,
      sym__single_quote_string,
    STATE(104), 1,
      sym_comment,
    STATE(116), 1,
      sym__expression,
    STATE(484), 1,
      sym__alias_identifier,
    STATE(76), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(78), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(88), 2,
      sym_literal_string,
      sym_decimal_number,
    ACTIONS(23), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(81), 8,
      sym_literal,
      sym_f_string,
      sym_s_string,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [9110] = 29,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(21), 1,
      sym_pipe,
    ACTIONS(31), 1,
      anon_sym_LPAREN,
    ACTIONS(37), 1,
      anon_sym_DOT,
    ACTIONS(39), 1,
      anon_sym_DASH,
    ACTIONS(41), 1,
      anon_sym_DQUOTE,
    ACTIONS(43), 1,
      anon_sym_SQUOTE,
    ACTIONS(45), 1,
      anon_sym_f_DQUOTE,
    ACTIONS(47), 1,
      anon_sym_f_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(49), 1,
      anon_sym_s_DQUOTE,
    ACTIONS(51), 1,
      anon_sym_s_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(53), 1,
      sym__natural_number,
    ACTIONS(55), 1,
      anon_sym__,
    ACTIONS(57), 1,
      anon_sym_BQUOTE,
    ACTIONS(59), 1,
      sym__identifier,
    ACTIONS(61), 1,
      anon_sym_AT,
    STATE(17), 1,
      aux_sym__friendly_number,
    STATE(71), 1,
      sym_identifier,
    STATE(72), 1,
      sym__double_quote_string,
    STATE(75), 1,
      sym_integer,
    STATE(79), 1,
      sym__single_quote_string,
    STATE(105), 1,
      sym_comment,
    STATE(112), 1,
      sym__expression,
    STATE(484), 1,
      sym__alias_identifier,
    STATE(76), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(78), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(88), 2,
      sym_literal_string,
      sym_decimal_number,
    ACTIONS(23), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(81), 8,
      sym_literal,
      sym_f_string,
      sym_s_string,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [9210] = 29,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(21), 1,
      sym_pipe,
    ACTIONS(31), 1,
      anon_sym_LPAREN,
    ACTIONS(37), 1,
      anon_sym_DOT,
    ACTIONS(39), 1,
      anon_sym_DASH,
    ACTIONS(41), 1,
      anon_sym_DQUOTE,
    ACTIONS(43), 1,
      anon_sym_SQUOTE,
    ACTIONS(45), 1,
      anon_sym_f_DQUOTE,
    ACTIONS(47), 1,
      anon_sym_f_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(49), 1,
      anon_sym_s_DQUOTE,
    ACTIONS(51), 1,
      anon_sym_s_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(53), 1,
      sym__natural_number,
    ACTIONS(55), 1,
      anon_sym__,
    ACTIONS(57), 1,
      anon_sym_BQUOTE,
    ACTIONS(59), 1,
      sym__identifier,
    ACTIONS(61), 1,
      anon_sym_AT,
    STATE(17), 1,
      aux_sym__friendly_number,
    STATE(71), 1,
      sym_identifier,
    STATE(72), 1,
      sym__double_quote_string,
    STATE(75), 1,
      sym_integer,
    STATE(79), 1,
      sym__single_quote_string,
    STATE(106), 1,
      sym_comment,
    STATE(113), 1,
      sym__expression,
    STATE(484), 1,
      sym__alias_identifier,
    STATE(76), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(78), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(88), 2,
      sym_literal_string,
      sym_decimal_number,
    ACTIONS(23), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(81), 8,
      sym_literal,
      sym_f_string,
      sym_s_string,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [9310] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    STATE(107), 1,
      sym_comment,
    ACTIONS(463), 5,
      sym_keyword_from,
      anon_sym_EQ,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(461), 33,
      ts_builtin_sym_end,
      sym_keyword_filter,
      sym_keyword_derive,
      sym_keyword_group,
      sym_keyword_aggregate,
      sym_keyword_sort,
      sym_keyword_take,
      sym_keyword_join,
      sym_keyword_select,
      sym_keyword_append,
      sym_keyword_remove,
      sym_keyword_intersect,
      sym_keyword_loop,
      sym_keyword_mod,
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
  [9362] = 14,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(469), 1,
      anon_sym_DASH,
    ACTIONS(471), 1,
      anon_sym_PLUS,
    ACTIONS(475), 1,
      anon_sym_STAR,
    ACTIONS(477), 1,
      anon_sym_SLASH,
    ACTIONS(479), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(483), 1,
      anon_sym_QMARK_QMARK,
    ACTIONS(485), 1,
      anon_sym_AMP_AMP,
    STATE(108), 1,
      sym_comment,
    ACTIONS(467), 2,
      sym_keyword_from,
      anon_sym_EQ,
    ACTIONS(481), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(473), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(465), 23,
      ts_builtin_sym_end,
      sym_keyword_filter,
      sym_keyword_derive,
      sym_keyword_group,
      sym_keyword_aggregate,
      sym_keyword_sort,
      sym_keyword_take,
      sym_keyword_join,
      sym_keyword_select,
      sym_keyword_append,
      sym_keyword_remove,
      sym_keyword_intersect,
      sym_keyword_loop,
      sym_keyword_mod,
      sym_keyword_func,
      sym_keyword_let,
      sym_keyword_from_text,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_EQ_GT,
      anon_sym_PIPE_PIPE,
  [9432] = 13,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(469), 1,
      anon_sym_DASH,
    ACTIONS(471), 1,
      anon_sym_PLUS,
    ACTIONS(475), 1,
      anon_sym_STAR,
    ACTIONS(477), 1,
      anon_sym_SLASH,
    ACTIONS(479), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(483), 1,
      anon_sym_QMARK_QMARK,
    STATE(109), 1,
      sym_comment,
    ACTIONS(467), 2,
      sym_keyword_from,
      anon_sym_EQ,
    ACTIONS(481), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(473), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(465), 24,
      ts_builtin_sym_end,
      sym_keyword_filter,
      sym_keyword_derive,
      sym_keyword_group,
      sym_keyword_aggregate,
      sym_keyword_sort,
      sym_keyword_take,
      sym_keyword_join,
      sym_keyword_select,
      sym_keyword_append,
      sym_keyword_remove,
      sym_keyword_intersect,
      sym_keyword_loop,
      sym_keyword_mod,
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
  [9500] = 12,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(469), 1,
      anon_sym_DASH,
    ACTIONS(471), 1,
      anon_sym_PLUS,
    ACTIONS(475), 1,
      anon_sym_STAR,
    ACTIONS(477), 1,
      anon_sym_SLASH,
    ACTIONS(479), 1,
      anon_sym_SLASH_SLASH,
    STATE(110), 1,
      sym_comment,
    ACTIONS(467), 2,
      sym_keyword_from,
      anon_sym_EQ,
    ACTIONS(481), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(473), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(465), 25,
      ts_builtin_sym_end,
      sym_keyword_filter,
      sym_keyword_derive,
      sym_keyword_group,
      sym_keyword_aggregate,
      sym_keyword_sort,
      sym_keyword_take,
      sym_keyword_join,
      sym_keyword_select,
      sym_keyword_append,
      sym_keyword_remove,
      sym_keyword_intersect,
      sym_keyword_loop,
      sym_keyword_mod,
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
  [9566] = 9,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(469), 1,
      anon_sym_DASH,
    ACTIONS(471), 1,
      anon_sym_PLUS,
    ACTIONS(475), 1,
      anon_sym_STAR,
    ACTIONS(477), 1,
      anon_sym_SLASH,
    STATE(111), 1,
      sym_comment,
    ACTIONS(467), 4,
      sym_keyword_from,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(465), 30,
      ts_builtin_sym_end,
      sym_keyword_filter,
      sym_keyword_derive,
      sym_keyword_group,
      sym_keyword_aggregate,
      sym_keyword_sort,
      sym_keyword_take,
      sym_keyword_join,
      sym_keyword_select,
      sym_keyword_append,
      sym_keyword_remove,
      sym_keyword_intersect,
      sym_keyword_loop,
      sym_keyword_mod,
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
  [9626] = 8,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(469), 1,
      anon_sym_DASH,
    ACTIONS(471), 1,
      anon_sym_PLUS,
    ACTIONS(475), 1,
      anon_sym_STAR,
    STATE(112), 1,
      sym_comment,
    ACTIONS(467), 5,
      sym_keyword_from,
      anon_sym_EQ,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(465), 30,
      ts_builtin_sym_end,
      sym_keyword_filter,
      sym_keyword_derive,
      sym_keyword_group,
      sym_keyword_aggregate,
      sym_keyword_sort,
      sym_keyword_take,
      sym_keyword_join,
      sym_keyword_select,
      sym_keyword_append,
      sym_keyword_remove,
      sym_keyword_intersect,
      sym_keyword_loop,
      sym_keyword_mod,
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
  [9684] = 7,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(469), 1,
      anon_sym_DASH,
    ACTIONS(471), 1,
      anon_sym_PLUS,
    STATE(113), 1,
      sym_comment,
    ACTIONS(467), 5,
      sym_keyword_from,
      anon_sym_EQ,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(465), 31,
      ts_builtin_sym_end,
      sym_keyword_filter,
      sym_keyword_derive,
      sym_keyword_group,
      sym_keyword_aggregate,
      sym_keyword_sort,
      sym_keyword_take,
      sym_keyword_join,
      sym_keyword_select,
      sym_keyword_append,
      sym_keyword_remove,
      sym_keyword_intersect,
      sym_keyword_loop,
      sym_keyword_mod,
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
  [9740] = 30,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(21), 1,
      sym_pipe,
    ACTIONS(31), 1,
      anon_sym_LPAREN,
    ACTIONS(37), 1,
      anon_sym_DOT,
    ACTIONS(39), 1,
      anon_sym_DASH,
    ACTIONS(41), 1,
      anon_sym_DQUOTE,
    ACTIONS(43), 1,
      anon_sym_SQUOTE,
    ACTIONS(45), 1,
      anon_sym_f_DQUOTE,
    ACTIONS(47), 1,
      anon_sym_f_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(49), 1,
      anon_sym_s_DQUOTE,
    ACTIONS(51), 1,
      anon_sym_s_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(53), 1,
      sym__natural_number,
    ACTIONS(55), 1,
      anon_sym__,
    ACTIONS(57), 1,
      anon_sym_BQUOTE,
    ACTIONS(59), 1,
      sym__identifier,
    ACTIONS(61), 1,
      anon_sym_AT,
    STATE(17), 1,
      aux_sym__friendly_number,
    STATE(71), 1,
      sym_identifier,
    STATE(72), 1,
      sym__double_quote_string,
    STATE(75), 1,
      sym_integer,
    STATE(79), 1,
      sym__single_quote_string,
    STATE(114), 1,
      sym_comment,
    STATE(321), 1,
      sym__expression,
    STATE(484), 1,
      sym__alias_identifier,
    STATE(76), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(78), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(88), 2,
      sym_literal_string,
      sym_decimal_number,
    STATE(256), 2,
      sym_s_string,
      sym_binary_expression,
    ACTIONS(23), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(81), 6,
      sym_literal,
      sym_f_string,
      sym_field,
      sym_date,
      sym_time,
      sym_timestamp,
  [9842] = 10,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(469), 1,
      anon_sym_DASH,
    ACTIONS(471), 1,
      anon_sym_PLUS,
    ACTIONS(475), 1,
      anon_sym_STAR,
    ACTIONS(477), 1,
      anon_sym_SLASH,
    ACTIONS(479), 1,
      anon_sym_SLASH_SLASH,
    STATE(115), 1,
      sym_comment,
    ACTIONS(467), 4,
      sym_keyword_from,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(465), 29,
      ts_builtin_sym_end,
      sym_keyword_filter,
      sym_keyword_derive,
      sym_keyword_group,
      sym_keyword_aggregate,
      sym_keyword_sort,
      sym_keyword_take,
      sym_keyword_join,
      sym_keyword_select,
      sym_keyword_append,
      sym_keyword_remove,
      sym_keyword_intersect,
      sym_keyword_loop,
      sym_keyword_mod,
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
  [9904] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    STATE(116), 1,
      sym_comment,
    ACTIONS(467), 5,
      sym_keyword_from,
      anon_sym_EQ,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(465), 33,
      ts_builtin_sym_end,
      sym_keyword_filter,
      sym_keyword_derive,
      sym_keyword_group,
      sym_keyword_aggregate,
      sym_keyword_sort,
      sym_keyword_take,
      sym_keyword_join,
      sym_keyword_select,
      sym_keyword_append,
      sym_keyword_remove,
      sym_keyword_intersect,
      sym_keyword_loop,
      sym_keyword_mod,
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
  [9956] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(471), 1,
      anon_sym_PLUS,
    STATE(117), 1,
      sym_comment,
    ACTIONS(467), 5,
      sym_keyword_from,
      anon_sym_EQ,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(465), 32,
      ts_builtin_sym_end,
      sym_keyword_filter,
      sym_keyword_derive,
      sym_keyword_group,
      sym_keyword_aggregate,
      sym_keyword_sort,
      sym_keyword_take,
      sym_keyword_join,
      sym_keyword_select,
      sym_keyword_append,
      sym_keyword_remove,
      sym_keyword_intersect,
      sym_keyword_loop,
      sym_keyword_mod,
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
  [10010] = 29,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(21), 1,
      sym_pipe,
    ACTIONS(31), 1,
      anon_sym_LPAREN,
    ACTIONS(37), 1,
      anon_sym_DOT,
    ACTIONS(39), 1,
      anon_sym_DASH,
    ACTIONS(41), 1,
      anon_sym_DQUOTE,
    ACTIONS(43), 1,
      anon_sym_SQUOTE,
    ACTIONS(45), 1,
      anon_sym_f_DQUOTE,
    ACTIONS(47), 1,
      anon_sym_f_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(49), 1,
      anon_sym_s_DQUOTE,
    ACTIONS(51), 1,
      anon_sym_s_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(53), 1,
      sym__natural_number,
    ACTIONS(55), 1,
      anon_sym__,
    ACTIONS(57), 1,
      anon_sym_BQUOTE,
    ACTIONS(59), 1,
      sym__identifier,
    ACTIONS(61), 1,
      anon_sym_AT,
    STATE(17), 1,
      aux_sym__friendly_number,
    STATE(71), 1,
      sym_identifier,
    STATE(72), 1,
      sym__double_quote_string,
    STATE(75), 1,
      sym_integer,
    STATE(79), 1,
      sym__single_quote_string,
    STATE(115), 1,
      sym__expression,
    STATE(118), 1,
      sym_comment,
    STATE(484), 1,
      sym__alias_identifier,
    STATE(76), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(78), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(88), 2,
      sym_literal_string,
      sym_decimal_number,
    ACTIONS(23), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(81), 8,
      sym_literal,
      sym_f_string,
      sym_s_string,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [10110] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    STATE(119), 1,
      sym_comment,
    ACTIONS(489), 5,
      sym_keyword_from,
      anon_sym_EQ,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(487), 33,
      ts_builtin_sym_end,
      sym_keyword_filter,
      sym_keyword_derive,
      sym_keyword_group,
      sym_keyword_aggregate,
      sym_keyword_sort,
      sym_keyword_take,
      sym_keyword_join,
      sym_keyword_select,
      sym_keyword_append,
      sym_keyword_remove,
      sym_keyword_intersect,
      sym_keyword_loop,
      sym_keyword_mod,
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
  [10162] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    STATE(120), 1,
      sym_comment,
    ACTIONS(493), 5,
      sym_keyword_from,
      anon_sym_EQ,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(491), 33,
      ts_builtin_sym_end,
      sym_keyword_filter,
      sym_keyword_derive,
      sym_keyword_group,
      sym_keyword_aggregate,
      sym_keyword_sort,
      sym_keyword_take,
      sym_keyword_join,
      sym_keyword_select,
      sym_keyword_append,
      sym_keyword_remove,
      sym_keyword_intersect,
      sym_keyword_loop,
      sym_keyword_mod,
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
  [10214] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    STATE(121), 1,
      sym_comment,
    ACTIONS(497), 5,
      sym_keyword_from,
      anon_sym_EQ,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(495), 33,
      ts_builtin_sym_end,
      sym_keyword_filter,
      sym_keyword_derive,
      sym_keyword_group,
      sym_keyword_aggregate,
      sym_keyword_sort,
      sym_keyword_take,
      sym_keyword_join,
      sym_keyword_select,
      sym_keyword_append,
      sym_keyword_remove,
      sym_keyword_intersect,
      sym_keyword_loop,
      sym_keyword_mod,
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
  [10266] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    STATE(122), 1,
      sym_comment,
    ACTIONS(501), 5,
      sym_keyword_from,
      anon_sym_EQ,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(499), 33,
      ts_builtin_sym_end,
      sym_keyword_filter,
      sym_keyword_derive,
      sym_keyword_group,
      sym_keyword_aggregate,
      sym_keyword_sort,
      sym_keyword_take,
      sym_keyword_join,
      sym_keyword_select,
      sym_keyword_append,
      sym_keyword_remove,
      sym_keyword_intersect,
      sym_keyword_loop,
      sym_keyword_mod,
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
  [10318] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    STATE(123), 1,
      sym_comment,
    ACTIONS(505), 5,
      sym_keyword_from,
      anon_sym_EQ,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(503), 33,
      ts_builtin_sym_end,
      sym_keyword_filter,
      sym_keyword_derive,
      sym_keyword_group,
      sym_keyword_aggregate,
      sym_keyword_sort,
      sym_keyword_take,
      sym_keyword_join,
      sym_keyword_select,
      sym_keyword_append,
      sym_keyword_remove,
      sym_keyword_intersect,
      sym_keyword_loop,
      sym_keyword_mod,
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
  [10370] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    STATE(124), 1,
      sym_comment,
    ACTIONS(509), 5,
      sym_keyword_from,
      anon_sym_EQ,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(507), 33,
      ts_builtin_sym_end,
      sym_keyword_filter,
      sym_keyword_derive,
      sym_keyword_group,
      sym_keyword_aggregate,
      sym_keyword_sort,
      sym_keyword_take,
      sym_keyword_join,
      sym_keyword_select,
      sym_keyword_append,
      sym_keyword_remove,
      sym_keyword_intersect,
      sym_keyword_loop,
      sym_keyword_mod,
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
  [10422] = 15,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(469), 1,
      anon_sym_DASH,
    ACTIONS(471), 1,
      anon_sym_PLUS,
    ACTIONS(475), 1,
      anon_sym_STAR,
    ACTIONS(477), 1,
      anon_sym_SLASH,
    ACTIONS(479), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(483), 1,
      anon_sym_QMARK_QMARK,
    ACTIONS(485), 1,
      anon_sym_AMP_AMP,
    ACTIONS(513), 1,
      sym_keyword_from,
    ACTIONS(515), 1,
      anon_sym_PIPE_PIPE,
    STATE(125), 1,
      sym_comment,
    ACTIONS(481), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(473), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(511), 21,
      ts_builtin_sym_end,
      sym_keyword_filter,
      sym_keyword_derive,
      sym_keyword_group,
      sym_keyword_aggregate,
      sym_keyword_sort,
      sym_keyword_take,
      sym_keyword_join,
      sym_keyword_select,
      sym_keyword_append,
      sym_keyword_remove,
      sym_keyword_intersect,
      sym_keyword_loop,
      sym_keyword_mod,
      sym_keyword_func,
      sym_keyword_let,
      sym_keyword_from_text,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
  [10492] = 15,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(469), 1,
      anon_sym_DASH,
    ACTIONS(471), 1,
      anon_sym_PLUS,
    ACTIONS(475), 1,
      anon_sym_STAR,
    ACTIONS(477), 1,
      anon_sym_SLASH,
    ACTIONS(479), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(483), 1,
      anon_sym_QMARK_QMARK,
    ACTIONS(485), 1,
      anon_sym_AMP_AMP,
    ACTIONS(515), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(519), 1,
      sym_keyword_from,
    STATE(126), 1,
      sym_comment,
    ACTIONS(481), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(473), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(517), 21,
      ts_builtin_sym_end,
      sym_keyword_filter,
      sym_keyword_derive,
      sym_keyword_group,
      sym_keyword_aggregate,
      sym_keyword_sort,
      sym_keyword_take,
      sym_keyword_join,
      sym_keyword_select,
      sym_keyword_append,
      sym_keyword_remove,
      sym_keyword_intersect,
      sym_keyword_loop,
      sym_keyword_mod,
      sym_keyword_func,
      sym_keyword_let,
      sym_keyword_from_text,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
  [10562] = 21,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(21), 1,
      sym_pipe,
    ACTIONS(524), 1,
      anon_sym_DOT,
    ACTIONS(527), 1,
      anon_sym_DASH,
    ACTIONS(530), 1,
      anon_sym_DQUOTE,
    ACTIONS(533), 1,
      anon_sym_SQUOTE,
    ACTIONS(536), 1,
      sym__natural_number,
    ACTIONS(539), 1,
      anon_sym__,
    ACTIONS(542), 1,
      anon_sym_BQUOTE,
    ACTIONS(545), 1,
      sym__identifier,
    STATE(185), 1,
      sym_identifier,
    STATE(189), 1,
      aux_sym__friendly_number,
    STATE(195), 1,
      sym_integer,
    STATE(196), 1,
      sym__call_parameter,
    STATE(197), 1,
      sym_literal,
    ACTIONS(318), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
    STATE(127), 2,
      sym_comment,
      aux_sym_function_call_repeat1,
    STATE(199), 2,
      sym__double_quote_string,
      sym__single_quote_string,
    STATE(205), 2,
      sym_literal_string,
      sym_decimal_number,
    ACTIONS(521), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    ACTIONS(313), 12,
      sym_keyword_filter,
      sym_keyword_derive,
      sym_keyword_group,
      sym_keyword_aggregate,
      sym_keyword_sort,
      sym_keyword_take,
      sym_keyword_join,
      sym_keyword_select,
      sym_keyword_append,
      sym_keyword_remove,
      sym_keyword_intersect,
      sym_keyword_loop,
  [10643] = 22,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(21), 1,
      sym_pipe,
    ACTIONS(125), 1,
      anon_sym_DOT,
    ACTIONS(127), 1,
      anon_sym_DQUOTE,
    ACTIONS(129), 1,
      anon_sym_SQUOTE,
    ACTIONS(131), 1,
      sym__natural_number,
    ACTIONS(133), 1,
      anon_sym__,
    ACTIONS(135), 1,
      anon_sym_BQUOTE,
    ACTIONS(137), 1,
      sym__identifier,
    ACTIONS(548), 1,
      anon_sym_DASH,
    STATE(127), 1,
      aux_sym_function_call_repeat1,
    STATE(128), 1,
      sym_comment,
    STATE(185), 1,
      sym_identifier,
    STATE(189), 1,
      aux_sym__friendly_number,
    STATE(195), 1,
      sym_integer,
    STATE(196), 1,
      sym__call_parameter,
    STATE(197), 1,
      sym_literal,
    ACTIONS(391), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
    STATE(199), 2,
      sym__double_quote_string,
      sym__single_quote_string,
    STATE(205), 2,
      sym_literal_string,
      sym_decimal_number,
    ACTIONS(123), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    ACTIONS(393), 12,
      sym_keyword_filter,
      sym_keyword_derive,
      sym_keyword_group,
      sym_keyword_aggregate,
      sym_keyword_sort,
      sym_keyword_take,
      sym_keyword_join,
      sym_keyword_select,
      sym_keyword_append,
      sym_keyword_remove,
      sym_keyword_intersect,
      sym_keyword_loop,
  [10726] = 15,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(469), 1,
      anon_sym_DASH,
    ACTIONS(471), 1,
      anon_sym_PLUS,
    ACTIONS(475), 1,
      anon_sym_STAR,
    ACTIONS(477), 1,
      anon_sym_SLASH,
    ACTIONS(479), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(483), 1,
      anon_sym_QMARK_QMARK,
    ACTIONS(485), 1,
      anon_sym_AMP_AMP,
    ACTIONS(515), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(552), 1,
      sym_keyword_from,
    STATE(129), 1,
      sym_comment,
    ACTIONS(481), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(473), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(550), 20,
      ts_builtin_sym_end,
      sym_keyword_filter,
      sym_keyword_derive,
      sym_keyword_group,
      sym_keyword_aggregate,
      sym_keyword_sort,
      sym_keyword_take,
      sym_keyword_join,
      sym_keyword_select,
      sym_keyword_append,
      sym_keyword_remove,
      sym_keyword_intersect,
      sym_keyword_loop,
      sym_keyword_mod,
      sym_keyword_func,
      sym_keyword_let,
      sym_keyword_from_text,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
  [10795] = 16,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(469), 1,
      anon_sym_DASH,
    ACTIONS(471), 1,
      anon_sym_PLUS,
    ACTIONS(475), 1,
      anon_sym_STAR,
    ACTIONS(477), 1,
      anon_sym_SLASH,
    ACTIONS(479), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(483), 1,
      anon_sym_QMARK_QMARK,
    ACTIONS(485), 1,
      anon_sym_AMP_AMP,
    ACTIONS(515), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(554), 1,
      sym_keyword_from,
    ACTIONS(558), 1,
      anon_sym_EQ,
    STATE(130), 1,
      sym_comment,
    ACTIONS(481), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(473), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(556), 17,
      sym_keyword_filter,
      sym_keyword_derive,
      sym_keyword_group,
      sym_keyword_aggregate,
      sym_keyword_sort,
      sym_keyword_take,
      sym_keyword_join,
      sym_keyword_select,
      sym_keyword_append,
      sym_keyword_remove,
      sym_keyword_intersect,
      sym_keyword_loop,
      sym_keyword_mod,
      sym_keyword_func,
      sym_keyword_let,
      sym_keyword_from_text,
      anon_sym_RBRACE,
  [10864] = 16,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(469), 1,
      anon_sym_DASH,
    ACTIONS(471), 1,
      anon_sym_PLUS,
    ACTIONS(475), 1,
      anon_sym_STAR,
    ACTIONS(477), 1,
      anon_sym_SLASH,
    ACTIONS(479), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(483), 1,
      anon_sym_QMARK_QMARK,
    ACTIONS(485), 1,
      anon_sym_AMP_AMP,
    ACTIONS(515), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(554), 1,
      sym_keyword_from,
    ACTIONS(560), 1,
      anon_sym_EQ,
    STATE(131), 1,
      sym_comment,
    ACTIONS(481), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(473), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(556), 17,
      ts_builtin_sym_end,
      sym_keyword_filter,
      sym_keyword_derive,
      sym_keyword_group,
      sym_keyword_aggregate,
      sym_keyword_sort,
      sym_keyword_take,
      sym_keyword_join,
      sym_keyword_select,
      sym_keyword_append,
      sym_keyword_remove,
      sym_keyword_intersect,
      sym_keyword_loop,
      sym_keyword_mod,
      sym_keyword_func,
      sym_keyword_let,
      sym_keyword_from_text,
  [10933] = 7,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(21), 1,
      sym_pipe,
    ACTIONS(148), 1,
      sym_keyword_from,
    STATE(132), 1,
      sym_comment,
    STATE(145), 1,
      aux_sym__friendly_number,
    ACTIONS(562), 2,
      sym__natural_number,
      anon_sym__,
    ACTIONS(146), 26,
      ts_builtin_sym_end,
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
      sym_keyword_mod,
      sym_keyword_func,
      sym_keyword_let,
      sym_keyword_from_text,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_DOT_DOT,
  [10981] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(21), 1,
      sym_pipe,
    STATE(133), 1,
      sym_comment,
    STATE(134), 1,
      aux_sym__friendly_number,
    ACTIONS(146), 7,
      anon_sym_RBRACE,
      anon_sym_DOT,
      anon_sym_DASH,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym__natural_number,
      anon_sym_BQUOTE,
    ACTIONS(148), 22,
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
      sym_keyword_mod,
      sym_keyword_func,
      sym_keyword_let,
      sym_keyword_from_text,
      anon_sym__,
      sym__identifier,
  [11027] = 7,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(21), 1,
      sym_pipe,
    ACTIONS(564), 1,
      sym__natural_number,
    ACTIONS(567), 1,
      anon_sym__,
    STATE(134), 2,
      aux_sym__friendly_number,
      sym_comment,
    ACTIONS(139), 6,
      anon_sym_RBRACE,
      anon_sym_DOT,
      anon_sym_DASH,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
    ACTIONS(141), 21,
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
      sym_keyword_mod,
      sym_keyword_func,
      sym_keyword_let,
      sym_keyword_from_text,
      sym__identifier,
  [11075] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(21), 1,
      sym_pipe,
    STATE(134), 1,
      aux_sym__friendly_number,
    STATE(135), 1,
      sym_comment,
    ACTIONS(154), 7,
      anon_sym_RBRACE,
      anon_sym_DOT,
      anon_sym_DASH,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym__natural_number,
      anon_sym_BQUOTE,
    ACTIONS(156), 22,
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
      sym_keyword_mod,
      sym_keyword_func,
      sym_keyword_let,
      sym_keyword_from_text,
      anon_sym__,
      sym__identifier,
  [11121] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(21), 1,
      sym_pipe,
    ACTIONS(574), 1,
      anon_sym_COLON,
    STATE(136), 1,
      sym_comment,
    ACTIONS(570), 7,
      ts_builtin_sym_end,
      anon_sym_DOT,
      anon_sym_DASH,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym__natural_number,
      anon_sym_BQUOTE,
    ACTIONS(572), 22,
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
      sym_keyword_mod,
      sym_keyword_func,
      sym_keyword_let,
      sym_keyword_from_text,
      anon_sym__,
      sym__identifier,
  [11167] = 18,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(21), 1,
      sym_pipe,
    ACTIONS(578), 1,
      sym_keyword_from,
    ACTIONS(580), 1,
      sym_keyword_filter,
    ACTIONS(582), 1,
      sym_keyword_derive,
    ACTIONS(584), 1,
      sym_keyword_group,
    ACTIONS(586), 1,
      sym_keyword_aggregate,
    ACTIONS(588), 1,
      sym_keyword_sort,
    ACTIONS(590), 1,
      sym_keyword_take,
    ACTIONS(592), 1,
      sym_keyword_join,
    ACTIONS(594), 1,
      sym_keyword_select,
    ACTIONS(598), 1,
      sym_keyword_loop,
    STATE(137), 1,
      sym_comment,
    STATE(177), 1,
      aux_sym_transforms_repeat1,
    STATE(354), 1,
      sym_transforms,
    ACTIONS(596), 3,
      sym_keyword_append,
      sym_keyword_remove,
      sym_keyword_intersect,
    ACTIONS(576), 5,
      ts_builtin_sym_end,
      sym_keyword_mod,
      sym_keyword_func,
      sym_keyword_let,
      sym_keyword_from_text,
    STATE(249), 10,
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
  [11237] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(21), 1,
      sym_pipe,
    STATE(138), 1,
      sym_comment,
    ACTIONS(164), 8,
      ts_builtin_sym_end,
      anon_sym_COLON,
      anon_sym_DOT,
      anon_sym_DASH,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym__natural_number,
      anon_sym_BQUOTE,
    ACTIONS(162), 22,
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
      sym_keyword_mod,
      sym_keyword_func,
      sym_keyword_let,
      sym_keyword_from_text,
      anon_sym__,
      sym__identifier,
  [11281] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(21), 1,
      sym_pipe,
    STATE(139), 1,
      sym_comment,
    ACTIONS(168), 8,
      ts_builtin_sym_end,
      anon_sym_COLON,
      anon_sym_DOT,
      anon_sym_DASH,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym__natural_number,
      anon_sym_BQUOTE,
    ACTIONS(166), 22,
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
      sym_keyword_mod,
      sym_keyword_func,
      sym_keyword_let,
      sym_keyword_from_text,
      anon_sym__,
      sym__identifier,
  [11325] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(21), 1,
      sym_pipe,
    ACTIONS(600), 1,
      anon_sym_COLON,
    STATE(140), 1,
      sym_comment,
    ACTIONS(570), 7,
      anon_sym_RBRACE,
      anon_sym_DOT,
      anon_sym_DASH,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym__natural_number,
      anon_sym_BQUOTE,
    ACTIONS(572), 22,
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
      sym_keyword_mod,
      sym_keyword_func,
      sym_keyword_let,
      sym_keyword_from_text,
      anon_sym__,
      sym__identifier,
  [11371] = 7,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(21), 1,
      sym_pipe,
    ACTIONS(602), 1,
      sym__natural_number,
    ACTIONS(605), 1,
      anon_sym__,
    STATE(141), 2,
      aux_sym__friendly_number,
      sym_comment,
    ACTIONS(139), 6,
      ts_builtin_sym_end,
      anon_sym_DOT,
      anon_sym_DASH,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
    ACTIONS(141), 21,
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
      sym_keyword_mod,
      sym_keyword_func,
      sym_keyword_let,
      sym_keyword_from_text,
      sym__identifier,
  [11419] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(21), 1,
      sym_pipe,
    STATE(141), 1,
      aux_sym__friendly_number,
    STATE(142), 1,
      sym_comment,
    ACTIONS(146), 7,
      ts_builtin_sym_end,
      anon_sym_DOT,
      anon_sym_DASH,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym__natural_number,
      anon_sym_BQUOTE,
    ACTIONS(148), 22,
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
      sym_keyword_mod,
      sym_keyword_func,
      sym_keyword_let,
      sym_keyword_from_text,
      anon_sym__,
      sym__identifier,
  [11465] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(21), 1,
      sym_pipe,
    STATE(141), 1,
      aux_sym__friendly_number,
    STATE(143), 1,
      sym_comment,
    ACTIONS(154), 7,
      ts_builtin_sym_end,
      anon_sym_DOT,
      anon_sym_DASH,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym__natural_number,
      anon_sym_BQUOTE,
    ACTIONS(156), 22,
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
      sym_keyword_mod,
      sym_keyword_func,
      sym_keyword_let,
      sym_keyword_from_text,
      anon_sym__,
      sym__identifier,
  [11511] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(21), 1,
      sym_pipe,
    STATE(144), 1,
      sym_comment,
    ACTIONS(168), 8,
      anon_sym_COLON,
      anon_sym_RBRACE,
      anon_sym_DOT,
      anon_sym_DASH,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym__natural_number,
      anon_sym_BQUOTE,
    ACTIONS(166), 22,
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
      sym_keyword_mod,
      sym_keyword_func,
      sym_keyword_let,
      sym_keyword_from_text,
      anon_sym__,
      sym__identifier,
  [11555] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(21), 1,
      sym_pipe,
    ACTIONS(141), 1,
      sym_keyword_from,
    ACTIONS(608), 2,
      sym__natural_number,
      anon_sym__,
    STATE(145), 2,
      aux_sym__friendly_number,
      sym_comment,
    ACTIONS(139), 26,
      ts_builtin_sym_end,
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
      sym_keyword_mod,
      sym_keyword_func,
      sym_keyword_let,
      sym_keyword_from_text,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_DOT_DOT,
  [11601] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(21), 1,
      sym_pipe,
    STATE(146), 1,
      sym_comment,
    ACTIONS(164), 8,
      anon_sym_COLON,
      anon_sym_RBRACE,
      anon_sym_DOT,
      anon_sym_DASH,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym__natural_number,
      anon_sym_BQUOTE,
    ACTIONS(162), 22,
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
      sym_keyword_mod,
      sym_keyword_func,
      sym_keyword_let,
      sym_keyword_from_text,
      anon_sym__,
      sym__identifier,
  [11645] = 18,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(21), 1,
      sym_pipe,
    ACTIONS(580), 1,
      sym_keyword_filter,
    ACTIONS(582), 1,
      sym_keyword_derive,
    ACTIONS(584), 1,
      sym_keyword_group,
    ACTIONS(586), 1,
      sym_keyword_aggregate,
    ACTIONS(588), 1,
      sym_keyword_sort,
    ACTIONS(590), 1,
      sym_keyword_take,
    ACTIONS(592), 1,
      sym_keyword_join,
    ACTIONS(594), 1,
      sym_keyword_select,
    ACTIONS(598), 1,
      sym_keyword_loop,
    ACTIONS(613), 1,
      sym_keyword_from,
    STATE(147), 1,
      sym_comment,
    STATE(177), 1,
      aux_sym_transforms_repeat1,
    STATE(345), 1,
      sym_transforms,
    ACTIONS(596), 3,
      sym_keyword_append,
      sym_keyword_remove,
      sym_keyword_intersect,
    ACTIONS(611), 5,
      ts_builtin_sym_end,
      sym_keyword_mod,
      sym_keyword_func,
      sym_keyword_let,
      sym_keyword_from_text,
    STATE(249), 10,
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
  [11715] = 18,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(21), 1,
      sym_pipe,
    ACTIONS(580), 1,
      sym_keyword_filter,
    ACTIONS(584), 1,
      sym_keyword_group,
    ACTIONS(586), 1,
      sym_keyword_aggregate,
    ACTIONS(588), 1,
      sym_keyword_sort,
    ACTIONS(590), 1,
      sym_keyword_take,
    ACTIONS(592), 1,
      sym_keyword_join,
    ACTIONS(598), 1,
      sym_keyword_loop,
    ACTIONS(613), 1,
      sym_keyword_from,
    ACTIONS(615), 1,
      sym_keyword_derive,
    ACTIONS(617), 1,
      sym_keyword_select,
    STATE(148), 1,
      sym_comment,
    STATE(157), 1,
      aux_sym_transforms_repeat1,
    STATE(345), 1,
      sym_transforms,
    ACTIONS(596), 3,
      sym_keyword_append,
      sym_keyword_remove,
      sym_keyword_intersect,
    ACTIONS(611), 5,
      sym_keyword_mod,
      sym_keyword_func,
      sym_keyword_let,
      sym_keyword_from_text,
      anon_sym_RBRACE,
    STATE(249), 10,
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
  [11785] = 7,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(21), 1,
      sym_pipe,
    ACTIONS(156), 1,
      sym_keyword_from,
    STATE(145), 1,
      aux_sym__friendly_number,
    STATE(149), 1,
      sym_comment,
    ACTIONS(562), 2,
      sym__natural_number,
      anon_sym__,
    ACTIONS(154), 26,
      ts_builtin_sym_end,
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
      sym_keyword_mod,
      sym_keyword_func,
      sym_keyword_let,
      sym_keyword_from_text,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_DOT_DOT,
  [11833] = 18,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(21), 1,
      sym_pipe,
    ACTIONS(578), 1,
      sym_keyword_from,
    ACTIONS(580), 1,
      sym_keyword_filter,
    ACTIONS(584), 1,
      sym_keyword_group,
    ACTIONS(586), 1,
      sym_keyword_aggregate,
    ACTIONS(588), 1,
      sym_keyword_sort,
    ACTIONS(590), 1,
      sym_keyword_take,
    ACTIONS(592), 1,
      sym_keyword_join,
    ACTIONS(598), 1,
      sym_keyword_loop,
    ACTIONS(615), 1,
      sym_keyword_derive,
    ACTIONS(617), 1,
      sym_keyword_select,
    STATE(150), 1,
      sym_comment,
    STATE(157), 1,
      aux_sym_transforms_repeat1,
    STATE(354), 1,
      sym_transforms,
    ACTIONS(596), 3,
      sym_keyword_append,
      sym_keyword_remove,
      sym_keyword_intersect,
    ACTIONS(576), 5,
      sym_keyword_mod,
      sym_keyword_func,
      sym_keyword_let,
      sym_keyword_from_text,
      anon_sym_RBRACE,
    STATE(249), 10,
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
  [11903] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(21), 1,
      sym_pipe,
    STATE(151), 1,
      sym_comment,
    ACTIONS(170), 7,
      ts_builtin_sym_end,
      anon_sym_DOT,
      anon_sym_DASH,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym__natural_number,
      anon_sym_BQUOTE,
    ACTIONS(172), 22,
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
      sym_keyword_mod,
      sym_keyword_func,
      sym_keyword_let,
      sym_keyword_from_text,
      anon_sym__,
      sym__identifier,
  [11946] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(21), 1,
      sym_pipe,
    STATE(152), 1,
      sym_comment,
    ACTIONS(621), 7,
      anon_sym_RBRACE,
      anon_sym_DOT,
      anon_sym_DASH,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym__natural_number,
      anon_sym_BQUOTE,
    ACTIONS(619), 22,
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
      sym_keyword_mod,
      sym_keyword_func,
      sym_keyword_let,
      sym_keyword_from_text,
      anon_sym__,
      sym__identifier,
  [11989] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(21), 1,
      sym_pipe,
    STATE(153), 1,
      sym_comment,
    ACTIONS(621), 7,
      ts_builtin_sym_end,
      anon_sym_DOT,
      anon_sym_DASH,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym__natural_number,
      anon_sym_BQUOTE,
    ACTIONS(619), 22,
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
      sym_keyword_mod,
      sym_keyword_func,
      sym_keyword_let,
      sym_keyword_from_text,
      anon_sym__,
      sym__identifier,
  [12032] = 16,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(21), 1,
      sym_pipe,
    ACTIONS(625), 1,
      sym_keyword_from,
    ACTIONS(627), 1,
      sym_keyword_filter,
    ACTIONS(630), 1,
      sym_keyword_derive,
    ACTIONS(633), 1,
      sym_keyword_group,
    ACTIONS(636), 1,
      sym_keyword_aggregate,
    ACTIONS(639), 1,
      sym_keyword_sort,
    ACTIONS(642), 1,
      sym_keyword_take,
    ACTIONS(645), 1,
      sym_keyword_join,
    ACTIONS(648), 1,
      sym_keyword_select,
    ACTIONS(654), 1,
      sym_keyword_loop,
    STATE(154), 2,
      sym_comment,
      aux_sym_transforms_repeat1,
    ACTIONS(651), 3,
      sym_keyword_append,
      sym_keyword_remove,
      sym_keyword_intersect,
    ACTIONS(623), 5,
      ts_builtin_sym_end,
      sym_keyword_mod,
      sym_keyword_func,
      sym_keyword_let,
      sym_keyword_from_text,
    STATE(249), 10,
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
  [12097] = 16,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(21), 1,
      sym_pipe,
    ACTIONS(625), 1,
      sym_keyword_from,
    ACTIONS(627), 1,
      sym_keyword_filter,
    ACTIONS(633), 1,
      sym_keyword_group,
    ACTIONS(636), 1,
      sym_keyword_aggregate,
    ACTIONS(639), 1,
      sym_keyword_sort,
    ACTIONS(642), 1,
      sym_keyword_take,
    ACTIONS(645), 1,
      sym_keyword_join,
    ACTIONS(654), 1,
      sym_keyword_loop,
    ACTIONS(657), 1,
      sym_keyword_derive,
    ACTIONS(660), 1,
      sym_keyword_select,
    STATE(155), 2,
      sym_comment,
      aux_sym_transforms_repeat1,
    ACTIONS(651), 3,
      sym_keyword_append,
      sym_keyword_remove,
      sym_keyword_intersect,
    ACTIONS(623), 5,
      sym_keyword_mod,
      sym_keyword_func,
      sym_keyword_let,
      sym_keyword_from_text,
      anon_sym_RBRACE,
    STATE(249), 10,
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
  [12162] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(21), 1,
      sym_pipe,
    ACTIONS(172), 1,
      sym_keyword_from,
    STATE(156), 1,
      sym_comment,
    ACTIONS(170), 28,
      ts_builtin_sym_end,
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
      sym_keyword_mod,
      sym_keyword_func,
      sym_keyword_let,
      sym_keyword_from_text,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      sym__natural_number,
      anon_sym__,
      anon_sym_DOT_DOT,
  [12205] = 17,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(21), 1,
      sym_pipe,
    ACTIONS(580), 1,
      sym_keyword_filter,
    ACTIONS(584), 1,
      sym_keyword_group,
    ACTIONS(586), 1,
      sym_keyword_aggregate,
    ACTIONS(588), 1,
      sym_keyword_sort,
    ACTIONS(590), 1,
      sym_keyword_take,
    ACTIONS(592), 1,
      sym_keyword_join,
    ACTIONS(598), 1,
      sym_keyword_loop,
    ACTIONS(615), 1,
      sym_keyword_derive,
    ACTIONS(617), 1,
      sym_keyword_select,
    ACTIONS(663), 1,
      sym_keyword_from,
    STATE(155), 1,
      aux_sym_transforms_repeat1,
    STATE(157), 1,
      sym_comment,
    ACTIONS(596), 3,
      sym_keyword_append,
      sym_keyword_remove,
      sym_keyword_intersect,
    ACTIONS(665), 5,
      sym_keyword_mod,
      sym_keyword_func,
      sym_keyword_let,
      sym_keyword_from_text,
      anon_sym_RBRACE,
    STATE(249), 10,
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
  [12272] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(21), 1,
      sym_pipe,
    STATE(158), 1,
      sym_comment,
    ACTIONS(407), 7,
      anon_sym_RBRACE,
      anon_sym_DOT,
      anon_sym_DASH,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym__natural_number,
      anon_sym_BQUOTE,
    ACTIONS(409), 22,
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
      sym_keyword_mod,
      sym_keyword_func,
      sym_keyword_let,
      sym_keyword_from_text,
      anon_sym__,
      sym__identifier,
  [12315] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(21), 1,
      sym_pipe,
    STATE(159), 1,
      sym_comment,
    ACTIONS(399), 7,
      anon_sym_RBRACE,
      anon_sym_DOT,
      anon_sym_DASH,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym__natural_number,
      anon_sym_BQUOTE,
    ACTIONS(401), 22,
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
      sym_keyword_mod,
      sym_keyword_func,
      sym_keyword_let,
      sym_keyword_from_text,
      anon_sym__,
      sym__identifier,
  [12358] = 15,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(469), 1,
      anon_sym_DASH,
    ACTIONS(471), 1,
      anon_sym_PLUS,
    ACTIONS(475), 1,
      anon_sym_STAR,
    ACTIONS(477), 1,
      anon_sym_SLASH,
    ACTIONS(479), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(483), 1,
      anon_sym_QMARK_QMARK,
    ACTIONS(485), 1,
      anon_sym_AMP_AMP,
    ACTIONS(515), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(667), 1,
      anon_sym_EQ,
    STATE(160), 1,
      sym_comment,
    ACTIONS(481), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(473), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(556), 14,
      sym_keyword_filter,
      sym_keyword_derive,
      sym_keyword_group,
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
  [12421] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(21), 1,
      sym_pipe,
    STATE(161), 1,
      sym_comment,
    ACTIONS(570), 7,
      ts_builtin_sym_end,
      anon_sym_DOT,
      anon_sym_DASH,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym__natural_number,
      anon_sym_BQUOTE,
    ACTIONS(572), 22,
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
      sym_keyword_mod,
      sym_keyword_func,
      sym_keyword_let,
      sym_keyword_from_text,
      anon_sym__,
      sym__identifier,
  [12464] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(21), 1,
      sym_pipe,
    STATE(162), 1,
      sym_comment,
    ACTIONS(669), 7,
      ts_builtin_sym_end,
      anon_sym_DOT,
      anon_sym_DASH,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym__natural_number,
      anon_sym_BQUOTE,
    ACTIONS(671), 22,
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
      sym_keyword_mod,
      sym_keyword_func,
      sym_keyword_let,
      sym_keyword_from_text,
      anon_sym__,
      sym__identifier,
  [12507] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(21), 1,
      sym_pipe,
    STATE(163), 1,
      sym_comment,
    ACTIONS(407), 7,
      anon_sym_RBRACE,
      anon_sym_DOT,
      anon_sym_DASH,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym__natural_number,
      anon_sym_BQUOTE,
    ACTIONS(409), 22,
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
      sym_keyword_mod,
      sym_keyword_func,
      sym_keyword_let,
      sym_keyword_from_text,
      anon_sym__,
      sym__identifier,
  [12550] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(21), 1,
      sym_pipe,
    STATE(164), 1,
      sym_comment,
    ACTIONS(570), 7,
      anon_sym_RBRACE,
      anon_sym_DOT,
      anon_sym_DASH,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym__natural_number,
      anon_sym_BQUOTE,
    ACTIONS(572), 22,
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
      sym_keyword_mod,
      sym_keyword_func,
      sym_keyword_let,
      sym_keyword_from_text,
      anon_sym__,
      sym__identifier,
  [12593] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(21), 1,
      sym_pipe,
    STATE(165), 1,
      sym_comment,
    ACTIONS(385), 7,
      anon_sym_RBRACE,
      anon_sym_DOT,
      anon_sym_DASH,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym__natural_number,
      anon_sym_BQUOTE,
    ACTIONS(387), 22,
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
      sym_keyword_mod,
      sym_keyword_func,
      sym_keyword_let,
      sym_keyword_from_text,
      anon_sym__,
      sym__identifier,
  [12636] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(21), 1,
      sym_pipe,
    STATE(166), 1,
      sym_comment,
    ACTIONS(407), 7,
      ts_builtin_sym_end,
      anon_sym_DOT,
      anon_sym_DASH,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym__natural_number,
      anon_sym_BQUOTE,
    ACTIONS(409), 22,
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
      sym_keyword_mod,
      sym_keyword_func,
      sym_keyword_let,
      sym_keyword_from_text,
      anon_sym__,
      sym__identifier,
  [12679] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(21), 1,
      sym_pipe,
    STATE(167), 1,
      sym_comment,
    ACTIONS(669), 7,
      anon_sym_RBRACE,
      anon_sym_DOT,
      anon_sym_DASH,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym__natural_number,
      anon_sym_BQUOTE,
    ACTIONS(671), 22,
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
      sym_keyword_mod,
      sym_keyword_func,
      sym_keyword_let,
      sym_keyword_from_text,
      anon_sym__,
      sym__identifier,
  [12722] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(21), 1,
      sym_pipe,
    STATE(168), 1,
      sym_comment,
    ACTIONS(399), 7,
      ts_builtin_sym_end,
      anon_sym_DOT,
      anon_sym_DASH,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym__natural_number,
      anon_sym_BQUOTE,
    ACTIONS(401), 22,
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
      sym_keyword_mod,
      sym_keyword_func,
      sym_keyword_let,
      sym_keyword_from_text,
      anon_sym__,
      sym__identifier,
  [12765] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(21), 1,
      sym_pipe,
    STATE(169), 1,
      sym_comment,
    ACTIONS(375), 7,
      ts_builtin_sym_end,
      anon_sym_DOT,
      anon_sym_DASH,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym__natural_number,
      anon_sym_BQUOTE,
    ACTIONS(377), 22,
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
      sym_keyword_mod,
      sym_keyword_func,
      sym_keyword_let,
      sym_keyword_from_text,
      anon_sym__,
      sym__identifier,
  [12808] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(21), 1,
      sym_pipe,
    STATE(170), 1,
      sym_comment,
    ACTIONS(407), 7,
      ts_builtin_sym_end,
      anon_sym_DOT,
      anon_sym_DASH,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym__natural_number,
      anon_sym_BQUOTE,
    ACTIONS(409), 22,
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
      sym_keyword_mod,
      sym_keyword_func,
      sym_keyword_let,
      sym_keyword_from_text,
      anon_sym__,
      sym__identifier,
  [12851] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(21), 1,
      sym_pipe,
    STATE(171), 1,
      sym_comment,
    ACTIONS(385), 7,
      ts_builtin_sym_end,
      anon_sym_DOT,
      anon_sym_DASH,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym__natural_number,
      anon_sym_BQUOTE,
    ACTIONS(387), 22,
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
      sym_keyword_mod,
      sym_keyword_func,
      sym_keyword_let,
      sym_keyword_from_text,
      anon_sym__,
      sym__identifier,
  [12894] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(21), 1,
      sym_pipe,
    STATE(172), 1,
      sym_comment,
    ACTIONS(507), 7,
      anon_sym_RBRACE,
      anon_sym_DOT,
      anon_sym_DASH,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym__natural_number,
      anon_sym_BQUOTE,
    ACTIONS(509), 22,
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
      sym_keyword_mod,
      sym_keyword_func,
      sym_keyword_let,
      sym_keyword_from_text,
      anon_sym__,
      sym__identifier,
  [12937] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(21), 1,
      sym_pipe,
    STATE(173), 1,
      sym_comment,
    ACTIONS(507), 7,
      ts_builtin_sym_end,
      anon_sym_DOT,
      anon_sym_DASH,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym__natural_number,
      anon_sym_BQUOTE,
    ACTIONS(509), 22,
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
      sym_keyword_mod,
      sym_keyword_func,
      sym_keyword_let,
      sym_keyword_from_text,
      anon_sym__,
      sym__identifier,
  [12980] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(21), 1,
      sym_pipe,
    STATE(174), 1,
      sym_comment,
    ACTIONS(503), 7,
      anon_sym_RBRACE,
      anon_sym_DOT,
      anon_sym_DASH,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym__natural_number,
      anon_sym_BQUOTE,
    ACTIONS(505), 22,
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
      sym_keyword_mod,
      sym_keyword_func,
      sym_keyword_let,
      sym_keyword_from_text,
      anon_sym__,
      sym__identifier,
  [13023] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(21), 1,
      sym_pipe,
    STATE(175), 1,
      sym_comment,
    ACTIONS(503), 7,
      ts_builtin_sym_end,
      anon_sym_DOT,
      anon_sym_DASH,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym__natural_number,
      anon_sym_BQUOTE,
    ACTIONS(505), 22,
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
      sym_keyword_mod,
      sym_keyword_func,
      sym_keyword_let,
      sym_keyword_from_text,
      anon_sym__,
      sym__identifier,
  [13066] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(21), 1,
      sym_pipe,
    STATE(176), 1,
      sym_comment,
    ACTIONS(170), 7,
      anon_sym_RBRACE,
      anon_sym_DOT,
      anon_sym_DASH,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym__natural_number,
      anon_sym_BQUOTE,
    ACTIONS(172), 22,
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
      sym_keyword_mod,
      sym_keyword_func,
      sym_keyword_let,
      sym_keyword_from_text,
      anon_sym__,
      sym__identifier,
  [13109] = 17,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(21), 1,
      sym_pipe,
    ACTIONS(580), 1,
      sym_keyword_filter,
    ACTIONS(582), 1,
      sym_keyword_derive,
    ACTIONS(584), 1,
      sym_keyword_group,
    ACTIONS(586), 1,
      sym_keyword_aggregate,
    ACTIONS(588), 1,
      sym_keyword_sort,
    ACTIONS(590), 1,
      sym_keyword_take,
    ACTIONS(592), 1,
      sym_keyword_join,
    ACTIONS(594), 1,
      sym_keyword_select,
    ACTIONS(598), 1,
      sym_keyword_loop,
    ACTIONS(663), 1,
      sym_keyword_from,
    STATE(154), 1,
      aux_sym_transforms_repeat1,
    STATE(177), 1,
      sym_comment,
    ACTIONS(596), 3,
      sym_keyword_append,
      sym_keyword_remove,
      sym_keyword_intersect,
    ACTIONS(665), 5,
      ts_builtin_sym_end,
      sym_keyword_mod,
      sym_keyword_func,
      sym_keyword_let,
      sym_keyword_from_text,
    STATE(249), 10,
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
  [13176] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(21), 1,
      sym_pipe,
    STATE(178), 1,
      sym_comment,
    ACTIONS(375), 7,
      anon_sym_RBRACE,
      anon_sym_DOT,
      anon_sym_DASH,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym__natural_number,
      anon_sym_BQUOTE,
    ACTIONS(377), 22,
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
      sym_keyword_mod,
      sym_keyword_func,
      sym_keyword_let,
      sym_keyword_from_text,
      anon_sym__,
      sym__identifier,
  [13219] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    STATE(179), 1,
      sym_comment,
    ACTIONS(162), 8,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
      anon_sym__,
      sym__identifier,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(164), 20,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
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
  [13261] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    STATE(180), 1,
      sym_comment,
    ACTIONS(166), 8,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
      anon_sym__,
      sym__identifier,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(168), 20,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
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
  [13303] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(21), 1,
      sym_pipe,
    ACTIONS(381), 1,
      sym_keyword_from,
    STATE(181), 1,
      sym_comment,
    ACTIONS(379), 26,
      ts_builtin_sym_end,
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
      sym_keyword_mod,
      sym_keyword_func,
      sym_keyword_let,
      sym_keyword_from_text,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_DOT_DOT,
  [13344] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(21), 1,
      sym_pipe,
    ACTIONS(311), 1,
      sym_keyword_from,
    STATE(182), 1,
      sym_comment,
    ACTIONS(309), 26,
      ts_builtin_sym_end,
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
      sym_keyword_mod,
      sym_keyword_func,
      sym_keyword_let,
      sym_keyword_from_text,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_DOT_DOT,
  [13385] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(21), 1,
      sym_pipe,
    ACTIONS(166), 1,
      sym_keyword_from,
    STATE(183), 1,
      sym_comment,
    ACTIONS(168), 25,
      ts_builtin_sym_end,
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
      sym_keyword_mod,
      sym_keyword_func,
      sym_keyword_let,
      sym_keyword_from_text,
      anon_sym_EQ,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_DOT,
  [13425] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(21), 1,
      sym_pipe,
    STATE(184), 1,
      sym_comment,
    STATE(190), 1,
      aux_sym__friendly_number,
    ACTIONS(146), 8,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_DASH,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym__natural_number,
      anon_sym_BQUOTE,
    ACTIONS(148), 17,
      sym_keyword_filter,
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
  [13467] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(21), 1,
      sym_pipe,
    ACTIONS(673), 1,
      anon_sym_COLON,
    STATE(185), 1,
      sym_comment,
    ACTIONS(570), 8,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_DASH,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym__natural_number,
      anon_sym_BQUOTE,
    ACTIONS(572), 17,
      sym_keyword_filter,
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
  [13509] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(21), 1,
      sym_pipe,
    ACTIONS(162), 1,
      sym_keyword_from,
    STATE(186), 1,
      sym_comment,
    ACTIONS(164), 25,
      ts_builtin_sym_end,
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
      sym_keyword_mod,
      sym_keyword_func,
      sym_keyword_let,
      sym_keyword_from_text,
      anon_sym_EQ,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_DOT,
  [13549] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(21), 1,
      sym_pipe,
    ACTIONS(677), 1,
      sym_keyword_from,
    STATE(187), 1,
      sym_comment,
    ACTIONS(675), 25,
      ts_builtin_sym_end,
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
      sym_keyword_mod,
      sym_keyword_func,
      sym_keyword_let,
      sym_keyword_from_text,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
  [13589] = 17,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(21), 1,
      sym_pipe,
    ACTIONS(580), 1,
      sym_keyword_filter,
    ACTIONS(584), 1,
      sym_keyword_group,
    ACTIONS(586), 1,
      sym_keyword_aggregate,
    ACTIONS(588), 1,
      sym_keyword_sort,
    ACTIONS(590), 1,
      sym_keyword_take,
    ACTIONS(592), 1,
      sym_keyword_join,
    ACTIONS(598), 1,
      sym_keyword_loop,
    ACTIONS(679), 1,
      sym_keyword_derive,
    ACTIONS(681), 1,
      sym_keyword_select,
    STATE(188), 1,
      sym_comment,
    STATE(198), 1,
      aux_sym_transforms_repeat1,
    STATE(345), 1,
      sym_transforms,
    ACTIONS(611), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
    ACTIONS(596), 3,
      sym_keyword_append,
      sym_keyword_remove,
      sym_keyword_intersect,
    STATE(249), 10,
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
  [13653] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(21), 1,
      sym_pipe,
    STATE(189), 1,
      sym_comment,
    STATE(190), 1,
      aux_sym__friendly_number,
    ACTIONS(154), 8,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_DASH,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym__natural_number,
      anon_sym_BQUOTE,
    ACTIONS(156), 17,
      sym_keyword_filter,
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
  [13695] = 7,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(21), 1,
      sym_pipe,
    ACTIONS(683), 1,
      sym__natural_number,
    ACTIONS(686), 1,
      anon_sym__,
    STATE(190), 2,
      aux_sym__friendly_number,
      sym_comment,
    ACTIONS(139), 7,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_DASH,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
    ACTIONS(141), 16,
      sym_keyword_filter,
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
  [13739] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(21), 1,
      sym_pipe,
    STATE(191), 1,
      sym_comment,
    ACTIONS(168), 9,
      anon_sym_COLON,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_DASH,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym__natural_number,
      anon_sym_BQUOTE,
    ACTIONS(166), 17,
      sym_keyword_filter,
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
  [13779] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(21), 1,
      sym_pipe,
    STATE(192), 1,
      sym_comment,
    ACTIONS(164), 9,
      anon_sym_COLON,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_DASH,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym__natural_number,
      anon_sym_BQUOTE,
    ACTIONS(162), 17,
      sym_keyword_filter,
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
  [13819] = 21,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(21), 1,
      sym_pipe,
    ACTIONS(443), 1,
      anon_sym_DOT,
    ACTIONS(445), 1,
      anon_sym_DQUOTE,
    ACTIONS(447), 1,
      anon_sym_SQUOTE,
    ACTIONS(449), 1,
      sym__natural_number,
    ACTIONS(451), 1,
      anon_sym__,
    ACTIONS(453), 1,
      anon_sym_BQUOTE,
    ACTIONS(455), 1,
      sym__identifier,
    ACTIONS(689), 1,
      anon_sym_DASH,
    STATE(193), 1,
      sym_comment,
    STATE(194), 1,
      aux_sym_function_call_repeat1,
    STATE(282), 1,
      sym_identifier,
    STATE(284), 1,
      aux_sym__friendly_number,
    STATE(302), 1,
      sym_literal,
    STATE(307), 1,
      sym_integer,
    STATE(308), 1,
      sym__call_parameter,
    STATE(303), 2,
      sym_literal_string,
      sym_decimal_number,
    STATE(305), 2,
      sym__double_quote_string,
      sym__single_quote_string,
    ACTIONS(441), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    ACTIONS(391), 4,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
  [13890] = 20,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(21), 1,
      sym_pipe,
    ACTIONS(694), 1,
      anon_sym_DOT,
    ACTIONS(697), 1,
      anon_sym_DASH,
    ACTIONS(700), 1,
      anon_sym_DQUOTE,
    ACTIONS(703), 1,
      anon_sym_SQUOTE,
    ACTIONS(706), 1,
      sym__natural_number,
    ACTIONS(709), 1,
      anon_sym__,
    ACTIONS(712), 1,
      anon_sym_BQUOTE,
    ACTIONS(715), 1,
      sym__identifier,
    STATE(282), 1,
      sym_identifier,
    STATE(284), 1,
      aux_sym__friendly_number,
    STATE(302), 1,
      sym_literal,
    STATE(307), 1,
      sym_integer,
    STATE(308), 1,
      sym__call_parameter,
    STATE(194), 2,
      sym_comment,
      aux_sym_function_call_repeat1,
    STATE(303), 2,
      sym_literal_string,
      sym_decimal_number,
    STATE(305), 2,
      sym__double_quote_string,
      sym__single_quote_string,
    ACTIONS(691), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    ACTIONS(318), 4,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
  [13959] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(21), 1,
      sym_pipe,
    STATE(195), 1,
      sym_comment,
    ACTIONS(407), 8,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_DASH,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym__natural_number,
      anon_sym_BQUOTE,
    ACTIONS(409), 17,
      sym_keyword_filter,
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
  [13998] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(21), 1,
      sym_pipe,
    STATE(196), 1,
      sym_comment,
    ACTIONS(669), 8,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_DASH,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym__natural_number,
      anon_sym_BQUOTE,
    ACTIONS(671), 17,
      sym_keyword_filter,
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
  [14037] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(21), 1,
      sym_pipe,
    STATE(197), 1,
      sym_comment,
    ACTIONS(570), 8,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_DASH,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym__natural_number,
      anon_sym_BQUOTE,
    ACTIONS(572), 17,
      sym_keyword_filter,
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
  [14076] = 16,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(21), 1,
      sym_pipe,
    ACTIONS(580), 1,
      sym_keyword_filter,
    ACTIONS(584), 1,
      sym_keyword_group,
    ACTIONS(586), 1,
      sym_keyword_aggregate,
    ACTIONS(588), 1,
      sym_keyword_sort,
    ACTIONS(590), 1,
      sym_keyword_take,
    ACTIONS(592), 1,
      sym_keyword_join,
    ACTIONS(598), 1,
      sym_keyword_loop,
    ACTIONS(679), 1,
      sym_keyword_derive,
    ACTIONS(681), 1,
      sym_keyword_select,
    STATE(198), 1,
      sym_comment,
    STATE(201), 1,
      aux_sym_transforms_repeat1,
    ACTIONS(665), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
    ACTIONS(596), 3,
      sym_keyword_append,
      sym_keyword_remove,
      sym_keyword_intersect,
    STATE(249), 10,
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
  [14137] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(21), 1,
      sym_pipe,
    STATE(199), 1,
      sym_comment,
    ACTIONS(399), 8,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_DASH,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym__natural_number,
      anon_sym_BQUOTE,
    ACTIONS(401), 17,
      sym_keyword_filter,
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
  [14176] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(21), 1,
      sym_pipe,
    STATE(200), 1,
      sym_comment,
    ACTIONS(170), 8,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_DASH,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym__natural_number,
      anon_sym_BQUOTE,
    ACTIONS(172), 17,
      sym_keyword_filter,
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
  [14215] = 15,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(21), 1,
      sym_pipe,
    ACTIONS(627), 1,
      sym_keyword_filter,
    ACTIONS(633), 1,
      sym_keyword_group,
    ACTIONS(636), 1,
      sym_keyword_aggregate,
    ACTIONS(639), 1,
      sym_keyword_sort,
    ACTIONS(642), 1,
      sym_keyword_take,
    ACTIONS(645), 1,
      sym_keyword_join,
    ACTIONS(654), 1,
      sym_keyword_loop,
    ACTIONS(718), 1,
      sym_keyword_derive,
    ACTIONS(721), 1,
      sym_keyword_select,
    ACTIONS(623), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
    STATE(201), 2,
      sym_comment,
      aux_sym_transforms_repeat1,
    ACTIONS(651), 3,
      sym_keyword_append,
      sym_keyword_remove,
      sym_keyword_intersect,
    STATE(249), 10,
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
  [14274] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(21), 1,
      sym_pipe,
    STATE(202), 1,
      sym_comment,
    ACTIONS(503), 8,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_DASH,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym__natural_number,
      anon_sym_BQUOTE,
    ACTIONS(505), 17,
      sym_keyword_filter,
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
  [14313] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(21), 1,
      sym_pipe,
    STATE(203), 1,
      sym_comment,
    ACTIONS(375), 8,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_DASH,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym__natural_number,
      anon_sym_BQUOTE,
    ACTIONS(377), 17,
      sym_keyword_filter,
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
  [14352] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(21), 1,
      sym_pipe,
    STATE(204), 1,
      sym_comment,
    ACTIONS(507), 8,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_DASH,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym__natural_number,
      anon_sym_BQUOTE,
    ACTIONS(509), 17,
      sym_keyword_filter,
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
  [14391] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(21), 1,
      sym_pipe,
    STATE(205), 1,
      sym_comment,
    ACTIONS(407), 8,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_DASH,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym__natural_number,
      anon_sym_BQUOTE,
    ACTIONS(409), 17,
      sym_keyword_filter,
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
  [14430] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(21), 1,
      sym_pipe,
    STATE(206), 1,
      sym_comment,
    ACTIONS(385), 8,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_DASH,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym__natural_number,
      anon_sym_BQUOTE,
    ACTIONS(387), 17,
      sym_keyword_filter,
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
  [14469] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(21), 1,
      sym_pipe,
    STATE(207), 1,
      sym_comment,
    ACTIONS(621), 8,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_DASH,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym__natural_number,
      anon_sym_BQUOTE,
    ACTIONS(619), 17,
      sym_keyword_filter,
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
  [14508] = 16,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(21), 1,
      sym_pipe,
    ACTIONS(580), 1,
      sym_keyword_filter,
    ACTIONS(584), 1,
      sym_keyword_group,
    ACTIONS(586), 1,
      sym_keyword_aggregate,
    ACTIONS(588), 1,
      sym_keyword_sort,
    ACTIONS(590), 1,
      sym_keyword_take,
    ACTIONS(592), 1,
      sym_keyword_join,
    ACTIONS(598), 1,
      sym_keyword_loop,
    ACTIONS(679), 1,
      sym_keyword_derive,
    ACTIONS(681), 1,
      sym_keyword_select,
    STATE(198), 1,
      aux_sym_transforms_repeat1,
    STATE(208), 1,
      sym_comment,
    STATE(486), 1,
      sym_transforms,
    ACTIONS(596), 3,
      sym_keyword_append,
      sym_keyword_remove,
      sym_keyword_intersect,
    STATE(249), 10,
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
  [14568] = 7,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(21), 1,
      sym_pipe,
    ACTIONS(726), 1,
      sym_keyword_from,
    ACTIONS(728), 1,
      anon_sym_LPAREN,
    STATE(209), 1,
      sym_comment,
    STATE(257), 1,
      sym_conditions,
    ACTIONS(724), 20,
      ts_builtin_sym_end,
      sym_keyword_filter,
      sym_keyword_derive,
      sym_keyword_group,
      sym_keyword_aggregate,
      sym_keyword_sort,
      sym_keyword_take,
      sym_keyword_join,
      sym_keyword_select,
      sym_keyword_append,
      sym_keyword_remove,
      sym_keyword_intersect,
      sym_keyword_loop,
      sym_keyword_mod,
      sym_keyword_func,
      sym_keyword_let,
      sym_keyword_from_text,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
  [14609] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(21), 1,
      sym_pipe,
    ACTIONS(732), 1,
      sym_keyword_from,
    ACTIONS(734), 1,
      anon_sym_DOT_DOT,
    STATE(210), 1,
      sym_comment,
    ACTIONS(730), 21,
      ts_builtin_sym_end,
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
      sym_keyword_mod,
      sym_keyword_func,
      sym_keyword_let,
      sym_keyword_from_text,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
  [14648] = 7,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(21), 1,
      sym_pipe,
    ACTIONS(728), 1,
      anon_sym_LPAREN,
    ACTIONS(738), 1,
      sym_keyword_from,
    STATE(211), 1,
      sym_comment,
    STATE(254), 1,
      sym_conditions,
    ACTIONS(736), 20,
      ts_builtin_sym_end,
      sym_keyword_filter,
      sym_keyword_derive,
      sym_keyword_group,
      sym_keyword_aggregate,
      sym_keyword_sort,
      sym_keyword_take,
      sym_keyword_join,
      sym_keyword_select,
      sym_keyword_append,
      sym_keyword_remove,
      sym_keyword_intersect,
      sym_keyword_loop,
      sym_keyword_mod,
      sym_keyword_func,
      sym_keyword_let,
      sym_keyword_from_text,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
  [14689] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(21), 1,
      sym_pipe,
    ACTIONS(742), 1,
      sym_keyword_from,
    ACTIONS(744), 1,
      anon_sym_EQ,
    STATE(212), 1,
      sym_comment,
    ACTIONS(740), 21,
      ts_builtin_sym_end,
      sym_keyword_filter,
      sym_keyword_derive,
      sym_keyword_group,
      sym_keyword_aggregate,
      sym_keyword_sort,
      sym_keyword_take,
      sym_keyword_join,
      sym_keyword_select,
      sym_keyword_append,
      sym_keyword_remove,
      sym_keyword_intersect,
      sym_keyword_loop,
      sym_keyword_mod,
      sym_keyword_func,
      sym_keyword_let,
      sym_keyword_from_text,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
  [14728] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(21), 1,
      sym_pipe,
    ACTIONS(748), 1,
      sym_keyword_from,
    STATE(213), 1,
      sym_comment,
    ACTIONS(746), 21,
      ts_builtin_sym_end,
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
      sym_keyword_mod,
      sym_keyword_func,
      sym_keyword_let,
      sym_keyword_from_text,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
  [14764] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(21), 1,
      sym_pipe,
    ACTIONS(752), 1,
      sym_keyword_from,
    STATE(214), 1,
      sym_comment,
    ACTIONS(750), 21,
      ts_builtin_sym_end,
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
      sym_keyword_mod,
      sym_keyword_func,
      sym_keyword_let,
      sym_keyword_from_text,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
  [14800] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(21), 1,
      sym_pipe,
    ACTIONS(756), 1,
      sym_keyword_from,
    STATE(215), 1,
      sym_comment,
    ACTIONS(754), 21,
      ts_builtin_sym_end,
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
      sym_keyword_mod,
      sym_keyword_func,
      sym_keyword_let,
      sym_keyword_from_text,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
  [14836] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(21), 1,
      sym_pipe,
    ACTIONS(760), 1,
      sym_keyword_from,
    STATE(216), 1,
      sym_comment,
    ACTIONS(758), 21,
      ts_builtin_sym_end,
      sym_keyword_filter,
      sym_keyword_derive,
      sym_keyword_group,
      sym_keyword_aggregate,
      sym_keyword_sort,
      sym_keyword_take,
      sym_keyword_join,
      sym_keyword_select,
      sym_keyword_append,
      sym_keyword_remove,
      sym_keyword_intersect,
      sym_keyword_loop,
      sym_keyword_mod,
      sym_keyword_func,
      sym_keyword_let,
      sym_keyword_from_text,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
  [14872] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(21), 1,
      sym_pipe,
    ACTIONS(764), 1,
      sym_keyword_from,
    STATE(217), 1,
      sym_comment,
    ACTIONS(762), 21,
      ts_builtin_sym_end,
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
      sym_keyword_mod,
      sym_keyword_func,
      sym_keyword_let,
      sym_keyword_from_text,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
  [14908] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(21), 1,
      sym_pipe,
    ACTIONS(554), 1,
      sym_keyword_from,
    STATE(218), 1,
      sym_comment,
    ACTIONS(556), 21,
      ts_builtin_sym_end,
      sym_keyword_filter,
      sym_keyword_derive,
      sym_keyword_group,
      sym_keyword_aggregate,
      sym_keyword_sort,
      sym_keyword_take,
      sym_keyword_join,
      sym_keyword_select,
      sym_keyword_append,
      sym_keyword_remove,
      sym_keyword_intersect,
      sym_keyword_loop,
      sym_keyword_mod,
      sym_keyword_func,
      sym_keyword_let,
      sym_keyword_from_text,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
  [14944] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(21), 1,
      sym_pipe,
    ACTIONS(732), 1,
      sym_keyword_from,
    STATE(219), 1,
      sym_comment,
    ACTIONS(730), 21,
      ts_builtin_sym_end,
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
      sym_keyword_mod,
      sym_keyword_func,
      sym_keyword_let,
      sym_keyword_from_text,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
  [14980] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(21), 1,
      sym_pipe,
    ACTIONS(768), 1,
      sym_keyword_from,
    STATE(220), 1,
      sym_comment,
    ACTIONS(766), 21,
      ts_builtin_sym_end,
      sym_keyword_filter,
      sym_keyword_derive,
      sym_keyword_group,
      sym_keyword_aggregate,
      sym_keyword_sort,
      sym_keyword_take,
      sym_keyword_join,
      sym_keyword_select,
      sym_keyword_append,
      sym_keyword_remove,
      sym_keyword_intersect,
      sym_keyword_loop,
      sym_keyword_mod,
      sym_keyword_func,
      sym_keyword_let,
      sym_keyword_from_text,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
  [15016] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(21), 1,
      sym_pipe,
    ACTIONS(772), 1,
      sym_keyword_from,
    STATE(221), 1,
      sym_comment,
    ACTIONS(770), 21,
      ts_builtin_sym_end,
      sym_keyword_filter,
      sym_keyword_derive,
      sym_keyword_group,
      sym_keyword_aggregate,
      sym_keyword_sort,
      sym_keyword_take,
      sym_keyword_join,
      sym_keyword_select,
      sym_keyword_append,
      sym_keyword_remove,
      sym_keyword_intersect,
      sym_keyword_loop,
      sym_keyword_mod,
      sym_keyword_func,
      sym_keyword_let,
      sym_keyword_from_text,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
  [15052] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(21), 1,
      sym_pipe,
    ACTIONS(776), 1,
      sym_keyword_from,
    STATE(222), 1,
      sym_comment,
    ACTIONS(774), 21,
      ts_builtin_sym_end,
      sym_keyword_filter,
      sym_keyword_derive,
      sym_keyword_group,
      sym_keyword_aggregate,
      sym_keyword_sort,
      sym_keyword_take,
      sym_keyword_join,
      sym_keyword_select,
      sym_keyword_append,
      sym_keyword_remove,
      sym_keyword_intersect,
      sym_keyword_loop,
      sym_keyword_mod,
      sym_keyword_func,
      sym_keyword_let,
      sym_keyword_from_text,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
  [15088] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(21), 1,
      sym_pipe,
    ACTIONS(742), 1,
      sym_keyword_from,
    STATE(223), 1,
      sym_comment,
    ACTIONS(740), 21,
      ts_builtin_sym_end,
      sym_keyword_filter,
      sym_keyword_derive,
      sym_keyword_group,
      sym_keyword_aggregate,
      sym_keyword_sort,
      sym_keyword_take,
      sym_keyword_join,
      sym_keyword_select,
      sym_keyword_append,
      sym_keyword_remove,
      sym_keyword_intersect,
      sym_keyword_loop,
      sym_keyword_mod,
      sym_keyword_func,
      sym_keyword_let,
      sym_keyword_from_text,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
  [15124] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(21), 1,
      sym_pipe,
    ACTIONS(780), 1,
      sym_keyword_from,
    STATE(224), 1,
      sym_comment,
    ACTIONS(778), 21,
      ts_builtin_sym_end,
      sym_keyword_filter,
      sym_keyword_derive,
      sym_keyword_group,
      sym_keyword_aggregate,
      sym_keyword_sort,
      sym_keyword_take,
      sym_keyword_join,
      sym_keyword_select,
      sym_keyword_append,
      sym_keyword_remove,
      sym_keyword_intersect,
      sym_keyword_loop,
      sym_keyword_mod,
      sym_keyword_func,
      sym_keyword_let,
      sym_keyword_from_text,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
  [15160] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(21), 1,
      sym_pipe,
    ACTIONS(784), 1,
      sym_keyword_from,
    STATE(225), 1,
      sym_comment,
    ACTIONS(782), 21,
      ts_builtin_sym_end,
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
      sym_keyword_mod,
      sym_keyword_func,
      sym_keyword_let,
      sym_keyword_from_text,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
  [15196] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(21), 1,
      sym_pipe,
    ACTIONS(788), 1,
      sym_keyword_from,
    STATE(226), 1,
      sym_comment,
    ACTIONS(786), 21,
      ts_builtin_sym_end,
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
      sym_keyword_mod,
      sym_keyword_func,
      sym_keyword_let,
      sym_keyword_from_text,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
  [15232] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(21), 1,
      sym_pipe,
    ACTIONS(792), 1,
      sym_keyword_from,
    STATE(227), 1,
      sym_comment,
    ACTIONS(790), 21,
      ts_builtin_sym_end,
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
      sym_keyword_mod,
      sym_keyword_func,
      sym_keyword_let,
      sym_keyword_from_text,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
  [15268] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(21), 1,
      sym_pipe,
    ACTIONS(796), 1,
      sym_keyword_from,
    STATE(228), 1,
      sym_comment,
    ACTIONS(794), 21,
      ts_builtin_sym_end,
      sym_keyword_filter,
      sym_keyword_derive,
      sym_keyword_group,
      sym_keyword_aggregate,
      sym_keyword_sort,
      sym_keyword_take,
      sym_keyword_join,
      sym_keyword_select,
      sym_keyword_append,
      sym_keyword_remove,
      sym_keyword_intersect,
      sym_keyword_loop,
      sym_keyword_mod,
      sym_keyword_func,
      sym_keyword_let,
      sym_keyword_from_text,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
  [15304] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(21), 1,
      sym_pipe,
    ACTIONS(800), 1,
      sym_keyword_from,
    STATE(229), 1,
      sym_comment,
    ACTIONS(798), 21,
      ts_builtin_sym_end,
      sym_keyword_filter,
      sym_keyword_derive,
      sym_keyword_group,
      sym_keyword_aggregate,
      sym_keyword_sort,
      sym_keyword_take,
      sym_keyword_join,
      sym_keyword_select,
      sym_keyword_append,
      sym_keyword_remove,
      sym_keyword_intersect,
      sym_keyword_loop,
      sym_keyword_mod,
      sym_keyword_func,
      sym_keyword_let,
      sym_keyword_from_text,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
  [15340] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(21), 1,
      sym_pipe,
    ACTIONS(804), 1,
      sym_keyword_from,
    STATE(230), 1,
      sym_comment,
    ACTIONS(802), 21,
      ts_builtin_sym_end,
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
      sym_keyword_mod,
      sym_keyword_func,
      sym_keyword_let,
      sym_keyword_from_text,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
  [15376] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(21), 1,
      sym_pipe,
    ACTIONS(808), 1,
      sym_keyword_from,
    STATE(231), 1,
      sym_comment,
    ACTIONS(806), 21,
      ts_builtin_sym_end,
      sym_keyword_filter,
      sym_keyword_derive,
      sym_keyword_group,
      sym_keyword_aggregate,
      sym_keyword_sort,
      sym_keyword_take,
      sym_keyword_join,
      sym_keyword_select,
      sym_keyword_append,
      sym_keyword_remove,
      sym_keyword_intersect,
      sym_keyword_loop,
      sym_keyword_mod,
      sym_keyword_func,
      sym_keyword_let,
      sym_keyword_from_text,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
  [15412] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(21), 1,
      sym_pipe,
    ACTIONS(812), 1,
      sym_keyword_from,
    STATE(232), 1,
      sym_comment,
    ACTIONS(810), 21,
      ts_builtin_sym_end,
      sym_keyword_filter,
      sym_keyword_derive,
      sym_keyword_group,
      sym_keyword_aggregate,
      sym_keyword_sort,
      sym_keyword_take,
      sym_keyword_join,
      sym_keyword_select,
      sym_keyword_append,
      sym_keyword_remove,
      sym_keyword_intersect,
      sym_keyword_loop,
      sym_keyword_mod,
      sym_keyword_func,
      sym_keyword_let,
      sym_keyword_from_text,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
  [15448] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(21), 1,
      sym_pipe,
    ACTIONS(816), 1,
      sym_keyword_from,
    STATE(233), 1,
      sym_comment,
    ACTIONS(814), 21,
      ts_builtin_sym_end,
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
      sym_keyword_mod,
      sym_keyword_func,
      sym_keyword_let,
      sym_keyword_from_text,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
  [15484] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(21), 1,
      sym_pipe,
    ACTIONS(820), 1,
      sym_keyword_from,
    STATE(234), 1,
      sym_comment,
    ACTIONS(818), 21,
      ts_builtin_sym_end,
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
      sym_keyword_mod,
      sym_keyword_func,
      sym_keyword_let,
      sym_keyword_from_text,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
  [15520] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(21), 1,
      sym_pipe,
    ACTIONS(824), 1,
      sym_keyword_from,
    STATE(235), 1,
      sym_comment,
    ACTIONS(822), 21,
      ts_builtin_sym_end,
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
      sym_keyword_mod,
      sym_keyword_func,
      sym_keyword_let,
      sym_keyword_from_text,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
  [15556] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(21), 1,
      sym_pipe,
    ACTIONS(828), 1,
      sym_keyword_from,
    STATE(236), 1,
      sym_comment,
    ACTIONS(826), 21,
      ts_builtin_sym_end,
      sym_keyword_filter,
      sym_keyword_derive,
      sym_keyword_group,
      sym_keyword_aggregate,
      sym_keyword_sort,
      sym_keyword_take,
      sym_keyword_join,
      sym_keyword_select,
      sym_keyword_append,
      sym_keyword_remove,
      sym_keyword_intersect,
      sym_keyword_loop,
      sym_keyword_mod,
      sym_keyword_func,
      sym_keyword_let,
      sym_keyword_from_text,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
  [15592] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(21), 1,
      sym_pipe,
    ACTIONS(832), 1,
      sym_keyword_from,
    STATE(237), 1,
      sym_comment,
    ACTIONS(830), 20,
      ts_builtin_sym_end,
      sym_keyword_filter,
      sym_keyword_derive,
      sym_keyword_group,
      sym_keyword_aggregate,
      sym_keyword_sort,
      sym_keyword_take,
      sym_keyword_join,
      sym_keyword_select,
      sym_keyword_append,
      sym_keyword_remove,
      sym_keyword_intersect,
      sym_keyword_loop,
      sym_keyword_mod,
      sym_keyword_func,
      sym_keyword_let,
      sym_keyword_from_text,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
  [15627] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(21), 1,
      sym_pipe,
    ACTIONS(836), 1,
      sym_keyword_from,
    STATE(238), 1,
      sym_comment,
    ACTIONS(834), 20,
      ts_builtin_sym_end,
      sym_keyword_filter,
      sym_keyword_derive,
      sym_keyword_group,
      sym_keyword_aggregate,
      sym_keyword_sort,
      sym_keyword_take,
      sym_keyword_join,
      sym_keyword_select,
      sym_keyword_append,
      sym_keyword_remove,
      sym_keyword_intersect,
      sym_keyword_loop,
      sym_keyword_mod,
      sym_keyword_func,
      sym_keyword_let,
      sym_keyword_from_text,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
  [15662] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(21), 1,
      sym_pipe,
    ACTIONS(840), 1,
      sym_keyword_from,
    STATE(239), 1,
      sym_comment,
    ACTIONS(838), 20,
      ts_builtin_sym_end,
      sym_keyword_filter,
      sym_keyword_derive,
      sym_keyword_group,
      sym_keyword_aggregate,
      sym_keyword_sort,
      sym_keyword_take,
      sym_keyword_join,
      sym_keyword_select,
      sym_keyword_append,
      sym_keyword_remove,
      sym_keyword_intersect,
      sym_keyword_loop,
      sym_keyword_mod,
      sym_keyword_func,
      sym_keyword_let,
      sym_keyword_from_text,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
  [15697] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(21), 1,
      sym_pipe,
    ACTIONS(844), 1,
      sym_keyword_from,
    STATE(240), 1,
      sym_comment,
    ACTIONS(842), 20,
      ts_builtin_sym_end,
      sym_keyword_filter,
      sym_keyword_derive,
      sym_keyword_group,
      sym_keyword_aggregate,
      sym_keyword_sort,
      sym_keyword_take,
      sym_keyword_join,
      sym_keyword_select,
      sym_keyword_append,
      sym_keyword_remove,
      sym_keyword_intersect,
      sym_keyword_loop,
      sym_keyword_mod,
      sym_keyword_func,
      sym_keyword_let,
      sym_keyword_from_text,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
  [15732] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(21), 1,
      sym_pipe,
    ACTIONS(554), 1,
      sym_keyword_from,
    STATE(241), 1,
      sym_comment,
    ACTIONS(556), 20,
      ts_builtin_sym_end,
      sym_keyword_filter,
      sym_keyword_derive,
      sym_keyword_group,
      sym_keyword_aggregate,
      sym_keyword_sort,
      sym_keyword_take,
      sym_keyword_join,
      sym_keyword_select,
      sym_keyword_append,
      sym_keyword_remove,
      sym_keyword_intersect,
      sym_keyword_loop,
      sym_keyword_mod,
      sym_keyword_func,
      sym_keyword_let,
      sym_keyword_from_text,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
  [15767] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(21), 1,
      sym_pipe,
    ACTIONS(848), 1,
      sym_keyword_from,
    STATE(242), 1,
      sym_comment,
    ACTIONS(846), 20,
      ts_builtin_sym_end,
      sym_keyword_filter,
      sym_keyword_derive,
      sym_keyword_group,
      sym_keyword_aggregate,
      sym_keyword_sort,
      sym_keyword_take,
      sym_keyword_join,
      sym_keyword_select,
      sym_keyword_append,
      sym_keyword_remove,
      sym_keyword_intersect,
      sym_keyword_loop,
      sym_keyword_mod,
      sym_keyword_func,
      sym_keyword_let,
      sym_keyword_from_text,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
  [15802] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(21), 1,
      sym_pipe,
    ACTIONS(852), 1,
      sym_keyword_from,
    STATE(243), 1,
      sym_comment,
    ACTIONS(850), 20,
      ts_builtin_sym_end,
      sym_keyword_filter,
      sym_keyword_derive,
      sym_keyword_group,
      sym_keyword_aggregate,
      sym_keyword_sort,
      sym_keyword_take,
      sym_keyword_join,
      sym_keyword_select,
      sym_keyword_append,
      sym_keyword_remove,
      sym_keyword_intersect,
      sym_keyword_loop,
      sym_keyword_mod,
      sym_keyword_func,
      sym_keyword_let,
      sym_keyword_from_text,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
  [15837] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(21), 1,
      sym_pipe,
    ACTIONS(856), 1,
      sym_keyword_from,
    STATE(244), 1,
      sym_comment,
    ACTIONS(854), 20,
      ts_builtin_sym_end,
      sym_keyword_filter,
      sym_keyword_derive,
      sym_keyword_group,
      sym_keyword_aggregate,
      sym_keyword_sort,
      sym_keyword_take,
      sym_keyword_join,
      sym_keyword_select,
      sym_keyword_append,
      sym_keyword_remove,
      sym_keyword_intersect,
      sym_keyword_loop,
      sym_keyword_mod,
      sym_keyword_func,
      sym_keyword_let,
      sym_keyword_from_text,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
  [15872] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(21), 1,
      sym_pipe,
    ACTIONS(860), 1,
      sym_keyword_from,
    STATE(245), 1,
      sym_comment,
    ACTIONS(858), 20,
      ts_builtin_sym_end,
      sym_keyword_filter,
      sym_keyword_derive,
      sym_keyword_group,
      sym_keyword_aggregate,
      sym_keyword_sort,
      sym_keyword_take,
      sym_keyword_join,
      sym_keyword_select,
      sym_keyword_append,
      sym_keyword_remove,
      sym_keyword_intersect,
      sym_keyword_loop,
      sym_keyword_mod,
      sym_keyword_func,
      sym_keyword_let,
      sym_keyword_from_text,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
  [15907] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(21), 1,
      sym_pipe,
    ACTIONS(864), 1,
      sym_keyword_from,
    STATE(246), 1,
      sym_comment,
    ACTIONS(862), 20,
      ts_builtin_sym_end,
      sym_keyword_filter,
      sym_keyword_derive,
      sym_keyword_group,
      sym_keyword_aggregate,
      sym_keyword_sort,
      sym_keyword_take,
      sym_keyword_join,
      sym_keyword_select,
      sym_keyword_append,
      sym_keyword_remove,
      sym_keyword_intersect,
      sym_keyword_loop,
      sym_keyword_mod,
      sym_keyword_func,
      sym_keyword_let,
      sym_keyword_from_text,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
  [15942] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(21), 1,
      sym_pipe,
    ACTIONS(868), 1,
      sym_keyword_from,
    STATE(247), 1,
      sym_comment,
    ACTIONS(866), 20,
      ts_builtin_sym_end,
      sym_keyword_filter,
      sym_keyword_derive,
      sym_keyword_group,
      sym_keyword_aggregate,
      sym_keyword_sort,
      sym_keyword_take,
      sym_keyword_join,
      sym_keyword_select,
      sym_keyword_append,
      sym_keyword_remove,
      sym_keyword_intersect,
      sym_keyword_loop,
      sym_keyword_mod,
      sym_keyword_func,
      sym_keyword_let,
      sym_keyword_from_text,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
  [15977] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(21), 1,
      sym_pipe,
    ACTIONS(872), 1,
      sym_keyword_from,
    STATE(248), 1,
      sym_comment,
    ACTIONS(870), 20,
      ts_builtin_sym_end,
      sym_keyword_filter,
      sym_keyword_derive,
      sym_keyword_group,
      sym_keyword_aggregate,
      sym_keyword_sort,
      sym_keyword_take,
      sym_keyword_join,
      sym_keyword_select,
      sym_keyword_append,
      sym_keyword_remove,
      sym_keyword_intersect,
      sym_keyword_loop,
      sym_keyword_mod,
      sym_keyword_func,
      sym_keyword_let,
      sym_keyword_from_text,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
  [16012] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(21), 1,
      sym_pipe,
    ACTIONS(876), 1,
      sym_keyword_from,
    STATE(249), 1,
      sym_comment,
    ACTIONS(874), 20,
      ts_builtin_sym_end,
      sym_keyword_filter,
      sym_keyword_derive,
      sym_keyword_group,
      sym_keyword_aggregate,
      sym_keyword_sort,
      sym_keyword_take,
      sym_keyword_join,
      sym_keyword_select,
      sym_keyword_append,
      sym_keyword_remove,
      sym_keyword_intersect,
      sym_keyword_loop,
      sym_keyword_mod,
      sym_keyword_func,
      sym_keyword_let,
      sym_keyword_from_text,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
  [16047] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(21), 1,
      sym_pipe,
    ACTIONS(880), 1,
      sym_keyword_from,
    STATE(250), 1,
      sym_comment,
    ACTIONS(878), 20,
      ts_builtin_sym_end,
      sym_keyword_filter,
      sym_keyword_derive,
      sym_keyword_group,
      sym_keyword_aggregate,
      sym_keyword_sort,
      sym_keyword_take,
      sym_keyword_join,
      sym_keyword_select,
      sym_keyword_append,
      sym_keyword_remove,
      sym_keyword_intersect,
      sym_keyword_loop,
      sym_keyword_mod,
      sym_keyword_func,
      sym_keyword_let,
      sym_keyword_from_text,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
  [16082] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(21), 1,
      sym_pipe,
    ACTIONS(884), 1,
      sym_keyword_from,
    STATE(251), 1,
      sym_comment,
    ACTIONS(882), 20,
      ts_builtin_sym_end,
      sym_keyword_filter,
      sym_keyword_derive,
      sym_keyword_group,
      sym_keyword_aggregate,
      sym_keyword_sort,
      sym_keyword_take,
      sym_keyword_join,
      sym_keyword_select,
      sym_keyword_append,
      sym_keyword_remove,
      sym_keyword_intersect,
      sym_keyword_loop,
      sym_keyword_mod,
      sym_keyword_func,
      sym_keyword_let,
      sym_keyword_from_text,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
  [16117] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(21), 1,
      sym_pipe,
    ACTIONS(888), 1,
      sym_keyword_from,
    STATE(252), 1,
      sym_comment,
    ACTIONS(886), 20,
      ts_builtin_sym_end,
      sym_keyword_filter,
      sym_keyword_derive,
      sym_keyword_group,
      sym_keyword_aggregate,
      sym_keyword_sort,
      sym_keyword_take,
      sym_keyword_join,
      sym_keyword_select,
      sym_keyword_append,
      sym_keyword_remove,
      sym_keyword_intersect,
      sym_keyword_loop,
      sym_keyword_mod,
      sym_keyword_func,
      sym_keyword_let,
      sym_keyword_from_text,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
  [16152] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(21), 1,
      sym_pipe,
    ACTIONS(892), 1,
      sym_keyword_from,
    STATE(253), 1,
      sym_comment,
    ACTIONS(890), 20,
      ts_builtin_sym_end,
      sym_keyword_filter,
      sym_keyword_derive,
      sym_keyword_group,
      sym_keyword_aggregate,
      sym_keyword_sort,
      sym_keyword_take,
      sym_keyword_join,
      sym_keyword_select,
      sym_keyword_append,
      sym_keyword_remove,
      sym_keyword_intersect,
      sym_keyword_loop,
      sym_keyword_mod,
      sym_keyword_func,
      sym_keyword_let,
      sym_keyword_from_text,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
  [16187] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(21), 1,
      sym_pipe,
    ACTIONS(896), 1,
      sym_keyword_from,
    STATE(254), 1,
      sym_comment,
    ACTIONS(894), 20,
      ts_builtin_sym_end,
      sym_keyword_filter,
      sym_keyword_derive,
      sym_keyword_group,
      sym_keyword_aggregate,
      sym_keyword_sort,
      sym_keyword_take,
      sym_keyword_join,
      sym_keyword_select,
      sym_keyword_append,
      sym_keyword_remove,
      sym_keyword_intersect,
      sym_keyword_loop,
      sym_keyword_mod,
      sym_keyword_func,
      sym_keyword_let,
      sym_keyword_from_text,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
  [16222] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(21), 1,
      sym_pipe,
    ACTIONS(900), 1,
      sym_keyword_from,
    STATE(255), 1,
      sym_comment,
    ACTIONS(898), 20,
      ts_builtin_sym_end,
      sym_keyword_filter,
      sym_keyword_derive,
      sym_keyword_group,
      sym_keyword_aggregate,
      sym_keyword_sort,
      sym_keyword_take,
      sym_keyword_join,
      sym_keyword_select,
      sym_keyword_append,
      sym_keyword_remove,
      sym_keyword_intersect,
      sym_keyword_loop,
      sym_keyword_mod,
      sym_keyword_func,
      sym_keyword_let,
      sym_keyword_from_text,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
  [16257] = 7,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(904), 1,
      sym_keyword_from,
    STATE(256), 1,
      sym_comment,
    ACTIONS(423), 3,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(902), 6,
      ts_builtin_sym_end,
      sym_keyword_mod,
      sym_keyword_func,
      sym_keyword_let,
      sym_keyword_from_text,
      anon_sym_RBRACE,
    ACTIONS(421), 11,
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
  [16296] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(21), 1,
      sym_pipe,
    ACTIONS(908), 1,
      sym_keyword_from,
    STATE(257), 1,
      sym_comment,
    ACTIONS(906), 20,
      ts_builtin_sym_end,
      sym_keyword_filter,
      sym_keyword_derive,
      sym_keyword_group,
      sym_keyword_aggregate,
      sym_keyword_sort,
      sym_keyword_take,
      sym_keyword_join,
      sym_keyword_select,
      sym_keyword_append,
      sym_keyword_remove,
      sym_keyword_intersect,
      sym_keyword_loop,
      sym_keyword_mod,
      sym_keyword_func,
      sym_keyword_let,
      sym_keyword_from_text,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
  [16331] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(21), 1,
      sym_pipe,
    ACTIONS(912), 1,
      sym_keyword_from,
    STATE(258), 1,
      sym_comment,
    ACTIONS(910), 20,
      ts_builtin_sym_end,
      sym_keyword_filter,
      sym_keyword_derive,
      sym_keyword_group,
      sym_keyword_aggregate,
      sym_keyword_sort,
      sym_keyword_take,
      sym_keyword_join,
      sym_keyword_select,
      sym_keyword_append,
      sym_keyword_remove,
      sym_keyword_intersect,
      sym_keyword_loop,
      sym_keyword_mod,
      sym_keyword_func,
      sym_keyword_let,
      sym_keyword_from_text,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
  [16366] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(21), 1,
      sym_pipe,
    ACTIONS(916), 1,
      sym_keyword_from,
    STATE(259), 1,
      sym_comment,
    ACTIONS(914), 20,
      ts_builtin_sym_end,
      sym_keyword_filter,
      sym_keyword_derive,
      sym_keyword_group,
      sym_keyword_aggregate,
      sym_keyword_sort,
      sym_keyword_take,
      sym_keyword_join,
      sym_keyword_select,
      sym_keyword_append,
      sym_keyword_remove,
      sym_keyword_intersect,
      sym_keyword_loop,
      sym_keyword_mod,
      sym_keyword_func,
      sym_keyword_let,
      sym_keyword_from_text,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
  [16401] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(21), 1,
      sym_pipe,
    ACTIONS(920), 1,
      sym_keyword_from,
    STATE(260), 1,
      sym_comment,
    ACTIONS(918), 20,
      ts_builtin_sym_end,
      sym_keyword_filter,
      sym_keyword_derive,
      sym_keyword_group,
      sym_keyword_aggregate,
      sym_keyword_sort,
      sym_keyword_take,
      sym_keyword_join,
      sym_keyword_select,
      sym_keyword_append,
      sym_keyword_remove,
      sym_keyword_intersect,
      sym_keyword_loop,
      sym_keyword_mod,
      sym_keyword_func,
      sym_keyword_let,
      sym_keyword_from_text,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
  [16436] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(21), 1,
      sym_pipe,
    ACTIONS(924), 1,
      sym_keyword_from,
    STATE(261), 1,
      sym_comment,
    ACTIONS(922), 20,
      ts_builtin_sym_end,
      sym_keyword_filter,
      sym_keyword_derive,
      sym_keyword_group,
      sym_keyword_aggregate,
      sym_keyword_sort,
      sym_keyword_take,
      sym_keyword_join,
      sym_keyword_select,
      sym_keyword_append,
      sym_keyword_remove,
      sym_keyword_intersect,
      sym_keyword_loop,
      sym_keyword_mod,
      sym_keyword_func,
      sym_keyword_let,
      sym_keyword_from_text,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
  [16471] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(21), 1,
      sym_pipe,
    ACTIONS(928), 1,
      sym_keyword_from,
    STATE(262), 1,
      sym_comment,
    ACTIONS(926), 20,
      ts_builtin_sym_end,
      sym_keyword_filter,
      sym_keyword_derive,
      sym_keyword_group,
      sym_keyword_aggregate,
      sym_keyword_sort,
      sym_keyword_take,
      sym_keyword_join,
      sym_keyword_select,
      sym_keyword_append,
      sym_keyword_remove,
      sym_keyword_intersect,
      sym_keyword_loop,
      sym_keyword_mod,
      sym_keyword_func,
      sym_keyword_let,
      sym_keyword_from_text,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
  [16506] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(21), 1,
      sym_pipe,
    ACTIONS(932), 1,
      sym_keyword_from,
    STATE(263), 1,
      sym_comment,
    ACTIONS(930), 20,
      ts_builtin_sym_end,
      sym_keyword_filter,
      sym_keyword_derive,
      sym_keyword_group,
      sym_keyword_aggregate,
      sym_keyword_sort,
      sym_keyword_take,
      sym_keyword_join,
      sym_keyword_select,
      sym_keyword_append,
      sym_keyword_remove,
      sym_keyword_intersect,
      sym_keyword_loop,
      sym_keyword_mod,
      sym_keyword_func,
      sym_keyword_let,
      sym_keyword_from_text,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
  [16541] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(21), 1,
      sym_pipe,
    ACTIONS(936), 1,
      sym_keyword_from,
    STATE(264), 1,
      sym_comment,
    ACTIONS(934), 20,
      ts_builtin_sym_end,
      sym_keyword_filter,
      sym_keyword_derive,
      sym_keyword_group,
      sym_keyword_aggregate,
      sym_keyword_sort,
      sym_keyword_take,
      sym_keyword_join,
      sym_keyword_select,
      sym_keyword_append,
      sym_keyword_remove,
      sym_keyword_intersect,
      sym_keyword_loop,
      sym_keyword_mod,
      sym_keyword_func,
      sym_keyword_let,
      sym_keyword_from_text,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
  [16576] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(21), 1,
      sym_pipe,
    ACTIONS(940), 1,
      sym_keyword_from,
    STATE(265), 1,
      sym_comment,
    ACTIONS(938), 20,
      ts_builtin_sym_end,
      sym_keyword_filter,
      sym_keyword_derive,
      sym_keyword_group,
      sym_keyword_aggregate,
      sym_keyword_sort,
      sym_keyword_take,
      sym_keyword_join,
      sym_keyword_select,
      sym_keyword_append,
      sym_keyword_remove,
      sym_keyword_intersect,
      sym_keyword_loop,
      sym_keyword_mod,
      sym_keyword_func,
      sym_keyword_let,
      sym_keyword_from_text,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
  [16611] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(21), 1,
      sym_pipe,
    ACTIONS(944), 1,
      sym_keyword_from,
    STATE(266), 1,
      sym_comment,
    ACTIONS(942), 20,
      ts_builtin_sym_end,
      sym_keyword_filter,
      sym_keyword_derive,
      sym_keyword_group,
      sym_keyword_aggregate,
      sym_keyword_sort,
      sym_keyword_take,
      sym_keyword_join,
      sym_keyword_select,
      sym_keyword_append,
      sym_keyword_remove,
      sym_keyword_intersect,
      sym_keyword_loop,
      sym_keyword_mod,
      sym_keyword_func,
      sym_keyword_let,
      sym_keyword_from_text,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
  [16646] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(21), 1,
      sym_pipe,
    ACTIONS(948), 1,
      sym_keyword_from,
    STATE(267), 1,
      sym_comment,
    ACTIONS(946), 20,
      ts_builtin_sym_end,
      sym_keyword_filter,
      sym_keyword_derive,
      sym_keyword_group,
      sym_keyword_aggregate,
      sym_keyword_sort,
      sym_keyword_take,
      sym_keyword_join,
      sym_keyword_select,
      sym_keyword_append,
      sym_keyword_remove,
      sym_keyword_intersect,
      sym_keyword_loop,
      sym_keyword_mod,
      sym_keyword_func,
      sym_keyword_let,
      sym_keyword_from_text,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
  [16681] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(21), 1,
      sym_pipe,
    ACTIONS(952), 1,
      sym_keyword_from,
    STATE(268), 1,
      sym_comment,
    ACTIONS(950), 20,
      ts_builtin_sym_end,
      sym_keyword_filter,
      sym_keyword_derive,
      sym_keyword_group,
      sym_keyword_aggregate,
      sym_keyword_sort,
      sym_keyword_take,
      sym_keyword_join,
      sym_keyword_select,
      sym_keyword_append,
      sym_keyword_remove,
      sym_keyword_intersect,
      sym_keyword_loop,
      sym_keyword_mod,
      sym_keyword_func,
      sym_keyword_let,
      sym_keyword_from_text,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
  [16716] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(21), 1,
      sym_pipe,
    ACTIONS(956), 1,
      sym_keyword_from,
    STATE(269), 1,
      sym_comment,
    ACTIONS(954), 20,
      ts_builtin_sym_end,
      sym_keyword_filter,
      sym_keyword_derive,
      sym_keyword_group,
      sym_keyword_aggregate,
      sym_keyword_sort,
      sym_keyword_take,
      sym_keyword_join,
      sym_keyword_select,
      sym_keyword_append,
      sym_keyword_remove,
      sym_keyword_intersect,
      sym_keyword_loop,
      sym_keyword_mod,
      sym_keyword_func,
      sym_keyword_let,
      sym_keyword_from_text,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
  [16751] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(21), 1,
      sym_pipe,
    ACTIONS(960), 1,
      sym_keyword_from,
    STATE(270), 1,
      sym_comment,
    ACTIONS(958), 20,
      ts_builtin_sym_end,
      sym_keyword_filter,
      sym_keyword_derive,
      sym_keyword_group,
      sym_keyword_aggregate,
      sym_keyword_sort,
      sym_keyword_take,
      sym_keyword_join,
      sym_keyword_select,
      sym_keyword_append,
      sym_keyword_remove,
      sym_keyword_intersect,
      sym_keyword_loop,
      sym_keyword_mod,
      sym_keyword_func,
      sym_keyword_let,
      sym_keyword_from_text,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
  [16786] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(21), 1,
      sym_pipe,
    STATE(271), 1,
      sym_comment,
    ACTIONS(962), 7,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
      anon_sym_f_DQUOTE,
      anon_sym_s_DQUOTE,
      anon_sym__,
      sym__identifier,
    ACTIONS(964), 12,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_DOT,
      anon_sym_DASH,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      anon_sym_f_DQUOTE_DQUOTE_DQUOTE,
      anon_sym_s_DQUOTE_DQUOTE_DQUOTE,
      sym__natural_number,
      anon_sym_BQUOTE,
      anon_sym_AT,
  [16819] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(21), 1,
      sym_pipe,
    STATE(272), 1,
      sym_comment,
    ACTIONS(966), 7,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
      anon_sym_f_DQUOTE,
      anon_sym_s_DQUOTE,
      anon_sym__,
      sym__identifier,
    ACTIONS(968), 12,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_DOT,
      anon_sym_DASH,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      anon_sym_f_DQUOTE_DQUOTE_DQUOTE,
      anon_sym_s_DQUOTE_DQUOTE_DQUOTE,
      sym__natural_number,
      anon_sym_BQUOTE,
      anon_sym_AT,
  [16852] = 15,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(469), 1,
      anon_sym_DASH,
    ACTIONS(471), 1,
      anon_sym_PLUS,
    ACTIONS(475), 1,
      anon_sym_STAR,
    ACTIONS(477), 1,
      anon_sym_SLASH,
    ACTIONS(479), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(483), 1,
      anon_sym_QMARK_QMARK,
    ACTIONS(485), 1,
      anon_sym_AMP_AMP,
    ACTIONS(515), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(970), 1,
      anon_sym_EQ,
    STATE(273), 1,
      sym_comment,
    ACTIONS(481), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(473), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(556), 4,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
  [16905] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(21), 1,
      sym_pipe,
    STATE(274), 1,
      sym_comment,
    ACTIONS(972), 7,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
      anon_sym_f_DQUOTE,
      anon_sym_s_DQUOTE,
      anon_sym__,
      sym__identifier,
    ACTIONS(974), 12,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_DOT,
      anon_sym_DASH,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      anon_sym_f_DQUOTE_DQUOTE_DQUOTE,
      anon_sym_s_DQUOTE_DQUOTE_DQUOTE,
      sym__natural_number,
      anon_sym_BQUOTE,
      anon_sym_AT,
  [16938] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    STATE(275), 1,
      sym_comment,
    STATE(425), 1,
      aux_sym__tuples_repeat1,
    ACTIONS(459), 4,
      anon_sym_EQ,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(457), 13,
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
  [16972] = 8,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(976), 1,
      anon_sym_COMMA,
    ACTIONS(978), 1,
      anon_sym_RBRACE,
    STATE(276), 1,
      sym_comment,
    STATE(417), 1,
      aux_sym_aggregate_repeat1,
    ACTIONS(423), 4,
      anon_sym_EQ,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(421), 11,
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
  [17010] = 8,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(980), 1,
      anon_sym_COMMA,
    ACTIONS(982), 1,
      anon_sym_RPAREN,
    STATE(277), 1,
      sym_comment,
    STATE(426), 1,
      aux_sym_conditions_repeat1,
    ACTIONS(423), 3,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(421), 11,
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
  [17047] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    STATE(278), 1,
      sym_comment,
    ACTIONS(984), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
    ACTIONS(423), 4,
      anon_sym_EQ,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(421), 11,
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
  [17080] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    STATE(279), 1,
      sym_comment,
    ACTIONS(459), 4,
      anon_sym_EQ,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(457), 13,
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
  [17111] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(21), 1,
      sym_pipe,
    STATE(280), 1,
      sym_comment,
    ACTIONS(986), 7,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
      anon_sym_f_DQUOTE,
      anon_sym_s_DQUOTE,
      anon_sym__,
      sym__identifier,
    ACTIONS(988), 10,
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
  [17142] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(21), 1,
      sym_pipe,
    STATE(281), 1,
      sym_comment,
    STATE(294), 1,
      aux_sym__friendly_number,
    ACTIONS(148), 5,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
      anon_sym__,
      sym__identifier,
    ACTIONS(146), 10,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_DOT,
      anon_sym_DASH,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym__natural_number,
      anon_sym_BQUOTE,
  [17174] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(21), 1,
      sym_pipe,
    ACTIONS(990), 1,
      anon_sym_COLON,
    STATE(282), 1,
      sym_comment,
    ACTIONS(572), 5,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
      anon_sym__,
      sym__identifier,
    ACTIONS(570), 10,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_DOT,
      anon_sym_DASH,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym__natural_number,
      anon_sym_BQUOTE,
  [17206] = 14,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(21), 1,
      sym_pipe,
    ACTIONS(89), 1,
      anon_sym_DOT,
    ACTIONS(91), 1,
      anon_sym_DQUOTE,
    ACTIONS(93), 1,
      anon_sym_SQUOTE,
    ACTIONS(405), 1,
      anon_sym_DASH,
    STATE(135), 1,
      aux_sym__friendly_number,
    STATE(152), 1,
      sym_literal,
    STATE(163), 1,
      sym_integer,
    STATE(283), 1,
      sym_comment,
    ACTIONS(95), 2,
      sym__natural_number,
      anon_sym__,
    STATE(158), 2,
      sym_literal_string,
      sym_decimal_number,
    STATE(159), 2,
      sym__double_quote_string,
      sym__single_quote_string,
    ACTIONS(992), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
  [17254] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(21), 1,
      sym_pipe,
    STATE(284), 1,
      sym_comment,
    STATE(294), 1,
      aux_sym__friendly_number,
    ACTIONS(156), 5,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
      anon_sym__,
      sym__identifier,
    ACTIONS(154), 10,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_DOT,
      anon_sym_DASH,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym__natural_number,
      anon_sym_BQUOTE,
  [17286] = 14,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(21), 1,
      sym_pipe,
    ACTIONS(996), 1,
      anon_sym_DOT,
    ACTIONS(998), 1,
      anon_sym_DASH,
    ACTIONS(1000), 1,
      anon_sym_DQUOTE,
    ACTIONS(1002), 1,
      anon_sym_SQUOTE,
    STATE(285), 1,
      sym_comment,
    STATE(367), 1,
      aux_sym__friendly_number,
    STATE(389), 1,
      sym_integer,
    STATE(452), 1,
      sym_literal,
    ACTIONS(1004), 2,
      sym__natural_number,
      anon_sym__,
    STATE(395), 2,
      sym_literal_string,
      sym_decimal_number,
    STATE(399), 2,
      sym__double_quote_string,
      sym__single_quote_string,
    ACTIONS(994), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
  [17334] = 14,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(21), 1,
      sym_pipe,
    ACTIONS(69), 1,
      anon_sym_DOT,
    ACTIONS(71), 1,
      anon_sym_DQUOTE,
    ACTIONS(73), 1,
      anon_sym_SQUOTE,
    ACTIONS(395), 1,
      anon_sym_DASH,
    STATE(143), 1,
      aux_sym__friendly_number,
    STATE(153), 1,
      sym_literal,
    STATE(170), 1,
      sym_integer,
    STATE(286), 1,
      sym_comment,
    ACTIONS(75), 2,
      sym__natural_number,
      anon_sym__,
    STATE(166), 2,
      sym_literal_string,
      sym_decimal_number,
    STATE(168), 2,
      sym__double_quote_string,
      sym__single_quote_string,
    ACTIONS(1006), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
  [17382] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    STATE(287), 1,
      sym_comment,
    ACTIONS(1008), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
    ACTIONS(423), 3,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(421), 11,
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
  [17414] = 14,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(21), 1,
      sym_pipe,
    ACTIONS(443), 1,
      anon_sym_DOT,
    ACTIONS(445), 1,
      anon_sym_DQUOTE,
    ACTIONS(447), 1,
      anon_sym_SQUOTE,
    ACTIONS(689), 1,
      anon_sym_DASH,
    STATE(284), 1,
      aux_sym__friendly_number,
    STATE(288), 1,
      sym_comment,
    STATE(298), 1,
      sym_literal,
    STATE(307), 1,
      sym_integer,
    ACTIONS(449), 2,
      sym__natural_number,
      anon_sym__,
    STATE(303), 2,
      sym_literal_string,
      sym_decimal_number,
    STATE(305), 2,
      sym__double_quote_string,
      sym__single_quote_string,
    ACTIONS(1010), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
  [17462] = 14,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(469), 1,
      anon_sym_DASH,
    ACTIONS(471), 1,
      anon_sym_PLUS,
    ACTIONS(475), 1,
      anon_sym_STAR,
    ACTIONS(477), 1,
      anon_sym_SLASH,
    ACTIONS(479), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(483), 1,
      anon_sym_QMARK_QMARK,
    ACTIONS(485), 1,
      anon_sym_AMP_AMP,
    ACTIONS(515), 1,
      anon_sym_PIPE_PIPE,
    STATE(289), 1,
      sym_comment,
    ACTIONS(481), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(1012), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
    ACTIONS(473), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
  [17510] = 14,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(469), 1,
      anon_sym_DASH,
    ACTIONS(471), 1,
      anon_sym_PLUS,
    ACTIONS(475), 1,
      anon_sym_STAR,
    ACTIONS(477), 1,
      anon_sym_SLASH,
    ACTIONS(479), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(483), 1,
      anon_sym_QMARK_QMARK,
    ACTIONS(485), 1,
      anon_sym_AMP_AMP,
    ACTIONS(515), 1,
      anon_sym_PIPE_PIPE,
    STATE(290), 1,
      sym_comment,
    ACTIONS(481), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(1014), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
    ACTIONS(473), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
  [17558] = 15,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(9), 1,
      sym_keyword_from,
    ACTIONS(11), 1,
      sym_keyword_mod,
    ACTIONS(13), 1,
      sym_keyword_func,
    ACTIONS(15), 1,
      sym_keyword_let,
    ACTIONS(17), 1,
      sym_keyword_prql,
    ACTIONS(19), 1,
      sym_keyword_from_text,
    ACTIONS(21), 1,
      sym_pipe,
    ACTIONS(1016), 1,
      ts_builtin_sym_end,
    STATE(291), 1,
      sym_comment,
    STATE(326), 1,
      aux_sym_program_repeat2,
    STATE(336), 1,
      aux_sym_program_repeat1,
    STATE(358), 1,
      sym_prql,
    STATE(147), 2,
      sym_from_text,
      sym_from,
    STATE(376), 4,
      sym_pipeline,
      sym_variable,
      sym_function_definition,
      sym_module_definition,
  [17608] = 14,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(21), 1,
      sym_pipe,
    ACTIONS(996), 1,
      anon_sym_DOT,
    ACTIONS(1002), 1,
      anon_sym_SQUOTE,
    ACTIONS(1018), 1,
      anon_sym_DASH,
    ACTIONS(1020), 1,
      anon_sym_DQUOTE,
    STATE(292), 1,
      sym_comment,
    STATE(378), 1,
      aux_sym__friendly_number,
    STATE(389), 1,
      sym_integer,
    STATE(537), 1,
      sym_literal,
    ACTIONS(1022), 2,
      sym__natural_number,
      anon_sym__,
    STATE(395), 2,
      sym_literal_string,
      sym_decimal_number,
    STATE(399), 2,
      sym__double_quote_string,
      sym__single_quote_string,
    ACTIONS(994), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
  [17656] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(21), 1,
      sym_pipe,
    STATE(293), 1,
      sym_comment,
    ACTIONS(166), 5,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
      anon_sym__,
      sym__identifier,
    ACTIONS(168), 11,
      anon_sym_COLON,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_DOT,
      anon_sym_DASH,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym__natural_number,
      anon_sym_BQUOTE,
  [17686] = 7,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(21), 1,
      sym_pipe,
    ACTIONS(1024), 1,
      sym__natural_number,
    ACTIONS(1027), 1,
      anon_sym__,
    STATE(294), 2,
      aux_sym__friendly_number,
      sym_comment,
    ACTIONS(141), 4,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
      sym__identifier,
    ACTIONS(139), 9,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_DOT,
      anon_sym_DASH,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
  [17720] = 14,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(21), 1,
      sym_pipe,
    ACTIONS(125), 1,
      anon_sym_DOT,
    ACTIONS(127), 1,
      anon_sym_DQUOTE,
    ACTIONS(129), 1,
      anon_sym_SQUOTE,
    ACTIONS(548), 1,
      anon_sym_DASH,
    STATE(189), 1,
      aux_sym__friendly_number,
    STATE(195), 1,
      sym_integer,
    STATE(207), 1,
      sym_literal,
    STATE(295), 1,
      sym_comment,
    ACTIONS(131), 2,
      sym__natural_number,
      anon_sym__,
    STATE(199), 2,
      sym__double_quote_string,
      sym__single_quote_string,
    STATE(205), 2,
      sym_literal_string,
      sym_decimal_number,
    ACTIONS(1030), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
  [17768] = 14,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(21), 1,
      sym_pipe,
    ACTIONS(996), 1,
      anon_sym_DOT,
    ACTIONS(1002), 1,
      anon_sym_SQUOTE,
    ACTIONS(1018), 1,
      anon_sym_DASH,
    ACTIONS(1020), 1,
      anon_sym_DQUOTE,
    STATE(296), 1,
      sym_comment,
    STATE(378), 1,
      aux_sym__friendly_number,
    STATE(389), 1,
      sym_integer,
    STATE(531), 1,
      sym_literal,
    ACTIONS(1022), 2,
      sym__natural_number,
      anon_sym__,
    STATE(395), 2,
      sym_literal_string,
      sym_decimal_number,
    STATE(399), 2,
      sym__double_quote_string,
      sym__single_quote_string,
    ACTIONS(994), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
  [17816] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(21), 1,
      sym_pipe,
    STATE(297), 1,
      sym_comment,
    ACTIONS(162), 5,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
      anon_sym__,
      sym__identifier,
    ACTIONS(164), 11,
      anon_sym_COLON,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_DOT,
      anon_sym_DASH,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym__natural_number,
      anon_sym_BQUOTE,
  [17846] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(21), 1,
      sym_pipe,
    STATE(298), 1,
      sym_comment,
    ACTIONS(619), 5,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
      anon_sym__,
      sym__identifier,
    ACTIONS(621), 10,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_DOT,
      anon_sym_DASH,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym__natural_number,
      anon_sym_BQUOTE,
  [17875] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(21), 1,
      sym_pipe,
    STATE(299), 1,
      sym_comment,
    ACTIONS(505), 5,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
      anon_sym__,
      sym__identifier,
    ACTIONS(503), 10,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_DOT,
      anon_sym_DASH,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym__natural_number,
      anon_sym_BQUOTE,
  [17904] = 12,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(469), 1,
      anon_sym_DASH,
    ACTIONS(471), 1,
      anon_sym_PLUS,
    ACTIONS(475), 1,
      anon_sym_STAR,
    ACTIONS(477), 1,
      anon_sym_SLASH,
    ACTIONS(479), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(483), 1,
      anon_sym_QMARK_QMARK,
    STATE(300), 1,
      sym_comment,
    ACTIONS(481), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(465), 3,
      anon_sym_RPAREN,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
    ACTIONS(473), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
  [17947] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(1032), 1,
      anon_sym_RPAREN,
    STATE(301), 1,
      sym_comment,
    ACTIONS(423), 3,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(421), 11,
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
  [17978] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(21), 1,
      sym_pipe,
    STATE(302), 1,
      sym_comment,
    ACTIONS(572), 5,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
      anon_sym__,
      sym__identifier,
    ACTIONS(570), 10,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_DOT,
      anon_sym_DASH,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym__natural_number,
      anon_sym_BQUOTE,
  [18007] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(21), 1,
      sym_pipe,
    STATE(303), 1,
      sym_comment,
    ACTIONS(409), 5,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
      anon_sym__,
      sym__identifier,
    ACTIONS(407), 10,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_DOT,
      anon_sym_DASH,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym__natural_number,
      anon_sym_BQUOTE,
  [18036] = 14,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(469), 1,
      anon_sym_DASH,
    ACTIONS(471), 1,
      anon_sym_PLUS,
    ACTIONS(475), 1,
      anon_sym_STAR,
    ACTIONS(477), 1,
      anon_sym_SLASH,
    ACTIONS(479), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(483), 1,
      anon_sym_QMARK_QMARK,
    ACTIONS(511), 1,
      anon_sym_RPAREN,
    ACTIONS(1034), 1,
      anon_sym_AMP_AMP,
    ACTIONS(1036), 1,
      anon_sym_PIPE_PIPE,
    STATE(304), 1,
      sym_comment,
    ACTIONS(481), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(473), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
  [18083] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(21), 1,
      sym_pipe,
    STATE(305), 1,
      sym_comment,
    ACTIONS(401), 5,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
      anon_sym__,
      sym__identifier,
    ACTIONS(399), 10,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_DOT,
      anon_sym_DASH,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym__natural_number,
      anon_sym_BQUOTE,
  [18112] = 14,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(469), 1,
      anon_sym_DASH,
    ACTIONS(471), 1,
      anon_sym_PLUS,
    ACTIONS(475), 1,
      anon_sym_STAR,
    ACTIONS(477), 1,
      anon_sym_SLASH,
    ACTIONS(479), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(483), 1,
      anon_sym_QMARK_QMARK,
    ACTIONS(485), 1,
      anon_sym_AMP_AMP,
    ACTIONS(515), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(970), 1,
      anon_sym_EQ,
    STATE(306), 1,
      sym_comment,
    ACTIONS(481), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(473), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
  [18159] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(21), 1,
      sym_pipe,
    STATE(307), 1,
      sym_comment,
    ACTIONS(409), 5,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
      anon_sym__,
      sym__identifier,
    ACTIONS(407), 10,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_DOT,
      anon_sym_DASH,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym__natural_number,
      anon_sym_BQUOTE,
  [18188] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(21), 1,
      sym_pipe,
    STATE(308), 1,
      sym_comment,
    ACTIONS(671), 5,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
      anon_sym__,
      sym__identifier,
    ACTIONS(669), 10,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_DOT,
      anon_sym_DASH,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym__natural_number,
      anon_sym_BQUOTE,
  [18217] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(1038), 1,
      anon_sym_EQ_GT,
    STATE(309), 1,
      sym_comment,
    ACTIONS(423), 3,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(421), 11,
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
  [18248] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(21), 1,
      sym_pipe,
    STATE(310), 1,
      sym_comment,
    ACTIONS(377), 5,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
      anon_sym__,
      sym__identifier,
    ACTIONS(375), 10,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_DOT,
      anon_sym_DASH,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym__natural_number,
      anon_sym_BQUOTE,
  [18277] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(21), 1,
      sym_pipe,
    STATE(311), 1,
      sym_comment,
    ACTIONS(387), 5,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
      anon_sym__,
      sym__identifier,
    ACTIONS(385), 10,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_DOT,
      anon_sym_DASH,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym__natural_number,
      anon_sym_BQUOTE,
  [18306] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(21), 1,
      sym_pipe,
    STATE(312), 1,
      sym_comment,
    ACTIONS(509), 5,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
      anon_sym__,
      sym__identifier,
    ACTIONS(507), 10,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_DOT,
      anon_sym_DASH,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym__natural_number,
      anon_sym_BQUOTE,
  [18335] = 13,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(469), 1,
      anon_sym_DASH,
    ACTIONS(471), 1,
      anon_sym_PLUS,
    ACTIONS(475), 1,
      anon_sym_STAR,
    ACTIONS(477), 1,
      anon_sym_SLASH,
    ACTIONS(479), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(483), 1,
      anon_sym_QMARK_QMARK,
    ACTIONS(485), 1,
      anon_sym_AMP_AMP,
    STATE(313), 1,
      sym_comment,
    ACTIONS(465), 2,
      anon_sym_RPAREN,
      anon_sym_PIPE_PIPE,
    ACTIONS(481), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(473), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
  [18380] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(1040), 1,
      anon_sym_RPAREN,
    STATE(314), 1,
      sym_comment,
    ACTIONS(423), 3,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(421), 11,
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
  [18411] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    STATE(315), 1,
      sym_comment,
    ACTIONS(423), 3,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(421), 12,
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
  [18440] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(1042), 1,
      anon_sym_EQ_GT,
    STATE(316), 1,
      sym_comment,
    ACTIONS(423), 3,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(421), 11,
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
  [18471] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(1044), 1,
      anon_sym_RPAREN,
    STATE(317), 1,
      sym_comment,
    ACTIONS(423), 3,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(421), 11,
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
  [18502] = 14,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(469), 1,
      anon_sym_DASH,
    ACTIONS(471), 1,
      anon_sym_PLUS,
    ACTIONS(475), 1,
      anon_sym_STAR,
    ACTIONS(477), 1,
      anon_sym_SLASH,
    ACTIONS(479), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(483), 1,
      anon_sym_QMARK_QMARK,
    ACTIONS(1034), 1,
      anon_sym_AMP_AMP,
    ACTIONS(1036), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(1046), 1,
      anon_sym_RPAREN,
    STATE(318), 1,
      sym_comment,
    ACTIONS(481), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(473), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
  [18549] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(21), 1,
      sym_pipe,
    STATE(319), 1,
      sym_comment,
    ACTIONS(172), 5,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
      anon_sym__,
      sym__identifier,
    ACTIONS(170), 10,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_DOT,
      anon_sym_DASH,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym__natural_number,
      anon_sym_BQUOTE,
  [18578] = 13,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(469), 1,
      anon_sym_DASH,
    ACTIONS(471), 1,
      anon_sym_PLUS,
    ACTIONS(475), 1,
      anon_sym_STAR,
    ACTIONS(477), 1,
      anon_sym_SLASH,
    ACTIONS(479), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(483), 1,
      anon_sym_QMARK_QMARK,
    ACTIONS(1034), 1,
      anon_sym_AMP_AMP,
    ACTIONS(1036), 1,
      anon_sym_PIPE_PIPE,
    STATE(320), 1,
      sym_comment,
    ACTIONS(481), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(473), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
  [18622] = 13,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(469), 1,
      anon_sym_DASH,
    ACTIONS(471), 1,
      anon_sym_PLUS,
    ACTIONS(475), 1,
      anon_sym_STAR,
    ACTIONS(477), 1,
      anon_sym_SLASH,
    ACTIONS(479), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(483), 1,
      anon_sym_QMARK_QMARK,
    ACTIONS(485), 1,
      anon_sym_AMP_AMP,
    ACTIONS(515), 1,
      anon_sym_PIPE_PIPE,
    STATE(321), 1,
      sym_comment,
    ACTIONS(481), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(473), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
  [18666] = 12,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(9), 1,
      sym_keyword_from,
    ACTIONS(11), 1,
      sym_keyword_mod,
    ACTIONS(13), 1,
      sym_keyword_func,
    ACTIONS(19), 1,
      sym_keyword_from_text,
    ACTIONS(21), 1,
      sym_pipe,
    ACTIONS(1048), 1,
      sym_keyword_let,
    ACTIONS(1050), 1,
      anon_sym_RBRACE,
    STATE(322), 1,
      sym_comment,
    STATE(325), 1,
      aux_sym_module_definition_repeat1,
    STATE(148), 2,
      sym_from_text,
      sym_from,
    STATE(374), 4,
      sym_pipeline,
      sym_variable,
      sym_function_definition,
      sym_module_definition,
  [18707] = 11,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(21), 1,
      sym_pipe,
    ACTIONS(1052), 1,
      ts_builtin_sym_end,
    ACTIONS(1054), 1,
      sym_keyword_from,
    ACTIONS(1057), 1,
      sym_keyword_mod,
    ACTIONS(1060), 1,
      sym_keyword_func,
    ACTIONS(1063), 1,
      sym_keyword_let,
    ACTIONS(1066), 1,
      sym_keyword_from_text,
    STATE(147), 2,
      sym_from_text,
      sym_from,
    STATE(323), 2,
      sym_comment,
      aux_sym_program_repeat2,
    STATE(376), 4,
      sym_pipeline,
      sym_variable,
      sym_function_definition,
      sym_module_definition,
  [18746] = 12,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(9), 1,
      sym_keyword_from,
    ACTIONS(11), 1,
      sym_keyword_mod,
    ACTIONS(13), 1,
      sym_keyword_func,
    ACTIONS(15), 1,
      sym_keyword_let,
    ACTIONS(19), 1,
      sym_keyword_from_text,
    ACTIONS(21), 1,
      sym_pipe,
    ACTIONS(1016), 1,
      ts_builtin_sym_end,
    STATE(323), 1,
      aux_sym_program_repeat2,
    STATE(324), 1,
      sym_comment,
    STATE(147), 2,
      sym_from_text,
      sym_from,
    STATE(376), 4,
      sym_pipeline,
      sym_variable,
      sym_function_definition,
      sym_module_definition,
  [18787] = 11,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(21), 1,
      sym_pipe,
    ACTIONS(1069), 1,
      sym_keyword_from,
    ACTIONS(1072), 1,
      sym_keyword_mod,
    ACTIONS(1075), 1,
      sym_keyword_func,
    ACTIONS(1078), 1,
      sym_keyword_let,
    ACTIONS(1081), 1,
      sym_keyword_from_text,
    ACTIONS(1084), 1,
      anon_sym_RBRACE,
    STATE(148), 2,
      sym_from_text,
      sym_from,
    STATE(325), 2,
      sym_comment,
      aux_sym_module_definition_repeat1,
    STATE(374), 4,
      sym_pipeline,
      sym_variable,
      sym_function_definition,
      sym_module_definition,
  [18826] = 12,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(9), 1,
      sym_keyword_from,
    ACTIONS(11), 1,
      sym_keyword_mod,
    ACTIONS(13), 1,
      sym_keyword_func,
    ACTIONS(15), 1,
      sym_keyword_let,
    ACTIONS(19), 1,
      sym_keyword_from_text,
    ACTIONS(21), 1,
      sym_pipe,
    ACTIONS(1086), 1,
      ts_builtin_sym_end,
    STATE(323), 1,
      aux_sym_program_repeat2,
    STATE(326), 1,
      sym_comment,
    STATE(147), 2,
      sym_from_text,
      sym_from,
    STATE(376), 4,
      sym_pipeline,
      sym_variable,
      sym_function_definition,
      sym_module_definition,
  [18867] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(21), 1,
      sym_pipe,
    STATE(327), 1,
      sym_comment,
    STATE(368), 1,
      sym_target,
    ACTIONS(1088), 11,
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
  [18893] = 11,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(9), 1,
      sym_keyword_from,
    ACTIONS(11), 1,
      sym_keyword_mod,
    ACTIONS(13), 1,
      sym_keyword_func,
    ACTIONS(19), 1,
      sym_keyword_from_text,
    ACTIONS(21), 1,
      sym_pipe,
    ACTIONS(1048), 1,
      sym_keyword_let,
    STATE(322), 1,
      aux_sym_module_definition_repeat1,
    STATE(328), 1,
      sym_comment,
    STATE(148), 2,
      sym_from_text,
      sym_from,
    STATE(374), 4,
      sym_pipeline,
      sym_variable,
      sym_function_definition,
      sym_module_definition,
  [18931] = 10,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(21), 1,
      sym_pipe,
    ACTIONS(586), 1,
      sym_keyword_aggregate,
    ACTIONS(588), 1,
      sym_keyword_sort,
    ACTIONS(590), 1,
      sym_keyword_take,
    ACTIONS(1090), 1,
      sym_keyword_window,
    ACTIONS(1092), 1,
      anon_sym_RPAREN,
    STATE(329), 1,
      sym_comment,
    STATE(332), 1,
      aux_sym_group_repeat2,
    STATE(391), 4,
      sym_aggregate,
      sym_sorts,
      sym_takes,
      sym_window,
  [18965] = 10,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(21), 1,
      sym_pipe,
    ACTIONS(586), 1,
      sym_keyword_aggregate,
    ACTIONS(588), 1,
      sym_keyword_sort,
    ACTIONS(590), 1,
      sym_keyword_take,
    ACTIONS(1090), 1,
      sym_keyword_window,
    ACTIONS(1094), 1,
      anon_sym_RPAREN,
    STATE(330), 1,
      sym_comment,
    STATE(332), 1,
      aux_sym_group_repeat2,
    STATE(391), 4,
      sym_aggregate,
      sym_sorts,
      sym_takes,
      sym_window,
  [18999] = 10,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(21), 1,
      sym_pipe,
    ACTIONS(586), 1,
      sym_keyword_aggregate,
    ACTIONS(588), 1,
      sym_keyword_sort,
    ACTIONS(590), 1,
      sym_keyword_take,
    ACTIONS(1090), 1,
      sym_keyword_window,
    ACTIONS(1096), 1,
      anon_sym_RPAREN,
    STATE(331), 1,
      sym_comment,
    STATE(332), 1,
      aux_sym_group_repeat2,
    STATE(391), 4,
      sym_aggregate,
      sym_sorts,
      sym_takes,
      sym_window,
  [19033] = 9,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(21), 1,
      sym_pipe,
    ACTIONS(1098), 1,
      sym_keyword_aggregate,
    ACTIONS(1101), 1,
      sym_keyword_sort,
    ACTIONS(1104), 1,
      sym_keyword_take,
    ACTIONS(1107), 1,
      sym_keyword_window,
    ACTIONS(1110), 1,
      anon_sym_RPAREN,
    STATE(332), 2,
      sym_comment,
      aux_sym_group_repeat2,
    STATE(391), 4,
      sym_aggregate,
      sym_sorts,
      sym_takes,
      sym_window,
  [19065] = 10,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(21), 1,
      sym_pipe,
    ACTIONS(586), 1,
      sym_keyword_aggregate,
    ACTIONS(588), 1,
      sym_keyword_sort,
    ACTIONS(590), 1,
      sym_keyword_take,
    ACTIONS(1090), 1,
      sym_keyword_window,
    ACTIONS(1112), 1,
      anon_sym_RPAREN,
    STATE(332), 1,
      aux_sym_group_repeat2,
    STATE(333), 1,
      sym_comment,
    STATE(391), 4,
      sym_aggregate,
      sym_sorts,
      sym_takes,
      sym_window,
  [19099] = 10,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(21), 1,
      sym_pipe,
    ACTIONS(586), 1,
      sym_keyword_aggregate,
    ACTIONS(588), 1,
      sym_keyword_sort,
    ACTIONS(590), 1,
      sym_keyword_take,
    ACTIONS(1090), 1,
      sym_keyword_window,
    ACTIONS(1114), 1,
      anon_sym_RPAREN,
    STATE(332), 1,
      aux_sym_group_repeat2,
    STATE(334), 1,
      sym_comment,
    STATE(391), 4,
      sym_aggregate,
      sym_sorts,
      sym_takes,
      sym_window,
  [19133] = 11,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(21), 1,
      sym_pipe,
    ACTIONS(1116), 1,
      anon_sym_COMMA,
    ACTIONS(1118), 1,
      anon_sym_RBRACE,
    ACTIONS(1120), 1,
      anon_sym_BQUOTE,
    ACTIONS(1122), 1,
      sym__identifier,
    STATE(215), 1,
      sym_identifier,
    STATE(335), 1,
      sym_comment,
    STATE(418), 1,
      sym_direction,
    STATE(447), 1,
      sym__sort_instruction,
    ACTIONS(283), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
  [19168] = 7,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(21), 1,
      sym_pipe,
    ACTIONS(1126), 1,
      sym_keyword_from,
    ACTIONS(1128), 1,
      sym_keyword_prql,
    STATE(358), 1,
      sym_prql,
    STATE(336), 2,
      sym_comment,
      aux_sym_program_repeat1,
    ACTIONS(1124), 5,
      ts_builtin_sym_end,
      sym_keyword_mod,
      sym_keyword_func,
      sym_keyword_let,
      sym_keyword_from_text,
  [19195] = 9,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(21), 1,
      sym_pipe,
    ACTIONS(586), 1,
      sym_keyword_aggregate,
    ACTIONS(588), 1,
      sym_keyword_sort,
    ACTIONS(590), 1,
      sym_keyword_take,
    ACTIONS(1090), 1,
      sym_keyword_window,
    STATE(330), 1,
      aux_sym_group_repeat2,
    STATE(337), 1,
      sym_comment,
    STATE(391), 4,
      sym_aggregate,
      sym_sorts,
      sym_takes,
      sym_window,
  [19226] = 9,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(21), 1,
      sym_pipe,
    ACTIONS(586), 1,
      sym_keyword_aggregate,
    ACTIONS(588), 1,
      sym_keyword_sort,
    ACTIONS(590), 1,
      sym_keyword_take,
    ACTIONS(1090), 1,
      sym_keyword_window,
    STATE(329), 1,
      aux_sym_group_repeat2,
    STATE(338), 1,
      sym_comment,
    STATE(391), 4,
      sym_aggregate,
      sym_sorts,
      sym_takes,
      sym_window,
  [19257] = 9,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(21), 1,
      sym_pipe,
    ACTIONS(586), 1,
      sym_keyword_aggregate,
    ACTIONS(588), 1,
      sym_keyword_sort,
    ACTIONS(590), 1,
      sym_keyword_take,
    ACTIONS(1090), 1,
      sym_keyword_window,
    STATE(334), 1,
      aux_sym_group_repeat2,
    STATE(339), 1,
      sym_comment,
    STATE(391), 4,
      sym_aggregate,
      sym_sorts,
      sym_takes,
      sym_window,
  [19288] = 9,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(21), 1,
      sym_pipe,
    ACTIONS(586), 1,
      sym_keyword_aggregate,
    ACTIONS(588), 1,
      sym_keyword_sort,
    ACTIONS(590), 1,
      sym_keyword_take,
    ACTIONS(1090), 1,
      sym_keyword_window,
    STATE(333), 1,
      aux_sym_group_repeat2,
    STATE(340), 1,
      sym_comment,
    STATE(391), 4,
      sym_aggregate,
      sym_sorts,
      sym_takes,
      sym_window,
  [19319] = 7,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(21), 1,
      sym_pipe,
    ACTIONS(1133), 1,
      sym_keyword_from,
    ACTIONS(1135), 1,
      anon_sym_DOT,
    STATE(341), 1,
      sym_comment,
    STATE(344), 1,
      aux_sym_module_call_repeat1,
    ACTIONS(1131), 6,
      ts_builtin_sym_end,
      sym_keyword_mod,
      sym_keyword_func,
      sym_keyword_let,
      sym_keyword_from_text,
      anon_sym_RBRACE,
  [19346] = 9,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(21), 1,
      sym_pipe,
    ACTIONS(586), 1,
      sym_keyword_aggregate,
    ACTIONS(588), 1,
      sym_keyword_sort,
    ACTIONS(590), 1,
      sym_keyword_take,
    ACTIONS(1090), 1,
      sym_keyword_window,
    STATE(331), 1,
      aux_sym_group_repeat2,
    STATE(342), 1,
      sym_comment,
    STATE(391), 4,
      sym_aggregate,
      sym_sorts,
      sym_takes,
      sym_window,
  [19377] = 7,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(21), 1,
      sym_pipe,
    ACTIONS(1135), 1,
      anon_sym_DOT,
    ACTIONS(1139), 1,
      sym_keyword_from,
    STATE(341), 1,
      aux_sym_module_call_repeat1,
    STATE(343), 1,
      sym_comment,
    ACTIONS(1137), 6,
      ts_builtin_sym_end,
      sym_keyword_mod,
      sym_keyword_func,
      sym_keyword_let,
      sym_keyword_from_text,
      anon_sym_RBRACE,
  [19404] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(21), 1,
      sym_pipe,
    ACTIONS(1143), 1,
      sym_keyword_from,
    ACTIONS(1145), 1,
      anon_sym_DOT,
    STATE(344), 2,
      sym_comment,
      aux_sym_module_call_repeat1,
    ACTIONS(1141), 6,
      ts_builtin_sym_end,
      sym_keyword_mod,
      sym_keyword_func,
      sym_keyword_let,
      sym_keyword_from_text,
      anon_sym_RBRACE,
  [19429] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(21), 1,
      sym_pipe,
    ACTIONS(1150), 1,
      sym_keyword_from,
    STATE(345), 1,
      sym_comment,
    ACTIONS(1148), 8,
      ts_builtin_sym_end,
      sym_keyword_mod,
      sym_keyword_func,
      sym_keyword_let,
      sym_keyword_from_text,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
  [19452] = 10,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(21), 1,
      sym_pipe,
    ACTIONS(1120), 1,
      anon_sym_BQUOTE,
    ACTIONS(1122), 1,
      sym__identifier,
    ACTIONS(1152), 1,
      anon_sym_RBRACE,
    STATE(215), 1,
      sym_identifier,
    STATE(346), 1,
      sym_comment,
    STATE(418), 1,
      sym_direction,
    STATE(468), 1,
      sym__sort_instruction,
    ACTIONS(283), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
  [19484] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(21), 1,
      sym_pipe,
    ACTIONS(377), 1,
      sym_keyword_from,
    STATE(347), 1,
      sym_comment,
    ACTIONS(375), 7,
      ts_builtin_sym_end,
      sym_keyword_mod,
      sym_keyword_func,
      sym_keyword_let,
      sym_keyword_prql,
      sym_keyword_from_text,
      anon_sym_COMMA,
  [19506] = 10,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(21), 1,
      sym_pipe,
    ACTIONS(1120), 1,
      anon_sym_BQUOTE,
    ACTIONS(1122), 1,
      sym__identifier,
    ACTIONS(1154), 1,
      anon_sym_LBRACE,
    STATE(213), 1,
      sym__sort_instruction,
    STATE(215), 1,
      sym_identifier,
    STATE(348), 1,
      sym_comment,
    STATE(418), 1,
      sym_direction,
    ACTIONS(283), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
  [19538] = 10,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(21), 1,
      sym_pipe,
    ACTIONS(1156), 1,
      anon_sym_DASH,
    ACTIONS(1158), 1,
      anon_sym_AT,
    STATE(149), 1,
      aux_sym__friendly_number,
    STATE(210), 1,
      sym_integer,
    STATE(219), 1,
      sym_range,
    STATE(349), 1,
      sym_comment,
    STATE(498), 1,
      sym_date,
    ACTIONS(562), 2,
      sym__natural_number,
      anon_sym__,
  [19570] = 10,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(21), 1,
      sym_pipe,
    ACTIONS(1156), 1,
      anon_sym_DASH,
    ACTIONS(1158), 1,
      anon_sym_AT,
    STATE(149), 1,
      aux_sym__friendly_number,
    STATE(350), 1,
      sym_comment,
    STATE(381), 1,
      sym_integer,
    STATE(413), 1,
      sym_range,
    STATE(498), 1,
      sym_date,
    ACTIONS(562), 2,
      sym__natural_number,
      anon_sym__,
  [19602] = 10,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(21), 1,
      sym_pipe,
    ACTIONS(1120), 1,
      anon_sym_BQUOTE,
    ACTIONS(1122), 1,
      sym__identifier,
    ACTIONS(1160), 1,
      anon_sym_RBRACE,
    STATE(215), 1,
      sym_identifier,
    STATE(351), 1,
      sym_comment,
    STATE(418), 1,
      sym_direction,
    STATE(468), 1,
      sym__sort_instruction,
    ACTIONS(283), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
  [19634] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(21), 1,
      sym_pipe,
    ACTIONS(1164), 1,
      sym_keyword_from,
    STATE(352), 1,
      sym_comment,
    ACTIONS(1162), 7,
      ts_builtin_sym_end,
      sym_keyword_mod,
      sym_keyword_func,
      sym_keyword_let,
      sym_keyword_from_text,
      anon_sym_RBRACE,
      anon_sym_DOT,
  [19656] = 10,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(21), 1,
      sym_pipe,
    ACTIONS(1120), 1,
      anon_sym_BQUOTE,
    ACTIONS(1166), 1,
      sym_keyword_from_text,
    ACTIONS(1168), 1,
      anon_sym_LPAREN,
    ACTIONS(1170), 1,
      sym__identifier,
    STATE(137), 1,
      sym_from_text,
    STATE(353), 1,
      sym_comment,
    STATE(366), 1,
      sym_module_call,
    STATE(482), 1,
      sym_identifier,
  [19687] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(21), 1,
      sym_pipe,
    ACTIONS(1174), 1,
      sym_keyword_from,
    STATE(354), 1,
      sym_comment,
    ACTIONS(1172), 6,
      ts_builtin_sym_end,
      sym_keyword_mod,
      sym_keyword_func,
      sym_keyword_let,
      sym_keyword_from_text,
      anon_sym_RBRACE,
  [19708] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(21), 1,
      sym_pipe,
    ACTIONS(1178), 1,
      sym_keyword_from,
    STATE(355), 1,
      sym_comment,
    ACTIONS(1176), 6,
      ts_builtin_sym_end,
      sym_keyword_mod,
      sym_keyword_func,
      sym_keyword_let,
      sym_keyword_from_text,
      anon_sym_RBRACE,
  [19729] = 9,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(21), 1,
      sym_pipe,
    ACTIONS(1120), 1,
      anon_sym_BQUOTE,
    ACTIONS(1122), 1,
      sym__identifier,
    STATE(215), 1,
      sym_identifier,
    STATE(356), 1,
      sym_comment,
    STATE(418), 1,
      sym_direction,
    STATE(468), 1,
      sym__sort_instruction,
    ACTIONS(283), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
  [19758] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(21), 1,
      sym_pipe,
    ACTIONS(1182), 1,
      sym_keyword_from,
    STATE(357), 1,
      sym_comment,
    ACTIONS(1180), 6,
      ts_builtin_sym_end,
      sym_keyword_mod,
      sym_keyword_func,
      sym_keyword_let,
      sym_keyword_prql,
      sym_keyword_from_text,
  [19779] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(21), 1,
      sym_pipe,
    ACTIONS(1186), 1,
      sym_keyword_from,
    STATE(358), 1,
      sym_comment,
    ACTIONS(1184), 6,
      ts_builtin_sym_end,
      sym_keyword_mod,
      sym_keyword_func,
      sym_keyword_let,
      sym_keyword_prql,
      sym_keyword_from_text,
  [19800] = 7,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(21), 1,
      sym_pipe,
    ACTIONS(141), 1,
      sym__identifier,
    ACTIONS(1188), 1,
      sym__natural_number,
    ACTIONS(1191), 1,
      anon_sym__,
    STATE(359), 2,
      aux_sym__friendly_number,
      sym_comment,
    ACTIONS(139), 3,
      anon_sym_DASH_GT,
      anon_sym_DOT,
      anon_sym_BQUOTE,
  [19825] = 8,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(21), 1,
      sym_pipe,
    ACTIONS(148), 1,
      sym__identifier,
    ACTIONS(1004), 1,
      sym__natural_number,
    ACTIONS(1194), 1,
      anon_sym__,
    STATE(359), 1,
      aux_sym__friendly_number,
    STATE(360), 1,
      sym_comment,
    ACTIONS(146), 3,
      anon_sym_DASH_GT,
      anon_sym_DOT,
      anon_sym_BQUOTE,
  [19852] = 10,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(21), 1,
      sym_pipe,
    ACTIONS(1120), 1,
      anon_sym_BQUOTE,
    ACTIONS(1170), 1,
      sym__identifier,
    ACTIONS(1196), 1,
      sym_keyword_side,
    STATE(209), 1,
      sym__table_selection,
    STATE(212), 1,
      sym_identifier,
    STATE(231), 1,
      sym__table_reference,
    STATE(361), 1,
      sym_comment,
    STATE(379), 1,
      sym__join_definition,
  [19883] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(21), 1,
      sym_pipe,
    ACTIONS(1200), 1,
      sym_keyword_from,
    STATE(362), 1,
      sym_comment,
    ACTIONS(1198), 6,
      ts_builtin_sym_end,
      sym_keyword_mod,
      sym_keyword_func,
      sym_keyword_let,
      sym_keyword_from_text,
      anon_sym_RBRACE,
  [19904] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(21), 1,
      sym_pipe,
    ACTIONS(1204), 1,
      sym_keyword_from,
    STATE(363), 1,
      sym_comment,
    ACTIONS(1202), 6,
      ts_builtin_sym_end,
      sym_keyword_mod,
      sym_keyword_func,
      sym_keyword_let,
      sym_keyword_prql,
      sym_keyword_from_text,
  [19925] = 10,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(21), 1,
      sym_pipe,
    ACTIONS(1120), 1,
      anon_sym_BQUOTE,
    ACTIONS(1166), 1,
      sym_keyword_from_text,
    ACTIONS(1168), 1,
      anon_sym_LPAREN,
    ACTIONS(1170), 1,
      sym__identifier,
    STATE(150), 1,
      sym_from_text,
    STATE(364), 1,
      sym_comment,
    STATE(366), 1,
      sym_module_call,
    STATE(482), 1,
      sym_identifier,
  [19956] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(21), 1,
      sym_pipe,
    ACTIONS(1208), 1,
      sym_keyword_from,
    STATE(365), 1,
      sym_comment,
    ACTIONS(1206), 6,
      ts_builtin_sym_end,
      sym_keyword_mod,
      sym_keyword_func,
      sym_keyword_let,
      sym_keyword_from_text,
      anon_sym_RBRACE,
  [19977] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(21), 1,
      sym_pipe,
    ACTIONS(578), 1,
      sym_keyword_from,
    STATE(366), 1,
      sym_comment,
    ACTIONS(576), 6,
      ts_builtin_sym_end,
      sym_keyword_mod,
      sym_keyword_func,
      sym_keyword_let,
      sym_keyword_from_text,
      anon_sym_RBRACE,
  [19998] = 8,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(21), 1,
      sym_pipe,
    ACTIONS(156), 1,
      sym__identifier,
    ACTIONS(1004), 1,
      sym__natural_number,
    ACTIONS(1194), 1,
      anon_sym__,
    STATE(359), 1,
      aux_sym__friendly_number,
    STATE(367), 1,
      sym_comment,
    ACTIONS(154), 3,
      anon_sym_DASH_GT,
      anon_sym_DOT,
      anon_sym_BQUOTE,
  [20025] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(21), 1,
      sym_pipe,
    ACTIONS(1212), 1,
      sym_keyword_from,
    STATE(368), 1,
      sym_comment,
    ACTIONS(1210), 6,
      ts_builtin_sym_end,
      sym_keyword_mod,
      sym_keyword_func,
      sym_keyword_let,
      sym_keyword_prql,
      sym_keyword_from_text,
  [20046] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(21), 1,
      sym_pipe,
    ACTIONS(1217), 1,
      anon_sym_LPAREN,
    STATE(402), 1,
      sym__window_definition,
    STATE(369), 2,
      sym_comment,
      aux_sym_window_definitions_repeat1,
    ACTIONS(1214), 3,
      sym_keyword_rolling,
      sym_keyword_rows,
      sym_keyword_expanding,
  [20068] = 8,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(9), 1,
      sym_keyword_from,
    ACTIONS(19), 1,
      sym_keyword_from_text,
    ACTIONS(21), 1,
      sym_pipe,
    ACTIONS(1219), 1,
      anon_sym_RPAREN,
    STATE(370), 1,
      sym_comment,
    STATE(420), 1,
      sym_pipeline,
    STATE(188), 2,
      sym_from_text,
      sym_from,
  [20094] = 8,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(21), 1,
      sym_pipe,
    ACTIONS(1221), 1,
      anon_sym_DASH_GT,
    ACTIONS(1223), 1,
      anon_sym_BQUOTE,
    ACTIONS(1226), 1,
      sym__identifier,
    STATE(400), 1,
      sym_identifier,
    STATE(455), 1,
      sym_parameter,
    STATE(371), 2,
      sym_comment,
      aux_sym_function_definition_repeat1,
  [20120] = 7,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(21), 1,
      sym_pipe,
    STATE(372), 1,
      sym_comment,
    STATE(377), 1,
      aux_sym_window_definitions_repeat1,
    STATE(402), 1,
      sym__window_definition,
    STATE(527), 1,
      sym_window_definitions,
    ACTIONS(1229), 3,
      sym_keyword_rolling,
      sym_keyword_rows,
      sym_keyword_expanding,
  [20144] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(21), 1,
      sym_pipe,
    STATE(373), 1,
      sym_comment,
    ACTIONS(172), 2,
      anon_sym__,
      sym__identifier,
    ACTIONS(170), 4,
      anon_sym_DASH_GT,
      anon_sym_DOT,
      sym__natural_number,
      anon_sym_BQUOTE,
  [20164] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(21), 1,
      sym_pipe,
    ACTIONS(1231), 1,
      sym_keyword_from,
    STATE(374), 1,
      sym_comment,
    ACTIONS(1233), 5,
      sym_keyword_mod,
      sym_keyword_func,
      sym_keyword_let,
      sym_keyword_from_text,
      anon_sym_RBRACE,
  [20184] = 9,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(21), 1,
      sym_pipe,
    ACTIONS(1235), 1,
      anon_sym_DASH_GT,
    ACTIONS(1237), 1,
      anon_sym_BQUOTE,
    ACTIONS(1239), 1,
      sym__identifier,
    STATE(371), 1,
      aux_sym_function_definition_repeat1,
    STATE(375), 1,
      sym_comment,
    STATE(400), 1,
      sym_identifier,
    STATE(455), 1,
      sym_parameter,
  [20212] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(21), 1,
      sym_pipe,
    ACTIONS(1243), 1,
      sym_keyword_from,
    STATE(376), 1,
      sym_comment,
    ACTIONS(1241), 5,
      ts_builtin_sym_end,
      sym_keyword_mod,
      sym_keyword_func,
      sym_keyword_let,
      sym_keyword_from_text,
  [20232] = 7,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(21), 1,
      sym_pipe,
    ACTIONS(1245), 1,
      anon_sym_LPAREN,
    STATE(369), 1,
      aux_sym_window_definitions_repeat1,
    STATE(377), 1,
      sym_comment,
    STATE(402), 1,
      sym__window_definition,
    ACTIONS(1229), 3,
      sym_keyword_rolling,
      sym_keyword_rows,
      sym_keyword_expanding,
  [20256] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(21), 1,
      sym_pipe,
    STATE(378), 1,
      sym_comment,
    STATE(382), 1,
      aux_sym__friendly_number,
    ACTIONS(154), 2,
      anon_sym_COMMA,
      anon_sym_DOT,
    ACTIONS(1022), 2,
      sym__natural_number,
      anon_sym__,
  [20277] = 8,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(21), 1,
      sym_pipe,
    ACTIONS(1120), 1,
      anon_sym_BQUOTE,
    ACTIONS(1122), 1,
      sym__identifier,
    STATE(211), 1,
      sym__table_selection,
    STATE(212), 1,
      sym_identifier,
    STATE(231), 1,
      sym__table_reference,
    STATE(379), 1,
      sym_comment,
  [20302] = 7,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(9), 1,
      sym_keyword_from,
    ACTIONS(19), 1,
      sym_keyword_from_text,
    ACTIONS(21), 1,
      sym_pipe,
    STATE(380), 1,
      sym_comment,
    STATE(464), 1,
      sym_pipeline,
    STATE(188), 2,
      sym_from_text,
      sym_from,
  [20325] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(21), 1,
      sym_pipe,
    ACTIONS(734), 1,
      anon_sym_DOT_DOT,
    STATE(381), 1,
      sym_comment,
    ACTIONS(1247), 4,
      sym_keyword_rolling,
      sym_keyword_rows,
      sym_keyword_expanding,
      anon_sym_LPAREN,
  [20344] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(21), 1,
      sym_pipe,
    ACTIONS(139), 2,
      anon_sym_COMMA,
      anon_sym_DOT,
    ACTIONS(1249), 2,
      sym__natural_number,
      anon_sym__,
    STATE(382), 2,
      aux_sym__friendly_number,
      sym_comment,
  [20363] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(21), 1,
      sym_pipe,
    STATE(382), 1,
      aux_sym__friendly_number,
    STATE(383), 1,
      sym_comment,
    ACTIONS(146), 2,
      anon_sym_COMMA,
      anon_sym_DOT,
    ACTIONS(1022), 2,
      sym__natural_number,
      anon_sym__,
  [20384] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(21), 1,
      sym_pipe,
    ACTIONS(1252), 1,
      sym__natural_number,
    STATE(384), 1,
      sym_comment,
    ACTIONS(385), 4,
      anon_sym_COMMA,
      anon_sym_DASH_GT,
      anon_sym_BQUOTE,
      sym__identifier,
  [20403] = 7,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(21), 1,
      sym_pipe,
    ACTIONS(1254), 1,
      anon_sym_DASH,
    STATE(17), 1,
      aux_sym__friendly_number,
    STATE(66), 1,
      sym_integer,
    STATE(385), 1,
      sym_comment,
    ACTIONS(53), 2,
      sym__natural_number,
      anon_sym__,
  [20426] = 8,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(21), 1,
      sym_pipe,
    ACTIONS(1120), 1,
      anon_sym_BQUOTE,
    ACTIONS(1122), 1,
      sym__identifier,
    STATE(212), 1,
      sym_identifier,
    STATE(231), 1,
      sym__table_reference,
    STATE(237), 1,
      sym__table_selection,
    STATE(386), 1,
      sym_comment,
  [20451] = 7,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(21), 1,
      sym_pipe,
    ACTIONS(1254), 1,
      anon_sym_DASH,
    STATE(17), 1,
      aux_sym__friendly_number,
    STATE(59), 1,
      sym_integer,
    STATE(387), 1,
      sym_comment,
    ACTIONS(53), 2,
      sym__natural_number,
      anon_sym__,
  [20474] = 8,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(21), 1,
      sym_pipe,
    ACTIONS(1120), 1,
      anon_sym_BQUOTE,
    ACTIONS(1122), 1,
      sym__identifier,
    STATE(212), 1,
      sym_identifier,
    STATE(231), 1,
      sym__table_reference,
    STATE(259), 1,
      sym__table_selection,
    STATE(388), 1,
      sym_comment,
  [20499] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(21), 1,
      sym_pipe,
    ACTIONS(1256), 1,
      anon_sym_DOT,
    STATE(389), 1,
      sym_comment,
    ACTIONS(407), 4,
      anon_sym_COMMA,
      anon_sym_DASH_GT,
      anon_sym_BQUOTE,
      sym__identifier,
  [20518] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(21), 1,
      sym_pipe,
    STATE(390), 1,
      sym_comment,
    ACTIONS(1258), 5,
      sym_keyword_aggregate,
      sym_keyword_sort,
      sym_keyword_take,
      sym_keyword_window,
      anon_sym_RPAREN,
  [20535] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(21), 1,
      sym_pipe,
    STATE(391), 1,
      sym_comment,
    ACTIONS(1260), 5,
      sym_keyword_aggregate,
      sym_keyword_sort,
      sym_keyword_take,
      sym_keyword_window,
      anon_sym_RPAREN,
  [20552] = 7,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(21), 1,
      sym_pipe,
    ACTIONS(1254), 1,
      anon_sym_DASH,
    STATE(17), 1,
      aux_sym__friendly_number,
    STATE(73), 1,
      sym_integer,
    STATE(392), 1,
      sym_comment,
    ACTIONS(53), 2,
      sym__natural_number,
      anon_sym__,
  [20575] = 8,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(21), 1,
      sym_pipe,
    ACTIONS(1237), 1,
      anon_sym_BQUOTE,
    ACTIONS(1239), 1,
      sym__identifier,
    STATE(375), 1,
      aux_sym_function_definition_repeat1,
    STATE(393), 1,
      sym_comment,
    STATE(400), 1,
      sym_identifier,
    STATE(455), 1,
      sym_parameter,
  [20600] = 7,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(21), 1,
      sym_pipe,
    ACTIONS(1156), 1,
      anon_sym_DASH,
    STATE(149), 1,
      aux_sym__friendly_number,
    STATE(187), 1,
      sym_integer,
    STATE(394), 1,
      sym_comment,
    ACTIONS(562), 2,
      sym__natural_number,
      anon_sym__,
  [20623] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(21), 1,
      sym_pipe,
    STATE(395), 1,
      sym_comment,
    ACTIONS(407), 4,
      anon_sym_COMMA,
      anon_sym_DASH_GT,
      anon_sym_BQUOTE,
      sym__identifier,
  [20639] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(21), 1,
      sym_pipe,
    STATE(396), 1,
      sym_comment,
    ACTIONS(168), 4,
      anon_sym_COLON,
      anon_sym_DASH_GT,
      anon_sym_BQUOTE,
      sym__identifier,
  [20655] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(21), 1,
      sym_pipe,
    ACTIONS(1262), 1,
      anon_sym_DOT,
    STATE(383), 1,
      aux_sym__friendly_number,
    STATE(397), 1,
      sym_comment,
    ACTIONS(1022), 2,
      sym__natural_number,
      anon_sym__,
  [20675] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(21), 1,
      sym_pipe,
    ACTIONS(1264), 1,
      anon_sym_DOT,
    STATE(142), 1,
      aux_sym__friendly_number,
    STATE(398), 1,
      sym_comment,
    ACTIONS(75), 2,
      sym__natural_number,
      anon_sym__,
  [20695] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(21), 1,
      sym_pipe,
    STATE(399), 1,
      sym_comment,
    ACTIONS(399), 4,
      anon_sym_COMMA,
      anon_sym_DASH_GT,
      anon_sym_BQUOTE,
      sym__identifier,
  [20711] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(21), 1,
      sym_pipe,
    ACTIONS(1266), 1,
      anon_sym_COLON,
    STATE(400), 1,
      sym_comment,
    ACTIONS(1268), 3,
      anon_sym_DASH_GT,
      anon_sym_BQUOTE,
      sym__identifier,
  [20729] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(21), 1,
      sym_pipe,
    ACTIONS(1270), 1,
      anon_sym_DOT,
    STATE(281), 1,
      aux_sym__friendly_number,
    STATE(401), 1,
      sym_comment,
    ACTIONS(449), 2,
      sym__natural_number,
      anon_sym__,
  [20749] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(21), 1,
      sym_pipe,
    STATE(402), 1,
      sym_comment,
    ACTIONS(1272), 4,
      sym_keyword_rolling,
      sym_keyword_rows,
      sym_keyword_expanding,
      anon_sym_LPAREN,
  [20765] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(21), 1,
      sym_pipe,
    STATE(403), 1,
      sym_comment,
    ACTIONS(164), 4,
      anon_sym_COLON,
      anon_sym_DASH_GT,
      anon_sym_BQUOTE,
      sym__identifier,
  [20781] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(21), 1,
      sym_pipe,
    STATE(404), 1,
      sym_comment,
    ACTIONS(170), 4,
      anon_sym_COMMA,
      anon_sym_DOT,
      sym__natural_number,
      anon_sym__,
  [20797] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(21), 1,
      sym_pipe,
    STATE(405), 1,
      sym_comment,
    ACTIONS(385), 4,
      anon_sym_COMMA,
      anon_sym_DASH_GT,
      anon_sym_BQUOTE,
      sym__identifier,
  [20813] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(21), 1,
      sym_pipe,
    STATE(406), 1,
      sym_comment,
    ACTIONS(1274), 4,
      sym_keyword_inner,
      sym_keyword_left,
      sym_keyword_right,
      sym_keyword_full,
  [20829] = 7,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(21), 1,
      sym_pipe,
    ACTIONS(1120), 1,
      anon_sym_BQUOTE,
    ACTIONS(1122), 1,
      sym__identifier,
    STATE(223), 1,
      sym_identifier,
    STATE(224), 1,
      sym__table_reference,
    STATE(407), 1,
      sym_comment,
  [20851] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(21), 1,
      sym_pipe,
    ACTIONS(1276), 1,
      anon_sym_DOT,
    STATE(184), 1,
      aux_sym__friendly_number,
    STATE(408), 1,
      sym_comment,
    ACTIONS(131), 2,
      sym__natural_number,
      anon_sym__,
  [20871] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(21), 1,
      sym_pipe,
    STATE(409), 1,
      sym_comment,
    ACTIONS(507), 4,
      anon_sym_COMMA,
      anon_sym_DASH_GT,
      anon_sym_BQUOTE,
      sym__identifier,
  [20887] = 7,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(21), 1,
      sym_pipe,
    ACTIONS(1278), 1,
      aux_sym__date_token1,
    ACTIONS(1280), 1,
      aux_sym__time_token1,
    STATE(68), 1,
      sym__date,
    STATE(84), 1,
      sym__time,
    STATE(410), 1,
      sym_comment,
  [20909] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(21), 1,
      sym_pipe,
    STATE(411), 1,
      sym_comment,
    ACTIONS(503), 4,
      anon_sym_COMMA,
      anon_sym_DASH_GT,
      anon_sym_BQUOTE,
      sym__identifier,
  [20925] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(21), 1,
      sym_pipe,
    ACTIONS(1282), 1,
      anon_sym_DOT,
    STATE(133), 1,
      aux_sym__friendly_number,
    STATE(412), 1,
      sym_comment,
    ACTIONS(95), 2,
      sym__natural_number,
      anon_sym__,
  [20945] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(21), 1,
      sym_pipe,
    STATE(413), 1,
      sym_comment,
    ACTIONS(1247), 4,
      sym_keyword_rolling,
      sym_keyword_rows,
      sym_keyword_expanding,
      anon_sym_LPAREN,
  [20961] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(21), 1,
      sym_pipe,
    ACTIONS(1284), 1,
      anon_sym_DOT,
    STATE(15), 1,
      aux_sym__friendly_number,
    STATE(414), 1,
      sym_comment,
    ACTIONS(53), 2,
      sym__natural_number,
      anon_sym__,
  [20981] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(21), 1,
      sym_pipe,
    ACTIONS(1262), 1,
      anon_sym_DOT,
    STATE(360), 1,
      aux_sym__friendly_number,
    STATE(415), 1,
      sym_comment,
    ACTIONS(1004), 2,
      sym__natural_number,
      anon_sym__,
  [21001] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(21), 1,
      sym_pipe,
    ACTIONS(1286), 1,
      anon_sym_COMMA,
    ACTIONS(1288), 1,
      anon_sym_RPAREN,
    STATE(416), 1,
      sym_comment,
    STATE(446), 1,
      aux_sym_variable_repeat1,
  [21020] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(21), 1,
      sym_pipe,
    ACTIONS(85), 1,
      anon_sym_RBRACE,
    ACTIONS(1290), 1,
      anon_sym_COMMA,
    STATE(417), 1,
      sym_comment,
    STATE(427), 1,
      aux_sym_aggregate_repeat1,
  [21039] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(21), 1,
      sym_pipe,
    ACTIONS(1120), 1,
      anon_sym_BQUOTE,
    ACTIONS(1122), 1,
      sym__identifier,
    STATE(230), 1,
      sym_identifier,
    STATE(418), 1,
      sym_comment,
  [21058] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(21), 1,
      sym_pipe,
    ACTIONS(1292), 1,
      anon_sym_COMMA,
    ACTIONS(1295), 1,
      anon_sym_RBRACE,
    STATE(419), 2,
      sym_comment,
      aux_sym__tuples_repeat1,
  [21075] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(21), 1,
      sym_pipe,
    ACTIONS(1286), 1,
      anon_sym_COMMA,
    ACTIONS(1297), 1,
      anon_sym_RPAREN,
    STATE(416), 1,
      aux_sym_variable_repeat1,
    STATE(420), 1,
      sym_comment,
  [21094] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(21), 1,
      sym_pipe,
    STATE(132), 1,
      aux_sym__friendly_number,
    STATE(421), 1,
      sym_comment,
    ACTIONS(562), 2,
      sym__natural_number,
      anon_sym__,
  [21111] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(21), 1,
      sym_pipe,
    ACTIONS(1299), 1,
      anon_sym_COMMA,
    ACTIONS(1302), 1,
      anon_sym_RBRACE,
    STATE(422), 2,
      sym_comment,
      aux_sym_sorts_repeat1,
  [21128] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(21), 1,
      sym_pipe,
    ACTIONS(1120), 1,
      anon_sym_BQUOTE,
    ACTIONS(1122), 1,
      sym__identifier,
    STATE(343), 1,
      sym_identifier,
    STATE(423), 1,
      sym_comment,
  [21147] = 5,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(1304), 1,
      aux_sym__inner_triple_quotes_token1,
    ACTIONS(1307), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(1309), 1,
      anon_sym_POUND,
    STATE(424), 2,
      aux_sym__inner_triple_quotes,
      sym_comment,
  [21164] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(21), 1,
      sym_pipe,
    ACTIONS(1311), 1,
      anon_sym_COMMA,
    ACTIONS(1313), 1,
      anon_sym_RBRACE,
    STATE(419), 1,
      aux_sym__tuples_repeat1,
    STATE(425), 1,
      sym_comment,
  [21183] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(21), 1,
      sym_pipe,
    ACTIONS(980), 1,
      anon_sym_COMMA,
    ACTIONS(1315), 1,
      anon_sym_RPAREN,
    STATE(426), 1,
      sym_comment,
    STATE(440), 1,
      aux_sym_conditions_repeat1,
  [21202] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(21), 1,
      sym_pipe,
    ACTIONS(984), 1,
      anon_sym_RBRACE,
    ACTIONS(1317), 1,
      anon_sym_COMMA,
    STATE(427), 2,
      sym_comment,
      aux_sym_aggregate_repeat1,
  [21219] = 6,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(1309), 1,
      anon_sym_POUND,
    ACTIONS(1320), 1,
      aux_sym__inner_triple_quotes_token1,
    ACTIONS(1322), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    STATE(424), 1,
      aux_sym__inner_triple_quotes,
    STATE(428), 1,
      sym_comment,
  [21238] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(21), 1,
      sym_pipe,
    ACTIONS(1324), 1,
      anon_sym_COMMA,
    ACTIONS(1326), 1,
      anon_sym_RBRACE,
    STATE(429), 1,
      sym_comment,
    STATE(454), 1,
      aux_sym_group_repeat1,
  [21257] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(21), 1,
      sym_pipe,
    STATE(430), 1,
      sym_comment,
    ACTIONS(1328), 3,
      anon_sym_BQUOTE,
      sym__identifier,
      aux_sym__date_token2,
  [21272] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(21), 1,
      sym_pipe,
    STATE(431), 1,
      sym_comment,
    ACTIONS(375), 3,
      anon_sym_DASH_GT,
      anon_sym_BQUOTE,
      sym__identifier,
  [21287] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(21), 1,
      sym_pipe,
    ACTIONS(235), 1,
      anon_sym_RBRACE,
    ACTIONS(1330), 1,
      anon_sym_COMMA,
    STATE(432), 2,
      sym_comment,
      aux_sym_case_repeat2,
  [21304] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(21), 1,
      sym_pipe,
    ACTIONS(1333), 1,
      sym_keyword_format,
    ACTIONS(1335), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    STATE(258), 1,
      sym__triple_quote_string,
    STATE(433), 1,
      sym_comment,
  [21323] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(21), 1,
      sym_pipe,
    ACTIONS(259), 1,
      anon_sym_RBRACE,
    ACTIONS(1337), 1,
      anon_sym_COMMA,
    STATE(434), 1,
      sym_comment,
    STATE(438), 1,
      aux_sym_group_repeat1,
  [21342] = 6,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(1309), 1,
      anon_sym_POUND,
    ACTIONS(1320), 1,
      aux_sym__inner_triple_quotes_token1,
    ACTIONS(1339), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    STATE(424), 1,
      aux_sym__inner_triple_quotes,
    STATE(435), 1,
      sym_comment,
  [21361] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(21), 1,
      sym_pipe,
    ACTIONS(259), 1,
      anon_sym_RBRACE,
    ACTIONS(1337), 1,
      anon_sym_COMMA,
    STATE(436), 1,
      sym_comment,
    STATE(441), 1,
      aux_sym_group_repeat1,
  [21380] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(21), 1,
      sym_pipe,
    ACTIONS(976), 1,
      anon_sym_COMMA,
    ACTIONS(978), 1,
      anon_sym_RBRACE,
    STATE(417), 1,
      aux_sym_aggregate_repeat1,
    STATE(437), 1,
      sym_comment,
  [21399] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(21), 1,
      sym_pipe,
    ACTIONS(269), 1,
      anon_sym_RBRACE,
    ACTIONS(1341), 1,
      anon_sym_COMMA,
    STATE(438), 1,
      sym_comment,
    STATE(441), 1,
      aux_sym_group_repeat1,
  [21418] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(21), 1,
      sym_pipe,
    ACTIONS(57), 1,
      anon_sym_BQUOTE,
    ACTIONS(1343), 1,
      sym__identifier,
    STATE(107), 1,
      sym_identifier,
    STATE(439), 1,
      sym_comment,
  [21437] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(21), 1,
      sym_pipe,
    ACTIONS(1008), 1,
      anon_sym_RPAREN,
    ACTIONS(1345), 1,
      anon_sym_COMMA,
    STATE(440), 2,
      sym_comment,
      aux_sym_conditions_repeat1,
  [21454] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(21), 1,
      sym_pipe,
    ACTIONS(1348), 1,
      anon_sym_COMMA,
    ACTIONS(1351), 1,
      anon_sym_RBRACE,
    STATE(441), 2,
      sym_comment,
      aux_sym_group_repeat1,
  [21471] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(21), 1,
      sym_pipe,
    ACTIONS(293), 1,
      anon_sym_RBRACE,
    ACTIONS(1353), 1,
      anon_sym_COMMA,
    STATE(432), 1,
      aux_sym_case_repeat2,
    STATE(442), 1,
      sym_comment,
  [21490] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(21), 1,
      sym_pipe,
    ACTIONS(1160), 1,
      anon_sym_RBRACE,
    ACTIONS(1355), 1,
      anon_sym_COMMA,
    STATE(422), 1,
      aux_sym_sorts_repeat1,
    STATE(443), 1,
      sym_comment,
  [21509] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(21), 1,
      sym_pipe,
    ACTIONS(1120), 1,
      anon_sym_BQUOTE,
    ACTIONS(1122), 1,
      sym__identifier,
    STATE(444), 1,
      sym_comment,
    STATE(588), 1,
      sym_identifier,
  [21528] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(21), 1,
      sym_pipe,
    ACTIONS(1120), 1,
      anon_sym_BQUOTE,
    ACTIONS(1122), 1,
      sym__identifier,
    STATE(445), 1,
      sym_comment,
    STATE(491), 1,
      sym_identifier,
  [21547] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(21), 1,
      sym_pipe,
    ACTIONS(1357), 1,
      anon_sym_COMMA,
    ACTIONS(1360), 1,
      anon_sym_RPAREN,
    STATE(446), 2,
      sym_comment,
      aux_sym_variable_repeat1,
  [21564] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(21), 1,
      sym_pipe,
    ACTIONS(1362), 1,
      anon_sym_COMMA,
    ACTIONS(1364), 1,
      anon_sym_RBRACE,
    STATE(443), 1,
      aux_sym_sorts_repeat1,
    STATE(447), 1,
      sym_comment,
  [21583] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(21), 1,
      sym_pipe,
    ACTIONS(1366), 1,
      anon_sym_COMMA,
    ACTIONS(1368), 1,
      anon_sym_RBRACE,
    STATE(448), 1,
      sym_comment,
    STATE(450), 1,
      aux_sym__tuples_repeat1,
  [21602] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(21), 1,
      sym_pipe,
    ACTIONS(1120), 1,
      anon_sym_BQUOTE,
    ACTIONS(1122), 1,
      sym__identifier,
    STATE(352), 1,
      sym_identifier,
    STATE(449), 1,
      sym_comment,
  [21621] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(21), 1,
      sym_pipe,
    ACTIONS(257), 1,
      anon_sym_RBRACE,
    ACTIONS(1370), 1,
      anon_sym_COMMA,
    STATE(419), 1,
      aux_sym__tuples_repeat1,
    STATE(450), 1,
      sym_comment,
  [21640] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(21), 1,
      sym_pipe,
    STATE(15), 1,
      aux_sym__friendly_number,
    STATE(451), 1,
      sym_comment,
    ACTIONS(53), 2,
      sym__natural_number,
      anon_sym__,
  [21657] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(21), 1,
      sym_pipe,
    STATE(452), 1,
      sym_comment,
    ACTIONS(1372), 3,
      anon_sym_DASH_GT,
      anon_sym_BQUOTE,
      sym__identifier,
  [21672] = 6,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(1309), 1,
      anon_sym_POUND,
    ACTIONS(1320), 1,
      aux_sym__inner_triple_quotes_token1,
    ACTIONS(1374), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    STATE(424), 1,
      aux_sym__inner_triple_quotes,
    STATE(453), 1,
      sym_comment,
  [21691] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(21), 1,
      sym_pipe,
    ACTIONS(289), 1,
      anon_sym_RBRACE,
    ACTIONS(1376), 1,
      anon_sym_COMMA,
    STATE(441), 1,
      aux_sym_group_repeat1,
    STATE(454), 1,
      sym_comment,
  [21710] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(21), 1,
      sym_pipe,
    STATE(455), 1,
      sym_comment,
    ACTIONS(1378), 3,
      anon_sym_DASH_GT,
      anon_sym_BQUOTE,
      sym__identifier,
  [21725] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(21), 1,
      sym_pipe,
    ACTIONS(1120), 1,
      anon_sym_BQUOTE,
    ACTIONS(1122), 1,
      sym__identifier,
    STATE(456), 1,
      sym_comment,
    STATE(488), 1,
      sym_identifier,
  [21744] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(21), 1,
      sym_pipe,
    ACTIONS(1237), 1,
      anon_sym_BQUOTE,
    ACTIONS(1239), 1,
      sym__identifier,
    STATE(393), 1,
      sym_identifier,
    STATE(457), 1,
      sym_comment,
  [21763] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(21), 1,
      sym_pipe,
    ACTIONS(160), 1,
      anon_sym_RBRACE,
    ACTIONS(1380), 1,
      anon_sym_COMMA,
    STATE(436), 1,
      aux_sym_group_repeat1,
    STATE(458), 1,
      sym_comment,
  [21782] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(21), 1,
      sym_pipe,
    STATE(459), 1,
      sym_comment,
    ACTIONS(1351), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [21796] = 5,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(1309), 1,
      anon_sym_POUND,
    ACTIONS(1320), 1,
      aux_sym__inner_triple_quotes_token1,
    STATE(428), 1,
      aux_sym__inner_triple_quotes,
    STATE(460), 1,
      sym_comment,
  [21812] = 5,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(1309), 1,
      anon_sym_POUND,
    ACTIONS(1320), 1,
      aux_sym__inner_triple_quotes_token1,
    STATE(435), 1,
      aux_sym__inner_triple_quotes,
    STATE(461), 1,
      sym_comment,
  [21828] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(21), 1,
      sym_pipe,
    ACTIONS(1382), 1,
      sym_keyword_derive,
    STATE(462), 1,
      sym_comment,
    STATE(542), 1,
      sym_derives,
  [21844] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(21), 1,
      sym_pipe,
    ACTIONS(1384), 1,
      sym_keyword_version,
    ACTIONS(1386), 1,
      sym_keyword_target,
    STATE(463), 1,
      sym_comment,
  [21860] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(21), 1,
      sym_pipe,
    STATE(464), 1,
      sym_comment,
    ACTIONS(1360), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [21874] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(21), 1,
      sym_pipe,
    STATE(465), 1,
      sym_comment,
    ACTIONS(1388), 2,
      anon_sym_BQUOTE,
      sym__identifier,
  [21888] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(21), 1,
      sym_pipe,
    STATE(466), 1,
      sym_comment,
    ACTIONS(1390), 2,
      sym_keyword_csv,
      sym_keyword_json,
  [21902] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(21), 1,
      sym_pipe,
    ACTIONS(1392), 1,
      aux_sym__time_token1,
    STATE(45), 1,
      sym__time,
    STATE(467), 1,
      sym_comment,
  [21918] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(21), 1,
      sym_pipe,
    STATE(468), 1,
      sym_comment,
    ACTIONS(1302), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [21932] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(21), 1,
      sym_pipe,
    STATE(469), 1,
      sym_comment,
    ACTIONS(984), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [21946] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(21), 1,
      sym_pipe,
    ACTIONS(1020), 1,
      anon_sym_DQUOTE,
    STATE(363), 1,
      sym__double_quote_string,
    STATE(470), 1,
      sym_comment,
  [21962] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(21), 1,
      sym_pipe,
    ACTIONS(1158), 1,
      anon_sym_AT,
    STATE(187), 1,
      sym_date,
    STATE(471), 1,
      sym_comment,
  [21978] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(21), 1,
      sym_pipe,
    ACTIONS(1335), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    STATE(246), 1,
      sym__triple_quote_string,
    STATE(472), 1,
      sym_comment,
  [21994] = 5,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(1309), 1,
      anon_sym_POUND,
    ACTIONS(1320), 1,
      aux_sym__inner_triple_quotes_token1,
    STATE(453), 1,
      aux_sym__inner_triple_quotes,
    STATE(473), 1,
      sym_comment,
  [22010] = 4,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(1309), 1,
      anon_sym_POUND,
    STATE(474), 1,
      sym_comment,
    ACTIONS(1394), 2,
      aux_sym__inner_triple_quotes_token1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
  [22024] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(21), 1,
      sym_pipe,
    ACTIONS(1396), 1,
      aux_sym__date_token1,
    STATE(181), 1,
      sym__date,
    STATE(475), 1,
      sym_comment,
  [22040] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(21), 1,
      sym_pipe,
    STATE(476), 1,
      sym_comment,
    ACTIONS(1295), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [22054] = 4,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(1309), 1,
      anon_sym_POUND,
    ACTIONS(1398), 1,
      aux_sym_comment_token1,
    STATE(477), 1,
      sym_comment,
  [22067] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(21), 1,
      sym_pipe,
    ACTIONS(389), 1,
      sym__natural_number,
    STATE(478), 1,
      sym_comment,
  [22080] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(21), 1,
      sym_pipe,
    ACTIONS(1400), 1,
      anon_sym_COLON,
    STATE(479), 1,
      sym_comment,
  [22093] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(21), 1,
      sym_pipe,
    ACTIONS(1402), 1,
      aux_sym__date_token2,
    STATE(480), 1,
      sym_comment,
  [22106] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(21), 1,
      sym_pipe,
    ACTIONS(1404), 1,
      aux_sym__date_token2,
    STATE(481), 1,
      sym_comment,
  [22119] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(21), 1,
      sym_pipe,
    ACTIONS(1406), 1,
      anon_sym_DOT,
    STATE(482), 1,
      sym_comment,
  [22132] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(21), 1,
      sym_pipe,
    ACTIONS(1408), 1,
      anon_sym_COLON,
    STATE(483), 1,
      sym_comment,
  [22145] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(21), 1,
      sym_pipe,
    ACTIONS(1410), 1,
      anon_sym_DOT,
    STATE(484), 1,
      sym_comment,
  [22158] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(21), 1,
      sym_pipe,
    ACTIONS(1412), 1,
      anon_sym_DQUOTE,
    STATE(485), 1,
      sym_comment,
  [22171] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(21), 1,
      sym_pipe,
    ACTIONS(1414), 1,
      anon_sym_RPAREN,
    STATE(486), 1,
      sym_comment,
  [22184] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(21), 1,
      sym_pipe,
    ACTIONS(1416), 1,
      anon_sym_DASH,
    STATE(487), 1,
      sym_comment,
  [22197] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(21), 1,
      sym_pipe,
    ACTIONS(1418), 1,
      anon_sym_EQ,
    STATE(488), 1,
      sym_comment,
  [22210] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(21), 1,
      sym_pipe,
    ACTIONS(1420), 1,
      anon_sym_LBRACE,
    STATE(489), 1,
      sym_comment,
  [22223] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(21), 1,
      sym_pipe,
    ACTIONS(1422), 1,
      anon_sym_LPAREN,
    STATE(490), 1,
      sym_comment,
  [22236] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(21), 1,
      sym_pipe,
    ACTIONS(1424), 1,
      anon_sym_LBRACE,
    STATE(491), 1,
      sym_comment,
  [22249] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(21), 1,
      sym_pipe,
    ACTIONS(160), 1,
      anon_sym_RBRACE,
    STATE(492), 1,
      sym_comment,
  [22262] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(21), 1,
      sym_pipe,
    ACTIONS(1426), 1,
      aux_sym__date_token2,
    STATE(493), 1,
      sym_comment,
  [22275] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(21), 1,
      sym_pipe,
    ACTIONS(1428), 1,
      anon_sym_LBRACE,
    STATE(494), 1,
      sym_comment,
  [22288] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(21), 1,
      sym_pipe,
    ACTIONS(1430), 1,
      anon_sym_LPAREN,
    STATE(495), 1,
      sym_comment,
  [22301] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(21), 1,
      sym_pipe,
    ACTIONS(1432), 1,
      anon_sym_COLON,
    STATE(496), 1,
      sym_comment,
  [22314] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(21), 1,
      sym_pipe,
    ACTIONS(982), 1,
      anon_sym_RPAREN,
    STATE(497), 1,
      sym_comment,
  [22327] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(21), 1,
      sym_pipe,
    ACTIONS(1434), 1,
      anon_sym_DOT_DOT,
    STATE(498), 1,
      sym_comment,
  [22340] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(21), 1,
      sym_pipe,
    ACTIONS(259), 1,
      anon_sym_RBRACE,
    STATE(499), 1,
      sym_comment,
  [22353] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(21), 1,
      sym_pipe,
    ACTIONS(1436), 1,
      anon_sym_DASH,
    STATE(500), 1,
      sym_comment,
  [22366] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(21), 1,
      sym_pipe,
    ACTIONS(1438), 1,
      anon_sym_RPAREN,
    STATE(501), 1,
      sym_comment,
  [22379] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(21), 1,
      sym_pipe,
    ACTIONS(1364), 1,
      anon_sym_RBRACE,
    STATE(502), 1,
      sym_comment,
  [22392] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(21), 1,
      sym_pipe,
    ACTIONS(1440), 1,
      sym__identifier_dot,
    STATE(503), 1,
      sym_comment,
  [22405] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(21), 1,
      sym_pipe,
    ACTIONS(1442), 1,
      anon_sym_BQUOTE,
    STATE(504), 1,
      sym_comment,
  [22418] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(21), 1,
      sym_pipe,
    ACTIONS(1444), 1,
      sym__natural_number,
    STATE(505), 1,
      sym_comment,
  [22431] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(21), 1,
      sym_pipe,
    ACTIONS(1446), 1,
      anon_sym_RPAREN,
    STATE(506), 1,
      sym_comment,
  [22444] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(21), 1,
      sym_pipe,
    ACTIONS(1252), 1,
      sym__natural_number,
    STATE(507), 1,
      sym_comment,
  [22457] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(21), 1,
      sym_pipe,
    ACTIONS(1448), 1,
      anon_sym_DQUOTE,
    STATE(508), 1,
      sym_comment,
  [22470] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(21), 1,
      sym_pipe,
    ACTIONS(1450), 1,
      anon_sym_SQUOTE,
    STATE(509), 1,
      sym_comment,
  [22483] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(21), 1,
      sym_pipe,
    ACTIONS(1452), 1,
      anon_sym_LBRACE,
    STATE(510), 1,
      sym_comment,
  [22496] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(21), 1,
      sym_pipe,
    ACTIONS(1454), 1,
      aux_sym__date_token2,
    STATE(511), 1,
      sym_comment,
  [22509] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(21), 1,
      sym_pipe,
    ACTIONS(1456), 1,
      anon_sym_DQUOTE,
    STATE(512), 1,
      sym_comment,
  [22522] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(21), 1,
      sym_pipe,
    ACTIONS(1458), 1,
      anon_sym_BQUOTE,
    STATE(513), 1,
      sym_comment,
  [22535] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(21), 1,
      sym_pipe,
    ACTIONS(1460), 1,
      sym__natural_number,
    STATE(514), 1,
      sym_comment,
  [22548] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(21), 1,
      sym_pipe,
    ACTIONS(1462), 1,
      anon_sym_BQUOTE,
    STATE(515), 1,
      sym_comment,
  [22561] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(21), 1,
      sym_pipe,
    ACTIONS(1464), 1,
      sym__natural_number,
    STATE(516), 1,
      sym_comment,
  [22574] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(21), 1,
      sym_pipe,
    ACTIONS(1466), 1,
      anon_sym_DQUOTE,
    STATE(517), 1,
      sym_comment,
  [22587] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(21), 1,
      sym_pipe,
    ACTIONS(1468), 1,
      anon_sym_SQUOTE,
    STATE(518), 1,
      sym_comment,
  [22600] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(21), 1,
      sym_pipe,
    ACTIONS(978), 1,
      anon_sym_RBRACE,
    STATE(519), 1,
      sym_comment,
  [22613] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(21), 1,
      sym_pipe,
    ACTIONS(1470), 1,
      anon_sym_LPAREN,
    STATE(520), 1,
      sym_comment,
  [22626] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(21), 1,
      sym_pipe,
    ACTIONS(1472), 1,
      anon_sym_BQUOTE,
    STATE(521), 1,
      sym_comment,
  [22639] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(21), 1,
      sym_pipe,
    ACTIONS(1474), 1,
      sym__natural_number,
    STATE(522), 1,
      sym_comment,
  [22652] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(21), 1,
      sym_pipe,
    ACTIONS(1476), 1,
      anon_sym_COLON,
    STATE(523), 1,
      sym_comment,
  [22665] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(21), 1,
      sym_pipe,
    ACTIONS(1478), 1,
      sym__natural_number,
    STATE(524), 1,
      sym_comment,
  [22678] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(21), 1,
      sym_pipe,
    ACTIONS(1480), 1,
      anon_sym_DQUOTE,
    STATE(525), 1,
      sym_comment,
  [22691] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(21), 1,
      sym_pipe,
    ACTIONS(1482), 1,
      anon_sym_SQUOTE,
    STATE(526), 1,
      sym_comment,
  [22704] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(21), 1,
      sym_pipe,
    ACTIONS(1484), 1,
      anon_sym_LPAREN,
    STATE(527), 1,
      sym_comment,
  [22717] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(21), 1,
      sym_pipe,
    ACTIONS(1486), 1,
      anon_sym_DQUOTE,
    STATE(528), 1,
      sym_comment,
  [22730] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(21), 1,
      sym_pipe,
    ACTIONS(1488), 1,
      anon_sym_BQUOTE,
    STATE(529), 1,
      sym_comment,
  [22743] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(21), 1,
      sym_pipe,
    ACTIONS(1490), 1,
      sym__natural_number,
    STATE(530), 1,
      sym_comment,
  [22756] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(21), 1,
      sym_pipe,
    ACTIONS(1492), 1,
      anon_sym_COMMA,
    STATE(531), 1,
      sym_comment,
  [22769] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(21), 1,
      sym_pipe,
    ACTIONS(1494), 1,
      sym__natural_number,
    STATE(532), 1,
      sym_comment,
  [22782] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(21), 1,
      sym_pipe,
    ACTIONS(1496), 1,
      anon_sym_DQUOTE,
    STATE(533), 1,
      sym_comment,
  [22795] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(21), 1,
      sym_pipe,
    ACTIONS(1498), 1,
      anon_sym_SQUOTE,
    STATE(534), 1,
      sym_comment,
  [22808] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(21), 1,
      sym_pipe,
    ACTIONS(1500), 1,
      anon_sym_BQUOTE,
    STATE(535), 1,
      sym_comment,
  [22821] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(21), 1,
      sym_pipe,
    ACTIONS(1502), 1,
      sym__natural_number,
    STATE(536), 1,
      sym_comment,
  [22834] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(21), 1,
      sym_pipe,
    ACTIONS(1504), 1,
      anon_sym_COMMA,
    STATE(537), 1,
      sym_comment,
  [22847] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(21), 1,
      sym_pipe,
    ACTIONS(1506), 1,
      sym__natural_number,
    STATE(538), 1,
      sym_comment,
  [22860] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(21), 1,
      sym_pipe,
    ACTIONS(1508), 1,
      anon_sym_DQUOTE,
    STATE(539), 1,
      sym_comment,
  [22873] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(21), 1,
      sym_pipe,
    ACTIONS(1510), 1,
      anon_sym_SQUOTE,
    STATE(540), 1,
      sym_comment,
  [22886] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(21), 1,
      sym_pipe,
    ACTIONS(1512), 1,
      anon_sym_BQUOTE,
    STATE(541), 1,
      sym_comment,
  [22899] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(21), 1,
      sym_pipe,
    ACTIONS(1514), 1,
      anon_sym_RPAREN,
    STATE(542), 1,
      sym_comment,
  [22912] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(21), 1,
      sym_pipe,
    ACTIONS(1516), 1,
      anon_sym_DQUOTE,
    STATE(543), 1,
      sym_comment,
  [22925] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(21), 1,
      sym_pipe,
    ACTIONS(1518), 1,
      anon_sym_BQUOTE,
    STATE(544), 1,
      sym_comment,
  [22938] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(21), 1,
      sym_pipe,
    ACTIONS(1520), 1,
      anon_sym_BQUOTE,
    STATE(545), 1,
      sym_comment,
  [22951] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(21), 1,
      sym_pipe,
    ACTIONS(1522), 1,
      anon_sym_BQUOTE,
    STATE(546), 1,
      sym_comment,
  [22964] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(21), 1,
      sym_pipe,
    ACTIONS(1524), 1,
      anon_sym_BQUOTE,
    STATE(547), 1,
      sym_comment,
  [22977] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(21), 1,
      sym_pipe,
    ACTIONS(1526), 1,
      sym__identifier_dot,
    STATE(548), 1,
      sym_comment,
  [22990] = 4,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(1309), 1,
      anon_sym_POUND,
    ACTIONS(1528), 1,
      aux_sym__double_quote_string_token1,
    STATE(549), 1,
      sym_comment,
  [23003] = 4,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(1309), 1,
      anon_sym_POUND,
    ACTIONS(1530), 1,
      aux_sym__single_quote_string_token1,
    STATE(550), 1,
      sym_comment,
  [23016] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(21), 1,
      sym_pipe,
    ACTIONS(1532), 1,
      anon_sym_LPAREN,
    STATE(551), 1,
      sym_comment,
  [23029] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(21), 1,
      sym_pipe,
    ACTIONS(1534), 1,
      anon_sym_DASH,
    STATE(552), 1,
      sym_comment,
  [23042] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(21), 1,
      sym_pipe,
    ACTIONS(1536), 1,
      sym__identifier_dot,
    STATE(553), 1,
      sym_comment,
  [23055] = 4,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(1309), 1,
      anon_sym_POUND,
    ACTIONS(1538), 1,
      aux_sym__double_quote_string_token1,
    STATE(554), 1,
      sym_comment,
  [23068] = 4,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(1309), 1,
      anon_sym_POUND,
    ACTIONS(1540), 1,
      aux_sym__single_quote_string_token1,
    STATE(555), 1,
      sym_comment,
  [23081] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(21), 1,
      sym_pipe,
    ACTIONS(1542), 1,
      anon_sym_RPAREN,
    STATE(556), 1,
      sym_comment,
  [23094] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(21), 1,
      sym_pipe,
    ACTIONS(1544), 1,
      sym__identifier_dot,
    STATE(557), 1,
      sym_comment,
  [23107] = 4,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(1309), 1,
      anon_sym_POUND,
    ACTIONS(1546), 1,
      aux_sym__double_quote_string_token1,
    STATE(558), 1,
      sym_comment,
  [23120] = 4,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(1309), 1,
      anon_sym_POUND,
    ACTIONS(1548), 1,
      aux_sym__single_quote_string_token1,
    STATE(559), 1,
      sym_comment,
  [23133] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(21), 1,
      sym_pipe,
    ACTIONS(1550), 1,
      sym__natural_number,
    STATE(560), 1,
      sym_comment,
  [23146] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(21), 1,
      sym_pipe,
    ACTIONS(1552), 1,
      sym__identifier_dot,
    STATE(561), 1,
      sym_comment,
  [23159] = 4,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(1309), 1,
      anon_sym_POUND,
    ACTIONS(1554), 1,
      aux_sym__double_quote_string_token1,
    STATE(562), 1,
      sym_comment,
  [23172] = 4,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(1309), 1,
      anon_sym_POUND,
    ACTIONS(1556), 1,
      aux_sym__single_quote_string_token1,
    STATE(563), 1,
      sym_comment,
  [23185] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(21), 1,
      sym_pipe,
    ACTIONS(1558), 1,
      sym__identifier_dot,
    STATE(564), 1,
      sym_comment,
  [23198] = 4,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(1309), 1,
      anon_sym_POUND,
    ACTIONS(1560), 1,
      aux_sym__double_quote_string_token1,
    STATE(565), 1,
      sym_comment,
  [23211] = 4,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(1309), 1,
      anon_sym_POUND,
    ACTIONS(1562), 1,
      aux_sym__single_quote_string_token1,
    STATE(566), 1,
      sym_comment,
  [23224] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(21), 1,
      sym_pipe,
    ACTIONS(1564), 1,
      sym__identifier_dot,
    STATE(567), 1,
      sym_comment,
  [23237] = 4,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(1309), 1,
      anon_sym_POUND,
    ACTIONS(1566), 1,
      aux_sym__double_quote_string_token1,
    STATE(568), 1,
      sym_comment,
  [23250] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(21), 1,
      sym_pipe,
    ACTIONS(1568), 1,
      sym__identifier_dot,
    STATE(569), 1,
      sym_comment,
  [23263] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(21), 1,
      sym_pipe,
    ACTIONS(1570), 1,
      sym__identifier_dot,
    STATE(570), 1,
      sym_comment,
  [23276] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(21), 1,
      sym_pipe,
    ACTIONS(1572), 1,
      sym__identifier_dot,
    STATE(571), 1,
      sym_comment,
  [23289] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(21), 1,
      sym_pipe,
    ACTIONS(1574), 1,
      sym__identifier_dot,
    STATE(572), 1,
      sym_comment,
  [23302] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(21), 1,
      sym_pipe,
    ACTIONS(1576), 1,
      ts_builtin_sym_end,
    STATE(573), 1,
      sym_comment,
  [23315] = 4,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(1309), 1,
      anon_sym_POUND,
    ACTIONS(1578), 1,
      aux_sym__double_quote_string_token1,
    STATE(574), 1,
      sym_comment,
  [23328] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(21), 1,
      sym_pipe,
    ACTIONS(1580), 1,
      anon_sym_LPAREN,
    STATE(575), 1,
      sym_comment,
  [23341] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(21), 1,
      sym_pipe,
    ACTIONS(1326), 1,
      anon_sym_RBRACE,
    STATE(576), 1,
      sym_comment,
  [23354] = 4,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(1309), 1,
      anon_sym_POUND,
    ACTIONS(1582), 1,
      aux_sym__single_quote_string_token1,
    STATE(577), 1,
      sym_comment,
  [23367] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(21), 1,
      sym_pipe,
    ACTIONS(1584), 1,
      aux_sym__date_token2,
    STATE(578), 1,
      sym_comment,
  [23380] = 4,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(1309), 1,
      anon_sym_POUND,
    ACTIONS(1586), 1,
      aux_sym__double_quote_string_token1,
    STATE(579), 1,
      sym_comment,
  [23393] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(21), 1,
      sym_pipe,
    ACTIONS(1588), 1,
      anon_sym_LPAREN,
    STATE(580), 1,
      sym_comment,
  [23406] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(21), 1,
      sym_pipe,
    ACTIONS(1590), 1,
      anon_sym_SQUOTE,
    STATE(581), 1,
      sym_comment,
  [23419] = 4,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(1309), 1,
      anon_sym_POUND,
    ACTIONS(1592), 1,
      aux_sym__double_quote_string_token1,
    STATE(582), 1,
      sym_comment,
  [23432] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(21), 1,
      sym_pipe,
    ACTIONS(1594), 1,
      aux_sym__date_token2,
    STATE(583), 1,
      sym_comment,
  [23445] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(21), 1,
      sym_pipe,
    ACTIONS(1596), 1,
      aux_sym__date_token2,
    STATE(584), 1,
      sym_comment,
  [23458] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(21), 1,
      sym_pipe,
    ACTIONS(1598), 1,
      anon_sym_COLON,
    STATE(585), 1,
      sym_comment,
  [23471] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(21), 1,
      sym_pipe,
    ACTIONS(1600), 1,
      anon_sym_DASH,
    STATE(586), 1,
      sym_comment,
  [23484] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(21), 1,
      sym_pipe,
    ACTIONS(1368), 1,
      anon_sym_RBRACE,
    STATE(587), 1,
      sym_comment,
  [23497] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(21), 1,
      sym_pipe,
    ACTIONS(1602), 1,
      anon_sym_EQ,
    STATE(588), 1,
      sym_comment,
  [23510] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(21), 1,
      sym_pipe,
    ACTIONS(152), 1,
      anon_sym_RBRACE,
    STATE(589), 1,
      sym_comment,
  [23523] = 1,
    ACTIONS(1604), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 131,
  [SMALL_STATE(4)] = 229,
  [SMALL_STATE(5)] = 357,
  [SMALL_STATE(6)] = 485,
  [SMALL_STATE(7)] = 583,
  [SMALL_STATE(8)] = 708,
  [SMALL_STATE(9)] = 830,
  [SMALL_STATE(10)] = 952,
  [SMALL_STATE(11)] = 1074,
  [SMALL_STATE(12)] = 1196,
  [SMALL_STATE(13)] = 1316,
  [SMALL_STATE(14)] = 1410,
  [SMALL_STATE(15)] = 1469,
  [SMALL_STATE(16)] = 1530,
  [SMALL_STATE(17)] = 1649,
  [SMALL_STATE(18)] = 1710,
  [SMALL_STATE(19)] = 1822,
  [SMALL_STATE(20)] = 1878,
  [SMALL_STATE(21)] = 1934,
  [SMALL_STATE(22)] = 1990,
  [SMALL_STATE(23)] = 2102,
  [SMALL_STATE(24)] = 2212,
  [SMALL_STATE(25)] = 2324,
  [SMALL_STATE(26)] = 2436,
  [SMALL_STATE(27)] = 2548,
  [SMALL_STATE(28)] = 2658,
  [SMALL_STATE(29)] = 2768,
  [SMALL_STATE(30)] = 2882,
  [SMALL_STATE(31)] = 2992,
  [SMALL_STATE(32)] = 3108,
  [SMALL_STATE(33)] = 3220,
  [SMALL_STATE(34)] = 3332,
  [SMALL_STATE(35)] = 3388,
  [SMALL_STATE(36)] = 3444,
  [SMALL_STATE(37)] = 3556,
  [SMALL_STATE(38)] = 3615,
  [SMALL_STATE(39)] = 3724,
  [SMALL_STATE(40)] = 3833,
  [SMALL_STATE(41)] = 3892,
  [SMALL_STATE(42)] = 4001,
  [SMALL_STATE(43)] = 4112,
  [SMALL_STATE(44)] = 4221,
  [SMALL_STATE(45)] = 4330,
  [SMALL_STATE(46)] = 4393,
  [SMALL_STATE(47)] = 4502,
  [SMALL_STATE(48)] = 4611,
  [SMALL_STATE(49)] = 4720,
  [SMALL_STATE(50)] = 4833,
  [SMALL_STATE(51)] = 4946,
  [SMALL_STATE(52)] = 5055,
  [SMALL_STATE(53)] = 5111,
  [SMALL_STATE(54)] = 5215,
  [SMALL_STATE(55)] = 5325,
  [SMALL_STATE(56)] = 5431,
  [SMALL_STATE(57)] = 5535,
  [SMALL_STATE(58)] = 5641,
  [SMALL_STATE(59)] = 5747,
  [SMALL_STATE(60)] = 5800,
  [SMALL_STATE(61)] = 5903,
  [SMALL_STATE(62)] = 5956,
  [SMALL_STATE(63)] = 6009,
  [SMALL_STATE(64)] = 6094,
  [SMALL_STATE(65)] = 6179,
  [SMALL_STATE(66)] = 6232,
  [SMALL_STATE(67)] = 6285,
  [SMALL_STATE(68)] = 6338,
  [SMALL_STATE(69)] = 6393,
  [SMALL_STATE(70)] = 6448,
  [SMALL_STATE(71)] = 6535,
  [SMALL_STATE(72)] = 6590,
  [SMALL_STATE(73)] = 6645,
  [SMALL_STATE(74)] = 6698,
  [SMALL_STATE(75)] = 6785,
  [SMALL_STATE(76)] = 6840,
  [SMALL_STATE(77)] = 6892,
  [SMALL_STATE(78)] = 6992,
  [SMALL_STATE(79)] = 7044,
  [SMALL_STATE(80)] = 7096,
  [SMALL_STATE(81)] = 7198,
  [SMALL_STATE(82)] = 7250,
  [SMALL_STATE(83)] = 7352,
  [SMALL_STATE(84)] = 7452,
  [SMALL_STATE(85)] = 7504,
  [SMALL_STATE(86)] = 7556,
  [SMALL_STATE(87)] = 7608,
  [SMALL_STATE(88)] = 7710,
  [SMALL_STATE(89)] = 7762,
  [SMALL_STATE(90)] = 7862,
  [SMALL_STATE(91)] = 7914,
  [SMALL_STATE(92)] = 7966,
  [SMALL_STATE(93)] = 8066,
  [SMALL_STATE(94)] = 8168,
  [SMALL_STATE(95)] = 8270,
  [SMALL_STATE(96)] = 8322,
  [SMALL_STATE(97)] = 8406,
  [SMALL_STATE(98)] = 8458,
  [SMALL_STATE(99)] = 8558,
  [SMALL_STATE(100)] = 8658,
  [SMALL_STATE(101)] = 8758,
  [SMALL_STATE(102)] = 8858,
  [SMALL_STATE(103)] = 8958,
  [SMALL_STATE(104)] = 9010,
  [SMALL_STATE(105)] = 9110,
  [SMALL_STATE(106)] = 9210,
  [SMALL_STATE(107)] = 9310,
  [SMALL_STATE(108)] = 9362,
  [SMALL_STATE(109)] = 9432,
  [SMALL_STATE(110)] = 9500,
  [SMALL_STATE(111)] = 9566,
  [SMALL_STATE(112)] = 9626,
  [SMALL_STATE(113)] = 9684,
  [SMALL_STATE(114)] = 9740,
  [SMALL_STATE(115)] = 9842,
  [SMALL_STATE(116)] = 9904,
  [SMALL_STATE(117)] = 9956,
  [SMALL_STATE(118)] = 10010,
  [SMALL_STATE(119)] = 10110,
  [SMALL_STATE(120)] = 10162,
  [SMALL_STATE(121)] = 10214,
  [SMALL_STATE(122)] = 10266,
  [SMALL_STATE(123)] = 10318,
  [SMALL_STATE(124)] = 10370,
  [SMALL_STATE(125)] = 10422,
  [SMALL_STATE(126)] = 10492,
  [SMALL_STATE(127)] = 10562,
  [SMALL_STATE(128)] = 10643,
  [SMALL_STATE(129)] = 10726,
  [SMALL_STATE(130)] = 10795,
  [SMALL_STATE(131)] = 10864,
  [SMALL_STATE(132)] = 10933,
  [SMALL_STATE(133)] = 10981,
  [SMALL_STATE(134)] = 11027,
  [SMALL_STATE(135)] = 11075,
  [SMALL_STATE(136)] = 11121,
  [SMALL_STATE(137)] = 11167,
  [SMALL_STATE(138)] = 11237,
  [SMALL_STATE(139)] = 11281,
  [SMALL_STATE(140)] = 11325,
  [SMALL_STATE(141)] = 11371,
  [SMALL_STATE(142)] = 11419,
  [SMALL_STATE(143)] = 11465,
  [SMALL_STATE(144)] = 11511,
  [SMALL_STATE(145)] = 11555,
  [SMALL_STATE(146)] = 11601,
  [SMALL_STATE(147)] = 11645,
  [SMALL_STATE(148)] = 11715,
  [SMALL_STATE(149)] = 11785,
  [SMALL_STATE(150)] = 11833,
  [SMALL_STATE(151)] = 11903,
  [SMALL_STATE(152)] = 11946,
  [SMALL_STATE(153)] = 11989,
  [SMALL_STATE(154)] = 12032,
  [SMALL_STATE(155)] = 12097,
  [SMALL_STATE(156)] = 12162,
  [SMALL_STATE(157)] = 12205,
  [SMALL_STATE(158)] = 12272,
  [SMALL_STATE(159)] = 12315,
  [SMALL_STATE(160)] = 12358,
  [SMALL_STATE(161)] = 12421,
  [SMALL_STATE(162)] = 12464,
  [SMALL_STATE(163)] = 12507,
  [SMALL_STATE(164)] = 12550,
  [SMALL_STATE(165)] = 12593,
  [SMALL_STATE(166)] = 12636,
  [SMALL_STATE(167)] = 12679,
  [SMALL_STATE(168)] = 12722,
  [SMALL_STATE(169)] = 12765,
  [SMALL_STATE(170)] = 12808,
  [SMALL_STATE(171)] = 12851,
  [SMALL_STATE(172)] = 12894,
  [SMALL_STATE(173)] = 12937,
  [SMALL_STATE(174)] = 12980,
  [SMALL_STATE(175)] = 13023,
  [SMALL_STATE(176)] = 13066,
  [SMALL_STATE(177)] = 13109,
  [SMALL_STATE(178)] = 13176,
  [SMALL_STATE(179)] = 13219,
  [SMALL_STATE(180)] = 13261,
  [SMALL_STATE(181)] = 13303,
  [SMALL_STATE(182)] = 13344,
  [SMALL_STATE(183)] = 13385,
  [SMALL_STATE(184)] = 13425,
  [SMALL_STATE(185)] = 13467,
  [SMALL_STATE(186)] = 13509,
  [SMALL_STATE(187)] = 13549,
  [SMALL_STATE(188)] = 13589,
  [SMALL_STATE(189)] = 13653,
  [SMALL_STATE(190)] = 13695,
  [SMALL_STATE(191)] = 13739,
  [SMALL_STATE(192)] = 13779,
  [SMALL_STATE(193)] = 13819,
  [SMALL_STATE(194)] = 13890,
  [SMALL_STATE(195)] = 13959,
  [SMALL_STATE(196)] = 13998,
  [SMALL_STATE(197)] = 14037,
  [SMALL_STATE(198)] = 14076,
  [SMALL_STATE(199)] = 14137,
  [SMALL_STATE(200)] = 14176,
  [SMALL_STATE(201)] = 14215,
  [SMALL_STATE(202)] = 14274,
  [SMALL_STATE(203)] = 14313,
  [SMALL_STATE(204)] = 14352,
  [SMALL_STATE(205)] = 14391,
  [SMALL_STATE(206)] = 14430,
  [SMALL_STATE(207)] = 14469,
  [SMALL_STATE(208)] = 14508,
  [SMALL_STATE(209)] = 14568,
  [SMALL_STATE(210)] = 14609,
  [SMALL_STATE(211)] = 14648,
  [SMALL_STATE(212)] = 14689,
  [SMALL_STATE(213)] = 14728,
  [SMALL_STATE(214)] = 14764,
  [SMALL_STATE(215)] = 14800,
  [SMALL_STATE(216)] = 14836,
  [SMALL_STATE(217)] = 14872,
  [SMALL_STATE(218)] = 14908,
  [SMALL_STATE(219)] = 14944,
  [SMALL_STATE(220)] = 14980,
  [SMALL_STATE(221)] = 15016,
  [SMALL_STATE(222)] = 15052,
  [SMALL_STATE(223)] = 15088,
  [SMALL_STATE(224)] = 15124,
  [SMALL_STATE(225)] = 15160,
  [SMALL_STATE(226)] = 15196,
  [SMALL_STATE(227)] = 15232,
  [SMALL_STATE(228)] = 15268,
  [SMALL_STATE(229)] = 15304,
  [SMALL_STATE(230)] = 15340,
  [SMALL_STATE(231)] = 15376,
  [SMALL_STATE(232)] = 15412,
  [SMALL_STATE(233)] = 15448,
  [SMALL_STATE(234)] = 15484,
  [SMALL_STATE(235)] = 15520,
  [SMALL_STATE(236)] = 15556,
  [SMALL_STATE(237)] = 15592,
  [SMALL_STATE(238)] = 15627,
  [SMALL_STATE(239)] = 15662,
  [SMALL_STATE(240)] = 15697,
  [SMALL_STATE(241)] = 15732,
  [SMALL_STATE(242)] = 15767,
  [SMALL_STATE(243)] = 15802,
  [SMALL_STATE(244)] = 15837,
  [SMALL_STATE(245)] = 15872,
  [SMALL_STATE(246)] = 15907,
  [SMALL_STATE(247)] = 15942,
  [SMALL_STATE(248)] = 15977,
  [SMALL_STATE(249)] = 16012,
  [SMALL_STATE(250)] = 16047,
  [SMALL_STATE(251)] = 16082,
  [SMALL_STATE(252)] = 16117,
  [SMALL_STATE(253)] = 16152,
  [SMALL_STATE(254)] = 16187,
  [SMALL_STATE(255)] = 16222,
  [SMALL_STATE(256)] = 16257,
  [SMALL_STATE(257)] = 16296,
  [SMALL_STATE(258)] = 16331,
  [SMALL_STATE(259)] = 16366,
  [SMALL_STATE(260)] = 16401,
  [SMALL_STATE(261)] = 16436,
  [SMALL_STATE(262)] = 16471,
  [SMALL_STATE(263)] = 16506,
  [SMALL_STATE(264)] = 16541,
  [SMALL_STATE(265)] = 16576,
  [SMALL_STATE(266)] = 16611,
  [SMALL_STATE(267)] = 16646,
  [SMALL_STATE(268)] = 16681,
  [SMALL_STATE(269)] = 16716,
  [SMALL_STATE(270)] = 16751,
  [SMALL_STATE(271)] = 16786,
  [SMALL_STATE(272)] = 16819,
  [SMALL_STATE(273)] = 16852,
  [SMALL_STATE(274)] = 16905,
  [SMALL_STATE(275)] = 16938,
  [SMALL_STATE(276)] = 16972,
  [SMALL_STATE(277)] = 17010,
  [SMALL_STATE(278)] = 17047,
  [SMALL_STATE(279)] = 17080,
  [SMALL_STATE(280)] = 17111,
  [SMALL_STATE(281)] = 17142,
  [SMALL_STATE(282)] = 17174,
  [SMALL_STATE(283)] = 17206,
  [SMALL_STATE(284)] = 17254,
  [SMALL_STATE(285)] = 17286,
  [SMALL_STATE(286)] = 17334,
  [SMALL_STATE(287)] = 17382,
  [SMALL_STATE(288)] = 17414,
  [SMALL_STATE(289)] = 17462,
  [SMALL_STATE(290)] = 17510,
  [SMALL_STATE(291)] = 17558,
  [SMALL_STATE(292)] = 17608,
  [SMALL_STATE(293)] = 17656,
  [SMALL_STATE(294)] = 17686,
  [SMALL_STATE(295)] = 17720,
  [SMALL_STATE(296)] = 17768,
  [SMALL_STATE(297)] = 17816,
  [SMALL_STATE(298)] = 17846,
  [SMALL_STATE(299)] = 17875,
  [SMALL_STATE(300)] = 17904,
  [SMALL_STATE(301)] = 17947,
  [SMALL_STATE(302)] = 17978,
  [SMALL_STATE(303)] = 18007,
  [SMALL_STATE(304)] = 18036,
  [SMALL_STATE(305)] = 18083,
  [SMALL_STATE(306)] = 18112,
  [SMALL_STATE(307)] = 18159,
  [SMALL_STATE(308)] = 18188,
  [SMALL_STATE(309)] = 18217,
  [SMALL_STATE(310)] = 18248,
  [SMALL_STATE(311)] = 18277,
  [SMALL_STATE(312)] = 18306,
  [SMALL_STATE(313)] = 18335,
  [SMALL_STATE(314)] = 18380,
  [SMALL_STATE(315)] = 18411,
  [SMALL_STATE(316)] = 18440,
  [SMALL_STATE(317)] = 18471,
  [SMALL_STATE(318)] = 18502,
  [SMALL_STATE(319)] = 18549,
  [SMALL_STATE(320)] = 18578,
  [SMALL_STATE(321)] = 18622,
  [SMALL_STATE(322)] = 18666,
  [SMALL_STATE(323)] = 18707,
  [SMALL_STATE(324)] = 18746,
  [SMALL_STATE(325)] = 18787,
  [SMALL_STATE(326)] = 18826,
  [SMALL_STATE(327)] = 18867,
  [SMALL_STATE(328)] = 18893,
  [SMALL_STATE(329)] = 18931,
  [SMALL_STATE(330)] = 18965,
  [SMALL_STATE(331)] = 18999,
  [SMALL_STATE(332)] = 19033,
  [SMALL_STATE(333)] = 19065,
  [SMALL_STATE(334)] = 19099,
  [SMALL_STATE(335)] = 19133,
  [SMALL_STATE(336)] = 19168,
  [SMALL_STATE(337)] = 19195,
  [SMALL_STATE(338)] = 19226,
  [SMALL_STATE(339)] = 19257,
  [SMALL_STATE(340)] = 19288,
  [SMALL_STATE(341)] = 19319,
  [SMALL_STATE(342)] = 19346,
  [SMALL_STATE(343)] = 19377,
  [SMALL_STATE(344)] = 19404,
  [SMALL_STATE(345)] = 19429,
  [SMALL_STATE(346)] = 19452,
  [SMALL_STATE(347)] = 19484,
  [SMALL_STATE(348)] = 19506,
  [SMALL_STATE(349)] = 19538,
  [SMALL_STATE(350)] = 19570,
  [SMALL_STATE(351)] = 19602,
  [SMALL_STATE(352)] = 19634,
  [SMALL_STATE(353)] = 19656,
  [SMALL_STATE(354)] = 19687,
  [SMALL_STATE(355)] = 19708,
  [SMALL_STATE(356)] = 19729,
  [SMALL_STATE(357)] = 19758,
  [SMALL_STATE(358)] = 19779,
  [SMALL_STATE(359)] = 19800,
  [SMALL_STATE(360)] = 19825,
  [SMALL_STATE(361)] = 19852,
  [SMALL_STATE(362)] = 19883,
  [SMALL_STATE(363)] = 19904,
  [SMALL_STATE(364)] = 19925,
  [SMALL_STATE(365)] = 19956,
  [SMALL_STATE(366)] = 19977,
  [SMALL_STATE(367)] = 19998,
  [SMALL_STATE(368)] = 20025,
  [SMALL_STATE(369)] = 20046,
  [SMALL_STATE(370)] = 20068,
  [SMALL_STATE(371)] = 20094,
  [SMALL_STATE(372)] = 20120,
  [SMALL_STATE(373)] = 20144,
  [SMALL_STATE(374)] = 20164,
  [SMALL_STATE(375)] = 20184,
  [SMALL_STATE(376)] = 20212,
  [SMALL_STATE(377)] = 20232,
  [SMALL_STATE(378)] = 20256,
  [SMALL_STATE(379)] = 20277,
  [SMALL_STATE(380)] = 20302,
  [SMALL_STATE(381)] = 20325,
  [SMALL_STATE(382)] = 20344,
  [SMALL_STATE(383)] = 20363,
  [SMALL_STATE(384)] = 20384,
  [SMALL_STATE(385)] = 20403,
  [SMALL_STATE(386)] = 20426,
  [SMALL_STATE(387)] = 20451,
  [SMALL_STATE(388)] = 20474,
  [SMALL_STATE(389)] = 20499,
  [SMALL_STATE(390)] = 20518,
  [SMALL_STATE(391)] = 20535,
  [SMALL_STATE(392)] = 20552,
  [SMALL_STATE(393)] = 20575,
  [SMALL_STATE(394)] = 20600,
  [SMALL_STATE(395)] = 20623,
  [SMALL_STATE(396)] = 20639,
  [SMALL_STATE(397)] = 20655,
  [SMALL_STATE(398)] = 20675,
  [SMALL_STATE(399)] = 20695,
  [SMALL_STATE(400)] = 20711,
  [SMALL_STATE(401)] = 20729,
  [SMALL_STATE(402)] = 20749,
  [SMALL_STATE(403)] = 20765,
  [SMALL_STATE(404)] = 20781,
  [SMALL_STATE(405)] = 20797,
  [SMALL_STATE(406)] = 20813,
  [SMALL_STATE(407)] = 20829,
  [SMALL_STATE(408)] = 20851,
  [SMALL_STATE(409)] = 20871,
  [SMALL_STATE(410)] = 20887,
  [SMALL_STATE(411)] = 20909,
  [SMALL_STATE(412)] = 20925,
  [SMALL_STATE(413)] = 20945,
  [SMALL_STATE(414)] = 20961,
  [SMALL_STATE(415)] = 20981,
  [SMALL_STATE(416)] = 21001,
  [SMALL_STATE(417)] = 21020,
  [SMALL_STATE(418)] = 21039,
  [SMALL_STATE(419)] = 21058,
  [SMALL_STATE(420)] = 21075,
  [SMALL_STATE(421)] = 21094,
  [SMALL_STATE(422)] = 21111,
  [SMALL_STATE(423)] = 21128,
  [SMALL_STATE(424)] = 21147,
  [SMALL_STATE(425)] = 21164,
  [SMALL_STATE(426)] = 21183,
  [SMALL_STATE(427)] = 21202,
  [SMALL_STATE(428)] = 21219,
  [SMALL_STATE(429)] = 21238,
  [SMALL_STATE(430)] = 21257,
  [SMALL_STATE(431)] = 21272,
  [SMALL_STATE(432)] = 21287,
  [SMALL_STATE(433)] = 21304,
  [SMALL_STATE(434)] = 21323,
  [SMALL_STATE(435)] = 21342,
  [SMALL_STATE(436)] = 21361,
  [SMALL_STATE(437)] = 21380,
  [SMALL_STATE(438)] = 21399,
  [SMALL_STATE(439)] = 21418,
  [SMALL_STATE(440)] = 21437,
  [SMALL_STATE(441)] = 21454,
  [SMALL_STATE(442)] = 21471,
  [SMALL_STATE(443)] = 21490,
  [SMALL_STATE(444)] = 21509,
  [SMALL_STATE(445)] = 21528,
  [SMALL_STATE(446)] = 21547,
  [SMALL_STATE(447)] = 21564,
  [SMALL_STATE(448)] = 21583,
  [SMALL_STATE(449)] = 21602,
  [SMALL_STATE(450)] = 21621,
  [SMALL_STATE(451)] = 21640,
  [SMALL_STATE(452)] = 21657,
  [SMALL_STATE(453)] = 21672,
  [SMALL_STATE(454)] = 21691,
  [SMALL_STATE(455)] = 21710,
  [SMALL_STATE(456)] = 21725,
  [SMALL_STATE(457)] = 21744,
  [SMALL_STATE(458)] = 21763,
  [SMALL_STATE(459)] = 21782,
  [SMALL_STATE(460)] = 21796,
  [SMALL_STATE(461)] = 21812,
  [SMALL_STATE(462)] = 21828,
  [SMALL_STATE(463)] = 21844,
  [SMALL_STATE(464)] = 21860,
  [SMALL_STATE(465)] = 21874,
  [SMALL_STATE(466)] = 21888,
  [SMALL_STATE(467)] = 21902,
  [SMALL_STATE(468)] = 21918,
  [SMALL_STATE(469)] = 21932,
  [SMALL_STATE(470)] = 21946,
  [SMALL_STATE(471)] = 21962,
  [SMALL_STATE(472)] = 21978,
  [SMALL_STATE(473)] = 21994,
  [SMALL_STATE(474)] = 22010,
  [SMALL_STATE(475)] = 22024,
  [SMALL_STATE(476)] = 22040,
  [SMALL_STATE(477)] = 22054,
  [SMALL_STATE(478)] = 22067,
  [SMALL_STATE(479)] = 22080,
  [SMALL_STATE(480)] = 22093,
  [SMALL_STATE(481)] = 22106,
  [SMALL_STATE(482)] = 22119,
  [SMALL_STATE(483)] = 22132,
  [SMALL_STATE(484)] = 22145,
  [SMALL_STATE(485)] = 22158,
  [SMALL_STATE(486)] = 22171,
  [SMALL_STATE(487)] = 22184,
  [SMALL_STATE(488)] = 22197,
  [SMALL_STATE(489)] = 22210,
  [SMALL_STATE(490)] = 22223,
  [SMALL_STATE(491)] = 22236,
  [SMALL_STATE(492)] = 22249,
  [SMALL_STATE(493)] = 22262,
  [SMALL_STATE(494)] = 22275,
  [SMALL_STATE(495)] = 22288,
  [SMALL_STATE(496)] = 22301,
  [SMALL_STATE(497)] = 22314,
  [SMALL_STATE(498)] = 22327,
  [SMALL_STATE(499)] = 22340,
  [SMALL_STATE(500)] = 22353,
  [SMALL_STATE(501)] = 22366,
  [SMALL_STATE(502)] = 22379,
  [SMALL_STATE(503)] = 22392,
  [SMALL_STATE(504)] = 22405,
  [SMALL_STATE(505)] = 22418,
  [SMALL_STATE(506)] = 22431,
  [SMALL_STATE(507)] = 22444,
  [SMALL_STATE(508)] = 22457,
  [SMALL_STATE(509)] = 22470,
  [SMALL_STATE(510)] = 22483,
  [SMALL_STATE(511)] = 22496,
  [SMALL_STATE(512)] = 22509,
  [SMALL_STATE(513)] = 22522,
  [SMALL_STATE(514)] = 22535,
  [SMALL_STATE(515)] = 22548,
  [SMALL_STATE(516)] = 22561,
  [SMALL_STATE(517)] = 22574,
  [SMALL_STATE(518)] = 22587,
  [SMALL_STATE(519)] = 22600,
  [SMALL_STATE(520)] = 22613,
  [SMALL_STATE(521)] = 22626,
  [SMALL_STATE(522)] = 22639,
  [SMALL_STATE(523)] = 22652,
  [SMALL_STATE(524)] = 22665,
  [SMALL_STATE(525)] = 22678,
  [SMALL_STATE(526)] = 22691,
  [SMALL_STATE(527)] = 22704,
  [SMALL_STATE(528)] = 22717,
  [SMALL_STATE(529)] = 22730,
  [SMALL_STATE(530)] = 22743,
  [SMALL_STATE(531)] = 22756,
  [SMALL_STATE(532)] = 22769,
  [SMALL_STATE(533)] = 22782,
  [SMALL_STATE(534)] = 22795,
  [SMALL_STATE(535)] = 22808,
  [SMALL_STATE(536)] = 22821,
  [SMALL_STATE(537)] = 22834,
  [SMALL_STATE(538)] = 22847,
  [SMALL_STATE(539)] = 22860,
  [SMALL_STATE(540)] = 22873,
  [SMALL_STATE(541)] = 22886,
  [SMALL_STATE(542)] = 22899,
  [SMALL_STATE(543)] = 22912,
  [SMALL_STATE(544)] = 22925,
  [SMALL_STATE(545)] = 22938,
  [SMALL_STATE(546)] = 22951,
  [SMALL_STATE(547)] = 22964,
  [SMALL_STATE(548)] = 22977,
  [SMALL_STATE(549)] = 22990,
  [SMALL_STATE(550)] = 23003,
  [SMALL_STATE(551)] = 23016,
  [SMALL_STATE(552)] = 23029,
  [SMALL_STATE(553)] = 23042,
  [SMALL_STATE(554)] = 23055,
  [SMALL_STATE(555)] = 23068,
  [SMALL_STATE(556)] = 23081,
  [SMALL_STATE(557)] = 23094,
  [SMALL_STATE(558)] = 23107,
  [SMALL_STATE(559)] = 23120,
  [SMALL_STATE(560)] = 23133,
  [SMALL_STATE(561)] = 23146,
  [SMALL_STATE(562)] = 23159,
  [SMALL_STATE(563)] = 23172,
  [SMALL_STATE(564)] = 23185,
  [SMALL_STATE(565)] = 23198,
  [SMALL_STATE(566)] = 23211,
  [SMALL_STATE(567)] = 23224,
  [SMALL_STATE(568)] = 23237,
  [SMALL_STATE(569)] = 23250,
  [SMALL_STATE(570)] = 23263,
  [SMALL_STATE(571)] = 23276,
  [SMALL_STATE(572)] = 23289,
  [SMALL_STATE(573)] = 23302,
  [SMALL_STATE(574)] = 23315,
  [SMALL_STATE(575)] = 23328,
  [SMALL_STATE(576)] = 23341,
  [SMALL_STATE(577)] = 23354,
  [SMALL_STATE(578)] = 23367,
  [SMALL_STATE(579)] = 23380,
  [SMALL_STATE(580)] = 23393,
  [SMALL_STATE(581)] = 23406,
  [SMALL_STATE(582)] = 23419,
  [SMALL_STATE(583)] = 23432,
  [SMALL_STATE(584)] = 23445,
  [SMALL_STATE(585)] = 23458,
  [SMALL_STATE(586)] = 23471,
  [SMALL_STATE(587)] = 23484,
  [SMALL_STATE(588)] = 23497,
  [SMALL_STATE(589)] = 23510,
  [SMALL_STATE(590)] = 23523,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(477),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [7] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 0),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(388),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(445),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(457),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(456),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(463),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(433),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(88),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(280),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(56),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(53),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(519),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(217),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(560),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(414),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(574),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(577),
  [45] = {.entry = {.count = 1, .reusable = false}}, SHIFT(579),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(461),
  [49] = {.entry = {.count = 1, .reusable = false}}, SHIFT(582),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(473),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [55] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [57] = {.entry = {.count = 1, .reusable = true}}, SHIFT(553),
  [59] = {.entry = {.count = 1, .reusable = false}}, SHIFT(62),
  [61] = {.entry = {.count = 1, .reusable = true}}, SHIFT(410),
  [63] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field, 1, .production_id = 7),
  [65] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_field, 1, .production_id = 7),
  [67] = {.entry = {.count = 1, .reusable = false}}, SHIFT(166),
  [69] = {.entry = {.count = 1, .reusable = true}}, SHIFT(514),
  [71] = {.entry = {.count = 1, .reusable = true}}, SHIFT(558),
  [73] = {.entry = {.count = 1, .reusable = true}}, SHIFT(555),
  [75] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [77] = {.entry = {.count = 1, .reusable = false}}, SHIFT(151),
  [79] = {.entry = {.count = 1, .reusable = true}}, SHIFT(564),
  [81] = {.entry = {.count = 1, .reusable = false}}, SHIFT(139),
  [83] = {.entry = {.count = 1, .reusable = true}}, SHIFT(225),
  [85] = {.entry = {.count = 1, .reusable = true}}, SHIFT(233),
  [87] = {.entry = {.count = 1, .reusable = false}}, SHIFT(158),
  [89] = {.entry = {.count = 1, .reusable = true}}, SHIFT(536),
  [91] = {.entry = {.count = 1, .reusable = true}}, SHIFT(568),
  [93] = {.entry = {.count = 1, .reusable = true}}, SHIFT(566),
  [95] = {.entry = {.count = 1, .reusable = true}}, SHIFT(176),
  [97] = {.entry = {.count = 1, .reusable = false}}, SHIFT(176),
  [99] = {.entry = {.count = 1, .reusable = true}}, SHIFT(572),
  [101] = {.entry = {.count = 1, .reusable = false}}, SHIFT(144),
  [103] = {.entry = {.count = 1, .reusable = false}}, SHIFT(510),
  [105] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [107] = {.entry = {.count = 1, .reusable = true}}, SHIFT(570),
  [109] = {.entry = {.count = 1, .reusable = false}}, SHIFT(20),
  [111] = {.entry = {.count = 1, .reusable = true}}, SHIFT(561),
  [113] = {.entry = {.count = 1, .reusable = false}}, SHIFT(180),
  [115] = {.entry = {.count = 1, .reusable = true}}, SHIFT(557),
  [117] = {.entry = {.count = 1, .reusable = false}}, SHIFT(35),
  [119] = {.entry = {.count = 1, .reusable = true}}, SHIFT(569),
  [121] = {.entry = {.count = 1, .reusable = false}}, SHIFT(90),
  [123] = {.entry = {.count = 1, .reusable = false}}, SHIFT(205),
  [125] = {.entry = {.count = 1, .reusable = true}}, SHIFT(530),
  [127] = {.entry = {.count = 1, .reusable = true}}, SHIFT(565),
  [129] = {.entry = {.count = 1, .reusable = true}}, SHIFT(563),
  [131] = {.entry = {.count = 1, .reusable = true}}, SHIFT(200),
  [133] = {.entry = {.count = 1, .reusable = false}}, SHIFT(200),
  [135] = {.entry = {.count = 1, .reusable = true}}, SHIFT(571),
  [137] = {.entry = {.count = 1, .reusable = false}}, SHIFT(191),
  [139] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__friendly_number, 2),
  [141] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__friendly_number, 2),
  [143] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__friendly_number, 2), SHIFT_REPEAT(21),
  [146] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_integer, 2),
  [148] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_integer, 2),
  [150] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [152] = {.entry = {.count = 1, .reusable = true}}, SHIFT(236),
  [154] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_integer, 1),
  [156] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_integer, 1),
  [158] = {.entry = {.count = 1, .reusable = true}}, SHIFT(499),
  [160] = {.entry = {.count = 1, .reusable = true}}, SHIFT(255),
  [162] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_identifier, 3),
  [164] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_identifier, 3),
  [166] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_identifier, 1),
  [168] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_identifier, 1),
  [170] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__friendly_number, 1),
  [172] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__friendly_number, 1),
  [174] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [176] = {.entry = {.count = 1, .reusable = true}}, SHIFT(489),
  [178] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [180] = {.entry = {.count = 1, .reusable = true}}, SHIFT(492),
  [182] = {.entry = {.count = 1, .reusable = true}}, SHIFT(252),
  [184] = {.entry = {.count = 1, .reusable = true}}, SHIFT(576),
  [186] = {.entry = {.count = 1, .reusable = true}}, SHIFT(575),
  [188] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_case_repeat1, 2), SHIFT_REPEAT(88),
  [191] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_case_repeat1, 2), SHIFT_REPEAT(80),
  [194] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_case_repeat1, 2),
  [196] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_case_repeat1, 2), SHIFT_REPEAT(560),
  [199] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_case_repeat1, 2), SHIFT_REPEAT(414),
  [202] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_case_repeat1, 2), SHIFT_REPEAT(574),
  [205] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_case_repeat1, 2), SHIFT_REPEAT(577),
  [208] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_case_repeat1, 2), SHIFT_REPEAT(579),
  [211] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_case_repeat1, 2), SHIFT_REPEAT(461),
  [214] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_case_repeat1, 2), SHIFT_REPEAT(582),
  [217] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_case_repeat1, 2), SHIFT_REPEAT(473),
  [220] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_case_repeat1, 2), SHIFT_REPEAT(21),
  [223] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_case_repeat1, 2), SHIFT_REPEAT(21),
  [226] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_case_repeat1, 2), SHIFT_REPEAT(553),
  [229] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_case_repeat1, 2), SHIFT_REPEAT(62),
  [232] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_case_repeat1, 2), SHIFT_REPEAT(410),
  [235] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_case_repeat2, 2),
  [237] = {.entry = {.count = 1, .reusable = true}}, SHIFT(589),
  [239] = {.entry = {.count = 1, .reusable = true}}, SHIFT(216),
  [241] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [243] = {.entry = {.count = 1, .reusable = true}}, SHIFT(587),
  [245] = {.entry = {.count = 1, .reusable = true}}, SHIFT(247),
  [247] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__time, 1),
  [249] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__time, 1),
  [251] = {.entry = {.count = 1, .reusable = true}}, SHIFT(480),
  [253] = {.entry = {.count = 1, .reusable = true}}, SHIFT(387),
  [255] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [257] = {.entry = {.count = 1, .reusable = true}}, SHIFT(269),
  [259] = {.entry = {.count = 1, .reusable = true}}, SHIFT(239),
  [261] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__time, 3),
  [263] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__time, 3),
  [265] = {.entry = {.count = 1, .reusable = true}}, SHIFT(584),
  [267] = {.entry = {.count = 1, .reusable = true}}, SHIFT(392),
  [269] = {.entry = {.count = 1, .reusable = true}}, SHIFT(240),
  [271] = {.entry = {.count = 1, .reusable = true}}, SHIFT(250),
  [273] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [275] = {.entry = {.count = 1, .reusable = true}}, SHIFT(253),
  [277] = {.entry = {.count = 1, .reusable = true}}, SHIFT(580),
  [279] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_timestamp, 4),
  [281] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_timestamp, 4),
  [283] = {.entry = {.count = 1, .reusable = true}}, SHIFT(430),
  [285] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [287] = {.entry = {.count = 1, .reusable = true}}, SHIFT(267),
  [289] = {.entry = {.count = 1, .reusable = true}}, SHIFT(520),
  [291] = {.entry = {.count = 1, .reusable = true}}, SHIFT(263),
  [293] = {.entry = {.count = 1, .reusable = true}}, SHIFT(222),
  [295] = {.entry = {.count = 1, .reusable = true}}, SHIFT(229),
  [297] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [299] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__time, 5),
  [301] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__time, 5),
  [303] = {.entry = {.count = 1, .reusable = true}}, SHIFT(385),
  [305] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__aggregate_func, 1),
  [307] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [309] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__date, 5),
  [311] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__date, 5),
  [313] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_function_call_repeat1, 2),
  [315] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_function_call_repeat1, 2), SHIFT_REPEAT(158),
  [318] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_function_call_repeat1, 2),
  [320] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_call_repeat1, 2), SHIFT_REPEAT(536),
  [323] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_call_repeat1, 2), SHIFT_REPEAT(412),
  [326] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_call_repeat1, 2), SHIFT_REPEAT(568),
  [329] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_call_repeat1, 2), SHIFT_REPEAT(566),
  [332] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_call_repeat1, 2), SHIFT_REPEAT(176),
  [335] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_function_call_repeat1, 2), SHIFT_REPEAT(176),
  [338] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_call_repeat1, 2), SHIFT_REPEAT(572),
  [341] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_function_call_repeat1, 2), SHIFT_REPEAT(144),
  [344] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_function_call_repeat1, 2), SHIFT_REPEAT(166),
  [347] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_call_repeat1, 2), SHIFT_REPEAT(514),
  [350] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_call_repeat1, 2), SHIFT_REPEAT(398),
  [353] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_call_repeat1, 2), SHIFT_REPEAT(558),
  [356] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_call_repeat1, 2), SHIFT_REPEAT(555),
  [359] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_call_repeat1, 2), SHIFT_REPEAT(151),
  [362] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_function_call_repeat1, 2), SHIFT_REPEAT(151),
  [365] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_call_repeat1, 2), SHIFT_REPEAT(564),
  [368] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_function_call_repeat1, 2), SHIFT_REPEAT(139),
  [371] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__time, 7),
  [373] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__time, 7),
  [375] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__double_quote_string, 3),
  [377] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__double_quote_string, 3),
  [379] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_date, 2),
  [381] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_date, 2),
  [383] = {.entry = {.count = 1, .reusable = false}}, SHIFT(467),
  [385] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_decimal_number, 2),
  [387] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_decimal_number, 2),
  [389] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [391] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_call, 2, .production_id = 7),
  [393] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_call, 2, .production_id = 7),
  [395] = {.entry = {.count = 1, .reusable = true}}, SHIFT(398),
  [397] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__alias_identifier, 1),
  [399] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_literal_string, 1),
  [401] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_literal_string, 1),
  [403] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__alias_identifier, 1, .production_id = 6),
  [405] = {.entry = {.count = 1, .reusable = true}}, SHIFT(412),
  [407] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_literal, 1),
  [409] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_literal, 1),
  [411] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [413] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_f_string, 1),
  [415] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_f_string, 1),
  [417] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_s_string, 1),
  [419] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_s_string, 1),
  [421] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expression, 1),
  [423] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__expression, 1),
  [425] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_time, 2),
  [427] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_time, 2),
  [429] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_timezone, 1),
  [431] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_timezone, 1),
  [433] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_timestamp, 5),
  [435] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_timestamp, 5),
  [437] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_timezone, 2),
  [439] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_timezone, 2),
  [441] = {.entry = {.count = 1, .reusable = false}}, SHIFT(303),
  [443] = {.entry = {.count = 1, .reusable = true}}, SHIFT(522),
  [445] = {.entry = {.count = 1, .reusable = true}}, SHIFT(562),
  [447] = {.entry = {.count = 1, .reusable = true}}, SHIFT(559),
  [449] = {.entry = {.count = 1, .reusable = true}}, SHIFT(319),
  [451] = {.entry = {.count = 1, .reusable = false}}, SHIFT(319),
  [453] = {.entry = {.count = 1, .reusable = true}}, SHIFT(567),
  [455] = {.entry = {.count = 1, .reusable = false}}, SHIFT(293),
  [457] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expression, 3),
  [459] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__expression, 3),
  [461] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field, 3, .production_id = 19),
  [463] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_field, 3, .production_id = 19),
  [465] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_expression, 3, .production_id = 18),
  [467] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binary_expression, 3, .production_id = 18),
  [469] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [471] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [473] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [475] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [477] = {.entry = {.count = 1, .reusable = false}}, SHIFT(105),
  [479] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [481] = {.entry = {.count = 1, .reusable = false}}, SHIFT(118),
  [483] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [485] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [487] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__triple_s_string, 3),
  [489] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__triple_s_string, 3),
  [491] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__double_s_string, 3),
  [493] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__double_s_string, 3),
  [495] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__triple_f_string, 3),
  [497] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__triple_f_string, 3),
  [499] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__double_f_string, 3),
  [501] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__double_f_string, 3),
  [503] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__single_quote_string, 3),
  [505] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__single_quote_string, 3),
  [507] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_decimal_number, 3),
  [509] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_decimal_number, 3),
  [511] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__agg_rhs_assignment, 1, .production_id = 21),
  [513] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__agg_rhs_assignment, 1, .production_id = 21),
  [515] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [517] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__agg_rhs_assignment, 2, .production_id = 25),
  [519] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__agg_rhs_assignment, 2, .production_id = 25),
  [521] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_function_call_repeat1, 2), SHIFT_REPEAT(205),
  [524] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_call_repeat1, 2), SHIFT_REPEAT(530),
  [527] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_call_repeat1, 2), SHIFT_REPEAT(408),
  [530] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_call_repeat1, 2), SHIFT_REPEAT(565),
  [533] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_call_repeat1, 2), SHIFT_REPEAT(563),
  [536] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_call_repeat1, 2), SHIFT_REPEAT(200),
  [539] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_function_call_repeat1, 2), SHIFT_REPEAT(200),
  [542] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_call_repeat1, 2), SHIFT_REPEAT(571),
  [545] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_function_call_repeat1, 2), SHIFT_REPEAT(191),
  [548] = {.entry = {.count = 1, .reusable = true}}, SHIFT(408),
  [550] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__boolean_expression, 1, .production_id = 5),
  [552] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__boolean_expression, 1, .production_id = 5),
  [554] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_term, 1, .production_id = 8),
  [556] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_term, 1, .production_id = 8),
  [558] = {.entry = {.count = 1, .reusable = false}}, SHIFT(8),
  [560] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [562] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [564] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__friendly_number, 2), SHIFT_REPEAT(176),
  [567] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__friendly_number, 2), SHIFT_REPEAT(176),
  [570] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__call_parameter, 1, .production_id = 8),
  [572] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__call_parameter, 1, .production_id = 8),
  [574] = {.entry = {.count = 1, .reusable = true}}, SHIFT(286),
  [576] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable, 4, .production_id = 11),
  [578] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable, 4, .production_id = 11),
  [580] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [582] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [584] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [586] = {.entry = {.count = 1, .reusable = true}}, SHIFT(494),
  [588] = {.entry = {.count = 1, .reusable = true}}, SHIFT(348),
  [590] = {.entry = {.count = 1, .reusable = true}}, SHIFT(349),
  [592] = {.entry = {.count = 1, .reusable = true}}, SHIFT(361),
  [594] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [596] = {.entry = {.count = 1, .reusable = true}}, SHIFT(386),
  [598] = {.entry = {.count = 1, .reusable = true}}, SHIFT(495),
  [600] = {.entry = {.count = 1, .reusable = true}}, SHIFT(283),
  [602] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__friendly_number, 2), SHIFT_REPEAT(151),
  [605] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__friendly_number, 2), SHIFT_REPEAT(151),
  [608] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__friendly_number, 2), SHIFT_REPEAT(156),
  [611] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pipeline, 1),
  [613] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pipeline, 1),
  [615] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [617] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [619] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__call_parameter, 3, .production_id = 33),
  [621] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__call_parameter, 3, .production_id = 33),
  [623] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_transforms_repeat1, 2),
  [625] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_transforms_repeat1, 2),
  [627] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_transforms_repeat1, 2), SHIFT_REPEAT(60),
  [630] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_transforms_repeat1, 2), SHIFT_REPEAT(30),
  [633] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_transforms_repeat1, 2), SHIFT_REPEAT(51),
  [636] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_transforms_repeat1, 2), SHIFT_REPEAT(494),
  [639] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_transforms_repeat1, 2), SHIFT_REPEAT(348),
  [642] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_transforms_repeat1, 2), SHIFT_REPEAT(349),
  [645] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_transforms_repeat1, 2), SHIFT_REPEAT(361),
  [648] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_transforms_repeat1, 2), SHIFT_REPEAT(36),
  [651] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_transforms_repeat1, 2), SHIFT_REPEAT(386),
  [654] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_transforms_repeat1, 2), SHIFT_REPEAT(495),
  [657] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_transforms_repeat1, 2), SHIFT_REPEAT(28),
  [660] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_transforms_repeat1, 2), SHIFT_REPEAT(22),
  [663] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_transforms, 1),
  [665] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_transforms, 1),
  [667] = {.entry = {.count = 1, .reusable = false}}, SHIFT(11),
  [669] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_function_call_repeat1, 1, .production_id = 26),
  [671] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_function_call_repeat1, 1, .production_id = 26),
  [673] = {.entry = {.count = 1, .reusable = true}}, SHIFT(295),
  [675] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_range, 3, .production_id = 23),
  [677] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_range, 3, .production_id = 23),
  [679] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [681] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [683] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__friendly_number, 2), SHIFT_REPEAT(200),
  [686] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__friendly_number, 2), SHIFT_REPEAT(200),
  [689] = {.entry = {.count = 1, .reusable = true}}, SHIFT(401),
  [691] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_function_call_repeat1, 2), SHIFT_REPEAT(303),
  [694] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_call_repeat1, 2), SHIFT_REPEAT(522),
  [697] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_call_repeat1, 2), SHIFT_REPEAT(401),
  [700] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_call_repeat1, 2), SHIFT_REPEAT(562),
  [703] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_call_repeat1, 2), SHIFT_REPEAT(559),
  [706] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_call_repeat1, 2), SHIFT_REPEAT(319),
  [709] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_function_call_repeat1, 2), SHIFT_REPEAT(319),
  [712] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_call_repeat1, 2), SHIFT_REPEAT(567),
  [715] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_function_call_repeat1, 2), SHIFT_REPEAT(293),
  [718] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_transforms_repeat1, 2), SHIFT_REPEAT(23),
  [721] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_transforms_repeat1, 2), SHIFT_REPEAT(32),
  [724] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_joins, 2, .production_id = 9),
  [726] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_joins, 2, .production_id = 9),
  [728] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [730] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_takes, 2),
  [732] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_takes, 2),
  [734] = {.entry = {.count = 1, .reusable = true}}, SHIFT(394),
  [736] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_joins, 3, .production_id = 14),
  [738] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_joins, 3, .production_id = 14),
  [740] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__table_reference, 1, .production_id = 3),
  [742] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__table_reference, 1, .production_id = 3),
  [744] = {.entry = {.count = 1, .reusable = true}}, SHIFT(407),
  [746] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sorts, 2),
  [748] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sorts, 2),
  [750] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_aggregate, 4),
  [752] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_aggregate, 4),
  [754] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__sort_instruction, 1),
  [756] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__sort_instruction, 1),
  [758] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_case, 3),
  [760] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_case, 3),
  [762] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_aggregate, 3),
  [764] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_aggregate, 3),
  [766] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment, 5, .production_id = 29),
  [768] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_assignment, 5, .production_id = 29),
  [770] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment, 5, .production_id = 30),
  [772] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_assignment, 5, .production_id = 30),
  [774] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_case, 5),
  [776] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_case, 5),
  [778] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__table_selection, 3, .production_id = 10),
  [780] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__table_selection, 3, .production_id = 10),
  [782] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_aggregate, 6),
  [784] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_aggregate, 6),
  [786] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sorts, 3),
  [788] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sorts, 3),
  [790] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sorts, 6),
  [792] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sorts, 6),
  [794] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment, 3, .production_id = 20),
  [796] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_assignment, 3, .production_id = 20),
  [798] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_case, 6),
  [800] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_case, 6),
  [802] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__sort_instruction, 2),
  [804] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__sort_instruction, 2),
  [806] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__table_selection, 1, .production_id = 2),
  [808] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__table_selection, 1, .production_id = 2),
  [810] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment, 3, .production_id = 22),
  [812] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_assignment, 3, .production_id = 22),
  [814] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_aggregate, 5),
  [816] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_aggregate, 5),
  [818] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sorts, 5),
  [820] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sorts, 5),
  [822] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sorts, 4),
  [824] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sorts, 4),
  [826] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_case, 4),
  [828] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_case, 4),
  [830] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_append, 2, .production_id = 1),
  [832] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_append, 2, .production_id = 1),
  [834] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_group, 5),
  [836] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_group, 5),
  [838] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select, 5),
  [840] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_select, 5),
  [842] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select, 6),
  [844] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_select, 6),
  [846] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_conditions, 3),
  [848] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_conditions, 3),
  [850] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__tuples, 6),
  [852] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__tuples, 6),
  [854] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__triple_quote_string, 3),
  [856] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__triple_quote_string, 3),
  [858] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_derives, 2),
  [860] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_derives, 2),
  [862] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_from_text, 5),
  [864] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_from_text, 5),
  [866] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__tuples, 2),
  [868] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__tuples, 2),
  [870] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_group, 7),
  [872] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_group, 7),
  [874] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_transforms_repeat1, 1),
  [876] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_transforms_repeat1, 1),
  [878] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_conditions, 2),
  [880] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_conditions, 2),
  [882] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__boolean_expression, 3, .production_id = 17),
  [884] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__boolean_expression, 3, .production_id = 17),
  [886] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select, 3),
  [888] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_select, 3),
  [890] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select, 7),
  [892] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_select, 7),
  [894] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_joins, 4, .production_id = 14),
  [896] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_joins, 4, .production_id = 14),
  [898] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select, 4),
  [900] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_select, 4),
  [902] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_definition, 5, .production_id = 16),
  [904] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_definition, 5, .production_id = 16),
  [906] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_joins, 3, .production_id = 9),
  [908] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_joins, 3, .production_id = 9),
  [910] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_from_text, 2),
  [912] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_from_text, 2),
  [914] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_from, 2, .production_id = 1),
  [916] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_from, 2, .production_id = 1),
  [918] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_loop, 4),
  [920] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_loop, 4),
  [922] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_conditions, 4),
  [924] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_conditions, 4),
  [926] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select, 2),
  [928] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_select, 2),
  [930] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__tuples, 7),
  [932] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__tuples, 7),
  [934] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__tuples, 3),
  [936] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__tuples, 3),
  [938] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_group, 8),
  [940] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_group, 8),
  [942] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_group, 9),
  [944] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_group, 9),
  [946] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__tuples, 5),
  [948] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__tuples, 5),
  [950] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_group, 6),
  [952] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_group, 6),
  [954] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__tuples, 4),
  [956] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__tuples, 4),
  [958] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_filter, 2, .production_id = 4),
  [960] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_filter, 2, .production_id = 4),
  [962] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_case_repeat1, 1),
  [964] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_case_repeat1, 1),
  [966] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_case_condition, 4, .production_id = 35),
  [968] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_case_condition, 4, .production_id = 35),
  [970] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [972] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_case_condition, 4, .production_id = 34),
  [974] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_case_condition, 4, .production_id = 34),
  [976] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [978] = {.entry = {.count = 1, .reusable = true}}, SHIFT(214),
  [980] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [982] = {.entry = {.count = 1, .reusable = true}}, SHIFT(242),
  [984] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_aggregate_repeat1, 2),
  [986] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__agg_keywords, 1),
  [988] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__agg_keywords, 1),
  [990] = {.entry = {.count = 1, .reusable = true}}, SHIFT(288),
  [992] = {.entry = {.count = 1, .reusable = true}}, SHIFT(158),
  [994] = {.entry = {.count = 1, .reusable = true}}, SHIFT(395),
  [996] = {.entry = {.count = 1, .reusable = true}}, SHIFT(505),
  [998] = {.entry = {.count = 1, .reusable = true}}, SHIFT(415),
  [1000] = {.entry = {.count = 1, .reusable = true}}, SHIFT(554),
  [1002] = {.entry = {.count = 1, .reusable = true}}, SHIFT(550),
  [1004] = {.entry = {.count = 1, .reusable = true}}, SHIFT(373),
  [1006] = {.entry = {.count = 1, .reusable = true}}, SHIFT(166),
  [1008] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_conditions_repeat1, 2),
  [1010] = {.entry = {.count = 1, .reusable = true}}, SHIFT(303),
  [1012] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__aggregate_func, 2),
  [1014] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_aggregate_operation, 2),
  [1016] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 1),
  [1018] = {.entry = {.count = 1, .reusable = true}}, SHIFT(397),
  [1020] = {.entry = {.count = 1, .reusable = true}}, SHIFT(549),
  [1022] = {.entry = {.count = 1, .reusable = true}}, SHIFT(404),
  [1024] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__friendly_number, 2), SHIFT_REPEAT(319),
  [1027] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__friendly_number, 2), SHIFT_REPEAT(319),
  [1030] = {.entry = {.count = 1, .reusable = true}}, SHIFT(205),
  [1032] = {.entry = {.count = 1, .reusable = true}}, SHIFT(279),
  [1034] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [1036] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [1038] = {.entry = {.count = 1, .reusable = true}}, SHIFT(292),
  [1040] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [1042] = {.entry = {.count = 1, .reusable = true}}, SHIFT(296),
  [1044] = {.entry = {.count = 1, .reusable = true}}, SHIFT(275),
  [1046] = {.entry = {.count = 1, .reusable = true}}, SHIFT(251),
  [1048] = {.entry = {.count = 1, .reusable = true}}, SHIFT(444),
  [1050] = {.entry = {.count = 1, .reusable = true}}, SHIFT(362),
  [1052] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_program_repeat2, 2),
  [1054] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat2, 2), SHIFT_REPEAT(388),
  [1057] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat2, 2), SHIFT_REPEAT(445),
  [1060] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat2, 2), SHIFT_REPEAT(457),
  [1063] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat2, 2), SHIFT_REPEAT(456),
  [1066] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat2, 2), SHIFT_REPEAT(433),
  [1069] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_module_definition_repeat1, 2), SHIFT_REPEAT(388),
  [1072] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_module_definition_repeat1, 2), SHIFT_REPEAT(445),
  [1075] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_module_definition_repeat1, 2), SHIFT_REPEAT(457),
  [1078] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_module_definition_repeat1, 2), SHIFT_REPEAT(444),
  [1081] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_module_definition_repeat1, 2), SHIFT_REPEAT(433),
  [1084] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_module_definition_repeat1, 2),
  [1086] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 2),
  [1088] = {.entry = {.count = 1, .reusable = true}}, SHIFT(357),
  [1090] = {.entry = {.count = 1, .reusable = true}}, SHIFT(372),
  [1092] = {.entry = {.count = 1, .reusable = true}}, SHIFT(248),
  [1094] = {.entry = {.count = 1, .reusable = true}}, SHIFT(266),
  [1096] = {.entry = {.count = 1, .reusable = true}}, SHIFT(265),
  [1098] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_group_repeat2, 2), SHIFT_REPEAT(494),
  [1101] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_group_repeat2, 2), SHIFT_REPEAT(348),
  [1104] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_group_repeat2, 2), SHIFT_REPEAT(349),
  [1107] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_group_repeat2, 2), SHIFT_REPEAT(372),
  [1110] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_group_repeat2, 2),
  [1112] = {.entry = {.count = 1, .reusable = true}}, SHIFT(268),
  [1114] = {.entry = {.count = 1, .reusable = true}}, SHIFT(238),
  [1116] = {.entry = {.count = 1, .reusable = true}}, SHIFT(502),
  [1118] = {.entry = {.count = 1, .reusable = true}}, SHIFT(226),
  [1120] = {.entry = {.count = 1, .reusable = true}}, SHIFT(503),
  [1122] = {.entry = {.count = 1, .reusable = true}}, SHIFT(183),
  [1124] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2),
  [1126] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2),
  [1128] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(463),
  [1131] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module_call, 4, .production_id = 27),
  [1133] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_module_call, 4, .production_id = 27),
  [1135] = {.entry = {.count = 1, .reusable = true}}, SHIFT(449),
  [1137] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module_call, 3, .production_id = 24),
  [1139] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_module_call, 3, .production_id = 24),
  [1141] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_module_call_repeat1, 2, .production_id = 32),
  [1143] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_module_call_repeat1, 2, .production_id = 32),
  [1145] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_module_call_repeat1, 2, .production_id = 32), SHIFT_REPEAT(449),
  [1148] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pipeline, 2),
  [1150] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pipeline, 2),
  [1152] = {.entry = {.count = 1, .reusable = true}}, SHIFT(227),
  [1154] = {.entry = {.count = 1, .reusable = true}}, SHIFT(335),
  [1156] = {.entry = {.count = 1, .reusable = true}}, SHIFT(421),
  [1158] = {.entry = {.count = 1, .reusable = true}}, SHIFT(475),
  [1160] = {.entry = {.count = 1, .reusable = true}}, SHIFT(234),
  [1162] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_module_call_repeat1, 2, .production_id = 31),
  [1164] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_module_call_repeat1, 2, .production_id = 31),
  [1166] = {.entry = {.count = 1, .reusable = false}}, SHIFT(433),
  [1168] = {.entry = {.count = 1, .reusable = true}}, SHIFT(370),
  [1170] = {.entry = {.count = 1, .reusable = false}}, SHIFT(183),
  [1172] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable, 5, .production_id = 11),
  [1174] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable, 5, .production_id = 11),
  [1176] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable, 6, .production_id = 11),
  [1178] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable, 6, .production_id = 11),
  [1180] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_target, 1),
  [1182] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_target, 1),
  [1184] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 1),
  [1186] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 1),
  [1188] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__friendly_number, 2), SHIFT_REPEAT(373),
  [1191] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__friendly_number, 2), SHIFT_REPEAT(373),
  [1194] = {.entry = {.count = 1, .reusable = false}}, SHIFT(373),
  [1196] = {.entry = {.count = 1, .reusable = false}}, SHIFT(496),
  [1198] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module_definition, 5),
  [1200] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_module_definition, 5),
  [1202] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_prql, 4, .production_id = 12),
  [1204] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_prql, 4, .production_id = 12),
  [1206] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable, 7, .production_id = 11),
  [1208] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable, 7, .production_id = 11),
  [1210] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_prql, 4, .production_id = 13),
  [1212] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_prql, 4, .production_id = 13),
  [1214] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_window_definitions_repeat1, 2), SHIFT_REPEAT(523),
  [1217] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_window_definitions_repeat1, 2),
  [1219] = {.entry = {.count = 1, .reusable = true}}, SHIFT(354),
  [1221] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_function_definition_repeat1, 2),
  [1223] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_definition_repeat1, 2), SHIFT_REPEAT(548),
  [1226] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_definition_repeat1, 2), SHIFT_REPEAT(396),
  [1229] = {.entry = {.count = 1, .reusable = true}}, SHIFT(523),
  [1231] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_module_definition_repeat1, 1),
  [1233] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_module_definition_repeat1, 1),
  [1235] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [1237] = {.entry = {.count = 1, .reusable = true}}, SHIFT(548),
  [1239] = {.entry = {.count = 1, .reusable = true}}, SHIFT(396),
  [1241] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_program_repeat2, 1),
  [1243] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_program_repeat2, 1),
  [1245] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_window_definitions, 1),
  [1247] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__window_definition, 3),
  [1249] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__friendly_number, 2), SHIFT_REPEAT(404),
  [1252] = {.entry = {.count = 1, .reusable = true}}, SHIFT(409),
  [1254] = {.entry = {.count = 1, .reusable = true}}, SHIFT(451),
  [1256] = {.entry = {.count = 1, .reusable = true}}, SHIFT(384),
  [1258] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_window, 5),
  [1260] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_group_repeat2, 1),
  [1262] = {.entry = {.count = 1, .reusable = true}}, SHIFT(507),
  [1264] = {.entry = {.count = 1, .reusable = true}}, SHIFT(516),
  [1266] = {.entry = {.count = 1, .reusable = true}}, SHIFT(285),
  [1268] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter, 1),
  [1270] = {.entry = {.count = 1, .reusable = true}}, SHIFT(524),
  [1272] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_window_definitions_repeat1, 1),
  [1274] = {.entry = {.count = 1, .reusable = true}}, SHIFT(465),
  [1276] = {.entry = {.count = 1, .reusable = true}}, SHIFT(532),
  [1278] = {.entry = {.count = 1, .reusable = true}}, SHIFT(487),
  [1280] = {.entry = {.count = 1, .reusable = false}}, SHIFT(37),
  [1282] = {.entry = {.count = 1, .reusable = true}}, SHIFT(538),
  [1284] = {.entry = {.count = 1, .reusable = true}}, SHIFT(478),
  [1286] = {.entry = {.count = 1, .reusable = true}}, SHIFT(380),
  [1288] = {.entry = {.count = 1, .reusable = true}}, SHIFT(365),
  [1290] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [1292] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__tuples_repeat1, 2), SHIFT_REPEAT(57),
  [1295] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__tuples_repeat1, 2),
  [1297] = {.entry = {.count = 1, .reusable = true}}, SHIFT(355),
  [1299] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_sorts_repeat1, 2), SHIFT_REPEAT(356),
  [1302] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_sorts_repeat1, 2),
  [1304] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__inner_triple_quotes, 2), SHIFT_REPEAT(474),
  [1307] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__inner_triple_quotes, 2),
  [1309] = {.entry = {.count = 1, .reusable = false}}, SHIFT(477),
  [1311] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [1313] = {.entry = {.count = 1, .reusable = true}}, SHIFT(243),
  [1315] = {.entry = {.count = 1, .reusable = true}}, SHIFT(261),
  [1317] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_aggregate_repeat1, 2), SHIFT_REPEAT(7),
  [1320] = {.entry = {.count = 1, .reusable = false}}, SHIFT(474),
  [1322] = {.entry = {.count = 1, .reusable = false}}, SHIFT(244),
  [1324] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [1326] = {.entry = {.count = 1, .reusable = true}}, SHIFT(490),
  [1328] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_direction, 1),
  [1330] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_case_repeat2, 2), SHIFT_REPEAT(54),
  [1333] = {.entry = {.count = 1, .reusable = true}}, SHIFT(585),
  [1335] = {.entry = {.count = 1, .reusable = true}}, SHIFT(460),
  [1337] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [1339] = {.entry = {.count = 1, .reusable = false}}, SHIFT(121),
  [1341] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [1343] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [1345] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_conditions_repeat1, 2), SHIFT_REPEAT(82),
  [1348] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_group_repeat1, 2), SHIFT_REPEAT(58),
  [1351] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_group_repeat1, 2),
  [1353] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [1355] = {.entry = {.count = 1, .reusable = true}}, SHIFT(346),
  [1357] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_variable_repeat1, 2), SHIFT_REPEAT(380),
  [1360] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_variable_repeat1, 2),
  [1362] = {.entry = {.count = 1, .reusable = true}}, SHIFT(351),
  [1364] = {.entry = {.count = 1, .reusable = true}}, SHIFT(235),
  [1366] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [1368] = {.entry = {.count = 1, .reusable = true}}, SHIFT(264),
  [1370] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [1372] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter, 3, .production_id = 15),
  [1374] = {.entry = {.count = 1, .reusable = false}}, SHIFT(119),
  [1376] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [1378] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_function_definition_repeat1, 1),
  [1380] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [1382] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [1384] = {.entry = {.count = 1, .reusable = true}}, SHIFT(479),
  [1386] = {.entry = {.count = 1, .reusable = true}}, SHIFT(483),
  [1388] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__join_definition, 3),
  [1390] = {.entry = {.count = 1, .reusable = true}}, SHIFT(472),
  [1392] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [1394] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__inner_triple_quotes, 1),
  [1396] = {.entry = {.count = 1, .reusable = true}}, SHIFT(586),
  [1398] = {.entry = {.count = 1, .reusable = false}}, SHIFT(590),
  [1400] = {.entry = {.count = 1, .reusable = true}}, SHIFT(470),
  [1402] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [1404] = {.entry = {.count = 1, .reusable = true}}, SHIFT(500),
  [1406] = {.entry = {.count = 1, .reusable = true}}, SHIFT(423),
  [1408] = {.entry = {.count = 1, .reusable = true}}, SHIFT(327),
  [1410] = {.entry = {.count = 1, .reusable = true}}, SHIFT(439),
  [1412] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [1414] = {.entry = {.count = 1, .reusable = true}}, SHIFT(260),
  [1416] = {.entry = {.count = 1, .reusable = true}}, SHIFT(481),
  [1418] = {.entry = {.count = 1, .reusable = true}}, SHIFT(353),
  [1420] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [1422] = {.entry = {.count = 1, .reusable = true}}, SHIFT(338),
  [1424] = {.entry = {.count = 1, .reusable = true}}, SHIFT(328),
  [1426] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [1428] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [1430] = {.entry = {.count = 1, .reusable = true}}, SHIFT(208),
  [1432] = {.entry = {.count = 1, .reusable = true}}, SHIFT(406),
  [1434] = {.entry = {.count = 1, .reusable = true}}, SHIFT(471),
  [1436] = {.entry = {.count = 1, .reusable = true}}, SHIFT(583),
  [1438] = {.entry = {.count = 1, .reusable = true}}, SHIFT(220),
  [1440] = {.entry = {.count = 1, .reusable = true}}, SHIFT(515),
  [1442] = {.entry = {.count = 1, .reusable = true}}, SHIFT(403),
  [1444] = {.entry = {.count = 1, .reusable = true}}, SHIFT(405),
  [1446] = {.entry = {.count = 1, .reusable = true}}, SHIFT(221),
  [1448] = {.entry = {.count = 1, .reusable = true}}, SHIFT(347),
  [1450] = {.entry = {.count = 1, .reusable = true}}, SHIFT(411),
  [1452] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [1454] = {.entry = {.count = 1, .reusable = true}}, SHIFT(182),
  [1456] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [1458] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [1460] = {.entry = {.count = 1, .reusable = true}}, SHIFT(171),
  [1462] = {.entry = {.count = 1, .reusable = true}}, SHIFT(186),
  [1464] = {.entry = {.count = 1, .reusable = true}}, SHIFT(173),
  [1466] = {.entry = {.count = 1, .reusable = true}}, SHIFT(431),
  [1468] = {.entry = {.count = 1, .reusable = true}}, SHIFT(175),
  [1470] = {.entry = {.count = 1, .reusable = true}}, SHIFT(342),
  [1472] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [1474] = {.entry = {.count = 1, .reusable = true}}, SHIFT(311),
  [1476] = {.entry = {.count = 1, .reusable = true}}, SHIFT(350),
  [1478] = {.entry = {.count = 1, .reusable = true}}, SHIFT(312),
  [1480] = {.entry = {.count = 1, .reusable = true}}, SHIFT(169),
  [1482] = {.entry = {.count = 1, .reusable = true}}, SHIFT(299),
  [1484] = {.entry = {.count = 1, .reusable = true}}, SHIFT(462),
  [1486] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [1488] = {.entry = {.count = 1, .reusable = true}}, SHIFT(179),
  [1490] = {.entry = {.count = 1, .reusable = true}}, SHIFT(206),
  [1492] = {.entry = {.count = 1, .reusable = true}}, SHIFT(272),
  [1494] = {.entry = {.count = 1, .reusable = true}}, SHIFT(204),
  [1496] = {.entry = {.count = 1, .reusable = true}}, SHIFT(310),
  [1498] = {.entry = {.count = 1, .reusable = true}}, SHIFT(202),
  [1500] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [1502] = {.entry = {.count = 1, .reusable = true}}, SHIFT(165),
  [1504] = {.entry = {.count = 1, .reusable = true}}, SHIFT(274),
  [1506] = {.entry = {.count = 1, .reusable = true}}, SHIFT(172),
  [1508] = {.entry = {.count = 1, .reusable = true}}, SHIFT(203),
  [1510] = {.entry = {.count = 1, .reusable = true}}, SHIFT(174),
  [1512] = {.entry = {.count = 1, .reusable = true}}, SHIFT(297),
  [1514] = {.entry = {.count = 1, .reusable = true}}, SHIFT(390),
  [1516] = {.entry = {.count = 1, .reusable = true}}, SHIFT(178),
  [1518] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [1520] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [1522] = {.entry = {.count = 1, .reusable = true}}, SHIFT(192),
  [1524] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [1526] = {.entry = {.count = 1, .reusable = true}}, SHIFT(504),
  [1528] = {.entry = {.count = 1, .reusable = false}}, SHIFT(508),
  [1530] = {.entry = {.count = 1, .reusable = false}}, SHIFT(509),
  [1532] = {.entry = {.count = 1, .reusable = true}}, SHIFT(339),
  [1534] = {.entry = {.count = 1, .reusable = true}}, SHIFT(511),
  [1536] = {.entry = {.count = 1, .reusable = true}}, SHIFT(513),
  [1538] = {.entry = {.count = 1, .reusable = false}}, SHIFT(517),
  [1540] = {.entry = {.count = 1, .reusable = false}}, SHIFT(518),
  [1542] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__self_join, 2),
  [1544] = {.entry = {.count = 1, .reusable = true}}, SHIFT(521),
  [1546] = {.entry = {.count = 1, .reusable = false}}, SHIFT(525),
  [1548] = {.entry = {.count = 1, .reusable = false}}, SHIFT(526),
  [1550] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [1552] = {.entry = {.count = 1, .reusable = true}}, SHIFT(529),
  [1554] = {.entry = {.count = 1, .reusable = false}}, SHIFT(533),
  [1556] = {.entry = {.count = 1, .reusable = false}}, SHIFT(534),
  [1558] = {.entry = {.count = 1, .reusable = true}}, SHIFT(535),
  [1560] = {.entry = {.count = 1, .reusable = false}}, SHIFT(539),
  [1562] = {.entry = {.count = 1, .reusable = false}}, SHIFT(540),
  [1564] = {.entry = {.count = 1, .reusable = true}}, SHIFT(541),
  [1566] = {.entry = {.count = 1, .reusable = false}}, SHIFT(543),
  [1568] = {.entry = {.count = 1, .reusable = true}}, SHIFT(544),
  [1570] = {.entry = {.count = 1, .reusable = true}}, SHIFT(545),
  [1572] = {.entry = {.count = 1, .reusable = true}}, SHIFT(546),
  [1574] = {.entry = {.count = 1, .reusable = true}}, SHIFT(547),
  [1576] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [1578] = {.entry = {.count = 1, .reusable = false}}, SHIFT(485),
  [1580] = {.entry = {.count = 1, .reusable = true}}, SHIFT(340),
  [1582] = {.entry = {.count = 1, .reusable = false}}, SHIFT(581),
  [1584] = {.entry = {.count = 1, .reusable = true}}, SHIFT(552),
  [1586] = {.entry = {.count = 1, .reusable = false}}, SHIFT(528),
  [1588] = {.entry = {.count = 1, .reusable = true}}, SHIFT(337),
  [1590] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [1592] = {.entry = {.count = 1, .reusable = false}}, SHIFT(512),
  [1594] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [1596] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [1598] = {.entry = {.count = 1, .reusable = true}}, SHIFT(466),
  [1600] = {.entry = {.count = 1, .reusable = true}}, SHIFT(578),
  [1602] = {.entry = {.count = 1, .reusable = true}}, SHIFT(364),
  [1604] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 2),
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
