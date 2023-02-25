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
#define STATE_COUNT 503
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 185
#define ALIAS_COUNT 0
#define TOKEN_COUNT 103
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
  sym_keyword_switch = 13,
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
  sym_keyword_side = 25,
  sym_keyword_inner = 26,
  sym_keyword_left = 27,
  sym_keyword_right = 28,
  sym_keyword_full = 29,
  sym_keyword_and = 30,
  sym_keyword_or = 31,
  sym_keyword_in = 32,
  sym_keyword_rolling = 33,
  sym_keyword_rows = 34,
  sym_keyword_expanding = 35,
  sym_keyword_null = 36,
  sym_keyword_func = 37,
  sym_keyword_let = 38,
  sym_keyword_prql = 39,
  sym_keyword_version = 40,
  sym_keyword_target = 41,
  anon_sym_COLON = 42,
  anon_sym_sql_DOTansi = 43,
  anon_sym_sql_DOTbigquery = 44,
  anon_sym_sql_DOTclickhouse = 45,
  anon_sym_sql_DOTgeneric = 46,
  anon_sym_sql_DOThive = 47,
  anon_sym_sql_DOTmssql = 48,
  anon_sym_sql_DOTmysql = 49,
  anon_sym_sql_DOTpostgres = 50,
  anon_sym_sql_DOTsqlite = 51,
  anon_sym_sql_DOTsnowflake = 52,
  anon_sym_sql_DOTduckdb = 53,
  sym_keyword_from_text = 54,
  sym_keyword_format = 55,
  sym_keyword_csv = 56,
  sym_keyword_json = 57,
  anon_sym_EQ = 58,
  anon_sym_LPAREN = 59,
  anon_sym_RPAREN = 60,
  anon_sym_DASH_GT = 61,
  anon_sym_LBRACK = 62,
  anon_sym_COMMA = 63,
  anon_sym_RBRACK = 64,
  anon_sym_DASH = 65,
  anon_sym_PLUS = 66,
  anon_sym_EQ_EQ = 67,
  anon_sym_DQUOTE = 68,
  aux_sym__double_quote_string_token1 = 69,
  anon_sym_SQUOTE = 70,
  aux_sym__single_quote_string_token1 = 71,
  aux_sym__inner_triple_quotes_token1 = 72,
  anon_sym_DQUOTE_DQUOTE_DQUOTE = 73,
  anon_sym_f_DQUOTE = 74,
  anon_sym_f_DQUOTE_DQUOTE_DQUOTE = 75,
  anon_sym_s_DQUOTE = 76,
  anon_sym_s_DQUOTE_DQUOTE_DQUOTE = 77,
  sym__natural_number = 78,
  anon_sym__ = 79,
  anon_sym_DOT = 80,
  anon_sym_BQUOTE = 81,
  sym__identifier = 82,
  sym__identifier_dot = 83,
  anon_sym_DOT_DOT = 84,
  anon_sym_STAR = 85,
  anon_sym_SLASH = 86,
  anon_sym_BANG_EQ = 87,
  anon_sym_GT = 88,
  anon_sym_GT_EQ = 89,
  anon_sym_LT = 90,
  anon_sym_LT_EQ = 91,
  anon_sym_QMARK_QMARK = 92,
  aux_sym__date_token1 = 93,
  aux_sym__date_token2 = 94,
  anon_sym_AT = 95,
  aux_sym__time_token1 = 96,
  anon_sym_T = 97,
  anon_sym_Z = 98,
  anon_sym_POUND = 99,
  aux_sym_comment_token1 = 100,
  sym_bang = 101,
  sym_pipe = 102,
  sym_program = 103,
  sym_prql = 104,
  sym_target = 105,
  sym_pipeline = 106,
  sym_variable = 107,
  sym_function_definition = 108,
  sym_parameter = 109,
  sym__call_parameter = 110,
  sym_function_call = 111,
  sym_from_text = 112,
  sym_transforms = 113,
  sym_from = 114,
  sym__table_selection = 115,
  sym__table_reference = 116,
  sym_derives = 117,
  sym_append = 118,
  sym_filter = 119,
  sym__boolean_expression = 120,
  sym_switch = 121,
  sym_switch_condition = 122,
  sym_aggregate = 123,
  sym__agg_keywords = 124,
  sym_aggregate_operation = 125,
  sym__aggregate_count = 126,
  sym_sorts = 127,
  sym__sort_instruction = 128,
  sym_direction = 129,
  sym_takes = 130,
  sym_window = 131,
  sym_window_definitions = 132,
  sym__window_definition = 133,
  sym_group = 134,
  sym_joins = 135,
  sym__join_definition = 136,
  sym_conditions = 137,
  sym__self_join = 138,
  sym_select = 139,
  sym_term = 140,
  sym__expression = 141,
  sym_literal = 142,
  sym_f_string = 143,
  sym_s_string = 144,
  sym__double_quote_string = 145,
  sym__single_quote_string = 146,
  aux_sym__inner_triple_quotes = 147,
  sym__triple_quote_string = 148,
  sym__double_f_string = 149,
  sym__triple_f_string = 150,
  sym__double_s_string = 151,
  sym__triple_s_string = 152,
  sym__literal_string = 153,
  aux_sym__friendly_number = 154,
  sym_integer = 155,
  sym_decimal_number = 156,
  sym_field = 157,
  sym__alias_identifier = 158,
  sym_identifier = 159,
  sym_range = 160,
  sym__agg_rhs_assignment = 161,
  sym_assignment = 162,
  sym_binary_expression = 163,
  sym__date = 164,
  sym_date = 165,
  sym__time = 166,
  sym_time = 167,
  sym_timestamp = 168,
  sym_timezone = 169,
  sym_comment = 170,
  aux_sym_program_repeat1 = 171,
  aux_sym_program_repeat2 = 172,
  aux_sym_function_definition_repeat1 = 173,
  aux_sym_function_call_repeat1 = 174,
  aux_sym_transforms_repeat1 = 175,
  aux_sym_derives_repeat1 = 176,
  aux_sym_switch_repeat1 = 177,
  aux_sym_switch_repeat2 = 178,
  aux_sym_aggregate_repeat1 = 179,
  aux_sym_sorts_repeat1 = 180,
  aux_sym_window_definitions_repeat1 = 181,
  aux_sym_group_repeat1 = 182,
  aux_sym_group_repeat2 = 183,
  aux_sym_conditions_repeat1 = 184,
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
  [sym_switch] = "switch",
  [sym_switch_condition] = "switch_condition",
  [sym_aggregate] = "aggregate",
  [sym__agg_keywords] = "_agg_keywords",
  [sym_aggregate_operation] = "aggregate_operation",
  [sym__aggregate_count] = "aggregate_operation",
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
  [sym__literal_string] = "_literal_string",
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
  [sym_switch] = sym_switch,
  [sym_switch_condition] = sym_switch_condition,
  [sym_aggregate] = sym_aggregate,
  [sym__agg_keywords] = sym__agg_keywords,
  [sym_aggregate_operation] = sym_aggregate_operation,
  [sym__aggregate_count] = sym_aggregate_operation,
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
  [sym__literal_string] = sym__literal_string,
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
  [sym__agg_keywords] = {
    .visible = false,
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
      if (eof) ADVANCE(441);
      if (lookahead == '!') ADVANCE(829);
      if (lookahead == '"') ADVANCE(545);
      if (lookahead == '#') ADVANCE(822);
      if (lookahead == '\'') ADVANCE(549);
      if (lookahead == '(') ADVANCE(535);
      if (lookahead == ')') ADVANCE(536);
      if (lookahead == '*') ADVANCE(806);
      if (lookahead == '+') ADVANCE(543);
      if (lookahead == ',') ADVANCE(539);
      if (lookahead == '-') ADVANCE(542);
      if (lookahead == '.') ADVANCE(565);
      if (lookahead == '/') ADVANCE(807);
      if (lookahead == ':') ADVANCE(517);
      if (lookahead == '<') ADVANCE(811);
      if (lookahead == '=') ADVANCE(534);
      if (lookahead == '>') ADVANCE(809);
      if (lookahead == '?') ADVANCE(26);
      if (lookahead == '@') ADVANCE(817);
      if (lookahead == 'A') ADVANCE(77);
      if (lookahead == 'C') ADVANCE(131);
      if (lookahead == 'D') ADVANCE(62);
      if (lookahead == 'E') ADVANCE(188);
      if (lookahead == 'F') ADVANCE(28);
      if (lookahead == 'G') ADVANCE(147);
      if (lookahead == 'I') ADVANCE(114);
      if (lookahead == 'J') ADVANCE(137);
      if (lookahead == 'L') ADVANCE(48);
      if (lookahead == 'M') ADVANCE(29);
      if (lookahead == 'N') ADVANCE(179);
      if (lookahead == 'O') ADVANCE(143);
      if (lookahead == 'P') ADVANCE(144);
      if (lookahead == 'R') ADVANCE(49);
      if (lookahead == 'S') ADVANCE(64);
      if (lookahead == 'T') ADVANCE(819);
      if (lookahead == 'V') ADVANCE(66);
      if (lookahead == 'W') ADVANCE(90);
      if (lookahead == 'Z') ADVANCE(821);
      if (lookahead == '[') ADVANCE(538);
      if (lookahead == ']') ADVANCE(540);
      if (lookahead == '_') ADVANCE(563);
      if (lookahead == '`') ADVANCE(566);
      if (lookahead == 'a') ADVANCE(256);
      if (lookahead == 'c') ADVANCE(331);
      if (lookahead == 'd') ADVANCE(237);
      if (lookahead == 'e') ADVANCE(411);
      if (lookahead == 'f') ADVANCE(10);
      if (lookahead == 'g') ADVANCE(354);
      if (lookahead == 'i') ADVANCE(311);
      if (lookahead == 'j') ADVANCE(340);
      if (lookahead == 'l') ADVANCE(219);
      if (lookahead == 'm') ADVANCE(192);
      if (lookahead == 'n') ADVANCE(397);
      if (lookahead == 'o') ADVANCE(349);
      if (lookahead == 'p') ADVANCE(350);
      if (lookahead == 'r') ADVANCE(220);
      if (lookahead == 's') ADVANCE(11);
      if (lookahead == 't') ADVANCE(191);
      if (lookahead == 'v') ADVANCE(241);
      if (lookahead == 'w') ADVANCE(273);
      if (lookahead == '|') ADVANCE(830);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(436)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(562);
      END_STATE();
    case 1:
      if (lookahead == '!') ADVANCE(23);
      if (lookahead == '"') ADVANCE(545);
      if (lookahead == '#') ADVANCE(822);
      if (lookahead == '\'') ADVANCE(549);
      if (lookahead == '(') ADVANCE(535);
      if (lookahead == ')') ADVANCE(536);
      if (lookahead == '*') ADVANCE(806);
      if (lookahead == '+') ADVANCE(543);
      if (lookahead == ',') ADVANCE(539);
      if (lookahead == '-') ADVANCE(541);
      if (lookahead == '.') ADVANCE(565);
      if (lookahead == '/') ADVANCE(807);
      if (lookahead == '<') ADVANCE(811);
      if (lookahead == '=') ADVANCE(24);
      if (lookahead == '>') ADVANCE(809);
      if (lookahead == '?') ADVANCE(26);
      if (lookahead == 'A') ADVANCE(636);
      if (lookahead == 'F') ADVANCE(573);
      if (lookahead == 'N') ADVANCE(677);
      if (lookahead == 'O') ADVANCE(648);
      if (lookahead == 'T') ADVANCE(651);
      if (lookahead == ']') ADVANCE(540);
      if (lookahead == '_') ADVANCE(564);
      if (lookahead == '`') ADVANCE(566);
      if (lookahead == 'a') ADVANCE(754);
      if (lookahead == 'f') ADVANCE(691);
      if (lookahead == 'n') ADVANCE(793);
      if (lookahead == 'o') ADVANCE(767);
      if (lookahead == 't') ADVANCE(769);
      if (lookahead == '|') ADVANCE(830);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(418)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(562);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(803);
      END_STATE();
    case 2:
      if (lookahead == '!') ADVANCE(23);
      if (lookahead == '"') ADVANCE(545);
      if (lookahead == '#') ADVANCE(822);
      if (lookahead == '\'') ADVANCE(549);
      if (lookahead == ')') ADVANCE(536);
      if (lookahead == '*') ADVANCE(806);
      if (lookahead == '+') ADVANCE(543);
      if (lookahead == '-') ADVANCE(541);
      if (lookahead == '.') ADVANCE(565);
      if (lookahead == '/') ADVANCE(807);
      if (lookahead == '<') ADVANCE(811);
      if (lookahead == '=') ADVANCE(24);
      if (lookahead == '>') ADVANCE(809);
      if (lookahead == '?') ADVANCE(26);
      if (lookahead == 'A') ADVANCE(610);
      if (lookahead == 'D') ADVANCE(602);
      if (lookahead == 'F') ADVANCE(572);
      if (lookahead == 'G') ADVANCE(655);
      if (lookahead == 'I') ADVANCE(639);
      if (lookahead == 'J') ADVANCE(644);
      if (lookahead == 'N') ADVANCE(677);
      if (lookahead == 'O') ADVANCE(648);
      if (lookahead == 'R') ADVANCE(600);
      if (lookahead == 'S') ADVANCE(603);
      if (lookahead == 'T') ADVANCE(576);
      if (lookahead == '_') ADVANCE(564);
      if (lookahead == '`') ADVANCE(566);
      if (lookahead == 'a') ADVANCE(729);
      if (lookahead == 'd') ADVANCE(720);
      if (lookahead == 'f') ADVANCE(690);
      if (lookahead == 'g') ADVANCE(773);
      if (lookahead == 'i') ADVANCE(757);
      if (lookahead == 'j') ADVANCE(762);
      if (lookahead == 'n') ADVANCE(793);
      if (lookahead == 'o') ADVANCE(767);
      if (lookahead == 'r') ADVANCE(718);
      if (lookahead == 's') ADVANCE(721);
      if (lookahead == 't') ADVANCE(694);
      if (lookahead == '|') ADVANCE(830);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(416)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(562);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(803);
      END_STATE();
    case 3:
      if (lookahead == '!') ADVANCE(828);
      if (lookahead == '"') ADVANCE(545);
      if (lookahead == '#') ADVANCE(822);
      if (lookahead == '\'') ADVANCE(549);
      if (lookahead == '(') ADVANCE(535);
      if (lookahead == ',') ADVANCE(539);
      if (lookahead == '-') ADVANCE(541);
      if (lookahead == '.') ADVANCE(565);
      if (lookahead == '=') ADVANCE(24);
      if (lookahead == '@') ADVANCE(817);
      if (lookahead == 'F') ADVANCE(573);
      if (lookahead == 'N') ADVANCE(677);
      if (lookahead == 'T') ADVANCE(651);
      if (lookahead == '[') ADVANCE(538);
      if (lookahead == ']') ADVANCE(540);
      if (lookahead == '_') ADVANCE(564);
      if (lookahead == '`') ADVANCE(566);
      if (lookahead == 'f') ADVANCE(567);
      if (lookahead == 'n') ADVANCE(793);
      if (lookahead == 's') ADVANCE(570);
      if (lookahead == 't') ADVANCE(769);
      if (lookahead == '|') ADVANCE(830);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(417)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(562);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(803);
      END_STATE();
    case 4:
      if (lookahead == '"') ADVANCE(545);
      if (lookahead == '#') ADVANCE(822);
      if (lookahead == '\'') ADVANCE(549);
      if (lookahead == '(') ADVANCE(535);
      if (lookahead == ')') ADVANCE(536);
      if (lookahead == ',') ADVANCE(539);
      if (lookahead == '-') ADVANCE(541);
      if (lookahead == '.') ADVANCE(565);
      if (lookahead == ':') ADVANCE(517);
      if (lookahead == 'F') ADVANCE(573);
      if (lookahead == 'N') ADVANCE(677);
      if (lookahead == 'T') ADVANCE(651);
      if (lookahead == ']') ADVANCE(540);
      if (lookahead == '_') ADVANCE(564);
      if (lookahead == '`') ADVANCE(566);
      if (lookahead == 'f') ADVANCE(691);
      if (lookahead == 'n') ADVANCE(793);
      if (lookahead == 't') ADVANCE(769);
      if (lookahead == '|') ADVANCE(830);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(420)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(562);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(803);
      END_STATE();
    case 5:
      if (lookahead == '"') ADVANCE(545);
      if (lookahead == '#') ADVANCE(822);
      if (lookahead == '\'') ADVANCE(549);
      if (lookahead == '(') ADVANCE(535);
      if (lookahead == ',') ADVANCE(539);
      if (lookahead == '-') ADVANCE(541);
      if (lookahead == '.') ADVANCE(565);
      if (lookahead == '@') ADVANCE(817);
      if (lookahead == 'A') ADVANCE(681);
      if (lookahead == 'C') ADVANCE(640);
      if (lookahead == 'F') ADVANCE(573);
      if (lookahead == 'M') ADVANCE(574);
      if (lookahead == 'N') ADVANCE(677);
      if (lookahead == 'S') ADVANCE(661);
      if (lookahead == 'T') ADVANCE(651);
      if (lookahead == ']') ADVANCE(540);
      if (lookahead == '_') ADVANCE(564);
      if (lookahead == '`') ADVANCE(566);
      if (lookahead == 'a') ADVANCE(797);
      if (lookahead == 'c') ADVANCE(758);
      if (lookahead == 'f') ADVANCE(567);
      if (lookahead == 'm') ADVANCE(692);
      if (lookahead == 'n') ADVANCE(793);
      if (lookahead == 's') ADVANCE(569);
      if (lookahead == 't') ADVANCE(769);
      if (lookahead == '|') ADVANCE(830);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(414)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(562);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(803);
      END_STATE();
    case 6:
      if (lookahead == '"') ADVANCE(545);
      if (lookahead == '#') ADVANCE(822);
      if (lookahead == '\'') ADVANCE(549);
      if (lookahead == '(') ADVANCE(535);
      if (lookahead == '-') ADVANCE(541);
      if (lookahead == '.') ADVANCE(565);
      if (lookahead == '@') ADVANCE(817);
      if (lookahead == 'A') ADVANCE(681);
      if (lookahead == 'C') ADVANCE(643);
      if (lookahead == 'F') ADVANCE(573);
      if (lookahead == 'M') ADVANCE(574);
      if (lookahead == 'N') ADVANCE(677);
      if (lookahead == 'S') ADVANCE(661);
      if (lookahead == 'T') ADVANCE(651);
      if (lookahead == '_') ADVANCE(564);
      if (lookahead == '`') ADVANCE(566);
      if (lookahead == 'a') ADVANCE(797);
      if (lookahead == 'c') ADVANCE(761);
      if (lookahead == 'f') ADVANCE(567);
      if (lookahead == 'm') ADVANCE(692);
      if (lookahead == 'n') ADVANCE(793);
      if (lookahead == 's') ADVANCE(569);
      if (lookahead == 't') ADVANCE(769);
      if (lookahead == '|') ADVANCE(830);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(429)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(562);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(803);
      END_STATE();
    case 7:
      if (lookahead == '"') ADVANCE(545);
      if (lookahead == '#') ADVANCE(822);
      if (lookahead == '\'') ADVANCE(549);
      if (lookahead == '(') ADVANCE(535);
      if (lookahead == '-') ADVANCE(541);
      if (lookahead == '.') ADVANCE(565);
      if (lookahead == '@') ADVANCE(817);
      if (lookahead == 'A') ADVANCE(681);
      if (lookahead == 'C') ADVANCE(643);
      if (lookahead == 'F') ADVANCE(573);
      if (lookahead == 'M') ADVANCE(574);
      if (lookahead == 'N') ADVANCE(677);
      if (lookahead == 'S') ADVANCE(660);
      if (lookahead == 'T') ADVANCE(651);
      if (lookahead == '_') ADVANCE(564);
      if (lookahead == '`') ADVANCE(566);
      if (lookahead == 'a') ADVANCE(797);
      if (lookahead == 'c') ADVANCE(761);
      if (lookahead == 'f') ADVANCE(567);
      if (lookahead == 'm') ADVANCE(692);
      if (lookahead == 'n') ADVANCE(793);
      if (lookahead == 's') ADVANCE(568);
      if (lookahead == 't') ADVANCE(769);
      if (lookahead == '|') ADVANCE(830);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(415)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(562);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(803);
      END_STATE();
    case 8:
      if (lookahead == '"') ADVANCE(545);
      if (lookahead == '#') ADVANCE(822);
      if (lookahead == '\'') ADVANCE(549);
      if (lookahead == ')') ADVANCE(536);
      if (lookahead == '-') ADVANCE(541);
      if (lookahead == '.') ADVANCE(565);
      if (lookahead == ':') ADVANCE(517);
      if (lookahead == 'A') ADVANCE(611);
      if (lookahead == 'D') ADVANCE(602);
      if (lookahead == 'F') ADVANCE(572);
      if (lookahead == 'G') ADVANCE(655);
      if (lookahead == 'I') ADVANCE(639);
      if (lookahead == 'J') ADVANCE(644);
      if (lookahead == 'N') ADVANCE(677);
      if (lookahead == 'R') ADVANCE(600);
      if (lookahead == 'S') ADVANCE(603);
      if (lookahead == 'T') ADVANCE(576);
      if (lookahead == '_') ADVANCE(564);
      if (lookahead == '`') ADVANCE(566);
      if (lookahead == 'a') ADVANCE(730);
      if (lookahead == 'd') ADVANCE(720);
      if (lookahead == 'f') ADVANCE(690);
      if (lookahead == 'g') ADVANCE(773);
      if (lookahead == 'i') ADVANCE(757);
      if (lookahead == 'j') ADVANCE(762);
      if (lookahead == 'n') ADVANCE(793);
      if (lookahead == 'r') ADVANCE(718);
      if (lookahead == 's') ADVANCE(721);
      if (lookahead == 't') ADVANCE(694);
      if (lookahead == '|') ADVANCE(830);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(419)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(562);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(803);
      END_STATE();
    case 9:
      if (lookahead == '"') ADVANCE(545);
      if (lookahead == '#') ADVANCE(822);
      if (lookahead == '\'') ADVANCE(549);
      if (lookahead == '-') ADVANCE(541);
      if (lookahead == '.') ADVANCE(565);
      if (lookahead == 'F') ADVANCE(27);
      if (lookahead == 'N') ADVANCE(179);
      if (lookahead == 'T') ADVANCE(31);
      if (lookahead == 'V') ADVANCE(66);
      if (lookahead == '_') ADVANCE(563);
      if (lookahead == 'f') ADVANCE(190);
      if (lookahead == 'n') ADVANCE(397);
      if (lookahead == 't') ADVANCE(196);
      if (lookahead == 'v') ADVANCE(241);
      if (lookahead == '|') ADVANCE(830);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(421)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(562);
      END_STATE();
    case 10:
      if (lookahead == '"') ADVANCE(558);
      if (lookahead == 'a') ADVANCE(291);
      if (lookahead == 'i') ADVANCE(292);
      if (lookahead == 'o') ADVANCE(358);
      if (lookahead == 'r') ADVANCE(334);
      if (lookahead == 'u') ADVANCE(302);
      END_STATE();
    case 11:
      if (lookahead == '"') ADVANCE(560);
      if (lookahead == 'e') ADVANCE(299);
      if (lookahead == 'i') ADVANCE(213);
      if (lookahead == 'o') ADVANCE(360);
      if (lookahead == 'q') ADVANCE(293);
      if (lookahead == 't') ADVANCE(217);
      if (lookahead == 'u') ADVANCE(307);
      if (lookahead == 'w') ADVANCE(274);
      END_STATE();
    case 12:
      if (lookahead == '"') ADVANCE(559);
      END_STATE();
    case 13:
      if (lookahead == '"') ADVANCE(561);
      END_STATE();
    case 14:
      if (lookahead == '"') ADVANCE(557);
      END_STATE();
    case 15:
      if (lookahead == '"') ADVANCE(14);
      END_STATE();
    case 16:
      if (lookahead == '#') ADVANCE(822);
      if (lookahead == '+') ADVANCE(543);
      if (lookahead == ',') ADVANCE(539);
      if (lookahead == '-') ADVANCE(542);
      if (lookahead == '.') ADVANCE(565);
      if (lookahead == ':') ADVANCE(517);
      if (lookahead == '[') ADVANCE(538);
      if (lookahead == ']') ADVANCE(540);
      if (lookahead == '`') ADVANCE(566);
      if (lookahead == '|') ADVANCE(830);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(422)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(562);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(803);
      END_STATE();
    case 17:
      if (lookahead == '#') ADVANCE(822);
      if (lookahead == '-') ADVANCE(25);
      if (lookahead == '.') ADVANCE(565);
      if (lookahead == '_') ADVANCE(564);
      if (lookahead == '`') ADVANCE(566);
      if (lookahead == '|') ADVANCE(830);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(423)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(562);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(803);
      END_STATE();
    case 18:
      if (lookahead == '#') ADVANCE(822);
      if (lookahead == 'S') ADVANCE(621);
      if (lookahead == '`') ADVANCE(566);
      if (lookahead == 's') ADVANCE(739);
      if (lookahead == '|') ADVANCE(830);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(424)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(430);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(803);
      END_STATE();
    case 19:
      if (lookahead == '#') ADVANCE(822);
      if (lookahead == '`') ADVANCE(566);
      if (lookahead == '|') ADVANCE(830);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(426)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(816);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(803);
      END_STATE();
    case 20:
      if (lookahead == '#') ADVANCE(822);
      if (lookahead == '|') ADVANCE(830);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(428)
      if (lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(804);
      END_STATE();
    case 21:
      if (lookahead == '.') ADVANCE(195);
      END_STATE();
    case 22:
      if (lookahead == '.') ADVANCE(805);
      END_STATE();
    case 23:
      if (lookahead == '=') ADVANCE(808);
      END_STATE();
    case 24:
      if (lookahead == '=') ADVANCE(544);
      END_STATE();
    case 25:
      if (lookahead == '>') ADVANCE(537);
      END_STATE();
    case 26:
      if (lookahead == '?') ADVANCE(813);
      END_STATE();
    case 27:
      if (lookahead == 'A') ADVANCE(100);
      END_STATE();
    case 28:
      if (lookahead == 'A') ADVANCE(100);
      if (lookahead == 'I') ADVANCE(101);
      if (lookahead == 'O') ADVANCE(151);
      if (lookahead == 'R') ADVANCE(133);
      if (lookahead == 'U') ADVANCE(106);
      END_STATE();
    case 29:
      if (lookahead == 'A') ADVANCE(187);
      if (lookahead == 'I') ADVANCE(116);
      END_STATE();
    case 30:
      if (lookahead == 'A') ADVANCE(166);
      END_STATE();
    case 31:
      if (lookahead == 'A') ADVANCE(150);
      if (lookahead == 'R') ADVANCE(181);
      END_STATE();
    case 32:
      if (lookahead == 'A') ADVANCE(83);
      END_STATE();
    case 33:
      if (lookahead == 'A') ADVANCE(174);
      END_STATE();
    case 34:
      if (lookahead == 'A') ADVANCE(126);
      END_STATE();
    case 35:
      if (lookahead == 'C') ADVANCE(510);
      END_STATE();
    case 36:
      if (lookahead == 'C') ADVANCE(85);
      END_STATE();
    case 37:
      if (lookahead == 'C') ADVANCE(167);
      END_STATE();
    case 38:
      if (lookahead == 'C') ADVANCE(170);
      END_STATE();
    case 39:
      if (lookahead == 'C') ADVANCE(171);
      END_STATE();
    case 40:
      if (lookahead == 'D') ADVANCE(499);
      END_STATE();
    case 41:
      if (lookahead == 'D') ADVANCE(469);
      END_STATE();
    case 42:
      if (lookahead == 'D') ADVANCE(51);
      END_STATE();
    case 43:
      if (lookahead == 'D') ADVANCE(91);
      END_STATE();
    case 44:
      if (lookahead == 'D') ADVANCE(130);
      END_STATE();
    case 45:
      if (lookahead == 'D') ADVANCE(61);
      END_STATE();
    case 46:
      if (lookahead == 'D') ADVANCE(45);
      END_STATE();
    case 47:
      if (lookahead == 'D') ADVANCE(95);
      END_STATE();
    case 48:
      if (lookahead == 'E') ADVANCE(75);
      END_STATE();
    case 49:
      if (lookahead == 'E') ADVANCE(113);
      if (lookahead == 'I') ADVANCE(78);
      if (lookahead == 'O') ADVANCE(108);
      END_STATE();
    case 50:
      if (lookahead == 'E') ADVANCE(113);
      if (lookahead == 'O') ADVANCE(108);
      END_STATE();
    case 51:
      if (lookahead == 'E') ADVANCE(493);
      END_STATE();
    case 52:
      if (lookahead == 'E') ADVANCE(456);
      END_STATE();
    case 53:
      if (lookahead == 'E') ADVANCE(463);
      END_STATE();
    case 54:
      if (lookahead == 'E') ADVANCE(465);
      END_STATE();
    case 55:
      if (lookahead == 'E') ADVANCE(448);
      END_STATE();
    case 56:
      if (lookahead == 'E') ADVANCE(471);
      END_STATE();
    case 57:
      if (lookahead == 'E') ADVANCE(475);
      END_STATE();
    case 58:
      if (lookahead == 'E') ADVANCE(452);
      END_STATE();
    case 59:
      if (lookahead == 'E') ADVANCE(37);
      END_STATE();
    case 60:
      if (lookahead == 'E') ADVANCE(189);
      END_STATE();
    case 61:
      if (lookahead == 'E') ADVANCE(183);
      END_STATE();
    case 62:
      if (lookahead == 'E') ADVANCE(149);
      END_STATE();
    case 63:
      if (lookahead == 'E') ADVANCE(84);
      END_STATE();
    case 64:
      if (lookahead == 'E') ADVANCE(105);
      if (lookahead == 'I') ADVANCE(42);
      if (lookahead == 'O') ADVANCE(153);
      if (lookahead == 'T') ADVANCE(46);
      if (lookahead == 'U') ADVANCE(110);
      if (lookahead == 'W') ADVANCE(92);
      END_STATE();
    case 65:
      if (lookahead == 'E') ADVANCE(105);
      if (lookahead == 'O') ADVANCE(153);
      END_STATE();
    case 66:
      if (lookahead == 'E') ADVANCE(152);
      END_STATE();
    case 67:
      if (lookahead == 'E') ADVANCE(148);
      if (lookahead == 'G') ADVANCE(487);
      END_STATE();
    case 68:
      if (lookahead == 'E') ADVANCE(145);
      END_STATE();
    case 69:
      if (lookahead == 'E') ADVANCE(168);
      END_STATE();
    case 70:
      if (lookahead == 'E') ADVANCE(155);
      END_STATE();
    case 71:
      if (lookahead == 'E') ADVANCE(146);
      END_STATE();
    case 72:
      if (lookahead == 'E') ADVANCE(161);
      END_STATE();
    case 73:
      if (lookahead == 'E') ADVANCE(38);
      END_STATE();
    case 74:
      if (lookahead == 'E') ADVANCE(123);
      END_STATE();
    case 75:
      if (lookahead == 'F') ADVANCE(162);
      if (lookahead == 'T') ADVANCE(512);
      END_STATE();
    case 76:
      if (lookahead == 'G') ADVANCE(81);
      if (lookahead == 'N') ADVANCE(40);
      if (lookahead == 'P') ADVANCE(141);
      END_STATE();
    case 77:
      if (lookahead == 'G') ADVANCE(81);
      if (lookahead == 'N') ADVANCE(40);
      if (lookahead == 'P') ADVANCE(141);
      if (lookahead == 'V') ADVANCE(67);
      END_STATE();
    case 78:
      if (lookahead == 'G') ADVANCE(86);
      END_STATE();
    case 79:
      if (lookahead == 'G') ADVANCE(505);
      END_STATE();
    case 80:
      if (lookahead == 'G') ADVANCE(507);
      END_STATE();
    case 81:
      if (lookahead == 'G') ADVANCE(154);
      END_STATE();
    case 82:
      if (lookahead == 'G') ADVANCE(69);
      END_STATE();
    case 83:
      if (lookahead == 'G') ADVANCE(57);
      END_STATE();
    case 84:
      if (lookahead == 'G') ADVANCE(33);
      END_STATE();
    case 85:
      if (lookahead == 'H') ADVANCE(467);
      END_STATE();
    case 86:
      if (lookahead == 'H') ADVANCE(165);
      END_STATE();
    case 87:
      if (lookahead == 'I') ADVANCE(184);
      END_STATE();
    case 88:
      if (lookahead == 'I') ADVANCE(101);
      if (lookahead == 'O') ADVANCE(151);
      if (lookahead == 'R') ADVANCE(133);
      if (lookahead == 'U') ADVANCE(106);
      END_STATE();
    case 89:
      if (lookahead == 'I') ADVANCE(101);
      if (lookahead == 'R') ADVANCE(133);
      if (lookahead == 'U') ADVANCE(115);
      END_STATE();
    case 90:
      if (lookahead == 'I') ADVANCE(121);
      END_STATE();
    case 91:
      if (lookahead == 'I') ADVANCE(159);
      END_STATE();
    case 92:
      if (lookahead == 'I') ADVANCE(172);
      END_STATE();
    case 93:
      if (lookahead == 'I') ADVANCE(117);
      END_STATE();
    case 94:
      if (lookahead == 'I') ADVANCE(122);
      END_STATE();
    case 95:
      if (lookahead == 'I') ADVANCE(125);
      END_STATE();
    case 96:
      if (lookahead == 'I') ADVANCE(128);
      END_STATE();
    case 97:
      if (lookahead == 'I') ADVANCE(135);
      END_STATE();
    case 98:
      if (lookahead == 'K') ADVANCE(52);
      END_STATE();
    case 99:
      if (lookahead == 'K') ADVANCE(52);
      if (lookahead == 'R') ADVANCE(82);
      END_STATE();
    case 100:
      if (lookahead == 'L') ADVANCE(158);
      END_STATE();
    case 101:
      if (lookahead == 'L') ADVANCE(176);
      END_STATE();
    case 102:
      if (lookahead == 'L') ADVANCE(498);
      END_STATE();
    case 103:
      if (lookahead == 'L') ADVANCE(508);
      END_STATE();
    case 104:
      if (lookahead == 'L') ADVANCE(514);
      END_STATE();
    case 105:
      if (lookahead == 'L') ADVANCE(59);
      END_STATE();
    case 106:
      if (lookahead == 'L') ADVANCE(102);
      if (lookahead == 'N') ADVANCE(35);
      END_STATE();
    case 107:
      if (lookahead == 'L') ADVANCE(103);
      END_STATE();
    case 108:
      if (lookahead == 'L') ADVANCE(109);
      if (lookahead == 'W') ADVANCE(156);
      END_STATE();
    case 109:
      if (lookahead == 'L') ADVANCE(94);
      END_STATE();
    case 110:
      if (lookahead == 'M') ADVANCE(489);
      END_STATE();
    case 111:
      if (lookahead == 'M') ADVANCE(442);
      END_STATE();
    case 112:
      if (lookahead == 'M') ADVANCE(30);
      END_STATE();
    case 113:
      if (lookahead == 'M') ADVANCE(138);
      END_STATE();
    case 114:
      if (lookahead == 'N') ADVANCE(503);
      END_STATE();
    case 115:
      if (lookahead == 'N') ADVANCE(35);
      END_STATE();
    case 116:
      if (lookahead == 'N') ADVANCE(477);
      END_STATE();
    case 117:
      if (lookahead == 'N') ADVANCE(459);
      END_STATE();
    case 118:
      if (lookahead == 'N') ADVANCE(533);
      END_STATE();
    case 119:
      if (lookahead == 'N') ADVANCE(515);
      END_STATE();
    case 120:
      if (lookahead == 'N') ADVANCE(127);
      END_STATE();
    case 121:
      if (lookahead == 'N') ADVANCE(44);
      END_STATE();
    case 122:
      if (lookahead == 'N') ADVANCE(79);
      END_STATE();
    case 123:
      if (lookahead == 'N') ADVANCE(41);
      END_STATE();
    case 124:
      if (lookahead == 'N') ADVANCE(164);
      END_STATE();
    case 125:
      if (lookahead == 'N') ADVANCE(80);
      END_STATE();
    case 126:
      if (lookahead == 'N') ADVANCE(47);
      END_STATE();
    case 127:
      if (lookahead == 'N') ADVANCE(68);
      if (lookahead == 'T') ADVANCE(70);
      END_STATE();
    case 128:
      if (lookahead == 'N') ADVANCE(39);
      END_STATE();
    case 129:
      if (lookahead == 'N') ADVANCE(175);
      END_STATE();
    case 130:
      if (lookahead == 'O') ADVANCE(186);
      END_STATE();
    case 131:
      if (lookahead == 'O') ADVANCE(180);
      if (lookahead == 'S') ADVANCE(182);
      END_STATE();
    case 132:
      if (lookahead == 'O') ADVANCE(178);
      END_STATE();
    case 133:
      if (lookahead == 'O') ADVANCE(111);
      END_STATE();
    case 134:
      if (lookahead == 'O') ADVANCE(118);
      END_STATE();
    case 135:
      if (lookahead == 'O') ADVANCE(119);
      END_STATE();
    case 136:
      if (lookahead == 'O') ADVANCE(93);
      END_STATE();
    case 137:
      if (lookahead == 'O') ADVANCE(93);
      if (lookahead == 'S') ADVANCE(134);
      END_STATE();
    case 138:
      if (lookahead == 'O') ADVANCE(185);
      END_STATE();
    case 139:
      if (lookahead == 'P') ADVANCE(34);
      END_STATE();
    case 140:
      if (lookahead == 'P') ADVANCE(450);
      END_STATE();
    case 141:
      if (lookahead == 'P') ADVANCE(74);
      END_STATE();
    case 142:
      if (lookahead == 'Q') ADVANCE(104);
      END_STATE();
    case 143:
      if (lookahead == 'R') ADVANCE(501);
      END_STATE();
    case 144:
      if (lookahead == 'R') ADVANCE(142);
      END_STATE();
    case 145:
      if (lookahead == 'R') ADVANCE(495);
      END_STATE();
    case 146:
      if (lookahead == 'R') ADVANCE(446);
      END_STATE();
    case 147:
      if (lookahead == 'R') ADVANCE(132);
      END_STATE();
    case 148:
      if (lookahead == 'R') ADVANCE(32);
      END_STATE();
    case 149:
      if (lookahead == 'R') ADVANCE(87);
      END_STATE();
    case 150:
      if (lookahead == 'R') ADVANCE(82);
      END_STATE();
    case 151:
      if (lookahead == 'R') ADVANCE(112);
      END_STATE();
    case 152:
      if (lookahead == 'R') ADVANCE(157);
      END_STATE();
    case 153:
      if (lookahead == 'R') ADVANCE(163);
      END_STATE();
    case 154:
      if (lookahead == 'R') ADVANCE(63);
      END_STATE();
    case 155:
      if (lookahead == 'R') ADVANCE(160);
      END_STATE();
    case 156:
      if (lookahead == 'S') ADVANCE(506);
      END_STATE();
    case 157:
      if (lookahead == 'S') ADVANCE(97);
      END_STATE();
    case 158:
      if (lookahead == 'S') ADVANCE(54);
      END_STATE();
    case 159:
      if (lookahead == 'S') ADVANCE(177);
      END_STATE();
    case 160:
      if (lookahead == 'S') ADVANCE(73);
      END_STATE();
    case 161:
      if (lookahead == 'T') ADVANCE(512);
      END_STATE();
    case 162:
      if (lookahead == 'T') ADVANCE(496);
      END_STATE();
    case 163:
      if (lookahead == 'T') ADVANCE(454);
      END_STATE();
    case 164:
      if (lookahead == 'T') ADVANCE(483);
      END_STATE();
    case 165:
      if (lookahead == 'T') ADVANCE(497);
      END_STATE();
    case 166:
      if (lookahead == 'T') ADVANCE(531);
      END_STATE();
    case 167:
      if (lookahead == 'T') ADVANCE(461);
      END_STATE();
    case 168:
      if (lookahead == 'T') ADVANCE(516);
      END_STATE();
    case 169:
      if (lookahead == 'T') ADVANCE(529);
      END_STATE();
    case 170:
      if (lookahead == 'T') ADVANCE(473);
      END_STATE();
    case 171:
      if (lookahead == 'T') ADVANCE(491);
      END_STATE();
    case 172:
      if (lookahead == 'T') ADVANCE(36);
      END_STATE();
    case 173:
      if (lookahead == 'T') ADVANCE(60);
      END_STATE();
    case 174:
      if (lookahead == 'T') ADVANCE(58);
      END_STATE();
    case 175:
      if (lookahead == 'T') ADVANCE(70);
      END_STATE();
    case 176:
      if (lookahead == 'T') ADVANCE(71);
      END_STATE();
    case 177:
      if (lookahead == 'T') ADVANCE(96);
      END_STATE();
    case 178:
      if (lookahead == 'U') ADVANCE(140);
      END_STATE();
    case 179:
      if (lookahead == 'U') ADVANCE(107);
      END_STATE();
    case 180:
      if (lookahead == 'U') ADVANCE(124);
      END_STATE();
    case 181:
      if (lookahead == 'U') ADVANCE(53);
      END_STATE();
    case 182:
      if (lookahead == 'V') ADVANCE(532);
      END_STATE();
    case 183:
      if (lookahead == 'V') ADVANCE(485);
      END_STATE();
    case 184:
      if (lookahead == 'V') ADVANCE(55);
      END_STATE();
    case 185:
      if (lookahead == 'V') ADVANCE(56);
      END_STATE();
    case 186:
      if (lookahead == 'W') ADVANCE(458);
      END_STATE();
    case 187:
      if (lookahead == 'X') ADVANCE(479);
      END_STATE();
    case 188:
      if (lookahead == 'X') ADVANCE(139);
      END_STATE();
    case 189:
      if (lookahead == 'X') ADVANCE(169);
      END_STATE();
    case 190:
      if (lookahead == 'a') ADVANCE(291);
      END_STATE();
    case 191:
      if (lookahead == 'a') ADVANCE(288);
      if (lookahead == 'r') ADVANCE(400);
      END_STATE();
    case 192:
      if (lookahead == 'a') ADVANCE(410);
      if (lookahead == 'i') ADVANCE(312);
      END_STATE();
    case 193:
      if (lookahead == 'a') ADVANCE(290);
      END_STATE();
    case 194:
      if (lookahead == 'a') ADVANCE(381);
      END_STATE();
    case 195:
      if (lookahead == 'a') ADVANCE(325);
      if (lookahead == 'b') ADVANCE(277);
      if (lookahead == 'c') ADVANCE(301);
      if (lookahead == 'd') ADVANCE(399);
      if (lookahead == 'g') ADVANCE(243);
      if (lookahead == 'h') ADVANCE(284);
      if (lookahead == 'm') ADVANCE(368);
      if (lookahead == 'p') ADVANCE(335);
      if (lookahead == 's') ADVANCE(324);
      END_STATE();
    case 196:
      if (lookahead == 'a') ADVANCE(357);
      if (lookahead == 'r') ADVANCE(400);
      END_STATE();
    case 197:
      if (lookahead == 'a') ADVANCE(263);
      END_STATE();
    case 198:
      if (lookahead == 'a') ADVANCE(287);
      END_STATE();
    case 199:
      if (lookahead == 'a') ADVANCE(390);
      END_STATE();
    case 200:
      if (lookahead == 'a') ADVANCE(322);
      END_STATE();
    case 201:
      if (lookahead == 'b') ADVANCE(528);
      END_STATE();
    case 202:
      if (lookahead == 'c') ADVANCE(510);
      END_STATE();
    case 203:
      if (lookahead == 'c') ADVANCE(289);
      END_STATE();
    case 204:
      if (lookahead == 'c') ADVANCE(521);
      END_STATE();
    case 205:
      if (lookahead == 'c') ADVANCE(266);
      END_STATE();
    case 206:
      if (lookahead == 'c') ADVANCE(286);
      END_STATE();
    case 207:
      if (lookahead == 'c') ADVANCE(382);
      END_STATE();
    case 208:
      if (lookahead == 'c') ADVANCE(385);
      END_STATE();
    case 209:
      if (lookahead == 'c') ADVANCE(386);
      END_STATE();
    case 210:
      if (lookahead == 'd') ADVANCE(499);
      END_STATE();
    case 211:
      if (lookahead == 'd') ADVANCE(469);
      END_STATE();
    case 212:
      if (lookahead == 'd') ADVANCE(201);
      END_STATE();
    case 213:
      if (lookahead == 'd') ADVANCE(222);
      END_STATE();
    case 214:
      if (lookahead == 'd') ADVANCE(330);
      END_STATE();
    case 215:
      if (lookahead == 'd') ADVANCE(283);
      END_STATE();
    case 216:
      if (lookahead == 'd') ADVANCE(236);
      END_STATE();
    case 217:
      if (lookahead == 'd') ADVANCE(216);
      END_STATE();
    case 218:
      if (lookahead == 'd') ADVANCE(280);
      END_STATE();
    case 219:
      if (lookahead == 'e') ADVANCE(253);
      END_STATE();
    case 220:
      if (lookahead == 'e') ADVANCE(310);
      if (lookahead == 'i') ADVANCE(257);
      if (lookahead == 'o') ADVANCE(304);
      END_STATE();
    case 221:
      if (lookahead == 'e') ADVANCE(310);
      if (lookahead == 'o') ADVANCE(304);
      END_STATE();
    case 222:
      if (lookahead == 'e') ADVANCE(493);
      END_STATE();
    case 223:
      if (lookahead == 'e') ADVANCE(456);
      END_STATE();
    case 224:
      if (lookahead == 'e') ADVANCE(463);
      END_STATE();
    case 225:
      if (lookahead == 'e') ADVANCE(465);
      END_STATE();
    case 226:
      if (lookahead == 'e') ADVANCE(448);
      END_STATE();
    case 227:
      if (lookahead == 'e') ADVANCE(471);
      END_STATE();
    case 228:
      if (lookahead == 'e') ADVANCE(475);
      END_STATE();
    case 229:
      if (lookahead == 'e') ADVANCE(522);
      END_STATE();
    case 230:
      if (lookahead == 'e') ADVANCE(452);
      END_STATE();
    case 231:
      if (lookahead == 'e') ADVANCE(526);
      END_STATE();
    case 232:
      if (lookahead == 'e') ADVANCE(527);
      END_STATE();
    case 233:
      if (lookahead == 'e') ADVANCE(520);
      END_STATE();
    case 234:
      if (lookahead == 'e') ADVANCE(207);
      END_STATE();
    case 235:
      if (lookahead == 'e') ADVANCE(412);
      END_STATE();
    case 236:
      if (lookahead == 'e') ADVANCE(404);
      END_STATE();
    case 237:
      if (lookahead == 'e') ADVANCE(356);
      END_STATE();
    case 238:
      if (lookahead == 'e') ADVANCE(265);
      END_STATE();
    case 239:
      if (lookahead == 'e') ADVANCE(299);
      if (lookahead == 'o') ADVANCE(360);
      END_STATE();
    case 240:
      if (lookahead == 'e') ADVANCE(366);
      END_STATE();
    case 241:
      if (lookahead == 'e') ADVANCE(359);
      END_STATE();
    case 242:
      if (lookahead == 'e') ADVANCE(355);
      if (lookahead == 'g') ADVANCE(487);
      END_STATE();
    case 243:
      if (lookahead == 'e') ADVANCE(328);
      END_STATE();
    case 244:
      if (lookahead == 'e') ADVANCE(351);
      END_STATE();
    case 245:
      if (lookahead == 'e') ADVANCE(383);
      END_STATE();
    case 246:
      if (lookahead == 'e') ADVANCE(364);
      END_STATE();
    case 247:
      if (lookahead == 'e') ADVANCE(352);
      END_STATE();
    case 248:
      if (lookahead == 'e') ADVANCE(362);
      END_STATE();
    case 249:
      if (lookahead == 'e') ADVANCE(353);
      END_STATE();
    case 250:
      if (lookahead == 'e') ADVANCE(377);
      END_STATE();
    case 251:
      if (lookahead == 'e') ADVANCE(208);
      END_STATE();
    case 252:
      if (lookahead == 'e') ADVANCE(320);
      END_STATE();
    case 253:
      if (lookahead == 'f') ADVANCE(378);
      if (lookahead == 't') ADVANCE(512);
      END_STATE();
    case 254:
      if (lookahead == 'f') ADVANCE(300);
      END_STATE();
    case 255:
      if (lookahead == 'g') ADVANCE(261);
      if (lookahead == 'n') ADVANCE(210);
      if (lookahead == 'p') ADVANCE(344);
      END_STATE();
    case 256:
      if (lookahead == 'g') ADVANCE(261);
      if (lookahead == 'n') ADVANCE(210);
      if (lookahead == 'p') ADVANCE(344);
      if (lookahead == 'v') ADVANCE(242);
      END_STATE();
    case 257:
      if (lookahead == 'g') ADVANCE(267);
      END_STATE();
    case 258:
      if (lookahead == 'g') ADVANCE(505);
      END_STATE();
    case 259:
      if (lookahead == 'g') ADVANCE(507);
      END_STATE();
    case 260:
      if (lookahead == 'g') ADVANCE(345);
      END_STATE();
    case 261:
      if (lookahead == 'g') ADVANCE(361);
      END_STATE();
    case 262:
      if (lookahead == 'g') ADVANCE(245);
      END_STATE();
    case 263:
      if (lookahead == 'g') ADVANCE(228);
      END_STATE();
    case 264:
      if (lookahead == 'g') ADVANCE(363);
      END_STATE();
    case 265:
      if (lookahead == 'g') ADVANCE(199);
      END_STATE();
    case 266:
      if (lookahead == 'h') ADVANCE(467);
      END_STATE();
    case 267:
      if (lookahead == 'h') ADVANCE(380);
      END_STATE();
    case 268:
      if (lookahead == 'h') ADVANCE(337);
      END_STATE();
    case 269:
      if (lookahead == 'i') ADVANCE(518);
      END_STATE();
    case 270:
      if (lookahead == 'i') ADVANCE(405);
      END_STATE();
    case 271:
      if (lookahead == 'i') ADVANCE(292);
      if (lookahead == 'o') ADVANCE(358);
      if (lookahead == 'r') ADVANCE(334);
      if (lookahead == 'u') ADVANCE(302);
      END_STATE();
    case 272:
      if (lookahead == 'i') ADVANCE(292);
      if (lookahead == 'r') ADVANCE(334);
      if (lookahead == 'u') ADVANCE(313);
      END_STATE();
    case 273:
      if (lookahead == 'i') ADVANCE(318);
      END_STATE();
    case 274:
      if (lookahead == 'i') ADVANCE(388);
      END_STATE();
    case 275:
      if (lookahead == 'i') ADVANCE(314);
      END_STATE();
    case 276:
      if (lookahead == 'i') ADVANCE(206);
      END_STATE();
    case 277:
      if (lookahead == 'i') ADVANCE(260);
      END_STATE();
    case 278:
      if (lookahead == 'i') ADVANCE(204);
      END_STATE();
    case 279:
      if (lookahead == 'i') ADVANCE(319);
      END_STATE();
    case 280:
      if (lookahead == 'i') ADVANCE(323);
      END_STATE();
    case 281:
      if (lookahead == 'i') ADVANCE(327);
      END_STATE();
    case 282:
      if (lookahead == 'i') ADVANCE(338);
      END_STATE();
    case 283:
      if (lookahead == 'i') ADVANCE(372);
      END_STATE();
    case 284:
      if (lookahead == 'i') ADVANCE(407);
      END_STATE();
    case 285:
      if (lookahead == 'i') ADVANCE(391);
      END_STATE();
    case 286:
      if (lookahead == 'k') ADVANCE(268);
      END_STATE();
    case 287:
      if (lookahead == 'k') ADVANCE(223);
      END_STATE();
    case 288:
      if (lookahead == 'k') ADVANCE(223);
      if (lookahead == 'r') ADVANCE(262);
      END_STATE();
    case 289:
      if (lookahead == 'k') ADVANCE(212);
      END_STATE();
    case 290:
      if (lookahead == 'k') ADVANCE(232);
      END_STATE();
    case 291:
      if (lookahead == 'l') ADVANCE(370);
      END_STATE();
    case 292:
      if (lookahead == 'l') ADVANCE(394);
      END_STATE();
    case 293:
      if (lookahead == 'l') ADVANCE(21);
      END_STATE();
    case 294:
      if (lookahead == 'l') ADVANCE(498);
      END_STATE();
    case 295:
      if (lookahead == 'l') ADVANCE(508);
      END_STATE();
    case 296:
      if (lookahead == 'l') ADVANCE(514);
      END_STATE();
    case 297:
      if (lookahead == 'l') ADVANCE(523);
      END_STATE();
    case 298:
      if (lookahead == 'l') ADVANCE(524);
      END_STATE();
    case 299:
      if (lookahead == 'l') ADVANCE(234);
      END_STATE();
    case 300:
      if (lookahead == 'l') ADVANCE(193);
      END_STATE();
    case 301:
      if (lookahead == 'l') ADVANCE(276);
      END_STATE();
    case 302:
      if (lookahead == 'l') ADVANCE(294);
      if (lookahead == 'n') ADVANCE(202);
      END_STATE();
    case 303:
      if (lookahead == 'l') ADVANCE(295);
      END_STATE();
    case 304:
      if (lookahead == 'l') ADVANCE(306);
      if (lookahead == 'w') ADVANCE(365);
      END_STATE();
    case 305:
      if (lookahead == 'l') ADVANCE(285);
      END_STATE();
    case 306:
      if (lookahead == 'l') ADVANCE(279);
      END_STATE();
    case 307:
      if (lookahead == 'm') ADVANCE(489);
      END_STATE();
    case 308:
      if (lookahead == 'm') ADVANCE(443);
      END_STATE();
    case 309:
      if (lookahead == 'm') ADVANCE(194);
      END_STATE();
    case 310:
      if (lookahead == 'm') ADVANCE(341);
      END_STATE();
    case 311:
      if (lookahead == 'n') ADVANCE(504);
      END_STATE();
    case 312:
      if (lookahead == 'n') ADVANCE(477);
      END_STATE();
    case 313:
      if (lookahead == 'n') ADVANCE(202);
      END_STATE();
    case 314:
      if (lookahead == 'n') ADVANCE(459);
      END_STATE();
    case 315:
      if (lookahead == 'n') ADVANCE(533);
      END_STATE();
    case 316:
      if (lookahead == 'n') ADVANCE(515);
      END_STATE();
    case 317:
      if (lookahead == 'n') ADVANCE(326);
      END_STATE();
    case 318:
      if (lookahead == 'n') ADVANCE(214);
      END_STATE();
    case 319:
      if (lookahead == 'n') ADVANCE(258);
      END_STATE();
    case 320:
      if (lookahead == 'n') ADVANCE(211);
      END_STATE();
    case 321:
      if (lookahead == 'n') ADVANCE(387);
      END_STATE();
    case 322:
      if (lookahead == 'n') ADVANCE(218);
      END_STATE();
    case 323:
      if (lookahead == 'n') ADVANCE(259);
      END_STATE();
    case 324:
      if (lookahead == 'n') ADVANCE(332);
      if (lookahead == 'q') ADVANCE(305);
      END_STATE();
    case 325:
      if (lookahead == 'n') ADVANCE(369);
      END_STATE();
    case 326:
      if (lookahead == 'n') ADVANCE(244);
      if (lookahead == 't') ADVANCE(246);
      END_STATE();
    case 327:
      if (lookahead == 'n') ADVANCE(209);
      END_STATE();
    case 328:
      if (lookahead == 'n') ADVANCE(248);
      END_STATE();
    case 329:
      if (lookahead == 'n') ADVANCE(393);
      END_STATE();
    case 330:
      if (lookahead == 'o') ADVANCE(408);
      END_STATE();
    case 331:
      if (lookahead == 'o') ADVANCE(398);
      if (lookahead == 's') ADVANCE(403);
      END_STATE();
    case 332:
      if (lookahead == 'o') ADVANCE(409);
      END_STATE();
    case 333:
      if (lookahead == 'o') ADVANCE(396);
      END_STATE();
    case 334:
      if (lookahead == 'o') ADVANCE(308);
      END_STATE();
    case 335:
      if (lookahead == 'o') ADVANCE(371);
      END_STATE();
    case 336:
      if (lookahead == 'o') ADVANCE(315);
      END_STATE();
    case 337:
      if (lookahead == 'o') ADVANCE(401);
      END_STATE();
    case 338:
      if (lookahead == 'o') ADVANCE(316);
      END_STATE();
    case 339:
      if (lookahead == 'o') ADVANCE(275);
      END_STATE();
    case 340:
      if (lookahead == 'o') ADVANCE(275);
      if (lookahead == 's') ADVANCE(336);
      END_STATE();
    case 341:
      if (lookahead == 'o') ADVANCE(406);
      END_STATE();
    case 342:
      if (lookahead == 'p') ADVANCE(200);
      END_STATE();
    case 343:
      if (lookahead == 'p') ADVANCE(450);
      END_STATE();
    case 344:
      if (lookahead == 'p') ADVANCE(252);
      END_STATE();
    case 345:
      if (lookahead == 'q') ADVANCE(402);
      END_STATE();
    case 346:
      if (lookahead == 'q') ADVANCE(296);
      END_STATE();
    case 347:
      if (lookahead == 'q') ADVANCE(297);
      END_STATE();
    case 348:
      if (lookahead == 'q') ADVANCE(298);
      END_STATE();
    case 349:
      if (lookahead == 'r') ADVANCE(501);
      END_STATE();
    case 350:
      if (lookahead == 'r') ADVANCE(346);
      END_STATE();
    case 351:
      if (lookahead == 'r') ADVANCE(495);
      END_STATE();
    case 352:
      if (lookahead == 'r') ADVANCE(446);
      END_STATE();
    case 353:
      if (lookahead == 'r') ADVANCE(413);
      END_STATE();
    case 354:
      if (lookahead == 'r') ADVANCE(333);
      END_STATE();
    case 355:
      if (lookahead == 'r') ADVANCE(197);
      END_STATE();
    case 356:
      if (lookahead == 'r') ADVANCE(270);
      END_STATE();
    case 357:
      if (lookahead == 'r') ADVANCE(262);
      END_STATE();
    case 358:
      if (lookahead == 'r') ADVANCE(309);
      END_STATE();
    case 359:
      if (lookahead == 'r') ADVANCE(367);
      END_STATE();
    case 360:
      if (lookahead == 'r') ADVANCE(379);
      END_STATE();
    case 361:
      if (lookahead == 'r') ADVANCE(238);
      END_STATE();
    case 362:
      if (lookahead == 'r') ADVANCE(278);
      END_STATE();
    case 363:
      if (lookahead == 'r') ADVANCE(240);
      END_STATE();
    case 364:
      if (lookahead == 'r') ADVANCE(375);
      END_STATE();
    case 365:
      if (lookahead == 's') ADVANCE(506);
      END_STATE();
    case 366:
      if (lookahead == 's') ADVANCE(525);
      END_STATE();
    case 367:
      if (lookahead == 's') ADVANCE(282);
      END_STATE();
    case 368:
      if (lookahead == 's') ADVANCE(374);
      if (lookahead == 'y') ADVANCE(376);
      END_STATE();
    case 369:
      if (lookahead == 's') ADVANCE(269);
      END_STATE();
    case 370:
      if (lookahead == 's') ADVANCE(225);
      END_STATE();
    case 371:
      if (lookahead == 's') ADVANCE(392);
      END_STATE();
    case 372:
      if (lookahead == 's') ADVANCE(395);
      END_STATE();
    case 373:
      if (lookahead == 's') ADVANCE(233);
      END_STATE();
    case 374:
      if (lookahead == 's') ADVANCE(347);
      END_STATE();
    case 375:
      if (lookahead == 's') ADVANCE(251);
      END_STATE();
    case 376:
      if (lookahead == 's') ADVANCE(348);
      END_STATE();
    case 377:
      if (lookahead == 't') ADVANCE(512);
      END_STATE();
    case 378:
      if (lookahead == 't') ADVANCE(496);
      END_STATE();
    case 379:
      if (lookahead == 't') ADVANCE(454);
      END_STATE();
    case 380:
      if (lookahead == 't') ADVANCE(497);
      END_STATE();
    case 381:
      if (lookahead == 't') ADVANCE(531);
      END_STATE();
    case 382:
      if (lookahead == 't') ADVANCE(461);
      END_STATE();
    case 383:
      if (lookahead == 't') ADVANCE(516);
      END_STATE();
    case 384:
      if (lookahead == 't') ADVANCE(529);
      END_STATE();
    case 385:
      if (lookahead == 't') ADVANCE(473);
      END_STATE();
    case 386:
      if (lookahead == 't') ADVANCE(491);
      END_STATE();
    case 387:
      if (lookahead == 't') ADVANCE(484);
      END_STATE();
    case 388:
      if (lookahead == 't') ADVANCE(205);
      END_STATE();
    case 389:
      if (lookahead == 't') ADVANCE(235);
      END_STATE();
    case 390:
      if (lookahead == 't') ADVANCE(230);
      END_STATE();
    case 391:
      if (lookahead == 't') ADVANCE(231);
      END_STATE();
    case 392:
      if (lookahead == 't') ADVANCE(264);
      END_STATE();
    case 393:
      if (lookahead == 't') ADVANCE(246);
      END_STATE();
    case 394:
      if (lookahead == 't') ADVANCE(247);
      END_STATE();
    case 395:
      if (lookahead == 't') ADVANCE(281);
      END_STATE();
    case 396:
      if (lookahead == 'u') ADVANCE(343);
      END_STATE();
    case 397:
      if (lookahead == 'u') ADVANCE(303);
      END_STATE();
    case 398:
      if (lookahead == 'u') ADVANCE(321);
      END_STATE();
    case 399:
      if (lookahead == 'u') ADVANCE(203);
      END_STATE();
    case 400:
      if (lookahead == 'u') ADVANCE(224);
      END_STATE();
    case 401:
      if (lookahead == 'u') ADVANCE(373);
      END_STATE();
    case 402:
      if (lookahead == 'u') ADVANCE(249);
      END_STATE();
    case 403:
      if (lookahead == 'v') ADVANCE(532);
      END_STATE();
    case 404:
      if (lookahead == 'v') ADVANCE(485);
      END_STATE();
    case 405:
      if (lookahead == 'v') ADVANCE(226);
      END_STATE();
    case 406:
      if (lookahead == 'v') ADVANCE(227);
      END_STATE();
    case 407:
      if (lookahead == 'v') ADVANCE(229);
      END_STATE();
    case 408:
      if (lookahead == 'w') ADVANCE(458);
      END_STATE();
    case 409:
      if (lookahead == 'w') ADVANCE(254);
      END_STATE();
    case 410:
      if (lookahead == 'x') ADVANCE(479);
      END_STATE();
    case 411:
      if (lookahead == 'x') ADVANCE(342);
      END_STATE();
    case 412:
      if (lookahead == 'x') ADVANCE(384);
      END_STATE();
    case 413:
      if (lookahead == 'y') ADVANCE(519);
      END_STATE();
    case 414:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(414)
      if (lookahead == '"') ADVANCE(545);
      if (lookahead == '#') ADVANCE(822);
      if (lookahead == '\'') ADVANCE(549);
      if (lookahead == '(') ADVANCE(535);
      if (lookahead == ',') ADVANCE(539);
      if (lookahead == '-') ADVANCE(541);
      if (lookahead == '.') ADVANCE(565);
      if (lookahead == '@') ADVANCE(817);
      if (lookahead == 'A') ADVANCE(681);
      if (lookahead == 'C') ADVANCE(640);
      if (lookahead == 'F') ADVANCE(573);
      if (lookahead == 'M') ADVANCE(574);
      if (lookahead == 'N') ADVANCE(677);
      if (lookahead == 'S') ADVANCE(661);
      if (lookahead == 'T') ADVANCE(651);
      if (lookahead == ']') ADVANCE(540);
      if (lookahead == '_') ADVANCE(564);
      if (lookahead == '`') ADVANCE(566);
      if (lookahead == 'a') ADVANCE(797);
      if (lookahead == 'c') ADVANCE(758);
      if (lookahead == 'f') ADVANCE(567);
      if (lookahead == 'm') ADVANCE(692);
      if (lookahead == 'n') ADVANCE(793);
      if (lookahead == 's') ADVANCE(569);
      if (lookahead == 't') ADVANCE(769);
      if (lookahead == '|') ADVANCE(830);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(562);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(803);
      END_STATE();
    case 415:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(415)
      if (lookahead == '"') ADVANCE(545);
      if (lookahead == '#') ADVANCE(822);
      if (lookahead == '\'') ADVANCE(549);
      if (lookahead == '(') ADVANCE(535);
      if (lookahead == '-') ADVANCE(541);
      if (lookahead == '.') ADVANCE(565);
      if (lookahead == '@') ADVANCE(817);
      if (lookahead == 'A') ADVANCE(681);
      if (lookahead == 'C') ADVANCE(643);
      if (lookahead == 'F') ADVANCE(573);
      if (lookahead == 'M') ADVANCE(574);
      if (lookahead == 'N') ADVANCE(677);
      if (lookahead == 'S') ADVANCE(660);
      if (lookahead == 'T') ADVANCE(651);
      if (lookahead == '_') ADVANCE(564);
      if (lookahead == '`') ADVANCE(566);
      if (lookahead == 'a') ADVANCE(797);
      if (lookahead == 'c') ADVANCE(761);
      if (lookahead == 'f') ADVANCE(567);
      if (lookahead == 'm') ADVANCE(692);
      if (lookahead == 'n') ADVANCE(793);
      if (lookahead == 's') ADVANCE(568);
      if (lookahead == 't') ADVANCE(769);
      if (lookahead == '|') ADVANCE(830);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(562);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(803);
      END_STATE();
    case 416:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(416)
      if (lookahead == '!') ADVANCE(23);
      if (lookahead == '"') ADVANCE(545);
      if (lookahead == '#') ADVANCE(822);
      if (lookahead == '\'') ADVANCE(549);
      if (lookahead == ')') ADVANCE(536);
      if (lookahead == '*') ADVANCE(806);
      if (lookahead == '+') ADVANCE(543);
      if (lookahead == '-') ADVANCE(541);
      if (lookahead == '.') ADVANCE(565);
      if (lookahead == '/') ADVANCE(807);
      if (lookahead == '<') ADVANCE(811);
      if (lookahead == '=') ADVANCE(24);
      if (lookahead == '>') ADVANCE(809);
      if (lookahead == '?') ADVANCE(26);
      if (lookahead == 'A') ADVANCE(610);
      if (lookahead == 'D') ADVANCE(602);
      if (lookahead == 'F') ADVANCE(572);
      if (lookahead == 'G') ADVANCE(655);
      if (lookahead == 'I') ADVANCE(639);
      if (lookahead == 'J') ADVANCE(644);
      if (lookahead == 'N') ADVANCE(677);
      if (lookahead == 'O') ADVANCE(648);
      if (lookahead == 'R') ADVANCE(600);
      if (lookahead == 'S') ADVANCE(603);
      if (lookahead == 'T') ADVANCE(576);
      if (lookahead == '_') ADVANCE(564);
      if (lookahead == '`') ADVANCE(566);
      if (lookahead == 'a') ADVANCE(729);
      if (lookahead == 'd') ADVANCE(720);
      if (lookahead == 'f') ADVANCE(690);
      if (lookahead == 'g') ADVANCE(773);
      if (lookahead == 'i') ADVANCE(757);
      if (lookahead == 'j') ADVANCE(762);
      if (lookahead == 'n') ADVANCE(793);
      if (lookahead == 'o') ADVANCE(767);
      if (lookahead == 'r') ADVANCE(718);
      if (lookahead == 's') ADVANCE(721);
      if (lookahead == 't') ADVANCE(694);
      if (lookahead == '|') ADVANCE(830);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(562);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(803);
      END_STATE();
    case 417:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(417)
      if (lookahead == '!') ADVANCE(828);
      if (lookahead == '"') ADVANCE(545);
      if (lookahead == '#') ADVANCE(822);
      if (lookahead == '\'') ADVANCE(549);
      if (lookahead == '(') ADVANCE(535);
      if (lookahead == ',') ADVANCE(539);
      if (lookahead == '-') ADVANCE(541);
      if (lookahead == '.') ADVANCE(565);
      if (lookahead == '=') ADVANCE(24);
      if (lookahead == '@') ADVANCE(817);
      if (lookahead == 'F') ADVANCE(573);
      if (lookahead == 'N') ADVANCE(677);
      if (lookahead == 'T') ADVANCE(651);
      if (lookahead == '[') ADVANCE(538);
      if (lookahead == ']') ADVANCE(540);
      if (lookahead == '_') ADVANCE(564);
      if (lookahead == '`') ADVANCE(566);
      if (lookahead == 'f') ADVANCE(567);
      if (lookahead == 'n') ADVANCE(793);
      if (lookahead == 's') ADVANCE(570);
      if (lookahead == 't') ADVANCE(769);
      if (lookahead == '|') ADVANCE(830);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(562);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(803);
      END_STATE();
    case 418:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(418)
      if (lookahead == '!') ADVANCE(23);
      if (lookahead == '"') ADVANCE(545);
      if (lookahead == '#') ADVANCE(822);
      if (lookahead == '\'') ADVANCE(549);
      if (lookahead == '(') ADVANCE(535);
      if (lookahead == ')') ADVANCE(536);
      if (lookahead == '*') ADVANCE(806);
      if (lookahead == '+') ADVANCE(543);
      if (lookahead == ',') ADVANCE(539);
      if (lookahead == '-') ADVANCE(541);
      if (lookahead == '.') ADVANCE(565);
      if (lookahead == '/') ADVANCE(807);
      if (lookahead == '<') ADVANCE(811);
      if (lookahead == '=') ADVANCE(24);
      if (lookahead == '>') ADVANCE(809);
      if (lookahead == '?') ADVANCE(26);
      if (lookahead == 'A') ADVANCE(636);
      if (lookahead == 'F') ADVANCE(573);
      if (lookahead == 'N') ADVANCE(677);
      if (lookahead == 'O') ADVANCE(648);
      if (lookahead == 'T') ADVANCE(651);
      if (lookahead == ']') ADVANCE(540);
      if (lookahead == '_') ADVANCE(564);
      if (lookahead == '`') ADVANCE(566);
      if (lookahead == 'a') ADVANCE(754);
      if (lookahead == 'f') ADVANCE(691);
      if (lookahead == 'n') ADVANCE(793);
      if (lookahead == 'o') ADVANCE(767);
      if (lookahead == 't') ADVANCE(769);
      if (lookahead == '|') ADVANCE(830);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(562);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(803);
      END_STATE();
    case 419:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(419)
      if (lookahead == '"') ADVANCE(545);
      if (lookahead == '#') ADVANCE(822);
      if (lookahead == '\'') ADVANCE(549);
      if (lookahead == ')') ADVANCE(536);
      if (lookahead == '-') ADVANCE(541);
      if (lookahead == '.') ADVANCE(565);
      if (lookahead == ':') ADVANCE(517);
      if (lookahead == 'A') ADVANCE(611);
      if (lookahead == 'D') ADVANCE(602);
      if (lookahead == 'F') ADVANCE(572);
      if (lookahead == 'G') ADVANCE(655);
      if (lookahead == 'I') ADVANCE(639);
      if (lookahead == 'J') ADVANCE(644);
      if (lookahead == 'N') ADVANCE(677);
      if (lookahead == 'R') ADVANCE(600);
      if (lookahead == 'S') ADVANCE(603);
      if (lookahead == 'T') ADVANCE(576);
      if (lookahead == '_') ADVANCE(564);
      if (lookahead == '`') ADVANCE(566);
      if (lookahead == 'a') ADVANCE(730);
      if (lookahead == 'd') ADVANCE(720);
      if (lookahead == 'f') ADVANCE(690);
      if (lookahead == 'g') ADVANCE(773);
      if (lookahead == 'i') ADVANCE(757);
      if (lookahead == 'j') ADVANCE(762);
      if (lookahead == 'n') ADVANCE(793);
      if (lookahead == 'r') ADVANCE(718);
      if (lookahead == 's') ADVANCE(721);
      if (lookahead == 't') ADVANCE(694);
      if (lookahead == '|') ADVANCE(830);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(562);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(803);
      END_STATE();
    case 420:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(420)
      if (lookahead == '"') ADVANCE(545);
      if (lookahead == '#') ADVANCE(822);
      if (lookahead == '\'') ADVANCE(549);
      if (lookahead == '(') ADVANCE(535);
      if (lookahead == ')') ADVANCE(536);
      if (lookahead == ',') ADVANCE(539);
      if (lookahead == '-') ADVANCE(541);
      if (lookahead == '.') ADVANCE(565);
      if (lookahead == ':') ADVANCE(517);
      if (lookahead == 'F') ADVANCE(573);
      if (lookahead == 'N') ADVANCE(677);
      if (lookahead == 'T') ADVANCE(651);
      if (lookahead == ']') ADVANCE(540);
      if (lookahead == '_') ADVANCE(564);
      if (lookahead == '`') ADVANCE(566);
      if (lookahead == 'f') ADVANCE(691);
      if (lookahead == 'n') ADVANCE(793);
      if (lookahead == 't') ADVANCE(769);
      if (lookahead == '|') ADVANCE(830);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(562);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(803);
      END_STATE();
    case 421:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(421)
      if (lookahead == '"') ADVANCE(545);
      if (lookahead == '#') ADVANCE(822);
      if (lookahead == '\'') ADVANCE(549);
      if (lookahead == '-') ADVANCE(541);
      if (lookahead == '.') ADVANCE(565);
      if (lookahead == 'F') ADVANCE(27);
      if (lookahead == 'N') ADVANCE(179);
      if (lookahead == 'T') ADVANCE(31);
      if (lookahead == 'V') ADVANCE(66);
      if (lookahead == '_') ADVANCE(563);
      if (lookahead == 'f') ADVANCE(190);
      if (lookahead == 'n') ADVANCE(397);
      if (lookahead == 't') ADVANCE(196);
      if (lookahead == 'v') ADVANCE(241);
      if (lookahead == '|') ADVANCE(830);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(562);
      END_STATE();
    case 422:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(422)
      if (lookahead == '#') ADVANCE(822);
      if (lookahead == '+') ADVANCE(543);
      if (lookahead == ',') ADVANCE(539);
      if (lookahead == '-') ADVANCE(542);
      if (lookahead == '.') ADVANCE(565);
      if (lookahead == ':') ADVANCE(517);
      if (lookahead == '[') ADVANCE(538);
      if (lookahead == ']') ADVANCE(540);
      if (lookahead == '`') ADVANCE(566);
      if (lookahead == '|') ADVANCE(830);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(562);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(803);
      END_STATE();
    case 423:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(423)
      if (lookahead == '#') ADVANCE(822);
      if (lookahead == '-') ADVANCE(25);
      if (lookahead == '.') ADVANCE(565);
      if (lookahead == '_') ADVANCE(564);
      if (lookahead == '`') ADVANCE(566);
      if (lookahead == '|') ADVANCE(830);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(562);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(803);
      END_STATE();
    case 424:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(424)
      if (lookahead == '#') ADVANCE(822);
      if (lookahead == 'S') ADVANCE(621);
      if (lookahead == '`') ADVANCE(566);
      if (lookahead == 's') ADVANCE(739);
      if (lookahead == '|') ADVANCE(830);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(430);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(803);
      END_STATE();
    case 425:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(555);
      if (lookahead == '"') ADVANCE(554);
      if (lookahead == '#') ADVANCE(822);
      if (lookahead == '|') ADVANCE(830);
      if (lookahead != 0) ADVANCE(553);
      END_STATE();
    case 426:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(426)
      if (lookahead == '#') ADVANCE(822);
      if (lookahead == '`') ADVANCE(566);
      if (lookahead == '|') ADVANCE(830);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(816);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(803);
      END_STATE();
    case 427:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(556);
      if (lookahead == '#') ADVANCE(822);
      if (lookahead == '|') ADVANCE(830);
      if (lookahead != 0) ADVANCE(553);
      END_STATE();
    case 428:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(428)
      if (lookahead == '#') ADVANCE(822);
      if (lookahead == '|') ADVANCE(830);
      if (lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(804);
      END_STATE();
    case 429:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(429)
      if (lookahead == '"') ADVANCE(545);
      if (lookahead == '#') ADVANCE(822);
      if (lookahead == '\'') ADVANCE(549);
      if (lookahead == '(') ADVANCE(535);
      if (lookahead == '-') ADVANCE(541);
      if (lookahead == '.') ADVANCE(565);
      if (lookahead == '@') ADVANCE(817);
      if (lookahead == 'A') ADVANCE(681);
      if (lookahead == 'C') ADVANCE(643);
      if (lookahead == 'F') ADVANCE(573);
      if (lookahead == 'M') ADVANCE(574);
      if (lookahead == 'N') ADVANCE(677);
      if (lookahead == 'S') ADVANCE(661);
      if (lookahead == 'T') ADVANCE(651);
      if (lookahead == '_') ADVANCE(564);
      if (lookahead == '`') ADVANCE(566);
      if (lookahead == 'a') ADVANCE(797);
      if (lookahead == 'c') ADVANCE(761);
      if (lookahead == 'f') ADVANCE(567);
      if (lookahead == 'm') ADVANCE(692);
      if (lookahead == 'n') ADVANCE(793);
      if (lookahead == 's') ADVANCE(569);
      if (lookahead == 't') ADVANCE(769);
      if (lookahead == '|') ADVANCE(830);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(562);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(803);
      END_STATE();
    case 430:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(818);
      END_STATE();
    case 431:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(814);
      END_STATE();
    case 432:
      if (eof) ADVANCE(441);
      if (lookahead == '!') ADVANCE(23);
      if (lookahead == '"') ADVANCE(545);
      if (lookahead == '#') ADVANCE(822);
      if (lookahead == '\'') ADVANCE(549);
      if (lookahead == '*') ADVANCE(806);
      if (lookahead == '+') ADVANCE(543);
      if (lookahead == '-') ADVANCE(541);
      if (lookahead == '.') ADVANCE(565);
      if (lookahead == '/') ADVANCE(807);
      if (lookahead == '<') ADVANCE(811);
      if (lookahead == '=') ADVANCE(24);
      if (lookahead == '>') ADVANCE(809);
      if (lookahead == '?') ADVANCE(26);
      if (lookahead == 'A') ADVANCE(610);
      if (lookahead == 'D') ADVANCE(602);
      if (lookahead == 'F') ADVANCE(571);
      if (lookahead == 'G') ADVANCE(655);
      if (lookahead == 'I') ADVANCE(639);
      if (lookahead == 'J') ADVANCE(644);
      if (lookahead == 'L') ADVANCE(605);
      if (lookahead == 'N') ADVANCE(677);
      if (lookahead == 'O') ADVANCE(648);
      if (lookahead == 'R') ADVANCE(600);
      if (lookahead == 'S') ADVANCE(603);
      if (lookahead == 'T') ADVANCE(576);
      if (lookahead == '_') ADVANCE(564);
      if (lookahead == '`') ADVANCE(566);
      if (lookahead == 'a') ADVANCE(729);
      if (lookahead == 'd') ADVANCE(720);
      if (lookahead == 'f') ADVANCE(689);
      if (lookahead == 'g') ADVANCE(773);
      if (lookahead == 'i') ADVANCE(757);
      if (lookahead == 'j') ADVANCE(762);
      if (lookahead == 'l') ADVANCE(723);
      if (lookahead == 'n') ADVANCE(793);
      if (lookahead == 'o') ADVANCE(767);
      if (lookahead == 'r') ADVANCE(718);
      if (lookahead == 's') ADVANCE(721);
      if (lookahead == 't') ADVANCE(694);
      if (lookahead == '|') ADVANCE(830);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(437)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(562);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(803);
      END_STATE();
    case 433:
      if (eof) ADVANCE(441);
      if (lookahead == '!') ADVANCE(23);
      if (lookahead == '"') ADVANCE(15);
      if (lookahead == '#') ADVANCE(822);
      if (lookahead == '(') ADVANCE(535);
      if (lookahead == ')') ADVANCE(536);
      if (lookahead == '*') ADVANCE(806);
      if (lookahead == '+') ADVANCE(543);
      if (lookahead == ',') ADVANCE(539);
      if (lookahead == '-') ADVANCE(542);
      if (lookahead == '.') ADVANCE(565);
      if (lookahead == '/') ADVANCE(807);
      if (lookahead == ':') ADVANCE(517);
      if (lookahead == '<') ADVANCE(811);
      if (lookahead == '=') ADVANCE(534);
      if (lookahead == '>') ADVANCE(809);
      if (lookahead == '?') ADVANCE(26);
      if (lookahead == '@') ADVANCE(817);
      if (lookahead == 'A') ADVANCE(76);
      if (lookahead == 'D') ADVANCE(62);
      if (lookahead == 'E') ADVANCE(188);
      if (lookahead == 'F') ADVANCE(88);
      if (lookahead == 'G') ADVANCE(147);
      if (lookahead == 'I') ADVANCE(120);
      if (lookahead == 'J') ADVANCE(136);
      if (lookahead == 'L') ADVANCE(48);
      if (lookahead == 'O') ADVANCE(143);
      if (lookahead == 'P') ADVANCE(144);
      if (lookahead == 'R') ADVANCE(49);
      if (lookahead == 'S') ADVANCE(65);
      if (lookahead == 'T') ADVANCE(820);
      if (lookahead == 'W') ADVANCE(90);
      if (lookahead == 'Z') ADVANCE(821);
      if (lookahead == '[') ADVANCE(538);
      if (lookahead == ']') ADVANCE(540);
      if (lookahead == '_') ADVANCE(563);
      if (lookahead == 'a') ADVANCE(255);
      if (lookahead == 'd') ADVANCE(237);
      if (lookahead == 'e') ADVANCE(411);
      if (lookahead == 'f') ADVANCE(271);
      if (lookahead == 'g') ADVANCE(354);
      if (lookahead == 'i') ADVANCE(317);
      if (lookahead == 'j') ADVANCE(339);
      if (lookahead == 'l') ADVANCE(219);
      if (lookahead == 'o') ADVANCE(349);
      if (lookahead == 'p') ADVANCE(350);
      if (lookahead == 'r') ADVANCE(220);
      if (lookahead == 's') ADVANCE(239);
      if (lookahead == 't') ADVANCE(198);
      if (lookahead == 'w') ADVANCE(273);
      if (lookahead == '|') ADVANCE(830);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(438)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(562);
      END_STATE();
    case 434:
      if (eof) ADVANCE(441);
      if (lookahead == '!') ADVANCE(23);
      if (lookahead == '#') ADVANCE(822);
      if (lookahead == '(') ADVANCE(535);
      if (lookahead == ')') ADVANCE(536);
      if (lookahead == '*') ADVANCE(806);
      if (lookahead == '+') ADVANCE(543);
      if (lookahead == ',') ADVANCE(539);
      if (lookahead == '-') ADVANCE(542);
      if (lookahead == '.') ADVANCE(22);
      if (lookahead == '/') ADVANCE(807);
      if (lookahead == '<') ADVANCE(811);
      if (lookahead == '=') ADVANCE(534);
      if (lookahead == '>') ADVANCE(809);
      if (lookahead == '?') ADVANCE(26);
      if (lookahead == 'A') ADVANCE(76);
      if (lookahead == 'D') ADVANCE(62);
      if (lookahead == 'E') ADVANCE(188);
      if (lookahead == 'F') ADVANCE(89);
      if (lookahead == 'G') ADVANCE(147);
      if (lookahead == 'I') ADVANCE(129);
      if (lookahead == 'J') ADVANCE(136);
      if (lookahead == 'L') ADVANCE(72);
      if (lookahead == 'O') ADVANCE(143);
      if (lookahead == 'R') ADVANCE(50);
      if (lookahead == 'S') ADVANCE(65);
      if (lookahead == 'T') ADVANCE(820);
      if (lookahead == 'W') ADVANCE(90);
      if (lookahead == ']') ADVANCE(540);
      if (lookahead == '_') ADVANCE(563);
      if (lookahead == 'a') ADVANCE(255);
      if (lookahead == 'd') ADVANCE(237);
      if (lookahead == 'e') ADVANCE(411);
      if (lookahead == 'f') ADVANCE(272);
      if (lookahead == 'g') ADVANCE(354);
      if (lookahead == 'i') ADVANCE(329);
      if (lookahead == 'j') ADVANCE(339);
      if (lookahead == 'l') ADVANCE(250);
      if (lookahead == 'o') ADVANCE(349);
      if (lookahead == 'r') ADVANCE(221);
      if (lookahead == 's') ADVANCE(239);
      if (lookahead == 't') ADVANCE(198);
      if (lookahead == 'w') ADVANCE(273);
      if (lookahead == '|') ADVANCE(830);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(439)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(562);
      END_STATE();
    case 435:
      if (eof) ADVANCE(441);
      if (lookahead == '"') ADVANCE(545);
      if (lookahead == '#') ADVANCE(822);
      if (lookahead == '\'') ADVANCE(549);
      if (lookahead == '-') ADVANCE(541);
      if (lookahead == '.') ADVANCE(565);
      if (lookahead == ':') ADVANCE(517);
      if (lookahead == 'A') ADVANCE(611);
      if (lookahead == 'D') ADVANCE(602);
      if (lookahead == 'F') ADVANCE(571);
      if (lookahead == 'G') ADVANCE(655);
      if (lookahead == 'I') ADVANCE(639);
      if (lookahead == 'J') ADVANCE(644);
      if (lookahead == 'L') ADVANCE(605);
      if (lookahead == 'N') ADVANCE(677);
      if (lookahead == 'R') ADVANCE(600);
      if (lookahead == 'S') ADVANCE(603);
      if (lookahead == 'T') ADVANCE(576);
      if (lookahead == '_') ADVANCE(564);
      if (lookahead == '`') ADVANCE(566);
      if (lookahead == 'a') ADVANCE(730);
      if (lookahead == 'd') ADVANCE(720);
      if (lookahead == 'f') ADVANCE(689);
      if (lookahead == 'g') ADVANCE(773);
      if (lookahead == 'i') ADVANCE(757);
      if (lookahead == 'j') ADVANCE(762);
      if (lookahead == 'l') ADVANCE(723);
      if (lookahead == 'n') ADVANCE(793);
      if (lookahead == 'r') ADVANCE(718);
      if (lookahead == 's') ADVANCE(721);
      if (lookahead == 't') ADVANCE(694);
      if (lookahead == '|') ADVANCE(830);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(440)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(562);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(803);
      END_STATE();
    case 436:
      if (eof) ADVANCE(441);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(436)
      if (lookahead == '!') ADVANCE(829);
      if (lookahead == '"') ADVANCE(545);
      if (lookahead == '#') ADVANCE(822);
      if (lookahead == '\'') ADVANCE(549);
      if (lookahead == '(') ADVANCE(535);
      if (lookahead == ')') ADVANCE(536);
      if (lookahead == '*') ADVANCE(806);
      if (lookahead == '+') ADVANCE(543);
      if (lookahead == ',') ADVANCE(539);
      if (lookahead == '-') ADVANCE(542);
      if (lookahead == '.') ADVANCE(565);
      if (lookahead == '/') ADVANCE(807);
      if (lookahead == ':') ADVANCE(517);
      if (lookahead == '<') ADVANCE(811);
      if (lookahead == '=') ADVANCE(534);
      if (lookahead == '>') ADVANCE(809);
      if (lookahead == '?') ADVANCE(26);
      if (lookahead == '@') ADVANCE(817);
      if (lookahead == 'A') ADVANCE(77);
      if (lookahead == 'C') ADVANCE(131);
      if (lookahead == 'D') ADVANCE(62);
      if (lookahead == 'E') ADVANCE(188);
      if (lookahead == 'F') ADVANCE(28);
      if (lookahead == 'G') ADVANCE(147);
      if (lookahead == 'I') ADVANCE(114);
      if (lookahead == 'J') ADVANCE(137);
      if (lookahead == 'L') ADVANCE(48);
      if (lookahead == 'M') ADVANCE(29);
      if (lookahead == 'N') ADVANCE(179);
      if (lookahead == 'O') ADVANCE(143);
      if (lookahead == 'P') ADVANCE(144);
      if (lookahead == 'R') ADVANCE(49);
      if (lookahead == 'S') ADVANCE(64);
      if (lookahead == 'T') ADVANCE(819);
      if (lookahead == 'V') ADVANCE(66);
      if (lookahead == 'W') ADVANCE(90);
      if (lookahead == 'Z') ADVANCE(821);
      if (lookahead == '[') ADVANCE(538);
      if (lookahead == ']') ADVANCE(540);
      if (lookahead == '_') ADVANCE(563);
      if (lookahead == '`') ADVANCE(566);
      if (lookahead == 'a') ADVANCE(256);
      if (lookahead == 'c') ADVANCE(331);
      if (lookahead == 'd') ADVANCE(237);
      if (lookahead == 'e') ADVANCE(411);
      if (lookahead == 'f') ADVANCE(10);
      if (lookahead == 'g') ADVANCE(354);
      if (lookahead == 'i') ADVANCE(311);
      if (lookahead == 'j') ADVANCE(340);
      if (lookahead == 'l') ADVANCE(219);
      if (lookahead == 'm') ADVANCE(192);
      if (lookahead == 'n') ADVANCE(397);
      if (lookahead == 'o') ADVANCE(349);
      if (lookahead == 'p') ADVANCE(350);
      if (lookahead == 'r') ADVANCE(220);
      if (lookahead == 's') ADVANCE(11);
      if (lookahead == 't') ADVANCE(191);
      if (lookahead == 'v') ADVANCE(241);
      if (lookahead == 'w') ADVANCE(273);
      if (lookahead == '|') ADVANCE(830);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(562);
      END_STATE();
    case 437:
      if (eof) ADVANCE(441);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(437)
      if (lookahead == '!') ADVANCE(23);
      if (lookahead == '"') ADVANCE(545);
      if (lookahead == '#') ADVANCE(822);
      if (lookahead == '\'') ADVANCE(549);
      if (lookahead == '*') ADVANCE(806);
      if (lookahead == '+') ADVANCE(543);
      if (lookahead == '-') ADVANCE(541);
      if (lookahead == '.') ADVANCE(565);
      if (lookahead == '/') ADVANCE(807);
      if (lookahead == '<') ADVANCE(811);
      if (lookahead == '=') ADVANCE(24);
      if (lookahead == '>') ADVANCE(809);
      if (lookahead == '?') ADVANCE(26);
      if (lookahead == 'A') ADVANCE(610);
      if (lookahead == 'D') ADVANCE(602);
      if (lookahead == 'F') ADVANCE(571);
      if (lookahead == 'G') ADVANCE(655);
      if (lookahead == 'I') ADVANCE(639);
      if (lookahead == 'J') ADVANCE(644);
      if (lookahead == 'L') ADVANCE(605);
      if (lookahead == 'N') ADVANCE(677);
      if (lookahead == 'O') ADVANCE(648);
      if (lookahead == 'R') ADVANCE(600);
      if (lookahead == 'S') ADVANCE(603);
      if (lookahead == 'T') ADVANCE(576);
      if (lookahead == '_') ADVANCE(564);
      if (lookahead == '`') ADVANCE(566);
      if (lookahead == 'a') ADVANCE(729);
      if (lookahead == 'd') ADVANCE(720);
      if (lookahead == 'f') ADVANCE(689);
      if (lookahead == 'g') ADVANCE(773);
      if (lookahead == 'i') ADVANCE(757);
      if (lookahead == 'j') ADVANCE(762);
      if (lookahead == 'l') ADVANCE(723);
      if (lookahead == 'n') ADVANCE(793);
      if (lookahead == 'o') ADVANCE(767);
      if (lookahead == 'r') ADVANCE(718);
      if (lookahead == 's') ADVANCE(721);
      if (lookahead == 't') ADVANCE(694);
      if (lookahead == '|') ADVANCE(830);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(562);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(803);
      END_STATE();
    case 438:
      if (eof) ADVANCE(441);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(438)
      if (lookahead == '!') ADVANCE(23);
      if (lookahead == '"') ADVANCE(15);
      if (lookahead == '#') ADVANCE(822);
      if (lookahead == '(') ADVANCE(535);
      if (lookahead == ')') ADVANCE(536);
      if (lookahead == '*') ADVANCE(806);
      if (lookahead == '+') ADVANCE(543);
      if (lookahead == ',') ADVANCE(539);
      if (lookahead == '-') ADVANCE(542);
      if (lookahead == '.') ADVANCE(565);
      if (lookahead == '/') ADVANCE(807);
      if (lookahead == ':') ADVANCE(517);
      if (lookahead == '<') ADVANCE(811);
      if (lookahead == '=') ADVANCE(534);
      if (lookahead == '>') ADVANCE(809);
      if (lookahead == '?') ADVANCE(26);
      if (lookahead == '@') ADVANCE(817);
      if (lookahead == 'A') ADVANCE(76);
      if (lookahead == 'D') ADVANCE(62);
      if (lookahead == 'E') ADVANCE(188);
      if (lookahead == 'F') ADVANCE(88);
      if (lookahead == 'G') ADVANCE(147);
      if (lookahead == 'I') ADVANCE(120);
      if (lookahead == 'J') ADVANCE(136);
      if (lookahead == 'L') ADVANCE(48);
      if (lookahead == 'O') ADVANCE(143);
      if (lookahead == 'P') ADVANCE(144);
      if (lookahead == 'R') ADVANCE(49);
      if (lookahead == 'S') ADVANCE(65);
      if (lookahead == 'T') ADVANCE(820);
      if (lookahead == 'W') ADVANCE(90);
      if (lookahead == 'Z') ADVANCE(821);
      if (lookahead == '[') ADVANCE(538);
      if (lookahead == ']') ADVANCE(540);
      if (lookahead == '_') ADVANCE(563);
      if (lookahead == 'a') ADVANCE(255);
      if (lookahead == 'd') ADVANCE(237);
      if (lookahead == 'e') ADVANCE(411);
      if (lookahead == 'f') ADVANCE(271);
      if (lookahead == 'g') ADVANCE(354);
      if (lookahead == 'i') ADVANCE(317);
      if (lookahead == 'j') ADVANCE(339);
      if (lookahead == 'l') ADVANCE(219);
      if (lookahead == 'o') ADVANCE(349);
      if (lookahead == 'p') ADVANCE(350);
      if (lookahead == 'r') ADVANCE(220);
      if (lookahead == 's') ADVANCE(239);
      if (lookahead == 't') ADVANCE(198);
      if (lookahead == 'w') ADVANCE(273);
      if (lookahead == '|') ADVANCE(830);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(562);
      END_STATE();
    case 439:
      if (eof) ADVANCE(441);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(439)
      if (lookahead == '!') ADVANCE(23);
      if (lookahead == '#') ADVANCE(822);
      if (lookahead == '(') ADVANCE(535);
      if (lookahead == ')') ADVANCE(536);
      if (lookahead == '*') ADVANCE(806);
      if (lookahead == '+') ADVANCE(543);
      if (lookahead == ',') ADVANCE(539);
      if (lookahead == '-') ADVANCE(542);
      if (lookahead == '.') ADVANCE(22);
      if (lookahead == '/') ADVANCE(807);
      if (lookahead == '<') ADVANCE(811);
      if (lookahead == '=') ADVANCE(534);
      if (lookahead == '>') ADVANCE(809);
      if (lookahead == '?') ADVANCE(26);
      if (lookahead == 'A') ADVANCE(76);
      if (lookahead == 'D') ADVANCE(62);
      if (lookahead == 'E') ADVANCE(188);
      if (lookahead == 'F') ADVANCE(89);
      if (lookahead == 'G') ADVANCE(147);
      if (lookahead == 'I') ADVANCE(129);
      if (lookahead == 'J') ADVANCE(136);
      if (lookahead == 'L') ADVANCE(72);
      if (lookahead == 'O') ADVANCE(143);
      if (lookahead == 'R') ADVANCE(50);
      if (lookahead == 'S') ADVANCE(65);
      if (lookahead == 'T') ADVANCE(820);
      if (lookahead == 'W') ADVANCE(90);
      if (lookahead == ']') ADVANCE(540);
      if (lookahead == '_') ADVANCE(563);
      if (lookahead == 'a') ADVANCE(255);
      if (lookahead == 'd') ADVANCE(237);
      if (lookahead == 'e') ADVANCE(411);
      if (lookahead == 'f') ADVANCE(272);
      if (lookahead == 'g') ADVANCE(354);
      if (lookahead == 'i') ADVANCE(329);
      if (lookahead == 'j') ADVANCE(339);
      if (lookahead == 'l') ADVANCE(250);
      if (lookahead == 'o') ADVANCE(349);
      if (lookahead == 'r') ADVANCE(221);
      if (lookahead == 's') ADVANCE(239);
      if (lookahead == 't') ADVANCE(198);
      if (lookahead == 'w') ADVANCE(273);
      if (lookahead == '|') ADVANCE(830);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(562);
      END_STATE();
    case 440:
      if (eof) ADVANCE(441);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(440)
      if (lookahead == '"') ADVANCE(545);
      if (lookahead == '#') ADVANCE(822);
      if (lookahead == '\'') ADVANCE(549);
      if (lookahead == '-') ADVANCE(541);
      if (lookahead == '.') ADVANCE(565);
      if (lookahead == ':') ADVANCE(517);
      if (lookahead == 'A') ADVANCE(611);
      if (lookahead == 'D') ADVANCE(602);
      if (lookahead == 'F') ADVANCE(571);
      if (lookahead == 'G') ADVANCE(655);
      if (lookahead == 'I') ADVANCE(639);
      if (lookahead == 'J') ADVANCE(644);
      if (lookahead == 'L') ADVANCE(605);
      if (lookahead == 'N') ADVANCE(677);
      if (lookahead == 'R') ADVANCE(600);
      if (lookahead == 'S') ADVANCE(603);
      if (lookahead == 'T') ADVANCE(576);
      if (lookahead == '_') ADVANCE(564);
      if (lookahead == '`') ADVANCE(566);
      if (lookahead == 'a') ADVANCE(730);
      if (lookahead == 'd') ADVANCE(720);
      if (lookahead == 'f') ADVANCE(689);
      if (lookahead == 'g') ADVANCE(773);
      if (lookahead == 'i') ADVANCE(757);
      if (lookahead == 'j') ADVANCE(762);
      if (lookahead == 'l') ADVANCE(723);
      if (lookahead == 'n') ADVANCE(793);
      if (lookahead == 'r') ADVANCE(718);
      if (lookahead == 's') ADVANCE(721);
      if (lookahead == 't') ADVANCE(694);
      if (lookahead == '|') ADVANCE(830);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(562);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(803);
      END_STATE();
    case 441:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 442:
      ACCEPT_TOKEN(sym_keyword_from);
      if (lookahead == '_') ADVANCE(173);
      END_STATE();
    case 443:
      ACCEPT_TOKEN(sym_keyword_from);
      if (lookahead == '_') ADVANCE(389);
      END_STATE();
    case 444:
      ACCEPT_TOKEN(sym_keyword_from);
      if (lookahead == '_') ADVANCE(674);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(803);
      END_STATE();
    case 445:
      ACCEPT_TOKEN(sym_keyword_from);
      if (lookahead == '_') ADVANCE(790);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(803);
      END_STATE();
    case 446:
      ACCEPT_TOKEN(sym_keyword_filter);
      END_STATE();
    case 447:
      ACCEPT_TOKEN(sym_keyword_filter);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(803);
      END_STATE();
    case 448:
      ACCEPT_TOKEN(sym_keyword_derive);
      END_STATE();
    case 449:
      ACCEPT_TOKEN(sym_keyword_derive);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(803);
      END_STATE();
    case 450:
      ACCEPT_TOKEN(sym_keyword_group);
      END_STATE();
    case 451:
      ACCEPT_TOKEN(sym_keyword_group);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(803);
      END_STATE();
    case 452:
      ACCEPT_TOKEN(sym_keyword_aggregate);
      END_STATE();
    case 453:
      ACCEPT_TOKEN(sym_keyword_aggregate);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(803);
      END_STATE();
    case 454:
      ACCEPT_TOKEN(sym_keyword_sort);
      END_STATE();
    case 455:
      ACCEPT_TOKEN(sym_keyword_sort);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(803);
      END_STATE();
    case 456:
      ACCEPT_TOKEN(sym_keyword_take);
      END_STATE();
    case 457:
      ACCEPT_TOKEN(sym_keyword_take);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(803);
      END_STATE();
    case 458:
      ACCEPT_TOKEN(sym_keyword_window);
      END_STATE();
    case 459:
      ACCEPT_TOKEN(sym_keyword_join);
      END_STATE();
    case 460:
      ACCEPT_TOKEN(sym_keyword_join);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(803);
      END_STATE();
    case 461:
      ACCEPT_TOKEN(sym_keyword_select);
      END_STATE();
    case 462:
      ACCEPT_TOKEN(sym_keyword_select);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(803);
      END_STATE();
    case 463:
      ACCEPT_TOKEN(sym_keyword_true);
      END_STATE();
    case 464:
      ACCEPT_TOKEN(sym_keyword_true);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(803);
      END_STATE();
    case 465:
      ACCEPT_TOKEN(sym_keyword_false);
      END_STATE();
    case 466:
      ACCEPT_TOKEN(sym_keyword_false);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(803);
      END_STATE();
    case 467:
      ACCEPT_TOKEN(sym_keyword_switch);
      END_STATE();
    case 468:
      ACCEPT_TOKEN(sym_keyword_switch);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(803);
      END_STATE();
    case 469:
      ACCEPT_TOKEN(sym_keyword_append);
      END_STATE();
    case 470:
      ACCEPT_TOKEN(sym_keyword_append);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(803);
      END_STATE();
    case 471:
      ACCEPT_TOKEN(sym_keyword_remove);
      END_STATE();
    case 472:
      ACCEPT_TOKEN(sym_keyword_remove);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(803);
      END_STATE();
    case 473:
      ACCEPT_TOKEN(sym_keyword_intersect);
      END_STATE();
    case 474:
      ACCEPT_TOKEN(sym_keyword_intersect);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(803);
      END_STATE();
    case 475:
      ACCEPT_TOKEN(sym_keyword_average);
      END_STATE();
    case 476:
      ACCEPT_TOKEN(sym_keyword_average);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(803);
      END_STATE();
    case 477:
      ACCEPT_TOKEN(sym_keyword_min);
      END_STATE();
    case 478:
      ACCEPT_TOKEN(sym_keyword_min);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(803);
      END_STATE();
    case 479:
      ACCEPT_TOKEN(sym_keyword_max);
      END_STATE();
    case 480:
      ACCEPT_TOKEN(sym_keyword_max);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(803);
      END_STATE();
    case 481:
      ACCEPT_TOKEN(sym_keyword_count);
      if (lookahead == '_') ADVANCE(583);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(803);
      END_STATE();
    case 482:
      ACCEPT_TOKEN(sym_keyword_count);
      if (lookahead == '_') ADVANCE(701);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(803);
      END_STATE();
    case 483:
      ACCEPT_TOKEN(sym_keyword_count);
      if (lookahead == '_') ADVANCE(43);
      END_STATE();
    case 484:
      ACCEPT_TOKEN(sym_keyword_count);
      if (lookahead == '_') ADVANCE(215);
      END_STATE();
    case 485:
      ACCEPT_TOKEN(sym_keyword_stddev);
      END_STATE();
    case 486:
      ACCEPT_TOKEN(sym_keyword_stddev);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(803);
      END_STATE();
    case 487:
      ACCEPT_TOKEN(sym_keyword_avg);
      END_STATE();
    case 488:
      ACCEPT_TOKEN(sym_keyword_avg);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(803);
      END_STATE();
    case 489:
      ACCEPT_TOKEN(sym_keyword_sum);
      END_STATE();
    case 490:
      ACCEPT_TOKEN(sym_keyword_sum);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(803);
      END_STATE();
    case 491:
      ACCEPT_TOKEN(sym_keyword_count_distinct);
      END_STATE();
    case 492:
      ACCEPT_TOKEN(sym_keyword_count_distinct);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(803);
      END_STATE();
    case 493:
      ACCEPT_TOKEN(sym_keyword_side);
      END_STATE();
    case 494:
      ACCEPT_TOKEN(sym_keyword_side);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(803);
      END_STATE();
    case 495:
      ACCEPT_TOKEN(sym_keyword_inner);
      END_STATE();
    case 496:
      ACCEPT_TOKEN(sym_keyword_left);
      END_STATE();
    case 497:
      ACCEPT_TOKEN(sym_keyword_right);
      END_STATE();
    case 498:
      ACCEPT_TOKEN(sym_keyword_full);
      END_STATE();
    case 499:
      ACCEPT_TOKEN(sym_keyword_and);
      END_STATE();
    case 500:
      ACCEPT_TOKEN(sym_keyword_and);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(803);
      END_STATE();
    case 501:
      ACCEPT_TOKEN(sym_keyword_or);
      END_STATE();
    case 502:
      ACCEPT_TOKEN(sym_keyword_or);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(803);
      END_STATE();
    case 503:
      ACCEPT_TOKEN(sym_keyword_in);
      if (lookahead == 'N') ADVANCE(68);
      if (lookahead == 'T') ADVANCE(70);
      END_STATE();
    case 504:
      ACCEPT_TOKEN(sym_keyword_in);
      if (lookahead == 'n') ADVANCE(244);
      if (lookahead == 't') ADVANCE(246);
      END_STATE();
    case 505:
      ACCEPT_TOKEN(sym_keyword_rolling);
      END_STATE();
    case 506:
      ACCEPT_TOKEN(sym_keyword_rows);
      END_STATE();
    case 507:
      ACCEPT_TOKEN(sym_keyword_expanding);
      END_STATE();
    case 508:
      ACCEPT_TOKEN(sym_keyword_null);
      END_STATE();
    case 509:
      ACCEPT_TOKEN(sym_keyword_null);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(803);
      END_STATE();
    case 510:
      ACCEPT_TOKEN(sym_keyword_func);
      END_STATE();
    case 511:
      ACCEPT_TOKEN(sym_keyword_func);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(803);
      END_STATE();
    case 512:
      ACCEPT_TOKEN(sym_keyword_let);
      END_STATE();
    case 513:
      ACCEPT_TOKEN(sym_keyword_let);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(803);
      END_STATE();
    case 514:
      ACCEPT_TOKEN(sym_keyword_prql);
      END_STATE();
    case 515:
      ACCEPT_TOKEN(sym_keyword_version);
      END_STATE();
    case 516:
      ACCEPT_TOKEN(sym_keyword_target);
      END_STATE();
    case 517:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 518:
      ACCEPT_TOKEN(anon_sym_sql_DOTansi);
      END_STATE();
    case 519:
      ACCEPT_TOKEN(anon_sym_sql_DOTbigquery);
      END_STATE();
    case 520:
      ACCEPT_TOKEN(anon_sym_sql_DOTclickhouse);
      END_STATE();
    case 521:
      ACCEPT_TOKEN(anon_sym_sql_DOTgeneric);
      END_STATE();
    case 522:
      ACCEPT_TOKEN(anon_sym_sql_DOThive);
      END_STATE();
    case 523:
      ACCEPT_TOKEN(anon_sym_sql_DOTmssql);
      END_STATE();
    case 524:
      ACCEPT_TOKEN(anon_sym_sql_DOTmysql);
      END_STATE();
    case 525:
      ACCEPT_TOKEN(anon_sym_sql_DOTpostgres);
      END_STATE();
    case 526:
      ACCEPT_TOKEN(anon_sym_sql_DOTsqlite);
      END_STATE();
    case 527:
      ACCEPT_TOKEN(anon_sym_sql_DOTsnowflake);
      END_STATE();
    case 528:
      ACCEPT_TOKEN(anon_sym_sql_DOTduckdb);
      END_STATE();
    case 529:
      ACCEPT_TOKEN(sym_keyword_from_text);
      END_STATE();
    case 530:
      ACCEPT_TOKEN(sym_keyword_from_text);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(803);
      END_STATE();
    case 531:
      ACCEPT_TOKEN(sym_keyword_format);
      END_STATE();
    case 532:
      ACCEPT_TOKEN(sym_keyword_csv);
      END_STATE();
    case 533:
      ACCEPT_TOKEN(sym_keyword_json);
      END_STATE();
    case 534:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead == '=') ADVANCE(544);
      END_STATE();
    case 535:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 536:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 537:
      ACCEPT_TOKEN(anon_sym_DASH_GT);
      END_STATE();
    case 538:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 539:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 540:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 541:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 542:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '>') ADVANCE(537);
      END_STATE();
    case 543:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 544:
      ACCEPT_TOKEN(anon_sym_EQ_EQ);
      END_STATE();
    case 545:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 546:
      ACCEPT_TOKEN(aux_sym__double_quote_string_token1);
      if (lookahead == '#') ADVANCE(824);
      if (lookahead == '|') ADVANCE(832);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(547);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(548);
      END_STATE();
    case 547:
      ACCEPT_TOKEN(aux_sym__double_quote_string_token1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(547);
      if (lookahead == '#') ADVANCE(824);
      if (lookahead == '|') ADVANCE(832);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(548);
      END_STATE();
    case 548:
      ACCEPT_TOKEN(aux_sym__double_quote_string_token1);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(548);
      END_STATE();
    case 549:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 550:
      ACCEPT_TOKEN(aux_sym__single_quote_string_token1);
      if (lookahead == '#') ADVANCE(825);
      if (lookahead == '|') ADVANCE(833);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(551);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(552);
      END_STATE();
    case 551:
      ACCEPT_TOKEN(aux_sym__single_quote_string_token1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(551);
      if (lookahead == '#') ADVANCE(825);
      if (lookahead == '|') ADVANCE(833);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(552);
      END_STATE();
    case 552:
      ACCEPT_TOKEN(aux_sym__single_quote_string_token1);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(552);
      END_STATE();
    case 553:
      ACCEPT_TOKEN(aux_sym__inner_triple_quotes_token1);
      END_STATE();
    case 554:
      ACCEPT_TOKEN(aux_sym__inner_triple_quotes_token1);
      if (lookahead == '"') ADVANCE(14);
      END_STATE();
    case 555:
      ACCEPT_TOKEN(aux_sym__inner_triple_quotes_token1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(555);
      if (lookahead == '"') ADVANCE(554);
      if (lookahead == '#') ADVANCE(822);
      if (lookahead == '|') ADVANCE(830);
      if (lookahead != 0) ADVANCE(553);
      END_STATE();
    case 556:
      ACCEPT_TOKEN(aux_sym__inner_triple_quotes_token1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(556);
      if (lookahead == '#') ADVANCE(822);
      if (lookahead == '|') ADVANCE(830);
      if (lookahead != 0) ADVANCE(553);
      END_STATE();
    case 557:
      ACCEPT_TOKEN(anon_sym_DQUOTE_DQUOTE_DQUOTE);
      END_STATE();
    case 558:
      ACCEPT_TOKEN(anon_sym_f_DQUOTE);
      if (lookahead == '"') ADVANCE(12);
      END_STATE();
    case 559:
      ACCEPT_TOKEN(anon_sym_f_DQUOTE_DQUOTE_DQUOTE);
      END_STATE();
    case 560:
      ACCEPT_TOKEN(anon_sym_s_DQUOTE);
      if (lookahead == '"') ADVANCE(13);
      END_STATE();
    case 561:
      ACCEPT_TOKEN(anon_sym_s_DQUOTE_DQUOTE_DQUOTE);
      END_STATE();
    case 562:
      ACCEPT_TOKEN(sym__natural_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(562);
      END_STATE();
    case 563:
      ACCEPT_TOKEN(anon_sym__);
      END_STATE();
    case 564:
      ACCEPT_TOKEN(anon_sym__);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(803);
      END_STATE();
    case 565:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 566:
      ACCEPT_TOKEN(anon_sym_BQUOTE);
      END_STATE();
    case 567:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '"') ADVANCE(558);
      if (lookahead == 'a') ADVANCE(741);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(803);
      END_STATE();
    case 568:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '"') ADVANCE(560);
      if (lookahead == 't') ADVANCE(704);
      if (lookahead == 'u') ADVANCE(746);
      if (lookahead == 'w') ADVANCE(737);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(803);
      END_STATE();
    case 569:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '"') ADVANCE(560);
      if (lookahead == 't') ADVANCE(704);
      if (lookahead == 'u') ADVANCE(746);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(803);
      END_STATE();
    case 570:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '"') ADVANCE(560);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(803);
      END_STATE();
    case 571:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'A') ADVANCE(623);
      if (lookahead == 'I') ADVANCE(627);
      if (lookahead == 'R') ADVANCE(641);
      if (lookahead == 'U') ADVANCE(635);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(803);
      END_STATE();
    case 572:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'A') ADVANCE(623);
      if (lookahead == 'I') ADVANCE(627);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(803);
      END_STATE();
    case 573:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'A') ADVANCE(623);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(803);
      END_STATE();
    case 574:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'A') ADVANCE(685);
      if (lookahead == 'I') ADVANCE(631);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(803);
      END_STATE();
    case 575:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'A') ADVANCE(613);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(803);
      END_STATE();
    case 576:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'A') ADVANCE(622);
      if (lookahead == 'R') ADVANCE(676);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(803);
      END_STATE();
    case 577:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'A') ADVANCE(675);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(803);
      END_STATE();
    case 578:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'C') ADVANCE(615);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(803);
      END_STATE();
    case 579:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'C') ADVANCE(511);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(803);
      END_STATE();
    case 580:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'C') ADVANCE(663);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(803);
      END_STATE();
    case 581:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'C') ADVANCE(667);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(803);
      END_STATE();
    case 582:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'C') ADVANCE(669);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(803);
      END_STATE();
    case 583:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'D') ADVANCE(616);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(803);
      END_STATE();
    case 584:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'D') ADVANCE(500);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(803);
      END_STATE();
    case 585:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'D') ADVANCE(470);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(803);
      END_STATE();
    case 586:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'D') ADVANCE(587);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(803);
      END_STATE();
    case 587:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'D') ADVANCE(597);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(803);
      END_STATE();
    case 588:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'D') ADVANCE(596);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(803);
      END_STATE();
    case 589:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'E') ADVANCE(464);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(803);
      END_STATE();
    case 590:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'E') ADVANCE(466);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(803);
      END_STATE();
    case 591:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'E') ADVANCE(476);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(803);
      END_STATE();
    case 592:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'E') ADVANCE(457);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(803);
      END_STATE();
    case 593:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'E') ADVANCE(449);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(803);
      END_STATE();
    case 594:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'E') ADVANCE(472);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(803);
      END_STATE();
    case 595:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'E') ADVANCE(453);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(803);
      END_STATE();
    case 596:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'E') ADVANCE(494);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(803);
      END_STATE();
    case 597:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'E') ADVANCE(682);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(803);
      END_STATE();
    case 598:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'E') ADVANCE(650);
      if (lookahead == 'G') ADVANCE(488);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(803);
      END_STATE();
    case 599:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'E') ADVANCE(686);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(803);
      END_STATE();
    case 600:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'E') ADVANCE(630);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(803);
      END_STATE();
    case 601:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'E') ADVANCE(612);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(803);
      END_STATE();
    case 602:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'E') ADVANCE(652);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(803);
      END_STATE();
    case 603:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'E') ADVANCE(626);
      if (lookahead == 'O') ADVANCE(653);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(803);
      END_STATE();
    case 604:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'E') ADVANCE(637);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(803);
      END_STATE();
    case 605:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'E') ADVANCE(665);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(803);
      END_STATE();
    case 606:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'E') ADVANCE(656);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(803);
      END_STATE();
    case 607:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'E') ADVANCE(649);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(803);
      END_STATE();
    case 608:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'E') ADVANCE(581);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(803);
      END_STATE();
    case 609:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'E') ADVANCE(582);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(803);
      END_STATE();
    case 610:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'G') ADVANCE(614);
      if (lookahead == 'N') ADVANCE(584);
      if (lookahead == 'P') ADVANCE(647);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(803);
      END_STATE();
    case 611:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'G') ADVANCE(614);
      if (lookahead == 'P') ADVANCE(647);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(803);
      END_STATE();
    case 612:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'G') ADVANCE(577);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(803);
      END_STATE();
    case 613:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'G') ADVANCE(591);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(803);
      END_STATE();
    case 614:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'G') ADVANCE(654);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(803);
      END_STATE();
    case 615:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'H') ADVANCE(468);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(803);
      END_STATE();
    case 616:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'I') ADVANCE(658);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(803);
      END_STATE();
    case 617:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'I') ADVANCE(683);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(803);
      END_STATE();
    case 618:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'I') ADVANCE(633);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(803);
      END_STATE();
    case 619:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'I') ADVANCE(671);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(803);
      END_STATE();
    case 620:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'I') ADVANCE(634);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(803);
      END_STATE();
    case 621:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'I') ADVANCE(588);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(803);
      END_STATE();
    case 622:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'K') ADVANCE(592);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(803);
      END_STATE();
    case 623:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'L') ADVANCE(657);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(803);
      END_STATE();
    case 624:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'L') ADVANCE(509);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(803);
      END_STATE();
    case 625:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'L') ADVANCE(624);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(803);
      END_STATE();
    case 626:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'L') ADVANCE(608);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(803);
      END_STATE();
    case 627:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'L') ADVANCE(673);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(803);
      END_STATE();
    case 628:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'M') ADVANCE(490);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(803);
      END_STATE();
    case 629:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'M') ADVANCE(444);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(803);
      END_STATE();
    case 630:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'M') ADVANCE(645);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(803);
      END_STATE();
    case 631:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'N') ADVANCE(478);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(803);
      END_STATE();
    case 632:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'N') ADVANCE(662);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(803);
      END_STATE();
    case 633:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'N') ADVANCE(580);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(803);
      END_STATE();
    case 634:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'N') ADVANCE(460);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(803);
      END_STATE();
    case 635:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'N') ADVANCE(579);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(803);
      END_STATE();
    case 636:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'N') ADVANCE(584);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(803);
      END_STATE();
    case 637:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'N') ADVANCE(585);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(803);
      END_STATE();
    case 638:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'N') ADVANCE(664);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(803);
      END_STATE();
    case 639:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'N') ADVANCE(672);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(803);
      END_STATE();
    case 640:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'O') ADVANCE(678);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(803);
      END_STATE();
    case 641:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'O') ADVANCE(629);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(803);
      END_STATE();
    case 642:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'O') ADVANCE(679);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(803);
      END_STATE();
    case 643:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'O') ADVANCE(680);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(803);
      END_STATE();
    case 644:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'O') ADVANCE(620);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(803);
      END_STATE();
    case 645:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'O') ADVANCE(684);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(803);
      END_STATE();
    case 646:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'P') ADVANCE(451);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(803);
      END_STATE();
    case 647:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'P') ADVANCE(604);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(803);
      END_STATE();
    case 648:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'R') ADVANCE(502);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(803);
      END_STATE();
    case 649:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'R') ADVANCE(447);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(803);
      END_STATE();
    case 650:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'R') ADVANCE(575);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(803);
      END_STATE();
    case 651:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'R') ADVANCE(676);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(803);
      END_STATE();
    case 652:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'R') ADVANCE(617);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(803);
      END_STATE();
    case 653:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'R') ADVANCE(666);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(803);
      END_STATE();
    case 654:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'R') ADVANCE(601);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(803);
      END_STATE();
    case 655:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'R') ADVANCE(642);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(803);
      END_STATE();
    case 656:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'R') ADVANCE(659);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(803);
      END_STATE();
    case 657:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'S') ADVANCE(590);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(803);
      END_STATE();
    case 658:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'S') ADVANCE(670);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(803);
      END_STATE();
    case 659:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'S') ADVANCE(609);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(803);
      END_STATE();
    case 660:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'T') ADVANCE(586);
      if (lookahead == 'U') ADVANCE(628);
      if (lookahead == 'W') ADVANCE(619);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(803);
      END_STATE();
    case 661:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'T') ADVANCE(586);
      if (lookahead == 'U') ADVANCE(628);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(803);
      END_STATE();
    case 662:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'T') ADVANCE(481);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(803);
      END_STATE();
    case 663:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'T') ADVANCE(492);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(803);
      END_STATE();
    case 664:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'T') ADVANCE(687);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(803);
      END_STATE();
    case 665:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'T') ADVANCE(513);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(803);
      END_STATE();
    case 666:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'T') ADVANCE(455);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(803);
      END_STATE();
    case 667:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'T') ADVANCE(462);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(803);
      END_STATE();
    case 668:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'T') ADVANCE(530);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(803);
      END_STATE();
    case 669:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'T') ADVANCE(474);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(803);
      END_STATE();
    case 670:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'T') ADVANCE(618);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(803);
      END_STATE();
    case 671:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'T') ADVANCE(578);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(803);
      END_STATE();
    case 672:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'T') ADVANCE(606);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(803);
      END_STATE();
    case 673:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'T') ADVANCE(607);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(803);
      END_STATE();
    case 674:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'T') ADVANCE(599);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(803);
      END_STATE();
    case 675:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'T') ADVANCE(595);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(803);
      END_STATE();
    case 676:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'U') ADVANCE(589);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(803);
      END_STATE();
    case 677:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'U') ADVANCE(625);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(803);
      END_STATE();
    case 678:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'U') ADVANCE(632);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(803);
      END_STATE();
    case 679:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'U') ADVANCE(646);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(803);
      END_STATE();
    case 680:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'U') ADVANCE(638);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(803);
      END_STATE();
    case 681:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'V') ADVANCE(598);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(803);
      END_STATE();
    case 682:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'V') ADVANCE(486);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(803);
      END_STATE();
    case 683:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'V') ADVANCE(593);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(803);
      END_STATE();
    case 684:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'V') ADVANCE(594);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(803);
      END_STATE();
    case 685:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'X') ADVANCE(480);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(803);
      END_STATE();
    case 686:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'X') ADVANCE(668);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(803);
      END_STATE();
    case 687:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '_') ADVANCE(583);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(803);
      END_STATE();
    case 688:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '_') ADVANCE(701);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(803);
      END_STATE();
    case 689:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'a') ADVANCE(741);
      if (lookahead == 'i') ADVANCE(745);
      if (lookahead == 'r') ADVANCE(759);
      if (lookahead == 'u') ADVANCE(753);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(803);
      END_STATE();
    case 690:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'a') ADVANCE(741);
      if (lookahead == 'i') ADVANCE(745);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(803);
      END_STATE();
    case 691:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'a') ADVANCE(741);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(803);
      END_STATE();
    case 692:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'a') ADVANCE(801);
      if (lookahead == 'i') ADVANCE(749);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(803);
      END_STATE();
    case 693:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'a') ADVANCE(731);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(803);
      END_STATE();
    case 694:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'a') ADVANCE(740);
      if (lookahead == 'r') ADVANCE(792);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(803);
      END_STATE();
    case 695:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'a') ADVANCE(791);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(803);
      END_STATE();
    case 696:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'c') ADVANCE(733);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(803);
      END_STATE();
    case 697:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'c') ADVANCE(511);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(803);
      END_STATE();
    case 698:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'c') ADVANCE(778);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(803);
      END_STATE();
    case 699:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'c') ADVANCE(781);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(803);
      END_STATE();
    case 700:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'c') ADVANCE(783);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(803);
      END_STATE();
    case 701:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'd') ADVANCE(734);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(803);
      END_STATE();
    case 702:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'd') ADVANCE(500);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(803);
      END_STATE();
    case 703:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'd') ADVANCE(470);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(803);
      END_STATE();
    case 704:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'd') ADVANCE(705);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(803);
      END_STATE();
    case 705:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'd') ADVANCE(715);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(803);
      END_STATE();
    case 706:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'd') ADVANCE(714);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(803);
      END_STATE();
    case 707:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(464);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(803);
      END_STATE();
    case 708:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(466);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(803);
      END_STATE();
    case 709:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(476);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(803);
      END_STATE();
    case 710:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(457);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(803);
      END_STATE();
    case 711:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(449);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(803);
      END_STATE();
    case 712:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(472);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(803);
      END_STATE();
    case 713:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(453);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(803);
      END_STATE();
    case 714:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(494);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(803);
      END_STATE();
    case 715:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(798);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(803);
      END_STATE();
    case 716:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(766);
      if (lookahead == 'g') ADVANCE(488);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(803);
      END_STATE();
    case 717:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(802);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(803);
      END_STATE();
    case 718:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(748);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(803);
      END_STATE();
    case 719:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(728);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(803);
      END_STATE();
    case 720:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(770);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(803);
      END_STATE();
    case 721:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(744);
      if (lookahead == 'o') ADVANCE(771);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(803);
      END_STATE();
    case 722:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(755);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(803);
      END_STATE();
    case 723:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(779);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(803);
      END_STATE();
    case 724:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(774);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(803);
      END_STATE();
    case 725:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(768);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(803);
      END_STATE();
    case 726:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(699);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(803);
      END_STATE();
    case 727:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(700);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(803);
      END_STATE();
    case 728:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'g') ADVANCE(695);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(803);
      END_STATE();
    case 729:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'g') ADVANCE(732);
      if (lookahead == 'n') ADVANCE(702);
      if (lookahead == 'p') ADVANCE(765);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(803);
      END_STATE();
    case 730:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'g') ADVANCE(732);
      if (lookahead == 'p') ADVANCE(765);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(803);
      END_STATE();
    case 731:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'g') ADVANCE(709);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(803);
      END_STATE();
    case 732:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'g') ADVANCE(772);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(803);
      END_STATE();
    case 733:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'h') ADVANCE(468);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(803);
      END_STATE();
    case 734:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'i') ADVANCE(776);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(803);
      END_STATE();
    case 735:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'i') ADVANCE(799);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(803);
      END_STATE();
    case 736:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'i') ADVANCE(751);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(803);
      END_STATE();
    case 737:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'i') ADVANCE(786);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(803);
      END_STATE();
    case 738:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'i') ADVANCE(752);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(803);
      END_STATE();
    case 739:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'i') ADVANCE(706);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(803);
      END_STATE();
    case 740:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'k') ADVANCE(710);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(803);
      END_STATE();
    case 741:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'l') ADVANCE(775);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(803);
      END_STATE();
    case 742:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'l') ADVANCE(509);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(803);
      END_STATE();
    case 743:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'l') ADVANCE(742);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(803);
      END_STATE();
    case 744:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'l') ADVANCE(726);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(803);
      END_STATE();
    case 745:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'l') ADVANCE(789);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(803);
      END_STATE();
    case 746:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'm') ADVANCE(490);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(803);
      END_STATE();
    case 747:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'm') ADVANCE(445);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(803);
      END_STATE();
    case 748:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'm') ADVANCE(763);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(803);
      END_STATE();
    case 749:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'n') ADVANCE(478);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(803);
      END_STATE();
    case 750:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'n') ADVANCE(784);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(803);
      END_STATE();
    case 751:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'n') ADVANCE(698);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(803);
      END_STATE();
    case 752:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'n') ADVANCE(460);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(803);
      END_STATE();
    case 753:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'n') ADVANCE(697);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(803);
      END_STATE();
    case 754:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'n') ADVANCE(702);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(803);
      END_STATE();
    case 755:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'n') ADVANCE(703);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(803);
      END_STATE();
    case 756:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'n') ADVANCE(787);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(803);
      END_STATE();
    case 757:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'n') ADVANCE(788);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(803);
      END_STATE();
    case 758:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'o') ADVANCE(794);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(803);
      END_STATE();
    case 759:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'o') ADVANCE(747);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(803);
      END_STATE();
    case 760:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'o') ADVANCE(795);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(803);
      END_STATE();
    case 761:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'o') ADVANCE(796);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(803);
      END_STATE();
    case 762:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'o') ADVANCE(738);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(803);
      END_STATE();
    case 763:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'o') ADVANCE(800);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(803);
      END_STATE();
    case 764:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'p') ADVANCE(451);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(803);
      END_STATE();
    case 765:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'p') ADVANCE(722);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(803);
      END_STATE();
    case 766:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'r') ADVANCE(693);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(803);
      END_STATE();
    case 767:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'r') ADVANCE(502);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(803);
      END_STATE();
    case 768:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'r') ADVANCE(447);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(803);
      END_STATE();
    case 769:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'r') ADVANCE(792);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(803);
      END_STATE();
    case 770:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'r') ADVANCE(735);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(803);
      END_STATE();
    case 771:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'r') ADVANCE(780);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(803);
      END_STATE();
    case 772:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'r') ADVANCE(719);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(803);
      END_STATE();
    case 773:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'r') ADVANCE(760);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(803);
      END_STATE();
    case 774:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'r') ADVANCE(777);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(803);
      END_STATE();
    case 775:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 's') ADVANCE(708);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(803);
      END_STATE();
    case 776:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 's') ADVANCE(785);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(803);
      END_STATE();
    case 777:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 's') ADVANCE(727);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(803);
      END_STATE();
    case 778:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 't') ADVANCE(492);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(803);
      END_STATE();
    case 779:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 't') ADVANCE(513);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(803);
      END_STATE();
    case 780:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 't') ADVANCE(455);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(803);
      END_STATE();
    case 781:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 't') ADVANCE(462);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(803);
      END_STATE();
    case 782:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 't') ADVANCE(530);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(803);
      END_STATE();
    case 783:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 't') ADVANCE(474);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(803);
      END_STATE();
    case 784:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 't') ADVANCE(482);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(803);
      END_STATE();
    case 785:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 't') ADVANCE(736);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(803);
      END_STATE();
    case 786:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 't') ADVANCE(696);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(803);
      END_STATE();
    case 787:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 't') ADVANCE(688);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(803);
      END_STATE();
    case 788:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 't') ADVANCE(724);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(803);
      END_STATE();
    case 789:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 't') ADVANCE(725);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(803);
      END_STATE();
    case 790:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 't') ADVANCE(717);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(803);
      END_STATE();
    case 791:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 't') ADVANCE(713);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(803);
      END_STATE();
    case 792:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'u') ADVANCE(707);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(803);
      END_STATE();
    case 793:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'u') ADVANCE(743);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(803);
      END_STATE();
    case 794:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'u') ADVANCE(750);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(803);
      END_STATE();
    case 795:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'u') ADVANCE(764);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(803);
      END_STATE();
    case 796:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'u') ADVANCE(756);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(803);
      END_STATE();
    case 797:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'v') ADVANCE(716);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(803);
      END_STATE();
    case 798:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'v') ADVANCE(486);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(803);
      END_STATE();
    case 799:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'v') ADVANCE(711);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(803);
      END_STATE();
    case 800:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'v') ADVANCE(712);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(803);
      END_STATE();
    case 801:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'x') ADVANCE(480);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(803);
      END_STATE();
    case 802:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'x') ADVANCE(782);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(803);
      END_STATE();
    case 803:
      ACCEPT_TOKEN(sym__identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(803);
      END_STATE();
    case 804:
      ACCEPT_TOKEN(sym__identifier_dot);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(804);
      END_STATE();
    case 805:
      ACCEPT_TOKEN(anon_sym_DOT_DOT);
      END_STATE();
    case 806:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 807:
      ACCEPT_TOKEN(anon_sym_SLASH);
      END_STATE();
    case 808:
      ACCEPT_TOKEN(anon_sym_BANG_EQ);
      END_STATE();
    case 809:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '=') ADVANCE(810);
      END_STATE();
    case 810:
      ACCEPT_TOKEN(anon_sym_GT_EQ);
      END_STATE();
    case 811:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '=') ADVANCE(812);
      END_STATE();
    case 812:
      ACCEPT_TOKEN(anon_sym_LT_EQ);
      END_STATE();
    case 813:
      ACCEPT_TOKEN(anon_sym_QMARK_QMARK);
      END_STATE();
    case 814:
      ACCEPT_TOKEN(aux_sym__date_token1);
      END_STATE();
    case 815:
      ACCEPT_TOKEN(aux_sym__date_token2);
      END_STATE();
    case 816:
      ACCEPT_TOKEN(aux_sym__date_token2);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(815);
      END_STATE();
    case 817:
      ACCEPT_TOKEN(anon_sym_AT);
      END_STATE();
    case 818:
      ACCEPT_TOKEN(aux_sym__time_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(431);
      END_STATE();
    case 819:
      ACCEPT_TOKEN(anon_sym_T);
      if (lookahead == 'A') ADVANCE(99);
      if (lookahead == 'R') ADVANCE(181);
      END_STATE();
    case 820:
      ACCEPT_TOKEN(anon_sym_T);
      if (lookahead == 'A') ADVANCE(98);
      END_STATE();
    case 821:
      ACCEPT_TOKEN(anon_sym_Z);
      END_STATE();
    case 822:
      ACCEPT_TOKEN(anon_sym_POUND);
      END_STATE();
    case 823:
      ACCEPT_TOKEN(anon_sym_POUND);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(827);
      END_STATE();
    case 824:
      ACCEPT_TOKEN(anon_sym_POUND);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(548);
      END_STATE();
    case 825:
      ACCEPT_TOKEN(anon_sym_POUND);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(552);
      END_STATE();
    case 826:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == '#') ADVANCE(823);
      if (lookahead == '|') ADVANCE(831);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(826);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(827);
      END_STATE();
    case 827:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(827);
      END_STATE();
    case 828:
      ACCEPT_TOKEN(sym_bang);
      END_STATE();
    case 829:
      ACCEPT_TOKEN(sym_bang);
      if (lookahead == '=') ADVANCE(808);
      END_STATE();
    case 830:
      ACCEPT_TOKEN(sym_pipe);
      END_STATE();
    case 831:
      ACCEPT_TOKEN(sym_pipe);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(827);
      END_STATE();
    case 832:
      ACCEPT_TOKEN(sym_pipe);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(548);
      END_STATE();
    case 833:
      ACCEPT_TOKEN(sym_pipe);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(552);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 5},
  [3] = {.lex_state = 5},
  [4] = {.lex_state = 5},
  [5] = {.lex_state = 7},
  [6] = {.lex_state = 7},
  [7] = {.lex_state = 5},
  [8] = {.lex_state = 7},
  [9] = {.lex_state = 432},
  [10] = {.lex_state = 6},
  [11] = {.lex_state = 2},
  [12] = {.lex_state = 433},
  [13] = {.lex_state = 433},
  [14] = {.lex_state = 433},
  [15] = {.lex_state = 433},
  [16] = {.lex_state = 3},
  [17] = {.lex_state = 3},
  [18] = {.lex_state = 3},
  [19] = {.lex_state = 3},
  [20] = {.lex_state = 3},
  [21] = {.lex_state = 3},
  [22] = {.lex_state = 3},
  [23] = {.lex_state = 3},
  [24] = {.lex_state = 3},
  [25] = {.lex_state = 3},
  [26] = {.lex_state = 3},
  [27] = {.lex_state = 3},
  [28] = {.lex_state = 434},
  [29] = {.lex_state = 3},
  [30] = {.lex_state = 3},
  [31] = {.lex_state = 3},
  [32] = {.lex_state = 3},
  [33] = {.lex_state = 3},
  [34] = {.lex_state = 3},
  [35] = {.lex_state = 3},
  [36] = {.lex_state = 3},
  [37] = {.lex_state = 3},
  [38] = {.lex_state = 3},
  [39] = {.lex_state = 3},
  [40] = {.lex_state = 3},
  [41] = {.lex_state = 3},
  [42] = {.lex_state = 3},
  [43] = {.lex_state = 3},
  [44] = {.lex_state = 3},
  [45] = {.lex_state = 3},
  [46] = {.lex_state = 3},
  [47] = {.lex_state = 3},
  [48] = {.lex_state = 432},
  [49] = {.lex_state = 432},
  [50] = {.lex_state = 3},
  [51] = {.lex_state = 3},
  [52] = {.lex_state = 3},
  [53] = {.lex_state = 3},
  [54] = {.lex_state = 433},
  [55] = {.lex_state = 433},
  [56] = {.lex_state = 433},
  [57] = {.lex_state = 3},
  [58] = {.lex_state = 3},
  [59] = {.lex_state = 3},
  [60] = {.lex_state = 3},
  [61] = {.lex_state = 433},
  [62] = {.lex_state = 3},
  [63] = {.lex_state = 3},
  [64] = {.lex_state = 433},
  [65] = {.lex_state = 3},
  [66] = {.lex_state = 3},
  [67] = {.lex_state = 3},
  [68] = {.lex_state = 3},
  [69] = {.lex_state = 3},
  [70] = {.lex_state = 3},
  [71] = {.lex_state = 3},
  [72] = {.lex_state = 3},
  [73] = {.lex_state = 1},
  [74] = {.lex_state = 433},
  [75] = {.lex_state = 435},
  [76] = {.lex_state = 433},
  [77] = {.lex_state = 435},
  [78] = {.lex_state = 433},
  [79] = {.lex_state = 433},
  [80] = {.lex_state = 433},
  [81] = {.lex_state = 433},
  [82] = {.lex_state = 433},
  [83] = {.lex_state = 433},
  [84] = {.lex_state = 433},
  [85] = {.lex_state = 433},
  [86] = {.lex_state = 2},
  [87] = {.lex_state = 433},
  [88] = {.lex_state = 433},
  [89] = {.lex_state = 433},
  [90] = {.lex_state = 433},
  [91] = {.lex_state = 433},
  [92] = {.lex_state = 433},
  [93] = {.lex_state = 433},
  [94] = {.lex_state = 433},
  [95] = {.lex_state = 433},
  [96] = {.lex_state = 433},
  [97] = {.lex_state = 433},
  [98] = {.lex_state = 433},
  [99] = {.lex_state = 433},
  [100] = {.lex_state = 433},
  [101] = {.lex_state = 433},
  [102] = {.lex_state = 433},
  [103] = {.lex_state = 433},
  [104] = {.lex_state = 2},
  [105] = {.lex_state = 433},
  [106] = {.lex_state = 433},
  [107] = {.lex_state = 433},
  [108] = {.lex_state = 433},
  [109] = {.lex_state = 433},
  [110] = {.lex_state = 433},
  [111] = {.lex_state = 433},
  [112] = {.lex_state = 8},
  [113] = {.lex_state = 8},
  [114] = {.lex_state = 433},
  [115] = {.lex_state = 433},
  [116] = {.lex_state = 433},
  [117] = {.lex_state = 433},
  [118] = {.lex_state = 435},
  [119] = {.lex_state = 435},
  [120] = {.lex_state = 435},
  [121] = {.lex_state = 435},
  [122] = {.lex_state = 435},
  [123] = {.lex_state = 435},
  [124] = {.lex_state = 435},
  [125] = {.lex_state = 433},
  [126] = {.lex_state = 435},
  [127] = {.lex_state = 435},
  [128] = {.lex_state = 1},
  [129] = {.lex_state = 435},
  [130] = {.lex_state = 435},
  [131] = {.lex_state = 435},
  [132] = {.lex_state = 435},
  [133] = {.lex_state = 435},
  [134] = {.lex_state = 433},
  [135] = {.lex_state = 435},
  [136] = {.lex_state = 1},
  [137] = {.lex_state = 435},
  [138] = {.lex_state = 435},
  [139] = {.lex_state = 433},
  [140] = {.lex_state = 433},
  [141] = {.lex_state = 434},
  [142] = {.lex_state = 434},
  [143] = {.lex_state = 433},
  [144] = {.lex_state = 434},
  [145] = {.lex_state = 4},
  [146] = {.lex_state = 4},
  [147] = {.lex_state = 434},
  [148] = {.lex_state = 8},
  [149] = {.lex_state = 8},
  [150] = {.lex_state = 8},
  [151] = {.lex_state = 8},
  [152] = {.lex_state = 8},
  [153] = {.lex_state = 8},
  [154] = {.lex_state = 8},
  [155] = {.lex_state = 8},
  [156] = {.lex_state = 8},
  [157] = {.lex_state = 433},
  [158] = {.lex_state = 8},
  [159] = {.lex_state = 8},
  [160] = {.lex_state = 434},
  [161] = {.lex_state = 8},
  [162] = {.lex_state = 8},
  [163] = {.lex_state = 8},
  [164] = {.lex_state = 8},
  [165] = {.lex_state = 8},
  [166] = {.lex_state = 8},
  [167] = {.lex_state = 433},
  [168] = {.lex_state = 433},
  [169] = {.lex_state = 433},
  [170] = {.lex_state = 433},
  [171] = {.lex_state = 433},
  [172] = {.lex_state = 433},
  [173] = {.lex_state = 433},
  [174] = {.lex_state = 433},
  [175] = {.lex_state = 433},
  [176] = {.lex_state = 433},
  [177] = {.lex_state = 433},
  [178] = {.lex_state = 433},
  [179] = {.lex_state = 433},
  [180] = {.lex_state = 433},
  [181] = {.lex_state = 433},
  [182] = {.lex_state = 433},
  [183] = {.lex_state = 433},
  [184] = {.lex_state = 434},
  [185] = {.lex_state = 3},
  [186] = {.lex_state = 3},
  [187] = {.lex_state = 3},
  [188] = {.lex_state = 433},
  [189] = {.lex_state = 433},
  [190] = {.lex_state = 433},
  [191] = {.lex_state = 433},
  [192] = {.lex_state = 433},
  [193] = {.lex_state = 433},
  [194] = {.lex_state = 433},
  [195] = {.lex_state = 433},
  [196] = {.lex_state = 433},
  [197] = {.lex_state = 433},
  [198] = {.lex_state = 433},
  [199] = {.lex_state = 433},
  [200] = {.lex_state = 433},
  [201] = {.lex_state = 433},
  [202] = {.lex_state = 433},
  [203] = {.lex_state = 433},
  [204] = {.lex_state = 433},
  [205] = {.lex_state = 433},
  [206] = {.lex_state = 433},
  [207] = {.lex_state = 433},
  [208] = {.lex_state = 433},
  [209] = {.lex_state = 3},
  [210] = {.lex_state = 433},
  [211] = {.lex_state = 433},
  [212] = {.lex_state = 433},
  [213] = {.lex_state = 433},
  [214] = {.lex_state = 433},
  [215] = {.lex_state = 433},
  [216] = {.lex_state = 433},
  [217] = {.lex_state = 433},
  [218] = {.lex_state = 433},
  [219] = {.lex_state = 433},
  [220] = {.lex_state = 433},
  [221] = {.lex_state = 433},
  [222] = {.lex_state = 433},
  [223] = {.lex_state = 433},
  [224] = {.lex_state = 433},
  [225] = {.lex_state = 433},
  [226] = {.lex_state = 433},
  [227] = {.lex_state = 433},
  [228] = {.lex_state = 433},
  [229] = {.lex_state = 433},
  [230] = {.lex_state = 433},
  [231] = {.lex_state = 433},
  [232] = {.lex_state = 433},
  [233] = {.lex_state = 433},
  [234] = {.lex_state = 433},
  [235] = {.lex_state = 433},
  [236] = {.lex_state = 433},
  [237] = {.lex_state = 433},
  [238] = {.lex_state = 433},
  [239] = {.lex_state = 433},
  [240] = {.lex_state = 433},
  [241] = {.lex_state = 9},
  [242] = {.lex_state = 4},
  [243] = {.lex_state = 9},
  [244] = {.lex_state = 4},
  [245] = {.lex_state = 9},
  [246] = {.lex_state = 433},
  [247] = {.lex_state = 9},
  [248] = {.lex_state = 4},
  [249] = {.lex_state = 433},
  [250] = {.lex_state = 433},
  [251] = {.lex_state = 9},
  [252] = {.lex_state = 9},
  [253] = {.lex_state = 4},
  [254] = {.lex_state = 4},
  [255] = {.lex_state = 4},
  [256] = {.lex_state = 4},
  [257] = {.lex_state = 4},
  [258] = {.lex_state = 4},
  [259] = {.lex_state = 4},
  [260] = {.lex_state = 4},
  [261] = {.lex_state = 433},
  [262] = {.lex_state = 433},
  [263] = {.lex_state = 433},
  [264] = {.lex_state = 4},
  [265] = {.lex_state = 4},
  [266] = {.lex_state = 4},
  [267] = {.lex_state = 4},
  [268] = {.lex_state = 4},
  [269] = {.lex_state = 4},
  [270] = {.lex_state = 433},
  [271] = {.lex_state = 433},
  [272] = {.lex_state = 433},
  [273] = {.lex_state = 433},
  [274] = {.lex_state = 0},
  [275] = {.lex_state = 433},
  [276] = {.lex_state = 433},
  [277] = {.lex_state = 433},
  [278] = {.lex_state = 433},
  [279] = {.lex_state = 433},
  [280] = {.lex_state = 433},
  [281] = {.lex_state = 433},
  [282] = {.lex_state = 433},
  [283] = {.lex_state = 433},
  [284] = {.lex_state = 0},
  [285] = {.lex_state = 0},
  [286] = {.lex_state = 0},
  [287] = {.lex_state = 0},
  [288] = {.lex_state = 0},
  [289] = {.lex_state = 0},
  [290] = {.lex_state = 0},
  [291] = {.lex_state = 0},
  [292] = {.lex_state = 0},
  [293] = {.lex_state = 0},
  [294] = {.lex_state = 16},
  [295] = {.lex_state = 0},
  [296] = {.lex_state = 0},
  [297] = {.lex_state = 0},
  [298] = {.lex_state = 0},
  [299] = {.lex_state = 0},
  [300] = {.lex_state = 0},
  [301] = {.lex_state = 16},
  [302] = {.lex_state = 16},
  [303] = {.lex_state = 433},
  [304] = {.lex_state = 16},
  [305] = {.lex_state = 433},
  [306] = {.lex_state = 17},
  [307] = {.lex_state = 17},
  [308] = {.lex_state = 16},
  [309] = {.lex_state = 17},
  [310] = {.lex_state = 18},
  [311] = {.lex_state = 0},
  [312] = {.lex_state = 16},
  [313] = {.lex_state = 0},
  [314] = {.lex_state = 0},
  [315] = {.lex_state = 0},
  [316] = {.lex_state = 0},
  [317] = {.lex_state = 0},
  [318] = {.lex_state = 0},
  [319] = {.lex_state = 16},
  [320] = {.lex_state = 17},
  [321] = {.lex_state = 0},
  [322] = {.lex_state = 0},
  [323] = {.lex_state = 433},
  [324] = {.lex_state = 0},
  [325] = {.lex_state = 434},
  [326] = {.lex_state = 433},
  [327] = {.lex_state = 16},
  [328] = {.lex_state = 0},
  [329] = {.lex_state = 433},
  [330] = {.lex_state = 16},
  [331] = {.lex_state = 433},
  [332] = {.lex_state = 0},
  [333] = {.lex_state = 16},
  [334] = {.lex_state = 0},
  [335] = {.lex_state = 16},
  [336] = {.lex_state = 0},
  [337] = {.lex_state = 16},
  [338] = {.lex_state = 433},
  [339] = {.lex_state = 16},
  [340] = {.lex_state = 433},
  [341] = {.lex_state = 16},
  [342] = {.lex_state = 16},
  [343] = {.lex_state = 18},
  [344] = {.lex_state = 433},
  [345] = {.lex_state = 16},
  [346] = {.lex_state = 433},
  [347] = {.lex_state = 16},
  [348] = {.lex_state = 0},
  [349] = {.lex_state = 433},
  [350] = {.lex_state = 433},
  [351] = {.lex_state = 0},
  [352] = {.lex_state = 433},
  [353] = {.lex_state = 16},
  [354] = {.lex_state = 0},
  [355] = {.lex_state = 0},
  [356] = {.lex_state = 0},
  [357] = {.lex_state = 16},
  [358] = {.lex_state = 0},
  [359] = {.lex_state = 0},
  [360] = {.lex_state = 0},
  [361] = {.lex_state = 425},
  [362] = {.lex_state = 0},
  [363] = {.lex_state = 0},
  [364] = {.lex_state = 19},
  [365] = {.lex_state = 16},
  [366] = {.lex_state = 425},
  [367] = {.lex_state = 0},
  [368] = {.lex_state = 0},
  [369] = {.lex_state = 16},
  [370] = {.lex_state = 16},
  [371] = {.lex_state = 16},
  [372] = {.lex_state = 0},
  [373] = {.lex_state = 433},
  [374] = {.lex_state = 0},
  [375] = {.lex_state = 16},
  [376] = {.lex_state = 433},
  [377] = {.lex_state = 0},
  [378] = {.lex_state = 0},
  [379] = {.lex_state = 425},
  [380] = {.lex_state = 16},
  [381] = {.lex_state = 0},
  [382] = {.lex_state = 16},
  [383] = {.lex_state = 16},
  [384] = {.lex_state = 16},
  [385] = {.lex_state = 16},
  [386] = {.lex_state = 0},
  [387] = {.lex_state = 0},
  [388] = {.lex_state = 0},
  [389] = {.lex_state = 425},
  [390] = {.lex_state = 0},
  [391] = {.lex_state = 0},
  [392] = {.lex_state = 0},
  [393] = {.lex_state = 0},
  [394] = {.lex_state = 433},
  [395] = {.lex_state = 0},
  [396] = {.lex_state = 0},
  [397] = {.lex_state = 9},
  [398] = {.lex_state = 0},
  [399] = {.lex_state = 16},
  [400] = {.lex_state = 427},
  [401] = {.lex_state = 425},
  [402] = {.lex_state = 18},
  [403] = {.lex_state = 0},
  [404] = {.lex_state = 0},
  [405] = {.lex_state = 18},
  [406] = {.lex_state = 427},
  [407] = {.lex_state = 0},
  [408] = {.lex_state = 0},
  [409] = {.lex_state = 427},
  [410] = {.lex_state = 0},
  [411] = {.lex_state = 0},
  [412] = {.lex_state = 0},
  [413] = {.lex_state = 19},
  [414] = {.lex_state = 19},
  [415] = {.lex_state = 0},
  [416] = {.lex_state = 0},
  [417] = {.lex_state = 0},
  [418] = {.lex_state = 0},
  [419] = {.lex_state = 0},
  [420] = {.lex_state = 0},
  [421] = {.lex_state = 0},
  [422] = {.lex_state = 826},
  [423] = {.lex_state = 0},
  [424] = {.lex_state = 0},
  [425] = {.lex_state = 0},
  [426] = {.lex_state = 0},
  [427] = {.lex_state = 0},
  [428] = {.lex_state = 5},
  [429] = {.lex_state = 0},
  [430] = {.lex_state = 0},
  [431] = {.lex_state = 434},
  [432] = {.lex_state = 0},
  [433] = {.lex_state = 0},
  [434] = {.lex_state = 0},
  [435] = {.lex_state = 0},
  [436] = {.lex_state = 0},
  [437] = {.lex_state = 5},
  [438] = {.lex_state = 546},
  [439] = {.lex_state = 546},
  [440] = {.lex_state = 550},
  [441] = {.lex_state = 546},
  [442] = {.lex_state = 0},
  [443] = {.lex_state = 19},
  [444] = {.lex_state = 19},
  [445] = {.lex_state = 0},
  [446] = {.lex_state = 0},
  [447] = {.lex_state = 0},
  [448] = {.lex_state = 0},
  [449] = {.lex_state = 0},
  [450] = {.lex_state = 19},
  [451] = {.lex_state = 5},
  [452] = {.lex_state = 5},
  [453] = {.lex_state = 0},
  [454] = {.lex_state = 0},
  [455] = {.lex_state = 0},
  [456] = {.lex_state = 0},
  [457] = {.lex_state = 0},
  [458] = {.lex_state = 0},
  [459] = {.lex_state = 5},
  [460] = {.lex_state = 5},
  [461] = {.lex_state = 0},
  [462] = {.lex_state = 0},
  [463] = {.lex_state = 0},
  [464] = {.lex_state = 0},
  [465] = {.lex_state = 0},
  [466] = {.lex_state = 0},
  [467] = {.lex_state = 5},
  [468] = {.lex_state = 5},
  [469] = {.lex_state = 0},
  [470] = {.lex_state = 0},
  [471] = {.lex_state = 0},
  [472] = {.lex_state = 0},
  [473] = {.lex_state = 5},
  [474] = {.lex_state = 5},
  [475] = {.lex_state = 0},
  [476] = {.lex_state = 0},
  [477] = {.lex_state = 0},
  [478] = {.lex_state = 0},
  [479] = {.lex_state = 0},
  [480] = {.lex_state = 20},
  [481] = {.lex_state = 546},
  [482] = {.lex_state = 550},
  [483] = {.lex_state = 0},
  [484] = {.lex_state = 20},
  [485] = {.lex_state = 546},
  [486] = {.lex_state = 550},
  [487] = {.lex_state = 20},
  [488] = {.lex_state = 20},
  [489] = {.lex_state = 546},
  [490] = {.lex_state = 550},
  [491] = {.lex_state = 20},
  [492] = {.lex_state = 546},
  [493] = {.lex_state = 550},
  [494] = {.lex_state = 20},
  [495] = {.lex_state = 20},
  [496] = {.lex_state = 20},
  [497] = {.lex_state = 0},
  [498] = {.lex_state = 0},
  [499] = {.lex_state = 0},
  [500] = {.lex_state = 0},
  [501] = {.lex_state = 0},
  [502] = {(TSStateId)(-1)},
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
    [sym_program] = STATE(498),
    [sym_prql] = STATE(321),
    [sym_pipeline] = STATE(332),
    [sym_variable] = STATE(332),
    [sym_function_definition] = STATE(332),
    [sym_from_text] = STATE(125),
    [sym_from] = STATE(125),
    [sym_comment] = STATE(1),
    [aux_sym_program_repeat1] = STATE(274),
    [aux_sym_program_repeat2] = STATE(285),
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
  [0] = 36,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(23), 1,
      sym_keyword_count,
    ACTIONS(25), 1,
      anon_sym_LPAREN,
    ACTIONS(27), 1,
      anon_sym_COMMA,
    ACTIONS(29), 1,
      anon_sym_RBRACK,
    ACTIONS(31), 1,
      anon_sym_DASH,
    ACTIONS(33), 1,
      anon_sym_DQUOTE,
    ACTIONS(35), 1,
      anon_sym_SQUOTE,
    ACTIONS(37), 1,
      anon_sym_f_DQUOTE,
    ACTIONS(39), 1,
      anon_sym_f_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(41), 1,
      anon_sym_s_DQUOTE,
    ACTIONS(43), 1,
      anon_sym_s_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(45), 1,
      sym__natural_number,
    ACTIONS(47), 1,
      anon_sym__,
    ACTIONS(49), 1,
      anon_sym_DOT,
    ACTIONS(51), 1,
      anon_sym_BQUOTE,
    ACTIONS(53), 1,
      sym__identifier,
    ACTIONS(55), 1,
      anon_sym_AT,
    STATE(2), 1,
      sym_comment,
    STATE(12), 1,
      aux_sym__friendly_number,
    STATE(57), 1,
      sym__agg_keywords,
    STATE(78), 1,
      sym_integer,
    STATE(80), 1,
      sym_identifier,
    STATE(81), 1,
      sym__double_quote_string,
    STATE(100), 1,
      sym__single_quote_string,
    STATE(221), 1,
      sym_binary_expression,
    STATE(270), 1,
      sym__expression,
    STATE(436), 1,
      sym__alias_identifier,
    STATE(93), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(98), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(107), 2,
      sym__literal_string,
      sym_decimal_number,
    ACTIONS(19), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(393), 3,
      sym_aggregate_operation,
      sym__aggregate_count,
      sym_assignment,
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
  [128] = 35,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(23), 1,
      sym_keyword_count,
    ACTIONS(25), 1,
      anon_sym_LPAREN,
    ACTIONS(31), 1,
      anon_sym_DASH,
    ACTIONS(33), 1,
      anon_sym_DQUOTE,
    ACTIONS(35), 1,
      anon_sym_SQUOTE,
    ACTIONS(37), 1,
      anon_sym_f_DQUOTE,
    ACTIONS(39), 1,
      anon_sym_f_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(41), 1,
      anon_sym_s_DQUOTE,
    ACTIONS(43), 1,
      anon_sym_s_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(45), 1,
      sym__natural_number,
    ACTIONS(47), 1,
      anon_sym__,
    ACTIONS(49), 1,
      anon_sym_DOT,
    ACTIONS(51), 1,
      anon_sym_BQUOTE,
    ACTIONS(53), 1,
      sym__identifier,
    ACTIONS(55), 1,
      anon_sym_AT,
    ACTIONS(57), 1,
      anon_sym_RBRACK,
    STATE(3), 1,
      sym_comment,
    STATE(12), 1,
      aux_sym__friendly_number,
    STATE(57), 1,
      sym__agg_keywords,
    STATE(78), 1,
      sym_integer,
    STATE(80), 1,
      sym_identifier,
    STATE(81), 1,
      sym__double_quote_string,
    STATE(100), 1,
      sym__single_quote_string,
    STATE(249), 1,
      sym_binary_expression,
    STATE(270), 1,
      sym__expression,
    STATE(436), 1,
      sym__alias_identifier,
    STATE(93), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(98), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(107), 2,
      sym__literal_string,
      sym_decimal_number,
    ACTIONS(19), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(398), 3,
      sym_aggregate_operation,
      sym__aggregate_count,
      sym_assignment,
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
  [253] = 35,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(23), 1,
      sym_keyword_count,
    ACTIONS(25), 1,
      anon_sym_LPAREN,
    ACTIONS(31), 1,
      anon_sym_DASH,
    ACTIONS(33), 1,
      anon_sym_DQUOTE,
    ACTIONS(35), 1,
      anon_sym_SQUOTE,
    ACTIONS(37), 1,
      anon_sym_f_DQUOTE,
    ACTIONS(39), 1,
      anon_sym_f_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(41), 1,
      anon_sym_s_DQUOTE,
    ACTIONS(43), 1,
      anon_sym_s_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(45), 1,
      sym__natural_number,
    ACTIONS(47), 1,
      anon_sym__,
    ACTIONS(49), 1,
      anon_sym_DOT,
    ACTIONS(51), 1,
      anon_sym_BQUOTE,
    ACTIONS(53), 1,
      sym__identifier,
    ACTIONS(55), 1,
      anon_sym_AT,
    ACTIONS(59), 1,
      anon_sym_RBRACK,
    STATE(4), 1,
      sym_comment,
    STATE(12), 1,
      aux_sym__friendly_number,
    STATE(57), 1,
      sym__agg_keywords,
    STATE(78), 1,
      sym_integer,
    STATE(80), 1,
      sym_identifier,
    STATE(81), 1,
      sym__double_quote_string,
    STATE(100), 1,
      sym__single_quote_string,
    STATE(249), 1,
      sym_binary_expression,
    STATE(270), 1,
      sym__expression,
    STATE(436), 1,
      sym__alias_identifier,
    STATE(93), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(98), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(107), 2,
      sym__literal_string,
      sym_decimal_number,
    ACTIONS(19), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(398), 3,
      sym_aggregate_operation,
      sym__aggregate_count,
      sym_assignment,
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
  [378] = 34,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(31), 1,
      anon_sym_DASH,
    ACTIONS(33), 1,
      anon_sym_DQUOTE,
    ACTIONS(35), 1,
      anon_sym_SQUOTE,
    ACTIONS(37), 1,
      anon_sym_f_DQUOTE,
    ACTIONS(39), 1,
      anon_sym_f_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(41), 1,
      anon_sym_s_DQUOTE,
    ACTIONS(43), 1,
      anon_sym_s_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(45), 1,
      sym__natural_number,
    ACTIONS(47), 1,
      anon_sym__,
    ACTIONS(49), 1,
      anon_sym_DOT,
    ACTIONS(55), 1,
      anon_sym_AT,
    ACTIONS(61), 1,
      sym_keyword_switch,
    ACTIONS(63), 1,
      anon_sym_LPAREN,
    ACTIONS(65), 1,
      anon_sym_BQUOTE,
    ACTIONS(67), 1,
      sym__identifier,
    STATE(5), 1,
      sym_comment,
    STATE(12), 1,
      aux_sym__friendly_number,
    STATE(59), 1,
      sym__agg_keywords,
    STATE(73), 1,
      sym_identifier,
    STATE(78), 1,
      sym_integer,
    STATE(81), 1,
      sym__double_quote_string,
    STATE(100), 1,
      sym__single_quote_string,
    STATE(114), 1,
      sym__expression,
    STATE(174), 1,
      sym__agg_rhs_assignment,
    STATE(436), 1,
      sym__alias_identifier,
    STATE(93), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(98), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(107), 2,
      sym__literal_string,
      sym_decimal_number,
    STATE(176), 2,
      sym_function_call,
      sym_switch,
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
  [500] = 34,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(31), 1,
      anon_sym_DASH,
    ACTIONS(33), 1,
      anon_sym_DQUOTE,
    ACTIONS(35), 1,
      anon_sym_SQUOTE,
    ACTIONS(37), 1,
      anon_sym_f_DQUOTE,
    ACTIONS(39), 1,
      anon_sym_f_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(41), 1,
      anon_sym_s_DQUOTE,
    ACTIONS(43), 1,
      anon_sym_s_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(45), 1,
      sym__natural_number,
    ACTIONS(47), 1,
      anon_sym__,
    ACTIONS(49), 1,
      anon_sym_DOT,
    ACTIONS(55), 1,
      anon_sym_AT,
    ACTIONS(61), 1,
      sym_keyword_switch,
    ACTIONS(63), 1,
      anon_sym_LPAREN,
    ACTIONS(69), 1,
      anon_sym_BQUOTE,
    ACTIONS(71), 1,
      sym__identifier,
    STATE(6), 1,
      sym_comment,
    STATE(11), 1,
      sym_identifier,
    STATE(12), 1,
      aux_sym__friendly_number,
    STATE(59), 1,
      sym__agg_keywords,
    STATE(78), 1,
      sym_integer,
    STATE(81), 1,
      sym__double_quote_string,
    STATE(100), 1,
      sym__single_quote_string,
    STATE(114), 1,
      sym__expression,
    STATE(174), 1,
      sym__agg_rhs_assignment,
    STATE(436), 1,
      sym__alias_identifier,
    STATE(93), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(98), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(107), 2,
      sym__literal_string,
      sym_decimal_number,
    STATE(176), 2,
      sym_function_call,
      sym_switch,
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
  [622] = 34,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(23), 1,
      sym_keyword_count,
    ACTIONS(25), 1,
      anon_sym_LPAREN,
    ACTIONS(31), 1,
      anon_sym_DASH,
    ACTIONS(33), 1,
      anon_sym_DQUOTE,
    ACTIONS(35), 1,
      anon_sym_SQUOTE,
    ACTIONS(37), 1,
      anon_sym_f_DQUOTE,
    ACTIONS(39), 1,
      anon_sym_f_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(41), 1,
      anon_sym_s_DQUOTE,
    ACTIONS(43), 1,
      anon_sym_s_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(45), 1,
      sym__natural_number,
    ACTIONS(47), 1,
      anon_sym__,
    ACTIONS(49), 1,
      anon_sym_DOT,
    ACTIONS(51), 1,
      anon_sym_BQUOTE,
    ACTIONS(53), 1,
      sym__identifier,
    ACTIONS(55), 1,
      anon_sym_AT,
    STATE(7), 1,
      sym_comment,
    STATE(12), 1,
      aux_sym__friendly_number,
    STATE(57), 1,
      sym__agg_keywords,
    STATE(78), 1,
      sym_integer,
    STATE(80), 1,
      sym_identifier,
    STATE(81), 1,
      sym__double_quote_string,
    STATE(100), 1,
      sym__single_quote_string,
    STATE(249), 1,
      sym_binary_expression,
    STATE(270), 1,
      sym__expression,
    STATE(436), 1,
      sym__alias_identifier,
    STATE(93), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(98), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(107), 2,
      sym__literal_string,
      sym_decimal_number,
    ACTIONS(19), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(398), 3,
      sym_aggregate_operation,
      sym__aggregate_count,
      sym_assignment,
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
  [744] = 34,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(31), 1,
      anon_sym_DASH,
    ACTIONS(33), 1,
      anon_sym_DQUOTE,
    ACTIONS(35), 1,
      anon_sym_SQUOTE,
    ACTIONS(37), 1,
      anon_sym_f_DQUOTE,
    ACTIONS(39), 1,
      anon_sym_f_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(41), 1,
      anon_sym_s_DQUOTE,
    ACTIONS(43), 1,
      anon_sym_s_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(45), 1,
      sym__natural_number,
    ACTIONS(47), 1,
      anon_sym__,
    ACTIONS(49), 1,
      anon_sym_DOT,
    ACTIONS(55), 1,
      anon_sym_AT,
    ACTIONS(61), 1,
      sym_keyword_switch,
    ACTIONS(63), 1,
      anon_sym_LPAREN,
    ACTIONS(73), 1,
      anon_sym_BQUOTE,
    ACTIONS(75), 1,
      sym__identifier,
    STATE(8), 1,
      sym_comment,
    STATE(9), 1,
      sym_identifier,
    STATE(12), 1,
      aux_sym__friendly_number,
    STATE(59), 1,
      sym__agg_keywords,
    STATE(78), 1,
      sym_integer,
    STATE(81), 1,
      sym__double_quote_string,
    STATE(100), 1,
      sym__single_quote_string,
    STATE(114), 1,
      sym__expression,
    STATE(174), 1,
      sym__agg_rhs_assignment,
    STATE(436), 1,
      sym__alias_identifier,
    STATE(93), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(98), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(107), 2,
      sym__literal_string,
      sym_decimal_number,
    STATE(176), 2,
      sym_function_call,
      sym_switch,
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
  [866] = 21,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(83), 1,
      anon_sym_DQUOTE,
    ACTIONS(85), 1,
      anon_sym_SQUOTE,
    ACTIONS(87), 1,
      sym__natural_number,
    ACTIONS(89), 1,
      anon_sym__,
    ACTIONS(91), 1,
      anon_sym_DOT,
    ACTIONS(93), 1,
      anon_sym_BQUOTE,
    ACTIONS(95), 1,
      sym__identifier,
    STATE(9), 1,
      sym_comment,
    STATE(75), 1,
      aux_sym_function_call_repeat1,
    STATE(122), 1,
      sym_identifier,
    STATE(123), 1,
      aux_sym__friendly_number,
    STATE(124), 1,
      sym_integer,
    STATE(126), 1,
      sym_literal,
    STATE(133), 1,
      sym__call_parameter,
    STATE(137), 2,
      sym__double_quote_string,
      sym__single_quote_string,
    STATE(138), 2,
      sym__literal_string,
      sym_decimal_number,
    ACTIONS(81), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    ACTIONS(77), 10,
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
    ACTIONS(79), 19,
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
  [961] = 34,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(25), 1,
      anon_sym_LPAREN,
    ACTIONS(31), 1,
      anon_sym_DASH,
    ACTIONS(33), 1,
      anon_sym_DQUOTE,
    ACTIONS(35), 1,
      anon_sym_SQUOTE,
    ACTIONS(37), 1,
      anon_sym_f_DQUOTE,
    ACTIONS(39), 1,
      anon_sym_f_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(41), 1,
      anon_sym_s_DQUOTE,
    ACTIONS(43), 1,
      anon_sym_s_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(45), 1,
      sym__natural_number,
    ACTIONS(47), 1,
      anon_sym__,
    ACTIONS(49), 1,
      anon_sym_DOT,
    ACTIONS(55), 1,
      anon_sym_AT,
    ACTIONS(65), 1,
      anon_sym_BQUOTE,
    ACTIONS(67), 1,
      sym__identifier,
    STATE(10), 1,
      sym_comment,
    STATE(12), 1,
      aux_sym__friendly_number,
    STATE(59), 1,
      sym__agg_keywords,
    STATE(73), 1,
      sym_identifier,
    STATE(78), 1,
      sym_integer,
    STATE(81), 1,
      sym__double_quote_string,
    STATE(100), 1,
      sym__single_quote_string,
    STATE(273), 1,
      sym_binary_expression,
    STATE(277), 1,
      sym__expression,
    STATE(433), 1,
      sym__agg_rhs_assignment,
    STATE(436), 1,
      sym__alias_identifier,
    STATE(449), 1,
      sym_function_call,
    STATE(93), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(98), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(107), 2,
      sym__literal_string,
      sym_decimal_number,
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
  [1081] = 21,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(99), 1,
      anon_sym_DQUOTE,
    ACTIONS(101), 1,
      anon_sym_SQUOTE,
    ACTIONS(103), 1,
      sym__natural_number,
    ACTIONS(105), 1,
      anon_sym__,
    ACTIONS(107), 1,
      anon_sym_DOT,
    ACTIONS(109), 1,
      anon_sym_BQUOTE,
    ACTIONS(111), 1,
      sym__identifier,
    STATE(11), 1,
      sym_comment,
    STATE(113), 1,
      aux_sym_function_call_repeat1,
    STATE(148), 1,
      aux_sym__friendly_number,
    STATE(149), 1,
      sym_identifier,
    STATE(155), 1,
      sym__call_parameter,
    STATE(156), 1,
      sym_literal,
    STATE(158), 1,
      sym_integer,
    STATE(154), 2,
      sym__double_quote_string,
      sym__single_quote_string,
    STATE(164), 2,
      sym__literal_string,
      sym_decimal_number,
    ACTIONS(97), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    ACTIONS(77), 10,
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
    ACTIONS(79), 15,
      sym_keyword_filter,
      sym_keyword_derive,
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
  [1172] = 7,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    STATE(12), 1,
      sym_comment,
    STATE(14), 1,
      aux_sym__friendly_number,
    ACTIONS(45), 2,
      sym__natural_number,
      anon_sym__,
    ACTIONS(115), 5,
      sym_keyword_from,
      anon_sym_EQ,
      anon_sym_DASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(113), 36,
      ts_builtin_sym_end,
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
      anon_sym_DASH_GT,
      anon_sym_COMMA,
      anon_sym_RBRACK,
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
  [1234] = 7,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    STATE(13), 1,
      sym_comment,
    STATE(14), 1,
      aux_sym__friendly_number,
    ACTIONS(45), 2,
      sym__natural_number,
      anon_sym__,
    ACTIONS(119), 5,
      sym_keyword_from,
      anon_sym_EQ,
      anon_sym_DASH,
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
      anon_sym_DASH_GT,
      anon_sym_COMMA,
      anon_sym_RBRACK,
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
  [1296] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(125), 2,
      sym__natural_number,
      anon_sym__,
    STATE(14), 2,
      aux_sym__friendly_number,
      sym_comment,
    ACTIONS(123), 5,
      sym_keyword_from,
      anon_sym_EQ,
      anon_sym_DASH,
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
      anon_sym_DASH_GT,
      anon_sym_COMMA,
      anon_sym_RBRACK,
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
  [1356] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    STATE(15), 1,
      sym_comment,
    ACTIONS(130), 5,
      sym_keyword_from,
      anon_sym_EQ,
      anon_sym_DASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(128), 38,
      ts_builtin_sym_end,
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
      anon_sym_DASH_GT,
      anon_sym_COMMA,
      anon_sym_RBRACK,
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
  [1413] = 36,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(25), 1,
      anon_sym_LPAREN,
    ACTIONS(31), 1,
      anon_sym_DASH,
    ACTIONS(33), 1,
      anon_sym_DQUOTE,
    ACTIONS(35), 1,
      anon_sym_SQUOTE,
    ACTIONS(37), 1,
      anon_sym_f_DQUOTE,
    ACTIONS(39), 1,
      anon_sym_f_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(41), 1,
      anon_sym_s_DQUOTE,
    ACTIONS(43), 1,
      anon_sym_s_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(45), 1,
      sym__natural_number,
    ACTIONS(47), 1,
      anon_sym__,
    ACTIONS(49), 1,
      anon_sym_DOT,
    ACTIONS(51), 1,
      anon_sym_BQUOTE,
    ACTIONS(53), 1,
      sym__identifier,
    ACTIONS(55), 1,
      anon_sym_AT,
    ACTIONS(132), 1,
      anon_sym_COMMA,
    ACTIONS(134), 1,
      anon_sym_RBRACK,
    STATE(12), 1,
      aux_sym__friendly_number,
    STATE(16), 1,
      sym_comment,
    STATE(17), 1,
      aux_sym_switch_repeat1,
    STATE(78), 1,
      sym_integer,
    STATE(80), 1,
      sym_identifier,
    STATE(81), 1,
      sym__double_quote_string,
    STATE(100), 1,
      sym__single_quote_string,
    STATE(187), 1,
      sym_switch_condition,
    STATE(280), 1,
      sym_literal,
    STATE(281), 1,
      sym_binary_expression,
    STATE(282), 1,
      sym__expression,
    STATE(377), 1,
      aux_sym_switch_repeat2,
    STATE(436), 1,
      sym__alias_identifier,
    STATE(93), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(98), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(107), 2,
      sym__literal_string,
      sym_decimal_number,
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
  [1532] = 33,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(139), 1,
      anon_sym_LPAREN,
    ACTIONS(144), 1,
      anon_sym_DASH,
    ACTIONS(147), 1,
      anon_sym_DQUOTE,
    ACTIONS(150), 1,
      anon_sym_SQUOTE,
    ACTIONS(153), 1,
      anon_sym_f_DQUOTE,
    ACTIONS(156), 1,
      anon_sym_f_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(159), 1,
      anon_sym_s_DQUOTE,
    ACTIONS(162), 1,
      anon_sym_s_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(165), 1,
      sym__natural_number,
    ACTIONS(168), 1,
      anon_sym__,
    ACTIONS(171), 1,
      anon_sym_DOT,
    ACTIONS(174), 1,
      anon_sym_BQUOTE,
    ACTIONS(177), 1,
      sym__identifier,
    ACTIONS(180), 1,
      anon_sym_AT,
    STATE(12), 1,
      aux_sym__friendly_number,
    STATE(78), 1,
      sym_integer,
    STATE(80), 1,
      sym_identifier,
    STATE(81), 1,
      sym__double_quote_string,
    STATE(100), 1,
      sym__single_quote_string,
    STATE(187), 1,
      sym_switch_condition,
    STATE(280), 1,
      sym_literal,
    STATE(281), 1,
      sym_binary_expression,
    STATE(282), 1,
      sym__expression,
    STATE(436), 1,
      sym__alias_identifier,
    ACTIONS(142), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
    STATE(17), 2,
      sym_comment,
      aux_sym_switch_repeat1,
    STATE(93), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(98), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(107), 2,
      sym__literal_string,
      sym_decimal_number,
    ACTIONS(136), 3,
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
  [1644] = 33,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(25), 1,
      anon_sym_LPAREN,
    ACTIONS(31), 1,
      anon_sym_DASH,
    ACTIONS(33), 1,
      anon_sym_DQUOTE,
    ACTIONS(35), 1,
      anon_sym_SQUOTE,
    ACTIONS(37), 1,
      anon_sym_f_DQUOTE,
    ACTIONS(39), 1,
      anon_sym_f_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(41), 1,
      anon_sym_s_DQUOTE,
    ACTIONS(43), 1,
      anon_sym_s_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(45), 1,
      sym__natural_number,
    ACTIONS(47), 1,
      anon_sym__,
    ACTIONS(49), 1,
      anon_sym_DOT,
    ACTIONS(51), 1,
      anon_sym_BQUOTE,
    ACTIONS(53), 1,
      sym__identifier,
    ACTIONS(55), 1,
      anon_sym_AT,
    ACTIONS(183), 1,
      anon_sym_COMMA,
    ACTIONS(185), 1,
      anon_sym_RBRACK,
    STATE(12), 1,
      aux_sym__friendly_number,
    STATE(18), 1,
      sym_comment,
    STATE(78), 1,
      sym_integer,
    STATE(80), 1,
      sym_identifier,
    STATE(81), 1,
      sym__double_quote_string,
    STATE(100), 1,
      sym__single_quote_string,
    STATE(170), 1,
      sym_assignment,
    STATE(191), 1,
      sym__expression,
    STATE(367), 1,
      sym_term,
    STATE(436), 1,
      sym__alias_identifier,
    STATE(93), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(98), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(107), 2,
      sym__literal_string,
      sym_decimal_number,
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
  [1756] = 33,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(25), 1,
      anon_sym_LPAREN,
    ACTIONS(31), 1,
      anon_sym_DASH,
    ACTIONS(33), 1,
      anon_sym_DQUOTE,
    ACTIONS(35), 1,
      anon_sym_SQUOTE,
    ACTIONS(37), 1,
      anon_sym_f_DQUOTE,
    ACTIONS(39), 1,
      anon_sym_f_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(41), 1,
      anon_sym_s_DQUOTE,
    ACTIONS(43), 1,
      anon_sym_s_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(45), 1,
      sym__natural_number,
    ACTIONS(47), 1,
      anon_sym__,
    ACTIONS(49), 1,
      anon_sym_DOT,
    ACTIONS(51), 1,
      anon_sym_BQUOTE,
    ACTIONS(53), 1,
      sym__identifier,
    ACTIONS(55), 1,
      anon_sym_AT,
    ACTIONS(187), 1,
      anon_sym_COMMA,
    ACTIONS(189), 1,
      anon_sym_RBRACK,
    STATE(12), 1,
      aux_sym__friendly_number,
    STATE(19), 1,
      sym_comment,
    STATE(78), 1,
      sym_integer,
    STATE(80), 1,
      sym_identifier,
    STATE(81), 1,
      sym__double_quote_string,
    STATE(100), 1,
      sym__single_quote_string,
    STATE(170), 1,
      sym_assignment,
    STATE(191), 1,
      sym__expression,
    STATE(374), 1,
      sym_term,
    STATE(436), 1,
      sym__alias_identifier,
    STATE(93), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(98), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(107), 2,
      sym__literal_string,
      sym_decimal_number,
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
  [1868] = 35,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(25), 1,
      anon_sym_LPAREN,
    ACTIONS(31), 1,
      anon_sym_DASH,
    ACTIONS(33), 1,
      anon_sym_DQUOTE,
    ACTIONS(35), 1,
      anon_sym_SQUOTE,
    ACTIONS(37), 1,
      anon_sym_f_DQUOTE,
    ACTIONS(39), 1,
      anon_sym_f_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(41), 1,
      anon_sym_s_DQUOTE,
    ACTIONS(43), 1,
      anon_sym_s_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(45), 1,
      sym__natural_number,
    ACTIONS(47), 1,
      anon_sym__,
    ACTIONS(49), 1,
      anon_sym_DOT,
    ACTIONS(51), 1,
      anon_sym_BQUOTE,
    ACTIONS(53), 1,
      sym__identifier,
    ACTIONS(55), 1,
      anon_sym_AT,
    ACTIONS(191), 1,
      anon_sym_COMMA,
    ACTIONS(193), 1,
      anon_sym_RBRACK,
    STATE(12), 1,
      aux_sym__friendly_number,
    STATE(16), 1,
      aux_sym_switch_repeat1,
    STATE(20), 1,
      sym_comment,
    STATE(78), 1,
      sym_integer,
    STATE(80), 1,
      sym_identifier,
    STATE(81), 1,
      sym__double_quote_string,
    STATE(100), 1,
      sym__single_quote_string,
    STATE(187), 1,
      sym_switch_condition,
    STATE(280), 1,
      sym_literal,
    STATE(281), 1,
      sym_binary_expression,
    STATE(282), 1,
      sym__expression,
    STATE(436), 1,
      sym__alias_identifier,
    STATE(93), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(98), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(107), 2,
      sym__literal_string,
      sym_decimal_number,
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
  [1984] = 34,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(25), 1,
      anon_sym_LPAREN,
    ACTIONS(31), 1,
      anon_sym_DASH,
    ACTIONS(33), 1,
      anon_sym_DQUOTE,
    ACTIONS(35), 1,
      anon_sym_SQUOTE,
    ACTIONS(37), 1,
      anon_sym_f_DQUOTE,
    ACTIONS(39), 1,
      anon_sym_f_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(41), 1,
      anon_sym_s_DQUOTE,
    ACTIONS(43), 1,
      anon_sym_s_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(45), 1,
      sym__natural_number,
    ACTIONS(47), 1,
      anon_sym__,
    ACTIONS(49), 1,
      anon_sym_DOT,
    ACTIONS(51), 1,
      anon_sym_BQUOTE,
    ACTIONS(53), 1,
      sym__identifier,
    ACTIONS(55), 1,
      anon_sym_AT,
    STATE(12), 1,
      aux_sym__friendly_number,
    STATE(17), 1,
      aux_sym_switch_repeat1,
    STATE(21), 1,
      sym_comment,
    STATE(78), 1,
      sym_integer,
    STATE(80), 1,
      sym_identifier,
    STATE(81), 1,
      sym__double_quote_string,
    STATE(100), 1,
      sym__single_quote_string,
    STATE(187), 1,
      sym_switch_condition,
    STATE(280), 1,
      sym_literal,
    STATE(281), 1,
      sym_binary_expression,
    STATE(282), 1,
      sym__expression,
    STATE(436), 1,
      sym__alias_identifier,
    ACTIONS(195), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
    STATE(93), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(98), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(107), 2,
      sym__literal_string,
      sym_decimal_number,
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
  [2098] = 33,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(25), 1,
      anon_sym_LPAREN,
    ACTIONS(31), 1,
      anon_sym_DASH,
    ACTIONS(33), 1,
      anon_sym_DQUOTE,
    ACTIONS(35), 1,
      anon_sym_SQUOTE,
    ACTIONS(37), 1,
      anon_sym_f_DQUOTE,
    ACTIONS(39), 1,
      anon_sym_f_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(41), 1,
      anon_sym_s_DQUOTE,
    ACTIONS(43), 1,
      anon_sym_s_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(45), 1,
      sym__natural_number,
    ACTIONS(47), 1,
      anon_sym__,
    ACTIONS(49), 1,
      anon_sym_DOT,
    ACTIONS(51), 1,
      anon_sym_BQUOTE,
    ACTIONS(53), 1,
      sym__identifier,
    ACTIONS(55), 1,
      anon_sym_AT,
    ACTIONS(197), 1,
      anon_sym_COMMA,
    ACTIONS(199), 1,
      anon_sym_RBRACK,
    STATE(12), 1,
      aux_sym__friendly_number,
    STATE(22), 1,
      sym_comment,
    STATE(78), 1,
      sym_integer,
    STATE(80), 1,
      sym_identifier,
    STATE(81), 1,
      sym__double_quote_string,
    STATE(100), 1,
      sym__single_quote_string,
    STATE(170), 1,
      sym_assignment,
    STATE(191), 1,
      sym__expression,
    STATE(372), 1,
      sym_term,
    STATE(436), 1,
      sym__alias_identifier,
    STATE(93), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(98), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(107), 2,
      sym__literal_string,
      sym_decimal_number,
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
  [2210] = 33,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(25), 1,
      anon_sym_LPAREN,
    ACTIONS(31), 1,
      anon_sym_DASH,
    ACTIONS(33), 1,
      anon_sym_DQUOTE,
    ACTIONS(35), 1,
      anon_sym_SQUOTE,
    ACTIONS(37), 1,
      anon_sym_f_DQUOTE,
    ACTIONS(39), 1,
      anon_sym_f_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(41), 1,
      anon_sym_s_DQUOTE,
    ACTIONS(43), 1,
      anon_sym_s_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(45), 1,
      sym__natural_number,
    ACTIONS(47), 1,
      anon_sym__,
    ACTIONS(49), 1,
      anon_sym_DOT,
    ACTIONS(51), 1,
      anon_sym_BQUOTE,
    ACTIONS(53), 1,
      sym__identifier,
    ACTIONS(55), 1,
      anon_sym_AT,
    ACTIONS(201), 1,
      anon_sym_LBRACK,
    ACTIONS(203), 1,
      sym_bang,
    STATE(12), 1,
      aux_sym__friendly_number,
    STATE(23), 1,
      sym_comment,
    STATE(78), 1,
      sym_integer,
    STATE(80), 1,
      sym_identifier,
    STATE(81), 1,
      sym__double_quote_string,
    STATE(100), 1,
      sym__single_quote_string,
    STATE(139), 1,
      sym__expression,
    STATE(170), 1,
      sym_assignment,
    STATE(228), 1,
      sym_term,
    STATE(436), 1,
      sym__alias_identifier,
    STATE(93), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(98), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(107), 2,
      sym__literal_string,
      sym_decimal_number,
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
  [2322] = 33,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(25), 1,
      anon_sym_LPAREN,
    ACTIONS(31), 1,
      anon_sym_DASH,
    ACTIONS(33), 1,
      anon_sym_DQUOTE,
    ACTIONS(35), 1,
      anon_sym_SQUOTE,
    ACTIONS(37), 1,
      anon_sym_f_DQUOTE,
    ACTIONS(39), 1,
      anon_sym_f_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(41), 1,
      anon_sym_s_DQUOTE,
    ACTIONS(43), 1,
      anon_sym_s_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(45), 1,
      sym__natural_number,
    ACTIONS(47), 1,
      anon_sym__,
    ACTIONS(49), 1,
      anon_sym_DOT,
    ACTIONS(51), 1,
      anon_sym_BQUOTE,
    ACTIONS(53), 1,
      sym__identifier,
    ACTIONS(55), 1,
      anon_sym_AT,
    ACTIONS(201), 1,
      anon_sym_LBRACK,
    ACTIONS(203), 1,
      sym_bang,
    STATE(12), 1,
      aux_sym__friendly_number,
    STATE(24), 1,
      sym_comment,
    STATE(78), 1,
      sym_integer,
    STATE(80), 1,
      sym_identifier,
    STATE(81), 1,
      sym__double_quote_string,
    STATE(100), 1,
      sym__single_quote_string,
    STATE(117), 1,
      sym__expression,
    STATE(170), 1,
      sym_assignment,
    STATE(228), 1,
      sym_term,
    STATE(436), 1,
      sym__alias_identifier,
    STATE(93), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(98), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(107), 2,
      sym__literal_string,
      sym_decimal_number,
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
  [2434] = 33,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(31), 1,
      anon_sym_DASH,
    ACTIONS(33), 1,
      anon_sym_DQUOTE,
    ACTIONS(35), 1,
      anon_sym_SQUOTE,
    ACTIONS(37), 1,
      anon_sym_f_DQUOTE,
    ACTIONS(39), 1,
      anon_sym_f_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(41), 1,
      anon_sym_s_DQUOTE,
    ACTIONS(43), 1,
      anon_sym_s_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(45), 1,
      sym__natural_number,
    ACTIONS(47), 1,
      anon_sym__,
    ACTIONS(49), 1,
      anon_sym_DOT,
    ACTIONS(51), 1,
      anon_sym_BQUOTE,
    ACTIONS(53), 1,
      sym__identifier,
    ACTIONS(55), 1,
      anon_sym_AT,
    ACTIONS(205), 1,
      anon_sym_LPAREN,
    ACTIONS(207), 1,
      anon_sym_COMMA,
    ACTIONS(209), 1,
      anon_sym_RBRACK,
    STATE(12), 1,
      aux_sym__friendly_number,
    STATE(25), 1,
      sym_comment,
    STATE(78), 1,
      sym_integer,
    STATE(80), 1,
      sym_identifier,
    STATE(81), 1,
      sym__double_quote_string,
    STATE(100), 1,
      sym__single_quote_string,
    STATE(170), 1,
      sym_assignment,
    STATE(191), 1,
      sym__expression,
    STATE(392), 1,
      sym_term,
    STATE(436), 1,
      sym__alias_identifier,
    STATE(93), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(98), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(107), 2,
      sym__literal_string,
      sym_decimal_number,
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
  [2546] = 32,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(25), 1,
      anon_sym_LPAREN,
    ACTIONS(31), 1,
      anon_sym_DASH,
    ACTIONS(33), 1,
      anon_sym_DQUOTE,
    ACTIONS(35), 1,
      anon_sym_SQUOTE,
    ACTIONS(37), 1,
      anon_sym_f_DQUOTE,
    ACTIONS(39), 1,
      anon_sym_f_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(41), 1,
      anon_sym_s_DQUOTE,
    ACTIONS(43), 1,
      anon_sym_s_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(45), 1,
      sym__natural_number,
    ACTIONS(47), 1,
      anon_sym__,
    ACTIONS(49), 1,
      anon_sym_DOT,
    ACTIONS(51), 1,
      anon_sym_BQUOTE,
    ACTIONS(53), 1,
      sym__identifier,
    ACTIONS(55), 1,
      anon_sym_AT,
    ACTIONS(211), 1,
      anon_sym_RBRACK,
    STATE(12), 1,
      aux_sym__friendly_number,
    STATE(26), 1,
      sym_comment,
    STATE(78), 1,
      sym_integer,
    STATE(80), 1,
      sym_identifier,
    STATE(81), 1,
      sym__double_quote_string,
    STATE(100), 1,
      sym__single_quote_string,
    STATE(170), 1,
      sym_assignment,
    STATE(191), 1,
      sym__expression,
    STATE(408), 1,
      sym_term,
    STATE(436), 1,
      sym__alias_identifier,
    STATE(93), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(98), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(107), 2,
      sym__literal_string,
      sym_decimal_number,
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
  [2655] = 32,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(25), 1,
      anon_sym_LPAREN,
    ACTIONS(31), 1,
      anon_sym_DASH,
    ACTIONS(33), 1,
      anon_sym_DQUOTE,
    ACTIONS(35), 1,
      anon_sym_SQUOTE,
    ACTIONS(37), 1,
      anon_sym_f_DQUOTE,
    ACTIONS(39), 1,
      anon_sym_f_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(41), 1,
      anon_sym_s_DQUOTE,
    ACTIONS(43), 1,
      anon_sym_s_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(45), 1,
      sym__natural_number,
    ACTIONS(47), 1,
      anon_sym__,
    ACTIONS(49), 1,
      anon_sym_DOT,
    ACTIONS(51), 1,
      anon_sym_BQUOTE,
    ACTIONS(53), 1,
      sym__identifier,
    ACTIONS(55), 1,
      anon_sym_AT,
    ACTIONS(213), 1,
      anon_sym_RBRACK,
    STATE(12), 1,
      aux_sym__friendly_number,
    STATE(27), 1,
      sym_comment,
    STATE(78), 1,
      sym_integer,
    STATE(80), 1,
      sym_identifier,
    STATE(81), 1,
      sym__double_quote_string,
    STATE(100), 1,
      sym__single_quote_string,
    STATE(170), 1,
      sym_assignment,
    STATE(191), 1,
      sym__expression,
    STATE(408), 1,
      sym_term,
    STATE(436), 1,
      sym__alias_identifier,
    STATE(93), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(98), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(107), 2,
      sym__literal_string,
      sym_decimal_number,
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
  [2764] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    STATE(28), 1,
      sym_comment,
    ACTIONS(217), 6,
      sym_keyword_from,
      anon_sym_EQ,
      anon_sym_DASH,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_T,
    ACTIONS(215), 35,
      ts_builtin_sym_end,
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
      anon_sym_DASH_GT,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_PLUS,
      anon_sym_EQ_EQ,
      anon_sym_DOT_DOT,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_QMARK_QMARK,
  [2819] = 32,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(25), 1,
      anon_sym_LPAREN,
    ACTIONS(31), 1,
      anon_sym_DASH,
    ACTIONS(33), 1,
      anon_sym_DQUOTE,
    ACTIONS(35), 1,
      anon_sym_SQUOTE,
    ACTIONS(37), 1,
      anon_sym_f_DQUOTE,
    ACTIONS(39), 1,
      anon_sym_f_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(41), 1,
      anon_sym_s_DQUOTE,
    ACTIONS(43), 1,
      anon_sym_s_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(45), 1,
      sym__natural_number,
    ACTIONS(47), 1,
      anon_sym__,
    ACTIONS(49), 1,
      anon_sym_DOT,
    ACTIONS(51), 1,
      anon_sym_BQUOTE,
    ACTIONS(53), 1,
      sym__identifier,
    ACTIONS(55), 1,
      anon_sym_AT,
    ACTIONS(219), 1,
      anon_sym_RBRACK,
    STATE(12), 1,
      aux_sym__friendly_number,
    STATE(29), 1,
      sym_comment,
    STATE(78), 1,
      sym_integer,
    STATE(80), 1,
      sym_identifier,
    STATE(81), 1,
      sym__double_quote_string,
    STATE(100), 1,
      sym__single_quote_string,
    STATE(170), 1,
      sym_assignment,
    STATE(191), 1,
      sym__expression,
    STATE(408), 1,
      sym_term,
    STATE(436), 1,
      sym__alias_identifier,
    STATE(93), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(98), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(107), 2,
      sym__literal_string,
      sym_decimal_number,
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
  [2928] = 34,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(25), 1,
      anon_sym_LPAREN,
    ACTIONS(31), 1,
      anon_sym_DASH,
    ACTIONS(33), 1,
      anon_sym_DQUOTE,
    ACTIONS(35), 1,
      anon_sym_SQUOTE,
    ACTIONS(37), 1,
      anon_sym_f_DQUOTE,
    ACTIONS(39), 1,
      anon_sym_f_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(41), 1,
      anon_sym_s_DQUOTE,
    ACTIONS(43), 1,
      anon_sym_s_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(45), 1,
      sym__natural_number,
    ACTIONS(47), 1,
      anon_sym__,
    ACTIONS(49), 1,
      anon_sym_DOT,
    ACTIONS(51), 1,
      anon_sym_BQUOTE,
    ACTIONS(53), 1,
      sym__identifier,
    ACTIONS(55), 1,
      anon_sym_AT,
    ACTIONS(221), 1,
      anon_sym_RBRACK,
    STATE(12), 1,
      aux_sym__friendly_number,
    STATE(21), 1,
      aux_sym_switch_repeat1,
    STATE(30), 1,
      sym_comment,
    STATE(78), 1,
      sym_integer,
    STATE(80), 1,
      sym_identifier,
    STATE(81), 1,
      sym__double_quote_string,
    STATE(100), 1,
      sym__single_quote_string,
    STATE(187), 1,
      sym_switch_condition,
    STATE(280), 1,
      sym_literal,
    STATE(281), 1,
      sym_binary_expression,
    STATE(282), 1,
      sym__expression,
    STATE(436), 1,
      sym__alias_identifier,
    STATE(93), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(98), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(107), 2,
      sym__literal_string,
      sym_decimal_number,
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
  [3041] = 32,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(31), 1,
      anon_sym_DASH,
    ACTIONS(33), 1,
      anon_sym_DQUOTE,
    ACTIONS(35), 1,
      anon_sym_SQUOTE,
    ACTIONS(37), 1,
      anon_sym_f_DQUOTE,
    ACTIONS(39), 1,
      anon_sym_f_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(41), 1,
      anon_sym_s_DQUOTE,
    ACTIONS(43), 1,
      anon_sym_s_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(45), 1,
      sym__natural_number,
    ACTIONS(47), 1,
      anon_sym__,
    ACTIONS(49), 1,
      anon_sym_DOT,
    ACTIONS(51), 1,
      anon_sym_BQUOTE,
    ACTIONS(53), 1,
      sym__identifier,
    ACTIONS(55), 1,
      anon_sym_AT,
    ACTIONS(223), 1,
      anon_sym_LPAREN,
    ACTIONS(225), 1,
      anon_sym_RBRACK,
    STATE(12), 1,
      aux_sym__friendly_number,
    STATE(31), 1,
      sym_comment,
    STATE(78), 1,
      sym_integer,
    STATE(80), 1,
      sym_identifier,
    STATE(81), 1,
      sym__double_quote_string,
    STATE(100), 1,
      sym__single_quote_string,
    STATE(170), 1,
      sym_assignment,
    STATE(191), 1,
      sym__expression,
    STATE(396), 1,
      sym_term,
    STATE(436), 1,
      sym__alias_identifier,
    STATE(93), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(98), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(107), 2,
      sym__literal_string,
      sym_decimal_number,
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
  [3150] = 32,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(31), 1,
      anon_sym_DASH,
    ACTIONS(33), 1,
      anon_sym_DQUOTE,
    ACTIONS(35), 1,
      anon_sym_SQUOTE,
    ACTIONS(37), 1,
      anon_sym_f_DQUOTE,
    ACTIONS(39), 1,
      anon_sym_f_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(41), 1,
      anon_sym_s_DQUOTE,
    ACTIONS(43), 1,
      anon_sym_s_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(45), 1,
      sym__natural_number,
    ACTIONS(47), 1,
      anon_sym__,
    ACTIONS(49), 1,
      anon_sym_DOT,
    ACTIONS(51), 1,
      anon_sym_BQUOTE,
    ACTIONS(53), 1,
      sym__identifier,
    ACTIONS(55), 1,
      anon_sym_AT,
    ACTIONS(223), 1,
      anon_sym_LPAREN,
    ACTIONS(227), 1,
      anon_sym_RBRACK,
    STATE(12), 1,
      aux_sym__friendly_number,
    STATE(32), 1,
      sym_comment,
    STATE(78), 1,
      sym_integer,
    STATE(80), 1,
      sym_identifier,
    STATE(81), 1,
      sym__double_quote_string,
    STATE(100), 1,
      sym__single_quote_string,
    STATE(170), 1,
      sym_assignment,
    STATE(191), 1,
      sym__expression,
    STATE(396), 1,
      sym_term,
    STATE(436), 1,
      sym__alias_identifier,
    STATE(93), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(98), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(107), 2,
      sym__literal_string,
      sym_decimal_number,
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
  [3259] = 32,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(25), 1,
      anon_sym_LPAREN,
    ACTIONS(31), 1,
      anon_sym_DASH,
    ACTIONS(33), 1,
      anon_sym_DQUOTE,
    ACTIONS(35), 1,
      anon_sym_SQUOTE,
    ACTIONS(37), 1,
      anon_sym_f_DQUOTE,
    ACTIONS(39), 1,
      anon_sym_f_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(41), 1,
      anon_sym_s_DQUOTE,
    ACTIONS(43), 1,
      anon_sym_s_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(45), 1,
      sym__natural_number,
    ACTIONS(47), 1,
      anon_sym__,
    ACTIONS(49), 1,
      anon_sym_DOT,
    ACTIONS(51), 1,
      anon_sym_BQUOTE,
    ACTIONS(53), 1,
      sym__identifier,
    ACTIONS(55), 1,
      anon_sym_AT,
    ACTIONS(229), 1,
      anon_sym_LBRACK,
    STATE(12), 1,
      aux_sym__friendly_number,
    STATE(33), 1,
      sym_comment,
    STATE(78), 1,
      sym_integer,
    STATE(80), 1,
      sym_identifier,
    STATE(81), 1,
      sym__double_quote_string,
    STATE(100), 1,
      sym__single_quote_string,
    STATE(117), 1,
      sym__expression,
    STATE(229), 1,
      sym_assignment,
    STATE(234), 1,
      sym_term,
    STATE(436), 1,
      sym__alias_identifier,
    STATE(93), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(98), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(107), 2,
      sym__literal_string,
      sym_decimal_number,
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
  [3368] = 32,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(25), 1,
      anon_sym_LPAREN,
    ACTIONS(31), 1,
      anon_sym_DASH,
    ACTIONS(33), 1,
      anon_sym_DQUOTE,
    ACTIONS(35), 1,
      anon_sym_SQUOTE,
    ACTIONS(37), 1,
      anon_sym_f_DQUOTE,
    ACTIONS(39), 1,
      anon_sym_f_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(41), 1,
      anon_sym_s_DQUOTE,
    ACTIONS(43), 1,
      anon_sym_s_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(45), 1,
      sym__natural_number,
    ACTIONS(47), 1,
      anon_sym__,
    ACTIONS(49), 1,
      anon_sym_DOT,
    ACTIONS(51), 1,
      anon_sym_BQUOTE,
    ACTIONS(53), 1,
      sym__identifier,
    ACTIONS(55), 1,
      anon_sym_AT,
    ACTIONS(231), 1,
      anon_sym_LBRACK,
    STATE(12), 1,
      aux_sym__friendly_number,
    STATE(34), 1,
      sym_comment,
    STATE(78), 1,
      sym_integer,
    STATE(80), 1,
      sym_identifier,
    STATE(81), 1,
      sym__double_quote_string,
    STATE(100), 1,
      sym__single_quote_string,
    STATE(170), 1,
      sym_assignment,
    STATE(191), 1,
      sym__expression,
    STATE(435), 1,
      sym_term,
    STATE(436), 1,
      sym__alias_identifier,
    STATE(93), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(98), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(107), 2,
      sym__literal_string,
      sym_decimal_number,
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
  [3477] = 34,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(25), 1,
      anon_sym_LPAREN,
    ACTIONS(31), 1,
      anon_sym_DASH,
    ACTIONS(33), 1,
      anon_sym_DQUOTE,
    ACTIONS(35), 1,
      anon_sym_SQUOTE,
    ACTIONS(37), 1,
      anon_sym_f_DQUOTE,
    ACTIONS(39), 1,
      anon_sym_f_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(41), 1,
      anon_sym_s_DQUOTE,
    ACTIONS(43), 1,
      anon_sym_s_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(45), 1,
      sym__natural_number,
    ACTIONS(47), 1,
      anon_sym__,
    ACTIONS(49), 1,
      anon_sym_DOT,
    ACTIONS(51), 1,
      anon_sym_BQUOTE,
    ACTIONS(53), 1,
      sym__identifier,
    ACTIONS(55), 1,
      anon_sym_AT,
    ACTIONS(233), 1,
      anon_sym_RBRACK,
    STATE(12), 1,
      aux_sym__friendly_number,
    STATE(21), 1,
      aux_sym_switch_repeat1,
    STATE(35), 1,
      sym_comment,
    STATE(78), 1,
      sym_integer,
    STATE(80), 1,
      sym_identifier,
    STATE(81), 1,
      sym__double_quote_string,
    STATE(100), 1,
      sym__single_quote_string,
    STATE(187), 1,
      sym_switch_condition,
    STATE(280), 1,
      sym_literal,
    STATE(281), 1,
      sym_binary_expression,
    STATE(282), 1,
      sym__expression,
    STATE(436), 1,
      sym__alias_identifier,
    STATE(93), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(98), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(107), 2,
      sym__literal_string,
      sym_decimal_number,
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
  [3590] = 33,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(25), 1,
      anon_sym_LPAREN,
    ACTIONS(31), 1,
      anon_sym_DASH,
    ACTIONS(33), 1,
      anon_sym_DQUOTE,
    ACTIONS(35), 1,
      anon_sym_SQUOTE,
    ACTIONS(37), 1,
      anon_sym_f_DQUOTE,
    ACTIONS(39), 1,
      anon_sym_f_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(41), 1,
      anon_sym_s_DQUOTE,
    ACTIONS(43), 1,
      anon_sym_s_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(45), 1,
      sym__natural_number,
    ACTIONS(47), 1,
      anon_sym__,
    ACTIONS(49), 1,
      anon_sym_DOT,
    ACTIONS(51), 1,
      anon_sym_BQUOTE,
    ACTIONS(53), 1,
      sym__identifier,
    ACTIONS(55), 1,
      anon_sym_AT,
    ACTIONS(235), 1,
      anon_sym_COMMA,
    ACTIONS(237), 1,
      anon_sym_RBRACK,
    ACTIONS(239), 1,
      anon_sym_EQ_EQ,
    STATE(12), 1,
      aux_sym__friendly_number,
    STATE(36), 1,
      sym_comment,
    STATE(78), 1,
      sym_integer,
    STATE(80), 1,
      sym_identifier,
    STATE(81), 1,
      sym__double_quote_string,
    STATE(100), 1,
      sym__single_quote_string,
    STATE(246), 1,
      sym_binary_expression,
    STATE(282), 1,
      sym__expression,
    STATE(436), 1,
      sym__alias_identifier,
    STATE(93), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(98), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(107), 2,
      sym__literal_string,
      sym_decimal_number,
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
  [3701] = 32,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(25), 1,
      anon_sym_LPAREN,
    ACTIONS(31), 1,
      anon_sym_DASH,
    ACTIONS(33), 1,
      anon_sym_DQUOTE,
    ACTIONS(35), 1,
      anon_sym_SQUOTE,
    ACTIONS(37), 1,
      anon_sym_f_DQUOTE,
    ACTIONS(39), 1,
      anon_sym_f_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(41), 1,
      anon_sym_s_DQUOTE,
    ACTIONS(43), 1,
      anon_sym_s_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(45), 1,
      sym__natural_number,
    ACTIONS(47), 1,
      anon_sym__,
    ACTIONS(49), 1,
      anon_sym_DOT,
    ACTIONS(51), 1,
      anon_sym_BQUOTE,
    ACTIONS(53), 1,
      sym__identifier,
    ACTIONS(55), 1,
      anon_sym_AT,
    ACTIONS(229), 1,
      anon_sym_LBRACK,
    STATE(12), 1,
      aux_sym__friendly_number,
    STATE(37), 1,
      sym_comment,
    STATE(78), 1,
      sym_integer,
    STATE(80), 1,
      sym_identifier,
    STATE(81), 1,
      sym__double_quote_string,
    STATE(100), 1,
      sym__single_quote_string,
    STATE(191), 1,
      sym__expression,
    STATE(229), 1,
      sym_assignment,
    STATE(234), 1,
      sym_term,
    STATE(436), 1,
      sym__alias_identifier,
    STATE(93), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(98), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(107), 2,
      sym__literal_string,
      sym_decimal_number,
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
  [3810] = 32,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(25), 1,
      anon_sym_LPAREN,
    ACTIONS(31), 1,
      anon_sym_DASH,
    ACTIONS(33), 1,
      anon_sym_DQUOTE,
    ACTIONS(35), 1,
      anon_sym_SQUOTE,
    ACTIONS(37), 1,
      anon_sym_f_DQUOTE,
    ACTIONS(39), 1,
      anon_sym_f_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(41), 1,
      anon_sym_s_DQUOTE,
    ACTIONS(43), 1,
      anon_sym_s_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(45), 1,
      sym__natural_number,
    ACTIONS(47), 1,
      anon_sym__,
    ACTIONS(49), 1,
      anon_sym_DOT,
    ACTIONS(51), 1,
      anon_sym_BQUOTE,
    ACTIONS(53), 1,
      sym__identifier,
    ACTIONS(55), 1,
      anon_sym_AT,
    ACTIONS(241), 1,
      anon_sym_RBRACK,
    STATE(12), 1,
      aux_sym__friendly_number,
    STATE(38), 1,
      sym_comment,
    STATE(78), 1,
      sym_integer,
    STATE(80), 1,
      sym_identifier,
    STATE(81), 1,
      sym__double_quote_string,
    STATE(100), 1,
      sym__single_quote_string,
    STATE(170), 1,
      sym_assignment,
    STATE(191), 1,
      sym__expression,
    STATE(408), 1,
      sym_term,
    STATE(436), 1,
      sym__alias_identifier,
    STATE(93), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(98), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(107), 2,
      sym__literal_string,
      sym_decimal_number,
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
  [3919] = 32,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(25), 1,
      anon_sym_LPAREN,
    ACTIONS(31), 1,
      anon_sym_DASH,
    ACTIONS(33), 1,
      anon_sym_DQUOTE,
    ACTIONS(35), 1,
      anon_sym_SQUOTE,
    ACTIONS(37), 1,
      anon_sym_f_DQUOTE,
    ACTIONS(39), 1,
      anon_sym_f_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(41), 1,
      anon_sym_s_DQUOTE,
    ACTIONS(43), 1,
      anon_sym_s_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(45), 1,
      sym__natural_number,
    ACTIONS(47), 1,
      anon_sym__,
    ACTIONS(49), 1,
      anon_sym_DOT,
    ACTIONS(51), 1,
      anon_sym_BQUOTE,
    ACTIONS(53), 1,
      sym__identifier,
    ACTIONS(55), 1,
      anon_sym_AT,
    ACTIONS(229), 1,
      anon_sym_LBRACK,
    STATE(12), 1,
      aux_sym__friendly_number,
    STATE(39), 1,
      sym_comment,
    STATE(78), 1,
      sym_integer,
    STATE(80), 1,
      sym_identifier,
    STATE(81), 1,
      sym__double_quote_string,
    STATE(100), 1,
      sym__single_quote_string,
    STATE(139), 1,
      sym__expression,
    STATE(229), 1,
      sym_assignment,
    STATE(234), 1,
      sym_term,
    STATE(436), 1,
      sym__alias_identifier,
    STATE(93), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(98), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(107), 2,
      sym__literal_string,
      sym_decimal_number,
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
  [4028] = 32,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(25), 1,
      anon_sym_LPAREN,
    ACTIONS(31), 1,
      anon_sym_DASH,
    ACTIONS(33), 1,
      anon_sym_DQUOTE,
    ACTIONS(35), 1,
      anon_sym_SQUOTE,
    ACTIONS(37), 1,
      anon_sym_f_DQUOTE,
    ACTIONS(39), 1,
      anon_sym_f_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(41), 1,
      anon_sym_s_DQUOTE,
    ACTIONS(43), 1,
      anon_sym_s_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(45), 1,
      sym__natural_number,
    ACTIONS(47), 1,
      anon_sym__,
    ACTIONS(49), 1,
      anon_sym_DOT,
    ACTIONS(51), 1,
      anon_sym_BQUOTE,
    ACTIONS(53), 1,
      sym__identifier,
    ACTIONS(55), 1,
      anon_sym_AT,
    ACTIONS(243), 1,
      anon_sym_RBRACK,
    STATE(12), 1,
      aux_sym__friendly_number,
    STATE(40), 1,
      sym_comment,
    STATE(78), 1,
      sym_integer,
    STATE(80), 1,
      sym_identifier,
    STATE(81), 1,
      sym__double_quote_string,
    STATE(100), 1,
      sym__single_quote_string,
    STATE(170), 1,
      sym_assignment,
    STATE(191), 1,
      sym__expression,
    STATE(408), 1,
      sym_term,
    STATE(436), 1,
      sym__alias_identifier,
    STATE(93), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(98), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(107), 2,
      sym__literal_string,
      sym_decimal_number,
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
  [4137] = 32,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(31), 1,
      anon_sym_DASH,
    ACTIONS(33), 1,
      anon_sym_DQUOTE,
    ACTIONS(35), 1,
      anon_sym_SQUOTE,
    ACTIONS(37), 1,
      anon_sym_f_DQUOTE,
    ACTIONS(39), 1,
      anon_sym_f_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(41), 1,
      anon_sym_s_DQUOTE,
    ACTIONS(43), 1,
      anon_sym_s_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(45), 1,
      sym__natural_number,
    ACTIONS(47), 1,
      anon_sym__,
    ACTIONS(49), 1,
      anon_sym_DOT,
    ACTIONS(51), 1,
      anon_sym_BQUOTE,
    ACTIONS(53), 1,
      sym__identifier,
    ACTIONS(55), 1,
      anon_sym_AT,
    ACTIONS(223), 1,
      anon_sym_LPAREN,
    ACTIONS(245), 1,
      anon_sym_RBRACK,
    STATE(12), 1,
      aux_sym__friendly_number,
    STATE(41), 1,
      sym_comment,
    STATE(78), 1,
      sym_integer,
    STATE(80), 1,
      sym_identifier,
    STATE(81), 1,
      sym__double_quote_string,
    STATE(100), 1,
      sym__single_quote_string,
    STATE(170), 1,
      sym_assignment,
    STATE(191), 1,
      sym__expression,
    STATE(396), 1,
      sym_term,
    STATE(436), 1,
      sym__alias_identifier,
    STATE(93), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(98), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(107), 2,
      sym__literal_string,
      sym_decimal_number,
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
  [4246] = 33,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(25), 1,
      anon_sym_LPAREN,
    ACTIONS(31), 1,
      anon_sym_DASH,
    ACTIONS(33), 1,
      anon_sym_DQUOTE,
    ACTIONS(35), 1,
      anon_sym_SQUOTE,
    ACTIONS(37), 1,
      anon_sym_f_DQUOTE,
    ACTIONS(39), 1,
      anon_sym_f_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(41), 1,
      anon_sym_s_DQUOTE,
    ACTIONS(43), 1,
      anon_sym_s_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(45), 1,
      sym__natural_number,
    ACTIONS(47), 1,
      anon_sym__,
    ACTIONS(49), 1,
      anon_sym_DOT,
    ACTIONS(51), 1,
      anon_sym_BQUOTE,
    ACTIONS(53), 1,
      sym__identifier,
    ACTIONS(55), 1,
      anon_sym_AT,
    STATE(12), 1,
      aux_sym__friendly_number,
    STATE(21), 1,
      aux_sym_switch_repeat1,
    STATE(42), 1,
      sym_comment,
    STATE(78), 1,
      sym_integer,
    STATE(80), 1,
      sym_identifier,
    STATE(81), 1,
      sym__double_quote_string,
    STATE(100), 1,
      sym__single_quote_string,
    STATE(187), 1,
      sym_switch_condition,
    STATE(280), 1,
      sym_literal,
    STATE(281), 1,
      sym_binary_expression,
    STATE(282), 1,
      sym__expression,
    STATE(436), 1,
      sym__alias_identifier,
    STATE(93), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(98), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(107), 2,
      sym__literal_string,
      sym_decimal_number,
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
  [4356] = 31,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(25), 1,
      anon_sym_LPAREN,
    ACTIONS(31), 1,
      anon_sym_DASH,
    ACTIONS(33), 1,
      anon_sym_DQUOTE,
    ACTIONS(35), 1,
      anon_sym_SQUOTE,
    ACTIONS(37), 1,
      anon_sym_f_DQUOTE,
    ACTIONS(39), 1,
      anon_sym_f_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(41), 1,
      anon_sym_s_DQUOTE,
    ACTIONS(43), 1,
      anon_sym_s_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(45), 1,
      sym__natural_number,
    ACTIONS(47), 1,
      anon_sym__,
    ACTIONS(49), 1,
      anon_sym_DOT,
    ACTIONS(51), 1,
      anon_sym_BQUOTE,
    ACTIONS(53), 1,
      sym__identifier,
    ACTIONS(55), 1,
      anon_sym_AT,
    STATE(12), 1,
      aux_sym__friendly_number,
    STATE(43), 1,
      sym_comment,
    STATE(78), 1,
      sym_integer,
    STATE(80), 1,
      sym_identifier,
    STATE(81), 1,
      sym__double_quote_string,
    STATE(100), 1,
      sym__single_quote_string,
    STATE(170), 1,
      sym_assignment,
    STATE(191), 1,
      sym__expression,
    STATE(436), 1,
      sym__alias_identifier,
    STATE(501), 1,
      sym_term,
    STATE(93), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(98), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(107), 2,
      sym__literal_string,
      sym_decimal_number,
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
  [4462] = 31,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(31), 1,
      anon_sym_DASH,
    ACTIONS(33), 1,
      anon_sym_DQUOTE,
    ACTIONS(35), 1,
      anon_sym_SQUOTE,
    ACTIONS(37), 1,
      anon_sym_f_DQUOTE,
    ACTIONS(39), 1,
      anon_sym_f_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(41), 1,
      anon_sym_s_DQUOTE,
    ACTIONS(43), 1,
      anon_sym_s_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(45), 1,
      sym__natural_number,
    ACTIONS(47), 1,
      anon_sym__,
    ACTIONS(49), 1,
      anon_sym_DOT,
    ACTIONS(51), 1,
      anon_sym_BQUOTE,
    ACTIONS(53), 1,
      sym__identifier,
    ACTIONS(55), 1,
      anon_sym_AT,
    ACTIONS(223), 1,
      anon_sym_LPAREN,
    STATE(12), 1,
      aux_sym__friendly_number,
    STATE(44), 1,
      sym_comment,
    STATE(78), 1,
      sym_integer,
    STATE(80), 1,
      sym_identifier,
    STATE(81), 1,
      sym__double_quote_string,
    STATE(100), 1,
      sym__single_quote_string,
    STATE(170), 1,
      sym_assignment,
    STATE(191), 1,
      sym__expression,
    STATE(396), 1,
      sym_term,
    STATE(436), 1,
      sym__alias_identifier,
    STATE(93), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(98), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(107), 2,
      sym__literal_string,
      sym_decimal_number,
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
  [4568] = 31,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(25), 1,
      anon_sym_LPAREN,
    ACTIONS(31), 1,
      anon_sym_DASH,
    ACTIONS(33), 1,
      anon_sym_DQUOTE,
    ACTIONS(35), 1,
      anon_sym_SQUOTE,
    ACTIONS(37), 1,
      anon_sym_f_DQUOTE,
    ACTIONS(39), 1,
      anon_sym_f_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(41), 1,
      anon_sym_s_DQUOTE,
    ACTIONS(43), 1,
      anon_sym_s_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(45), 1,
      sym__natural_number,
    ACTIONS(47), 1,
      anon_sym__,
    ACTIONS(49), 1,
      anon_sym_DOT,
    ACTIONS(51), 1,
      anon_sym_BQUOTE,
    ACTIONS(53), 1,
      sym__identifier,
    ACTIONS(55), 1,
      anon_sym_AT,
    STATE(12), 1,
      aux_sym__friendly_number,
    STATE(45), 1,
      sym_comment,
    STATE(78), 1,
      sym_integer,
    STATE(80), 1,
      sym_identifier,
    STATE(81), 1,
      sym__double_quote_string,
    STATE(100), 1,
      sym__single_quote_string,
    STATE(170), 1,
      sym_assignment,
    STATE(191), 1,
      sym__expression,
    STATE(408), 1,
      sym_term,
    STATE(436), 1,
      sym__alias_identifier,
    STATE(93), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(98), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(107), 2,
      sym__literal_string,
      sym_decimal_number,
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
  [4674] = 30,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(25), 1,
      anon_sym_LPAREN,
    ACTIONS(31), 1,
      anon_sym_DASH,
    ACTIONS(33), 1,
      anon_sym_DQUOTE,
    ACTIONS(35), 1,
      anon_sym_SQUOTE,
    ACTIONS(37), 1,
      anon_sym_f_DQUOTE,
    ACTIONS(39), 1,
      anon_sym_f_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(41), 1,
      anon_sym_s_DQUOTE,
    ACTIONS(43), 1,
      anon_sym_s_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(45), 1,
      sym__natural_number,
    ACTIONS(47), 1,
      anon_sym__,
    ACTIONS(49), 1,
      anon_sym_DOT,
    ACTIONS(51), 1,
      anon_sym_BQUOTE,
    ACTIONS(53), 1,
      sym__identifier,
    ACTIONS(55), 1,
      anon_sym_AT,
    STATE(12), 1,
      aux_sym__friendly_number,
    STATE(46), 1,
      sym_comment,
    STATE(78), 1,
      sym_integer,
    STATE(80), 1,
      sym_identifier,
    STATE(81), 1,
      sym__double_quote_string,
    STATE(100), 1,
      sym__single_quote_string,
    STATE(262), 1,
      sym__expression,
    STATE(436), 1,
      sym__alias_identifier,
    ACTIONS(247), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
    STATE(93), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(98), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(107), 2,
      sym__literal_string,
      sym_decimal_number,
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
  [4778] = 31,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(25), 1,
      anon_sym_LPAREN,
    ACTIONS(31), 1,
      anon_sym_DASH,
    ACTIONS(33), 1,
      anon_sym_DQUOTE,
    ACTIONS(35), 1,
      anon_sym_SQUOTE,
    ACTIONS(37), 1,
      anon_sym_f_DQUOTE,
    ACTIONS(39), 1,
      anon_sym_f_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(41), 1,
      anon_sym_s_DQUOTE,
    ACTIONS(43), 1,
      anon_sym_s_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(45), 1,
      sym__natural_number,
    ACTIONS(47), 1,
      anon_sym__,
    ACTIONS(49), 1,
      anon_sym_DOT,
    ACTIONS(51), 1,
      anon_sym_BQUOTE,
    ACTIONS(53), 1,
      sym__identifier,
    ACTIONS(55), 1,
      anon_sym_AT,
    ACTIONS(249), 1,
      anon_sym_RBRACK,
    STATE(12), 1,
      aux_sym__friendly_number,
    STATE(47), 1,
      sym_comment,
    STATE(78), 1,
      sym_integer,
    STATE(80), 1,
      sym_identifier,
    STATE(81), 1,
      sym__double_quote_string,
    STATE(100), 1,
      sym__single_quote_string,
    STATE(263), 1,
      sym_binary_expression,
    STATE(282), 1,
      sym__expression,
    STATE(436), 1,
      sym__alias_identifier,
    STATE(93), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(98), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(107), 2,
      sym__literal_string,
      sym_decimal_number,
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
  [4883] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    STATE(48), 1,
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
    ACTIONS(253), 24,
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
  [4936] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    STATE(49), 1,
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
    ACTIONS(257), 24,
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
  [4989] = 30,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(31), 1,
      anon_sym_DASH,
    ACTIONS(33), 1,
      anon_sym_DQUOTE,
    ACTIONS(35), 1,
      anon_sym_SQUOTE,
    ACTIONS(37), 1,
      anon_sym_f_DQUOTE,
    ACTIONS(39), 1,
      anon_sym_f_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(41), 1,
      anon_sym_s_DQUOTE,
    ACTIONS(43), 1,
      anon_sym_s_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(45), 1,
      sym__natural_number,
    ACTIONS(47), 1,
      anon_sym__,
    ACTIONS(49), 1,
      anon_sym_DOT,
    ACTIONS(51), 1,
      anon_sym_BQUOTE,
    ACTIONS(53), 1,
      sym__identifier,
    ACTIONS(55), 1,
      anon_sym_AT,
    ACTIONS(259), 1,
      anon_sym_LPAREN,
    STATE(12), 1,
      aux_sym__friendly_number,
    STATE(50), 1,
      sym_comment,
    STATE(78), 1,
      sym_integer,
    STATE(80), 1,
      sym_identifier,
    STATE(81), 1,
      sym__double_quote_string,
    STATE(100), 1,
      sym__single_quote_string,
    STATE(116), 1,
      sym__expression,
    STATE(220), 1,
      sym__boolean_expression,
    STATE(436), 1,
      sym__alias_identifier,
    STATE(93), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(98), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(107), 2,
      sym__literal_string,
      sym_decimal_number,
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
  [5092] = 31,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(25), 1,
      anon_sym_LPAREN,
    ACTIONS(31), 1,
      anon_sym_DASH,
    ACTIONS(33), 1,
      anon_sym_DQUOTE,
    ACTIONS(35), 1,
      anon_sym_SQUOTE,
    ACTIONS(37), 1,
      anon_sym_f_DQUOTE,
    ACTIONS(39), 1,
      anon_sym_f_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(41), 1,
      anon_sym_s_DQUOTE,
    ACTIONS(43), 1,
      anon_sym_s_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(45), 1,
      sym__natural_number,
    ACTIONS(47), 1,
      anon_sym__,
    ACTIONS(49), 1,
      anon_sym_DOT,
    ACTIONS(51), 1,
      anon_sym_BQUOTE,
    ACTIONS(53), 1,
      sym__identifier,
    ACTIONS(55), 1,
      anon_sym_AT,
    ACTIONS(261), 1,
      anon_sym_RBRACK,
    STATE(12), 1,
      aux_sym__friendly_number,
    STATE(51), 1,
      sym_comment,
    STATE(78), 1,
      sym_integer,
    STATE(80), 1,
      sym_identifier,
    STATE(81), 1,
      sym__double_quote_string,
    STATE(100), 1,
      sym__single_quote_string,
    STATE(263), 1,
      sym_binary_expression,
    STATE(282), 1,
      sym__expression,
    STATE(436), 1,
      sym__alias_identifier,
    STATE(93), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(98), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(107), 2,
      sym__literal_string,
      sym_decimal_number,
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
  [5197] = 30,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(25), 1,
      anon_sym_LPAREN,
    ACTIONS(31), 1,
      anon_sym_DASH,
    ACTIONS(33), 1,
      anon_sym_DQUOTE,
    ACTIONS(35), 1,
      anon_sym_SQUOTE,
    ACTIONS(37), 1,
      anon_sym_f_DQUOTE,
    ACTIONS(39), 1,
      anon_sym_f_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(41), 1,
      anon_sym_s_DQUOTE,
    ACTIONS(43), 1,
      anon_sym_s_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(45), 1,
      sym__natural_number,
    ACTIONS(47), 1,
      anon_sym__,
    ACTIONS(49), 1,
      anon_sym_DOT,
    ACTIONS(51), 1,
      anon_sym_BQUOTE,
    ACTIONS(53), 1,
      sym__identifier,
    ACTIONS(55), 1,
      anon_sym_AT,
    STATE(12), 1,
      aux_sym__friendly_number,
    STATE(52), 1,
      sym_comment,
    STATE(78), 1,
      sym_integer,
    STATE(80), 1,
      sym_identifier,
    STATE(81), 1,
      sym__double_quote_string,
    STATE(100), 1,
      sym__single_quote_string,
    STATE(273), 1,
      sym_binary_expression,
    STATE(275), 1,
      sym__expression,
    STATE(436), 1,
      sym__alias_identifier,
    STATE(93), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(98), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(107), 2,
      sym__literal_string,
      sym_decimal_number,
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
  [5299] = 30,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(25), 1,
      anon_sym_LPAREN,
    ACTIONS(31), 1,
      anon_sym_DASH,
    ACTIONS(33), 1,
      anon_sym_DQUOTE,
    ACTIONS(35), 1,
      anon_sym_SQUOTE,
    ACTIONS(37), 1,
      anon_sym_f_DQUOTE,
    ACTIONS(39), 1,
      anon_sym_f_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(41), 1,
      anon_sym_s_DQUOTE,
    ACTIONS(43), 1,
      anon_sym_s_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(45), 1,
      sym__natural_number,
    ACTIONS(47), 1,
      anon_sym__,
    ACTIONS(49), 1,
      anon_sym_DOT,
    ACTIONS(51), 1,
      anon_sym_BQUOTE,
    ACTIONS(53), 1,
      sym__identifier,
    ACTIONS(55), 1,
      anon_sym_AT,
    STATE(12), 1,
      aux_sym__friendly_number,
    STATE(53), 1,
      sym_comment,
    STATE(78), 1,
      sym_integer,
    STATE(80), 1,
      sym_identifier,
    STATE(81), 1,
      sym__double_quote_string,
    STATE(100), 1,
      sym__single_quote_string,
    STATE(263), 1,
      sym_binary_expression,
    STATE(282), 1,
      sym__expression,
    STATE(436), 1,
      sym__alias_identifier,
    STATE(93), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(98), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(107), 2,
      sym__literal_string,
      sym_decimal_number,
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
  [5401] = 10,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(267), 1,
      anon_sym_DASH,
    ACTIONS(269), 1,
      anon_sym_PLUS,
    ACTIONS(271), 1,
      anon_sym_Z,
    STATE(54), 1,
      sym_comment,
    STATE(99), 1,
      sym_timezone,
    STATE(443), 1,
      sym_direction,
    ACTIONS(265), 4,
      sym_keyword_from,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(263), 29,
      ts_builtin_sym_end,
      sym_keyword_filter,
      sym_keyword_derive,
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
      anon_sym_DASH_GT,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_EQ_EQ,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_QMARK_QMARK,
  [5463] = 7,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(277), 1,
      anon_sym_COLON,
    ACTIONS(279), 1,
      anon_sym_DOT,
    STATE(55), 1,
      sym_comment,
    ACTIONS(275), 5,
      sym_keyword_from,
      anon_sym_EQ,
      anon_sym_DASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(273), 31,
      ts_builtin_sym_end,
      sym_keyword_filter,
      sym_keyword_derive,
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
      anon_sym_DASH_GT,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_PLUS,
      anon_sym_EQ_EQ,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_QMARK_QMARK,
      anon_sym_Z,
  [5519] = 7,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(285), 1,
      anon_sym_COLON,
    ACTIONS(287), 1,
      anon_sym_DOT,
    STATE(56), 1,
      sym_comment,
    ACTIONS(283), 5,
      sym_keyword_from,
      anon_sym_EQ,
      anon_sym_DASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(281), 31,
      ts_builtin_sym_end,
      sym_keyword_filter,
      sym_keyword_derive,
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
      anon_sym_DASH_GT,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_PLUS,
      anon_sym_EQ_EQ,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_QMARK_QMARK,
      anon_sym_Z,
  [5575] = 29,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(25), 1,
      anon_sym_LPAREN,
    ACTIONS(31), 1,
      anon_sym_DASH,
    ACTIONS(33), 1,
      anon_sym_DQUOTE,
    ACTIONS(35), 1,
      anon_sym_SQUOTE,
    ACTIONS(37), 1,
      anon_sym_f_DQUOTE,
    ACTIONS(39), 1,
      anon_sym_f_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(41), 1,
      anon_sym_s_DQUOTE,
    ACTIONS(43), 1,
      anon_sym_s_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(45), 1,
      sym__natural_number,
    ACTIONS(47), 1,
      anon_sym__,
    ACTIONS(49), 1,
      anon_sym_DOT,
    ACTIONS(51), 1,
      anon_sym_BQUOTE,
    ACTIONS(53), 1,
      sym__identifier,
    ACTIONS(55), 1,
      anon_sym_AT,
    STATE(12), 1,
      aux_sym__friendly_number,
    STATE(57), 1,
      sym_comment,
    STATE(78), 1,
      sym_integer,
    STATE(80), 1,
      sym_identifier,
    STATE(81), 1,
      sym__double_quote_string,
    STATE(100), 1,
      sym__single_quote_string,
    STATE(261), 1,
      sym__expression,
    STATE(436), 1,
      sym__alias_identifier,
    STATE(93), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(98), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(107), 2,
      sym__literal_string,
      sym_decimal_number,
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
  [5675] = 29,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(25), 1,
      anon_sym_LPAREN,
    ACTIONS(31), 1,
      anon_sym_DASH,
    ACTIONS(33), 1,
      anon_sym_DQUOTE,
    ACTIONS(35), 1,
      anon_sym_SQUOTE,
    ACTIONS(37), 1,
      anon_sym_f_DQUOTE,
    ACTIONS(39), 1,
      anon_sym_f_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(41), 1,
      anon_sym_s_DQUOTE,
    ACTIONS(43), 1,
      anon_sym_s_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(45), 1,
      sym__natural_number,
    ACTIONS(47), 1,
      anon_sym__,
    ACTIONS(49), 1,
      anon_sym_DOT,
    ACTIONS(51), 1,
      anon_sym_BQUOTE,
    ACTIONS(53), 1,
      sym__identifier,
    ACTIONS(55), 1,
      anon_sym_AT,
    STATE(12), 1,
      aux_sym__friendly_number,
    STATE(58), 1,
      sym_comment,
    STATE(78), 1,
      sym_integer,
    STATE(80), 1,
      sym_identifier,
    STATE(81), 1,
      sym__double_quote_string,
    STATE(100), 1,
      sym__single_quote_string,
    STATE(111), 1,
      sym__expression,
    STATE(436), 1,
      sym__alias_identifier,
    STATE(93), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(98), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(107), 2,
      sym__literal_string,
      sym_decimal_number,
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
  [5775] = 29,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(25), 1,
      anon_sym_LPAREN,
    ACTIONS(31), 1,
      anon_sym_DASH,
    ACTIONS(33), 1,
      anon_sym_DQUOTE,
    ACTIONS(35), 1,
      anon_sym_SQUOTE,
    ACTIONS(37), 1,
      anon_sym_f_DQUOTE,
    ACTIONS(39), 1,
      anon_sym_f_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(41), 1,
      anon_sym_s_DQUOTE,
    ACTIONS(43), 1,
      anon_sym_s_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(45), 1,
      sym__natural_number,
    ACTIONS(47), 1,
      anon_sym__,
    ACTIONS(49), 1,
      anon_sym_DOT,
    ACTIONS(51), 1,
      anon_sym_BQUOTE,
    ACTIONS(53), 1,
      sym__identifier,
    ACTIONS(55), 1,
      anon_sym_AT,
    STATE(12), 1,
      aux_sym__friendly_number,
    STATE(59), 1,
      sym_comment,
    STATE(78), 1,
      sym_integer,
    STATE(80), 1,
      sym_identifier,
    STATE(81), 1,
      sym__double_quote_string,
    STATE(100), 1,
      sym__single_quote_string,
    STATE(115), 1,
      sym__expression,
    STATE(436), 1,
      sym__alias_identifier,
    STATE(93), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(98), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(107), 2,
      sym__literal_string,
      sym_decimal_number,
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
  [5875] = 30,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(25), 1,
      anon_sym_LPAREN,
    ACTIONS(31), 1,
      anon_sym_DASH,
    ACTIONS(33), 1,
      anon_sym_DQUOTE,
    ACTIONS(35), 1,
      anon_sym_SQUOTE,
    ACTIONS(37), 1,
      anon_sym_f_DQUOTE,
    ACTIONS(39), 1,
      anon_sym_f_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(41), 1,
      anon_sym_s_DQUOTE,
    ACTIONS(43), 1,
      anon_sym_s_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(45), 1,
      sym__natural_number,
    ACTIONS(47), 1,
      anon_sym__,
    ACTIONS(49), 1,
      anon_sym_DOT,
    ACTIONS(51), 1,
      anon_sym_BQUOTE,
    ACTIONS(53), 1,
      sym__identifier,
    ACTIONS(55), 1,
      anon_sym_AT,
    STATE(12), 1,
      aux_sym__friendly_number,
    STATE(60), 1,
      sym_comment,
    STATE(78), 1,
      sym_integer,
    STATE(80), 1,
      sym_identifier,
    STATE(81), 1,
      sym__double_quote_string,
    STATE(100), 1,
      sym__single_quote_string,
    STATE(282), 1,
      sym__expression,
    STATE(436), 1,
      sym__alias_identifier,
    STATE(93), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(98), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(107), 2,
      sym__literal_string,
      sym_decimal_number,
    STATE(196), 2,
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
  [5977] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    STATE(61), 1,
      sym_comment,
    ACTIONS(253), 5,
      sym_keyword_from,
      anon_sym_EQ,
      anon_sym_DASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(251), 33,
      ts_builtin_sym_end,
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
      anon_sym_DASH_GT,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_PLUS,
      anon_sym_EQ_EQ,
      anon_sym_DOT,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_QMARK_QMARK,
  [6029] = 29,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(25), 1,
      anon_sym_LPAREN,
    ACTIONS(31), 1,
      anon_sym_DASH,
    ACTIONS(33), 1,
      anon_sym_DQUOTE,
    ACTIONS(35), 1,
      anon_sym_SQUOTE,
    ACTIONS(37), 1,
      anon_sym_f_DQUOTE,
    ACTIONS(39), 1,
      anon_sym_f_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(41), 1,
      anon_sym_s_DQUOTE,
    ACTIONS(43), 1,
      anon_sym_s_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(45), 1,
      sym__natural_number,
    ACTIONS(47), 1,
      anon_sym__,
    ACTIONS(49), 1,
      anon_sym_DOT,
    ACTIONS(51), 1,
      anon_sym_BQUOTE,
    ACTIONS(53), 1,
      sym__identifier,
    ACTIONS(55), 1,
      anon_sym_AT,
    STATE(12), 1,
      aux_sym__friendly_number,
    STATE(62), 1,
      sym_comment,
    STATE(78), 1,
      sym_integer,
    STATE(80), 1,
      sym_identifier,
    STATE(81), 1,
      sym__double_quote_string,
    STATE(100), 1,
      sym__single_quote_string,
    STATE(101), 1,
      sym__expression,
    STATE(436), 1,
      sym__alias_identifier,
    STATE(93), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(98), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(107), 2,
      sym__literal_string,
      sym_decimal_number,
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
  [6129] = 30,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(25), 1,
      anon_sym_LPAREN,
    ACTIONS(31), 1,
      anon_sym_DASH,
    ACTIONS(33), 1,
      anon_sym_DQUOTE,
    ACTIONS(35), 1,
      anon_sym_SQUOTE,
    ACTIONS(37), 1,
      anon_sym_f_DQUOTE,
    ACTIONS(39), 1,
      anon_sym_f_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(41), 1,
      anon_sym_s_DQUOTE,
    ACTIONS(43), 1,
      anon_sym_s_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(45), 1,
      sym__natural_number,
    ACTIONS(47), 1,
      anon_sym__,
    ACTIONS(49), 1,
      anon_sym_DOT,
    ACTIONS(51), 1,
      anon_sym_BQUOTE,
    ACTIONS(53), 1,
      sym__identifier,
    ACTIONS(55), 1,
      anon_sym_AT,
    STATE(12), 1,
      aux_sym__friendly_number,
    STATE(63), 1,
      sym_comment,
    STATE(78), 1,
      sym_integer,
    STATE(80), 1,
      sym_identifier,
    STATE(81), 1,
      sym__double_quote_string,
    STATE(100), 1,
      sym__single_quote_string,
    STATE(278), 1,
      sym_binary_expression,
    STATE(283), 1,
      sym__expression,
    STATE(436), 1,
      sym__alias_identifier,
    STATE(93), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(98), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(107), 2,
      sym__literal_string,
      sym_decimal_number,
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
  [6231] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    STATE(64), 1,
      sym_comment,
    ACTIONS(257), 5,
      sym_keyword_from,
      anon_sym_EQ,
      anon_sym_DASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(255), 33,
      ts_builtin_sym_end,
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
      anon_sym_DASH_GT,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_PLUS,
      anon_sym_EQ_EQ,
      anon_sym_DOT,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_QMARK_QMARK,
  [6283] = 30,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(25), 1,
      anon_sym_LPAREN,
    ACTIONS(31), 1,
      anon_sym_DASH,
    ACTIONS(33), 1,
      anon_sym_DQUOTE,
    ACTIONS(35), 1,
      anon_sym_SQUOTE,
    ACTIONS(37), 1,
      anon_sym_f_DQUOTE,
    ACTIONS(39), 1,
      anon_sym_f_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(41), 1,
      anon_sym_s_DQUOTE,
    ACTIONS(43), 1,
      anon_sym_s_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(45), 1,
      sym__natural_number,
    ACTIONS(47), 1,
      anon_sym__,
    ACTIONS(49), 1,
      anon_sym_DOT,
    ACTIONS(51), 1,
      anon_sym_BQUOTE,
    ACTIONS(53), 1,
      sym__identifier,
    ACTIONS(55), 1,
      anon_sym_AT,
    STATE(12), 1,
      aux_sym__friendly_number,
    STATE(65), 1,
      sym_comment,
    STATE(78), 1,
      sym_integer,
    STATE(80), 1,
      sym_identifier,
    STATE(81), 1,
      sym__double_quote_string,
    STATE(100), 1,
      sym__single_quote_string,
    STATE(276), 1,
      sym_binary_expression,
    STATE(283), 1,
      sym__expression,
    STATE(436), 1,
      sym__alias_identifier,
    STATE(93), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(98), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(107), 2,
      sym__literal_string,
      sym_decimal_number,
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
  [6385] = 29,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(25), 1,
      anon_sym_LPAREN,
    ACTIONS(31), 1,
      anon_sym_DASH,
    ACTIONS(33), 1,
      anon_sym_DQUOTE,
    ACTIONS(35), 1,
      anon_sym_SQUOTE,
    ACTIONS(37), 1,
      anon_sym_f_DQUOTE,
    ACTIONS(39), 1,
      anon_sym_f_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(41), 1,
      anon_sym_s_DQUOTE,
    ACTIONS(43), 1,
      anon_sym_s_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(45), 1,
      sym__natural_number,
    ACTIONS(47), 1,
      anon_sym__,
    ACTIONS(49), 1,
      anon_sym_DOT,
    ACTIONS(51), 1,
      anon_sym_BQUOTE,
    ACTIONS(53), 1,
      sym__identifier,
    ACTIONS(55), 1,
      anon_sym_AT,
    STATE(12), 1,
      aux_sym__friendly_number,
    STATE(66), 1,
      sym_comment,
    STATE(78), 1,
      sym_integer,
    STATE(80), 1,
      sym_identifier,
    STATE(81), 1,
      sym__double_quote_string,
    STATE(100), 1,
      sym__single_quote_string,
    STATE(271), 1,
      sym__expression,
    STATE(436), 1,
      sym__alias_identifier,
    STATE(93), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(98), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(107), 2,
      sym__literal_string,
      sym_decimal_number,
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
  [6485] = 29,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(25), 1,
      anon_sym_LPAREN,
    ACTIONS(31), 1,
      anon_sym_DASH,
    ACTIONS(33), 1,
      anon_sym_DQUOTE,
    ACTIONS(35), 1,
      anon_sym_SQUOTE,
    ACTIONS(37), 1,
      anon_sym_f_DQUOTE,
    ACTIONS(39), 1,
      anon_sym_f_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(41), 1,
      anon_sym_s_DQUOTE,
    ACTIONS(43), 1,
      anon_sym_s_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(45), 1,
      sym__natural_number,
    ACTIONS(47), 1,
      anon_sym__,
    ACTIONS(49), 1,
      anon_sym_DOT,
    ACTIONS(51), 1,
      anon_sym_BQUOTE,
    ACTIONS(53), 1,
      sym__identifier,
    ACTIONS(55), 1,
      anon_sym_AT,
    STATE(12), 1,
      aux_sym__friendly_number,
    STATE(67), 1,
      sym_comment,
    STATE(78), 1,
      sym_integer,
    STATE(80), 1,
      sym_identifier,
    STATE(81), 1,
      sym__double_quote_string,
    STATE(100), 1,
      sym__single_quote_string,
    STATE(272), 1,
      sym__expression,
    STATE(436), 1,
      sym__alias_identifier,
    STATE(93), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(98), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(107), 2,
      sym__literal_string,
      sym_decimal_number,
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
  [6585] = 30,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(25), 1,
      anon_sym_LPAREN,
    ACTIONS(31), 1,
      anon_sym_DASH,
    ACTIONS(33), 1,
      anon_sym_DQUOTE,
    ACTIONS(35), 1,
      anon_sym_SQUOTE,
    ACTIONS(37), 1,
      anon_sym_f_DQUOTE,
    ACTIONS(39), 1,
      anon_sym_f_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(41), 1,
      anon_sym_s_DQUOTE,
    ACTIONS(43), 1,
      anon_sym_s_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(45), 1,
      sym__natural_number,
    ACTIONS(47), 1,
      anon_sym__,
    ACTIONS(49), 1,
      anon_sym_DOT,
    ACTIONS(51), 1,
      anon_sym_BQUOTE,
    ACTIONS(53), 1,
      sym__identifier,
    ACTIONS(55), 1,
      anon_sym_AT,
    STATE(12), 1,
      aux_sym__friendly_number,
    STATE(68), 1,
      sym_comment,
    STATE(78), 1,
      sym_integer,
    STATE(80), 1,
      sym_identifier,
    STATE(81), 1,
      sym__double_quote_string,
    STATE(100), 1,
      sym__single_quote_string,
    STATE(279), 1,
      sym_binary_expression,
    STATE(283), 1,
      sym__expression,
    STATE(436), 1,
      sym__alias_identifier,
    STATE(93), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(98), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(107), 2,
      sym__literal_string,
      sym_decimal_number,
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
  [6687] = 29,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(25), 1,
      anon_sym_LPAREN,
    ACTIONS(31), 1,
      anon_sym_DASH,
    ACTIONS(33), 1,
      anon_sym_DQUOTE,
    ACTIONS(35), 1,
      anon_sym_SQUOTE,
    ACTIONS(37), 1,
      anon_sym_f_DQUOTE,
    ACTIONS(39), 1,
      anon_sym_f_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(41), 1,
      anon_sym_s_DQUOTE,
    ACTIONS(43), 1,
      anon_sym_s_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(45), 1,
      sym__natural_number,
    ACTIONS(47), 1,
      anon_sym__,
    ACTIONS(49), 1,
      anon_sym_DOT,
    ACTIONS(51), 1,
      anon_sym_BQUOTE,
    ACTIONS(53), 1,
      sym__identifier,
    ACTIONS(55), 1,
      anon_sym_AT,
    STATE(12), 1,
      aux_sym__friendly_number,
    STATE(69), 1,
      sym_comment,
    STATE(78), 1,
      sym_integer,
    STATE(80), 1,
      sym_identifier,
    STATE(81), 1,
      sym__double_quote_string,
    STATE(100), 1,
      sym__single_quote_string,
    STATE(110), 1,
      sym__expression,
    STATE(436), 1,
      sym__alias_identifier,
    STATE(93), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(98), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(107), 2,
      sym__literal_string,
      sym_decimal_number,
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
  [6787] = 29,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(25), 1,
      anon_sym_LPAREN,
    ACTIONS(31), 1,
      anon_sym_DASH,
    ACTIONS(33), 1,
      anon_sym_DQUOTE,
    ACTIONS(35), 1,
      anon_sym_SQUOTE,
    ACTIONS(37), 1,
      anon_sym_f_DQUOTE,
    ACTIONS(39), 1,
      anon_sym_f_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(41), 1,
      anon_sym_s_DQUOTE,
    ACTIONS(43), 1,
      anon_sym_s_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(45), 1,
      sym__natural_number,
    ACTIONS(47), 1,
      anon_sym__,
    ACTIONS(49), 1,
      anon_sym_DOT,
    ACTIONS(51), 1,
      anon_sym_BQUOTE,
    ACTIONS(53), 1,
      sym__identifier,
    ACTIONS(55), 1,
      anon_sym_AT,
    STATE(12), 1,
      aux_sym__friendly_number,
    STATE(70), 1,
      sym_comment,
    STATE(78), 1,
      sym_integer,
    STATE(80), 1,
      sym_identifier,
    STATE(81), 1,
      sym__double_quote_string,
    STATE(92), 1,
      sym__expression,
    STATE(100), 1,
      sym__single_quote_string,
    STATE(436), 1,
      sym__alias_identifier,
    STATE(93), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(98), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(107), 2,
      sym__literal_string,
      sym_decimal_number,
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
  [6887] = 29,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(25), 1,
      anon_sym_LPAREN,
    ACTIONS(31), 1,
      anon_sym_DASH,
    ACTIONS(33), 1,
      anon_sym_DQUOTE,
    ACTIONS(35), 1,
      anon_sym_SQUOTE,
    ACTIONS(37), 1,
      anon_sym_f_DQUOTE,
    ACTIONS(39), 1,
      anon_sym_f_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(41), 1,
      anon_sym_s_DQUOTE,
    ACTIONS(43), 1,
      anon_sym_s_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(45), 1,
      sym__natural_number,
    ACTIONS(47), 1,
      anon_sym__,
    ACTIONS(49), 1,
      anon_sym_DOT,
    ACTIONS(51), 1,
      anon_sym_BQUOTE,
    ACTIONS(53), 1,
      sym__identifier,
    ACTIONS(55), 1,
      anon_sym_AT,
    STATE(12), 1,
      aux_sym__friendly_number,
    STATE(71), 1,
      sym_comment,
    STATE(78), 1,
      sym_integer,
    STATE(80), 1,
      sym_identifier,
    STATE(81), 1,
      sym__double_quote_string,
    STATE(100), 1,
      sym__single_quote_string,
    STATE(105), 1,
      sym__expression,
    STATE(436), 1,
      sym__alias_identifier,
    STATE(93), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(98), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(107), 2,
      sym__literal_string,
      sym_decimal_number,
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
  [6987] = 29,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(25), 1,
      anon_sym_LPAREN,
    ACTIONS(31), 1,
      anon_sym_DASH,
    ACTIONS(33), 1,
      anon_sym_DQUOTE,
    ACTIONS(35), 1,
      anon_sym_SQUOTE,
    ACTIONS(37), 1,
      anon_sym_f_DQUOTE,
    ACTIONS(39), 1,
      anon_sym_f_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(41), 1,
      anon_sym_s_DQUOTE,
    ACTIONS(43), 1,
      anon_sym_s_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(45), 1,
      sym__natural_number,
    ACTIONS(47), 1,
      anon_sym__,
    ACTIONS(49), 1,
      anon_sym_DOT,
    ACTIONS(51), 1,
      anon_sym_BQUOTE,
    ACTIONS(53), 1,
      sym__identifier,
    ACTIONS(55), 1,
      anon_sym_AT,
    STATE(12), 1,
      aux_sym__friendly_number,
    STATE(72), 1,
      sym_comment,
    STATE(78), 1,
      sym_integer,
    STATE(80), 1,
      sym_identifier,
    STATE(81), 1,
      sym__double_quote_string,
    STATE(100), 1,
      sym__single_quote_string,
    STATE(103), 1,
      sym__expression,
    STATE(436), 1,
      sym__alias_identifier,
    STATE(93), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(98), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(107), 2,
      sym__literal_string,
      sym_decimal_number,
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
  [7087] = 21,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(291), 1,
      anon_sym_DQUOTE,
    ACTIONS(293), 1,
      anon_sym_SQUOTE,
    ACTIONS(295), 1,
      sym__natural_number,
    ACTIONS(297), 1,
      anon_sym__,
    ACTIONS(299), 1,
      anon_sym_DOT,
    ACTIONS(301), 1,
      anon_sym_BQUOTE,
    ACTIONS(303), 1,
      sym__identifier,
    STATE(73), 1,
      sym_comment,
    STATE(146), 1,
      aux_sym_function_call_repeat1,
    STATE(244), 1,
      sym_identifier,
    STATE(255), 1,
      aux_sym__friendly_number,
    STATE(259), 1,
      sym_integer,
    STATE(260), 1,
      sym_literal,
    STATE(265), 1,
      sym__call_parameter,
    STATE(256), 2,
      sym__double_quote_string,
      sym__single_quote_string,
    STATE(269), 2,
      sym__literal_string,
      sym_decimal_number,
    ACTIONS(289), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    ACTIONS(79), 4,
      sym_keyword_and,
      sym_keyword_or,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(77), 13,
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
  [7170] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    STATE(74), 1,
      sym_comment,
    ACTIONS(307), 5,
      sym_keyword_from,
      anon_sym_EQ,
      anon_sym_DASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(305), 32,
      ts_builtin_sym_end,
      sym_keyword_filter,
      sym_keyword_derive,
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
      anon_sym_DASH_GT,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_PLUS,
      anon_sym_EQ_EQ,
      anon_sym_DOT,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_QMARK_QMARK,
  [7221] = 22,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(83), 1,
      anon_sym_DQUOTE,
    ACTIONS(85), 1,
      anon_sym_SQUOTE,
    ACTIONS(87), 1,
      sym__natural_number,
    ACTIONS(89), 1,
      anon_sym__,
    ACTIONS(91), 1,
      anon_sym_DOT,
    ACTIONS(93), 1,
      anon_sym_BQUOTE,
    ACTIONS(95), 1,
      sym__identifier,
    ACTIONS(309), 1,
      ts_builtin_sym_end,
    ACTIONS(313), 1,
      anon_sym_DASH,
    STATE(75), 1,
      sym_comment,
    STATE(77), 1,
      aux_sym_function_call_repeat1,
    STATE(122), 1,
      sym_identifier,
    STATE(123), 1,
      aux_sym__friendly_number,
    STATE(124), 1,
      sym_integer,
    STATE(126), 1,
      sym_literal,
    STATE(133), 1,
      sym__call_parameter,
    STATE(137), 2,
      sym__double_quote_string,
      sym__single_quote_string,
    STATE(138), 2,
      sym__literal_string,
      sym_decimal_number,
    ACTIONS(81), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    ACTIONS(311), 15,
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
  [7306] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(319), 1,
      anon_sym_DOT,
    STATE(76), 1,
      sym_comment,
    ACTIONS(317), 5,
      sym_keyword_from,
      anon_sym_EQ,
      anon_sym_DASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(315), 31,
      ts_builtin_sym_end,
      sym_keyword_filter,
      sym_keyword_derive,
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
      anon_sym_DASH_GT,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_PLUS,
      anon_sym_EQ_EQ,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_QMARK_QMARK,
      anon_sym_Z,
  [7359] = 21,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(321), 1,
      ts_builtin_sym_end,
    ACTIONS(328), 1,
      anon_sym_DASH,
    ACTIONS(331), 1,
      anon_sym_DQUOTE,
    ACTIONS(334), 1,
      anon_sym_SQUOTE,
    ACTIONS(337), 1,
      sym__natural_number,
    ACTIONS(340), 1,
      anon_sym__,
    ACTIONS(343), 1,
      anon_sym_DOT,
    ACTIONS(346), 1,
      anon_sym_BQUOTE,
    ACTIONS(349), 1,
      sym__identifier,
    STATE(122), 1,
      sym_identifier,
    STATE(123), 1,
      aux_sym__friendly_number,
    STATE(124), 1,
      sym_integer,
    STATE(126), 1,
      sym_literal,
    STATE(133), 1,
      sym__call_parameter,
    STATE(77), 2,
      sym_comment,
      aux_sym_function_call_repeat1,
    STATE(137), 2,
      sym__double_quote_string,
      sym__single_quote_string,
    STATE(138), 2,
      sym__literal_string,
      sym_decimal_number,
    ACTIONS(325), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    ACTIONS(323), 15,
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
  [7442] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(356), 1,
      anon_sym_DOT,
    STATE(78), 1,
      sym_comment,
    ACTIONS(354), 5,
      sym_keyword_from,
      anon_sym_EQ,
      anon_sym_DASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(352), 30,
      ts_builtin_sym_end,
      sym_keyword_filter,
      sym_keyword_derive,
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
      anon_sym_DASH_GT,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_PLUS,
      anon_sym_EQ_EQ,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_QMARK_QMARK,
  [7494] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    STATE(79), 1,
      sym_comment,
    ACTIONS(317), 5,
      sym_keyword_from,
      anon_sym_EQ,
      anon_sym_DASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(315), 31,
      ts_builtin_sym_end,
      sym_keyword_filter,
      sym_keyword_derive,
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
      anon_sym_DASH_GT,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_PLUS,
      anon_sym_EQ_EQ,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_QMARK_QMARK,
      anon_sym_Z,
  [7544] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(358), 1,
      anon_sym_DOT,
    STATE(80), 1,
      sym_comment,
    ACTIONS(79), 5,
      sym_keyword_from,
      anon_sym_EQ,
      anon_sym_DASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(77), 30,
      ts_builtin_sym_end,
      sym_keyword_filter,
      sym_keyword_derive,
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
      anon_sym_DASH_GT,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_PLUS,
      anon_sym_EQ_EQ,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_QMARK_QMARK,
  [7596] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(364), 1,
      anon_sym_DOT,
    STATE(81), 1,
      sym_comment,
    ACTIONS(362), 5,
      sym_keyword_from,
      anon_sym_EQ,
      anon_sym_DASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(360), 30,
      ts_builtin_sym_end,
      sym_keyword_filter,
      sym_keyword_derive,
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
      anon_sym_DASH_GT,
      anon_sym_COMMA,
      anon_sym_RBRACK,
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
    ACTIONS(370), 1,
      sym__natural_number,
    STATE(82), 1,
      sym_comment,
    ACTIONS(368), 5,
      sym_keyword_from,
      anon_sym_EQ,
      anon_sym_DASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(366), 30,
      ts_builtin_sym_end,
      sym_keyword_filter,
      sym_keyword_derive,
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
      anon_sym_DASH_GT,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_PLUS,
      anon_sym_EQ_EQ,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_QMARK_QMARK,
  [7700] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    STATE(83), 1,
      sym_comment,
    ACTIONS(275), 5,
      sym_keyword_from,
      anon_sym_EQ,
      anon_sym_DASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(273), 31,
      ts_builtin_sym_end,
      sym_keyword_filter,
      sym_keyword_derive,
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
      anon_sym_DASH_GT,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_PLUS,
      anon_sym_EQ_EQ,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_QMARK_QMARK,
      anon_sym_Z,
  [7750] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    STATE(84), 1,
      sym_comment,
    ACTIONS(374), 5,
      sym_keyword_from,
      anon_sym_EQ,
      anon_sym_DASH,
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
      anon_sym_DASH_GT,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_PLUS,
      anon_sym_EQ_EQ,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_QMARK_QMARK,
      anon_sym_Z,
  [7800] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(380), 1,
      anon_sym_T,
    STATE(85), 1,
      sym_comment,
    ACTIONS(378), 5,
      sym_keyword_from,
      anon_sym_EQ,
      anon_sym_DASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(376), 30,
      ts_builtin_sym_end,
      sym_keyword_filter,
      sym_keyword_derive,
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
      anon_sym_DASH_GT,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_PLUS,
      anon_sym_EQ_EQ,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_QMARK_QMARK,
  [7852] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    STATE(86), 1,
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
    ACTIONS(257), 20,
      sym_keyword_filter,
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
  [7901] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    STATE(87), 1,
      sym_comment,
    ACTIONS(384), 5,
      sym_keyword_from,
      anon_sym_EQ,
      anon_sym_DASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(382), 30,
      ts_builtin_sym_end,
      sym_keyword_filter,
      sym_keyword_derive,
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
      anon_sym_DASH_GT,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_PLUS,
      anon_sym_EQ_EQ,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_QMARK_QMARK,
  [7950] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    STATE(88), 1,
      sym_comment,
    ACTIONS(388), 5,
      sym_keyword_from,
      anon_sym_EQ,
      anon_sym_DASH,
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
      sym_keyword_func,
      sym_keyword_let,
      sym_keyword_from_text,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_DASH_GT,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_PLUS,
      anon_sym_EQ_EQ,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_QMARK_QMARK,
  [7999] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    STATE(89), 1,
      sym_comment,
    ACTIONS(392), 5,
      sym_keyword_from,
      anon_sym_EQ,
      anon_sym_DASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(390), 30,
      ts_builtin_sym_end,
      sym_keyword_filter,
      sym_keyword_derive,
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
      anon_sym_DASH_GT,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_PLUS,
      anon_sym_EQ_EQ,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_QMARK_QMARK,
  [8048] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    STATE(90), 1,
      sym_comment,
    ACTIONS(396), 5,
      sym_keyword_from,
      anon_sym_EQ,
      anon_sym_DASH,
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
      sym_keyword_func,
      sym_keyword_let,
      sym_keyword_from_text,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_DASH_GT,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_PLUS,
      anon_sym_EQ_EQ,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_QMARK_QMARK,
  [8097] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    STATE(91), 1,
      sym_comment,
    ACTIONS(400), 5,
      sym_keyword_from,
      anon_sym_EQ,
      anon_sym_DASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(398), 30,
      ts_builtin_sym_end,
      sym_keyword_filter,
      sym_keyword_derive,
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
      anon_sym_DASH_GT,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_PLUS,
      anon_sym_EQ_EQ,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_QMARK_QMARK,
  [8146] = 8,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(406), 1,
      anon_sym_DASH,
    ACTIONS(408), 1,
      anon_sym_PLUS,
    STATE(92), 1,
      sym_comment,
    ACTIONS(410), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(404), 4,
      sym_keyword_from,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(402), 27,
      ts_builtin_sym_end,
      sym_keyword_filter,
      sym_keyword_derive,
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
      anon_sym_DASH_GT,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_QMARK_QMARK,
  [8201] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    STATE(93), 1,
      sym_comment,
    ACTIONS(414), 5,
      sym_keyword_from,
      anon_sym_EQ,
      anon_sym_DASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(412), 30,
      ts_builtin_sym_end,
      sym_keyword_filter,
      sym_keyword_derive,
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
      anon_sym_DASH_GT,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_PLUS,
      anon_sym_EQ_EQ,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_QMARK_QMARK,
  [8250] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    STATE(94), 1,
      sym_comment,
    ACTIONS(418), 5,
      sym_keyword_from,
      anon_sym_EQ,
      anon_sym_DASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(416), 30,
      ts_builtin_sym_end,
      sym_keyword_filter,
      sym_keyword_derive,
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
      anon_sym_DASH_GT,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_PLUS,
      anon_sym_EQ_EQ,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_QMARK_QMARK,
  [8299] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    STATE(95), 1,
      sym_comment,
    ACTIONS(422), 5,
      sym_keyword_from,
      anon_sym_EQ,
      anon_sym_DASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(420), 30,
      ts_builtin_sym_end,
      sym_keyword_filter,
      sym_keyword_derive,
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
      anon_sym_DASH_GT,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_PLUS,
      anon_sym_EQ_EQ,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_QMARK_QMARK,
  [8348] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    STATE(96), 1,
      sym_comment,
    ACTIONS(426), 5,
      sym_keyword_from,
      anon_sym_EQ,
      anon_sym_DASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(424), 30,
      ts_builtin_sym_end,
      sym_keyword_filter,
      sym_keyword_derive,
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
      anon_sym_DASH_GT,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_PLUS,
      anon_sym_EQ_EQ,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_QMARK_QMARK,
  [8397] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    STATE(97), 1,
      sym_comment,
    ACTIONS(430), 5,
      sym_keyword_from,
      anon_sym_EQ,
      anon_sym_DASH,
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
      sym_keyword_and,
      sym_keyword_or,
      sym_keyword_func,
      sym_keyword_let,
      sym_keyword_from_text,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_DASH_GT,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_PLUS,
      anon_sym_EQ_EQ,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_QMARK_QMARK,
  [8446] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    STATE(98), 1,
      sym_comment,
    ACTIONS(434), 5,
      sym_keyword_from,
      anon_sym_EQ,
      anon_sym_DASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(432), 30,
      ts_builtin_sym_end,
      sym_keyword_filter,
      sym_keyword_derive,
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
      anon_sym_DASH_GT,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_PLUS,
      anon_sym_EQ_EQ,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_QMARK_QMARK,
  [8495] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    STATE(99), 1,
      sym_comment,
    ACTIONS(438), 5,
      sym_keyword_from,
      anon_sym_EQ,
      anon_sym_DASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(436), 30,
      ts_builtin_sym_end,
      sym_keyword_filter,
      sym_keyword_derive,
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
      anon_sym_DASH_GT,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_PLUS,
      anon_sym_EQ_EQ,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_QMARK_QMARK,
  [8544] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    STATE(100), 1,
      sym_comment,
    ACTIONS(362), 5,
      sym_keyword_from,
      anon_sym_EQ,
      anon_sym_DASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(360), 30,
      ts_builtin_sym_end,
      sym_keyword_filter,
      sym_keyword_derive,
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
      anon_sym_DASH_GT,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_PLUS,
      anon_sym_EQ_EQ,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_QMARK_QMARK,
  [8593] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    STATE(101), 1,
      sym_comment,
    ACTIONS(404), 5,
      sym_keyword_from,
      anon_sym_EQ,
      anon_sym_DASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(402), 30,
      ts_builtin_sym_end,
      sym_keyword_filter,
      sym_keyword_derive,
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
      anon_sym_DASH_GT,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_PLUS,
      anon_sym_EQ_EQ,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_QMARK_QMARK,
  [8642] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    STATE(102), 1,
      sym_comment,
    ACTIONS(442), 5,
      sym_keyword_from,
      anon_sym_EQ,
      anon_sym_DASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(440), 30,
      ts_builtin_sym_end,
      sym_keyword_filter,
      sym_keyword_derive,
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
      anon_sym_DASH_GT,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_PLUS,
      anon_sym_EQ_EQ,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_QMARK_QMARK,
  [8691] = 7,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(406), 1,
      anon_sym_DASH,
    ACTIONS(408), 1,
      anon_sym_PLUS,
    STATE(103), 1,
      sym_comment,
    ACTIONS(404), 4,
      sym_keyword_from,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(402), 29,
      ts_builtin_sym_end,
      sym_keyword_filter,
      sym_keyword_derive,
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
      anon_sym_DASH_GT,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_EQ_EQ,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_QMARK_QMARK,
  [8744] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    STATE(104), 1,
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
    ACTIONS(253), 20,
      sym_keyword_filter,
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
  [8793] = 10,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(406), 1,
      anon_sym_DASH,
    ACTIONS(408), 1,
      anon_sym_PLUS,
    STATE(105), 1,
      sym_comment,
    ACTIONS(404), 2,
      sym_keyword_from,
      anon_sym_EQ,
    ACTIONS(410), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(446), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(444), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(402), 23,
      ts_builtin_sym_end,
      sym_keyword_filter,
      sym_keyword_derive,
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
      anon_sym_DASH_GT,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_QMARK_QMARK,
  [8852] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    STATE(106), 1,
      sym_comment,
    ACTIONS(368), 5,
      sym_keyword_from,
      anon_sym_EQ,
      anon_sym_DASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(366), 30,
      ts_builtin_sym_end,
      sym_keyword_filter,
      sym_keyword_derive,
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
      anon_sym_DASH_GT,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_PLUS,
      anon_sym_EQ_EQ,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_QMARK_QMARK,
  [8901] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    STATE(107), 1,
      sym_comment,
    ACTIONS(354), 5,
      sym_keyword_from,
      anon_sym_EQ,
      anon_sym_DASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(352), 30,
      ts_builtin_sym_end,
      sym_keyword_filter,
      sym_keyword_derive,
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
      anon_sym_DASH_GT,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_PLUS,
      anon_sym_EQ_EQ,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_QMARK_QMARK,
  [8950] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    STATE(108), 1,
      sym_comment,
    ACTIONS(450), 5,
      sym_keyword_from,
      anon_sym_EQ,
      anon_sym_DASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(448), 30,
      ts_builtin_sym_end,
      sym_keyword_filter,
      sym_keyword_derive,
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
      anon_sym_DASH_GT,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_PLUS,
      anon_sym_EQ_EQ,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_QMARK_QMARK,
  [8999] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    STATE(109), 1,
      sym_comment,
    ACTIONS(454), 5,
      sym_keyword_from,
      anon_sym_EQ,
      anon_sym_DASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(452), 30,
      ts_builtin_sym_end,
      sym_keyword_filter,
      sym_keyword_derive,
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
      anon_sym_DASH_GT,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_PLUS,
      anon_sym_EQ_EQ,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_QMARK_QMARK,
  [9048] = 11,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(406), 1,
      anon_sym_DASH,
    ACTIONS(408), 1,
      anon_sym_PLUS,
    ACTIONS(456), 1,
      anon_sym_QMARK_QMARK,
    STATE(110), 1,
      sym_comment,
    ACTIONS(404), 2,
      sym_keyword_from,
      anon_sym_EQ,
    ACTIONS(410), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(446), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(444), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(402), 22,
      ts_builtin_sym_end,
      sym_keyword_filter,
      sym_keyword_derive,
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
      anon_sym_DASH_GT,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [9109] = 12,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(406), 1,
      anon_sym_DASH,
    ACTIONS(408), 1,
      anon_sym_PLUS,
    ACTIONS(456), 1,
      anon_sym_QMARK_QMARK,
    ACTIONS(458), 1,
      sym_keyword_and,
    STATE(111), 1,
      sym_comment,
    ACTIONS(404), 2,
      sym_keyword_from,
      anon_sym_EQ,
    ACTIONS(410), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(446), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(444), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(402), 21,
      ts_builtin_sym_end,
      sym_keyword_filter,
      sym_keyword_derive,
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
      anon_sym_DASH_GT,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [9172] = 21,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(321), 1,
      anon_sym_RPAREN,
    ACTIONS(463), 1,
      anon_sym_DASH,
    ACTIONS(466), 1,
      anon_sym_DQUOTE,
    ACTIONS(469), 1,
      anon_sym_SQUOTE,
    ACTIONS(472), 1,
      sym__natural_number,
    ACTIONS(475), 1,
      anon_sym__,
    ACTIONS(478), 1,
      anon_sym_DOT,
    ACTIONS(481), 1,
      anon_sym_BQUOTE,
    ACTIONS(484), 1,
      sym__identifier,
    STATE(148), 1,
      aux_sym__friendly_number,
    STATE(149), 1,
      sym_identifier,
    STATE(155), 1,
      sym__call_parameter,
    STATE(156), 1,
      sym_literal,
    STATE(158), 1,
      sym_integer,
    STATE(112), 2,
      sym_comment,
      aux_sym_function_call_repeat1,
    STATE(154), 2,
      sym__double_quote_string,
      sym__single_quote_string,
    STATE(164), 2,
      sym__literal_string,
      sym_decimal_number,
    ACTIONS(460), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    ACTIONS(323), 11,
      sym_keyword_filter,
      sym_keyword_derive,
      sym_keyword_group,
      sym_keyword_aggregate,
      sym_keyword_sort,
      sym_keyword_take,
      sym_keyword_join,
      sym_keyword_select,
      sym_keyword_append,
      sym_keyword_remove,
      sym_keyword_intersect,
  [9251] = 22,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(99), 1,
      anon_sym_DQUOTE,
    ACTIONS(101), 1,
      anon_sym_SQUOTE,
    ACTIONS(103), 1,
      sym__natural_number,
    ACTIONS(105), 1,
      anon_sym__,
    ACTIONS(107), 1,
      anon_sym_DOT,
    ACTIONS(109), 1,
      anon_sym_BQUOTE,
    ACTIONS(111), 1,
      sym__identifier,
    ACTIONS(309), 1,
      anon_sym_RPAREN,
    ACTIONS(487), 1,
      anon_sym_DASH,
    STATE(112), 1,
      aux_sym_function_call_repeat1,
    STATE(113), 1,
      sym_comment,
    STATE(148), 1,
      aux_sym__friendly_number,
    STATE(149), 1,
      sym_identifier,
    STATE(155), 1,
      sym__call_parameter,
    STATE(156), 1,
      sym_literal,
    STATE(158), 1,
      sym_integer,
    STATE(154), 2,
      sym__double_quote_string,
      sym__single_quote_string,
    STATE(164), 2,
      sym__literal_string,
      sym_decimal_number,
    ACTIONS(97), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    ACTIONS(311), 11,
      sym_keyword_filter,
      sym_keyword_derive,
      sym_keyword_group,
      sym_keyword_aggregate,
      sym_keyword_sort,
      sym_keyword_take,
      sym_keyword_join,
      sym_keyword_select,
      sym_keyword_append,
      sym_keyword_remove,
      sym_keyword_intersect,
  [9332] = 12,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(456), 1,
      anon_sym_QMARK_QMARK,
    ACTIONS(458), 1,
      sym_keyword_and,
    ACTIONS(491), 1,
      sym_keyword_from,
    ACTIONS(493), 1,
      sym_keyword_or,
    STATE(114), 1,
      sym_comment,
    ACTIONS(408), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(410), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(446), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(444), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(489), 19,
      ts_builtin_sym_end,
      sym_keyword_filter,
      sym_keyword_derive,
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
  [9393] = 12,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(456), 1,
      anon_sym_QMARK_QMARK,
    ACTIONS(458), 1,
      sym_keyword_and,
    ACTIONS(493), 1,
      sym_keyword_or,
    ACTIONS(497), 1,
      sym_keyword_from,
    STATE(115), 1,
      sym_comment,
    ACTIONS(408), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(410), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(446), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(444), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(495), 19,
      ts_builtin_sym_end,
      sym_keyword_filter,
      sym_keyword_derive,
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
  [9454] = 12,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(456), 1,
      anon_sym_QMARK_QMARK,
    ACTIONS(458), 1,
      sym_keyword_and,
    ACTIONS(493), 1,
      sym_keyword_or,
    ACTIONS(501), 1,
      sym_keyword_from,
    STATE(116), 1,
      sym_comment,
    ACTIONS(408), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(410), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(446), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(444), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(499), 16,
      ts_builtin_sym_end,
      sym_keyword_filter,
      sym_keyword_derive,
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
  [9512] = 13,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(456), 1,
      anon_sym_QMARK_QMARK,
    ACTIONS(458), 1,
      sym_keyword_and,
    ACTIONS(493), 1,
      sym_keyword_or,
    ACTIONS(505), 1,
      sym_keyword_from,
    ACTIONS(507), 1,
      anon_sym_EQ,
    STATE(117), 1,
      sym_comment,
    ACTIONS(408), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(410), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(446), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(444), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(503), 15,
      ts_builtin_sym_end,
      sym_keyword_filter,
      sym_keyword_derive,
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
  [9572] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    STATE(118), 1,
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
    ACTIONS(257), 20,
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
  [9614] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    STATE(119), 1,
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
    ACTIONS(253), 20,
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
  [9656] = 7,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(509), 1,
      sym__natural_number,
    ACTIONS(512), 1,
      anon_sym__,
    STATE(120), 2,
      aux_sym__friendly_number,
      sym_comment,
    ACTIONS(121), 6,
      ts_builtin_sym_end,
      anon_sym_DASH,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      anon_sym_DOT,
      anon_sym_BQUOTE,
    ACTIONS(123), 19,
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
  [9702] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    STATE(120), 1,
      aux_sym__friendly_number,
    STATE(121), 1,
      sym_comment,
    ACTIONS(117), 7,
      ts_builtin_sym_end,
      anon_sym_DASH,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym__natural_number,
      anon_sym_DOT,
      anon_sym_BQUOTE,
    ACTIONS(119), 20,
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
  [9746] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(519), 1,
      anon_sym_COLON,
    STATE(122), 1,
      sym_comment,
    ACTIONS(515), 7,
      ts_builtin_sym_end,
      anon_sym_DASH,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym__natural_number,
      anon_sym_DOT,
      anon_sym_BQUOTE,
    ACTIONS(517), 20,
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
  [9790] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    STATE(120), 1,
      aux_sym__friendly_number,
    STATE(123), 1,
      sym_comment,
    ACTIONS(113), 7,
      ts_builtin_sym_end,
      anon_sym_DASH,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym__natural_number,
      anon_sym_DOT,
      anon_sym_BQUOTE,
    ACTIONS(115), 20,
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
  [9834] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    STATE(124), 1,
      sym_comment,
    ACTIONS(352), 7,
      ts_builtin_sym_end,
      anon_sym_DASH,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym__natural_number,
      anon_sym_DOT,
      anon_sym_BQUOTE,
    ACTIONS(354), 20,
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
  [9875] = 17,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(523), 1,
      sym_keyword_from,
    ACTIONS(525), 1,
      sym_keyword_filter,
    ACTIONS(527), 1,
      sym_keyword_derive,
    ACTIONS(529), 1,
      sym_keyword_group,
    ACTIONS(531), 1,
      sym_keyword_aggregate,
    ACTIONS(533), 1,
      sym_keyword_sort,
    ACTIONS(535), 1,
      sym_keyword_take,
    ACTIONS(537), 1,
      sym_keyword_join,
    ACTIONS(539), 1,
      sym_keyword_select,
    STATE(125), 1,
      sym_comment,
    STATE(143), 1,
      aux_sym_transforms_repeat1,
    STATE(311), 1,
      sym_transforms,
    ACTIONS(541), 3,
      sym_keyword_append,
      sym_keyword_remove,
      sym_keyword_intersect,
    ACTIONS(521), 4,
      ts_builtin_sym_end,
      sym_keyword_func,
      sym_keyword_let,
      sym_keyword_from_text,
    STATE(211), 9,
      sym_derives,
      sym_append,
      sym_filter,
      sym_aggregate,
      sym_sorts,
      sym_takes,
      sym_group,
      sym_joins,
      sym_select,
  [9940] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    STATE(126), 1,
      sym_comment,
    ACTIONS(515), 7,
      ts_builtin_sym_end,
      anon_sym_DASH,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym__natural_number,
      anon_sym_DOT,
      anon_sym_BQUOTE,
    ACTIONS(517), 20,
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
  [9981] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    STATE(127), 1,
      sym_comment,
    ACTIONS(128), 7,
      ts_builtin_sym_end,
      anon_sym_DASH,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym__natural_number,
      anon_sym_DOT,
      anon_sym_BQUOTE,
    ACTIONS(130), 20,
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
  [10022] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    STATE(128), 1,
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
  [10063] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    STATE(129), 1,
      sym_comment,
    ACTIONS(416), 7,
      ts_builtin_sym_end,
      anon_sym_DASH,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym__natural_number,
      anon_sym_DOT,
      anon_sym_BQUOTE,
    ACTIONS(418), 20,
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
  [10104] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    STATE(130), 1,
      sym_comment,
    ACTIONS(305), 7,
      ts_builtin_sym_end,
      anon_sym_DASH,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym__natural_number,
      anon_sym_DOT,
      anon_sym_BQUOTE,
    ACTIONS(307), 20,
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
  [10145] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    STATE(131), 1,
      sym_comment,
    ACTIONS(420), 7,
      ts_builtin_sym_end,
      anon_sym_DASH,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym__natural_number,
      anon_sym_DOT,
      anon_sym_BQUOTE,
    ACTIONS(422), 20,
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
  [10186] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    STATE(132), 1,
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
  [10227] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    STATE(133), 1,
      sym_comment,
    ACTIONS(543), 7,
      ts_builtin_sym_end,
      anon_sym_DASH,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym__natural_number,
      anon_sym_DOT,
      anon_sym_BQUOTE,
    ACTIONS(545), 20,
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
  [10268] = 17,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(525), 1,
      sym_keyword_filter,
    ACTIONS(527), 1,
      sym_keyword_derive,
    ACTIONS(529), 1,
      sym_keyword_group,
    ACTIONS(531), 1,
      sym_keyword_aggregate,
    ACTIONS(533), 1,
      sym_keyword_sort,
    ACTIONS(535), 1,
      sym_keyword_take,
    ACTIONS(537), 1,
      sym_keyword_join,
    ACTIONS(539), 1,
      sym_keyword_select,
    ACTIONS(549), 1,
      sym_keyword_from,
    STATE(134), 1,
      sym_comment,
    STATE(143), 1,
      aux_sym_transforms_repeat1,
    STATE(328), 1,
      sym_transforms,
    ACTIONS(541), 3,
      sym_keyword_append,
      sym_keyword_remove,
      sym_keyword_intersect,
    ACTIONS(547), 4,
      ts_builtin_sym_end,
      sym_keyword_func,
      sym_keyword_let,
      sym_keyword_from_text,
    STATE(211), 9,
      sym_derives,
      sym_append,
      sym_filter,
      sym_aggregate,
      sym_sorts,
      sym_takes,
      sym_group,
      sym_joins,
      sym_select,
  [10333] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    STATE(135), 1,
      sym_comment,
    ACTIONS(551), 7,
      ts_builtin_sym_end,
      anon_sym_DASH,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym__natural_number,
      anon_sym_DOT,
      anon_sym_BQUOTE,
    ACTIONS(553), 20,
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
  [10374] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    STATE(136), 1,
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
  [10415] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    STATE(137), 1,
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
  [10456] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    STATE(138), 1,
      sym_comment,
    ACTIONS(352), 7,
      ts_builtin_sym_end,
      anon_sym_DASH,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym__natural_number,
      anon_sym_DOT,
      anon_sym_BQUOTE,
    ACTIONS(354), 20,
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
  [10497] = 12,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(456), 1,
      anon_sym_QMARK_QMARK,
    ACTIONS(458), 1,
      sym_keyword_and,
    ACTIONS(493), 1,
      sym_keyword_or,
    ACTIONS(555), 1,
      anon_sym_EQ,
    STATE(139), 1,
      sym_comment,
    ACTIONS(408), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(410), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(446), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(444), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(503), 12,
      sym_keyword_filter,
      sym_keyword_derive,
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
  [10551] = 15,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(559), 1,
      sym_keyword_from,
    ACTIONS(561), 1,
      sym_keyword_filter,
    ACTIONS(564), 1,
      sym_keyword_derive,
    ACTIONS(567), 1,
      sym_keyword_group,
    ACTIONS(570), 1,
      sym_keyword_aggregate,
    ACTIONS(573), 1,
      sym_keyword_sort,
    ACTIONS(576), 1,
      sym_keyword_take,
    ACTIONS(579), 1,
      sym_keyword_join,
    ACTIONS(582), 1,
      sym_keyword_select,
    STATE(140), 2,
      sym_comment,
      aux_sym_transforms_repeat1,
    ACTIONS(585), 3,
      sym_keyword_append,
      sym_keyword_remove,
      sym_keyword_intersect,
    ACTIONS(557), 4,
      ts_builtin_sym_end,
      sym_keyword_func,
      sym_keyword_let,
      sym_keyword_from_text,
    STATE(211), 9,
      sym_derives,
      sym_append,
      sym_filter,
      sym_aggregate,
      sym_sorts,
      sym_takes,
      sym_group,
      sym_joins,
      sym_select,
  [10611] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(123), 1,
      sym_keyword_from,
    ACTIONS(588), 2,
      sym__natural_number,
      anon_sym__,
    STATE(141), 2,
      aux_sym__friendly_number,
      sym_comment,
    ACTIONS(121), 22,
      ts_builtin_sym_end,
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
  [10653] = 7,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(119), 1,
      sym_keyword_from,
    STATE(141), 1,
      aux_sym__friendly_number,
    STATE(142), 1,
      sym_comment,
    ACTIONS(591), 2,
      sym__natural_number,
      anon_sym__,
    ACTIONS(117), 22,
      ts_builtin_sym_end,
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
  [10697] = 16,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(525), 1,
      sym_keyword_filter,
    ACTIONS(527), 1,
      sym_keyword_derive,
    ACTIONS(529), 1,
      sym_keyword_group,
    ACTIONS(531), 1,
      sym_keyword_aggregate,
    ACTIONS(533), 1,
      sym_keyword_sort,
    ACTIONS(535), 1,
      sym_keyword_take,
    ACTIONS(537), 1,
      sym_keyword_join,
    ACTIONS(539), 1,
      sym_keyword_select,
    ACTIONS(595), 1,
      sym_keyword_from,
    STATE(140), 1,
      aux_sym_transforms_repeat1,
    STATE(143), 1,
      sym_comment,
    ACTIONS(541), 3,
      sym_keyword_append,
      sym_keyword_remove,
      sym_keyword_intersect,
    ACTIONS(593), 4,
      ts_builtin_sym_end,
      sym_keyword_func,
      sym_keyword_let,
      sym_keyword_from_text,
    STATE(211), 9,
      sym_derives,
      sym_append,
      sym_filter,
      sym_aggregate,
      sym_sorts,
      sym_takes,
      sym_group,
      sym_joins,
      sym_select,
  [10759] = 7,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(115), 1,
      sym_keyword_from,
    STATE(141), 1,
      aux_sym__friendly_number,
    STATE(144), 1,
      sym_comment,
    ACTIONS(591), 2,
      sym__natural_number,
      anon_sym__,
    ACTIONS(113), 22,
      ts_builtin_sym_end,
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
  [10803] = 20,
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
    STATE(244), 1,
      sym_identifier,
    STATE(255), 1,
      aux_sym__friendly_number,
    STATE(259), 1,
      sym_integer,
    STATE(260), 1,
      sym_literal,
    STATE(265), 1,
      sym__call_parameter,
    STATE(145), 2,
      sym_comment,
      aux_sym_function_call_repeat1,
    STATE(256), 2,
      sym__double_quote_string,
      sym__single_quote_string,
    STATE(269), 2,
      sym__literal_string,
      sym_decimal_number,
    ACTIONS(597), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    ACTIONS(321), 4,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [10872] = 21,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(291), 1,
      anon_sym_DQUOTE,
    ACTIONS(293), 1,
      anon_sym_SQUOTE,
    ACTIONS(295), 1,
      sym__natural_number,
    ACTIONS(297), 1,
      anon_sym__,
    ACTIONS(299), 1,
      anon_sym_DOT,
    ACTIONS(301), 1,
      anon_sym_BQUOTE,
    ACTIONS(303), 1,
      sym__identifier,
    ACTIONS(624), 1,
      anon_sym_DASH,
    STATE(145), 1,
      aux_sym_function_call_repeat1,
    STATE(146), 1,
      sym_comment,
    STATE(244), 1,
      sym_identifier,
    STATE(255), 1,
      aux_sym__friendly_number,
    STATE(259), 1,
      sym_integer,
    STATE(260), 1,
      sym_literal,
    STATE(265), 1,
      sym__call_parameter,
    STATE(256), 2,
      sym__double_quote_string,
      sym__single_quote_string,
    STATE(269), 2,
      sym__literal_string,
      sym_decimal_number,
    ACTIONS(289), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    ACTIONS(309), 4,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [10943] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(130), 1,
      sym_keyword_from,
    STATE(147), 1,
      sym_comment,
    ACTIONS(128), 24,
      ts_builtin_sym_end,
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
  [10982] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    STATE(148), 1,
      sym_comment,
    STATE(152), 1,
      aux_sym__friendly_number,
    ACTIONS(113), 7,
      anon_sym_RPAREN,
      anon_sym_DASH,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym__natural_number,
      anon_sym_DOT,
      anon_sym_BQUOTE,
    ACTIONS(115), 16,
      sym_keyword_filter,
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
  [11022] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(626), 1,
      anon_sym_COLON,
    STATE(149), 1,
      sym_comment,
    ACTIONS(515), 7,
      anon_sym_RPAREN,
      anon_sym_DASH,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym__natural_number,
      anon_sym_DOT,
      anon_sym_BQUOTE,
    ACTIONS(517), 16,
      sym_keyword_filter,
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
  [11062] = 5,
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
    ACTIONS(253), 16,
      sym_keyword_filter,
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
  [11100] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    STATE(151), 1,
      sym_comment,
    STATE(152), 1,
      aux_sym__friendly_number,
    ACTIONS(117), 7,
      anon_sym_RPAREN,
      anon_sym_DASH,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym__natural_number,
      anon_sym_DOT,
      anon_sym_BQUOTE,
    ACTIONS(119), 16,
      sym_keyword_filter,
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
  [11140] = 7,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(628), 1,
      sym__natural_number,
    ACTIONS(631), 1,
      anon_sym__,
    STATE(152), 2,
      aux_sym__friendly_number,
      sym_comment,
    ACTIONS(121), 6,
      anon_sym_RPAREN,
      anon_sym_DASH,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      anon_sym_DOT,
      anon_sym_BQUOTE,
    ACTIONS(123), 15,
      sym_keyword_filter,
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
  [11182] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    STATE(153), 1,
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
    ACTIONS(257), 16,
      sym_keyword_filter,
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
  [11220] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    STATE(154), 1,
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
  [11257] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    STATE(155), 1,
      sym_comment,
    ACTIONS(543), 7,
      anon_sym_RPAREN,
      anon_sym_DASH,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym__natural_number,
      anon_sym_DOT,
      anon_sym_BQUOTE,
    ACTIONS(545), 16,
      sym_keyword_filter,
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
  [11294] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    STATE(156), 1,
      sym_comment,
    ACTIONS(515), 7,
      anon_sym_RPAREN,
      anon_sym_DASH,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym__natural_number,
      anon_sym_DOT,
      anon_sym_BQUOTE,
    ACTIONS(517), 16,
      sym_keyword_filter,
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
  [11331] = 16,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(521), 1,
      anon_sym_RPAREN,
    ACTIONS(525), 1,
      sym_keyword_filter,
    ACTIONS(529), 1,
      sym_keyword_group,
    ACTIONS(531), 1,
      sym_keyword_aggregate,
    ACTIONS(533), 1,
      sym_keyword_sort,
    ACTIONS(535), 1,
      sym_keyword_take,
    ACTIONS(537), 1,
      sym_keyword_join,
    ACTIONS(634), 1,
      sym_keyword_derive,
    ACTIONS(636), 1,
      sym_keyword_select,
    STATE(157), 1,
      sym_comment,
    STATE(168), 1,
      aux_sym_transforms_repeat1,
    STATE(311), 1,
      sym_transforms,
    ACTIONS(541), 3,
      sym_keyword_append,
      sym_keyword_remove,
      sym_keyword_intersect,
    STATE(211), 9,
      sym_derives,
      sym_append,
      sym_filter,
      sym_aggregate,
      sym_sorts,
      sym_takes,
      sym_group,
      sym_joins,
      sym_select,
  [11390] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    STATE(158), 1,
      sym_comment,
    ACTIONS(352), 7,
      anon_sym_RPAREN,
      anon_sym_DASH,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym__natural_number,
      anon_sym_DOT,
      anon_sym_BQUOTE,
    ACTIONS(354), 16,
      sym_keyword_filter,
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
  [11427] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    STATE(159), 1,
      sym_comment,
    ACTIONS(551), 7,
      anon_sym_RPAREN,
      anon_sym_DASH,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym__natural_number,
      anon_sym_DOT,
      anon_sym_BQUOTE,
    ACTIONS(553), 16,
      sym_keyword_filter,
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
  [11464] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(378), 1,
      sym_keyword_from,
    STATE(160), 1,
      sym_comment,
    ACTIONS(376), 22,
      ts_builtin_sym_end,
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
  [11501] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    STATE(161), 1,
      sym_comment,
    ACTIONS(128), 7,
      anon_sym_RPAREN,
      anon_sym_DASH,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym__natural_number,
      anon_sym_DOT,
      anon_sym_BQUOTE,
    ACTIONS(130), 16,
      sym_keyword_filter,
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
  [11538] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    STATE(162), 1,
      sym_comment,
    ACTIONS(416), 7,
      anon_sym_RPAREN,
      anon_sym_DASH,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym__natural_number,
      anon_sym_DOT,
      anon_sym_BQUOTE,
    ACTIONS(418), 16,
      sym_keyword_filter,
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
  [11575] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    STATE(163), 1,
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
  [11612] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    STATE(164), 1,
      sym_comment,
    ACTIONS(352), 7,
      anon_sym_RPAREN,
      anon_sym_DASH,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym__natural_number,
      anon_sym_DOT,
      anon_sym_BQUOTE,
    ACTIONS(354), 16,
      sym_keyword_filter,
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
  [11649] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    STATE(165), 1,
      sym_comment,
    ACTIONS(305), 7,
      anon_sym_RPAREN,
      anon_sym_DASH,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym__natural_number,
      anon_sym_DOT,
      anon_sym_BQUOTE,
    ACTIONS(307), 16,
      sym_keyword_filter,
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
  [11686] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    STATE(166), 1,
      sym_comment,
    ACTIONS(420), 7,
      anon_sym_RPAREN,
      anon_sym_DASH,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym__natural_number,
      anon_sym_DOT,
      anon_sym_BQUOTE,
    ACTIONS(422), 16,
      sym_keyword_filter,
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
  [11723] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(640), 1,
      sym_keyword_from,
    STATE(167), 1,
      sym_comment,
    ACTIONS(638), 21,
      ts_builtin_sym_end,
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
  [11759] = 15,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(525), 1,
      sym_keyword_filter,
    ACTIONS(529), 1,
      sym_keyword_group,
    ACTIONS(531), 1,
      sym_keyword_aggregate,
    ACTIONS(533), 1,
      sym_keyword_sort,
    ACTIONS(535), 1,
      sym_keyword_take,
    ACTIONS(537), 1,
      sym_keyword_join,
    ACTIONS(593), 1,
      anon_sym_RPAREN,
    ACTIONS(634), 1,
      sym_keyword_derive,
    ACTIONS(636), 1,
      sym_keyword_select,
    STATE(168), 1,
      sym_comment,
    STATE(169), 1,
      aux_sym_transforms_repeat1,
    ACTIONS(541), 3,
      sym_keyword_append,
      sym_keyword_remove,
      sym_keyword_intersect,
    STATE(211), 9,
      sym_derives,
      sym_append,
      sym_filter,
      sym_aggregate,
      sym_sorts,
      sym_takes,
      sym_group,
      sym_joins,
      sym_select,
  [11815] = 14,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(557), 1,
      anon_sym_RPAREN,
    ACTIONS(561), 1,
      sym_keyword_filter,
    ACTIONS(567), 1,
      sym_keyword_group,
    ACTIONS(570), 1,
      sym_keyword_aggregate,
    ACTIONS(573), 1,
      sym_keyword_sort,
    ACTIONS(576), 1,
      sym_keyword_take,
    ACTIONS(579), 1,
      sym_keyword_join,
    ACTIONS(642), 1,
      sym_keyword_derive,
    ACTIONS(645), 1,
      sym_keyword_select,
    STATE(169), 2,
      sym_comment,
      aux_sym_transforms_repeat1,
    ACTIONS(585), 3,
      sym_keyword_append,
      sym_keyword_remove,
      sym_keyword_intersect,
    STATE(211), 9,
      sym_derives,
      sym_append,
      sym_filter,
      sym_aggregate,
      sym_sorts,
      sym_takes,
      sym_group,
      sym_joins,
      sym_select,
  [11869] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(505), 1,
      sym_keyword_from,
    STATE(170), 1,
      sym_comment,
    ACTIONS(503), 19,
      ts_builtin_sym_end,
      sym_keyword_filter,
      sym_keyword_derive,
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
  [11903] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(650), 1,
      sym_keyword_from,
    STATE(171), 1,
      sym_comment,
    ACTIONS(648), 19,
      ts_builtin_sym_end,
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
  [11937] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(654), 1,
      sym_keyword_from,
    STATE(172), 1,
      sym_comment,
    ACTIONS(652), 19,
      ts_builtin_sym_end,
      sym_keyword_filter,
      sym_keyword_derive,
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
  [11971] = 8,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(658), 1,
      sym_keyword_from,
    ACTIONS(660), 1,
      anon_sym_LBRACK,
    STATE(173), 1,
      sym_comment,
    STATE(226), 1,
      sym__self_join,
    STATE(237), 1,
      sym_conditions,
    ACTIONS(656), 16,
      ts_builtin_sym_end,
      sym_keyword_filter,
      sym_keyword_derive,
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
  [12011] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(664), 1,
      sym_keyword_from,
    STATE(174), 1,
      sym_comment,
    ACTIONS(662), 19,
      ts_builtin_sym_end,
      sym_keyword_filter,
      sym_keyword_derive,
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
  [12045] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(668), 1,
      sym_keyword_from,
    STATE(175), 1,
      sym_comment,
    ACTIONS(666), 19,
      ts_builtin_sym_end,
      sym_keyword_filter,
      sym_keyword_derive,
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
  [12079] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(672), 1,
      sym_keyword_from,
    STATE(176), 1,
      sym_comment,
    ACTIONS(670), 19,
      ts_builtin_sym_end,
      sym_keyword_filter,
      sym_keyword_derive,
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
  [12113] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(676), 1,
      sym_keyword_from,
    STATE(177), 1,
      sym_comment,
    ACTIONS(674), 19,
      ts_builtin_sym_end,
      sym_keyword_filter,
      sym_keyword_derive,
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
  [12147] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(680), 1,
      sym_keyword_from,
    STATE(178), 1,
      sym_comment,
    ACTIONS(678), 19,
      ts_builtin_sym_end,
      sym_keyword_filter,
      sym_keyword_derive,
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
  [12181] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(684), 1,
      sym_keyword_from,
    STATE(179), 1,
      sym_comment,
    ACTIONS(682), 19,
      ts_builtin_sym_end,
      sym_keyword_filter,
      sym_keyword_derive,
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
  [12215] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(688), 1,
      sym_keyword_from,
    STATE(180), 1,
      sym_comment,
    ACTIONS(686), 19,
      ts_builtin_sym_end,
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
  [12249] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(692), 1,
      sym_keyword_from,
    STATE(181), 1,
      sym_comment,
    ACTIONS(690), 19,
      ts_builtin_sym_end,
      sym_keyword_filter,
      sym_keyword_derive,
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
  [12283] = 8,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(660), 1,
      anon_sym_LBRACK,
    ACTIONS(696), 1,
      sym_keyword_from,
    STATE(182), 1,
      sym_comment,
    STATE(226), 1,
      sym__self_join,
    STATE(235), 1,
      sym_conditions,
    ACTIONS(694), 16,
      ts_builtin_sym_end,
      sym_keyword_filter,
      sym_keyword_derive,
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
  [12323] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(700), 1,
      sym_keyword_from,
    ACTIONS(702), 1,
      anon_sym_EQ,
    STATE(183), 1,
      sym_comment,
    ACTIONS(698), 17,
      ts_builtin_sym_end,
      sym_keyword_filter,
      sym_keyword_derive,
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
  [12358] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(706), 1,
      sym_keyword_from,
    ACTIONS(708), 1,
      anon_sym_DOT_DOT,
    STATE(184), 1,
      sym_comment,
    ACTIONS(704), 17,
      ts_builtin_sym_end,
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
  [12393] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    STATE(185), 1,
      sym_comment,
    ACTIONS(710), 7,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
      anon_sym_f_DQUOTE,
      anon_sym_s_DQUOTE,
      anon_sym__,
      sym__identifier,
    ACTIONS(712), 12,
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
  [12426] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    STATE(186), 1,
      sym_comment,
    ACTIONS(714), 7,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
      anon_sym_f_DQUOTE,
      anon_sym_s_DQUOTE,
      anon_sym__,
      sym__identifier,
    ACTIONS(716), 12,
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
  [12459] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    STATE(187), 1,
      sym_comment,
    ACTIONS(718), 7,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
      anon_sym_f_DQUOTE,
      anon_sym_s_DQUOTE,
      anon_sym__,
      sym__identifier,
    ACTIONS(720), 12,
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
  [12492] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(724), 1,
      sym_keyword_from,
    STATE(188), 1,
      sym_comment,
    ACTIONS(722), 17,
      ts_builtin_sym_end,
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
  [12524] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(728), 1,
      sym_keyword_from,
    STATE(189), 1,
      sym_comment,
    ACTIONS(726), 17,
      ts_builtin_sym_end,
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
  [12556] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(732), 1,
      sym_keyword_from,
    STATE(190), 1,
      sym_comment,
    ACTIONS(730), 17,
      ts_builtin_sym_end,
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
  [12588] = 12,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(456), 1,
      anon_sym_QMARK_QMARK,
    ACTIONS(458), 1,
      sym_keyword_and,
    ACTIONS(493), 1,
      sym_keyword_or,
    ACTIONS(734), 1,
      anon_sym_EQ,
    STATE(191), 1,
      sym_comment,
    ACTIONS(408), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(410), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(446), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(444), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(503), 4,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [12634] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(706), 1,
      sym_keyword_from,
    STATE(192), 1,
      sym_comment,
    ACTIONS(704), 17,
      ts_builtin_sym_end,
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
  [12666] = 5,
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
  [12698] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(742), 1,
      sym_keyword_from,
    STATE(194), 1,
      sym_comment,
    ACTIONS(740), 17,
      ts_builtin_sym_end,
      sym_keyword_filter,
      sym_keyword_derive,
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
  [12730] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(746), 1,
      sym_keyword_from,
    STATE(195), 1,
      sym_comment,
    ACTIONS(744), 17,
      ts_builtin_sym_end,
      sym_keyword_filter,
      sym_keyword_derive,
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
  [12762] = 7,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(750), 1,
      sym_keyword_from,
    STATE(196), 1,
      sym_comment,
    ACTIONS(384), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(748), 4,
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
  [12798] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(754), 1,
      sym_keyword_from,
    STATE(197), 1,
      sym_comment,
    ACTIONS(752), 17,
      ts_builtin_sym_end,
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
  [12830] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(758), 1,
      sym_keyword_from,
    STATE(198), 1,
      sym_comment,
    ACTIONS(756), 17,
      ts_builtin_sym_end,
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
  [12862] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(762), 1,
      sym_keyword_from,
    STATE(199), 1,
      sym_comment,
    ACTIONS(760), 17,
      ts_builtin_sym_end,
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
  [12894] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(700), 1,
      sym_keyword_from,
    STATE(200), 1,
      sym_comment,
    ACTIONS(698), 17,
      ts_builtin_sym_end,
      sym_keyword_filter,
      sym_keyword_derive,
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
  [12926] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(766), 1,
      sym_keyword_from,
    STATE(201), 1,
      sym_comment,
    ACTIONS(764), 17,
      ts_builtin_sym_end,
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
  [12958] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(770), 1,
      sym_keyword_from,
    STATE(202), 1,
      sym_comment,
    ACTIONS(768), 17,
      ts_builtin_sym_end,
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
  [12990] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(774), 1,
      sym_keyword_from,
    STATE(203), 1,
      sym_comment,
    ACTIONS(772), 16,
      ts_builtin_sym_end,
      sym_keyword_filter,
      sym_keyword_derive,
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
  [13021] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(778), 1,
      sym_keyword_from,
    STATE(204), 1,
      sym_comment,
    ACTIONS(776), 16,
      ts_builtin_sym_end,
      sym_keyword_filter,
      sym_keyword_derive,
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
  [13052] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(782), 1,
      sym_keyword_from,
    STATE(205), 1,
      sym_comment,
    ACTIONS(780), 16,
      ts_builtin_sym_end,
      sym_keyword_filter,
      sym_keyword_derive,
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
  [13083] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(786), 1,
      sym_keyword_from,
    STATE(206), 1,
      sym_comment,
    ACTIONS(784), 16,
      ts_builtin_sym_end,
      sym_keyword_filter,
      sym_keyword_derive,
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
  [13114] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(790), 1,
      sym_keyword_from,
    STATE(207), 1,
      sym_comment,
    ACTIONS(788), 16,
      ts_builtin_sym_end,
      sym_keyword_filter,
      sym_keyword_derive,
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
  [13145] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(794), 1,
      sym_keyword_from,
    STATE(208), 1,
      sym_comment,
    ACTIONS(792), 16,
      ts_builtin_sym_end,
      sym_keyword_filter,
      sym_keyword_derive,
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
  [13176] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    STATE(209), 1,
      sym_comment,
    ACTIONS(796), 7,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
      anon_sym_f_DQUOTE,
      anon_sym_s_DQUOTE,
      anon_sym__,
      sym__identifier,
    ACTIONS(798), 10,
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
  [13207] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(802), 1,
      sym_keyword_from,
    STATE(210), 1,
      sym_comment,
    ACTIONS(800), 16,
      ts_builtin_sym_end,
      sym_keyword_filter,
      sym_keyword_derive,
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
  [13238] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(806), 1,
      sym_keyword_from,
    STATE(211), 1,
      sym_comment,
    ACTIONS(804), 16,
      ts_builtin_sym_end,
      sym_keyword_filter,
      sym_keyword_derive,
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
  [13269] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(810), 1,
      sym_keyword_from,
    STATE(212), 1,
      sym_comment,
    ACTIONS(808), 16,
      ts_builtin_sym_end,
      sym_keyword_filter,
      sym_keyword_derive,
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
  [13300] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(814), 1,
      sym_keyword_from,
    STATE(213), 1,
      sym_comment,
    ACTIONS(812), 16,
      ts_builtin_sym_end,
      sym_keyword_filter,
      sym_keyword_derive,
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
  [13331] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(818), 1,
      sym_keyword_from,
    STATE(214), 1,
      sym_comment,
    ACTIONS(816), 16,
      ts_builtin_sym_end,
      sym_keyword_filter,
      sym_keyword_derive,
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
  [13362] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(822), 1,
      sym_keyword_from,
    STATE(215), 1,
      sym_comment,
    ACTIONS(820), 16,
      ts_builtin_sym_end,
      sym_keyword_filter,
      sym_keyword_derive,
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
  [13393] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(826), 1,
      sym_keyword_from,
    STATE(216), 1,
      sym_comment,
    ACTIONS(824), 16,
      ts_builtin_sym_end,
      sym_keyword_filter,
      sym_keyword_derive,
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
  [13424] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(830), 1,
      sym_keyword_from,
    STATE(217), 1,
      sym_comment,
    ACTIONS(828), 16,
      ts_builtin_sym_end,
      sym_keyword_filter,
      sym_keyword_derive,
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
  [13455] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(834), 1,
      sym_keyword_from,
    STATE(218), 1,
      sym_comment,
    ACTIONS(832), 16,
      ts_builtin_sym_end,
      sym_keyword_filter,
      sym_keyword_derive,
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
  [13486] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(838), 1,
      sym_keyword_from,
    STATE(219), 1,
      sym_comment,
    ACTIONS(836), 16,
      ts_builtin_sym_end,
      sym_keyword_filter,
      sym_keyword_derive,
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
  [13517] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(842), 1,
      sym_keyword_from,
    STATE(220), 1,
      sym_comment,
    ACTIONS(840), 16,
      ts_builtin_sym_end,
      sym_keyword_filter,
      sym_keyword_derive,
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
  [13548] = 8,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(844), 1,
      anon_sym_COMMA,
    ACTIONS(846), 1,
      anon_sym_RBRACK,
    STATE(221), 1,
      sym_comment,
    STATE(387), 1,
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
  [13585] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(850), 1,
      sym_keyword_from,
    STATE(222), 1,
      sym_comment,
    ACTIONS(848), 16,
      ts_builtin_sym_end,
      sym_keyword_filter,
      sym_keyword_derive,
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
  [13616] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(854), 1,
      sym_keyword_from,
    STATE(223), 1,
      sym_comment,
    ACTIONS(852), 16,
      ts_builtin_sym_end,
      sym_keyword_filter,
      sym_keyword_derive,
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
  [13647] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(858), 1,
      sym_keyword_from,
    STATE(224), 1,
      sym_comment,
    ACTIONS(856), 16,
      ts_builtin_sym_end,
      sym_keyword_filter,
      sym_keyword_derive,
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
  [13678] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(862), 1,
      sym_keyword_from,
    STATE(225), 1,
      sym_comment,
    ACTIONS(860), 16,
      ts_builtin_sym_end,
      sym_keyword_filter,
      sym_keyword_derive,
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
  [13709] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(866), 1,
      sym_keyword_from,
    STATE(226), 1,
      sym_comment,
    ACTIONS(864), 16,
      ts_builtin_sym_end,
      sym_keyword_filter,
      sym_keyword_derive,
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
  [13740] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(870), 1,
      sym_keyword_from,
    STATE(227), 1,
      sym_comment,
    ACTIONS(868), 16,
      ts_builtin_sym_end,
      sym_keyword_filter,
      sym_keyword_derive,
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
  [13771] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(874), 1,
      sym_keyword_from,
    STATE(228), 1,
      sym_comment,
    ACTIONS(872), 16,
      ts_builtin_sym_end,
      sym_keyword_filter,
      sym_keyword_derive,
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
  [13802] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(505), 1,
      sym_keyword_from,
    STATE(229), 1,
      sym_comment,
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
      sym_keyword_func,
      sym_keyword_let,
      sym_keyword_from_text,
      anon_sym_RPAREN,
  [13833] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(878), 1,
      sym_keyword_from,
    STATE(230), 1,
      sym_comment,
    ACTIONS(876), 16,
      ts_builtin_sym_end,
      sym_keyword_filter,
      sym_keyword_derive,
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
  [13864] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(882), 1,
      sym_keyword_from,
    STATE(231), 1,
      sym_comment,
    ACTIONS(880), 16,
      ts_builtin_sym_end,
      sym_keyword_filter,
      sym_keyword_derive,
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
  [13895] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(886), 1,
      sym_keyword_from,
    STATE(232), 1,
      sym_comment,
    ACTIONS(884), 16,
      ts_builtin_sym_end,
      sym_keyword_filter,
      sym_keyword_derive,
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
  [13926] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(890), 1,
      sym_keyword_from,
    STATE(233), 1,
      sym_comment,
    ACTIONS(888), 16,
      ts_builtin_sym_end,
      sym_keyword_filter,
      sym_keyword_derive,
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
  [13957] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(894), 1,
      sym_keyword_from,
    STATE(234), 1,
      sym_comment,
    ACTIONS(892), 16,
      ts_builtin_sym_end,
      sym_keyword_filter,
      sym_keyword_derive,
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
  [13988] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(898), 1,
      sym_keyword_from,
    STATE(235), 1,
      sym_comment,
    ACTIONS(896), 16,
      ts_builtin_sym_end,
      sym_keyword_filter,
      sym_keyword_derive,
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
  [14019] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(902), 1,
      sym_keyword_from,
    STATE(236), 1,
      sym_comment,
    ACTIONS(900), 16,
      ts_builtin_sym_end,
      sym_keyword_filter,
      sym_keyword_derive,
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
  [14050] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(906), 1,
      sym_keyword_from,
    STATE(237), 1,
      sym_comment,
    ACTIONS(904), 16,
      ts_builtin_sym_end,
      sym_keyword_filter,
      sym_keyword_derive,
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
  [14081] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(910), 1,
      sym_keyword_from,
    STATE(238), 1,
      sym_comment,
    ACTIONS(908), 16,
      ts_builtin_sym_end,
      sym_keyword_filter,
      sym_keyword_derive,
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
  [14112] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(914), 1,
      sym_keyword_from,
    STATE(239), 1,
      sym_comment,
    ACTIONS(912), 16,
      ts_builtin_sym_end,
      sym_keyword_filter,
      sym_keyword_derive,
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
  [14143] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    STATE(240), 1,
      sym_comment,
    STATE(362), 1,
      aux_sym_derives_repeat1,
    ACTIONS(426), 3,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(424), 13,
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
  [14176] = 14,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(918), 1,
      anon_sym_DASH,
    ACTIONS(920), 1,
      anon_sym_DQUOTE,
    ACTIONS(922), 1,
      anon_sym_SQUOTE,
    ACTIONS(926), 1,
      anon_sym_DOT,
    STATE(241), 1,
      sym_comment,
    STATE(309), 1,
      aux_sym__friendly_number,
    STATE(337), 1,
      sym_integer,
    STATE(369), 1,
      sym_literal,
    ACTIONS(924), 2,
      sym__natural_number,
      anon_sym__,
    STATE(353), 2,
      sym__double_quote_string,
      sym__single_quote_string,
    STATE(371), 2,
      sym__literal_string,
      sym_decimal_number,
    ACTIONS(916), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
  [14224] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    STATE(242), 1,
      sym_comment,
    STATE(253), 1,
      aux_sym__friendly_number,
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
  [14256] = 14,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(83), 1,
      anon_sym_DQUOTE,
    ACTIONS(85), 1,
      anon_sym_SQUOTE,
    ACTIONS(91), 1,
      anon_sym_DOT,
    ACTIONS(313), 1,
      anon_sym_DASH,
    STATE(123), 1,
      aux_sym__friendly_number,
    STATE(124), 1,
      sym_integer,
    STATE(135), 1,
      sym_literal,
    STATE(243), 1,
      sym_comment,
    ACTIONS(87), 2,
      sym__natural_number,
      anon_sym__,
    STATE(137), 2,
      sym__double_quote_string,
      sym__single_quote_string,
    STATE(138), 2,
      sym__literal_string,
      sym_decimal_number,
    ACTIONS(928), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
  [14304] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(930), 1,
      anon_sym_COLON,
    STATE(244), 1,
      sym_comment,
    ACTIONS(517), 5,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
      anon_sym__,
      sym__identifier,
    ACTIONS(515), 10,
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
  [14336] = 14,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(291), 1,
      anon_sym_DQUOTE,
    ACTIONS(293), 1,
      anon_sym_SQUOTE,
    ACTIONS(299), 1,
      anon_sym_DOT,
    ACTIONS(624), 1,
      anon_sym_DASH,
    STATE(245), 1,
      sym_comment,
    STATE(255), 1,
      aux_sym__friendly_number,
    STATE(259), 1,
      sym_integer,
    STATE(267), 1,
      sym_literal,
    ACTIONS(295), 2,
      sym__natural_number,
      anon_sym__,
    STATE(256), 2,
      sym__double_quote_string,
      sym__single_quote_string,
    STATE(269), 2,
      sym__literal_string,
      sym_decimal_number,
    ACTIONS(932), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
  [14384] = 8,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(934), 1,
      anon_sym_COMMA,
    ACTIONS(936), 1,
      anon_sym_RBRACK,
    STATE(246), 1,
      sym_comment,
    STATE(354), 1,
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
  [14420] = 14,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(99), 1,
      anon_sym_DQUOTE,
    ACTIONS(101), 1,
      anon_sym_SQUOTE,
    ACTIONS(107), 1,
      anon_sym_DOT,
    ACTIONS(487), 1,
      anon_sym_DASH,
    STATE(148), 1,
      aux_sym__friendly_number,
    STATE(158), 1,
      sym_integer,
    STATE(159), 1,
      sym_literal,
    STATE(247), 1,
      sym_comment,
    ACTIONS(103), 2,
      sym__natural_number,
      anon_sym__,
    STATE(154), 2,
      sym__double_quote_string,
      sym__single_quote_string,
    STATE(164), 2,
      sym__literal_string,
      sym_decimal_number,
    ACTIONS(938), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
  [14468] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    STATE(248), 1,
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
  [14498] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    STATE(249), 1,
      sym_comment,
    ACTIONS(940), 2,
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
  [14530] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    STATE(250), 1,
      sym_comment,
    ACTIONS(426), 3,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(424), 13,
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
  [14560] = 14,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(31), 1,
      anon_sym_DASH,
    ACTIONS(33), 1,
      anon_sym_DQUOTE,
    ACTIONS(35), 1,
      anon_sym_SQUOTE,
    ACTIONS(49), 1,
      anon_sym_DOT,
    STATE(12), 1,
      aux_sym__friendly_number,
    STATE(78), 1,
      sym_integer,
    STATE(251), 1,
      sym_comment,
    STATE(446), 1,
      sym_literal,
    ACTIONS(45), 2,
      sym__natural_number,
      anon_sym__,
    STATE(100), 2,
      sym__double_quote_string,
      sym__single_quote_string,
    STATE(107), 2,
      sym__literal_string,
      sym_decimal_number,
    ACTIONS(942), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
  [14608] = 14,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(31), 1,
      anon_sym_DASH,
    ACTIONS(33), 1,
      anon_sym_DQUOTE,
    ACTIONS(35), 1,
      anon_sym_SQUOTE,
    ACTIONS(49), 1,
      anon_sym_DOT,
    STATE(12), 1,
      aux_sym__friendly_number,
    STATE(78), 1,
      sym_integer,
    STATE(252), 1,
      sym_comment,
    STATE(445), 1,
      sym_literal,
    ACTIONS(45), 2,
      sym__natural_number,
      anon_sym__,
    STATE(100), 2,
      sym__double_quote_string,
      sym__single_quote_string,
    STATE(107), 2,
      sym__literal_string,
      sym_decimal_number,
    ACTIONS(942), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
  [14656] = 7,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(944), 1,
      sym__natural_number,
    ACTIONS(947), 1,
      anon_sym__,
    STATE(253), 2,
      aux_sym__friendly_number,
      sym_comment,
    ACTIONS(123), 4,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
      sym__identifier,
    ACTIONS(121), 9,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_DASH,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      anon_sym_DOT,
      anon_sym_BQUOTE,
  [14690] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    STATE(254), 1,
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
  [14720] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    STATE(253), 1,
      aux_sym__friendly_number,
    STATE(255), 1,
      sym_comment,
    ACTIONS(115), 5,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
      anon_sym__,
      sym__identifier,
    ACTIONS(113), 10,
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
  [14752] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    STATE(256), 1,
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
  [14781] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    STATE(257), 1,
      sym_comment,
    ACTIONS(307), 5,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
      anon_sym__,
      sym__identifier,
    ACTIONS(305), 10,
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
  [14810] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    STATE(258), 1,
      sym_comment,
    ACTIONS(130), 5,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
      anon_sym__,
      sym__identifier,
    ACTIONS(128), 10,
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
  [14839] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    STATE(259), 1,
      sym_comment,
    ACTIONS(354), 5,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
      anon_sym__,
      sym__identifier,
    ACTIONS(352), 10,
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
  [14868] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    STATE(260), 1,
      sym_comment,
    ACTIONS(517), 5,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
      anon_sym__,
      sym__identifier,
    ACTIONS(515), 10,
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
  [14897] = 11,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(456), 1,
      anon_sym_QMARK_QMARK,
    ACTIONS(458), 1,
      sym_keyword_and,
    ACTIONS(493), 1,
      sym_keyword_or,
    STATE(261), 1,
      sym_comment,
    ACTIONS(408), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(410), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(446), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(950), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
    ACTIONS(444), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
  [14938] = 11,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(456), 1,
      anon_sym_QMARK_QMARK,
    ACTIONS(458), 1,
      sym_keyword_and,
    ACTIONS(493), 1,
      sym_keyword_or,
    STATE(262), 1,
      sym_comment,
    ACTIONS(408), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(410), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(446), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(952), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
    ACTIONS(444), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
  [14979] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    STATE(263), 1,
      sym_comment,
    ACTIONS(384), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(954), 2,
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
  [15010] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    STATE(264), 1,
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
  [15039] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    STATE(265), 1,
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
  [15068] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    STATE(266), 1,
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
  [15097] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    STATE(267), 1,
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
  [15126] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    STATE(268), 1,
      sym_comment,
    ACTIONS(422), 5,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
      anon_sym__,
      sym__identifier,
    ACTIONS(420), 10,
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
  [15155] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    STATE(269), 1,
      sym_comment,
    ACTIONS(354), 5,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
      anon_sym__,
      sym__identifier,
    ACTIONS(352), 10,
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
  [15184] = 11,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(456), 1,
      anon_sym_QMARK_QMARK,
    ACTIONS(458), 1,
      sym_keyword_and,
    ACTIONS(493), 1,
      sym_keyword_or,
    ACTIONS(734), 1,
      anon_sym_EQ,
    STATE(270), 1,
      sym_comment,
    ACTIONS(408), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(410), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(446), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(444), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
  [15224] = 9,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(456), 1,
      anon_sym_QMARK_QMARK,
    STATE(271), 1,
      sym_comment,
    ACTIONS(408), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(410), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(446), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(402), 3,
      sym_keyword_and,
      sym_keyword_or,
      anon_sym_RPAREN,
    ACTIONS(444), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
  [15260] = 10,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(456), 1,
      anon_sym_QMARK_QMARK,
    ACTIONS(458), 1,
      sym_keyword_and,
    STATE(272), 1,
      sym_comment,
    ACTIONS(402), 2,
      sym_keyword_or,
      anon_sym_RPAREN,
    ACTIONS(408), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(410), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(446), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(444), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
  [15298] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    STATE(273), 1,
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
  [15326] = 14,
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
    STATE(300), 1,
      aux_sym_program_repeat1,
    STATE(321), 1,
      sym_prql,
    STATE(125), 2,
      sym_from_text,
      sym_from,
    STATE(332), 3,
      sym_pipeline,
      sym_variable,
      sym_function_definition,
  [15372] = 11,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(456), 1,
      anon_sym_QMARK_QMARK,
    ACTIONS(958), 1,
      sym_keyword_and,
    ACTIONS(960), 1,
      sym_keyword_or,
    ACTIONS(962), 1,
      anon_sym_RPAREN,
    STATE(275), 1,
      sym_comment,
    ACTIONS(408), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(410), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(446), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(444), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
  [15412] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(964), 1,
      anon_sym_RPAREN,
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
  [15442] = 11,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(456), 1,
      anon_sym_QMARK_QMARK,
    ACTIONS(489), 1,
      anon_sym_RPAREN,
    ACTIONS(958), 1,
      sym_keyword_and,
    ACTIONS(960), 1,
      sym_keyword_or,
    STATE(277), 1,
      sym_comment,
    ACTIONS(408), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(410), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(446), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(444), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
  [15482] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(966), 1,
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
  [15512] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(968), 1,
      anon_sym_RPAREN,
    STATE(279), 1,
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
  [15542] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(970), 1,
      anon_sym_DASH_GT,
    STATE(280), 1,
      sym_comment,
    ACTIONS(384), 3,
      anon_sym_DASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(382), 10,
      sym_keyword_and,
      sym_keyword_or,
      anon_sym_PLUS,
      anon_sym_EQ_EQ,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_QMARK_QMARK,
  [15572] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(972), 1,
      anon_sym_DASH_GT,
    STATE(281), 1,
      sym_comment,
    ACTIONS(384), 3,
      anon_sym_DASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(382), 10,
      sym_keyword_and,
      sym_keyword_or,
      anon_sym_PLUS,
      anon_sym_EQ_EQ,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_QMARK_QMARK,
  [15602] = 10,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(456), 1,
      anon_sym_QMARK_QMARK,
    ACTIONS(458), 1,
      sym_keyword_and,
    ACTIONS(493), 1,
      sym_keyword_or,
    STATE(282), 1,
      sym_comment,
    ACTIONS(408), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(410), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(446), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(444), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
  [15639] = 10,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(456), 1,
      anon_sym_QMARK_QMARK,
    ACTIONS(958), 1,
      sym_keyword_and,
    ACTIONS(960), 1,
      sym_keyword_or,
    STATE(283), 1,
      sym_comment,
    ACTIONS(408), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(410), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(446), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(444), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
  [15676] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    STATE(284), 1,
      sym_comment,
    STATE(316), 1,
      sym_target,
    ACTIONS(974), 11,
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
  [15702] = 11,
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
    STATE(285), 1,
      sym_comment,
    STATE(286), 1,
      aux_sym_program_repeat2,
    STATE(125), 2,
      sym_from_text,
      sym_from,
    STATE(332), 3,
      sym_pipeline,
      sym_variable,
      sym_function_definition,
  [15739] = 10,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(976), 1,
      ts_builtin_sym_end,
    ACTIONS(978), 1,
      sym_keyword_from,
    ACTIONS(981), 1,
      sym_keyword_func,
    ACTIONS(984), 1,
      sym_keyword_let,
    ACTIONS(987), 1,
      sym_keyword_from_text,
    STATE(125), 2,
      sym_from_text,
      sym_from,
    STATE(286), 2,
      sym_comment,
      aux_sym_program_repeat2,
    STATE(332), 3,
      sym_pipeline,
      sym_variable,
      sym_function_definition,
  [15774] = 11,
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
    ACTIONS(990), 1,
      ts_builtin_sym_end,
    STATE(286), 1,
      aux_sym_program_repeat2,
    STATE(287), 1,
      sym_comment,
    STATE(125), 2,
      sym_from_text,
      sym_from,
    STATE(332), 3,
      sym_pipeline,
      sym_variable,
      sym_function_definition,
  [15811] = 10,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(531), 1,
      sym_keyword_aggregate,
    ACTIONS(533), 1,
      sym_keyword_sort,
    ACTIONS(535), 1,
      sym_keyword_take,
    ACTIONS(992), 1,
      sym_keyword_window,
    ACTIONS(994), 1,
      anon_sym_RPAREN,
    STATE(288), 1,
      sym_comment,
    STATE(293), 1,
      aux_sym_group_repeat2,
    STATE(324), 4,
      sym_aggregate,
      sym_sorts,
      sym_takes,
      sym_window,
  [15845] = 10,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(531), 1,
      sym_keyword_aggregate,
    ACTIONS(533), 1,
      sym_keyword_sort,
    ACTIONS(535), 1,
      sym_keyword_take,
    ACTIONS(992), 1,
      sym_keyword_window,
    ACTIONS(996), 1,
      anon_sym_RPAREN,
    STATE(289), 1,
      sym_comment,
    STATE(293), 1,
      aux_sym_group_repeat2,
    STATE(324), 4,
      sym_aggregate,
      sym_sorts,
      sym_takes,
      sym_window,
  [15879] = 10,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(531), 1,
      sym_keyword_aggregate,
    ACTIONS(533), 1,
      sym_keyword_sort,
    ACTIONS(535), 1,
      sym_keyword_take,
    ACTIONS(992), 1,
      sym_keyword_window,
    ACTIONS(998), 1,
      anon_sym_RPAREN,
    STATE(290), 1,
      sym_comment,
    STATE(293), 1,
      aux_sym_group_repeat2,
    STATE(324), 4,
      sym_aggregate,
      sym_sorts,
      sym_takes,
      sym_window,
  [15913] = 10,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(531), 1,
      sym_keyword_aggregate,
    ACTIONS(533), 1,
      sym_keyword_sort,
    ACTIONS(535), 1,
      sym_keyword_take,
    ACTIONS(992), 1,
      sym_keyword_window,
    ACTIONS(1000), 1,
      anon_sym_RPAREN,
    STATE(291), 1,
      sym_comment,
    STATE(293), 1,
      aux_sym_group_repeat2,
    STATE(324), 4,
      sym_aggregate,
      sym_sorts,
      sym_takes,
      sym_window,
  [15947] = 10,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(531), 1,
      sym_keyword_aggregate,
    ACTIONS(533), 1,
      sym_keyword_sort,
    ACTIONS(535), 1,
      sym_keyword_take,
    ACTIONS(992), 1,
      sym_keyword_window,
    ACTIONS(1002), 1,
      anon_sym_RPAREN,
    STATE(292), 1,
      sym_comment,
    STATE(293), 1,
      aux_sym_group_repeat2,
    STATE(324), 4,
      sym_aggregate,
      sym_sorts,
      sym_takes,
      sym_window,
  [15981] = 9,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(1004), 1,
      sym_keyword_aggregate,
    ACTIONS(1007), 1,
      sym_keyword_sort,
    ACTIONS(1010), 1,
      sym_keyword_take,
    ACTIONS(1013), 1,
      sym_keyword_window,
    ACTIONS(1016), 1,
      anon_sym_RPAREN,
    STATE(293), 2,
      sym_comment,
      aux_sym_group_repeat2,
    STATE(324), 4,
      sym_aggregate,
      sym_sorts,
      sym_takes,
      sym_window,
  [16013] = 11,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(51), 1,
      anon_sym_BQUOTE,
    ACTIONS(1018), 1,
      anon_sym_COMMA,
    ACTIONS(1020), 1,
      anon_sym_RBRACK,
    ACTIONS(1022), 1,
      sym__identifier,
    STATE(171), 1,
      sym_identifier,
    STATE(294), 1,
      sym_comment,
    STATE(365), 1,
      sym_direction,
    STATE(390), 1,
      sym__sort_instruction,
    ACTIONS(269), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
  [16048] = 9,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(531), 1,
      sym_keyword_aggregate,
    ACTIONS(533), 1,
      sym_keyword_sort,
    ACTIONS(535), 1,
      sym_keyword_take,
    ACTIONS(992), 1,
      sym_keyword_window,
    STATE(289), 1,
      aux_sym_group_repeat2,
    STATE(295), 1,
      sym_comment,
    STATE(324), 4,
      sym_aggregate,
      sym_sorts,
      sym_takes,
      sym_window,
  [16079] = 9,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(531), 1,
      sym_keyword_aggregate,
    ACTIONS(533), 1,
      sym_keyword_sort,
    ACTIONS(535), 1,
      sym_keyword_take,
    ACTIONS(992), 1,
      sym_keyword_window,
    STATE(291), 1,
      aux_sym_group_repeat2,
    STATE(296), 1,
      sym_comment,
    STATE(324), 4,
      sym_aggregate,
      sym_sorts,
      sym_takes,
      sym_window,
  [16110] = 9,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(531), 1,
      sym_keyword_aggregate,
    ACTIONS(533), 1,
      sym_keyword_sort,
    ACTIONS(535), 1,
      sym_keyword_take,
    ACTIONS(992), 1,
      sym_keyword_window,
    STATE(290), 1,
      aux_sym_group_repeat2,
    STATE(297), 1,
      sym_comment,
    STATE(324), 4,
      sym_aggregate,
      sym_sorts,
      sym_takes,
      sym_window,
  [16141] = 9,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(531), 1,
      sym_keyword_aggregate,
    ACTIONS(533), 1,
      sym_keyword_sort,
    ACTIONS(535), 1,
      sym_keyword_take,
    ACTIONS(992), 1,
      sym_keyword_window,
    STATE(292), 1,
      aux_sym_group_repeat2,
    STATE(298), 1,
      sym_comment,
    STATE(324), 4,
      sym_aggregate,
      sym_sorts,
      sym_takes,
      sym_window,
  [16172] = 9,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(531), 1,
      sym_keyword_aggregate,
    ACTIONS(533), 1,
      sym_keyword_sort,
    ACTIONS(535), 1,
      sym_keyword_take,
    ACTIONS(992), 1,
      sym_keyword_window,
    STATE(288), 1,
      aux_sym_group_repeat2,
    STATE(299), 1,
      sym_comment,
    STATE(324), 4,
      sym_aggregate,
      sym_sorts,
      sym_takes,
      sym_window,
  [16203] = 7,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(1026), 1,
      sym_keyword_from,
    ACTIONS(1028), 1,
      sym_keyword_prql,
    STATE(321), 1,
      sym_prql,
    STATE(300), 2,
      sym_comment,
      aux_sym_program_repeat1,
    ACTIONS(1024), 4,
      ts_builtin_sym_end,
      sym_keyword_func,
      sym_keyword_let,
      sym_keyword_from_text,
  [16229] = 10,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(51), 1,
      anon_sym_BQUOTE,
    ACTIONS(1022), 1,
      sym__identifier,
    ACTIONS(1031), 1,
      anon_sym_LBRACK,
    STATE(171), 1,
      sym_identifier,
    STATE(190), 1,
      sym__sort_instruction,
    STATE(301), 1,
      sym_comment,
    STATE(365), 1,
      sym_direction,
    ACTIONS(269), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
  [16261] = 10,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(51), 1,
      anon_sym_BQUOTE,
    ACTIONS(1022), 1,
      sym__identifier,
    ACTIONS(1033), 1,
      anon_sym_RBRACK,
    STATE(171), 1,
      sym_identifier,
    STATE(302), 1,
      sym_comment,
    STATE(365), 1,
      sym_direction,
    STATE(403), 1,
      sym__sort_instruction,
    ACTIONS(269), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
  [16293] = 10,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(1035), 1,
      anon_sym_DASH,
    ACTIONS(1037), 1,
      anon_sym_AT,
    STATE(144), 1,
      aux_sym__friendly_number,
    STATE(303), 1,
      sym_comment,
    STATE(325), 1,
      sym_integer,
    STATE(348), 1,
      sym_range,
    STATE(431), 1,
      sym_date,
    ACTIONS(591), 2,
      sym__natural_number,
      anon_sym__,
  [16325] = 10,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(51), 1,
      anon_sym_BQUOTE,
    ACTIONS(1022), 1,
      sym__identifier,
    ACTIONS(1039), 1,
      anon_sym_RBRACK,
    STATE(171), 1,
      sym_identifier,
    STATE(304), 1,
      sym_comment,
    STATE(365), 1,
      sym_direction,
    STATE(403), 1,
      sym__sort_instruction,
    ACTIONS(269), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
  [16357] = 10,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(1035), 1,
      anon_sym_DASH,
    ACTIONS(1037), 1,
      anon_sym_AT,
    STATE(144), 1,
      aux_sym__friendly_number,
    STATE(184), 1,
      sym_integer,
    STATE(192), 1,
      sym_range,
    STATE(305), 1,
      sym_comment,
    STATE(431), 1,
      sym_date,
    ACTIONS(591), 2,
      sym__natural_number,
      anon_sym__,
  [16389] = 7,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(123), 1,
      sym__identifier,
    ACTIONS(1041), 1,
      sym__natural_number,
    ACTIONS(1044), 1,
      anon_sym__,
    STATE(306), 2,
      aux_sym__friendly_number,
      sym_comment,
    ACTIONS(121), 3,
      anon_sym_DASH_GT,
      anon_sym_DOT,
      anon_sym_BQUOTE,
  [16414] = 8,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(119), 1,
      sym__identifier,
    ACTIONS(924), 1,
      sym__natural_number,
    ACTIONS(1047), 1,
      anon_sym__,
    STATE(306), 1,
      aux_sym__friendly_number,
    STATE(307), 1,
      sym_comment,
    ACTIONS(117), 3,
      anon_sym_DASH_GT,
      anon_sym_DOT,
      anon_sym_BQUOTE,
  [16441] = 9,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(51), 1,
      anon_sym_BQUOTE,
    ACTIONS(1022), 1,
      sym__identifier,
    STATE(171), 1,
      sym_identifier,
    STATE(308), 1,
      sym_comment,
    STATE(365), 1,
      sym_direction,
    STATE(403), 1,
      sym__sort_instruction,
    ACTIONS(269), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
  [16470] = 8,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(115), 1,
      sym__identifier,
    ACTIONS(924), 1,
      sym__natural_number,
    ACTIONS(1047), 1,
      anon_sym__,
    STATE(306), 1,
      aux_sym__friendly_number,
    STATE(309), 1,
      sym_comment,
    ACTIONS(113), 3,
      anon_sym_DASH_GT,
      anon_sym_DOT,
      anon_sym_BQUOTE,
  [16497] = 10,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(51), 1,
      anon_sym_BQUOTE,
    ACTIONS(53), 1,
      sym__identifier,
    ACTIONS(1049), 1,
      sym_keyword_side,
    STATE(173), 1,
      sym__table_selection,
    STATE(183), 1,
      sym_identifier,
    STATE(195), 1,
      sym__table_reference,
    STATE(310), 1,
      sym_comment,
    STATE(327), 1,
      sym__join_definition,
  [16528] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(1053), 1,
      sym_keyword_from,
    STATE(311), 1,
      sym_comment,
    ACTIONS(1051), 5,
      ts_builtin_sym_end,
      sym_keyword_func,
      sym_keyword_let,
      sym_keyword_from_text,
      anon_sym_RPAREN,
  [16548] = 9,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(1055), 1,
      anon_sym_DASH_GT,
    ACTIONS(1057), 1,
      anon_sym_BQUOTE,
    ACTIONS(1059), 1,
      sym__identifier,
    STATE(312), 1,
      sym_comment,
    STATE(319), 1,
      aux_sym_function_definition_repeat1,
    STATE(345), 1,
      sym_identifier,
    STATE(357), 1,
      sym_parameter,
  [16576] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(1063), 1,
      sym_keyword_from,
    STATE(313), 1,
      sym_comment,
    ACTIONS(1061), 5,
      ts_builtin_sym_end,
      sym_keyword_func,
      sym_keyword_let,
      sym_keyword_prql,
      sym_keyword_from_text,
  [16596] = 7,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    STATE(314), 1,
      sym_comment,
    STATE(318), 1,
      aux_sym_window_definitions_repeat1,
    STATE(351), 1,
      sym__window_definition,
    STATE(458), 1,
      sym_window_definitions,
    ACTIONS(1065), 3,
      sym_keyword_rolling,
      sym_keyword_rows,
      sym_keyword_expanding,
  [16620] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(1069), 1,
      sym_keyword_from,
    STATE(315), 1,
      sym_comment,
    ACTIONS(1067), 5,
      ts_builtin_sym_end,
      sym_keyword_func,
      sym_keyword_let,
      sym_keyword_prql,
      sym_keyword_from_text,
  [16640] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(1073), 1,
      sym_keyword_from,
    STATE(316), 1,
      sym_comment,
    ACTIONS(1071), 5,
      ts_builtin_sym_end,
      sym_keyword_func,
      sym_keyword_let,
      sym_keyword_prql,
      sym_keyword_from_text,
  [16660] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(1078), 1,
      anon_sym_LPAREN,
    STATE(351), 1,
      sym__window_definition,
    STATE(317), 2,
      sym_comment,
      aux_sym_window_definitions_repeat1,
    ACTIONS(1075), 3,
      sym_keyword_rolling,
      sym_keyword_rows,
      sym_keyword_expanding,
  [16682] = 7,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(1080), 1,
      anon_sym_LPAREN,
    STATE(317), 1,
      aux_sym_window_definitions_repeat1,
    STATE(318), 1,
      sym_comment,
    STATE(351), 1,
      sym__window_definition,
    ACTIONS(1065), 3,
      sym_keyword_rolling,
      sym_keyword_rows,
      sym_keyword_expanding,
  [16706] = 8,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(1082), 1,
      anon_sym_DASH_GT,
    ACTIONS(1084), 1,
      anon_sym_BQUOTE,
    ACTIONS(1087), 1,
      sym__identifier,
    STATE(345), 1,
      sym_identifier,
    STATE(357), 1,
      sym_parameter,
    STATE(319), 2,
      sym_comment,
      aux_sym_function_definition_repeat1,
  [16732] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    STATE(320), 1,
      sym_comment,
    ACTIONS(130), 2,
      anon_sym__,
      sym__identifier,
    ACTIONS(128), 4,
      anon_sym_DASH_GT,
      sym__natural_number,
      anon_sym_DOT,
      anon_sym_BQUOTE,
  [16752] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(1092), 1,
      sym_keyword_from,
    STATE(321), 1,
      sym_comment,
    ACTIONS(1090), 5,
      ts_builtin_sym_end,
      sym_keyword_func,
      sym_keyword_let,
      sym_keyword_prql,
      sym_keyword_from_text,
  [16772] = 7,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(9), 1,
      sym_keyword_from,
    ACTIONS(17), 1,
      sym_keyword_from_text,
    STATE(322), 1,
      sym_comment,
    STATE(415), 1,
      sym_pipeline,
    STATE(157), 2,
      sym_from_text,
      sym_from,
  [16795] = 7,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(1094), 1,
      anon_sym_DASH,
    STATE(12), 1,
      aux_sym__friendly_number,
    STATE(83), 1,
      sym_integer,
    STATE(323), 1,
      sym_comment,
    ACTIONS(45), 2,
      sym__natural_number,
      anon_sym__,
  [16818] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    STATE(324), 1,
      sym_comment,
    ACTIONS(1096), 5,
      sym_keyword_aggregate,
      sym_keyword_sort,
      sym_keyword_take,
      sym_keyword_window,
      anon_sym_RPAREN,
  [16835] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(708), 1,
      anon_sym_DOT_DOT,
    STATE(325), 1,
      sym_comment,
    ACTIONS(1098), 4,
      sym_keyword_rolling,
      sym_keyword_rows,
      sym_keyword_expanding,
      anon_sym_LPAREN,
  [16854] = 7,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(1094), 1,
      anon_sym_DASH,
    STATE(12), 1,
      aux_sym__friendly_number,
    STATE(167), 1,
      sym_integer,
    STATE(326), 1,
      sym_comment,
    ACTIONS(45), 2,
      sym__natural_number,
      anon_sym__,
  [16877] = 8,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(51), 1,
      anon_sym_BQUOTE,
    ACTIONS(1022), 1,
      sym__identifier,
    STATE(182), 1,
      sym__table_selection,
    STATE(183), 1,
      sym_identifier,
    STATE(195), 1,
      sym__table_reference,
    STATE(327), 1,
      sym_comment,
  [16902] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(1102), 1,
      sym_keyword_from,
    STATE(328), 1,
      sym_comment,
    ACTIONS(1100), 4,
      ts_builtin_sym_end,
      sym_keyword_func,
      sym_keyword_let,
      sym_keyword_from_text,
  [16921] = 7,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(1094), 1,
      anon_sym_DASH,
    STATE(12), 1,
      aux_sym__friendly_number,
    STATE(84), 1,
      sym_integer,
    STATE(329), 1,
      sym_comment,
    ACTIONS(45), 2,
      sym__natural_number,
      anon_sym__,
  [16944] = 8,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(1057), 1,
      anon_sym_BQUOTE,
    ACTIONS(1059), 1,
      sym__identifier,
    STATE(312), 1,
      aux_sym_function_definition_repeat1,
    STATE(330), 1,
      sym_comment,
    STATE(345), 1,
      sym_identifier,
    STATE(357), 1,
      sym_parameter,
  [16969] = 7,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(1094), 1,
      anon_sym_DASH,
    STATE(12), 1,
      aux_sym__friendly_number,
    STATE(79), 1,
      sym_integer,
    STATE(331), 1,
      sym_comment,
    ACTIONS(45), 2,
      sym__natural_number,
      anon_sym__,
  [16992] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(1106), 1,
      sym_keyword_from,
    STATE(332), 1,
      sym_comment,
    ACTIONS(1104), 4,
      ts_builtin_sym_end,
      sym_keyword_func,
      sym_keyword_let,
      sym_keyword_from_text,
  [17011] = 8,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(51), 1,
      anon_sym_BQUOTE,
    ACTIONS(1022), 1,
      sym__identifier,
    STATE(183), 1,
      sym_identifier,
    STATE(195), 1,
      sym__table_reference,
    STATE(239), 1,
      sym__table_selection,
    STATE(333), 1,
      sym_comment,
  [17036] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(1110), 1,
      sym_keyword_from,
    STATE(334), 1,
      sym_comment,
    ACTIONS(1108), 4,
      ts_builtin_sym_end,
      sym_keyword_func,
      sym_keyword_let,
      sym_keyword_from_text,
  [17055] = 8,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(51), 1,
      anon_sym_BQUOTE,
    ACTIONS(1022), 1,
      sym__identifier,
    STATE(183), 1,
      sym_identifier,
    STATE(195), 1,
      sym__table_reference,
    STATE(225), 1,
      sym__table_selection,
    STATE(335), 1,
      sym_comment,
  [17080] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    STATE(336), 1,
      sym_comment,
    ACTIONS(1112), 5,
      sym_keyword_aggregate,
      sym_keyword_sort,
      sym_keyword_take,
      sym_keyword_window,
      anon_sym_RPAREN,
  [17097] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(1114), 1,
      anon_sym_DOT,
    STATE(337), 1,
      sym_comment,
    ACTIONS(352), 3,
      anon_sym_DASH_GT,
      anon_sym_BQUOTE,
      sym__identifier,
  [17115] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(1116), 1,
      anon_sym_DOT,
    STATE(307), 1,
      aux_sym__friendly_number,
    STATE(338), 1,
      sym_comment,
    ACTIONS(924), 2,
      sym__natural_number,
      anon_sym__,
  [17135] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(1118), 1,
      sym__natural_number,
    STATE(339), 1,
      sym_comment,
    ACTIONS(366), 3,
      anon_sym_DASH_GT,
      anon_sym_BQUOTE,
      sym__identifier,
  [17153] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    STATE(340), 1,
      sym_comment,
    ACTIONS(1120), 4,
      sym_keyword_inner,
      sym_keyword_left,
      sym_keyword_right,
      sym_keyword_full,
  [17169] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    STATE(341), 1,
      sym_comment,
    ACTIONS(255), 4,
      anon_sym_COLON,
      anon_sym_DASH_GT,
      anon_sym_BQUOTE,
      sym__identifier,
  [17185] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    STATE(342), 1,
      sym_comment,
    ACTIONS(251), 4,
      anon_sym_COLON,
      anon_sym_DASH_GT,
      anon_sym_BQUOTE,
      sym__identifier,
  [17201] = 7,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(1122), 1,
      aux_sym__date_token1,
    ACTIONS(1124), 1,
      aux_sym__time_token1,
    STATE(85), 1,
      sym__date,
    STATE(108), 1,
      sym__time,
    STATE(343), 1,
      sym_comment,
  [17223] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(1126), 1,
      anon_sym_DOT,
    STATE(13), 1,
      aux_sym__friendly_number,
    STATE(344), 1,
      sym_comment,
    ACTIONS(45), 2,
      sym__natural_number,
      anon_sym__,
  [17243] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(1128), 1,
      anon_sym_COLON,
    STATE(345), 1,
      sym_comment,
    ACTIONS(1130), 3,
      anon_sym_DASH_GT,
      anon_sym_BQUOTE,
      sym__identifier,
  [17261] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(1132), 1,
      anon_sym_DOT,
    STATE(151), 1,
      aux_sym__friendly_number,
    STATE(346), 1,
      sym_comment,
    ACTIONS(103), 2,
      sym__natural_number,
      anon_sym__,
  [17281] = 7,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(51), 1,
      anon_sym_BQUOTE,
    ACTIONS(1022), 1,
      sym__identifier,
    STATE(194), 1,
      sym__table_reference,
    STATE(200), 1,
      sym_identifier,
    STATE(347), 1,
      sym_comment,
  [17303] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    STATE(348), 1,
      sym_comment,
    ACTIONS(1098), 4,
      sym_keyword_rolling,
      sym_keyword_rows,
      sym_keyword_expanding,
      anon_sym_LPAREN,
  [17319] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(1134), 1,
      anon_sym_DOT,
    STATE(242), 1,
      aux_sym__friendly_number,
    STATE(349), 1,
      sym_comment,
    ACTIONS(295), 2,
      sym__natural_number,
      anon_sym__,
  [17339] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(1136), 1,
      anon_sym_DOT,
    STATE(121), 1,
      aux_sym__friendly_number,
    STATE(350), 1,
      sym_comment,
    ACTIONS(87), 2,
      sym__natural_number,
      anon_sym__,
  [17359] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    STATE(351), 1,
      sym_comment,
    ACTIONS(1138), 4,
      sym_keyword_rolling,
      sym_keyword_rows,
      sym_keyword_expanding,
      anon_sym_LPAREN,
  [17375] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    STATE(142), 1,
      aux_sym__friendly_number,
    STATE(352), 1,
      sym_comment,
    ACTIONS(591), 2,
      sym__natural_number,
      anon_sym__,
  [17392] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    STATE(353), 1,
      sym_comment,
    ACTIONS(360), 3,
      anon_sym_DASH_GT,
      anon_sym_BQUOTE,
      sym__identifier,
  [17407] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(249), 1,
      anon_sym_RBRACK,
    ACTIONS(1140), 1,
      anon_sym_COMMA,
    STATE(354), 1,
      sym_comment,
    STATE(355), 1,
      aux_sym_conditions_repeat1,
  [17426] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(954), 1,
      anon_sym_RBRACK,
    ACTIONS(1142), 1,
      anon_sym_COMMA,
    STATE(355), 2,
      sym_comment,
      aux_sym_conditions_repeat1,
  [17443] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(243), 1,
      anon_sym_RBRACK,
    ACTIONS(1145), 1,
      anon_sym_COMMA,
    STATE(356), 1,
      sym_comment,
    STATE(363), 1,
      aux_sym_group_repeat1,
  [17462] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    STATE(357), 1,
      sym_comment,
    ACTIONS(1147), 3,
      anon_sym_DASH_GT,
      anon_sym_BQUOTE,
      sym__identifier,
  [17477] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(17), 1,
      sym_keyword_from_text,
    ACTIONS(1149), 1,
      anon_sym_LPAREN,
    STATE(134), 1,
      sym_from_text,
    STATE(358), 1,
      sym_comment,
  [17496] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(940), 1,
      anon_sym_RBRACK,
    ACTIONS(1151), 1,
      anon_sym_COMMA,
    STATE(359), 2,
      sym_comment,
      aux_sym_aggregate_repeat1,
  [17513] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(195), 1,
      anon_sym_RBRACK,
    ACTIONS(1154), 1,
      anon_sym_COMMA,
    STATE(360), 2,
      sym_comment,
      aux_sym_switch_repeat2,
  [17530] = 6,
    ACTIONS(1157), 1,
      aux_sym__inner_triple_quotes_token1,
    ACTIONS(1159), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(1161), 1,
      anon_sym_POUND,
    ACTIONS(1163), 1,
      sym_pipe,
    STATE(361), 1,
      sym_comment,
    STATE(379), 1,
      aux_sym__inner_triple_quotes,
  [17549] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(1165), 1,
      anon_sym_COMMA,
    ACTIONS(1167), 1,
      anon_sym_RBRACK,
    STATE(362), 1,
      sym_comment,
    STATE(368), 1,
      aux_sym_derives_repeat1,
  [17568] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(1169), 1,
      anon_sym_COMMA,
    ACTIONS(1172), 1,
      anon_sym_RBRACK,
    STATE(363), 2,
      sym_comment,
      aux_sym_group_repeat1,
  [17585] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    STATE(364), 1,
      sym_comment,
    ACTIONS(1174), 3,
      anon_sym_BQUOTE,
      sym__identifier,
      aux_sym__date_token2,
  [17600] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(51), 1,
      anon_sym_BQUOTE,
    ACTIONS(1022), 1,
      sym__identifier,
    STATE(180), 1,
      sym_identifier,
    STATE(365), 1,
      sym_comment,
  [17619] = 6,
    ACTIONS(1157), 1,
      aux_sym__inner_triple_quotes_token1,
    ACTIONS(1161), 1,
      anon_sym_POUND,
    ACTIONS(1163), 1,
      sym_pipe,
    ACTIONS(1176), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    STATE(366), 1,
      sym_comment,
    STATE(379), 1,
      aux_sym__inner_triple_quotes,
  [17638] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(1178), 1,
      anon_sym_COMMA,
    ACTIONS(1180), 1,
      anon_sym_RBRACK,
    STATE(367), 1,
      sym_comment,
    STATE(388), 1,
      aux_sym_group_repeat1,
  [17657] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(1182), 1,
      anon_sym_COMMA,
    ACTIONS(1185), 1,
      anon_sym_RBRACK,
    STATE(368), 2,
      sym_comment,
      aux_sym_derives_repeat1,
  [17674] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    STATE(369), 1,
      sym_comment,
    ACTIONS(1187), 3,
      anon_sym_DASH_GT,
      anon_sym_BQUOTE,
      sym__identifier,
  [17689] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(51), 1,
      anon_sym_BQUOTE,
    ACTIONS(1022), 1,
      sym__identifier,
    STATE(370), 1,
      sym_comment,
    STATE(483), 1,
      sym_identifier,
  [17708] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    STATE(371), 1,
      sym_comment,
    ACTIONS(352), 3,
      anon_sym_DASH_GT,
      anon_sym_BQUOTE,
      sym__identifier,
  [17723] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(189), 1,
      anon_sym_RBRACK,
    ACTIONS(1189), 1,
      anon_sym_COMMA,
    STATE(372), 1,
      sym_comment,
    STATE(378), 1,
      aux_sym_group_repeat1,
  [17742] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(1191), 1,
      sym_keyword_format,
    ACTIONS(1193), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    STATE(223), 1,
      sym__triple_quote_string,
    STATE(373), 1,
      sym_comment,
  [17761] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(213), 1,
      anon_sym_RBRACK,
    ACTIONS(1195), 1,
      anon_sym_COMMA,
    STATE(356), 1,
      aux_sym_group_repeat1,
    STATE(374), 1,
      sym_comment,
  [17780] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(51), 1,
      anon_sym_BQUOTE,
    ACTIONS(1022), 1,
      sym__identifier,
    STATE(109), 1,
      sym_identifier,
    STATE(375), 1,
      sym_comment,
  [17799] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    STATE(13), 1,
      aux_sym__friendly_number,
    STATE(376), 1,
      sym_comment,
    ACTIONS(45), 2,
      sym__natural_number,
      anon_sym__,
  [17816] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(233), 1,
      anon_sym_RBRACK,
    ACTIONS(1197), 1,
      anon_sym_COMMA,
    STATE(360), 1,
      aux_sym_switch_repeat2,
    STATE(377), 1,
      sym_comment,
  [17835] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(213), 1,
      anon_sym_RBRACK,
    ACTIONS(1195), 1,
      anon_sym_COMMA,
    STATE(363), 1,
      aux_sym_group_repeat1,
    STATE(378), 1,
      sym_comment,
  [17854] = 5,
    ACTIONS(1161), 1,
      anon_sym_POUND,
    ACTIONS(1163), 1,
      sym_pipe,
    ACTIONS(1199), 1,
      aux_sym__inner_triple_quotes_token1,
    ACTIONS(1202), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    STATE(379), 2,
      aux_sym__inner_triple_quotes,
      sym_comment,
  [17871] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    STATE(380), 1,
      sym_comment,
    ACTIONS(366), 3,
      anon_sym_DASH_GT,
      anon_sym_BQUOTE,
      sym__identifier,
  [17886] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(1204), 1,
      anon_sym_COMMA,
    ACTIONS(1207), 1,
      anon_sym_RBRACK,
    STATE(381), 2,
      sym_comment,
      aux_sym_sorts_repeat1,
  [17903] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(1057), 1,
      anon_sym_BQUOTE,
    ACTIONS(1059), 1,
      sym__identifier,
    STATE(330), 1,
      sym_identifier,
    STATE(382), 1,
      sym_comment,
  [17922] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    STATE(383), 1,
      sym_comment,
    ACTIONS(420), 3,
      anon_sym_DASH_GT,
      anon_sym_BQUOTE,
      sym__identifier,
  [17937] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    STATE(384), 1,
      sym_comment,
    ACTIONS(305), 3,
      anon_sym_DASH_GT,
      anon_sym_BQUOTE,
      sym__identifier,
  [17952] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    STATE(385), 1,
      sym_comment,
    ACTIONS(416), 3,
      anon_sym_DASH_GT,
      anon_sym_BQUOTE,
      sym__identifier,
  [17967] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(1033), 1,
      anon_sym_RBRACK,
    ACTIONS(1209), 1,
      anon_sym_COMMA,
    STATE(381), 1,
      aux_sym_sorts_repeat1,
    STATE(386), 1,
      sym_comment,
  [17986] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(59), 1,
      anon_sym_RBRACK,
    ACTIONS(1211), 1,
      anon_sym_COMMA,
    STATE(359), 1,
      aux_sym_aggregate_repeat1,
    STATE(387), 1,
      sym_comment,
  [18005] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(211), 1,
      anon_sym_RBRACK,
    ACTIONS(1213), 1,
      anon_sym_COMMA,
    STATE(363), 1,
      aux_sym_group_repeat1,
    STATE(388), 1,
      sym_comment,
  [18024] = 6,
    ACTIONS(1157), 1,
      aux_sym__inner_triple_quotes_token1,
    ACTIONS(1161), 1,
      anon_sym_POUND,
    ACTIONS(1163), 1,
      sym_pipe,
    ACTIONS(1215), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    STATE(379), 1,
      aux_sym__inner_triple_quotes,
    STATE(389), 1,
      sym_comment,
  [18043] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(1217), 1,
      anon_sym_COMMA,
    ACTIONS(1219), 1,
      anon_sym_RBRACK,
    STATE(386), 1,
      aux_sym_sorts_repeat1,
    STATE(390), 1,
      sym_comment,
  [18062] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(225), 1,
      anon_sym_RBRACK,
    ACTIONS(1221), 1,
      anon_sym_COMMA,
    STATE(368), 1,
      aux_sym_derives_repeat1,
    STATE(391), 1,
      sym_comment,
  [18081] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(1223), 1,
      anon_sym_COMMA,
    ACTIONS(1225), 1,
      anon_sym_RBRACK,
    STATE(391), 1,
      aux_sym_derives_repeat1,
    STATE(392), 1,
      sym_comment,
  [18100] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(844), 1,
      anon_sym_COMMA,
    ACTIONS(846), 1,
      anon_sym_RBRACK,
    STATE(387), 1,
      aux_sym_aggregate_repeat1,
    STATE(393), 1,
      sym_comment,
  [18119] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(1193), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    STATE(210), 1,
      sym__triple_quote_string,
    STATE(394), 1,
      sym_comment,
  [18135] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(1227), 1,
      sym_keyword_derive,
    STATE(395), 1,
      sym_comment,
    STATE(472), 1,
      sym_derives,
  [18151] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    STATE(396), 1,
      sym_comment,
    ACTIONS(1185), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [18165] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(1229), 1,
      sym_keyword_version,
    ACTIONS(1231), 1,
      sym_keyword_target,
    STATE(397), 1,
      sym_comment,
  [18181] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    STATE(398), 1,
      sym_comment,
    ACTIONS(940), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [18195] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    STATE(399), 1,
      sym_comment,
    ACTIONS(1233), 2,
      anon_sym_BQUOTE,
      sym__identifier,
  [18209] = 5,
    ACTIONS(1157), 1,
      aux_sym__inner_triple_quotes_token1,
    ACTIONS(1161), 1,
      anon_sym_POUND,
    ACTIONS(1163), 1,
      sym_pipe,
    STATE(361), 1,
      aux_sym__inner_triple_quotes,
    STATE(400), 1,
      sym_comment,
  [18225] = 4,
    ACTIONS(1161), 1,
      anon_sym_POUND,
    ACTIONS(1163), 1,
      sym_pipe,
    STATE(401), 1,
      sym_comment,
    ACTIONS(1235), 2,
      aux_sym__inner_triple_quotes_token1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
  [18239] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(1237), 1,
      aux_sym__time_token1,
    STATE(54), 1,
      sym__time,
    STATE(402), 1,
      sym_comment,
  [18255] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    STATE(403), 1,
      sym_comment,
    ACTIONS(1207), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [18269] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    STATE(404), 1,
      sym_comment,
    ACTIONS(1239), 2,
      sym_keyword_csv,
      sym_keyword_json,
  [18283] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(1122), 1,
      aux_sym__date_token1,
    STATE(160), 1,
      sym__date,
    STATE(405), 1,
      sym_comment,
  [18299] = 5,
    ACTIONS(1157), 1,
      aux_sym__inner_triple_quotes_token1,
    ACTIONS(1161), 1,
      anon_sym_POUND,
    ACTIONS(1163), 1,
      sym_pipe,
    STATE(366), 1,
      aux_sym__inner_triple_quotes,
    STATE(406), 1,
      sym_comment,
  [18315] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(1037), 1,
      anon_sym_AT,
    STATE(167), 1,
      sym_date,
    STATE(407), 1,
      sym_comment,
  [18331] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    STATE(408), 1,
      sym_comment,
    ACTIONS(1172), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [18345] = 5,
    ACTIONS(1157), 1,
      aux_sym__inner_triple_quotes_token1,
    ACTIONS(1161), 1,
      anon_sym_POUND,
    ACTIONS(1163), 1,
      sym_pipe,
    STATE(389), 1,
      aux_sym__inner_triple_quotes,
    STATE(409), 1,
      sym_comment,
  [18361] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(33), 1,
      anon_sym_DQUOTE,
    STATE(313), 1,
      sym__double_quote_string,
    STATE(410), 1,
      sym_comment,
  [18377] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(1241), 1,
      anon_sym_BQUOTE,
    STATE(411), 1,
      sym_comment,
  [18390] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(1243), 1,
      anon_sym_COLON,
    STATE(412), 1,
      sym_comment,
  [18403] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(1245), 1,
      aux_sym__date_token2,
    STATE(413), 1,
      sym_comment,
  [18416] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(1247), 1,
      aux_sym__date_token2,
    STATE(414), 1,
      sym_comment,
  [18429] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(1249), 1,
      anon_sym_RPAREN,
    STATE(415), 1,
      sym_comment,
  [18442] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(189), 1,
      anon_sym_RBRACK,
    STATE(416), 1,
      sym_comment,
  [18455] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(1219), 1,
      anon_sym_RBRACK,
    STATE(417), 1,
      sym_comment,
  [18468] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(846), 1,
      anon_sym_RBRACK,
    STATE(418), 1,
      sym_comment,
  [18481] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(1251), 1,
      anon_sym_LPAREN,
    STATE(419), 1,
      sym_comment,
  [18494] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(1180), 1,
      anon_sym_RBRACK,
    STATE(420), 1,
      sym_comment,
  [18507] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(1225), 1,
      anon_sym_RBRACK,
    STATE(421), 1,
      sym_comment,
  [18520] = 4,
    ACTIONS(1161), 1,
      anon_sym_POUND,
    ACTIONS(1163), 1,
      sym_pipe,
    ACTIONS(1253), 1,
      aux_sym_comment_token1,
    STATE(422), 1,
      sym_comment,
  [18533] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(1255), 1,
      anon_sym_DASH,
    STATE(423), 1,
      sym_comment,
  [18546] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(1257), 1,
      anon_sym_DQUOTE,
    STATE(424), 1,
      sym_comment,
  [18559] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(1259), 1,
      anon_sym_DQUOTE,
    STATE(425), 1,
      sym_comment,
  [18572] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(1261), 1,
      anon_sym_SQUOTE,
    STATE(426), 1,
      sym_comment,
  [18585] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(1263), 1,
      anon_sym_DQUOTE,
    STATE(427), 1,
      sym_comment,
  [18598] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(370), 1,
      sym__natural_number,
    STATE(428), 1,
      sym_comment,
  [18611] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(1265), 1,
      anon_sym_LBRACK,
    STATE(429), 1,
      sym_comment,
  [18624] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(1267), 1,
      anon_sym_COLON,
    STATE(430), 1,
      sym_comment,
  [18637] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(1269), 1,
      anon_sym_DOT_DOT,
    STATE(431), 1,
      sym_comment,
  [18650] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(1271), 1,
      anon_sym_LPAREN,
    STATE(432), 1,
      sym_comment,
  [18663] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(1273), 1,
      anon_sym_RPAREN,
    STATE(433), 1,
      sym_comment,
  [18676] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(213), 1,
      anon_sym_RBRACK,
    STATE(434), 1,
      sym_comment,
  [18689] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(1275), 1,
      anon_sym_LPAREN,
    STATE(435), 1,
      sym_comment,
  [18702] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(1277), 1,
      anon_sym_DOT,
    STATE(436), 1,
      sym_comment,
  [18715] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(1279), 1,
      sym__natural_number,
    STATE(437), 1,
      sym_comment,
  [18728] = 4,
    ACTIONS(1161), 1,
      anon_sym_POUND,
    ACTIONS(1163), 1,
      sym_pipe,
    ACTIONS(1281), 1,
      aux_sym__double_quote_string_token1,
    STATE(438), 1,
      sym_comment,
  [18741] = 4,
    ACTIONS(1161), 1,
      anon_sym_POUND,
    ACTIONS(1163), 1,
      sym_pipe,
    ACTIONS(1283), 1,
      aux_sym__double_quote_string_token1,
    STATE(439), 1,
      sym_comment,
  [18754] = 4,
    ACTIONS(1161), 1,
      anon_sym_POUND,
    ACTIONS(1163), 1,
      sym_pipe,
    ACTIONS(1285), 1,
      aux_sym__single_quote_string_token1,
    STATE(440), 1,
      sym_comment,
  [18767] = 4,
    ACTIONS(1161), 1,
      anon_sym_POUND,
    ACTIONS(1163), 1,
      sym_pipe,
    ACTIONS(1287), 1,
      aux_sym__double_quote_string_token1,
    STATE(441), 1,
      sym_comment,
  [18780] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(1289), 1,
      anon_sym_LPAREN,
    STATE(442), 1,
      sym_comment,
  [18793] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(1291), 1,
      aux_sym__date_token2,
    STATE(443), 1,
      sym_comment,
  [18806] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(1293), 1,
      aux_sym__date_token2,
    STATE(444), 1,
      sym_comment,
  [18819] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(1295), 1,
      anon_sym_COMMA,
    STATE(445), 1,
      sym_comment,
  [18832] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(1297), 1,
      anon_sym_COMMA,
    STATE(446), 1,
      sym_comment,
  [18845] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(1299), 1,
      anon_sym_BQUOTE,
    STATE(447), 1,
      sym_comment,
  [18858] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(1301), 1,
      anon_sym_LBRACK,
    STATE(448), 1,
      sym_comment,
  [18871] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(1303), 1,
      anon_sym_RPAREN,
    STATE(449), 1,
      sym_comment,
  [18884] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(1305), 1,
      aux_sym__date_token2,
    STATE(450), 1,
      sym_comment,
  [18897] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(1307), 1,
      sym__natural_number,
    STATE(451), 1,
      sym_comment,
  [18910] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(1118), 1,
      sym__natural_number,
    STATE(452), 1,
      sym_comment,
  [18923] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(1309), 1,
      anon_sym_DQUOTE,
    STATE(453), 1,
      sym_comment,
  [18936] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(1311), 1,
      anon_sym_SQUOTE,
    STATE(454), 1,
      sym_comment,
  [18949] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(1313), 1,
      anon_sym_DASH,
    STATE(455), 1,
      sym_comment,
  [18962] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(1315), 1,
      anon_sym_LBRACK,
    STATE(456), 1,
      sym_comment,
  [18975] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(1317), 1,
      anon_sym_BQUOTE,
    STATE(457), 1,
      sym_comment,
  [18988] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(1319), 1,
      anon_sym_LPAREN,
    STATE(458), 1,
      sym_comment,
  [19001] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(1321), 1,
      sym__natural_number,
    STATE(459), 1,
      sym_comment,
  [19014] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(1323), 1,
      sym__natural_number,
    STATE(460), 1,
      sym_comment,
  [19027] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(1325), 1,
      anon_sym_DQUOTE,
    STATE(461), 1,
      sym_comment,
  [19040] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(1327), 1,
      anon_sym_SQUOTE,
    STATE(462), 1,
      sym_comment,
  [19053] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(1329), 1,
      anon_sym_COLON,
    STATE(463), 1,
      sym_comment,
  [19066] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(1331), 1,
      anon_sym_COLON,
    STATE(464), 1,
      sym_comment,
  [19079] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(1333), 1,
      anon_sym_BQUOTE,
    STATE(465), 1,
      sym_comment,
  [19092] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(1335), 1,
      anon_sym_LPAREN,
    STATE(466), 1,
      sym_comment,
  [19105] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(1337), 1,
      sym__natural_number,
    STATE(467), 1,
      sym_comment,
  [19118] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(1339), 1,
      sym__natural_number,
    STATE(468), 1,
      sym_comment,
  [19131] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(1341), 1,
      anon_sym_DQUOTE,
    STATE(469), 1,
      sym_comment,
  [19144] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(1343), 1,
      anon_sym_SQUOTE,
    STATE(470), 1,
      sym_comment,
  [19157] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(1345), 1,
      anon_sym_BQUOTE,
    STATE(471), 1,
      sym_comment,
  [19170] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(1347), 1,
      anon_sym_RPAREN,
    STATE(472), 1,
      sym_comment,
  [19183] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(1349), 1,
      sym__natural_number,
    STATE(473), 1,
      sym_comment,
  [19196] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(1351), 1,
      sym__natural_number,
    STATE(474), 1,
      sym_comment,
  [19209] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(1353), 1,
      anon_sym_DQUOTE,
    STATE(475), 1,
      sym_comment,
  [19222] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(1355), 1,
      anon_sym_SQUOTE,
    STATE(476), 1,
      sym_comment,
  [19235] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(1357), 1,
      anon_sym_BQUOTE,
    STATE(477), 1,
      sym_comment,
  [19248] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(1359), 1,
      anon_sym_BQUOTE,
    STATE(478), 1,
      sym_comment,
  [19261] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(1361), 1,
      anon_sym_BQUOTE,
    STATE(479), 1,
      sym_comment,
  [19274] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(1363), 1,
      sym__identifier_dot,
    STATE(480), 1,
      sym_comment,
  [19287] = 4,
    ACTIONS(1161), 1,
      anon_sym_POUND,
    ACTIONS(1163), 1,
      sym_pipe,
    ACTIONS(1365), 1,
      aux_sym__double_quote_string_token1,
    STATE(481), 1,
      sym_comment,
  [19300] = 4,
    ACTIONS(1161), 1,
      anon_sym_POUND,
    ACTIONS(1163), 1,
      sym_pipe,
    ACTIONS(1367), 1,
      aux_sym__single_quote_string_token1,
    STATE(482), 1,
      sym_comment,
  [19313] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(1369), 1,
      anon_sym_EQ,
    STATE(483), 1,
      sym_comment,
  [19326] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(1371), 1,
      sym__identifier_dot,
    STATE(484), 1,
      sym_comment,
  [19339] = 4,
    ACTIONS(1161), 1,
      anon_sym_POUND,
    ACTIONS(1163), 1,
      sym_pipe,
    ACTIONS(1373), 1,
      aux_sym__double_quote_string_token1,
    STATE(485), 1,
      sym_comment,
  [19352] = 4,
    ACTIONS(1161), 1,
      anon_sym_POUND,
    ACTIONS(1163), 1,
      sym_pipe,
    ACTIONS(1375), 1,
      aux_sym__single_quote_string_token1,
    STATE(486), 1,
      sym_comment,
  [19365] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(1377), 1,
      sym__identifier_dot,
    STATE(487), 1,
      sym_comment,
  [19378] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(1379), 1,
      sym__identifier_dot,
    STATE(488), 1,
      sym_comment,
  [19391] = 4,
    ACTIONS(1161), 1,
      anon_sym_POUND,
    ACTIONS(1163), 1,
      sym_pipe,
    ACTIONS(1381), 1,
      aux_sym__double_quote_string_token1,
    STATE(489), 1,
      sym_comment,
  [19404] = 4,
    ACTIONS(1161), 1,
      anon_sym_POUND,
    ACTIONS(1163), 1,
      sym_pipe,
    ACTIONS(1383), 1,
      aux_sym__single_quote_string_token1,
    STATE(490), 1,
      sym_comment,
  [19417] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(1385), 1,
      sym__identifier_dot,
    STATE(491), 1,
      sym_comment,
  [19430] = 4,
    ACTIONS(1161), 1,
      anon_sym_POUND,
    ACTIONS(1163), 1,
      sym_pipe,
    ACTIONS(1387), 1,
      aux_sym__double_quote_string_token1,
    STATE(492), 1,
      sym_comment,
  [19443] = 4,
    ACTIONS(1161), 1,
      anon_sym_POUND,
    ACTIONS(1163), 1,
      sym_pipe,
    ACTIONS(1389), 1,
      aux_sym__single_quote_string_token1,
    STATE(493), 1,
      sym_comment,
  [19456] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(1391), 1,
      sym__identifier_dot,
    STATE(494), 1,
      sym_comment,
  [19469] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(1393), 1,
      sym__identifier_dot,
    STATE(495), 1,
      sym_comment,
  [19482] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(1395), 1,
      sym__identifier_dot,
    STATE(496), 1,
      sym_comment,
  [19495] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(134), 1,
      anon_sym_RBRACK,
    STATE(497), 1,
      sym_comment,
  [19508] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(1397), 1,
      ts_builtin_sym_end,
    STATE(498), 1,
      sym_comment,
  [19521] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(1399), 1,
      anon_sym_COLON,
    STATE(499), 1,
      sym_comment,
  [19534] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(936), 1,
      anon_sym_RBRACK,
    STATE(500), 1,
      sym_comment,
  [19547] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(5), 1,
      sym_pipe,
    ACTIONS(1401), 1,
      anon_sym_RBRACK,
    STATE(501), 1,
      sym_comment,
  [19560] = 1,
    ACTIONS(1403), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 128,
  [SMALL_STATE(4)] = 253,
  [SMALL_STATE(5)] = 378,
  [SMALL_STATE(6)] = 500,
  [SMALL_STATE(7)] = 622,
  [SMALL_STATE(8)] = 744,
  [SMALL_STATE(9)] = 866,
  [SMALL_STATE(10)] = 961,
  [SMALL_STATE(11)] = 1081,
  [SMALL_STATE(12)] = 1172,
  [SMALL_STATE(13)] = 1234,
  [SMALL_STATE(14)] = 1296,
  [SMALL_STATE(15)] = 1356,
  [SMALL_STATE(16)] = 1413,
  [SMALL_STATE(17)] = 1532,
  [SMALL_STATE(18)] = 1644,
  [SMALL_STATE(19)] = 1756,
  [SMALL_STATE(20)] = 1868,
  [SMALL_STATE(21)] = 1984,
  [SMALL_STATE(22)] = 2098,
  [SMALL_STATE(23)] = 2210,
  [SMALL_STATE(24)] = 2322,
  [SMALL_STATE(25)] = 2434,
  [SMALL_STATE(26)] = 2546,
  [SMALL_STATE(27)] = 2655,
  [SMALL_STATE(28)] = 2764,
  [SMALL_STATE(29)] = 2819,
  [SMALL_STATE(30)] = 2928,
  [SMALL_STATE(31)] = 3041,
  [SMALL_STATE(32)] = 3150,
  [SMALL_STATE(33)] = 3259,
  [SMALL_STATE(34)] = 3368,
  [SMALL_STATE(35)] = 3477,
  [SMALL_STATE(36)] = 3590,
  [SMALL_STATE(37)] = 3701,
  [SMALL_STATE(38)] = 3810,
  [SMALL_STATE(39)] = 3919,
  [SMALL_STATE(40)] = 4028,
  [SMALL_STATE(41)] = 4137,
  [SMALL_STATE(42)] = 4246,
  [SMALL_STATE(43)] = 4356,
  [SMALL_STATE(44)] = 4462,
  [SMALL_STATE(45)] = 4568,
  [SMALL_STATE(46)] = 4674,
  [SMALL_STATE(47)] = 4778,
  [SMALL_STATE(48)] = 4883,
  [SMALL_STATE(49)] = 4936,
  [SMALL_STATE(50)] = 4989,
  [SMALL_STATE(51)] = 5092,
  [SMALL_STATE(52)] = 5197,
  [SMALL_STATE(53)] = 5299,
  [SMALL_STATE(54)] = 5401,
  [SMALL_STATE(55)] = 5463,
  [SMALL_STATE(56)] = 5519,
  [SMALL_STATE(57)] = 5575,
  [SMALL_STATE(58)] = 5675,
  [SMALL_STATE(59)] = 5775,
  [SMALL_STATE(60)] = 5875,
  [SMALL_STATE(61)] = 5977,
  [SMALL_STATE(62)] = 6029,
  [SMALL_STATE(63)] = 6129,
  [SMALL_STATE(64)] = 6231,
  [SMALL_STATE(65)] = 6283,
  [SMALL_STATE(66)] = 6385,
  [SMALL_STATE(67)] = 6485,
  [SMALL_STATE(68)] = 6585,
  [SMALL_STATE(69)] = 6687,
  [SMALL_STATE(70)] = 6787,
  [SMALL_STATE(71)] = 6887,
  [SMALL_STATE(72)] = 6987,
  [SMALL_STATE(73)] = 7087,
  [SMALL_STATE(74)] = 7170,
  [SMALL_STATE(75)] = 7221,
  [SMALL_STATE(76)] = 7306,
  [SMALL_STATE(77)] = 7359,
  [SMALL_STATE(78)] = 7442,
  [SMALL_STATE(79)] = 7494,
  [SMALL_STATE(80)] = 7544,
  [SMALL_STATE(81)] = 7596,
  [SMALL_STATE(82)] = 7648,
  [SMALL_STATE(83)] = 7700,
  [SMALL_STATE(84)] = 7750,
  [SMALL_STATE(85)] = 7800,
  [SMALL_STATE(86)] = 7852,
  [SMALL_STATE(87)] = 7901,
  [SMALL_STATE(88)] = 7950,
  [SMALL_STATE(89)] = 7999,
  [SMALL_STATE(90)] = 8048,
  [SMALL_STATE(91)] = 8097,
  [SMALL_STATE(92)] = 8146,
  [SMALL_STATE(93)] = 8201,
  [SMALL_STATE(94)] = 8250,
  [SMALL_STATE(95)] = 8299,
  [SMALL_STATE(96)] = 8348,
  [SMALL_STATE(97)] = 8397,
  [SMALL_STATE(98)] = 8446,
  [SMALL_STATE(99)] = 8495,
  [SMALL_STATE(100)] = 8544,
  [SMALL_STATE(101)] = 8593,
  [SMALL_STATE(102)] = 8642,
  [SMALL_STATE(103)] = 8691,
  [SMALL_STATE(104)] = 8744,
  [SMALL_STATE(105)] = 8793,
  [SMALL_STATE(106)] = 8852,
  [SMALL_STATE(107)] = 8901,
  [SMALL_STATE(108)] = 8950,
  [SMALL_STATE(109)] = 8999,
  [SMALL_STATE(110)] = 9048,
  [SMALL_STATE(111)] = 9109,
  [SMALL_STATE(112)] = 9172,
  [SMALL_STATE(113)] = 9251,
  [SMALL_STATE(114)] = 9332,
  [SMALL_STATE(115)] = 9393,
  [SMALL_STATE(116)] = 9454,
  [SMALL_STATE(117)] = 9512,
  [SMALL_STATE(118)] = 9572,
  [SMALL_STATE(119)] = 9614,
  [SMALL_STATE(120)] = 9656,
  [SMALL_STATE(121)] = 9702,
  [SMALL_STATE(122)] = 9746,
  [SMALL_STATE(123)] = 9790,
  [SMALL_STATE(124)] = 9834,
  [SMALL_STATE(125)] = 9875,
  [SMALL_STATE(126)] = 9940,
  [SMALL_STATE(127)] = 9981,
  [SMALL_STATE(128)] = 10022,
  [SMALL_STATE(129)] = 10063,
  [SMALL_STATE(130)] = 10104,
  [SMALL_STATE(131)] = 10145,
  [SMALL_STATE(132)] = 10186,
  [SMALL_STATE(133)] = 10227,
  [SMALL_STATE(134)] = 10268,
  [SMALL_STATE(135)] = 10333,
  [SMALL_STATE(136)] = 10374,
  [SMALL_STATE(137)] = 10415,
  [SMALL_STATE(138)] = 10456,
  [SMALL_STATE(139)] = 10497,
  [SMALL_STATE(140)] = 10551,
  [SMALL_STATE(141)] = 10611,
  [SMALL_STATE(142)] = 10653,
  [SMALL_STATE(143)] = 10697,
  [SMALL_STATE(144)] = 10759,
  [SMALL_STATE(145)] = 10803,
  [SMALL_STATE(146)] = 10872,
  [SMALL_STATE(147)] = 10943,
  [SMALL_STATE(148)] = 10982,
  [SMALL_STATE(149)] = 11022,
  [SMALL_STATE(150)] = 11062,
  [SMALL_STATE(151)] = 11100,
  [SMALL_STATE(152)] = 11140,
  [SMALL_STATE(153)] = 11182,
  [SMALL_STATE(154)] = 11220,
  [SMALL_STATE(155)] = 11257,
  [SMALL_STATE(156)] = 11294,
  [SMALL_STATE(157)] = 11331,
  [SMALL_STATE(158)] = 11390,
  [SMALL_STATE(159)] = 11427,
  [SMALL_STATE(160)] = 11464,
  [SMALL_STATE(161)] = 11501,
  [SMALL_STATE(162)] = 11538,
  [SMALL_STATE(163)] = 11575,
  [SMALL_STATE(164)] = 11612,
  [SMALL_STATE(165)] = 11649,
  [SMALL_STATE(166)] = 11686,
  [SMALL_STATE(167)] = 11723,
  [SMALL_STATE(168)] = 11759,
  [SMALL_STATE(169)] = 11815,
  [SMALL_STATE(170)] = 11869,
  [SMALL_STATE(171)] = 11903,
  [SMALL_STATE(172)] = 11937,
  [SMALL_STATE(173)] = 11971,
  [SMALL_STATE(174)] = 12011,
  [SMALL_STATE(175)] = 12045,
  [SMALL_STATE(176)] = 12079,
  [SMALL_STATE(177)] = 12113,
  [SMALL_STATE(178)] = 12147,
  [SMALL_STATE(179)] = 12181,
  [SMALL_STATE(180)] = 12215,
  [SMALL_STATE(181)] = 12249,
  [SMALL_STATE(182)] = 12283,
  [SMALL_STATE(183)] = 12323,
  [SMALL_STATE(184)] = 12358,
  [SMALL_STATE(185)] = 12393,
  [SMALL_STATE(186)] = 12426,
  [SMALL_STATE(187)] = 12459,
  [SMALL_STATE(188)] = 12492,
  [SMALL_STATE(189)] = 12524,
  [SMALL_STATE(190)] = 12556,
  [SMALL_STATE(191)] = 12588,
  [SMALL_STATE(192)] = 12634,
  [SMALL_STATE(193)] = 12666,
  [SMALL_STATE(194)] = 12698,
  [SMALL_STATE(195)] = 12730,
  [SMALL_STATE(196)] = 12762,
  [SMALL_STATE(197)] = 12798,
  [SMALL_STATE(198)] = 12830,
  [SMALL_STATE(199)] = 12862,
  [SMALL_STATE(200)] = 12894,
  [SMALL_STATE(201)] = 12926,
  [SMALL_STATE(202)] = 12958,
  [SMALL_STATE(203)] = 12990,
  [SMALL_STATE(204)] = 13021,
  [SMALL_STATE(205)] = 13052,
  [SMALL_STATE(206)] = 13083,
  [SMALL_STATE(207)] = 13114,
  [SMALL_STATE(208)] = 13145,
  [SMALL_STATE(209)] = 13176,
  [SMALL_STATE(210)] = 13207,
  [SMALL_STATE(211)] = 13238,
  [SMALL_STATE(212)] = 13269,
  [SMALL_STATE(213)] = 13300,
  [SMALL_STATE(214)] = 13331,
  [SMALL_STATE(215)] = 13362,
  [SMALL_STATE(216)] = 13393,
  [SMALL_STATE(217)] = 13424,
  [SMALL_STATE(218)] = 13455,
  [SMALL_STATE(219)] = 13486,
  [SMALL_STATE(220)] = 13517,
  [SMALL_STATE(221)] = 13548,
  [SMALL_STATE(222)] = 13585,
  [SMALL_STATE(223)] = 13616,
  [SMALL_STATE(224)] = 13647,
  [SMALL_STATE(225)] = 13678,
  [SMALL_STATE(226)] = 13709,
  [SMALL_STATE(227)] = 13740,
  [SMALL_STATE(228)] = 13771,
  [SMALL_STATE(229)] = 13802,
  [SMALL_STATE(230)] = 13833,
  [SMALL_STATE(231)] = 13864,
  [SMALL_STATE(232)] = 13895,
  [SMALL_STATE(233)] = 13926,
  [SMALL_STATE(234)] = 13957,
  [SMALL_STATE(235)] = 13988,
  [SMALL_STATE(236)] = 14019,
  [SMALL_STATE(237)] = 14050,
  [SMALL_STATE(238)] = 14081,
  [SMALL_STATE(239)] = 14112,
  [SMALL_STATE(240)] = 14143,
  [SMALL_STATE(241)] = 14176,
  [SMALL_STATE(242)] = 14224,
  [SMALL_STATE(243)] = 14256,
  [SMALL_STATE(244)] = 14304,
  [SMALL_STATE(245)] = 14336,
  [SMALL_STATE(246)] = 14384,
  [SMALL_STATE(247)] = 14420,
  [SMALL_STATE(248)] = 14468,
  [SMALL_STATE(249)] = 14498,
  [SMALL_STATE(250)] = 14530,
  [SMALL_STATE(251)] = 14560,
  [SMALL_STATE(252)] = 14608,
  [SMALL_STATE(253)] = 14656,
  [SMALL_STATE(254)] = 14690,
  [SMALL_STATE(255)] = 14720,
  [SMALL_STATE(256)] = 14752,
  [SMALL_STATE(257)] = 14781,
  [SMALL_STATE(258)] = 14810,
  [SMALL_STATE(259)] = 14839,
  [SMALL_STATE(260)] = 14868,
  [SMALL_STATE(261)] = 14897,
  [SMALL_STATE(262)] = 14938,
  [SMALL_STATE(263)] = 14979,
  [SMALL_STATE(264)] = 15010,
  [SMALL_STATE(265)] = 15039,
  [SMALL_STATE(266)] = 15068,
  [SMALL_STATE(267)] = 15097,
  [SMALL_STATE(268)] = 15126,
  [SMALL_STATE(269)] = 15155,
  [SMALL_STATE(270)] = 15184,
  [SMALL_STATE(271)] = 15224,
  [SMALL_STATE(272)] = 15260,
  [SMALL_STATE(273)] = 15298,
  [SMALL_STATE(274)] = 15326,
  [SMALL_STATE(275)] = 15372,
  [SMALL_STATE(276)] = 15412,
  [SMALL_STATE(277)] = 15442,
  [SMALL_STATE(278)] = 15482,
  [SMALL_STATE(279)] = 15512,
  [SMALL_STATE(280)] = 15542,
  [SMALL_STATE(281)] = 15572,
  [SMALL_STATE(282)] = 15602,
  [SMALL_STATE(283)] = 15639,
  [SMALL_STATE(284)] = 15676,
  [SMALL_STATE(285)] = 15702,
  [SMALL_STATE(286)] = 15739,
  [SMALL_STATE(287)] = 15774,
  [SMALL_STATE(288)] = 15811,
  [SMALL_STATE(289)] = 15845,
  [SMALL_STATE(290)] = 15879,
  [SMALL_STATE(291)] = 15913,
  [SMALL_STATE(292)] = 15947,
  [SMALL_STATE(293)] = 15981,
  [SMALL_STATE(294)] = 16013,
  [SMALL_STATE(295)] = 16048,
  [SMALL_STATE(296)] = 16079,
  [SMALL_STATE(297)] = 16110,
  [SMALL_STATE(298)] = 16141,
  [SMALL_STATE(299)] = 16172,
  [SMALL_STATE(300)] = 16203,
  [SMALL_STATE(301)] = 16229,
  [SMALL_STATE(302)] = 16261,
  [SMALL_STATE(303)] = 16293,
  [SMALL_STATE(304)] = 16325,
  [SMALL_STATE(305)] = 16357,
  [SMALL_STATE(306)] = 16389,
  [SMALL_STATE(307)] = 16414,
  [SMALL_STATE(308)] = 16441,
  [SMALL_STATE(309)] = 16470,
  [SMALL_STATE(310)] = 16497,
  [SMALL_STATE(311)] = 16528,
  [SMALL_STATE(312)] = 16548,
  [SMALL_STATE(313)] = 16576,
  [SMALL_STATE(314)] = 16596,
  [SMALL_STATE(315)] = 16620,
  [SMALL_STATE(316)] = 16640,
  [SMALL_STATE(317)] = 16660,
  [SMALL_STATE(318)] = 16682,
  [SMALL_STATE(319)] = 16706,
  [SMALL_STATE(320)] = 16732,
  [SMALL_STATE(321)] = 16752,
  [SMALL_STATE(322)] = 16772,
  [SMALL_STATE(323)] = 16795,
  [SMALL_STATE(324)] = 16818,
  [SMALL_STATE(325)] = 16835,
  [SMALL_STATE(326)] = 16854,
  [SMALL_STATE(327)] = 16877,
  [SMALL_STATE(328)] = 16902,
  [SMALL_STATE(329)] = 16921,
  [SMALL_STATE(330)] = 16944,
  [SMALL_STATE(331)] = 16969,
  [SMALL_STATE(332)] = 16992,
  [SMALL_STATE(333)] = 17011,
  [SMALL_STATE(334)] = 17036,
  [SMALL_STATE(335)] = 17055,
  [SMALL_STATE(336)] = 17080,
  [SMALL_STATE(337)] = 17097,
  [SMALL_STATE(338)] = 17115,
  [SMALL_STATE(339)] = 17135,
  [SMALL_STATE(340)] = 17153,
  [SMALL_STATE(341)] = 17169,
  [SMALL_STATE(342)] = 17185,
  [SMALL_STATE(343)] = 17201,
  [SMALL_STATE(344)] = 17223,
  [SMALL_STATE(345)] = 17243,
  [SMALL_STATE(346)] = 17261,
  [SMALL_STATE(347)] = 17281,
  [SMALL_STATE(348)] = 17303,
  [SMALL_STATE(349)] = 17319,
  [SMALL_STATE(350)] = 17339,
  [SMALL_STATE(351)] = 17359,
  [SMALL_STATE(352)] = 17375,
  [SMALL_STATE(353)] = 17392,
  [SMALL_STATE(354)] = 17407,
  [SMALL_STATE(355)] = 17426,
  [SMALL_STATE(356)] = 17443,
  [SMALL_STATE(357)] = 17462,
  [SMALL_STATE(358)] = 17477,
  [SMALL_STATE(359)] = 17496,
  [SMALL_STATE(360)] = 17513,
  [SMALL_STATE(361)] = 17530,
  [SMALL_STATE(362)] = 17549,
  [SMALL_STATE(363)] = 17568,
  [SMALL_STATE(364)] = 17585,
  [SMALL_STATE(365)] = 17600,
  [SMALL_STATE(366)] = 17619,
  [SMALL_STATE(367)] = 17638,
  [SMALL_STATE(368)] = 17657,
  [SMALL_STATE(369)] = 17674,
  [SMALL_STATE(370)] = 17689,
  [SMALL_STATE(371)] = 17708,
  [SMALL_STATE(372)] = 17723,
  [SMALL_STATE(373)] = 17742,
  [SMALL_STATE(374)] = 17761,
  [SMALL_STATE(375)] = 17780,
  [SMALL_STATE(376)] = 17799,
  [SMALL_STATE(377)] = 17816,
  [SMALL_STATE(378)] = 17835,
  [SMALL_STATE(379)] = 17854,
  [SMALL_STATE(380)] = 17871,
  [SMALL_STATE(381)] = 17886,
  [SMALL_STATE(382)] = 17903,
  [SMALL_STATE(383)] = 17922,
  [SMALL_STATE(384)] = 17937,
  [SMALL_STATE(385)] = 17952,
  [SMALL_STATE(386)] = 17967,
  [SMALL_STATE(387)] = 17986,
  [SMALL_STATE(388)] = 18005,
  [SMALL_STATE(389)] = 18024,
  [SMALL_STATE(390)] = 18043,
  [SMALL_STATE(391)] = 18062,
  [SMALL_STATE(392)] = 18081,
  [SMALL_STATE(393)] = 18100,
  [SMALL_STATE(394)] = 18119,
  [SMALL_STATE(395)] = 18135,
  [SMALL_STATE(396)] = 18151,
  [SMALL_STATE(397)] = 18165,
  [SMALL_STATE(398)] = 18181,
  [SMALL_STATE(399)] = 18195,
  [SMALL_STATE(400)] = 18209,
  [SMALL_STATE(401)] = 18225,
  [SMALL_STATE(402)] = 18239,
  [SMALL_STATE(403)] = 18255,
  [SMALL_STATE(404)] = 18269,
  [SMALL_STATE(405)] = 18283,
  [SMALL_STATE(406)] = 18299,
  [SMALL_STATE(407)] = 18315,
  [SMALL_STATE(408)] = 18331,
  [SMALL_STATE(409)] = 18345,
  [SMALL_STATE(410)] = 18361,
  [SMALL_STATE(411)] = 18377,
  [SMALL_STATE(412)] = 18390,
  [SMALL_STATE(413)] = 18403,
  [SMALL_STATE(414)] = 18416,
  [SMALL_STATE(415)] = 18429,
  [SMALL_STATE(416)] = 18442,
  [SMALL_STATE(417)] = 18455,
  [SMALL_STATE(418)] = 18468,
  [SMALL_STATE(419)] = 18481,
  [SMALL_STATE(420)] = 18494,
  [SMALL_STATE(421)] = 18507,
  [SMALL_STATE(422)] = 18520,
  [SMALL_STATE(423)] = 18533,
  [SMALL_STATE(424)] = 18546,
  [SMALL_STATE(425)] = 18559,
  [SMALL_STATE(426)] = 18572,
  [SMALL_STATE(427)] = 18585,
  [SMALL_STATE(428)] = 18598,
  [SMALL_STATE(429)] = 18611,
  [SMALL_STATE(430)] = 18624,
  [SMALL_STATE(431)] = 18637,
  [SMALL_STATE(432)] = 18650,
  [SMALL_STATE(433)] = 18663,
  [SMALL_STATE(434)] = 18676,
  [SMALL_STATE(435)] = 18689,
  [SMALL_STATE(436)] = 18702,
  [SMALL_STATE(437)] = 18715,
  [SMALL_STATE(438)] = 18728,
  [SMALL_STATE(439)] = 18741,
  [SMALL_STATE(440)] = 18754,
  [SMALL_STATE(441)] = 18767,
  [SMALL_STATE(442)] = 18780,
  [SMALL_STATE(443)] = 18793,
  [SMALL_STATE(444)] = 18806,
  [SMALL_STATE(445)] = 18819,
  [SMALL_STATE(446)] = 18832,
  [SMALL_STATE(447)] = 18845,
  [SMALL_STATE(448)] = 18858,
  [SMALL_STATE(449)] = 18871,
  [SMALL_STATE(450)] = 18884,
  [SMALL_STATE(451)] = 18897,
  [SMALL_STATE(452)] = 18910,
  [SMALL_STATE(453)] = 18923,
  [SMALL_STATE(454)] = 18936,
  [SMALL_STATE(455)] = 18949,
  [SMALL_STATE(456)] = 18962,
  [SMALL_STATE(457)] = 18975,
  [SMALL_STATE(458)] = 18988,
  [SMALL_STATE(459)] = 19001,
  [SMALL_STATE(460)] = 19014,
  [SMALL_STATE(461)] = 19027,
  [SMALL_STATE(462)] = 19040,
  [SMALL_STATE(463)] = 19053,
  [SMALL_STATE(464)] = 19066,
  [SMALL_STATE(465)] = 19079,
  [SMALL_STATE(466)] = 19092,
  [SMALL_STATE(467)] = 19105,
  [SMALL_STATE(468)] = 19118,
  [SMALL_STATE(469)] = 19131,
  [SMALL_STATE(470)] = 19144,
  [SMALL_STATE(471)] = 19157,
  [SMALL_STATE(472)] = 19170,
  [SMALL_STATE(473)] = 19183,
  [SMALL_STATE(474)] = 19196,
  [SMALL_STATE(475)] = 19209,
  [SMALL_STATE(476)] = 19222,
  [SMALL_STATE(477)] = 19235,
  [SMALL_STATE(478)] = 19248,
  [SMALL_STATE(479)] = 19261,
  [SMALL_STATE(480)] = 19274,
  [SMALL_STATE(481)] = 19287,
  [SMALL_STATE(482)] = 19300,
  [SMALL_STATE(483)] = 19313,
  [SMALL_STATE(484)] = 19326,
  [SMALL_STATE(485)] = 19339,
  [SMALL_STATE(486)] = 19352,
  [SMALL_STATE(487)] = 19365,
  [SMALL_STATE(488)] = 19378,
  [SMALL_STATE(489)] = 19391,
  [SMALL_STATE(490)] = 19404,
  [SMALL_STATE(491)] = 19417,
  [SMALL_STATE(492)] = 19430,
  [SMALL_STATE(493)] = 19443,
  [SMALL_STATE(494)] = 19456,
  [SMALL_STATE(495)] = 19469,
  [SMALL_STATE(496)] = 19482,
  [SMALL_STATE(497)] = 19495,
  [SMALL_STATE(498)] = 19508,
  [SMALL_STATE(499)] = 19521,
  [SMALL_STATE(500)] = 19534,
  [SMALL_STATE(501)] = 19547,
  [SMALL_STATE(502)] = 19560,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(422),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [7] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 0),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(333),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(382),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(370),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(397),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(373),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(107),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(209),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(46),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(418),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(188),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(344),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(441),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(440),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(439),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(409),
  [41] = {.entry = {.count = 1, .reusable = false}}, SHIFT(438),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(406),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [47] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(437),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(487),
  [53] = {.entry = {.count = 1, .reusable = false}}, SHIFT(61),
  [55] = {.entry = {.count = 1, .reusable = true}}, SHIFT(343),
  [57] = {.entry = {.count = 1, .reusable = true}}, SHIFT(189),
  [59] = {.entry = {.count = 1, .reusable = true}}, SHIFT(198),
  [61] = {.entry = {.count = 1, .reusable = false}}, SHIFT(456),
  [63] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [65] = {.entry = {.count = 1, .reusable = true}}, SHIFT(488),
  [67] = {.entry = {.count = 1, .reusable = false}}, SHIFT(128),
  [69] = {.entry = {.count = 1, .reusable = true}}, SHIFT(495),
  [71] = {.entry = {.count = 1, .reusable = false}}, SHIFT(104),
  [73] = {.entry = {.count = 1, .reusable = true}}, SHIFT(484),
  [75] = {.entry = {.count = 1, .reusable = false}}, SHIFT(48),
  [77] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field, 1, .production_id = 7),
  [79] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_field, 1, .production_id = 7),
  [81] = {.entry = {.count = 1, .reusable = false}}, SHIFT(138),
  [83] = {.entry = {.count = 1, .reusable = true}}, SHIFT(485),
  [85] = {.entry = {.count = 1, .reusable = true}}, SHIFT(486),
  [87] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [89] = {.entry = {.count = 1, .reusable = false}}, SHIFT(127),
  [91] = {.entry = {.count = 1, .reusable = true}}, SHIFT(459),
  [93] = {.entry = {.count = 1, .reusable = true}}, SHIFT(491),
  [95] = {.entry = {.count = 1, .reusable = false}}, SHIFT(119),
  [97] = {.entry = {.count = 1, .reusable = false}}, SHIFT(164),
  [99] = {.entry = {.count = 1, .reusable = true}}, SHIFT(492),
  [101] = {.entry = {.count = 1, .reusable = true}}, SHIFT(493),
  [103] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
  [105] = {.entry = {.count = 1, .reusable = false}}, SHIFT(161),
  [107] = {.entry = {.count = 1, .reusable = true}}, SHIFT(473),
  [109] = {.entry = {.count = 1, .reusable = true}}, SHIFT(496),
  [111] = {.entry = {.count = 1, .reusable = false}}, SHIFT(150),
  [113] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_integer, 1),
  [115] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_integer, 1),
  [117] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_integer, 2),
  [119] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_integer, 2),
  [121] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__friendly_number, 2),
  [123] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__friendly_number, 2),
  [125] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__friendly_number, 2), SHIFT_REPEAT(15),
  [128] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__friendly_number, 1),
  [130] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__friendly_number, 1),
  [132] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [134] = {.entry = {.count = 1, .reusable = true}}, SHIFT(181),
  [136] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_switch_repeat1, 2), SHIFT_REPEAT(107),
  [139] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_switch_repeat1, 2), SHIFT_REPEAT(68),
  [142] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_switch_repeat1, 2),
  [144] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_switch_repeat1, 2), SHIFT_REPEAT(344),
  [147] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_switch_repeat1, 2), SHIFT_REPEAT(441),
  [150] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_switch_repeat1, 2), SHIFT_REPEAT(440),
  [153] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_switch_repeat1, 2), SHIFT_REPEAT(439),
  [156] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_switch_repeat1, 2), SHIFT_REPEAT(409),
  [159] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_switch_repeat1, 2), SHIFT_REPEAT(438),
  [162] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_switch_repeat1, 2), SHIFT_REPEAT(406),
  [165] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_switch_repeat1, 2), SHIFT_REPEAT(15),
  [168] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_switch_repeat1, 2), SHIFT_REPEAT(15),
  [171] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_switch_repeat1, 2), SHIFT_REPEAT(437),
  [174] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_switch_repeat1, 2), SHIFT_REPEAT(487),
  [177] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_switch_repeat1, 2), SHIFT_REPEAT(61),
  [180] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_switch_repeat1, 2), SHIFT_REPEAT(343),
  [183] = {.entry = {.count = 1, .reusable = true}}, SHIFT(420),
  [185] = {.entry = {.count = 1, .reusable = true}}, SHIFT(419),
  [187] = {.entry = {.count = 1, .reusable = true}}, SHIFT(434),
  [189] = {.entry = {.count = 1, .reusable = true}}, SHIFT(236),
  [191] = {.entry = {.count = 1, .reusable = true}}, SHIFT(497),
  [193] = {.entry = {.count = 1, .reusable = true}}, SHIFT(175),
  [195] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_switch_repeat2, 2),
  [197] = {.entry = {.count = 1, .reusable = true}}, SHIFT(416),
  [199] = {.entry = {.count = 1, .reusable = true}}, SHIFT(207),
  [201] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [203] = {.entry = {.count = 1, .reusable = true}}, SHIFT(429),
  [205] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [207] = {.entry = {.count = 1, .reusable = true}}, SHIFT(421),
  [209] = {.entry = {.count = 1, .reusable = true}}, SHIFT(216),
  [211] = {.entry = {.count = 1, .reusable = true}}, SHIFT(432),
  [213] = {.entry = {.count = 1, .reusable = true}}, SHIFT(203),
  [215] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__date, 5),
  [217] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__date, 5),
  [219] = {.entry = {.count = 1, .reusable = true}}, SHIFT(230),
  [221] = {.entry = {.count = 1, .reusable = true}}, SHIFT(179),
  [223] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [225] = {.entry = {.count = 1, .reusable = true}}, SHIFT(227),
  [227] = {.entry = {.count = 1, .reusable = true}}, SHIFT(233),
  [229] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [231] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [233] = {.entry = {.count = 1, .reusable = true}}, SHIFT(172),
  [235] = {.entry = {.count = 1, .reusable = true}}, SHIFT(500),
  [237] = {.entry = {.count = 1, .reusable = true}}, SHIFT(232),
  [239] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [241] = {.entry = {.count = 1, .reusable = true}}, SHIFT(442),
  [243] = {.entry = {.count = 1, .reusable = true}}, SHIFT(204),
  [245] = {.entry = {.count = 1, .reusable = true}}, SHIFT(212),
  [247] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__aggregate_count, 1),
  [249] = {.entry = {.count = 1, .reusable = true}}, SHIFT(218),
  [251] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_identifier, 1),
  [253] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_identifier, 1),
  [255] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_identifier, 3),
  [257] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_identifier, 3),
  [259] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [261] = {.entry = {.count = 1, .reusable = true}}, SHIFT(213),
  [263] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_timestamp, 4),
  [265] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_timestamp, 4),
  [267] = {.entry = {.count = 1, .reusable = false}}, SHIFT(364),
  [269] = {.entry = {.count = 1, .reusable = true}}, SHIFT(364),
  [271] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [273] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__time, 3),
  [275] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__time, 3),
  [277] = {.entry = {.count = 1, .reusable = true}}, SHIFT(444),
  [279] = {.entry = {.count = 1, .reusable = true}}, SHIFT(331),
  [281] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__time, 1),
  [283] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__time, 1),
  [285] = {.entry = {.count = 1, .reusable = true}}, SHIFT(413),
  [287] = {.entry = {.count = 1, .reusable = true}}, SHIFT(323),
  [289] = {.entry = {.count = 1, .reusable = false}}, SHIFT(269),
  [291] = {.entry = {.count = 1, .reusable = true}}, SHIFT(489),
  [293] = {.entry = {.count = 1, .reusable = true}}, SHIFT(490),
  [295] = {.entry = {.count = 1, .reusable = true}}, SHIFT(258),
  [297] = {.entry = {.count = 1, .reusable = false}}, SHIFT(258),
  [299] = {.entry = {.count = 1, .reusable = true}}, SHIFT(467),
  [301] = {.entry = {.count = 1, .reusable = true}}, SHIFT(494),
  [303] = {.entry = {.count = 1, .reusable = false}}, SHIFT(254),
  [305] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__double_quote_string, 3),
  [307] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__double_quote_string, 3),
  [309] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_call, 2, .production_id = 7),
  [311] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_call, 2, .production_id = 7),
  [313] = {.entry = {.count = 1, .reusable = true}}, SHIFT(350),
  [315] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__time, 5),
  [317] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__time, 5),
  [319] = {.entry = {.count = 1, .reusable = true}}, SHIFT(329),
  [321] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_function_call_repeat1, 2),
  [323] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_function_call_repeat1, 2),
  [325] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_function_call_repeat1, 2), SHIFT_REPEAT(138),
  [328] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_call_repeat1, 2), SHIFT_REPEAT(350),
  [331] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_call_repeat1, 2), SHIFT_REPEAT(485),
  [334] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_call_repeat1, 2), SHIFT_REPEAT(486),
  [337] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_call_repeat1, 2), SHIFT_REPEAT(127),
  [340] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_function_call_repeat1, 2), SHIFT_REPEAT(127),
  [343] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_call_repeat1, 2), SHIFT_REPEAT(459),
  [346] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_call_repeat1, 2), SHIFT_REPEAT(491),
  [349] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_function_call_repeat1, 2), SHIFT_REPEAT(119),
  [352] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_literal, 1),
  [354] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_literal, 1),
  [356] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [358] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__alias_identifier, 1),
  [360] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__literal_string, 1),
  [362] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__literal_string, 1),
  [364] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__alias_identifier, 1, .production_id = 6),
  [366] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_decimal_number, 2),
  [368] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_decimal_number, 2),
  [370] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [372] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__time, 7),
  [374] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__time, 7),
  [376] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_date, 2),
  [378] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_date, 2),
  [380] = {.entry = {.count = 1, .reusable = false}}, SHIFT(402),
  [382] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expression, 1),
  [384] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__expression, 1),
  [386] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__triple_s_string, 3),
  [388] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__triple_s_string, 3),
  [390] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__double_s_string, 3),
  [392] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__double_s_string, 3),
  [394] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__triple_f_string, 3),
  [396] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__triple_f_string, 3),
  [398] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__double_f_string, 3),
  [400] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__double_f_string, 3),
  [402] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_expression, 3, .production_id = 18),
  [404] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binary_expression, 3, .production_id = 18),
  [406] = {.entry = {.count = 1, .reusable = false}}, SHIFT(62),
  [408] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [410] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [412] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_s_string, 1),
  [414] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_s_string, 1),
  [416] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__single_quote_string, 3),
  [418] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__single_quote_string, 3),
  [420] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_decimal_number, 3),
  [422] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_decimal_number, 3),
  [424] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expression, 3),
  [426] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__expression, 3),
  [428] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_timezone, 2),
  [430] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_timezone, 2),
  [432] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_f_string, 1),
  [434] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_f_string, 1),
  [436] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_timestamp, 5),
  [438] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_timestamp, 5),
  [440] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_timezone, 1),
  [442] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_timezone, 1),
  [444] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [446] = {.entry = {.count = 1, .reusable = false}}, SHIFT(70),
  [448] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_time, 2),
  [450] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_time, 2),
  [452] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field, 3, .production_id = 19),
  [454] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_field, 3, .production_id = 19),
  [456] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [458] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [460] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_function_call_repeat1, 2), SHIFT_REPEAT(164),
  [463] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_call_repeat1, 2), SHIFT_REPEAT(346),
  [466] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_call_repeat1, 2), SHIFT_REPEAT(492),
  [469] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_call_repeat1, 2), SHIFT_REPEAT(493),
  [472] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_call_repeat1, 2), SHIFT_REPEAT(161),
  [475] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_function_call_repeat1, 2), SHIFT_REPEAT(161),
  [478] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_call_repeat1, 2), SHIFT_REPEAT(473),
  [481] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_call_repeat1, 2), SHIFT_REPEAT(496),
  [484] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_function_call_repeat1, 2), SHIFT_REPEAT(150),
  [487] = {.entry = {.count = 1, .reusable = true}}, SHIFT(346),
  [489] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__agg_rhs_assignment, 1, .production_id = 21),
  [491] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__agg_rhs_assignment, 1, .production_id = 21),
  [493] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [495] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__agg_rhs_assignment, 2, .production_id = 24),
  [497] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__agg_rhs_assignment, 2, .production_id = 24),
  [499] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__boolean_expression, 1, .production_id = 5),
  [501] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__boolean_expression, 1, .production_id = 5),
  [503] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_term, 1, .production_id = 8),
  [505] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_term, 1, .production_id = 8),
  [507] = {.entry = {.count = 1, .reusable = false}}, SHIFT(8),
  [509] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__friendly_number, 2), SHIFT_REPEAT(127),
  [512] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__friendly_number, 2), SHIFT_REPEAT(127),
  [515] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__call_parameter, 1, .production_id = 8),
  [517] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__call_parameter, 1, .production_id = 8),
  [519] = {.entry = {.count = 1, .reusable = true}}, SHIFT(243),
  [521] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pipeline, 1),
  [523] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pipeline, 1),
  [525] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [527] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [529] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [531] = {.entry = {.count = 1, .reusable = true}}, SHIFT(448),
  [533] = {.entry = {.count = 1, .reusable = true}}, SHIFT(301),
  [535] = {.entry = {.count = 1, .reusable = true}}, SHIFT(305),
  [537] = {.entry = {.count = 1, .reusable = true}}, SHIFT(310),
  [539] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [541] = {.entry = {.count = 1, .reusable = true}}, SHIFT(335),
  [543] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_function_call_repeat1, 1, .production_id = 25),
  [545] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_function_call_repeat1, 1, .production_id = 25),
  [547] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable, 4, .production_id = 11),
  [549] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable, 4, .production_id = 11),
  [551] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__call_parameter, 3, .production_id = 29),
  [553] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__call_parameter, 3, .production_id = 29),
  [555] = {.entry = {.count = 1, .reusable = false}}, SHIFT(6),
  [557] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_transforms_repeat1, 2),
  [559] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_transforms_repeat1, 2),
  [561] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_transforms_repeat1, 2), SHIFT_REPEAT(50),
  [564] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_transforms_repeat1, 2), SHIFT_REPEAT(33),
  [567] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_transforms_repeat1, 2), SHIFT_REPEAT(34),
  [570] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_transforms_repeat1, 2), SHIFT_REPEAT(448),
  [573] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_transforms_repeat1, 2), SHIFT_REPEAT(301),
  [576] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_transforms_repeat1, 2), SHIFT_REPEAT(305),
  [579] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_transforms_repeat1, 2), SHIFT_REPEAT(310),
  [582] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_transforms_repeat1, 2), SHIFT_REPEAT(24),
  [585] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_transforms_repeat1, 2), SHIFT_REPEAT(335),
  [588] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__friendly_number, 2), SHIFT_REPEAT(147),
  [591] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [593] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_transforms, 1),
  [595] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_transforms, 1),
  [597] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_function_call_repeat1, 2), SHIFT_REPEAT(269),
  [600] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_call_repeat1, 2), SHIFT_REPEAT(349),
  [603] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_call_repeat1, 2), SHIFT_REPEAT(489),
  [606] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_call_repeat1, 2), SHIFT_REPEAT(490),
  [609] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_call_repeat1, 2), SHIFT_REPEAT(258),
  [612] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_function_call_repeat1, 2), SHIFT_REPEAT(258),
  [615] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_call_repeat1, 2), SHIFT_REPEAT(467),
  [618] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_call_repeat1, 2), SHIFT_REPEAT(494),
  [621] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_function_call_repeat1, 2), SHIFT_REPEAT(254),
  [624] = {.entry = {.count = 1, .reusable = true}}, SHIFT(349),
  [626] = {.entry = {.count = 1, .reusable = true}}, SHIFT(247),
  [628] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__friendly_number, 2), SHIFT_REPEAT(161),
  [631] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__friendly_number, 2), SHIFT_REPEAT(161),
  [634] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [636] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [638] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_range, 3, .production_id = 23),
  [640] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_range, 3, .production_id = 23),
  [642] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_transforms_repeat1, 2), SHIFT_REPEAT(39),
  [645] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_transforms_repeat1, 2), SHIFT_REPEAT(23),
  [648] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__sort_instruction, 1),
  [650] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__sort_instruction, 1),
  [652] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_switch, 5),
  [654] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_switch, 5),
  [656] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_joins, 2, .production_id = 9),
  [658] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_joins, 2, .production_id = 9),
  [660] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [662] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment, 3, .production_id = 22),
  [664] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_assignment, 3, .production_id = 22),
  [666] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_switch, 3),
  [668] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_switch, 3),
  [670] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment, 3, .production_id = 20),
  [672] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_assignment, 3, .production_id = 20),
  [674] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment, 5, .production_id = 27),
  [676] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_assignment, 5, .production_id = 27),
  [678] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment, 5, .production_id = 28),
  [680] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_assignment, 5, .production_id = 28),
  [682] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_switch, 6),
  [684] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_switch, 6),
  [686] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__sort_instruction, 2),
  [688] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__sort_instruction, 2),
  [690] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_switch, 4),
  [692] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_switch, 4),
  [694] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_joins, 3, .production_id = 14),
  [696] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_joins, 3, .production_id = 14),
  [698] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__table_reference, 1, .production_id = 3),
  [700] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__table_reference, 1, .production_id = 3),
  [702] = {.entry = {.count = 1, .reusable = true}}, SHIFT(347),
  [704] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_takes, 2),
  [706] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_takes, 2),
  [708] = {.entry = {.count = 1, .reusable = true}}, SHIFT(326),
  [710] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_switch_condition, 4, .production_id = 31),
  [712] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_switch_condition, 4, .production_id = 31),
  [714] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_switch_condition, 4, .production_id = 30),
  [716] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_switch_condition, 4, .production_id = 30),
  [718] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_switch_repeat1, 1),
  [720] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_switch_repeat1, 1),
  [722] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_aggregate, 3),
  [724] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_aggregate, 3),
  [726] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_aggregate, 6),
  [728] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_aggregate, 6),
  [730] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sorts, 2),
  [732] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sorts, 2),
  [734] = {.entry = {.count = 1, .reusable = false}}, SHIFT(5),
  [736] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sorts, 4),
  [738] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sorts, 4),
  [740] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__table_selection, 3, .production_id = 10),
  [742] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__table_selection, 3, .production_id = 10),
  [744] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__table_selection, 1, .production_id = 2),
  [746] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__table_selection, 1, .production_id = 2),
  [748] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_definition, 5, .production_id = 16),
  [750] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_definition, 5, .production_id = 16),
  [752] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_aggregate, 4),
  [754] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_aggregate, 4),
  [756] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_aggregate, 5),
  [758] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_aggregate, 5),
  [760] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sorts, 5),
  [762] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sorts, 5),
  [764] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sorts, 6),
  [766] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sorts, 6),
  [768] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sorts, 3),
  [770] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sorts, 3),
  [772] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select, 5),
  [774] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_select, 5),
  [776] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select, 6),
  [778] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_select, 6),
  [780] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_derives, 4),
  [782] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_derives, 4),
  [784] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_group, 6),
  [786] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_group, 6),
  [788] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select, 3),
  [790] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_select, 3),
  [792] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__boolean_expression, 3, .production_id = 17),
  [794] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__boolean_expression, 3, .production_id = 17),
  [796] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__agg_keywords, 1),
  [798] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__agg_keywords, 1),
  [800] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_from_text, 5),
  [802] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_from_text, 5),
  [804] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_transforms_repeat1, 1),
  [806] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_transforms_repeat1, 1),
  [808] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_derives, 6),
  [810] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_derives, 6),
  [812] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_conditions, 5),
  [814] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_conditions, 5),
  [816] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_group, 7),
  [818] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_group, 7),
  [820] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_conditions, 3),
  [822] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_conditions, 3),
  [824] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_derives, 3),
  [826] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_derives, 3),
  [828] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__self_join, 4),
  [830] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__self_join, 4),
  [832] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_conditions, 4),
  [834] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_conditions, 4),
  [836] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_group, 5),
  [838] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_group, 5),
  [840] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_filter, 2, .production_id = 4),
  [842] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_filter, 2, .production_id = 4),
  [844] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [846] = {.entry = {.count = 1, .reusable = true}}, SHIFT(197),
  [848] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__triple_quote_string, 3),
  [850] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__triple_quote_string, 3),
  [852] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_from_text, 2),
  [854] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_from_text, 2),
  [856] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_derives, 7),
  [858] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_derives, 7),
  [860] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_append, 2, .production_id = 1),
  [862] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_append, 2, .production_id = 1),
  [864] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_conditions, 1),
  [866] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_conditions, 1),
  [868] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_derives, 5),
  [870] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_derives, 5),
  [872] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select, 2),
  [874] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_select, 2),
  [876] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select, 7),
  [878] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_select, 7),
  [880] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_group, 9),
  [882] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_group, 9),
  [884] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_conditions, 2),
  [886] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_conditions, 2),
  [888] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_derives, 8),
  [890] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_derives, 8),
  [892] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_derives, 2),
  [894] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_derives, 2),
  [896] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_joins, 4, .production_id = 14),
  [898] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_joins, 4, .production_id = 14),
  [900] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select, 4),
  [902] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_select, 4),
  [904] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_joins, 3, .production_id = 9),
  [906] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_joins, 3, .production_id = 9),
  [908] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_group, 8),
  [910] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_group, 8),
  [912] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_from, 2, .production_id = 1),
  [914] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_from, 2, .production_id = 1),
  [916] = {.entry = {.count = 1, .reusable = true}}, SHIFT(371),
  [918] = {.entry = {.count = 1, .reusable = true}}, SHIFT(338),
  [920] = {.entry = {.count = 1, .reusable = true}}, SHIFT(481),
  [922] = {.entry = {.count = 1, .reusable = true}}, SHIFT(482),
  [924] = {.entry = {.count = 1, .reusable = true}}, SHIFT(320),
  [926] = {.entry = {.count = 1, .reusable = true}}, SHIFT(451),
  [928] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [930] = {.entry = {.count = 1, .reusable = true}}, SHIFT(245),
  [932] = {.entry = {.count = 1, .reusable = true}}, SHIFT(269),
  [934] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [936] = {.entry = {.count = 1, .reusable = true}}, SHIFT(215),
  [938] = {.entry = {.count = 1, .reusable = true}}, SHIFT(164),
  [940] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_aggregate_repeat1, 2),
  [942] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [944] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__friendly_number, 2), SHIFT_REPEAT(258),
  [947] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__friendly_number, 2), SHIFT_REPEAT(258),
  [950] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_aggregate_operation, 2),
  [952] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__aggregate_count, 2),
  [954] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_conditions_repeat1, 2),
  [956] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 1),
  [958] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [960] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [962] = {.entry = {.count = 1, .reusable = true}}, SHIFT(208),
  [964] = {.entry = {.count = 1, .reusable = true}}, SHIFT(250),
  [966] = {.entry = {.count = 1, .reusable = true}}, SHIFT(240),
  [968] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [970] = {.entry = {.count = 1, .reusable = true}}, SHIFT(251),
  [972] = {.entry = {.count = 1, .reusable = true}}, SHIFT(252),
  [974] = {.entry = {.count = 1, .reusable = true}}, SHIFT(315),
  [976] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_program_repeat2, 2),
  [978] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat2, 2), SHIFT_REPEAT(333),
  [981] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat2, 2), SHIFT_REPEAT(382),
  [984] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat2, 2), SHIFT_REPEAT(370),
  [987] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat2, 2), SHIFT_REPEAT(373),
  [990] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 2),
  [992] = {.entry = {.count = 1, .reusable = true}}, SHIFT(314),
  [994] = {.entry = {.count = 1, .reusable = true}}, SHIFT(206),
  [996] = {.entry = {.count = 1, .reusable = true}}, SHIFT(231),
  [998] = {.entry = {.count = 1, .reusable = true}}, SHIFT(238),
  [1000] = {.entry = {.count = 1, .reusable = true}}, SHIFT(214),
  [1002] = {.entry = {.count = 1, .reusable = true}}, SHIFT(219),
  [1004] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_group_repeat2, 2), SHIFT_REPEAT(448),
  [1007] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_group_repeat2, 2), SHIFT_REPEAT(301),
  [1010] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_group_repeat2, 2), SHIFT_REPEAT(305),
  [1013] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_group_repeat2, 2), SHIFT_REPEAT(314),
  [1016] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_group_repeat2, 2),
  [1018] = {.entry = {.count = 1, .reusable = true}}, SHIFT(417),
  [1020] = {.entry = {.count = 1, .reusable = true}}, SHIFT(202),
  [1022] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [1024] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2),
  [1026] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2),
  [1028] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(397),
  [1031] = {.entry = {.count = 1, .reusable = true}}, SHIFT(294),
  [1033] = {.entry = {.count = 1, .reusable = true}}, SHIFT(199),
  [1035] = {.entry = {.count = 1, .reusable = true}}, SHIFT(352),
  [1037] = {.entry = {.count = 1, .reusable = true}}, SHIFT(405),
  [1039] = {.entry = {.count = 1, .reusable = true}}, SHIFT(201),
  [1041] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__friendly_number, 2), SHIFT_REPEAT(320),
  [1044] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__friendly_number, 2), SHIFT_REPEAT(320),
  [1047] = {.entry = {.count = 1, .reusable = false}}, SHIFT(320),
  [1049] = {.entry = {.count = 1, .reusable = false}}, SHIFT(430),
  [1051] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pipeline, 2),
  [1053] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pipeline, 2),
  [1055] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [1057] = {.entry = {.count = 1, .reusable = true}}, SHIFT(480),
  [1059] = {.entry = {.count = 1, .reusable = true}}, SHIFT(342),
  [1061] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_prql, 4, .production_id = 12),
  [1063] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_prql, 4, .production_id = 12),
  [1065] = {.entry = {.count = 1, .reusable = true}}, SHIFT(499),
  [1067] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_target, 1),
  [1069] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_target, 1),
  [1071] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_prql, 4, .production_id = 13),
  [1073] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_prql, 4, .production_id = 13),
  [1075] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_window_definitions_repeat1, 2), SHIFT_REPEAT(499),
  [1078] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_window_definitions_repeat1, 2),
  [1080] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_window_definitions, 1),
  [1082] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_function_definition_repeat1, 2),
  [1084] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_definition_repeat1, 2), SHIFT_REPEAT(480),
  [1087] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_definition_repeat1, 2), SHIFT_REPEAT(342),
  [1090] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 1),
  [1092] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 1),
  [1094] = {.entry = {.count = 1, .reusable = true}}, SHIFT(376),
  [1096] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_group_repeat2, 1),
  [1098] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__window_definition, 3),
  [1100] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable, 5, .production_id = 11),
  [1102] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable, 5, .production_id = 11),
  [1104] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_program_repeat2, 1),
  [1106] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_program_repeat2, 1),
  [1108] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable, 6, .production_id = 11),
  [1110] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable, 6, .production_id = 11),
  [1112] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_window, 5),
  [1114] = {.entry = {.count = 1, .reusable = true}}, SHIFT(339),
  [1116] = {.entry = {.count = 1, .reusable = true}}, SHIFT(452),
  [1118] = {.entry = {.count = 1, .reusable = true}}, SHIFT(383),
  [1120] = {.entry = {.count = 1, .reusable = true}}, SHIFT(399),
  [1122] = {.entry = {.count = 1, .reusable = true}}, SHIFT(423),
  [1124] = {.entry = {.count = 1, .reusable = false}}, SHIFT(56),
  [1126] = {.entry = {.count = 1, .reusable = true}}, SHIFT(428),
  [1128] = {.entry = {.count = 1, .reusable = true}}, SHIFT(241),
  [1130] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter, 1),
  [1132] = {.entry = {.count = 1, .reusable = true}}, SHIFT(474),
  [1134] = {.entry = {.count = 1, .reusable = true}}, SHIFT(468),
  [1136] = {.entry = {.count = 1, .reusable = true}}, SHIFT(460),
  [1138] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_window_definitions_repeat1, 1),
  [1140] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [1142] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_conditions_repeat1, 2), SHIFT_REPEAT(53),
  [1145] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [1147] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_function_definition_repeat1, 1),
  [1149] = {.entry = {.count = 1, .reusable = true}}, SHIFT(322),
  [1151] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_aggregate_repeat1, 2), SHIFT_REPEAT(7),
  [1154] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_switch_repeat2, 2), SHIFT_REPEAT(42),
  [1157] = {.entry = {.count = 1, .reusable = false}}, SHIFT(401),
  [1159] = {.entry = {.count = 1, .reusable = false}}, SHIFT(222),
  [1161] = {.entry = {.count = 1, .reusable = false}}, SHIFT(422),
  [1163] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [1165] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [1167] = {.entry = {.count = 1, .reusable = true}}, SHIFT(224),
  [1169] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_group_repeat1, 2), SHIFT_REPEAT(45),
  [1172] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_group_repeat1, 2),
  [1174] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_direction, 1),
  [1176] = {.entry = {.count = 1, .reusable = false}}, SHIFT(88),
  [1178] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [1180] = {.entry = {.count = 1, .reusable = true}}, SHIFT(466),
  [1182] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_derives_repeat1, 2), SHIFT_REPEAT(44),
  [1185] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_derives_repeat1, 2),
  [1187] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter, 3, .production_id = 15),
  [1189] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [1191] = {.entry = {.count = 1, .reusable = true}}, SHIFT(412),
  [1193] = {.entry = {.count = 1, .reusable = true}}, SHIFT(400),
  [1195] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [1197] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [1199] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__inner_triple_quotes, 2), SHIFT_REPEAT(401),
  [1202] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__inner_triple_quotes, 2),
  [1204] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_sorts_repeat1, 2), SHIFT_REPEAT(308),
  [1207] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_sorts_repeat1, 2),
  [1209] = {.entry = {.count = 1, .reusable = true}}, SHIFT(304),
  [1211] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [1213] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [1215] = {.entry = {.count = 1, .reusable = false}}, SHIFT(90),
  [1217] = {.entry = {.count = 1, .reusable = true}}, SHIFT(302),
  [1219] = {.entry = {.count = 1, .reusable = true}}, SHIFT(193),
  [1221] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [1223] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [1225] = {.entry = {.count = 1, .reusable = true}}, SHIFT(205),
  [1227] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [1229] = {.entry = {.count = 1, .reusable = true}}, SHIFT(464),
  [1231] = {.entry = {.count = 1, .reusable = true}}, SHIFT(463),
  [1233] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__join_definition, 3),
  [1235] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__inner_triple_quotes, 1),
  [1237] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [1239] = {.entry = {.count = 1, .reusable = true}}, SHIFT(394),
  [1241] = {.entry = {.count = 1, .reusable = true}}, SHIFT(341),
  [1243] = {.entry = {.count = 1, .reusable = true}}, SHIFT(404),
  [1245] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [1247] = {.entry = {.count = 1, .reusable = true}}, SHIFT(455),
  [1249] = {.entry = {.count = 1, .reusable = true}}, SHIFT(334),
  [1251] = {.entry = {.count = 1, .reusable = true}}, SHIFT(299),
  [1253] = {.entry = {.count = 1, .reusable = false}}, SHIFT(502),
  [1255] = {.entry = {.count = 1, .reusable = true}}, SHIFT(414),
  [1257] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [1259] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [1261] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [1263] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [1265] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [1267] = {.entry = {.count = 1, .reusable = true}}, SHIFT(340),
  [1269] = {.entry = {.count = 1, .reusable = true}}, SHIFT(407),
  [1271] = {.entry = {.count = 1, .reusable = true}}, SHIFT(297),
  [1273] = {.entry = {.count = 1, .reusable = true}}, SHIFT(178),
  [1275] = {.entry = {.count = 1, .reusable = true}}, SHIFT(298),
  [1277] = {.entry = {.count = 1, .reusable = true}}, SHIFT(375),
  [1279] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [1281] = {.entry = {.count = 1, .reusable = false}}, SHIFT(424),
  [1283] = {.entry = {.count = 1, .reusable = false}}, SHIFT(425),
  [1285] = {.entry = {.count = 1, .reusable = false}}, SHIFT(426),
  [1287] = {.entry = {.count = 1, .reusable = false}}, SHIFT(427),
  [1289] = {.entry = {.count = 1, .reusable = true}}, SHIFT(295),
  [1291] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [1293] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [1295] = {.entry = {.count = 1, .reusable = true}}, SHIFT(185),
  [1297] = {.entry = {.count = 1, .reusable = true}}, SHIFT(186),
  [1299] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [1301] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [1303] = {.entry = {.count = 1, .reusable = true}}, SHIFT(177),
  [1305] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [1307] = {.entry = {.count = 1, .reusable = true}}, SHIFT(380),
  [1309] = {.entry = {.count = 1, .reusable = true}}, SHIFT(384),
  [1311] = {.entry = {.count = 1, .reusable = true}}, SHIFT(385),
  [1313] = {.entry = {.count = 1, .reusable = true}}, SHIFT(450),
  [1315] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [1317] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [1319] = {.entry = {.count = 1, .reusable = true}}, SHIFT(395),
  [1321] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [1323] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [1325] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [1327] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [1329] = {.entry = {.count = 1, .reusable = true}}, SHIFT(284),
  [1331] = {.entry = {.count = 1, .reusable = true}}, SHIFT(410),
  [1333] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [1335] = {.entry = {.count = 1, .reusable = true}}, SHIFT(296),
  [1337] = {.entry = {.count = 1, .reusable = true}}, SHIFT(264),
  [1339] = {.entry = {.count = 1, .reusable = true}}, SHIFT(268),
  [1341] = {.entry = {.count = 1, .reusable = true}}, SHIFT(257),
  [1343] = {.entry = {.count = 1, .reusable = true}}, SHIFT(266),
  [1345] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [1347] = {.entry = {.count = 1, .reusable = true}}, SHIFT(336),
  [1349] = {.entry = {.count = 1, .reusable = true}}, SHIFT(163),
  [1351] = {.entry = {.count = 1, .reusable = true}}, SHIFT(166),
  [1353] = {.entry = {.count = 1, .reusable = true}}, SHIFT(165),
  [1355] = {.entry = {.count = 1, .reusable = true}}, SHIFT(162),
  [1357] = {.entry = {.count = 1, .reusable = true}}, SHIFT(248),
  [1359] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [1361] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [1363] = {.entry = {.count = 1, .reusable = true}}, SHIFT(411),
  [1365] = {.entry = {.count = 1, .reusable = false}}, SHIFT(453),
  [1367] = {.entry = {.count = 1, .reusable = false}}, SHIFT(454),
  [1369] = {.entry = {.count = 1, .reusable = true}}, SHIFT(358),
  [1371] = {.entry = {.count = 1, .reusable = true}}, SHIFT(457),
  [1373] = {.entry = {.count = 1, .reusable = false}}, SHIFT(461),
  [1375] = {.entry = {.count = 1, .reusable = false}}, SHIFT(462),
  [1377] = {.entry = {.count = 1, .reusable = true}}, SHIFT(447),
  [1379] = {.entry = {.count = 1, .reusable = true}}, SHIFT(465),
  [1381] = {.entry = {.count = 1, .reusable = false}}, SHIFT(469),
  [1383] = {.entry = {.count = 1, .reusable = false}}, SHIFT(470),
  [1385] = {.entry = {.count = 1, .reusable = true}}, SHIFT(471),
  [1387] = {.entry = {.count = 1, .reusable = false}}, SHIFT(475),
  [1389] = {.entry = {.count = 1, .reusable = false}}, SHIFT(476),
  [1391] = {.entry = {.count = 1, .reusable = true}}, SHIFT(477),
  [1393] = {.entry = {.count = 1, .reusable = true}}, SHIFT(478),
  [1395] = {.entry = {.count = 1, .reusable = true}}, SHIFT(479),
  [1397] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [1399] = {.entry = {.count = 1, .reusable = true}}, SHIFT(303),
  [1401] = {.entry = {.count = 1, .reusable = true}}, SHIFT(217),
  [1403] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 2),
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
