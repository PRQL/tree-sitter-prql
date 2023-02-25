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
#define STATE_COUNT 505
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
  anon_sym_PIPE = 87,
  anon_sym_BANG_EQ = 88,
  anon_sym_GT = 89,
  anon_sym_GT_EQ = 90,
  anon_sym_LT = 91,
  anon_sym_LT_EQ = 92,
  anon_sym_QMARK_QMARK = 93,
  aux_sym__date_token1 = 94,
  aux_sym__date_token2 = 95,
  anon_sym_AT = 96,
  aux_sym__time_token1 = 97,
  anon_sym_T = 98,
  anon_sym_Z = 99,
  anon_sym_POUND = 100,
  aux_sym_comment_token1 = 101,
  sym_bang = 102,
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
      if (eof) ADVANCE(443);
      if (lookahead == '!') ADVANCE(832);
      if (lookahead == '"') ADVANCE(547);
      if (lookahead == '#') ADVANCE(825);
      if (lookahead == '\'') ADVANCE(551);
      if (lookahead == '(') ADVANCE(537);
      if (lookahead == ')') ADVANCE(538);
      if (lookahead == '*') ADVANCE(808);
      if (lookahead == '+') ADVANCE(545);
      if (lookahead == ',') ADVANCE(541);
      if (lookahead == '-') ADVANCE(544);
      if (lookahead == '.') ADVANCE(567);
      if (lookahead == '/') ADVANCE(809);
      if (lookahead == ':') ADVANCE(519);
      if (lookahead == '<') ADVANCE(814);
      if (lookahead == '=') ADVANCE(536);
      if (lookahead == '>') ADVANCE(812);
      if (lookahead == '?') ADVANCE(27);
      if (lookahead == '@') ADVANCE(820);
      if (lookahead == 'A') ADVANCE(78);
      if (lookahead == 'C') ADVANCE(132);
      if (lookahead == 'D') ADVANCE(63);
      if (lookahead == 'E') ADVANCE(189);
      if (lookahead == 'F') ADVANCE(29);
      if (lookahead == 'G') ADVANCE(148);
      if (lookahead == 'I') ADVANCE(115);
      if (lookahead == 'J') ADVANCE(138);
      if (lookahead == 'L') ADVANCE(49);
      if (lookahead == 'M') ADVANCE(30);
      if (lookahead == 'N') ADVANCE(180);
      if (lookahead == 'O') ADVANCE(144);
      if (lookahead == 'P') ADVANCE(145);
      if (lookahead == 'R') ADVANCE(50);
      if (lookahead == 'S') ADVANCE(65);
      if (lookahead == 'T') ADVANCE(822);
      if (lookahead == 'V') ADVANCE(67);
      if (lookahead == 'W') ADVANCE(91);
      if (lookahead == 'Z') ADVANCE(824);
      if (lookahead == '[') ADVANCE(540);
      if (lookahead == ']') ADVANCE(542);
      if (lookahead == '_') ADVANCE(565);
      if (lookahead == '`') ADVANCE(568);
      if (lookahead == 'a') ADVANCE(257);
      if (lookahead == 'c') ADVANCE(332);
      if (lookahead == 'd') ADVANCE(238);
      if (lookahead == 'e') ADVANCE(412);
      if (lookahead == 'f') ADVANCE(10);
      if (lookahead == 'g') ADVANCE(355);
      if (lookahead == 'i') ADVANCE(312);
      if (lookahead == 'j') ADVANCE(341);
      if (lookahead == 'l') ADVANCE(220);
      if (lookahead == 'm') ADVANCE(193);
      if (lookahead == 'n') ADVANCE(398);
      if (lookahead == 'o') ADVANCE(350);
      if (lookahead == 'p') ADVANCE(351);
      if (lookahead == 'r') ADVANCE(221);
      if (lookahead == 's') ADVANCE(11);
      if (lookahead == 't') ADVANCE(192);
      if (lookahead == 'v') ADVANCE(242);
      if (lookahead == 'w') ADVANCE(274);
      if (lookahead == '|') ADVANCE(810);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(438)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(564);
      END_STATE();
    case 1:
      if (lookahead == '!') ADVANCE(24);
      if (lookahead == '"') ADVANCE(547);
      if (lookahead == '#') ADVANCE(825);
      if (lookahead == '\'') ADVANCE(551);
      if (lookahead == '(') ADVANCE(537);
      if (lookahead == ')') ADVANCE(538);
      if (lookahead == '*') ADVANCE(808);
      if (lookahead == '+') ADVANCE(545);
      if (lookahead == ',') ADVANCE(541);
      if (lookahead == '-') ADVANCE(543);
      if (lookahead == '.') ADVANCE(567);
      if (lookahead == '/') ADVANCE(809);
      if (lookahead == '<') ADVANCE(814);
      if (lookahead == '=') ADVANCE(25);
      if (lookahead == '>') ADVANCE(812);
      if (lookahead == '?') ADVANCE(27);
      if (lookahead == 'A') ADVANCE(638);
      if (lookahead == 'F') ADVANCE(575);
      if (lookahead == 'N') ADVANCE(679);
      if (lookahead == 'O') ADVANCE(650);
      if (lookahead == 'T') ADVANCE(653);
      if (lookahead == ']') ADVANCE(542);
      if (lookahead == '_') ADVANCE(566);
      if (lookahead == '`') ADVANCE(568);
      if (lookahead == 'a') ADVANCE(756);
      if (lookahead == 'f') ADVANCE(693);
      if (lookahead == 'n') ADVANCE(795);
      if (lookahead == 'o') ADVANCE(769);
      if (lookahead == 't') ADVANCE(771);
      if (lookahead == '|') ADVANCE(810);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(419)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(564);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(805);
      END_STATE();
    case 2:
      if (lookahead == '!') ADVANCE(24);
      if (lookahead == '"') ADVANCE(547);
      if (lookahead == '#') ADVANCE(825);
      if (lookahead == '\'') ADVANCE(551);
      if (lookahead == ')') ADVANCE(538);
      if (lookahead == '*') ADVANCE(808);
      if (lookahead == '+') ADVANCE(545);
      if (lookahead == '-') ADVANCE(543);
      if (lookahead == '.') ADVANCE(567);
      if (lookahead == '/') ADVANCE(809);
      if (lookahead == '<') ADVANCE(814);
      if (lookahead == '=') ADVANCE(25);
      if (lookahead == '>') ADVANCE(812);
      if (lookahead == '?') ADVANCE(27);
      if (lookahead == 'A') ADVANCE(612);
      if (lookahead == 'D') ADVANCE(604);
      if (lookahead == 'F') ADVANCE(574);
      if (lookahead == 'G') ADVANCE(657);
      if (lookahead == 'I') ADVANCE(639);
      if (lookahead == 'J') ADVANCE(646);
      if (lookahead == 'N') ADVANCE(679);
      if (lookahead == 'O') ADVANCE(650);
      if (lookahead == 'R') ADVANCE(602);
      if (lookahead == 'S') ADVANCE(605);
      if (lookahead == 'T') ADVANCE(578);
      if (lookahead == '_') ADVANCE(566);
      if (lookahead == '`') ADVANCE(568);
      if (lookahead == 'a') ADVANCE(731);
      if (lookahead == 'd') ADVANCE(722);
      if (lookahead == 'f') ADVANCE(692);
      if (lookahead == 'g') ADVANCE(775);
      if (lookahead == 'i') ADVANCE(757);
      if (lookahead == 'j') ADVANCE(764);
      if (lookahead == 'n') ADVANCE(795);
      if (lookahead == 'o') ADVANCE(769);
      if (lookahead == 'r') ADVANCE(720);
      if (lookahead == 's') ADVANCE(723);
      if (lookahead == 't') ADVANCE(696);
      if (lookahead == '|') ADVANCE(810);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(417)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(564);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(805);
      END_STATE();
    case 3:
      if (lookahead == '!') ADVANCE(831);
      if (lookahead == '"') ADVANCE(547);
      if (lookahead == '#') ADVANCE(825);
      if (lookahead == '\'') ADVANCE(551);
      if (lookahead == '(') ADVANCE(537);
      if (lookahead == ',') ADVANCE(541);
      if (lookahead == '-') ADVANCE(543);
      if (lookahead == '.') ADVANCE(567);
      if (lookahead == '=') ADVANCE(25);
      if (lookahead == '@') ADVANCE(820);
      if (lookahead == 'F') ADVANCE(575);
      if (lookahead == 'N') ADVANCE(679);
      if (lookahead == 'T') ADVANCE(653);
      if (lookahead == '[') ADVANCE(540);
      if (lookahead == ']') ADVANCE(542);
      if (lookahead == '_') ADVANCE(566);
      if (lookahead == '`') ADVANCE(568);
      if (lookahead == 'f') ADVANCE(569);
      if (lookahead == 'n') ADVANCE(795);
      if (lookahead == 's') ADVANCE(572);
      if (lookahead == 't') ADVANCE(771);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(418)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(564);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(805);
      END_STATE();
    case 4:
      if (lookahead == '"') ADVANCE(547);
      if (lookahead == '#') ADVANCE(825);
      if (lookahead == '\'') ADVANCE(551);
      if (lookahead == '(') ADVANCE(537);
      if (lookahead == ')') ADVANCE(538);
      if (lookahead == ',') ADVANCE(541);
      if (lookahead == '-') ADVANCE(543);
      if (lookahead == '.') ADVANCE(567);
      if (lookahead == ':') ADVANCE(519);
      if (lookahead == 'F') ADVANCE(575);
      if (lookahead == 'N') ADVANCE(679);
      if (lookahead == 'T') ADVANCE(653);
      if (lookahead == ']') ADVANCE(542);
      if (lookahead == '_') ADVANCE(566);
      if (lookahead == '`') ADVANCE(568);
      if (lookahead == 'f') ADVANCE(693);
      if (lookahead == 'n') ADVANCE(795);
      if (lookahead == 't') ADVANCE(771);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(421)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(564);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(805);
      END_STATE();
    case 5:
      if (lookahead == '"') ADVANCE(547);
      if (lookahead == '#') ADVANCE(825);
      if (lookahead == '\'') ADVANCE(551);
      if (lookahead == '(') ADVANCE(537);
      if (lookahead == ',') ADVANCE(541);
      if (lookahead == '-') ADVANCE(543);
      if (lookahead == '.') ADVANCE(567);
      if (lookahead == '@') ADVANCE(820);
      if (lookahead == 'A') ADVANCE(683);
      if (lookahead == 'C') ADVANCE(642);
      if (lookahead == 'F') ADVANCE(575);
      if (lookahead == 'M') ADVANCE(576);
      if (lookahead == 'N') ADVANCE(679);
      if (lookahead == 'S') ADVANCE(663);
      if (lookahead == 'T') ADVANCE(653);
      if (lookahead == ']') ADVANCE(542);
      if (lookahead == '_') ADVANCE(566);
      if (lookahead == '`') ADVANCE(568);
      if (lookahead == 'a') ADVANCE(799);
      if (lookahead == 'c') ADVANCE(760);
      if (lookahead == 'f') ADVANCE(569);
      if (lookahead == 'm') ADVANCE(694);
      if (lookahead == 'n') ADVANCE(795);
      if (lookahead == 's') ADVANCE(571);
      if (lookahead == 't') ADVANCE(771);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(415)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(564);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(805);
      END_STATE();
    case 6:
      if (lookahead == '"') ADVANCE(547);
      if (lookahead == '#') ADVANCE(825);
      if (lookahead == '\'') ADVANCE(551);
      if (lookahead == '(') ADVANCE(537);
      if (lookahead == '-') ADVANCE(543);
      if (lookahead == '.') ADVANCE(567);
      if (lookahead == '@') ADVANCE(820);
      if (lookahead == 'A') ADVANCE(683);
      if (lookahead == 'C') ADVANCE(645);
      if (lookahead == 'F') ADVANCE(575);
      if (lookahead == 'M') ADVANCE(576);
      if (lookahead == 'N') ADVANCE(679);
      if (lookahead == 'S') ADVANCE(663);
      if (lookahead == 'T') ADVANCE(653);
      if (lookahead == '_') ADVANCE(566);
      if (lookahead == '`') ADVANCE(568);
      if (lookahead == 'a') ADVANCE(799);
      if (lookahead == 'c') ADVANCE(763);
      if (lookahead == 'f') ADVANCE(569);
      if (lookahead == 'm') ADVANCE(694);
      if (lookahead == 'n') ADVANCE(795);
      if (lookahead == 's') ADVANCE(571);
      if (lookahead == 't') ADVANCE(771);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(431)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(564);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(805);
      END_STATE();
    case 7:
      if (lookahead == '"') ADVANCE(547);
      if (lookahead == '#') ADVANCE(825);
      if (lookahead == '\'') ADVANCE(551);
      if (lookahead == '(') ADVANCE(537);
      if (lookahead == '-') ADVANCE(543);
      if (lookahead == '.') ADVANCE(567);
      if (lookahead == '@') ADVANCE(820);
      if (lookahead == 'A') ADVANCE(683);
      if (lookahead == 'C') ADVANCE(645);
      if (lookahead == 'F') ADVANCE(575);
      if (lookahead == 'M') ADVANCE(576);
      if (lookahead == 'N') ADVANCE(679);
      if (lookahead == 'S') ADVANCE(662);
      if (lookahead == 'T') ADVANCE(653);
      if (lookahead == '_') ADVANCE(566);
      if (lookahead == '`') ADVANCE(568);
      if (lookahead == 'a') ADVANCE(799);
      if (lookahead == 'c') ADVANCE(763);
      if (lookahead == 'f') ADVANCE(569);
      if (lookahead == 'm') ADVANCE(694);
      if (lookahead == 'n') ADVANCE(795);
      if (lookahead == 's') ADVANCE(570);
      if (lookahead == 't') ADVANCE(771);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(416)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(564);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(805);
      END_STATE();
    case 8:
      if (lookahead == '"') ADVANCE(547);
      if (lookahead == '#') ADVANCE(825);
      if (lookahead == '\'') ADVANCE(551);
      if (lookahead == ')') ADVANCE(538);
      if (lookahead == '-') ADVANCE(543);
      if (lookahead == '.') ADVANCE(567);
      if (lookahead == ':') ADVANCE(519);
      if (lookahead == 'A') ADVANCE(613);
      if (lookahead == 'D') ADVANCE(604);
      if (lookahead == 'F') ADVANCE(574);
      if (lookahead == 'G') ADVANCE(657);
      if (lookahead == 'I') ADVANCE(639);
      if (lookahead == 'J') ADVANCE(646);
      if (lookahead == 'N') ADVANCE(679);
      if (lookahead == 'R') ADVANCE(602);
      if (lookahead == 'S') ADVANCE(605);
      if (lookahead == 'T') ADVANCE(578);
      if (lookahead == '_') ADVANCE(566);
      if (lookahead == '`') ADVANCE(568);
      if (lookahead == 'a') ADVANCE(732);
      if (lookahead == 'd') ADVANCE(722);
      if (lookahead == 'f') ADVANCE(692);
      if (lookahead == 'g') ADVANCE(775);
      if (lookahead == 'i') ADVANCE(757);
      if (lookahead == 'j') ADVANCE(764);
      if (lookahead == 'n') ADVANCE(795);
      if (lookahead == 'r') ADVANCE(720);
      if (lookahead == 's') ADVANCE(723);
      if (lookahead == 't') ADVANCE(696);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(420)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(564);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(805);
      END_STATE();
    case 9:
      if (lookahead == '"') ADVANCE(547);
      if (lookahead == '#') ADVANCE(825);
      if (lookahead == '\'') ADVANCE(551);
      if (lookahead == '-') ADVANCE(543);
      if (lookahead == '.') ADVANCE(567);
      if (lookahead == 'F') ADVANCE(28);
      if (lookahead == 'N') ADVANCE(180);
      if (lookahead == 'T') ADVANCE(32);
      if (lookahead == 'V') ADVANCE(67);
      if (lookahead == '_') ADVANCE(565);
      if (lookahead == 'f') ADVANCE(191);
      if (lookahead == 'n') ADVANCE(398);
      if (lookahead == 't') ADVANCE(197);
      if (lookahead == 'v') ADVANCE(242);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(422)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(564);
      END_STATE();
    case 10:
      if (lookahead == '"') ADVANCE(560);
      if (lookahead == 'a') ADVANCE(292);
      if (lookahead == 'i') ADVANCE(293);
      if (lookahead == 'o') ADVANCE(359);
      if (lookahead == 'r') ADVANCE(335);
      if (lookahead == 'u') ADVANCE(303);
      END_STATE();
    case 11:
      if (lookahead == '"') ADVANCE(562);
      if (lookahead == 'e') ADVANCE(300);
      if (lookahead == 'i') ADVANCE(214);
      if (lookahead == 'o') ADVANCE(361);
      if (lookahead == 'q') ADVANCE(294);
      if (lookahead == 't') ADVANCE(218);
      if (lookahead == 'u') ADVANCE(308);
      if (lookahead == 'w') ADVANCE(275);
      END_STATE();
    case 12:
      if (lookahead == '"') ADVANCE(561);
      END_STATE();
    case 13:
      if (lookahead == '"') ADVANCE(563);
      END_STATE();
    case 14:
      if (lookahead == '"') ADVANCE(559);
      END_STATE();
    case 15:
      if (lookahead == '"') ADVANCE(14);
      END_STATE();
    case 16:
      if (lookahead == '#') ADVANCE(825);
      if (lookahead == '+') ADVANCE(545);
      if (lookahead == ',') ADVANCE(541);
      if (lookahead == '-') ADVANCE(544);
      if (lookahead == '.') ADVANCE(567);
      if (lookahead == ':') ADVANCE(519);
      if (lookahead == '[') ADVANCE(540);
      if (lookahead == ']') ADVANCE(542);
      if (lookahead == '`') ADVANCE(568);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(423)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(432);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(805);
      END_STATE();
    case 17:
      if (lookahead == '#') ADVANCE(825);
      if (lookahead == '-') ADVANCE(26);
      if (lookahead == '.') ADVANCE(567);
      if (lookahead == '_') ADVANCE(566);
      if (lookahead == '`') ADVANCE(568);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(424)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(564);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(805);
      END_STATE();
    case 18:
      if (lookahead == '#') ADVANCE(825);
      if (lookahead == '-') ADVANCE(26);
      if (lookahead == '`') ADVANCE(568);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(426)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(564);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(805);
      END_STATE();
    case 19:
      if (lookahead == '#') ADVANCE(825);
      if (lookahead == 'S') ADVANCE(623);
      if (lookahead == '`') ADVANCE(568);
      if (lookahead == 's') ADVANCE(741);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(425)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(819);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(805);
      END_STATE();
    case 20:
      if (lookahead == '#') ADVANCE(825);
      if (lookahead == '`') ADVANCE(568);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(428)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(819);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(805);
      END_STATE();
    case 21:
      if (lookahead == '#') ADVANCE(825);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(430)
      if (lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(806);
      END_STATE();
    case 22:
      if (lookahead == '.') ADVANCE(196);
      END_STATE();
    case 23:
      if (lookahead == '.') ADVANCE(807);
      END_STATE();
    case 24:
      if (lookahead == '=') ADVANCE(811);
      END_STATE();
    case 25:
      if (lookahead == '=') ADVANCE(546);
      END_STATE();
    case 26:
      if (lookahead == '>') ADVANCE(539);
      END_STATE();
    case 27:
      if (lookahead == '?') ADVANCE(816);
      END_STATE();
    case 28:
      if (lookahead == 'A') ADVANCE(101);
      END_STATE();
    case 29:
      if (lookahead == 'A') ADVANCE(101);
      if (lookahead == 'I') ADVANCE(102);
      if (lookahead == 'O') ADVANCE(152);
      if (lookahead == 'R') ADVANCE(134);
      if (lookahead == 'U') ADVANCE(107);
      END_STATE();
    case 30:
      if (lookahead == 'A') ADVANCE(188);
      if (lookahead == 'I') ADVANCE(117);
      END_STATE();
    case 31:
      if (lookahead == 'A') ADVANCE(167);
      END_STATE();
    case 32:
      if (lookahead == 'A') ADVANCE(151);
      if (lookahead == 'R') ADVANCE(182);
      END_STATE();
    case 33:
      if (lookahead == 'A') ADVANCE(84);
      END_STATE();
    case 34:
      if (lookahead == 'A') ADVANCE(175);
      END_STATE();
    case 35:
      if (lookahead == 'A') ADVANCE(127);
      END_STATE();
    case 36:
      if (lookahead == 'C') ADVANCE(512);
      END_STATE();
    case 37:
      if (lookahead == 'C') ADVANCE(86);
      END_STATE();
    case 38:
      if (lookahead == 'C') ADVANCE(168);
      END_STATE();
    case 39:
      if (lookahead == 'C') ADVANCE(171);
      END_STATE();
    case 40:
      if (lookahead == 'C') ADVANCE(172);
      END_STATE();
    case 41:
      if (lookahead == 'D') ADVANCE(501);
      END_STATE();
    case 42:
      if (lookahead == 'D') ADVANCE(471);
      END_STATE();
    case 43:
      if (lookahead == 'D') ADVANCE(52);
      END_STATE();
    case 44:
      if (lookahead == 'D') ADVANCE(92);
      END_STATE();
    case 45:
      if (lookahead == 'D') ADVANCE(131);
      END_STATE();
    case 46:
      if (lookahead == 'D') ADVANCE(62);
      END_STATE();
    case 47:
      if (lookahead == 'D') ADVANCE(46);
      END_STATE();
    case 48:
      if (lookahead == 'D') ADVANCE(96);
      END_STATE();
    case 49:
      if (lookahead == 'E') ADVANCE(76);
      END_STATE();
    case 50:
      if (lookahead == 'E') ADVANCE(114);
      if (lookahead == 'I') ADVANCE(79);
      if (lookahead == 'O') ADVANCE(109);
      END_STATE();
    case 51:
      if (lookahead == 'E') ADVANCE(114);
      if (lookahead == 'O') ADVANCE(109);
      END_STATE();
    case 52:
      if (lookahead == 'E') ADVANCE(495);
      END_STATE();
    case 53:
      if (lookahead == 'E') ADVANCE(458);
      END_STATE();
    case 54:
      if (lookahead == 'E') ADVANCE(465);
      END_STATE();
    case 55:
      if (lookahead == 'E') ADVANCE(467);
      END_STATE();
    case 56:
      if (lookahead == 'E') ADVANCE(450);
      END_STATE();
    case 57:
      if (lookahead == 'E') ADVANCE(473);
      END_STATE();
    case 58:
      if (lookahead == 'E') ADVANCE(477);
      END_STATE();
    case 59:
      if (lookahead == 'E') ADVANCE(454);
      END_STATE();
    case 60:
      if (lookahead == 'E') ADVANCE(38);
      END_STATE();
    case 61:
      if (lookahead == 'E') ADVANCE(190);
      END_STATE();
    case 62:
      if (lookahead == 'E') ADVANCE(184);
      END_STATE();
    case 63:
      if (lookahead == 'E') ADVANCE(150);
      END_STATE();
    case 64:
      if (lookahead == 'E') ADVANCE(85);
      END_STATE();
    case 65:
      if (lookahead == 'E') ADVANCE(106);
      if (lookahead == 'I') ADVANCE(43);
      if (lookahead == 'O') ADVANCE(154);
      if (lookahead == 'T') ADVANCE(47);
      if (lookahead == 'U') ADVANCE(111);
      if (lookahead == 'W') ADVANCE(93);
      END_STATE();
    case 66:
      if (lookahead == 'E') ADVANCE(106);
      if (lookahead == 'O') ADVANCE(154);
      END_STATE();
    case 67:
      if (lookahead == 'E') ADVANCE(153);
      END_STATE();
    case 68:
      if (lookahead == 'E') ADVANCE(149);
      if (lookahead == 'G') ADVANCE(489);
      END_STATE();
    case 69:
      if (lookahead == 'E') ADVANCE(146);
      END_STATE();
    case 70:
      if (lookahead == 'E') ADVANCE(169);
      END_STATE();
    case 71:
      if (lookahead == 'E') ADVANCE(156);
      END_STATE();
    case 72:
      if (lookahead == 'E') ADVANCE(147);
      END_STATE();
    case 73:
      if (lookahead == 'E') ADVANCE(162);
      END_STATE();
    case 74:
      if (lookahead == 'E') ADVANCE(39);
      END_STATE();
    case 75:
      if (lookahead == 'E') ADVANCE(124);
      END_STATE();
    case 76:
      if (lookahead == 'F') ADVANCE(163);
      if (lookahead == 'T') ADVANCE(514);
      END_STATE();
    case 77:
      if (lookahead == 'G') ADVANCE(82);
      if (lookahead == 'N') ADVANCE(41);
      if (lookahead == 'P') ADVANCE(142);
      END_STATE();
    case 78:
      if (lookahead == 'G') ADVANCE(82);
      if (lookahead == 'N') ADVANCE(41);
      if (lookahead == 'P') ADVANCE(142);
      if (lookahead == 'V') ADVANCE(68);
      END_STATE();
    case 79:
      if (lookahead == 'G') ADVANCE(87);
      END_STATE();
    case 80:
      if (lookahead == 'G') ADVANCE(507);
      END_STATE();
    case 81:
      if (lookahead == 'G') ADVANCE(509);
      END_STATE();
    case 82:
      if (lookahead == 'G') ADVANCE(155);
      END_STATE();
    case 83:
      if (lookahead == 'G') ADVANCE(70);
      END_STATE();
    case 84:
      if (lookahead == 'G') ADVANCE(58);
      END_STATE();
    case 85:
      if (lookahead == 'G') ADVANCE(34);
      END_STATE();
    case 86:
      if (lookahead == 'H') ADVANCE(469);
      END_STATE();
    case 87:
      if (lookahead == 'H') ADVANCE(166);
      END_STATE();
    case 88:
      if (lookahead == 'I') ADVANCE(185);
      END_STATE();
    case 89:
      if (lookahead == 'I') ADVANCE(102);
      if (lookahead == 'O') ADVANCE(152);
      if (lookahead == 'R') ADVANCE(134);
      if (lookahead == 'U') ADVANCE(107);
      END_STATE();
    case 90:
      if (lookahead == 'I') ADVANCE(102);
      if (lookahead == 'R') ADVANCE(134);
      if (lookahead == 'U') ADVANCE(116);
      END_STATE();
    case 91:
      if (lookahead == 'I') ADVANCE(122);
      END_STATE();
    case 92:
      if (lookahead == 'I') ADVANCE(160);
      END_STATE();
    case 93:
      if (lookahead == 'I') ADVANCE(173);
      END_STATE();
    case 94:
      if (lookahead == 'I') ADVANCE(118);
      END_STATE();
    case 95:
      if (lookahead == 'I') ADVANCE(123);
      END_STATE();
    case 96:
      if (lookahead == 'I') ADVANCE(126);
      END_STATE();
    case 97:
      if (lookahead == 'I') ADVANCE(129);
      END_STATE();
    case 98:
      if (lookahead == 'I') ADVANCE(136);
      END_STATE();
    case 99:
      if (lookahead == 'K') ADVANCE(53);
      END_STATE();
    case 100:
      if (lookahead == 'K') ADVANCE(53);
      if (lookahead == 'R') ADVANCE(83);
      END_STATE();
    case 101:
      if (lookahead == 'L') ADVANCE(159);
      END_STATE();
    case 102:
      if (lookahead == 'L') ADVANCE(177);
      END_STATE();
    case 103:
      if (lookahead == 'L') ADVANCE(500);
      END_STATE();
    case 104:
      if (lookahead == 'L') ADVANCE(510);
      END_STATE();
    case 105:
      if (lookahead == 'L') ADVANCE(516);
      END_STATE();
    case 106:
      if (lookahead == 'L') ADVANCE(60);
      END_STATE();
    case 107:
      if (lookahead == 'L') ADVANCE(103);
      if (lookahead == 'N') ADVANCE(36);
      END_STATE();
    case 108:
      if (lookahead == 'L') ADVANCE(104);
      END_STATE();
    case 109:
      if (lookahead == 'L') ADVANCE(110);
      if (lookahead == 'W') ADVANCE(157);
      END_STATE();
    case 110:
      if (lookahead == 'L') ADVANCE(95);
      END_STATE();
    case 111:
      if (lookahead == 'M') ADVANCE(491);
      END_STATE();
    case 112:
      if (lookahead == 'M') ADVANCE(444);
      END_STATE();
    case 113:
      if (lookahead == 'M') ADVANCE(31);
      END_STATE();
    case 114:
      if (lookahead == 'M') ADVANCE(139);
      END_STATE();
    case 115:
      if (lookahead == 'N') ADVANCE(505);
      END_STATE();
    case 116:
      if (lookahead == 'N') ADVANCE(36);
      END_STATE();
    case 117:
      if (lookahead == 'N') ADVANCE(479);
      END_STATE();
    case 118:
      if (lookahead == 'N') ADVANCE(461);
      END_STATE();
    case 119:
      if (lookahead == 'N') ADVANCE(535);
      END_STATE();
    case 120:
      if (lookahead == 'N') ADVANCE(517);
      END_STATE();
    case 121:
      if (lookahead == 'N') ADVANCE(128);
      END_STATE();
    case 122:
      if (lookahead == 'N') ADVANCE(45);
      END_STATE();
    case 123:
      if (lookahead == 'N') ADVANCE(80);
      END_STATE();
    case 124:
      if (lookahead == 'N') ADVANCE(42);
      END_STATE();
    case 125:
      if (lookahead == 'N') ADVANCE(165);
      END_STATE();
    case 126:
      if (lookahead == 'N') ADVANCE(81);
      END_STATE();
    case 127:
      if (lookahead == 'N') ADVANCE(48);
      END_STATE();
    case 128:
      if (lookahead == 'N') ADVANCE(69);
      if (lookahead == 'T') ADVANCE(71);
      END_STATE();
    case 129:
      if (lookahead == 'N') ADVANCE(40);
      END_STATE();
    case 130:
      if (lookahead == 'N') ADVANCE(176);
      END_STATE();
    case 131:
      if (lookahead == 'O') ADVANCE(187);
      END_STATE();
    case 132:
      if (lookahead == 'O') ADVANCE(181);
      if (lookahead == 'S') ADVANCE(183);
      END_STATE();
    case 133:
      if (lookahead == 'O') ADVANCE(179);
      END_STATE();
    case 134:
      if (lookahead == 'O') ADVANCE(112);
      END_STATE();
    case 135:
      if (lookahead == 'O') ADVANCE(119);
      END_STATE();
    case 136:
      if (lookahead == 'O') ADVANCE(120);
      END_STATE();
    case 137:
      if (lookahead == 'O') ADVANCE(94);
      END_STATE();
    case 138:
      if (lookahead == 'O') ADVANCE(94);
      if (lookahead == 'S') ADVANCE(135);
      END_STATE();
    case 139:
      if (lookahead == 'O') ADVANCE(186);
      END_STATE();
    case 140:
      if (lookahead == 'P') ADVANCE(35);
      END_STATE();
    case 141:
      if (lookahead == 'P') ADVANCE(452);
      END_STATE();
    case 142:
      if (lookahead == 'P') ADVANCE(75);
      END_STATE();
    case 143:
      if (lookahead == 'Q') ADVANCE(105);
      END_STATE();
    case 144:
      if (lookahead == 'R') ADVANCE(503);
      END_STATE();
    case 145:
      if (lookahead == 'R') ADVANCE(143);
      END_STATE();
    case 146:
      if (lookahead == 'R') ADVANCE(497);
      END_STATE();
    case 147:
      if (lookahead == 'R') ADVANCE(448);
      END_STATE();
    case 148:
      if (lookahead == 'R') ADVANCE(133);
      END_STATE();
    case 149:
      if (lookahead == 'R') ADVANCE(33);
      END_STATE();
    case 150:
      if (lookahead == 'R') ADVANCE(88);
      END_STATE();
    case 151:
      if (lookahead == 'R') ADVANCE(83);
      END_STATE();
    case 152:
      if (lookahead == 'R') ADVANCE(113);
      END_STATE();
    case 153:
      if (lookahead == 'R') ADVANCE(158);
      END_STATE();
    case 154:
      if (lookahead == 'R') ADVANCE(164);
      END_STATE();
    case 155:
      if (lookahead == 'R') ADVANCE(64);
      END_STATE();
    case 156:
      if (lookahead == 'R') ADVANCE(161);
      END_STATE();
    case 157:
      if (lookahead == 'S') ADVANCE(508);
      END_STATE();
    case 158:
      if (lookahead == 'S') ADVANCE(98);
      END_STATE();
    case 159:
      if (lookahead == 'S') ADVANCE(55);
      END_STATE();
    case 160:
      if (lookahead == 'S') ADVANCE(178);
      END_STATE();
    case 161:
      if (lookahead == 'S') ADVANCE(74);
      END_STATE();
    case 162:
      if (lookahead == 'T') ADVANCE(514);
      END_STATE();
    case 163:
      if (lookahead == 'T') ADVANCE(498);
      END_STATE();
    case 164:
      if (lookahead == 'T') ADVANCE(456);
      END_STATE();
    case 165:
      if (lookahead == 'T') ADVANCE(485);
      END_STATE();
    case 166:
      if (lookahead == 'T') ADVANCE(499);
      END_STATE();
    case 167:
      if (lookahead == 'T') ADVANCE(533);
      END_STATE();
    case 168:
      if (lookahead == 'T') ADVANCE(463);
      END_STATE();
    case 169:
      if (lookahead == 'T') ADVANCE(518);
      END_STATE();
    case 170:
      if (lookahead == 'T') ADVANCE(531);
      END_STATE();
    case 171:
      if (lookahead == 'T') ADVANCE(475);
      END_STATE();
    case 172:
      if (lookahead == 'T') ADVANCE(493);
      END_STATE();
    case 173:
      if (lookahead == 'T') ADVANCE(37);
      END_STATE();
    case 174:
      if (lookahead == 'T') ADVANCE(61);
      END_STATE();
    case 175:
      if (lookahead == 'T') ADVANCE(59);
      END_STATE();
    case 176:
      if (lookahead == 'T') ADVANCE(71);
      END_STATE();
    case 177:
      if (lookahead == 'T') ADVANCE(72);
      END_STATE();
    case 178:
      if (lookahead == 'T') ADVANCE(97);
      END_STATE();
    case 179:
      if (lookahead == 'U') ADVANCE(141);
      END_STATE();
    case 180:
      if (lookahead == 'U') ADVANCE(108);
      END_STATE();
    case 181:
      if (lookahead == 'U') ADVANCE(125);
      END_STATE();
    case 182:
      if (lookahead == 'U') ADVANCE(54);
      END_STATE();
    case 183:
      if (lookahead == 'V') ADVANCE(534);
      END_STATE();
    case 184:
      if (lookahead == 'V') ADVANCE(487);
      END_STATE();
    case 185:
      if (lookahead == 'V') ADVANCE(56);
      END_STATE();
    case 186:
      if (lookahead == 'V') ADVANCE(57);
      END_STATE();
    case 187:
      if (lookahead == 'W') ADVANCE(460);
      END_STATE();
    case 188:
      if (lookahead == 'X') ADVANCE(481);
      END_STATE();
    case 189:
      if (lookahead == 'X') ADVANCE(140);
      END_STATE();
    case 190:
      if (lookahead == 'X') ADVANCE(170);
      END_STATE();
    case 191:
      if (lookahead == 'a') ADVANCE(292);
      END_STATE();
    case 192:
      if (lookahead == 'a') ADVANCE(289);
      if (lookahead == 'r') ADVANCE(401);
      END_STATE();
    case 193:
      if (lookahead == 'a') ADVANCE(411);
      if (lookahead == 'i') ADVANCE(313);
      END_STATE();
    case 194:
      if (lookahead == 'a') ADVANCE(291);
      END_STATE();
    case 195:
      if (lookahead == 'a') ADVANCE(382);
      END_STATE();
    case 196:
      if (lookahead == 'a') ADVANCE(326);
      if (lookahead == 'b') ADVANCE(278);
      if (lookahead == 'c') ADVANCE(302);
      if (lookahead == 'd') ADVANCE(400);
      if (lookahead == 'g') ADVANCE(244);
      if (lookahead == 'h') ADVANCE(285);
      if (lookahead == 'm') ADVANCE(369);
      if (lookahead == 'p') ADVANCE(336);
      if (lookahead == 's') ADVANCE(325);
      END_STATE();
    case 197:
      if (lookahead == 'a') ADVANCE(358);
      if (lookahead == 'r') ADVANCE(401);
      END_STATE();
    case 198:
      if (lookahead == 'a') ADVANCE(264);
      END_STATE();
    case 199:
      if (lookahead == 'a') ADVANCE(288);
      END_STATE();
    case 200:
      if (lookahead == 'a') ADVANCE(391);
      END_STATE();
    case 201:
      if (lookahead == 'a') ADVANCE(323);
      END_STATE();
    case 202:
      if (lookahead == 'b') ADVANCE(530);
      END_STATE();
    case 203:
      if (lookahead == 'c') ADVANCE(512);
      END_STATE();
    case 204:
      if (lookahead == 'c') ADVANCE(290);
      END_STATE();
    case 205:
      if (lookahead == 'c') ADVANCE(523);
      END_STATE();
    case 206:
      if (lookahead == 'c') ADVANCE(267);
      END_STATE();
    case 207:
      if (lookahead == 'c') ADVANCE(287);
      END_STATE();
    case 208:
      if (lookahead == 'c') ADVANCE(383);
      END_STATE();
    case 209:
      if (lookahead == 'c') ADVANCE(386);
      END_STATE();
    case 210:
      if (lookahead == 'c') ADVANCE(387);
      END_STATE();
    case 211:
      if (lookahead == 'd') ADVANCE(501);
      END_STATE();
    case 212:
      if (lookahead == 'd') ADVANCE(471);
      END_STATE();
    case 213:
      if (lookahead == 'd') ADVANCE(202);
      END_STATE();
    case 214:
      if (lookahead == 'd') ADVANCE(223);
      END_STATE();
    case 215:
      if (lookahead == 'd') ADVANCE(331);
      END_STATE();
    case 216:
      if (lookahead == 'd') ADVANCE(284);
      END_STATE();
    case 217:
      if (lookahead == 'd') ADVANCE(237);
      END_STATE();
    case 218:
      if (lookahead == 'd') ADVANCE(217);
      END_STATE();
    case 219:
      if (lookahead == 'd') ADVANCE(281);
      END_STATE();
    case 220:
      if (lookahead == 'e') ADVANCE(254);
      END_STATE();
    case 221:
      if (lookahead == 'e') ADVANCE(311);
      if (lookahead == 'i') ADVANCE(258);
      if (lookahead == 'o') ADVANCE(305);
      END_STATE();
    case 222:
      if (lookahead == 'e') ADVANCE(311);
      if (lookahead == 'o') ADVANCE(305);
      END_STATE();
    case 223:
      if (lookahead == 'e') ADVANCE(495);
      END_STATE();
    case 224:
      if (lookahead == 'e') ADVANCE(458);
      END_STATE();
    case 225:
      if (lookahead == 'e') ADVANCE(465);
      END_STATE();
    case 226:
      if (lookahead == 'e') ADVANCE(467);
      END_STATE();
    case 227:
      if (lookahead == 'e') ADVANCE(450);
      END_STATE();
    case 228:
      if (lookahead == 'e') ADVANCE(473);
      END_STATE();
    case 229:
      if (lookahead == 'e') ADVANCE(477);
      END_STATE();
    case 230:
      if (lookahead == 'e') ADVANCE(524);
      END_STATE();
    case 231:
      if (lookahead == 'e') ADVANCE(454);
      END_STATE();
    case 232:
      if (lookahead == 'e') ADVANCE(528);
      END_STATE();
    case 233:
      if (lookahead == 'e') ADVANCE(529);
      END_STATE();
    case 234:
      if (lookahead == 'e') ADVANCE(522);
      END_STATE();
    case 235:
      if (lookahead == 'e') ADVANCE(208);
      END_STATE();
    case 236:
      if (lookahead == 'e') ADVANCE(413);
      END_STATE();
    case 237:
      if (lookahead == 'e') ADVANCE(405);
      END_STATE();
    case 238:
      if (lookahead == 'e') ADVANCE(357);
      END_STATE();
    case 239:
      if (lookahead == 'e') ADVANCE(266);
      END_STATE();
    case 240:
      if (lookahead == 'e') ADVANCE(300);
      if (lookahead == 'o') ADVANCE(361);
      END_STATE();
    case 241:
      if (lookahead == 'e') ADVANCE(367);
      END_STATE();
    case 242:
      if (lookahead == 'e') ADVANCE(360);
      END_STATE();
    case 243:
      if (lookahead == 'e') ADVANCE(356);
      if (lookahead == 'g') ADVANCE(489);
      END_STATE();
    case 244:
      if (lookahead == 'e') ADVANCE(329);
      END_STATE();
    case 245:
      if (lookahead == 'e') ADVANCE(352);
      END_STATE();
    case 246:
      if (lookahead == 'e') ADVANCE(384);
      END_STATE();
    case 247:
      if (lookahead == 'e') ADVANCE(365);
      END_STATE();
    case 248:
      if (lookahead == 'e') ADVANCE(353);
      END_STATE();
    case 249:
      if (lookahead == 'e') ADVANCE(363);
      END_STATE();
    case 250:
      if (lookahead == 'e') ADVANCE(354);
      END_STATE();
    case 251:
      if (lookahead == 'e') ADVANCE(378);
      END_STATE();
    case 252:
      if (lookahead == 'e') ADVANCE(209);
      END_STATE();
    case 253:
      if (lookahead == 'e') ADVANCE(321);
      END_STATE();
    case 254:
      if (lookahead == 'f') ADVANCE(379);
      if (lookahead == 't') ADVANCE(514);
      END_STATE();
    case 255:
      if (lookahead == 'f') ADVANCE(301);
      END_STATE();
    case 256:
      if (lookahead == 'g') ADVANCE(262);
      if (lookahead == 'n') ADVANCE(211);
      if (lookahead == 'p') ADVANCE(345);
      END_STATE();
    case 257:
      if (lookahead == 'g') ADVANCE(262);
      if (lookahead == 'n') ADVANCE(211);
      if (lookahead == 'p') ADVANCE(345);
      if (lookahead == 'v') ADVANCE(243);
      END_STATE();
    case 258:
      if (lookahead == 'g') ADVANCE(268);
      END_STATE();
    case 259:
      if (lookahead == 'g') ADVANCE(507);
      END_STATE();
    case 260:
      if (lookahead == 'g') ADVANCE(509);
      END_STATE();
    case 261:
      if (lookahead == 'g') ADVANCE(346);
      END_STATE();
    case 262:
      if (lookahead == 'g') ADVANCE(362);
      END_STATE();
    case 263:
      if (lookahead == 'g') ADVANCE(246);
      END_STATE();
    case 264:
      if (lookahead == 'g') ADVANCE(229);
      END_STATE();
    case 265:
      if (lookahead == 'g') ADVANCE(364);
      END_STATE();
    case 266:
      if (lookahead == 'g') ADVANCE(200);
      END_STATE();
    case 267:
      if (lookahead == 'h') ADVANCE(469);
      END_STATE();
    case 268:
      if (lookahead == 'h') ADVANCE(381);
      END_STATE();
    case 269:
      if (lookahead == 'h') ADVANCE(338);
      END_STATE();
    case 270:
      if (lookahead == 'i') ADVANCE(520);
      END_STATE();
    case 271:
      if (lookahead == 'i') ADVANCE(406);
      END_STATE();
    case 272:
      if (lookahead == 'i') ADVANCE(293);
      if (lookahead == 'o') ADVANCE(359);
      if (lookahead == 'r') ADVANCE(335);
      if (lookahead == 'u') ADVANCE(303);
      END_STATE();
    case 273:
      if (lookahead == 'i') ADVANCE(293);
      if (lookahead == 'r') ADVANCE(335);
      if (lookahead == 'u') ADVANCE(314);
      END_STATE();
    case 274:
      if (lookahead == 'i') ADVANCE(319);
      END_STATE();
    case 275:
      if (lookahead == 'i') ADVANCE(389);
      END_STATE();
    case 276:
      if (lookahead == 'i') ADVANCE(315);
      END_STATE();
    case 277:
      if (lookahead == 'i') ADVANCE(207);
      END_STATE();
    case 278:
      if (lookahead == 'i') ADVANCE(261);
      END_STATE();
    case 279:
      if (lookahead == 'i') ADVANCE(205);
      END_STATE();
    case 280:
      if (lookahead == 'i') ADVANCE(320);
      END_STATE();
    case 281:
      if (lookahead == 'i') ADVANCE(324);
      END_STATE();
    case 282:
      if (lookahead == 'i') ADVANCE(328);
      END_STATE();
    case 283:
      if (lookahead == 'i') ADVANCE(339);
      END_STATE();
    case 284:
      if (lookahead == 'i') ADVANCE(373);
      END_STATE();
    case 285:
      if (lookahead == 'i') ADVANCE(408);
      END_STATE();
    case 286:
      if (lookahead == 'i') ADVANCE(392);
      END_STATE();
    case 287:
      if (lookahead == 'k') ADVANCE(269);
      END_STATE();
    case 288:
      if (lookahead == 'k') ADVANCE(224);
      END_STATE();
    case 289:
      if (lookahead == 'k') ADVANCE(224);
      if (lookahead == 'r') ADVANCE(263);
      END_STATE();
    case 290:
      if (lookahead == 'k') ADVANCE(213);
      END_STATE();
    case 291:
      if (lookahead == 'k') ADVANCE(233);
      END_STATE();
    case 292:
      if (lookahead == 'l') ADVANCE(371);
      END_STATE();
    case 293:
      if (lookahead == 'l') ADVANCE(395);
      END_STATE();
    case 294:
      if (lookahead == 'l') ADVANCE(22);
      END_STATE();
    case 295:
      if (lookahead == 'l') ADVANCE(500);
      END_STATE();
    case 296:
      if (lookahead == 'l') ADVANCE(510);
      END_STATE();
    case 297:
      if (lookahead == 'l') ADVANCE(516);
      END_STATE();
    case 298:
      if (lookahead == 'l') ADVANCE(525);
      END_STATE();
    case 299:
      if (lookahead == 'l') ADVANCE(526);
      END_STATE();
    case 300:
      if (lookahead == 'l') ADVANCE(235);
      END_STATE();
    case 301:
      if (lookahead == 'l') ADVANCE(194);
      END_STATE();
    case 302:
      if (lookahead == 'l') ADVANCE(277);
      END_STATE();
    case 303:
      if (lookahead == 'l') ADVANCE(295);
      if (lookahead == 'n') ADVANCE(203);
      END_STATE();
    case 304:
      if (lookahead == 'l') ADVANCE(296);
      END_STATE();
    case 305:
      if (lookahead == 'l') ADVANCE(307);
      if (lookahead == 'w') ADVANCE(366);
      END_STATE();
    case 306:
      if (lookahead == 'l') ADVANCE(286);
      END_STATE();
    case 307:
      if (lookahead == 'l') ADVANCE(280);
      END_STATE();
    case 308:
      if (lookahead == 'm') ADVANCE(491);
      END_STATE();
    case 309:
      if (lookahead == 'm') ADVANCE(445);
      END_STATE();
    case 310:
      if (lookahead == 'm') ADVANCE(195);
      END_STATE();
    case 311:
      if (lookahead == 'm') ADVANCE(342);
      END_STATE();
    case 312:
      if (lookahead == 'n') ADVANCE(506);
      END_STATE();
    case 313:
      if (lookahead == 'n') ADVANCE(479);
      END_STATE();
    case 314:
      if (lookahead == 'n') ADVANCE(203);
      END_STATE();
    case 315:
      if (lookahead == 'n') ADVANCE(461);
      END_STATE();
    case 316:
      if (lookahead == 'n') ADVANCE(535);
      END_STATE();
    case 317:
      if (lookahead == 'n') ADVANCE(517);
      END_STATE();
    case 318:
      if (lookahead == 'n') ADVANCE(327);
      END_STATE();
    case 319:
      if (lookahead == 'n') ADVANCE(215);
      END_STATE();
    case 320:
      if (lookahead == 'n') ADVANCE(259);
      END_STATE();
    case 321:
      if (lookahead == 'n') ADVANCE(212);
      END_STATE();
    case 322:
      if (lookahead == 'n') ADVANCE(388);
      END_STATE();
    case 323:
      if (lookahead == 'n') ADVANCE(219);
      END_STATE();
    case 324:
      if (lookahead == 'n') ADVANCE(260);
      END_STATE();
    case 325:
      if (lookahead == 'n') ADVANCE(333);
      if (lookahead == 'q') ADVANCE(306);
      END_STATE();
    case 326:
      if (lookahead == 'n') ADVANCE(370);
      END_STATE();
    case 327:
      if (lookahead == 'n') ADVANCE(245);
      if (lookahead == 't') ADVANCE(247);
      END_STATE();
    case 328:
      if (lookahead == 'n') ADVANCE(210);
      END_STATE();
    case 329:
      if (lookahead == 'n') ADVANCE(249);
      END_STATE();
    case 330:
      if (lookahead == 'n') ADVANCE(394);
      END_STATE();
    case 331:
      if (lookahead == 'o') ADVANCE(409);
      END_STATE();
    case 332:
      if (lookahead == 'o') ADVANCE(399);
      if (lookahead == 's') ADVANCE(404);
      END_STATE();
    case 333:
      if (lookahead == 'o') ADVANCE(410);
      END_STATE();
    case 334:
      if (lookahead == 'o') ADVANCE(397);
      END_STATE();
    case 335:
      if (lookahead == 'o') ADVANCE(309);
      END_STATE();
    case 336:
      if (lookahead == 'o') ADVANCE(372);
      END_STATE();
    case 337:
      if (lookahead == 'o') ADVANCE(316);
      END_STATE();
    case 338:
      if (lookahead == 'o') ADVANCE(402);
      END_STATE();
    case 339:
      if (lookahead == 'o') ADVANCE(317);
      END_STATE();
    case 340:
      if (lookahead == 'o') ADVANCE(276);
      END_STATE();
    case 341:
      if (lookahead == 'o') ADVANCE(276);
      if (lookahead == 's') ADVANCE(337);
      END_STATE();
    case 342:
      if (lookahead == 'o') ADVANCE(407);
      END_STATE();
    case 343:
      if (lookahead == 'p') ADVANCE(201);
      END_STATE();
    case 344:
      if (lookahead == 'p') ADVANCE(452);
      END_STATE();
    case 345:
      if (lookahead == 'p') ADVANCE(253);
      END_STATE();
    case 346:
      if (lookahead == 'q') ADVANCE(403);
      END_STATE();
    case 347:
      if (lookahead == 'q') ADVANCE(297);
      END_STATE();
    case 348:
      if (lookahead == 'q') ADVANCE(298);
      END_STATE();
    case 349:
      if (lookahead == 'q') ADVANCE(299);
      END_STATE();
    case 350:
      if (lookahead == 'r') ADVANCE(503);
      END_STATE();
    case 351:
      if (lookahead == 'r') ADVANCE(347);
      END_STATE();
    case 352:
      if (lookahead == 'r') ADVANCE(497);
      END_STATE();
    case 353:
      if (lookahead == 'r') ADVANCE(448);
      END_STATE();
    case 354:
      if (lookahead == 'r') ADVANCE(414);
      END_STATE();
    case 355:
      if (lookahead == 'r') ADVANCE(334);
      END_STATE();
    case 356:
      if (lookahead == 'r') ADVANCE(198);
      END_STATE();
    case 357:
      if (lookahead == 'r') ADVANCE(271);
      END_STATE();
    case 358:
      if (lookahead == 'r') ADVANCE(263);
      END_STATE();
    case 359:
      if (lookahead == 'r') ADVANCE(310);
      END_STATE();
    case 360:
      if (lookahead == 'r') ADVANCE(368);
      END_STATE();
    case 361:
      if (lookahead == 'r') ADVANCE(380);
      END_STATE();
    case 362:
      if (lookahead == 'r') ADVANCE(239);
      END_STATE();
    case 363:
      if (lookahead == 'r') ADVANCE(279);
      END_STATE();
    case 364:
      if (lookahead == 'r') ADVANCE(241);
      END_STATE();
    case 365:
      if (lookahead == 'r') ADVANCE(376);
      END_STATE();
    case 366:
      if (lookahead == 's') ADVANCE(508);
      END_STATE();
    case 367:
      if (lookahead == 's') ADVANCE(527);
      END_STATE();
    case 368:
      if (lookahead == 's') ADVANCE(283);
      END_STATE();
    case 369:
      if (lookahead == 's') ADVANCE(375);
      if (lookahead == 'y') ADVANCE(377);
      END_STATE();
    case 370:
      if (lookahead == 's') ADVANCE(270);
      END_STATE();
    case 371:
      if (lookahead == 's') ADVANCE(226);
      END_STATE();
    case 372:
      if (lookahead == 's') ADVANCE(393);
      END_STATE();
    case 373:
      if (lookahead == 's') ADVANCE(396);
      END_STATE();
    case 374:
      if (lookahead == 's') ADVANCE(234);
      END_STATE();
    case 375:
      if (lookahead == 's') ADVANCE(348);
      END_STATE();
    case 376:
      if (lookahead == 's') ADVANCE(252);
      END_STATE();
    case 377:
      if (lookahead == 's') ADVANCE(349);
      END_STATE();
    case 378:
      if (lookahead == 't') ADVANCE(514);
      END_STATE();
    case 379:
      if (lookahead == 't') ADVANCE(498);
      END_STATE();
    case 380:
      if (lookahead == 't') ADVANCE(456);
      END_STATE();
    case 381:
      if (lookahead == 't') ADVANCE(499);
      END_STATE();
    case 382:
      if (lookahead == 't') ADVANCE(533);
      END_STATE();
    case 383:
      if (lookahead == 't') ADVANCE(463);
      END_STATE();
    case 384:
      if (lookahead == 't') ADVANCE(518);
      END_STATE();
    case 385:
      if (lookahead == 't') ADVANCE(531);
      END_STATE();
    case 386:
      if (lookahead == 't') ADVANCE(475);
      END_STATE();
    case 387:
      if (lookahead == 't') ADVANCE(493);
      END_STATE();
    case 388:
      if (lookahead == 't') ADVANCE(486);
      END_STATE();
    case 389:
      if (lookahead == 't') ADVANCE(206);
      END_STATE();
    case 390:
      if (lookahead == 't') ADVANCE(236);
      END_STATE();
    case 391:
      if (lookahead == 't') ADVANCE(231);
      END_STATE();
    case 392:
      if (lookahead == 't') ADVANCE(232);
      END_STATE();
    case 393:
      if (lookahead == 't') ADVANCE(265);
      END_STATE();
    case 394:
      if (lookahead == 't') ADVANCE(247);
      END_STATE();
    case 395:
      if (lookahead == 't') ADVANCE(248);
      END_STATE();
    case 396:
      if (lookahead == 't') ADVANCE(282);
      END_STATE();
    case 397:
      if (lookahead == 'u') ADVANCE(344);
      END_STATE();
    case 398:
      if (lookahead == 'u') ADVANCE(304);
      END_STATE();
    case 399:
      if (lookahead == 'u') ADVANCE(322);
      END_STATE();
    case 400:
      if (lookahead == 'u') ADVANCE(204);
      END_STATE();
    case 401:
      if (lookahead == 'u') ADVANCE(225);
      END_STATE();
    case 402:
      if (lookahead == 'u') ADVANCE(374);
      END_STATE();
    case 403:
      if (lookahead == 'u') ADVANCE(250);
      END_STATE();
    case 404:
      if (lookahead == 'v') ADVANCE(534);
      END_STATE();
    case 405:
      if (lookahead == 'v') ADVANCE(487);
      END_STATE();
    case 406:
      if (lookahead == 'v') ADVANCE(227);
      END_STATE();
    case 407:
      if (lookahead == 'v') ADVANCE(228);
      END_STATE();
    case 408:
      if (lookahead == 'v') ADVANCE(230);
      END_STATE();
    case 409:
      if (lookahead == 'w') ADVANCE(460);
      END_STATE();
    case 410:
      if (lookahead == 'w') ADVANCE(255);
      END_STATE();
    case 411:
      if (lookahead == 'x') ADVANCE(481);
      END_STATE();
    case 412:
      if (lookahead == 'x') ADVANCE(343);
      END_STATE();
    case 413:
      if (lookahead == 'x') ADVANCE(385);
      END_STATE();
    case 414:
      if (lookahead == 'y') ADVANCE(521);
      END_STATE();
    case 415:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(415)
      if (lookahead == '"') ADVANCE(547);
      if (lookahead == '#') ADVANCE(825);
      if (lookahead == '\'') ADVANCE(551);
      if (lookahead == '(') ADVANCE(537);
      if (lookahead == ',') ADVANCE(541);
      if (lookahead == '-') ADVANCE(543);
      if (lookahead == '.') ADVANCE(567);
      if (lookahead == '@') ADVANCE(820);
      if (lookahead == 'A') ADVANCE(683);
      if (lookahead == 'C') ADVANCE(642);
      if (lookahead == 'F') ADVANCE(575);
      if (lookahead == 'M') ADVANCE(576);
      if (lookahead == 'N') ADVANCE(679);
      if (lookahead == 'S') ADVANCE(663);
      if (lookahead == 'T') ADVANCE(653);
      if (lookahead == ']') ADVANCE(542);
      if (lookahead == '_') ADVANCE(566);
      if (lookahead == '`') ADVANCE(568);
      if (lookahead == 'a') ADVANCE(799);
      if (lookahead == 'c') ADVANCE(760);
      if (lookahead == 'f') ADVANCE(569);
      if (lookahead == 'm') ADVANCE(694);
      if (lookahead == 'n') ADVANCE(795);
      if (lookahead == 's') ADVANCE(571);
      if (lookahead == 't') ADVANCE(771);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(564);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(805);
      END_STATE();
    case 416:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(416)
      if (lookahead == '"') ADVANCE(547);
      if (lookahead == '#') ADVANCE(825);
      if (lookahead == '\'') ADVANCE(551);
      if (lookahead == '(') ADVANCE(537);
      if (lookahead == '-') ADVANCE(543);
      if (lookahead == '.') ADVANCE(567);
      if (lookahead == '@') ADVANCE(820);
      if (lookahead == 'A') ADVANCE(683);
      if (lookahead == 'C') ADVANCE(645);
      if (lookahead == 'F') ADVANCE(575);
      if (lookahead == 'M') ADVANCE(576);
      if (lookahead == 'N') ADVANCE(679);
      if (lookahead == 'S') ADVANCE(662);
      if (lookahead == 'T') ADVANCE(653);
      if (lookahead == '_') ADVANCE(566);
      if (lookahead == '`') ADVANCE(568);
      if (lookahead == 'a') ADVANCE(799);
      if (lookahead == 'c') ADVANCE(763);
      if (lookahead == 'f') ADVANCE(569);
      if (lookahead == 'm') ADVANCE(694);
      if (lookahead == 'n') ADVANCE(795);
      if (lookahead == 's') ADVANCE(570);
      if (lookahead == 't') ADVANCE(771);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(564);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(805);
      END_STATE();
    case 417:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(417)
      if (lookahead == '!') ADVANCE(24);
      if (lookahead == '"') ADVANCE(547);
      if (lookahead == '#') ADVANCE(825);
      if (lookahead == '\'') ADVANCE(551);
      if (lookahead == ')') ADVANCE(538);
      if (lookahead == '*') ADVANCE(808);
      if (lookahead == '+') ADVANCE(545);
      if (lookahead == '-') ADVANCE(543);
      if (lookahead == '.') ADVANCE(567);
      if (lookahead == '/') ADVANCE(809);
      if (lookahead == '<') ADVANCE(814);
      if (lookahead == '=') ADVANCE(25);
      if (lookahead == '>') ADVANCE(812);
      if (lookahead == '?') ADVANCE(27);
      if (lookahead == 'A') ADVANCE(612);
      if (lookahead == 'D') ADVANCE(604);
      if (lookahead == 'F') ADVANCE(574);
      if (lookahead == 'G') ADVANCE(657);
      if (lookahead == 'I') ADVANCE(639);
      if (lookahead == 'J') ADVANCE(646);
      if (lookahead == 'N') ADVANCE(679);
      if (lookahead == 'O') ADVANCE(650);
      if (lookahead == 'R') ADVANCE(602);
      if (lookahead == 'S') ADVANCE(605);
      if (lookahead == 'T') ADVANCE(578);
      if (lookahead == '_') ADVANCE(566);
      if (lookahead == '`') ADVANCE(568);
      if (lookahead == 'a') ADVANCE(731);
      if (lookahead == 'd') ADVANCE(722);
      if (lookahead == 'f') ADVANCE(692);
      if (lookahead == 'g') ADVANCE(775);
      if (lookahead == 'i') ADVANCE(757);
      if (lookahead == 'j') ADVANCE(764);
      if (lookahead == 'n') ADVANCE(795);
      if (lookahead == 'o') ADVANCE(769);
      if (lookahead == 'r') ADVANCE(720);
      if (lookahead == 's') ADVANCE(723);
      if (lookahead == 't') ADVANCE(696);
      if (lookahead == '|') ADVANCE(810);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(564);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(805);
      END_STATE();
    case 418:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(418)
      if (lookahead == '!') ADVANCE(831);
      if (lookahead == '"') ADVANCE(547);
      if (lookahead == '#') ADVANCE(825);
      if (lookahead == '\'') ADVANCE(551);
      if (lookahead == '(') ADVANCE(537);
      if (lookahead == ',') ADVANCE(541);
      if (lookahead == '-') ADVANCE(543);
      if (lookahead == '.') ADVANCE(567);
      if (lookahead == '=') ADVANCE(25);
      if (lookahead == '@') ADVANCE(820);
      if (lookahead == 'F') ADVANCE(575);
      if (lookahead == 'N') ADVANCE(679);
      if (lookahead == 'T') ADVANCE(653);
      if (lookahead == '[') ADVANCE(540);
      if (lookahead == ']') ADVANCE(542);
      if (lookahead == '_') ADVANCE(566);
      if (lookahead == '`') ADVANCE(568);
      if (lookahead == 'f') ADVANCE(569);
      if (lookahead == 'n') ADVANCE(795);
      if (lookahead == 's') ADVANCE(572);
      if (lookahead == 't') ADVANCE(771);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(564);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(805);
      END_STATE();
    case 419:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(419)
      if (lookahead == '!') ADVANCE(24);
      if (lookahead == '"') ADVANCE(547);
      if (lookahead == '#') ADVANCE(825);
      if (lookahead == '\'') ADVANCE(551);
      if (lookahead == '(') ADVANCE(537);
      if (lookahead == ')') ADVANCE(538);
      if (lookahead == '*') ADVANCE(808);
      if (lookahead == '+') ADVANCE(545);
      if (lookahead == ',') ADVANCE(541);
      if (lookahead == '-') ADVANCE(543);
      if (lookahead == '.') ADVANCE(567);
      if (lookahead == '/') ADVANCE(809);
      if (lookahead == '<') ADVANCE(814);
      if (lookahead == '=') ADVANCE(25);
      if (lookahead == '>') ADVANCE(812);
      if (lookahead == '?') ADVANCE(27);
      if (lookahead == 'A') ADVANCE(638);
      if (lookahead == 'F') ADVANCE(575);
      if (lookahead == 'N') ADVANCE(679);
      if (lookahead == 'O') ADVANCE(650);
      if (lookahead == 'T') ADVANCE(653);
      if (lookahead == ']') ADVANCE(542);
      if (lookahead == '_') ADVANCE(566);
      if (lookahead == '`') ADVANCE(568);
      if (lookahead == 'a') ADVANCE(756);
      if (lookahead == 'f') ADVANCE(693);
      if (lookahead == 'n') ADVANCE(795);
      if (lookahead == 'o') ADVANCE(769);
      if (lookahead == 't') ADVANCE(771);
      if (lookahead == '|') ADVANCE(810);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(564);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(805);
      END_STATE();
    case 420:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(420)
      if (lookahead == '"') ADVANCE(547);
      if (lookahead == '#') ADVANCE(825);
      if (lookahead == '\'') ADVANCE(551);
      if (lookahead == ')') ADVANCE(538);
      if (lookahead == '-') ADVANCE(543);
      if (lookahead == '.') ADVANCE(567);
      if (lookahead == ':') ADVANCE(519);
      if (lookahead == 'A') ADVANCE(613);
      if (lookahead == 'D') ADVANCE(604);
      if (lookahead == 'F') ADVANCE(574);
      if (lookahead == 'G') ADVANCE(657);
      if (lookahead == 'I') ADVANCE(639);
      if (lookahead == 'J') ADVANCE(646);
      if (lookahead == 'N') ADVANCE(679);
      if (lookahead == 'R') ADVANCE(602);
      if (lookahead == 'S') ADVANCE(605);
      if (lookahead == 'T') ADVANCE(578);
      if (lookahead == '_') ADVANCE(566);
      if (lookahead == '`') ADVANCE(568);
      if (lookahead == 'a') ADVANCE(732);
      if (lookahead == 'd') ADVANCE(722);
      if (lookahead == 'f') ADVANCE(692);
      if (lookahead == 'g') ADVANCE(775);
      if (lookahead == 'i') ADVANCE(757);
      if (lookahead == 'j') ADVANCE(764);
      if (lookahead == 'n') ADVANCE(795);
      if (lookahead == 'r') ADVANCE(720);
      if (lookahead == 's') ADVANCE(723);
      if (lookahead == 't') ADVANCE(696);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(564);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(805);
      END_STATE();
    case 421:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(421)
      if (lookahead == '"') ADVANCE(547);
      if (lookahead == '#') ADVANCE(825);
      if (lookahead == '\'') ADVANCE(551);
      if (lookahead == '(') ADVANCE(537);
      if (lookahead == ')') ADVANCE(538);
      if (lookahead == ',') ADVANCE(541);
      if (lookahead == '-') ADVANCE(543);
      if (lookahead == '.') ADVANCE(567);
      if (lookahead == ':') ADVANCE(519);
      if (lookahead == 'F') ADVANCE(575);
      if (lookahead == 'N') ADVANCE(679);
      if (lookahead == 'T') ADVANCE(653);
      if (lookahead == ']') ADVANCE(542);
      if (lookahead == '_') ADVANCE(566);
      if (lookahead == '`') ADVANCE(568);
      if (lookahead == 'f') ADVANCE(693);
      if (lookahead == 'n') ADVANCE(795);
      if (lookahead == 't') ADVANCE(771);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(564);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(805);
      END_STATE();
    case 422:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(422)
      if (lookahead == '"') ADVANCE(547);
      if (lookahead == '#') ADVANCE(825);
      if (lookahead == '\'') ADVANCE(551);
      if (lookahead == '-') ADVANCE(543);
      if (lookahead == '.') ADVANCE(567);
      if (lookahead == 'F') ADVANCE(28);
      if (lookahead == 'N') ADVANCE(180);
      if (lookahead == 'T') ADVANCE(32);
      if (lookahead == 'V') ADVANCE(67);
      if (lookahead == '_') ADVANCE(565);
      if (lookahead == 'f') ADVANCE(191);
      if (lookahead == 'n') ADVANCE(398);
      if (lookahead == 't') ADVANCE(197);
      if (lookahead == 'v') ADVANCE(242);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(564);
      END_STATE();
    case 423:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(423)
      if (lookahead == '#') ADVANCE(825);
      if (lookahead == '+') ADVANCE(545);
      if (lookahead == ',') ADVANCE(541);
      if (lookahead == '-') ADVANCE(544);
      if (lookahead == '.') ADVANCE(567);
      if (lookahead == ':') ADVANCE(519);
      if (lookahead == '[') ADVANCE(540);
      if (lookahead == ']') ADVANCE(542);
      if (lookahead == '`') ADVANCE(568);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(432);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(805);
      END_STATE();
    case 424:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(424)
      if (lookahead == '#') ADVANCE(825);
      if (lookahead == '-') ADVANCE(26);
      if (lookahead == '.') ADVANCE(567);
      if (lookahead == '_') ADVANCE(566);
      if (lookahead == '`') ADVANCE(568);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(564);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(805);
      END_STATE();
    case 425:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(425)
      if (lookahead == '#') ADVANCE(825);
      if (lookahead == 'S') ADVANCE(623);
      if (lookahead == '`') ADVANCE(568);
      if (lookahead == 's') ADVANCE(741);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(819);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(805);
      END_STATE();
    case 426:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(426)
      if (lookahead == '#') ADVANCE(825);
      if (lookahead == '-') ADVANCE(26);
      if (lookahead == '`') ADVANCE(568);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(564);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(805);
      END_STATE();
    case 427:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(557);
      if (lookahead == '"') ADVANCE(556);
      if (lookahead == '#') ADVANCE(825);
      if (lookahead != 0) ADVANCE(555);
      END_STATE();
    case 428:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(428)
      if (lookahead == '#') ADVANCE(825);
      if (lookahead == '`') ADVANCE(568);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(819);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(805);
      END_STATE();
    case 429:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(558);
      if (lookahead == '#') ADVANCE(825);
      if (lookahead != 0) ADVANCE(555);
      END_STATE();
    case 430:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(430)
      if (lookahead == '#') ADVANCE(825);
      if (lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(806);
      END_STATE();
    case 431:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(431)
      if (lookahead == '"') ADVANCE(547);
      if (lookahead == '#') ADVANCE(825);
      if (lookahead == '\'') ADVANCE(551);
      if (lookahead == '(') ADVANCE(537);
      if (lookahead == '-') ADVANCE(543);
      if (lookahead == '.') ADVANCE(567);
      if (lookahead == '@') ADVANCE(820);
      if (lookahead == 'A') ADVANCE(683);
      if (lookahead == 'C') ADVANCE(645);
      if (lookahead == 'F') ADVANCE(575);
      if (lookahead == 'M') ADVANCE(576);
      if (lookahead == 'N') ADVANCE(679);
      if (lookahead == 'S') ADVANCE(663);
      if (lookahead == 'T') ADVANCE(653);
      if (lookahead == '_') ADVANCE(566);
      if (lookahead == '`') ADVANCE(568);
      if (lookahead == 'a') ADVANCE(799);
      if (lookahead == 'c') ADVANCE(763);
      if (lookahead == 'f') ADVANCE(569);
      if (lookahead == 'm') ADVANCE(694);
      if (lookahead == 'n') ADVANCE(795);
      if (lookahead == 's') ADVANCE(571);
      if (lookahead == 't') ADVANCE(771);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(564);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(805);
      END_STATE();
    case 432:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(821);
      END_STATE();
    case 433:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(817);
      END_STATE();
    case 434:
      if (eof) ADVANCE(443);
      if (lookahead == '!') ADVANCE(24);
      if (lookahead == '"') ADVANCE(547);
      if (lookahead == '#') ADVANCE(825);
      if (lookahead == '\'') ADVANCE(551);
      if (lookahead == '*') ADVANCE(808);
      if (lookahead == '+') ADVANCE(545);
      if (lookahead == '-') ADVANCE(543);
      if (lookahead == '.') ADVANCE(567);
      if (lookahead == '/') ADVANCE(809);
      if (lookahead == '<') ADVANCE(814);
      if (lookahead == '=') ADVANCE(25);
      if (lookahead == '>') ADVANCE(812);
      if (lookahead == '?') ADVANCE(27);
      if (lookahead == 'A') ADVANCE(612);
      if (lookahead == 'D') ADVANCE(604);
      if (lookahead == 'F') ADVANCE(573);
      if (lookahead == 'G') ADVANCE(657);
      if (lookahead == 'I') ADVANCE(639);
      if (lookahead == 'J') ADVANCE(646);
      if (lookahead == 'L') ADVANCE(606);
      if (lookahead == 'N') ADVANCE(679);
      if (lookahead == 'O') ADVANCE(650);
      if (lookahead == 'R') ADVANCE(602);
      if (lookahead == 'S') ADVANCE(605);
      if (lookahead == 'T') ADVANCE(578);
      if (lookahead == '_') ADVANCE(566);
      if (lookahead == '`') ADVANCE(568);
      if (lookahead == 'a') ADVANCE(731);
      if (lookahead == 'd') ADVANCE(722);
      if (lookahead == 'f') ADVANCE(691);
      if (lookahead == 'g') ADVANCE(775);
      if (lookahead == 'i') ADVANCE(757);
      if (lookahead == 'j') ADVANCE(764);
      if (lookahead == 'l') ADVANCE(724);
      if (lookahead == 'n') ADVANCE(795);
      if (lookahead == 'o') ADVANCE(769);
      if (lookahead == 'r') ADVANCE(720);
      if (lookahead == 's') ADVANCE(723);
      if (lookahead == 't') ADVANCE(696);
      if (lookahead == '|') ADVANCE(810);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(439)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(564);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(805);
      END_STATE();
    case 435:
      if (eof) ADVANCE(443);
      if (lookahead == '!') ADVANCE(24);
      if (lookahead == '"') ADVANCE(15);
      if (lookahead == '#') ADVANCE(825);
      if (lookahead == '(') ADVANCE(537);
      if (lookahead == ')') ADVANCE(538);
      if (lookahead == '*') ADVANCE(808);
      if (lookahead == '+') ADVANCE(545);
      if (lookahead == ',') ADVANCE(541);
      if (lookahead == '-') ADVANCE(544);
      if (lookahead == '.') ADVANCE(567);
      if (lookahead == '/') ADVANCE(809);
      if (lookahead == ':') ADVANCE(519);
      if (lookahead == '<') ADVANCE(814);
      if (lookahead == '=') ADVANCE(536);
      if (lookahead == '>') ADVANCE(812);
      if (lookahead == '?') ADVANCE(27);
      if (lookahead == '@') ADVANCE(820);
      if (lookahead == 'A') ADVANCE(77);
      if (lookahead == 'D') ADVANCE(63);
      if (lookahead == 'E') ADVANCE(189);
      if (lookahead == 'F') ADVANCE(89);
      if (lookahead == 'G') ADVANCE(148);
      if (lookahead == 'I') ADVANCE(121);
      if (lookahead == 'J') ADVANCE(137);
      if (lookahead == 'L') ADVANCE(49);
      if (lookahead == 'O') ADVANCE(144);
      if (lookahead == 'P') ADVANCE(145);
      if (lookahead == 'R') ADVANCE(50);
      if (lookahead == 'S') ADVANCE(66);
      if (lookahead == 'T') ADVANCE(823);
      if (lookahead == 'W') ADVANCE(91);
      if (lookahead == 'Z') ADVANCE(824);
      if (lookahead == '[') ADVANCE(540);
      if (lookahead == ']') ADVANCE(542);
      if (lookahead == '_') ADVANCE(565);
      if (lookahead == 'a') ADVANCE(256);
      if (lookahead == 'd') ADVANCE(238);
      if (lookahead == 'e') ADVANCE(412);
      if (lookahead == 'f') ADVANCE(272);
      if (lookahead == 'g') ADVANCE(355);
      if (lookahead == 'i') ADVANCE(318);
      if (lookahead == 'j') ADVANCE(340);
      if (lookahead == 'l') ADVANCE(220);
      if (lookahead == 'o') ADVANCE(350);
      if (lookahead == 'p') ADVANCE(351);
      if (lookahead == 'r') ADVANCE(221);
      if (lookahead == 's') ADVANCE(240);
      if (lookahead == 't') ADVANCE(199);
      if (lookahead == 'w') ADVANCE(274);
      if (lookahead == '|') ADVANCE(810);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(440)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(564);
      END_STATE();
    case 436:
      if (eof) ADVANCE(443);
      if (lookahead == '!') ADVANCE(24);
      if (lookahead == '#') ADVANCE(825);
      if (lookahead == '(') ADVANCE(537);
      if (lookahead == ')') ADVANCE(538);
      if (lookahead == '*') ADVANCE(808);
      if (lookahead == '+') ADVANCE(545);
      if (lookahead == ',') ADVANCE(541);
      if (lookahead == '-') ADVANCE(544);
      if (lookahead == '.') ADVANCE(23);
      if (lookahead == '/') ADVANCE(809);
      if (lookahead == '<') ADVANCE(814);
      if (lookahead == '=') ADVANCE(536);
      if (lookahead == '>') ADVANCE(812);
      if (lookahead == '?') ADVANCE(27);
      if (lookahead == 'A') ADVANCE(77);
      if (lookahead == 'D') ADVANCE(63);
      if (lookahead == 'E') ADVANCE(189);
      if (lookahead == 'F') ADVANCE(90);
      if (lookahead == 'G') ADVANCE(148);
      if (lookahead == 'I') ADVANCE(130);
      if (lookahead == 'J') ADVANCE(137);
      if (lookahead == 'L') ADVANCE(73);
      if (lookahead == 'O') ADVANCE(144);
      if (lookahead == 'R') ADVANCE(51);
      if (lookahead == 'S') ADVANCE(66);
      if (lookahead == 'T') ADVANCE(823);
      if (lookahead == 'W') ADVANCE(91);
      if (lookahead == ']') ADVANCE(542);
      if (lookahead == '_') ADVANCE(565);
      if (lookahead == 'a') ADVANCE(256);
      if (lookahead == 'd') ADVANCE(238);
      if (lookahead == 'e') ADVANCE(412);
      if (lookahead == 'f') ADVANCE(273);
      if (lookahead == 'g') ADVANCE(355);
      if (lookahead == 'i') ADVANCE(330);
      if (lookahead == 'j') ADVANCE(340);
      if (lookahead == 'l') ADVANCE(251);
      if (lookahead == 'o') ADVANCE(350);
      if (lookahead == 'r') ADVANCE(222);
      if (lookahead == 's') ADVANCE(240);
      if (lookahead == 't') ADVANCE(199);
      if (lookahead == 'w') ADVANCE(274);
      if (lookahead == '|') ADVANCE(810);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(441)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(564);
      END_STATE();
    case 437:
      if (eof) ADVANCE(443);
      if (lookahead == '"') ADVANCE(547);
      if (lookahead == '#') ADVANCE(825);
      if (lookahead == '\'') ADVANCE(551);
      if (lookahead == '-') ADVANCE(543);
      if (lookahead == '.') ADVANCE(567);
      if (lookahead == ':') ADVANCE(519);
      if (lookahead == 'A') ADVANCE(613);
      if (lookahead == 'D') ADVANCE(604);
      if (lookahead == 'F') ADVANCE(573);
      if (lookahead == 'G') ADVANCE(657);
      if (lookahead == 'I') ADVANCE(639);
      if (lookahead == 'J') ADVANCE(646);
      if (lookahead == 'L') ADVANCE(606);
      if (lookahead == 'N') ADVANCE(679);
      if (lookahead == 'R') ADVANCE(602);
      if (lookahead == 'S') ADVANCE(605);
      if (lookahead == 'T') ADVANCE(578);
      if (lookahead == '_') ADVANCE(566);
      if (lookahead == '`') ADVANCE(568);
      if (lookahead == 'a') ADVANCE(732);
      if (lookahead == 'd') ADVANCE(722);
      if (lookahead == 'f') ADVANCE(691);
      if (lookahead == 'g') ADVANCE(775);
      if (lookahead == 'i') ADVANCE(757);
      if (lookahead == 'j') ADVANCE(764);
      if (lookahead == 'l') ADVANCE(724);
      if (lookahead == 'n') ADVANCE(795);
      if (lookahead == 'r') ADVANCE(720);
      if (lookahead == 's') ADVANCE(723);
      if (lookahead == 't') ADVANCE(696);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(442)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(564);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(805);
      END_STATE();
    case 438:
      if (eof) ADVANCE(443);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(438)
      if (lookahead == '!') ADVANCE(832);
      if (lookahead == '"') ADVANCE(547);
      if (lookahead == '#') ADVANCE(825);
      if (lookahead == '\'') ADVANCE(551);
      if (lookahead == '(') ADVANCE(537);
      if (lookahead == ')') ADVANCE(538);
      if (lookahead == '*') ADVANCE(808);
      if (lookahead == '+') ADVANCE(545);
      if (lookahead == ',') ADVANCE(541);
      if (lookahead == '-') ADVANCE(544);
      if (lookahead == '.') ADVANCE(567);
      if (lookahead == '/') ADVANCE(809);
      if (lookahead == ':') ADVANCE(519);
      if (lookahead == '<') ADVANCE(814);
      if (lookahead == '=') ADVANCE(536);
      if (lookahead == '>') ADVANCE(812);
      if (lookahead == '?') ADVANCE(27);
      if (lookahead == '@') ADVANCE(820);
      if (lookahead == 'A') ADVANCE(78);
      if (lookahead == 'C') ADVANCE(132);
      if (lookahead == 'D') ADVANCE(63);
      if (lookahead == 'E') ADVANCE(189);
      if (lookahead == 'F') ADVANCE(29);
      if (lookahead == 'G') ADVANCE(148);
      if (lookahead == 'I') ADVANCE(115);
      if (lookahead == 'J') ADVANCE(138);
      if (lookahead == 'L') ADVANCE(49);
      if (lookahead == 'M') ADVANCE(30);
      if (lookahead == 'N') ADVANCE(180);
      if (lookahead == 'O') ADVANCE(144);
      if (lookahead == 'P') ADVANCE(145);
      if (lookahead == 'R') ADVANCE(50);
      if (lookahead == 'S') ADVANCE(65);
      if (lookahead == 'T') ADVANCE(822);
      if (lookahead == 'V') ADVANCE(67);
      if (lookahead == 'W') ADVANCE(91);
      if (lookahead == 'Z') ADVANCE(824);
      if (lookahead == '[') ADVANCE(540);
      if (lookahead == ']') ADVANCE(542);
      if (lookahead == '_') ADVANCE(565);
      if (lookahead == '`') ADVANCE(568);
      if (lookahead == 'a') ADVANCE(257);
      if (lookahead == 'c') ADVANCE(332);
      if (lookahead == 'd') ADVANCE(238);
      if (lookahead == 'e') ADVANCE(412);
      if (lookahead == 'f') ADVANCE(10);
      if (lookahead == 'g') ADVANCE(355);
      if (lookahead == 'i') ADVANCE(312);
      if (lookahead == 'j') ADVANCE(341);
      if (lookahead == 'l') ADVANCE(220);
      if (lookahead == 'm') ADVANCE(193);
      if (lookahead == 'n') ADVANCE(398);
      if (lookahead == 'o') ADVANCE(350);
      if (lookahead == 'p') ADVANCE(351);
      if (lookahead == 'r') ADVANCE(221);
      if (lookahead == 's') ADVANCE(11);
      if (lookahead == 't') ADVANCE(192);
      if (lookahead == 'v') ADVANCE(242);
      if (lookahead == 'w') ADVANCE(274);
      if (lookahead == '|') ADVANCE(810);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(564);
      END_STATE();
    case 439:
      if (eof) ADVANCE(443);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(439)
      if (lookahead == '!') ADVANCE(24);
      if (lookahead == '"') ADVANCE(547);
      if (lookahead == '#') ADVANCE(825);
      if (lookahead == '\'') ADVANCE(551);
      if (lookahead == '*') ADVANCE(808);
      if (lookahead == '+') ADVANCE(545);
      if (lookahead == '-') ADVANCE(543);
      if (lookahead == '.') ADVANCE(567);
      if (lookahead == '/') ADVANCE(809);
      if (lookahead == '<') ADVANCE(814);
      if (lookahead == '=') ADVANCE(25);
      if (lookahead == '>') ADVANCE(812);
      if (lookahead == '?') ADVANCE(27);
      if (lookahead == 'A') ADVANCE(612);
      if (lookahead == 'D') ADVANCE(604);
      if (lookahead == 'F') ADVANCE(573);
      if (lookahead == 'G') ADVANCE(657);
      if (lookahead == 'I') ADVANCE(639);
      if (lookahead == 'J') ADVANCE(646);
      if (lookahead == 'L') ADVANCE(606);
      if (lookahead == 'N') ADVANCE(679);
      if (lookahead == 'O') ADVANCE(650);
      if (lookahead == 'R') ADVANCE(602);
      if (lookahead == 'S') ADVANCE(605);
      if (lookahead == 'T') ADVANCE(578);
      if (lookahead == '_') ADVANCE(566);
      if (lookahead == '`') ADVANCE(568);
      if (lookahead == 'a') ADVANCE(731);
      if (lookahead == 'd') ADVANCE(722);
      if (lookahead == 'f') ADVANCE(691);
      if (lookahead == 'g') ADVANCE(775);
      if (lookahead == 'i') ADVANCE(757);
      if (lookahead == 'j') ADVANCE(764);
      if (lookahead == 'l') ADVANCE(724);
      if (lookahead == 'n') ADVANCE(795);
      if (lookahead == 'o') ADVANCE(769);
      if (lookahead == 'r') ADVANCE(720);
      if (lookahead == 's') ADVANCE(723);
      if (lookahead == 't') ADVANCE(696);
      if (lookahead == '|') ADVANCE(810);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(564);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(805);
      END_STATE();
    case 440:
      if (eof) ADVANCE(443);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(440)
      if (lookahead == '!') ADVANCE(24);
      if (lookahead == '"') ADVANCE(15);
      if (lookahead == '#') ADVANCE(825);
      if (lookahead == '(') ADVANCE(537);
      if (lookahead == ')') ADVANCE(538);
      if (lookahead == '*') ADVANCE(808);
      if (lookahead == '+') ADVANCE(545);
      if (lookahead == ',') ADVANCE(541);
      if (lookahead == '-') ADVANCE(544);
      if (lookahead == '.') ADVANCE(567);
      if (lookahead == '/') ADVANCE(809);
      if (lookahead == ':') ADVANCE(519);
      if (lookahead == '<') ADVANCE(814);
      if (lookahead == '=') ADVANCE(536);
      if (lookahead == '>') ADVANCE(812);
      if (lookahead == '?') ADVANCE(27);
      if (lookahead == '@') ADVANCE(820);
      if (lookahead == 'A') ADVANCE(77);
      if (lookahead == 'D') ADVANCE(63);
      if (lookahead == 'E') ADVANCE(189);
      if (lookahead == 'F') ADVANCE(89);
      if (lookahead == 'G') ADVANCE(148);
      if (lookahead == 'I') ADVANCE(121);
      if (lookahead == 'J') ADVANCE(137);
      if (lookahead == 'L') ADVANCE(49);
      if (lookahead == 'O') ADVANCE(144);
      if (lookahead == 'P') ADVANCE(145);
      if (lookahead == 'R') ADVANCE(50);
      if (lookahead == 'S') ADVANCE(66);
      if (lookahead == 'T') ADVANCE(823);
      if (lookahead == 'W') ADVANCE(91);
      if (lookahead == 'Z') ADVANCE(824);
      if (lookahead == '[') ADVANCE(540);
      if (lookahead == ']') ADVANCE(542);
      if (lookahead == '_') ADVANCE(565);
      if (lookahead == 'a') ADVANCE(256);
      if (lookahead == 'd') ADVANCE(238);
      if (lookahead == 'e') ADVANCE(412);
      if (lookahead == 'f') ADVANCE(272);
      if (lookahead == 'g') ADVANCE(355);
      if (lookahead == 'i') ADVANCE(318);
      if (lookahead == 'j') ADVANCE(340);
      if (lookahead == 'l') ADVANCE(220);
      if (lookahead == 'o') ADVANCE(350);
      if (lookahead == 'p') ADVANCE(351);
      if (lookahead == 'r') ADVANCE(221);
      if (lookahead == 's') ADVANCE(240);
      if (lookahead == 't') ADVANCE(199);
      if (lookahead == 'w') ADVANCE(274);
      if (lookahead == '|') ADVANCE(810);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(564);
      END_STATE();
    case 441:
      if (eof) ADVANCE(443);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(441)
      if (lookahead == '!') ADVANCE(24);
      if (lookahead == '#') ADVANCE(825);
      if (lookahead == '(') ADVANCE(537);
      if (lookahead == ')') ADVANCE(538);
      if (lookahead == '*') ADVANCE(808);
      if (lookahead == '+') ADVANCE(545);
      if (lookahead == ',') ADVANCE(541);
      if (lookahead == '-') ADVANCE(544);
      if (lookahead == '.') ADVANCE(23);
      if (lookahead == '/') ADVANCE(809);
      if (lookahead == '<') ADVANCE(814);
      if (lookahead == '=') ADVANCE(536);
      if (lookahead == '>') ADVANCE(812);
      if (lookahead == '?') ADVANCE(27);
      if (lookahead == 'A') ADVANCE(77);
      if (lookahead == 'D') ADVANCE(63);
      if (lookahead == 'E') ADVANCE(189);
      if (lookahead == 'F') ADVANCE(90);
      if (lookahead == 'G') ADVANCE(148);
      if (lookahead == 'I') ADVANCE(130);
      if (lookahead == 'J') ADVANCE(137);
      if (lookahead == 'L') ADVANCE(73);
      if (lookahead == 'O') ADVANCE(144);
      if (lookahead == 'R') ADVANCE(51);
      if (lookahead == 'S') ADVANCE(66);
      if (lookahead == 'T') ADVANCE(823);
      if (lookahead == 'W') ADVANCE(91);
      if (lookahead == ']') ADVANCE(542);
      if (lookahead == '_') ADVANCE(565);
      if (lookahead == 'a') ADVANCE(256);
      if (lookahead == 'd') ADVANCE(238);
      if (lookahead == 'e') ADVANCE(412);
      if (lookahead == 'f') ADVANCE(273);
      if (lookahead == 'g') ADVANCE(355);
      if (lookahead == 'i') ADVANCE(330);
      if (lookahead == 'j') ADVANCE(340);
      if (lookahead == 'l') ADVANCE(251);
      if (lookahead == 'o') ADVANCE(350);
      if (lookahead == 'r') ADVANCE(222);
      if (lookahead == 's') ADVANCE(240);
      if (lookahead == 't') ADVANCE(199);
      if (lookahead == 'w') ADVANCE(274);
      if (lookahead == '|') ADVANCE(810);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(564);
      END_STATE();
    case 442:
      if (eof) ADVANCE(443);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(442)
      if (lookahead == '"') ADVANCE(547);
      if (lookahead == '#') ADVANCE(825);
      if (lookahead == '\'') ADVANCE(551);
      if (lookahead == '-') ADVANCE(543);
      if (lookahead == '.') ADVANCE(567);
      if (lookahead == ':') ADVANCE(519);
      if (lookahead == 'A') ADVANCE(613);
      if (lookahead == 'D') ADVANCE(604);
      if (lookahead == 'F') ADVANCE(573);
      if (lookahead == 'G') ADVANCE(657);
      if (lookahead == 'I') ADVANCE(639);
      if (lookahead == 'J') ADVANCE(646);
      if (lookahead == 'L') ADVANCE(606);
      if (lookahead == 'N') ADVANCE(679);
      if (lookahead == 'R') ADVANCE(602);
      if (lookahead == 'S') ADVANCE(605);
      if (lookahead == 'T') ADVANCE(578);
      if (lookahead == '_') ADVANCE(566);
      if (lookahead == '`') ADVANCE(568);
      if (lookahead == 'a') ADVANCE(732);
      if (lookahead == 'd') ADVANCE(722);
      if (lookahead == 'f') ADVANCE(691);
      if (lookahead == 'g') ADVANCE(775);
      if (lookahead == 'i') ADVANCE(757);
      if (lookahead == 'j') ADVANCE(764);
      if (lookahead == 'l') ADVANCE(724);
      if (lookahead == 'n') ADVANCE(795);
      if (lookahead == 'r') ADVANCE(720);
      if (lookahead == 's') ADVANCE(723);
      if (lookahead == 't') ADVANCE(696);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(564);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(805);
      END_STATE();
    case 443:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 444:
      ACCEPT_TOKEN(sym_keyword_from);
      if (lookahead == '_') ADVANCE(174);
      END_STATE();
    case 445:
      ACCEPT_TOKEN(sym_keyword_from);
      if (lookahead == '_') ADVANCE(390);
      END_STATE();
    case 446:
      ACCEPT_TOKEN(sym_keyword_from);
      if (lookahead == '_') ADVANCE(676);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(805);
      END_STATE();
    case 447:
      ACCEPT_TOKEN(sym_keyword_from);
      if (lookahead == '_') ADVANCE(792);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(805);
      END_STATE();
    case 448:
      ACCEPT_TOKEN(sym_keyword_filter);
      END_STATE();
    case 449:
      ACCEPT_TOKEN(sym_keyword_filter);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(805);
      END_STATE();
    case 450:
      ACCEPT_TOKEN(sym_keyword_derive);
      END_STATE();
    case 451:
      ACCEPT_TOKEN(sym_keyword_derive);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(805);
      END_STATE();
    case 452:
      ACCEPT_TOKEN(sym_keyword_group);
      END_STATE();
    case 453:
      ACCEPT_TOKEN(sym_keyword_group);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(805);
      END_STATE();
    case 454:
      ACCEPT_TOKEN(sym_keyword_aggregate);
      END_STATE();
    case 455:
      ACCEPT_TOKEN(sym_keyword_aggregate);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(805);
      END_STATE();
    case 456:
      ACCEPT_TOKEN(sym_keyword_sort);
      END_STATE();
    case 457:
      ACCEPT_TOKEN(sym_keyword_sort);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(805);
      END_STATE();
    case 458:
      ACCEPT_TOKEN(sym_keyword_take);
      END_STATE();
    case 459:
      ACCEPT_TOKEN(sym_keyword_take);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(805);
      END_STATE();
    case 460:
      ACCEPT_TOKEN(sym_keyword_window);
      END_STATE();
    case 461:
      ACCEPT_TOKEN(sym_keyword_join);
      END_STATE();
    case 462:
      ACCEPT_TOKEN(sym_keyword_join);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(805);
      END_STATE();
    case 463:
      ACCEPT_TOKEN(sym_keyword_select);
      END_STATE();
    case 464:
      ACCEPT_TOKEN(sym_keyword_select);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(805);
      END_STATE();
    case 465:
      ACCEPT_TOKEN(sym_keyword_true);
      END_STATE();
    case 466:
      ACCEPT_TOKEN(sym_keyword_true);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(805);
      END_STATE();
    case 467:
      ACCEPT_TOKEN(sym_keyword_false);
      END_STATE();
    case 468:
      ACCEPT_TOKEN(sym_keyword_false);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(805);
      END_STATE();
    case 469:
      ACCEPT_TOKEN(sym_keyword_switch);
      END_STATE();
    case 470:
      ACCEPT_TOKEN(sym_keyword_switch);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(805);
      END_STATE();
    case 471:
      ACCEPT_TOKEN(sym_keyword_append);
      END_STATE();
    case 472:
      ACCEPT_TOKEN(sym_keyword_append);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(805);
      END_STATE();
    case 473:
      ACCEPT_TOKEN(sym_keyword_remove);
      END_STATE();
    case 474:
      ACCEPT_TOKEN(sym_keyword_remove);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(805);
      END_STATE();
    case 475:
      ACCEPT_TOKEN(sym_keyword_intersect);
      END_STATE();
    case 476:
      ACCEPT_TOKEN(sym_keyword_intersect);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(805);
      END_STATE();
    case 477:
      ACCEPT_TOKEN(sym_keyword_average);
      END_STATE();
    case 478:
      ACCEPT_TOKEN(sym_keyword_average);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(805);
      END_STATE();
    case 479:
      ACCEPT_TOKEN(sym_keyword_min);
      END_STATE();
    case 480:
      ACCEPT_TOKEN(sym_keyword_min);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(805);
      END_STATE();
    case 481:
      ACCEPT_TOKEN(sym_keyword_max);
      END_STATE();
    case 482:
      ACCEPT_TOKEN(sym_keyword_max);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(805);
      END_STATE();
    case 483:
      ACCEPT_TOKEN(sym_keyword_count);
      if (lookahead == '_') ADVANCE(585);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(805);
      END_STATE();
    case 484:
      ACCEPT_TOKEN(sym_keyword_count);
      if (lookahead == '_') ADVANCE(703);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(805);
      END_STATE();
    case 485:
      ACCEPT_TOKEN(sym_keyword_count);
      if (lookahead == '_') ADVANCE(44);
      END_STATE();
    case 486:
      ACCEPT_TOKEN(sym_keyword_count);
      if (lookahead == '_') ADVANCE(216);
      END_STATE();
    case 487:
      ACCEPT_TOKEN(sym_keyword_stddev);
      END_STATE();
    case 488:
      ACCEPT_TOKEN(sym_keyword_stddev);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(805);
      END_STATE();
    case 489:
      ACCEPT_TOKEN(sym_keyword_avg);
      END_STATE();
    case 490:
      ACCEPT_TOKEN(sym_keyword_avg);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(805);
      END_STATE();
    case 491:
      ACCEPT_TOKEN(sym_keyword_sum);
      END_STATE();
    case 492:
      ACCEPT_TOKEN(sym_keyword_sum);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(805);
      END_STATE();
    case 493:
      ACCEPT_TOKEN(sym_keyword_count_distinct);
      END_STATE();
    case 494:
      ACCEPT_TOKEN(sym_keyword_count_distinct);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(805);
      END_STATE();
    case 495:
      ACCEPT_TOKEN(sym_keyword_side);
      END_STATE();
    case 496:
      ACCEPT_TOKEN(sym_keyword_side);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(805);
      END_STATE();
    case 497:
      ACCEPT_TOKEN(sym_keyword_inner);
      END_STATE();
    case 498:
      ACCEPT_TOKEN(sym_keyword_left);
      END_STATE();
    case 499:
      ACCEPT_TOKEN(sym_keyword_right);
      END_STATE();
    case 500:
      ACCEPT_TOKEN(sym_keyword_full);
      END_STATE();
    case 501:
      ACCEPT_TOKEN(sym_keyword_and);
      END_STATE();
    case 502:
      ACCEPT_TOKEN(sym_keyword_and);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(805);
      END_STATE();
    case 503:
      ACCEPT_TOKEN(sym_keyword_or);
      END_STATE();
    case 504:
      ACCEPT_TOKEN(sym_keyword_or);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(805);
      END_STATE();
    case 505:
      ACCEPT_TOKEN(sym_keyword_in);
      if (lookahead == 'N') ADVANCE(69);
      if (lookahead == 'T') ADVANCE(71);
      END_STATE();
    case 506:
      ACCEPT_TOKEN(sym_keyword_in);
      if (lookahead == 'n') ADVANCE(245);
      if (lookahead == 't') ADVANCE(247);
      END_STATE();
    case 507:
      ACCEPT_TOKEN(sym_keyword_rolling);
      END_STATE();
    case 508:
      ACCEPT_TOKEN(sym_keyword_rows);
      END_STATE();
    case 509:
      ACCEPT_TOKEN(sym_keyword_expanding);
      END_STATE();
    case 510:
      ACCEPT_TOKEN(sym_keyword_null);
      END_STATE();
    case 511:
      ACCEPT_TOKEN(sym_keyword_null);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(805);
      END_STATE();
    case 512:
      ACCEPT_TOKEN(sym_keyword_func);
      END_STATE();
    case 513:
      ACCEPT_TOKEN(sym_keyword_func);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(805);
      END_STATE();
    case 514:
      ACCEPT_TOKEN(sym_keyword_let);
      END_STATE();
    case 515:
      ACCEPT_TOKEN(sym_keyword_let);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(805);
      END_STATE();
    case 516:
      ACCEPT_TOKEN(sym_keyword_prql);
      END_STATE();
    case 517:
      ACCEPT_TOKEN(sym_keyword_version);
      END_STATE();
    case 518:
      ACCEPT_TOKEN(sym_keyword_target);
      END_STATE();
    case 519:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 520:
      ACCEPT_TOKEN(anon_sym_sql_DOTansi);
      END_STATE();
    case 521:
      ACCEPT_TOKEN(anon_sym_sql_DOTbigquery);
      END_STATE();
    case 522:
      ACCEPT_TOKEN(anon_sym_sql_DOTclickhouse);
      END_STATE();
    case 523:
      ACCEPT_TOKEN(anon_sym_sql_DOTgeneric);
      END_STATE();
    case 524:
      ACCEPT_TOKEN(anon_sym_sql_DOThive);
      END_STATE();
    case 525:
      ACCEPT_TOKEN(anon_sym_sql_DOTmssql);
      END_STATE();
    case 526:
      ACCEPT_TOKEN(anon_sym_sql_DOTmysql);
      END_STATE();
    case 527:
      ACCEPT_TOKEN(anon_sym_sql_DOTpostgres);
      END_STATE();
    case 528:
      ACCEPT_TOKEN(anon_sym_sql_DOTsqlite);
      END_STATE();
    case 529:
      ACCEPT_TOKEN(anon_sym_sql_DOTsnowflake);
      END_STATE();
    case 530:
      ACCEPT_TOKEN(anon_sym_sql_DOTduckdb);
      END_STATE();
    case 531:
      ACCEPT_TOKEN(sym_keyword_from_text);
      END_STATE();
    case 532:
      ACCEPT_TOKEN(sym_keyword_from_text);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(805);
      END_STATE();
    case 533:
      ACCEPT_TOKEN(sym_keyword_format);
      END_STATE();
    case 534:
      ACCEPT_TOKEN(sym_keyword_csv);
      END_STATE();
    case 535:
      ACCEPT_TOKEN(sym_keyword_json);
      END_STATE();
    case 536:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead == '=') ADVANCE(546);
      END_STATE();
    case 537:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 538:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 539:
      ACCEPT_TOKEN(anon_sym_DASH_GT);
      END_STATE();
    case 540:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 541:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 542:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 543:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 544:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '>') ADVANCE(539);
      END_STATE();
    case 545:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 546:
      ACCEPT_TOKEN(anon_sym_EQ_EQ);
      END_STATE();
    case 547:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 548:
      ACCEPT_TOKEN(aux_sym__double_quote_string_token1);
      if (lookahead == '#') ADVANCE(827);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(549);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(550);
      END_STATE();
    case 549:
      ACCEPT_TOKEN(aux_sym__double_quote_string_token1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(549);
      if (lookahead == '#') ADVANCE(827);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(550);
      END_STATE();
    case 550:
      ACCEPT_TOKEN(aux_sym__double_quote_string_token1);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(550);
      END_STATE();
    case 551:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 552:
      ACCEPT_TOKEN(aux_sym__single_quote_string_token1);
      if (lookahead == '#') ADVANCE(828);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(553);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(554);
      END_STATE();
    case 553:
      ACCEPT_TOKEN(aux_sym__single_quote_string_token1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(553);
      if (lookahead == '#') ADVANCE(828);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(554);
      END_STATE();
    case 554:
      ACCEPT_TOKEN(aux_sym__single_quote_string_token1);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(554);
      END_STATE();
    case 555:
      ACCEPT_TOKEN(aux_sym__inner_triple_quotes_token1);
      END_STATE();
    case 556:
      ACCEPT_TOKEN(aux_sym__inner_triple_quotes_token1);
      if (lookahead == '"') ADVANCE(14);
      END_STATE();
    case 557:
      ACCEPT_TOKEN(aux_sym__inner_triple_quotes_token1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(557);
      if (lookahead == '"') ADVANCE(556);
      if (lookahead == '#') ADVANCE(825);
      if (lookahead != 0) ADVANCE(555);
      END_STATE();
    case 558:
      ACCEPT_TOKEN(aux_sym__inner_triple_quotes_token1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(558);
      if (lookahead == '#') ADVANCE(825);
      if (lookahead != 0) ADVANCE(555);
      END_STATE();
    case 559:
      ACCEPT_TOKEN(anon_sym_DQUOTE_DQUOTE_DQUOTE);
      END_STATE();
    case 560:
      ACCEPT_TOKEN(anon_sym_f_DQUOTE);
      if (lookahead == '"') ADVANCE(12);
      END_STATE();
    case 561:
      ACCEPT_TOKEN(anon_sym_f_DQUOTE_DQUOTE_DQUOTE);
      END_STATE();
    case 562:
      ACCEPT_TOKEN(anon_sym_s_DQUOTE);
      if (lookahead == '"') ADVANCE(13);
      END_STATE();
    case 563:
      ACCEPT_TOKEN(anon_sym_s_DQUOTE_DQUOTE_DQUOTE);
      END_STATE();
    case 564:
      ACCEPT_TOKEN(sym__natural_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(564);
      END_STATE();
    case 565:
      ACCEPT_TOKEN(anon_sym__);
      END_STATE();
    case 566:
      ACCEPT_TOKEN(anon_sym__);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(805);
      END_STATE();
    case 567:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 568:
      ACCEPT_TOKEN(anon_sym_BQUOTE);
      END_STATE();
    case 569:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '"') ADVANCE(560);
      if (lookahead == 'a') ADVANCE(743);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(805);
      END_STATE();
    case 570:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '"') ADVANCE(562);
      if (lookahead == 't') ADVANCE(706);
      if (lookahead == 'u') ADVANCE(748);
      if (lookahead == 'w') ADVANCE(740);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(805);
      END_STATE();
    case 571:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '"') ADVANCE(562);
      if (lookahead == 't') ADVANCE(706);
      if (lookahead == 'u') ADVANCE(748);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(805);
      END_STATE();
    case 572:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '"') ADVANCE(562);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(805);
      END_STATE();
    case 573:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'A') ADVANCE(625);
      if (lookahead == 'I') ADVANCE(629);
      if (lookahead == 'R') ADVANCE(643);
      if (lookahead == 'U') ADVANCE(637);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(805);
      END_STATE();
    case 574:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'A') ADVANCE(625);
      if (lookahead == 'I') ADVANCE(629);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(805);
      END_STATE();
    case 575:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'A') ADVANCE(625);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(805);
      END_STATE();
    case 576:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'A') ADVANCE(687);
      if (lookahead == 'I') ADVANCE(633);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(805);
      END_STATE();
    case 577:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'A') ADVANCE(615);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(805);
      END_STATE();
    case 578:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'A') ADVANCE(624);
      if (lookahead == 'R') ADVANCE(678);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(805);
      END_STATE();
    case 579:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'A') ADVANCE(677);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(805);
      END_STATE();
    case 580:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'C') ADVANCE(513);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(805);
      END_STATE();
    case 581:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'C') ADVANCE(617);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(805);
      END_STATE();
    case 582:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'C') ADVANCE(665);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(805);
      END_STATE();
    case 583:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'C') ADVANCE(668);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(805);
      END_STATE();
    case 584:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'C') ADVANCE(670);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(805);
      END_STATE();
    case 585:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'D') ADVANCE(618);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(805);
      END_STATE();
    case 586:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'D') ADVANCE(502);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(805);
      END_STATE();
    case 587:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'D') ADVANCE(472);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(805);
      END_STATE();
    case 588:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'D') ADVANCE(589);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(805);
      END_STATE();
    case 589:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'D') ADVANCE(599);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(805);
      END_STATE();
    case 590:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'D') ADVANCE(598);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(805);
      END_STATE();
    case 591:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'E') ADVANCE(466);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(805);
      END_STATE();
    case 592:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'E') ADVANCE(468);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(805);
      END_STATE();
    case 593:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'E') ADVANCE(478);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(805);
      END_STATE();
    case 594:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'E') ADVANCE(459);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(805);
      END_STATE();
    case 595:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'E') ADVANCE(451);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(805);
      END_STATE();
    case 596:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'E') ADVANCE(474);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(805);
      END_STATE();
    case 597:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'E') ADVANCE(455);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(805);
      END_STATE();
    case 598:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'E') ADVANCE(496);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(805);
      END_STATE();
    case 599:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'E') ADVANCE(684);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(805);
      END_STATE();
    case 600:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'E') ADVANCE(652);
      if (lookahead == 'G') ADVANCE(490);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(805);
      END_STATE();
    case 601:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'E') ADVANCE(688);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(805);
      END_STATE();
    case 602:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'E') ADVANCE(632);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(805);
      END_STATE();
    case 603:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'E') ADVANCE(614);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(805);
      END_STATE();
    case 604:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'E') ADVANCE(654);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(805);
      END_STATE();
    case 605:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'E') ADVANCE(628);
      if (lookahead == 'O') ADVANCE(655);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(805);
      END_STATE();
    case 606:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'E') ADVANCE(666);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(805);
      END_STATE();
    case 607:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'E') ADVANCE(640);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(805);
      END_STATE();
    case 608:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'E') ADVANCE(658);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(805);
      END_STATE();
    case 609:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'E') ADVANCE(651);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(805);
      END_STATE();
    case 610:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'E') ADVANCE(583);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(805);
      END_STATE();
    case 611:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'E') ADVANCE(584);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(805);
      END_STATE();
    case 612:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'G') ADVANCE(616);
      if (lookahead == 'N') ADVANCE(586);
      if (lookahead == 'P') ADVANCE(649);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(805);
      END_STATE();
    case 613:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'G') ADVANCE(616);
      if (lookahead == 'P') ADVANCE(649);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(805);
      END_STATE();
    case 614:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'G') ADVANCE(579);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(805);
      END_STATE();
    case 615:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'G') ADVANCE(593);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(805);
      END_STATE();
    case 616:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'G') ADVANCE(656);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(805);
      END_STATE();
    case 617:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'H') ADVANCE(470);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(805);
      END_STATE();
    case 618:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'I') ADVANCE(660);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(805);
      END_STATE();
    case 619:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'I') ADVANCE(685);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(805);
      END_STATE();
    case 620:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'I') ADVANCE(635);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(805);
      END_STATE();
    case 621:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'I') ADVANCE(636);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(805);
      END_STATE();
    case 622:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'I') ADVANCE(673);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(805);
      END_STATE();
    case 623:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'I') ADVANCE(590);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(805);
      END_STATE();
    case 624:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'K') ADVANCE(594);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(805);
      END_STATE();
    case 625:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'L') ADVANCE(659);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(805);
      END_STATE();
    case 626:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'L') ADVANCE(511);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(805);
      END_STATE();
    case 627:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'L') ADVANCE(626);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(805);
      END_STATE();
    case 628:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'L') ADVANCE(610);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(805);
      END_STATE();
    case 629:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'L') ADVANCE(675);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(805);
      END_STATE();
    case 630:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'M') ADVANCE(492);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(805);
      END_STATE();
    case 631:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'M') ADVANCE(446);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(805);
      END_STATE();
    case 632:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'M') ADVANCE(647);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(805);
      END_STATE();
    case 633:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'N') ADVANCE(480);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(805);
      END_STATE();
    case 634:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'N') ADVANCE(664);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(805);
      END_STATE();
    case 635:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'N') ADVANCE(582);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(805);
      END_STATE();
    case 636:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'N') ADVANCE(462);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(805);
      END_STATE();
    case 637:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'N') ADVANCE(580);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(805);
      END_STATE();
    case 638:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'N') ADVANCE(586);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(805);
      END_STATE();
    case 639:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'N') ADVANCE(674);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(805);
      END_STATE();
    case 640:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'N') ADVANCE(587);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(805);
      END_STATE();
    case 641:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'N') ADVANCE(671);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(805);
      END_STATE();
    case 642:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'O') ADVANCE(680);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(805);
      END_STATE();
    case 643:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'O') ADVANCE(631);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(805);
      END_STATE();
    case 644:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'O') ADVANCE(681);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(805);
      END_STATE();
    case 645:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'O') ADVANCE(682);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(805);
      END_STATE();
    case 646:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'O') ADVANCE(621);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(805);
      END_STATE();
    case 647:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'O') ADVANCE(686);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(805);
      END_STATE();
    case 648:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'P') ADVANCE(453);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(805);
      END_STATE();
    case 649:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'P') ADVANCE(607);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(805);
      END_STATE();
    case 650:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'R') ADVANCE(504);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(805);
      END_STATE();
    case 651:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'R') ADVANCE(449);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(805);
      END_STATE();
    case 652:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'R') ADVANCE(577);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(805);
      END_STATE();
    case 653:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'R') ADVANCE(678);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(805);
      END_STATE();
    case 654:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'R') ADVANCE(619);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(805);
      END_STATE();
    case 655:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'R') ADVANCE(667);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(805);
      END_STATE();
    case 656:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'R') ADVANCE(603);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(805);
      END_STATE();
    case 657:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'R') ADVANCE(644);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(805);
      END_STATE();
    case 658:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'R') ADVANCE(661);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(805);
      END_STATE();
    case 659:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'S') ADVANCE(592);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(805);
      END_STATE();
    case 660:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'S') ADVANCE(672);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(805);
      END_STATE();
    case 661:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'S') ADVANCE(611);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(805);
      END_STATE();
    case 662:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'T') ADVANCE(588);
      if (lookahead == 'U') ADVANCE(630);
      if (lookahead == 'W') ADVANCE(622);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(805);
      END_STATE();
    case 663:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'T') ADVANCE(588);
      if (lookahead == 'U') ADVANCE(630);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(805);
      END_STATE();
    case 664:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'T') ADVANCE(483);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(805);
      END_STATE();
    case 665:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'T') ADVANCE(494);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(805);
      END_STATE();
    case 666:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'T') ADVANCE(515);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(805);
      END_STATE();
    case 667:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'T') ADVANCE(457);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(805);
      END_STATE();
    case 668:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'T') ADVANCE(464);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(805);
      END_STATE();
    case 669:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'T') ADVANCE(532);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(805);
      END_STATE();
    case 670:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'T') ADVANCE(476);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(805);
      END_STATE();
    case 671:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'T') ADVANCE(689);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(805);
      END_STATE();
    case 672:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'T') ADVANCE(620);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(805);
      END_STATE();
    case 673:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'T') ADVANCE(581);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(805);
      END_STATE();
    case 674:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'T') ADVANCE(608);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(805);
      END_STATE();
    case 675:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'T') ADVANCE(609);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(805);
      END_STATE();
    case 676:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'T') ADVANCE(601);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(805);
      END_STATE();
    case 677:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'T') ADVANCE(597);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(805);
      END_STATE();
    case 678:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'U') ADVANCE(591);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(805);
      END_STATE();
    case 679:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'U') ADVANCE(627);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(805);
      END_STATE();
    case 680:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'U') ADVANCE(634);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(805);
      END_STATE();
    case 681:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'U') ADVANCE(648);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(805);
      END_STATE();
    case 682:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'U') ADVANCE(641);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(805);
      END_STATE();
    case 683:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'V') ADVANCE(600);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(805);
      END_STATE();
    case 684:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'V') ADVANCE(488);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(805);
      END_STATE();
    case 685:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'V') ADVANCE(595);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(805);
      END_STATE();
    case 686:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'V') ADVANCE(596);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(805);
      END_STATE();
    case 687:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'X') ADVANCE(482);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(805);
      END_STATE();
    case 688:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'X') ADVANCE(669);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(805);
      END_STATE();
    case 689:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '_') ADVANCE(585);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(805);
      END_STATE();
    case 690:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '_') ADVANCE(703);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(805);
      END_STATE();
    case 691:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'a') ADVANCE(743);
      if (lookahead == 'i') ADVANCE(747);
      if (lookahead == 'r') ADVANCE(761);
      if (lookahead == 'u') ADVANCE(755);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(805);
      END_STATE();
    case 692:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'a') ADVANCE(743);
      if (lookahead == 'i') ADVANCE(747);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(805);
      END_STATE();
    case 693:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'a') ADVANCE(743);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(805);
      END_STATE();
    case 694:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'a') ADVANCE(803);
      if (lookahead == 'i') ADVANCE(751);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(805);
      END_STATE();
    case 695:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'a') ADVANCE(733);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(805);
      END_STATE();
    case 696:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'a') ADVANCE(742);
      if (lookahead == 'r') ADVANCE(794);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(805);
      END_STATE();
    case 697:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'a') ADVANCE(793);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(805);
      END_STATE();
    case 698:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'c') ADVANCE(513);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(805);
      END_STATE();
    case 699:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'c') ADVANCE(735);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(805);
      END_STATE();
    case 700:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'c') ADVANCE(780);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(805);
      END_STATE();
    case 701:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'c') ADVANCE(783);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(805);
      END_STATE();
    case 702:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'c') ADVANCE(785);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(805);
      END_STATE();
    case 703:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'd') ADVANCE(736);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(805);
      END_STATE();
    case 704:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'd') ADVANCE(502);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(805);
      END_STATE();
    case 705:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'd') ADVANCE(472);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(805);
      END_STATE();
    case 706:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'd') ADVANCE(707);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(805);
      END_STATE();
    case 707:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'd') ADVANCE(717);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(805);
      END_STATE();
    case 708:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'd') ADVANCE(716);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(805);
      END_STATE();
    case 709:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(466);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(805);
      END_STATE();
    case 710:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(468);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(805);
      END_STATE();
    case 711:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(478);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(805);
      END_STATE();
    case 712:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(459);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(805);
      END_STATE();
    case 713:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(451);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(805);
      END_STATE();
    case 714:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(474);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(805);
      END_STATE();
    case 715:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(455);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(805);
      END_STATE();
    case 716:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(496);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(805);
      END_STATE();
    case 717:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(800);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(805);
      END_STATE();
    case 718:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(768);
      if (lookahead == 'g') ADVANCE(490);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(805);
      END_STATE();
    case 719:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(804);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(805);
      END_STATE();
    case 720:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(750);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(805);
      END_STATE();
    case 721:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(730);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(805);
      END_STATE();
    case 722:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(772);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(805);
      END_STATE();
    case 723:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(746);
      if (lookahead == 'o') ADVANCE(773);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(805);
      END_STATE();
    case 724:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(781);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(805);
      END_STATE();
    case 725:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(758);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(805);
      END_STATE();
    case 726:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(776);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(805);
      END_STATE();
    case 727:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(770);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(805);
      END_STATE();
    case 728:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(701);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(805);
      END_STATE();
    case 729:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(702);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(805);
      END_STATE();
    case 730:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'g') ADVANCE(697);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(805);
      END_STATE();
    case 731:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'g') ADVANCE(734);
      if (lookahead == 'n') ADVANCE(704);
      if (lookahead == 'p') ADVANCE(767);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(805);
      END_STATE();
    case 732:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'g') ADVANCE(734);
      if (lookahead == 'p') ADVANCE(767);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(805);
      END_STATE();
    case 733:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'g') ADVANCE(711);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(805);
      END_STATE();
    case 734:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'g') ADVANCE(774);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(805);
      END_STATE();
    case 735:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'h') ADVANCE(470);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(805);
      END_STATE();
    case 736:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'i') ADVANCE(778);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(805);
      END_STATE();
    case 737:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'i') ADVANCE(801);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(805);
      END_STATE();
    case 738:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'i') ADVANCE(753);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(805);
      END_STATE();
    case 739:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'i') ADVANCE(754);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(805);
      END_STATE();
    case 740:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'i') ADVANCE(789);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(805);
      END_STATE();
    case 741:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'i') ADVANCE(708);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(805);
      END_STATE();
    case 742:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'k') ADVANCE(712);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(805);
      END_STATE();
    case 743:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'l') ADVANCE(777);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(805);
      END_STATE();
    case 744:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'l') ADVANCE(511);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(805);
      END_STATE();
    case 745:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'l') ADVANCE(744);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(805);
      END_STATE();
    case 746:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'l') ADVANCE(728);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(805);
      END_STATE();
    case 747:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'l') ADVANCE(791);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(805);
      END_STATE();
    case 748:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'm') ADVANCE(492);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(805);
      END_STATE();
    case 749:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'm') ADVANCE(447);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(805);
      END_STATE();
    case 750:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'm') ADVANCE(765);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(805);
      END_STATE();
    case 751:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'n') ADVANCE(480);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(805);
      END_STATE();
    case 752:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'n') ADVANCE(786);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(805);
      END_STATE();
    case 753:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'n') ADVANCE(700);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(805);
      END_STATE();
    case 754:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'n') ADVANCE(462);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(805);
      END_STATE();
    case 755:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'n') ADVANCE(698);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(805);
      END_STATE();
    case 756:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'n') ADVANCE(704);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(805);
      END_STATE();
    case 757:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'n') ADVANCE(790);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(805);
      END_STATE();
    case 758:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'n') ADVANCE(705);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(805);
      END_STATE();
    case 759:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'n') ADVANCE(788);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(805);
      END_STATE();
    case 760:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'o') ADVANCE(796);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(805);
      END_STATE();
    case 761:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'o') ADVANCE(749);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(805);
      END_STATE();
    case 762:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'o') ADVANCE(797);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(805);
      END_STATE();
    case 763:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'o') ADVANCE(798);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(805);
      END_STATE();
    case 764:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'o') ADVANCE(739);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(805);
      END_STATE();
    case 765:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'o') ADVANCE(802);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(805);
      END_STATE();
    case 766:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'p') ADVANCE(453);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(805);
      END_STATE();
    case 767:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'p') ADVANCE(725);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(805);
      END_STATE();
    case 768:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'r') ADVANCE(695);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(805);
      END_STATE();
    case 769:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'r') ADVANCE(504);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(805);
      END_STATE();
    case 770:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'r') ADVANCE(449);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(805);
      END_STATE();
    case 771:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'r') ADVANCE(794);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(805);
      END_STATE();
    case 772:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'r') ADVANCE(737);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(805);
      END_STATE();
    case 773:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'r') ADVANCE(782);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(805);
      END_STATE();
    case 774:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'r') ADVANCE(721);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(805);
      END_STATE();
    case 775:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'r') ADVANCE(762);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(805);
      END_STATE();
    case 776:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'r') ADVANCE(779);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(805);
      END_STATE();
    case 777:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 's') ADVANCE(710);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(805);
      END_STATE();
    case 778:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 's') ADVANCE(787);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(805);
      END_STATE();
    case 779:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 's') ADVANCE(729);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(805);
      END_STATE();
    case 780:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 't') ADVANCE(494);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(805);
      END_STATE();
    case 781:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 't') ADVANCE(515);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(805);
      END_STATE();
    case 782:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 't') ADVANCE(457);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(805);
      END_STATE();
    case 783:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 't') ADVANCE(464);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(805);
      END_STATE();
    case 784:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 't') ADVANCE(532);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(805);
      END_STATE();
    case 785:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 't') ADVANCE(476);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(805);
      END_STATE();
    case 786:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 't') ADVANCE(484);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(805);
      END_STATE();
    case 787:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 't') ADVANCE(738);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(805);
      END_STATE();
    case 788:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 't') ADVANCE(690);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(805);
      END_STATE();
    case 789:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 't') ADVANCE(699);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(805);
      END_STATE();
    case 790:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 't') ADVANCE(726);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(805);
      END_STATE();
    case 791:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 't') ADVANCE(727);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(805);
      END_STATE();
    case 792:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 't') ADVANCE(719);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(805);
      END_STATE();
    case 793:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 't') ADVANCE(715);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(805);
      END_STATE();
    case 794:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'u') ADVANCE(709);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(805);
      END_STATE();
    case 795:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'u') ADVANCE(745);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(805);
      END_STATE();
    case 796:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'u') ADVANCE(752);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(805);
      END_STATE();
    case 797:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'u') ADVANCE(766);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(805);
      END_STATE();
    case 798:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'u') ADVANCE(759);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(805);
      END_STATE();
    case 799:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'v') ADVANCE(718);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(805);
      END_STATE();
    case 800:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'v') ADVANCE(488);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(805);
      END_STATE();
    case 801:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'v') ADVANCE(713);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(805);
      END_STATE();
    case 802:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'v') ADVANCE(714);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(805);
      END_STATE();
    case 803:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'x') ADVANCE(482);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(805);
      END_STATE();
    case 804:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'x') ADVANCE(784);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(805);
      END_STATE();
    case 805:
      ACCEPT_TOKEN(sym__identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(805);
      END_STATE();
    case 806:
      ACCEPT_TOKEN(sym__identifier_dot);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(806);
      END_STATE();
    case 807:
      ACCEPT_TOKEN(anon_sym_DOT_DOT);
      END_STATE();
    case 808:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 809:
      ACCEPT_TOKEN(anon_sym_SLASH);
      END_STATE();
    case 810:
      ACCEPT_TOKEN(anon_sym_PIPE);
      END_STATE();
    case 811:
      ACCEPT_TOKEN(anon_sym_BANG_EQ);
      END_STATE();
    case 812:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '=') ADVANCE(813);
      END_STATE();
    case 813:
      ACCEPT_TOKEN(anon_sym_GT_EQ);
      END_STATE();
    case 814:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '=') ADVANCE(815);
      END_STATE();
    case 815:
      ACCEPT_TOKEN(anon_sym_LT_EQ);
      END_STATE();
    case 816:
      ACCEPT_TOKEN(anon_sym_QMARK_QMARK);
      END_STATE();
    case 817:
      ACCEPT_TOKEN(aux_sym__date_token1);
      END_STATE();
    case 818:
      ACCEPT_TOKEN(aux_sym__date_token2);
      END_STATE();
    case 819:
      ACCEPT_TOKEN(aux_sym__date_token2);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(818);
      END_STATE();
    case 820:
      ACCEPT_TOKEN(anon_sym_AT);
      END_STATE();
    case 821:
      ACCEPT_TOKEN(aux_sym__time_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(433);
      END_STATE();
    case 822:
      ACCEPT_TOKEN(anon_sym_T);
      if (lookahead == 'A') ADVANCE(100);
      if (lookahead == 'R') ADVANCE(182);
      END_STATE();
    case 823:
      ACCEPT_TOKEN(anon_sym_T);
      if (lookahead == 'A') ADVANCE(99);
      END_STATE();
    case 824:
      ACCEPT_TOKEN(anon_sym_Z);
      END_STATE();
    case 825:
      ACCEPT_TOKEN(anon_sym_POUND);
      END_STATE();
    case 826:
      ACCEPT_TOKEN(anon_sym_POUND);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(830);
      END_STATE();
    case 827:
      ACCEPT_TOKEN(anon_sym_POUND);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(550);
      END_STATE();
    case 828:
      ACCEPT_TOKEN(anon_sym_POUND);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(554);
      END_STATE();
    case 829:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == '#') ADVANCE(826);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(829);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(830);
      END_STATE();
    case 830:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(830);
      END_STATE();
    case 831:
      ACCEPT_TOKEN(sym_bang);
      END_STATE();
    case 832:
      ACCEPT_TOKEN(sym_bang);
      if (lookahead == '=') ADVANCE(811);
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
  [5] = {.lex_state = 434},
  [6] = {.lex_state = 7},
  [7] = {.lex_state = 7},
  [8] = {.lex_state = 5},
  [9] = {.lex_state = 7},
  [10] = {.lex_state = 6},
  [11] = {.lex_state = 2},
  [12] = {.lex_state = 435},
  [13] = {.lex_state = 435},
  [14] = {.lex_state = 435},
  [15] = {.lex_state = 435},
  [16] = {.lex_state = 3},
  [17] = {.lex_state = 3},
  [18] = {.lex_state = 436},
  [19] = {.lex_state = 3},
  [20] = {.lex_state = 3},
  [21] = {.lex_state = 3},
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
  [34] = {.lex_state = 3},
  [35] = {.lex_state = 3},
  [36] = {.lex_state = 3},
  [37] = {.lex_state = 3},
  [38] = {.lex_state = 3},
  [39] = {.lex_state = 3},
  [40] = {.lex_state = 3},
  [41] = {.lex_state = 3},
  [42] = {.lex_state = 434},
  [43] = {.lex_state = 3},
  [44] = {.lex_state = 3},
  [45] = {.lex_state = 3},
  [46] = {.lex_state = 3},
  [47] = {.lex_state = 3},
  [48] = {.lex_state = 434},
  [49] = {.lex_state = 3},
  [50] = {.lex_state = 435},
  [51] = {.lex_state = 435},
  [52] = {.lex_state = 435},
  [53] = {.lex_state = 435},
  [54] = {.lex_state = 3},
  [55] = {.lex_state = 3},
  [56] = {.lex_state = 435},
  [57] = {.lex_state = 3},
  [58] = {.lex_state = 1},
  [59] = {.lex_state = 3},
  [60] = {.lex_state = 3},
  [61] = {.lex_state = 3},
  [62] = {.lex_state = 3},
  [63] = {.lex_state = 3},
  [64] = {.lex_state = 3},
  [65] = {.lex_state = 3},
  [66] = {.lex_state = 3},
  [67] = {.lex_state = 3},
  [68] = {.lex_state = 3},
  [69] = {.lex_state = 3},
  [70] = {.lex_state = 435},
  [71] = {.lex_state = 3},
  [72] = {.lex_state = 3},
  [73] = {.lex_state = 3},
  [74] = {.lex_state = 3},
  [75] = {.lex_state = 435},
  [76] = {.lex_state = 3},
  [77] = {.lex_state = 435},
  [78] = {.lex_state = 437},
  [79] = {.lex_state = 435},
  [80] = {.lex_state = 435},
  [81] = {.lex_state = 435},
  [82] = {.lex_state = 435},
  [83] = {.lex_state = 435},
  [84] = {.lex_state = 435},
  [85] = {.lex_state = 437},
  [86] = {.lex_state = 435},
  [87] = {.lex_state = 435},
  [88] = {.lex_state = 435},
  [89] = {.lex_state = 435},
  [90] = {.lex_state = 435},
  [91] = {.lex_state = 435},
  [92] = {.lex_state = 435},
  [93] = {.lex_state = 435},
  [94] = {.lex_state = 435},
  [95] = {.lex_state = 435},
  [96] = {.lex_state = 435},
  [97] = {.lex_state = 435},
  [98] = {.lex_state = 2},
  [99] = {.lex_state = 435},
  [100] = {.lex_state = 435},
  [101] = {.lex_state = 435},
  [102] = {.lex_state = 435},
  [103] = {.lex_state = 435},
  [104] = {.lex_state = 435},
  [105] = {.lex_state = 435},
  [106] = {.lex_state = 2},
  [107] = {.lex_state = 435},
  [108] = {.lex_state = 435},
  [109] = {.lex_state = 435},
  [110] = {.lex_state = 435},
  [111] = {.lex_state = 435},
  [112] = {.lex_state = 435},
  [113] = {.lex_state = 435},
  [114] = {.lex_state = 435},
  [115] = {.lex_state = 435},
  [116] = {.lex_state = 8},
  [117] = {.lex_state = 8},
  [118] = {.lex_state = 435},
  [119] = {.lex_state = 435},
  [120] = {.lex_state = 1},
  [121] = {.lex_state = 437},
  [122] = {.lex_state = 437},
  [123] = {.lex_state = 437},
  [124] = {.lex_state = 437},
  [125] = {.lex_state = 1},
  [126] = {.lex_state = 437},
  [127] = {.lex_state = 437},
  [128] = {.lex_state = 437},
  [129] = {.lex_state = 437},
  [130] = {.lex_state = 437},
  [131] = {.lex_state = 437},
  [132] = {.lex_state = 437},
  [133] = {.lex_state = 437},
  [134] = {.lex_state = 437},
  [135] = {.lex_state = 435},
  [136] = {.lex_state = 437},
  [137] = {.lex_state = 435},
  [138] = {.lex_state = 437},
  [139] = {.lex_state = 437},
  [140] = {.lex_state = 435},
  [141] = {.lex_state = 437},
  [142] = {.lex_state = 436},
  [143] = {.lex_state = 436},
  [144] = {.lex_state = 435},
  [145] = {.lex_state = 435},
  [146] = {.lex_state = 436},
  [147] = {.lex_state = 4},
  [148] = {.lex_state = 436},
  [149] = {.lex_state = 4},
  [150] = {.lex_state = 8},
  [151] = {.lex_state = 8},
  [152] = {.lex_state = 8},
  [153] = {.lex_state = 8},
  [154] = {.lex_state = 8},
  [155] = {.lex_state = 8},
  [156] = {.lex_state = 8},
  [157] = {.lex_state = 8},
  [158] = {.lex_state = 8},
  [159] = {.lex_state = 8},
  [160] = {.lex_state = 8},
  [161] = {.lex_state = 8},
  [162] = {.lex_state = 436},
  [163] = {.lex_state = 8},
  [164] = {.lex_state = 8},
  [165] = {.lex_state = 435},
  [166] = {.lex_state = 8},
  [167] = {.lex_state = 8},
  [168] = {.lex_state = 8},
  [169] = {.lex_state = 435},
  [170] = {.lex_state = 435},
  [171] = {.lex_state = 435},
  [172] = {.lex_state = 435},
  [173] = {.lex_state = 435},
  [174] = {.lex_state = 435},
  [175] = {.lex_state = 435},
  [176] = {.lex_state = 435},
  [177] = {.lex_state = 435},
  [178] = {.lex_state = 435},
  [179] = {.lex_state = 435},
  [180] = {.lex_state = 435},
  [181] = {.lex_state = 435},
  [182] = {.lex_state = 435},
  [183] = {.lex_state = 435},
  [184] = {.lex_state = 435},
  [185] = {.lex_state = 3},
  [186] = {.lex_state = 3},
  [187] = {.lex_state = 435},
  [188] = {.lex_state = 3},
  [189] = {.lex_state = 435},
  [190] = {.lex_state = 435},
  [191] = {.lex_state = 436},
  [192] = {.lex_state = 435},
  [193] = {.lex_state = 435},
  [194] = {.lex_state = 435},
  [195] = {.lex_state = 435},
  [196] = {.lex_state = 435},
  [197] = {.lex_state = 435},
  [198] = {.lex_state = 435},
  [199] = {.lex_state = 435},
  [200] = {.lex_state = 435},
  [201] = {.lex_state = 435},
  [202] = {.lex_state = 435},
  [203] = {.lex_state = 435},
  [204] = {.lex_state = 435},
  [205] = {.lex_state = 435},
  [206] = {.lex_state = 435},
  [207] = {.lex_state = 435},
  [208] = {.lex_state = 435},
  [209] = {.lex_state = 435},
  [210] = {.lex_state = 435},
  [211] = {.lex_state = 435},
  [212] = {.lex_state = 435},
  [213] = {.lex_state = 435},
  [214] = {.lex_state = 435},
  [215] = {.lex_state = 435},
  [216] = {.lex_state = 435},
  [217] = {.lex_state = 435},
  [218] = {.lex_state = 435},
  [219] = {.lex_state = 435},
  [220] = {.lex_state = 435},
  [221] = {.lex_state = 435},
  [222] = {.lex_state = 435},
  [223] = {.lex_state = 435},
  [224] = {.lex_state = 435},
  [225] = {.lex_state = 435},
  [226] = {.lex_state = 435},
  [227] = {.lex_state = 435},
  [228] = {.lex_state = 435},
  [229] = {.lex_state = 435},
  [230] = {.lex_state = 435},
  [231] = {.lex_state = 435},
  [232] = {.lex_state = 435},
  [233] = {.lex_state = 435},
  [234] = {.lex_state = 435},
  [235] = {.lex_state = 435},
  [236] = {.lex_state = 435},
  [237] = {.lex_state = 435},
  [238] = {.lex_state = 435},
  [239] = {.lex_state = 435},
  [240] = {.lex_state = 435},
  [241] = {.lex_state = 435},
  [242] = {.lex_state = 435},
  [243] = {.lex_state = 435},
  [244] = {.lex_state = 435},
  [245] = {.lex_state = 3},
  [246] = {.lex_state = 9},
  [247] = {.lex_state = 9},
  [248] = {.lex_state = 4},
  [249] = {.lex_state = 9},
  [250] = {.lex_state = 9},
  [251] = {.lex_state = 4},
  [252] = {.lex_state = 4},
  [253] = {.lex_state = 435},
  [254] = {.lex_state = 435},
  [255] = {.lex_state = 435},
  [256] = {.lex_state = 4},
  [257] = {.lex_state = 4},
  [258] = {.lex_state = 4},
  [259] = {.lex_state = 9},
  [260] = {.lex_state = 9},
  [261] = {.lex_state = 4},
  [262] = {.lex_state = 4},
  [263] = {.lex_state = 435},
  [264] = {.lex_state = 4},
  [265] = {.lex_state = 4},
  [266] = {.lex_state = 435},
  [267] = {.lex_state = 435},
  [268] = {.lex_state = 4},
  [269] = {.lex_state = 4},
  [270] = {.lex_state = 4},
  [271] = {.lex_state = 435},
  [272] = {.lex_state = 4},
  [273] = {.lex_state = 435},
  [274] = {.lex_state = 435},
  [275] = {.lex_state = 4},
  [276] = {.lex_state = 4},
  [277] = {.lex_state = 435},
  [278] = {.lex_state = 4},
  [279] = {.lex_state = 435},
  [280] = {.lex_state = 435},
  [281] = {.lex_state = 435},
  [282] = {.lex_state = 435},
  [283] = {.lex_state = 435},
  [284] = {.lex_state = 0},
  [285] = {.lex_state = 435},
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
  [301] = {.lex_state = 0},
  [302] = {.lex_state = 16},
  [303] = {.lex_state = 435},
  [304] = {.lex_state = 435},
  [305] = {.lex_state = 16},
  [306] = {.lex_state = 0},
  [307] = {.lex_state = 16},
  [308] = {.lex_state = 17},
  [309] = {.lex_state = 19},
  [310] = {.lex_state = 16},
  [311] = {.lex_state = 17},
  [312] = {.lex_state = 17},
  [313] = {.lex_state = 0},
  [314] = {.lex_state = 0},
  [315] = {.lex_state = 0},
  [316] = {.lex_state = 0},
  [317] = {.lex_state = 16},
  [318] = {.lex_state = 16},
  [319] = {.lex_state = 0},
  [320] = {.lex_state = 0},
  [321] = {.lex_state = 0},
  [322] = {.lex_state = 17},
  [323] = {.lex_state = 0},
  [324] = {.lex_state = 0},
  [325] = {.lex_state = 435},
  [326] = {.lex_state = 436},
  [327] = {.lex_state = 16},
  [328] = {.lex_state = 0},
  [329] = {.lex_state = 435},
  [330] = {.lex_state = 435},
  [331] = {.lex_state = 0},
  [332] = {.lex_state = 16},
  [333] = {.lex_state = 435},
  [334] = {.lex_state = 16},
  [335] = {.lex_state = 0},
  [336] = {.lex_state = 0},
  [337] = {.lex_state = 0},
  [338] = {.lex_state = 16},
  [339] = {.lex_state = 16},
  [340] = {.lex_state = 16},
  [341] = {.lex_state = 435},
  [342] = {.lex_state = 435},
  [343] = {.lex_state = 0},
  [344] = {.lex_state = 435},
  [345] = {.lex_state = 18},
  [346] = {.lex_state = 435},
  [347] = {.lex_state = 16},
  [348] = {.lex_state = 16},
  [349] = {.lex_state = 435},
  [350] = {.lex_state = 16},
  [351] = {.lex_state = 0},
  [352] = {.lex_state = 16},
  [353] = {.lex_state = 435},
  [354] = {.lex_state = 427},
  [355] = {.lex_state = 16},
  [356] = {.lex_state = 0},
  [357] = {.lex_state = 0},
  [358] = {.lex_state = 0},
  [359] = {.lex_state = 0},
  [360] = {.lex_state = 16},
  [361] = {.lex_state = 0},
  [362] = {.lex_state = 0},
  [363] = {.lex_state = 427},
  [364] = {.lex_state = 0},
  [365] = {.lex_state = 20},
  [366] = {.lex_state = 16},
  [367] = {.lex_state = 435},
  [368] = {.lex_state = 0},
  [369] = {.lex_state = 16},
  [370] = {.lex_state = 0},
  [371] = {.lex_state = 0},
  [372] = {.lex_state = 16},
  [373] = {.lex_state = 16},
  [374] = {.lex_state = 427},
  [375] = {.lex_state = 435},
  [376] = {.lex_state = 0},
  [377] = {.lex_state = 0},
  [378] = {.lex_state = 435},
  [379] = {.lex_state = 16},
  [380] = {.lex_state = 0},
  [381] = {.lex_state = 0},
  [382] = {.lex_state = 16},
  [383] = {.lex_state = 0},
  [384] = {.lex_state = 16},
  [385] = {.lex_state = 16},
  [386] = {.lex_state = 16},
  [387] = {.lex_state = 16},
  [388] = {.lex_state = 0},
  [389] = {.lex_state = 0},
  [390] = {.lex_state = 0},
  [391] = {.lex_state = 0},
  [392] = {.lex_state = 0},
  [393] = {.lex_state = 0},
  [394] = {.lex_state = 0},
  [395] = {.lex_state = 427},
  [396] = {.lex_state = 435},
  [397] = {.lex_state = 0},
  [398] = {.lex_state = 0},
  [399] = {.lex_state = 0},
  [400] = {.lex_state = 9},
  [401] = {.lex_state = 0},
  [402] = {.lex_state = 16},
  [403] = {.lex_state = 429},
  [404] = {.lex_state = 429},
  [405] = {.lex_state = 16},
  [406] = {.lex_state = 0},
  [407] = {.lex_state = 427},
  [408] = {.lex_state = 0},
  [409] = {.lex_state = 16},
  [410] = {.lex_state = 0},
  [411] = {.lex_state = 0},
  [412] = {.lex_state = 429},
  [413] = {.lex_state = 0},
  [414] = {.lex_state = 0},
  [415] = {.lex_state = 19},
  [416] = {.lex_state = 19},
  [417] = {.lex_state = 0},
  [418] = {.lex_state = 0},
  [419] = {.lex_state = 0},
  [420] = {.lex_state = 0},
  [421] = {.lex_state = 0},
  [422] = {.lex_state = 0},
  [423] = {.lex_state = 0},
  [424] = {.lex_state = 829},
  [425] = {.lex_state = 0},
  [426] = {.lex_state = 0},
  [427] = {.lex_state = 0},
  [428] = {.lex_state = 0},
  [429] = {.lex_state = 0},
  [430] = {.lex_state = 5},
  [431] = {.lex_state = 0},
  [432] = {.lex_state = 0},
  [433] = {.lex_state = 436},
  [434] = {.lex_state = 19},
  [435] = {.lex_state = 0},
  [436] = {.lex_state = 0},
  [437] = {.lex_state = 0},
  [438] = {.lex_state = 0},
  [439] = {.lex_state = 5},
  [440] = {.lex_state = 548},
  [441] = {.lex_state = 548},
  [442] = {.lex_state = 552},
  [443] = {.lex_state = 548},
  [444] = {.lex_state = 0},
  [445] = {.lex_state = 19},
  [446] = {.lex_state = 19},
  [447] = {.lex_state = 0},
  [448] = {.lex_state = 0},
  [449] = {.lex_state = 0},
  [450] = {.lex_state = 0},
  [451] = {.lex_state = 0},
  [452] = {.lex_state = 0},
  [453] = {.lex_state = 5},
  [454] = {.lex_state = 5},
  [455] = {.lex_state = 0},
  [456] = {.lex_state = 0},
  [457] = {.lex_state = 0},
  [458] = {.lex_state = 0},
  [459] = {.lex_state = 0},
  [460] = {.lex_state = 0},
  [461] = {.lex_state = 5},
  [462] = {.lex_state = 5},
  [463] = {.lex_state = 0},
  [464] = {.lex_state = 0},
  [465] = {.lex_state = 0},
  [466] = {.lex_state = 0},
  [467] = {.lex_state = 0},
  [468] = {.lex_state = 0},
  [469] = {.lex_state = 5},
  [470] = {.lex_state = 5},
  [471] = {.lex_state = 0},
  [472] = {.lex_state = 0},
  [473] = {.lex_state = 0},
  [474] = {.lex_state = 0},
  [475] = {.lex_state = 5},
  [476] = {.lex_state = 5},
  [477] = {.lex_state = 0},
  [478] = {.lex_state = 0},
  [479] = {.lex_state = 0},
  [480] = {.lex_state = 0},
  [481] = {.lex_state = 0},
  [482] = {.lex_state = 21},
  [483] = {.lex_state = 548},
  [484] = {.lex_state = 552},
  [485] = {.lex_state = 0},
  [486] = {.lex_state = 21},
  [487] = {.lex_state = 548},
  [488] = {.lex_state = 552},
  [489] = {.lex_state = 21},
  [490] = {.lex_state = 21},
  [491] = {.lex_state = 548},
  [492] = {.lex_state = 552},
  [493] = {.lex_state = 21},
  [494] = {.lex_state = 548},
  [495] = {.lex_state = 552},
  [496] = {.lex_state = 21},
  [497] = {.lex_state = 21},
  [498] = {.lex_state = 21},
  [499] = {.lex_state = 0},
  [500] = {.lex_state = 0},
  [501] = {.lex_state = 0},
  [502] = {.lex_state = 0},
  [503] = {.lex_state = 0},
  [504] = {(TSStateId)(-1)},
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
    [sym_program] = STATE(500),
    [sym_prql] = STATE(316),
    [sym_pipeline] = STATE(324),
    [sym_variable] = STATE(324),
    [sym_function_definition] = STATE(324),
    [sym_from_text] = STATE(135),
    [sym_from] = STATE(135),
    [sym_comment] = STATE(1),
    [aux_sym_program_repeat1] = STATE(284),
    [aux_sym_program_repeat2] = STATE(289),
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
  [0] = 35,
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
      anon_sym_SQUOTE,
    ACTIONS(35), 1,
      anon_sym_f_DQUOTE,
    ACTIONS(37), 1,
      anon_sym_f_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(39), 1,
      anon_sym_s_DQUOTE,
    ACTIONS(41), 1,
      anon_sym_s_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(43), 1,
      sym__natural_number,
    ACTIONS(45), 1,
      anon_sym__,
    ACTIONS(47), 1,
      anon_sym_DOT,
    ACTIONS(49), 1,
      anon_sym_BQUOTE,
    ACTIONS(51), 1,
      sym__identifier,
    ACTIONS(53), 1,
      anon_sym_AT,
    STATE(2), 1,
      sym_comment,
    STATE(13), 1,
      aux_sym__friendly_number,
    STATE(72), 1,
      sym__agg_keywords,
    STATE(77), 1,
      sym_identifier,
    STATE(80), 1,
      sym__double_quote_string,
    STATE(86), 1,
      sym_integer,
    STATE(112), 1,
      sym__single_quote_string,
    STATE(201), 1,
      sym_binary_expression,
    STATE(281), 1,
      sym__expression,
    STATE(437), 1,
      sym__alias_identifier,
    STATE(88), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(102), 2,
      sym__literal_string,
      sym_decimal_number,
    STATE(109), 2,
      sym__double_f_string,
      sym__triple_f_string,
    ACTIONS(17), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(394), 3,
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
    STATE(113), 7,
      sym_literal,
      sym_f_string,
      sym_s_string,
      sym_field,
      sym_date,
      sym_time,
      sym_timestamp,
  [125] = 34,
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
      anon_sym_SQUOTE,
    ACTIONS(35), 1,
      anon_sym_f_DQUOTE,
    ACTIONS(37), 1,
      anon_sym_f_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(39), 1,
      anon_sym_s_DQUOTE,
    ACTIONS(41), 1,
      anon_sym_s_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(43), 1,
      sym__natural_number,
    ACTIONS(45), 1,
      anon_sym__,
    ACTIONS(47), 1,
      anon_sym_DOT,
    ACTIONS(49), 1,
      anon_sym_BQUOTE,
    ACTIONS(51), 1,
      sym__identifier,
    ACTIONS(53), 1,
      anon_sym_AT,
    ACTIONS(55), 1,
      anon_sym_RBRACK,
    STATE(3), 1,
      sym_comment,
    STATE(13), 1,
      aux_sym__friendly_number,
    STATE(72), 1,
      sym__agg_keywords,
    STATE(77), 1,
      sym_identifier,
    STATE(80), 1,
      sym__double_quote_string,
    STATE(86), 1,
      sym_integer,
    STATE(112), 1,
      sym__single_quote_string,
    STATE(216), 1,
      sym_binary_expression,
    STATE(281), 1,
      sym__expression,
    STATE(437), 1,
      sym__alias_identifier,
    STATE(88), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(102), 2,
      sym__literal_string,
      sym_decimal_number,
    STATE(109), 2,
      sym__double_f_string,
      sym__triple_f_string,
    ACTIONS(17), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(406), 3,
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
    STATE(113), 7,
      sym_literal,
      sym_f_string,
      sym_s_string,
      sym_field,
      sym_date,
      sym_time,
      sym_timestamp,
  [247] = 34,
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
      anon_sym_SQUOTE,
    ACTIONS(35), 1,
      anon_sym_f_DQUOTE,
    ACTIONS(37), 1,
      anon_sym_f_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(39), 1,
      anon_sym_s_DQUOTE,
    ACTIONS(41), 1,
      anon_sym_s_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(43), 1,
      sym__natural_number,
    ACTIONS(45), 1,
      anon_sym__,
    ACTIONS(47), 1,
      anon_sym_DOT,
    ACTIONS(49), 1,
      anon_sym_BQUOTE,
    ACTIONS(51), 1,
      sym__identifier,
    ACTIONS(53), 1,
      anon_sym_AT,
    ACTIONS(57), 1,
      anon_sym_RBRACK,
    STATE(4), 1,
      sym_comment,
    STATE(13), 1,
      aux_sym__friendly_number,
    STATE(72), 1,
      sym__agg_keywords,
    STATE(77), 1,
      sym_identifier,
    STATE(80), 1,
      sym__double_quote_string,
    STATE(86), 1,
      sym_integer,
    STATE(112), 1,
      sym__single_quote_string,
    STATE(216), 1,
      sym_binary_expression,
    STATE(281), 1,
      sym__expression,
    STATE(437), 1,
      sym__alias_identifier,
    STATE(88), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(102), 2,
      sym__literal_string,
      sym_decimal_number,
    STATE(109), 2,
      sym__double_f_string,
      sym__triple_f_string,
    ACTIONS(17), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(406), 3,
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
    STATE(113), 7,
      sym_literal,
      sym_f_string,
      sym_s_string,
      sym_field,
      sym_date,
      sym_time,
      sym_timestamp,
  [369] = 20,
    ACTIONS(3), 1,
      anon_sym_POUND,
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
      anon_sym_BQUOTE,
    ACTIONS(77), 1,
      sym__identifier,
    STATE(5), 1,
      sym_comment,
    STATE(78), 1,
      aux_sym_function_call_repeat1,
    STATE(122), 1,
      sym_identifier,
    STATE(123), 1,
      aux_sym__friendly_number,
    STATE(128), 1,
      sym_integer,
    STATE(131), 1,
      sym__call_parameter,
    STATE(133), 1,
      sym_literal,
    STATE(130), 2,
      sym__double_quote_string,
      sym__single_quote_string,
    STATE(136), 2,
      sym__literal_string,
      sym_decimal_number,
    ACTIONS(63), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    ACTIONS(59), 11,
      ts_builtin_sym_end,
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
    ACTIONS(61), 19,
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
  [462] = 33,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(29), 1,
      anon_sym_DASH,
    ACTIONS(31), 1,
      anon_sym_DQUOTE,
    ACTIONS(33), 1,
      anon_sym_SQUOTE,
    ACTIONS(35), 1,
      anon_sym_f_DQUOTE,
    ACTIONS(37), 1,
      anon_sym_f_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(39), 1,
      anon_sym_s_DQUOTE,
    ACTIONS(41), 1,
      anon_sym_s_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(43), 1,
      sym__natural_number,
    ACTIONS(45), 1,
      anon_sym__,
    ACTIONS(47), 1,
      anon_sym_DOT,
    ACTIONS(53), 1,
      anon_sym_AT,
    ACTIONS(79), 1,
      sym_keyword_switch,
    ACTIONS(81), 1,
      anon_sym_LPAREN,
    ACTIONS(83), 1,
      anon_sym_BQUOTE,
    ACTIONS(85), 1,
      sym__identifier,
    STATE(6), 1,
      sym_comment,
    STATE(13), 1,
      aux_sym__friendly_number,
    STATE(58), 1,
      sym_identifier,
    STATE(61), 1,
      sym__agg_keywords,
    STATE(80), 1,
      sym__double_quote_string,
    STATE(86), 1,
      sym_integer,
    STATE(112), 1,
      sym__single_quote_string,
    STATE(115), 1,
      sym__expression,
    STATE(177), 1,
      sym__agg_rhs_assignment,
    STATE(437), 1,
      sym__alias_identifier,
    STATE(88), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(102), 2,
      sym__literal_string,
      sym_decimal_number,
    STATE(109), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(181), 2,
      sym_function_call,
      sym_switch,
    ACTIONS(17), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    ACTIONS(19), 7,
      sym_keyword_average,
      sym_keyword_min,
      sym_keyword_max,
      sym_keyword_stddev,
      sym_keyword_avg,
      sym_keyword_sum,
      sym_keyword_count_distinct,
    STATE(113), 8,
      sym_literal,
      sym_f_string,
      sym_s_string,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [581] = 33,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(29), 1,
      anon_sym_DASH,
    ACTIONS(31), 1,
      anon_sym_DQUOTE,
    ACTIONS(33), 1,
      anon_sym_SQUOTE,
    ACTIONS(35), 1,
      anon_sym_f_DQUOTE,
    ACTIONS(37), 1,
      anon_sym_f_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(39), 1,
      anon_sym_s_DQUOTE,
    ACTIONS(41), 1,
      anon_sym_s_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(43), 1,
      sym__natural_number,
    ACTIONS(45), 1,
      anon_sym__,
    ACTIONS(47), 1,
      anon_sym_DOT,
    ACTIONS(53), 1,
      anon_sym_AT,
    ACTIONS(79), 1,
      sym_keyword_switch,
    ACTIONS(81), 1,
      anon_sym_LPAREN,
    ACTIONS(87), 1,
      anon_sym_BQUOTE,
    ACTIONS(89), 1,
      sym__identifier,
    STATE(7), 1,
      sym_comment,
    STATE(11), 1,
      sym_identifier,
    STATE(13), 1,
      aux_sym__friendly_number,
    STATE(61), 1,
      sym__agg_keywords,
    STATE(80), 1,
      sym__double_quote_string,
    STATE(86), 1,
      sym_integer,
    STATE(112), 1,
      sym__single_quote_string,
    STATE(115), 1,
      sym__expression,
    STATE(177), 1,
      sym__agg_rhs_assignment,
    STATE(437), 1,
      sym__alias_identifier,
    STATE(88), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(102), 2,
      sym__literal_string,
      sym_decimal_number,
    STATE(109), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(181), 2,
      sym_function_call,
      sym_switch,
    ACTIONS(17), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    ACTIONS(19), 7,
      sym_keyword_average,
      sym_keyword_min,
      sym_keyword_max,
      sym_keyword_stddev,
      sym_keyword_avg,
      sym_keyword_sum,
      sym_keyword_count_distinct,
    STATE(113), 8,
      sym_literal,
      sym_f_string,
      sym_s_string,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [700] = 33,
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
      anon_sym_SQUOTE,
    ACTIONS(35), 1,
      anon_sym_f_DQUOTE,
    ACTIONS(37), 1,
      anon_sym_f_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(39), 1,
      anon_sym_s_DQUOTE,
    ACTIONS(41), 1,
      anon_sym_s_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(43), 1,
      sym__natural_number,
    ACTIONS(45), 1,
      anon_sym__,
    ACTIONS(47), 1,
      anon_sym_DOT,
    ACTIONS(49), 1,
      anon_sym_BQUOTE,
    ACTIONS(51), 1,
      sym__identifier,
    ACTIONS(53), 1,
      anon_sym_AT,
    STATE(8), 1,
      sym_comment,
    STATE(13), 1,
      aux_sym__friendly_number,
    STATE(72), 1,
      sym__agg_keywords,
    STATE(77), 1,
      sym_identifier,
    STATE(80), 1,
      sym__double_quote_string,
    STATE(86), 1,
      sym_integer,
    STATE(112), 1,
      sym__single_quote_string,
    STATE(216), 1,
      sym_binary_expression,
    STATE(281), 1,
      sym__expression,
    STATE(437), 1,
      sym__alias_identifier,
    STATE(88), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(102), 2,
      sym__literal_string,
      sym_decimal_number,
    STATE(109), 2,
      sym__double_f_string,
      sym__triple_f_string,
    ACTIONS(17), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(406), 3,
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
    STATE(113), 7,
      sym_literal,
      sym_f_string,
      sym_s_string,
      sym_field,
      sym_date,
      sym_time,
      sym_timestamp,
  [819] = 33,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(29), 1,
      anon_sym_DASH,
    ACTIONS(31), 1,
      anon_sym_DQUOTE,
    ACTIONS(33), 1,
      anon_sym_SQUOTE,
    ACTIONS(35), 1,
      anon_sym_f_DQUOTE,
    ACTIONS(37), 1,
      anon_sym_f_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(39), 1,
      anon_sym_s_DQUOTE,
    ACTIONS(41), 1,
      anon_sym_s_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(43), 1,
      sym__natural_number,
    ACTIONS(45), 1,
      anon_sym__,
    ACTIONS(47), 1,
      anon_sym_DOT,
    ACTIONS(53), 1,
      anon_sym_AT,
    ACTIONS(79), 1,
      sym_keyword_switch,
    ACTIONS(81), 1,
      anon_sym_LPAREN,
    ACTIONS(91), 1,
      anon_sym_BQUOTE,
    ACTIONS(93), 1,
      sym__identifier,
    STATE(5), 1,
      sym_identifier,
    STATE(9), 1,
      sym_comment,
    STATE(13), 1,
      aux_sym__friendly_number,
    STATE(61), 1,
      sym__agg_keywords,
    STATE(80), 1,
      sym__double_quote_string,
    STATE(86), 1,
      sym_integer,
    STATE(112), 1,
      sym__single_quote_string,
    STATE(115), 1,
      sym__expression,
    STATE(177), 1,
      sym__agg_rhs_assignment,
    STATE(437), 1,
      sym__alias_identifier,
    STATE(88), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(102), 2,
      sym__literal_string,
      sym_decimal_number,
    STATE(109), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(181), 2,
      sym_function_call,
      sym_switch,
    ACTIONS(17), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    ACTIONS(19), 7,
      sym_keyword_average,
      sym_keyword_min,
      sym_keyword_max,
      sym_keyword_stddev,
      sym_keyword_avg,
      sym_keyword_sum,
      sym_keyword_count_distinct,
    STATE(113), 8,
      sym_literal,
      sym_f_string,
      sym_s_string,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [938] = 33,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(23), 1,
      anon_sym_LPAREN,
    ACTIONS(29), 1,
      anon_sym_DASH,
    ACTIONS(31), 1,
      anon_sym_DQUOTE,
    ACTIONS(33), 1,
      anon_sym_SQUOTE,
    ACTIONS(35), 1,
      anon_sym_f_DQUOTE,
    ACTIONS(37), 1,
      anon_sym_f_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(39), 1,
      anon_sym_s_DQUOTE,
    ACTIONS(41), 1,
      anon_sym_s_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(43), 1,
      sym__natural_number,
    ACTIONS(45), 1,
      anon_sym__,
    ACTIONS(47), 1,
      anon_sym_DOT,
    ACTIONS(53), 1,
      anon_sym_AT,
    ACTIONS(83), 1,
      anon_sym_BQUOTE,
    ACTIONS(85), 1,
      sym__identifier,
    STATE(10), 1,
      sym_comment,
    STATE(13), 1,
      aux_sym__friendly_number,
    STATE(58), 1,
      sym_identifier,
    STATE(61), 1,
      sym__agg_keywords,
    STATE(80), 1,
      sym__double_quote_string,
    STATE(86), 1,
      sym_integer,
    STATE(112), 1,
      sym__single_quote_string,
    STATE(263), 1,
      sym__expression,
    STATE(271), 1,
      sym_binary_expression,
    STATE(437), 1,
      sym__alias_identifier,
    STATE(452), 1,
      sym__agg_rhs_assignment,
    STATE(457), 1,
      sym_function_call,
    STATE(88), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(102), 2,
      sym__literal_string,
      sym_decimal_number,
    STATE(109), 2,
      sym__double_f_string,
      sym__triple_f_string,
    ACTIONS(17), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    ACTIONS(19), 7,
      sym_keyword_average,
      sym_keyword_min,
      sym_keyword_max,
      sym_keyword_stddev,
      sym_keyword_avg,
      sym_keyword_sum,
      sym_keyword_count_distinct,
    STATE(113), 7,
      sym_literal,
      sym_f_string,
      sym_s_string,
      sym_field,
      sym_date,
      sym_time,
      sym_timestamp,
  [1055] = 20,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(97), 1,
      anon_sym_DQUOTE,
    ACTIONS(99), 1,
      anon_sym_SQUOTE,
    ACTIONS(101), 1,
      sym__natural_number,
    ACTIONS(103), 1,
      anon_sym__,
    ACTIONS(105), 1,
      anon_sym_DOT,
    ACTIONS(107), 1,
      anon_sym_BQUOTE,
    ACTIONS(109), 1,
      sym__identifier,
    STATE(11), 1,
      sym_comment,
    STATE(116), 1,
      aux_sym_function_call_repeat1,
    STATE(151), 1,
      sym_identifier,
    STATE(153), 1,
      aux_sym__friendly_number,
    STATE(156), 1,
      sym_integer,
    STATE(166), 1,
      sym__call_parameter,
    STATE(168), 1,
      sym_literal,
    STATE(163), 2,
      sym__literal_string,
      sym_decimal_number,
    STATE(164), 2,
      sym__double_quote_string,
      sym__single_quote_string,
    ACTIONS(95), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    ACTIONS(59), 11,
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
    ACTIONS(61), 15,
      sym_keyword_filter,
      sym_keyword_derive,
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
  [1144] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(115), 2,
      sym__natural_number,
      anon_sym__,
    STATE(12), 2,
      aux_sym__friendly_number,
      sym_comment,
    ACTIONS(113), 5,
      sym_keyword_from,
      anon_sym_EQ,
      anon_sym_DASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(111), 37,
      ts_builtin_sym_end,
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
      anon_sym_PIPE,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_QMARK_QMARK,
      anon_sym_Z,
  [1202] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(12), 1,
      aux_sym__friendly_number,
    STATE(13), 1,
      sym_comment,
    ACTIONS(43), 2,
      sym__natural_number,
      anon_sym__,
    ACTIONS(120), 5,
      sym_keyword_from,
      anon_sym_EQ,
      anon_sym_DASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(118), 37,
      ts_builtin_sym_end,
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
      anon_sym_PIPE,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_QMARK_QMARK,
      anon_sym_Z,
  [1262] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(12), 1,
      aux_sym__friendly_number,
    STATE(14), 1,
      sym_comment,
    ACTIONS(43), 2,
      sym__natural_number,
      anon_sym__,
    ACTIONS(124), 5,
      sym_keyword_from,
      anon_sym_EQ,
      anon_sym_DASH,
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
      anon_sym_DASH_GT,
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
  [1322] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(15), 1,
      sym_comment,
    ACTIONS(128), 5,
      sym_keyword_from,
      anon_sym_EQ,
      anon_sym_DASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(126), 39,
      ts_builtin_sym_end,
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
      anon_sym_PIPE,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_QMARK_QMARK,
      anon_sym_Z,
  [1377] = 35,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(23), 1,
      anon_sym_LPAREN,
    ACTIONS(29), 1,
      anon_sym_DASH,
    ACTIONS(31), 1,
      anon_sym_DQUOTE,
    ACTIONS(33), 1,
      anon_sym_SQUOTE,
    ACTIONS(35), 1,
      anon_sym_f_DQUOTE,
    ACTIONS(37), 1,
      anon_sym_f_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(39), 1,
      anon_sym_s_DQUOTE,
    ACTIONS(41), 1,
      anon_sym_s_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(43), 1,
      sym__natural_number,
    ACTIONS(45), 1,
      anon_sym__,
    ACTIONS(47), 1,
      anon_sym_DOT,
    ACTIONS(49), 1,
      anon_sym_BQUOTE,
    ACTIONS(51), 1,
      sym__identifier,
    ACTIONS(53), 1,
      anon_sym_AT,
    ACTIONS(130), 1,
      anon_sym_COMMA,
    ACTIONS(132), 1,
      anon_sym_RBRACK,
    STATE(13), 1,
      aux_sym__friendly_number,
    STATE(16), 1,
      sym_comment,
    STATE(22), 1,
      aux_sym_switch_repeat1,
    STATE(77), 1,
      sym_identifier,
    STATE(80), 1,
      sym__double_quote_string,
    STATE(86), 1,
      sym_integer,
    STATE(112), 1,
      sym__single_quote_string,
    STATE(185), 1,
      sym_switch_condition,
    STATE(273), 1,
      sym_binary_expression,
    STATE(274), 1,
      sym_literal,
    STATE(283), 1,
      sym__expression,
    STATE(377), 1,
      aux_sym_switch_repeat2,
    STATE(437), 1,
      sym__alias_identifier,
    STATE(88), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(102), 2,
      sym__literal_string,
      sym_decimal_number,
    STATE(109), 2,
      sym__double_f_string,
      sym__triple_f_string,
    ACTIONS(17), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(113), 6,
      sym_f_string,
      sym_s_string,
      sym_field,
      sym_date,
      sym_time,
      sym_timestamp,
  [1493] = 32,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(29), 1,
      anon_sym_DASH,
    ACTIONS(31), 1,
      anon_sym_DQUOTE,
    ACTIONS(33), 1,
      anon_sym_SQUOTE,
    ACTIONS(35), 1,
      anon_sym_f_DQUOTE,
    ACTIONS(37), 1,
      anon_sym_f_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(39), 1,
      anon_sym_s_DQUOTE,
    ACTIONS(41), 1,
      anon_sym_s_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(43), 1,
      sym__natural_number,
    ACTIONS(45), 1,
      anon_sym__,
    ACTIONS(47), 1,
      anon_sym_DOT,
    ACTIONS(49), 1,
      anon_sym_BQUOTE,
    ACTIONS(51), 1,
      sym__identifier,
    ACTIONS(53), 1,
      anon_sym_AT,
    ACTIONS(134), 1,
      anon_sym_LPAREN,
    ACTIONS(136), 1,
      anon_sym_COMMA,
    ACTIONS(138), 1,
      anon_sym_RBRACK,
    STATE(13), 1,
      aux_sym__friendly_number,
    STATE(17), 1,
      sym_comment,
    STATE(77), 1,
      sym_identifier,
    STATE(80), 1,
      sym__double_quote_string,
    STATE(86), 1,
      sym_integer,
    STATE(112), 1,
      sym__single_quote_string,
    STATE(178), 1,
      sym_assignment,
    STATE(189), 1,
      sym__expression,
    STATE(383), 1,
      sym_term,
    STATE(437), 1,
      sym__alias_identifier,
    STATE(88), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(102), 2,
      sym__literal_string,
      sym_decimal_number,
    STATE(109), 2,
      sym__double_f_string,
      sym__triple_f_string,
    ACTIONS(17), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(113), 8,
      sym_literal,
      sym_f_string,
      sym_s_string,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [1602] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(18), 1,
      sym_comment,
    ACTIONS(142), 6,
      sym_keyword_from,
      anon_sym_EQ,
      anon_sym_DASH,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_T,
    ACTIONS(140), 36,
      ts_builtin_sym_end,
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
      anon_sym_PIPE,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_QMARK_QMARK,
  [1655] = 32,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(23), 1,
      anon_sym_LPAREN,
    ACTIONS(29), 1,
      anon_sym_DASH,
    ACTIONS(31), 1,
      anon_sym_DQUOTE,
    ACTIONS(33), 1,
      anon_sym_SQUOTE,
    ACTIONS(35), 1,
      anon_sym_f_DQUOTE,
    ACTIONS(37), 1,
      anon_sym_f_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(39), 1,
      anon_sym_s_DQUOTE,
    ACTIONS(41), 1,
      anon_sym_s_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(43), 1,
      sym__natural_number,
    ACTIONS(45), 1,
      anon_sym__,
    ACTIONS(47), 1,
      anon_sym_DOT,
    ACTIONS(49), 1,
      anon_sym_BQUOTE,
    ACTIONS(51), 1,
      sym__identifier,
    ACTIONS(53), 1,
      anon_sym_AT,
    ACTIONS(144), 1,
      anon_sym_COMMA,
    ACTIONS(146), 1,
      anon_sym_RBRACK,
    STATE(13), 1,
      aux_sym__friendly_number,
    STATE(19), 1,
      sym_comment,
    STATE(77), 1,
      sym_identifier,
    STATE(80), 1,
      sym__double_quote_string,
    STATE(86), 1,
      sym_integer,
    STATE(112), 1,
      sym__single_quote_string,
    STATE(178), 1,
      sym_assignment,
    STATE(189), 1,
      sym__expression,
    STATE(368), 1,
      sym_term,
    STATE(437), 1,
      sym__alias_identifier,
    STATE(88), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(102), 2,
      sym__literal_string,
      sym_decimal_number,
    STATE(109), 2,
      sym__double_f_string,
      sym__triple_f_string,
    ACTIONS(17), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(113), 8,
      sym_literal,
      sym_f_string,
      sym_s_string,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [1764] = 33,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(23), 1,
      anon_sym_LPAREN,
    ACTIONS(29), 1,
      anon_sym_DASH,
    ACTIONS(31), 1,
      anon_sym_DQUOTE,
    ACTIONS(33), 1,
      anon_sym_SQUOTE,
    ACTIONS(35), 1,
      anon_sym_f_DQUOTE,
    ACTIONS(37), 1,
      anon_sym_f_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(39), 1,
      anon_sym_s_DQUOTE,
    ACTIONS(41), 1,
      anon_sym_s_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(43), 1,
      sym__natural_number,
    ACTIONS(45), 1,
      anon_sym__,
    ACTIONS(47), 1,
      anon_sym_DOT,
    ACTIONS(49), 1,
      anon_sym_BQUOTE,
    ACTIONS(51), 1,
      sym__identifier,
    ACTIONS(53), 1,
      anon_sym_AT,
    STATE(13), 1,
      aux_sym__friendly_number,
    STATE(20), 1,
      sym_comment,
    STATE(22), 1,
      aux_sym_switch_repeat1,
    STATE(77), 1,
      sym_identifier,
    STATE(80), 1,
      sym__double_quote_string,
    STATE(86), 1,
      sym_integer,
    STATE(112), 1,
      sym__single_quote_string,
    STATE(185), 1,
      sym_switch_condition,
    STATE(273), 1,
      sym_binary_expression,
    STATE(274), 1,
      sym_literal,
    STATE(283), 1,
      sym__expression,
    STATE(437), 1,
      sym__alias_identifier,
    ACTIONS(148), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
    STATE(88), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(102), 2,
      sym__literal_string,
      sym_decimal_number,
    STATE(109), 2,
      sym__double_f_string,
      sym__triple_f_string,
    ACTIONS(17), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(113), 6,
      sym_f_string,
      sym_s_string,
      sym_field,
      sym_date,
      sym_time,
      sym_timestamp,
  [1875] = 34,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(23), 1,
      anon_sym_LPAREN,
    ACTIONS(29), 1,
      anon_sym_DASH,
    ACTIONS(31), 1,
      anon_sym_DQUOTE,
    ACTIONS(33), 1,
      anon_sym_SQUOTE,
    ACTIONS(35), 1,
      anon_sym_f_DQUOTE,
    ACTIONS(37), 1,
      anon_sym_f_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(39), 1,
      anon_sym_s_DQUOTE,
    ACTIONS(41), 1,
      anon_sym_s_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(43), 1,
      sym__natural_number,
    ACTIONS(45), 1,
      anon_sym__,
    ACTIONS(47), 1,
      anon_sym_DOT,
    ACTIONS(49), 1,
      anon_sym_BQUOTE,
    ACTIONS(51), 1,
      sym__identifier,
    ACTIONS(53), 1,
      anon_sym_AT,
    ACTIONS(150), 1,
      anon_sym_COMMA,
    ACTIONS(152), 1,
      anon_sym_RBRACK,
    STATE(13), 1,
      aux_sym__friendly_number,
    STATE(16), 1,
      aux_sym_switch_repeat1,
    STATE(21), 1,
      sym_comment,
    STATE(77), 1,
      sym_identifier,
    STATE(80), 1,
      sym__double_quote_string,
    STATE(86), 1,
      sym_integer,
    STATE(112), 1,
      sym__single_quote_string,
    STATE(185), 1,
      sym_switch_condition,
    STATE(273), 1,
      sym_binary_expression,
    STATE(274), 1,
      sym_literal,
    STATE(283), 1,
      sym__expression,
    STATE(437), 1,
      sym__alias_identifier,
    STATE(88), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(102), 2,
      sym__literal_string,
      sym_decimal_number,
    STATE(109), 2,
      sym__double_f_string,
      sym__triple_f_string,
    ACTIONS(17), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(113), 6,
      sym_f_string,
      sym_s_string,
      sym_field,
      sym_date,
      sym_time,
      sym_timestamp,
  [1988] = 32,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(157), 1,
      anon_sym_LPAREN,
    ACTIONS(162), 1,
      anon_sym_DASH,
    ACTIONS(165), 1,
      anon_sym_DQUOTE,
    ACTIONS(168), 1,
      anon_sym_SQUOTE,
    ACTIONS(171), 1,
      anon_sym_f_DQUOTE,
    ACTIONS(174), 1,
      anon_sym_f_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(177), 1,
      anon_sym_s_DQUOTE,
    ACTIONS(180), 1,
      anon_sym_s_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(183), 1,
      sym__natural_number,
    ACTIONS(186), 1,
      anon_sym__,
    ACTIONS(189), 1,
      anon_sym_DOT,
    ACTIONS(192), 1,
      anon_sym_BQUOTE,
    ACTIONS(195), 1,
      sym__identifier,
    ACTIONS(198), 1,
      anon_sym_AT,
    STATE(13), 1,
      aux_sym__friendly_number,
    STATE(77), 1,
      sym_identifier,
    STATE(80), 1,
      sym__double_quote_string,
    STATE(86), 1,
      sym_integer,
    STATE(112), 1,
      sym__single_quote_string,
    STATE(185), 1,
      sym_switch_condition,
    STATE(273), 1,
      sym_binary_expression,
    STATE(274), 1,
      sym_literal,
    STATE(283), 1,
      sym__expression,
    STATE(437), 1,
      sym__alias_identifier,
    ACTIONS(160), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
    STATE(22), 2,
      sym_comment,
      aux_sym_switch_repeat1,
    STATE(88), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(102), 2,
      sym__literal_string,
      sym_decimal_number,
    STATE(109), 2,
      sym__double_f_string,
      sym__triple_f_string,
    ACTIONS(154), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(113), 6,
      sym_f_string,
      sym_s_string,
      sym_field,
      sym_date,
      sym_time,
      sym_timestamp,
  [2097] = 32,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(23), 1,
      anon_sym_LPAREN,
    ACTIONS(29), 1,
      anon_sym_DASH,
    ACTIONS(31), 1,
      anon_sym_DQUOTE,
    ACTIONS(33), 1,
      anon_sym_SQUOTE,
    ACTIONS(35), 1,
      anon_sym_f_DQUOTE,
    ACTIONS(37), 1,
      anon_sym_f_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(39), 1,
      anon_sym_s_DQUOTE,
    ACTIONS(41), 1,
      anon_sym_s_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(43), 1,
      sym__natural_number,
    ACTIONS(45), 1,
      anon_sym__,
    ACTIONS(47), 1,
      anon_sym_DOT,
    ACTIONS(49), 1,
      anon_sym_BQUOTE,
    ACTIONS(51), 1,
      sym__identifier,
    ACTIONS(53), 1,
      anon_sym_AT,
    ACTIONS(201), 1,
      anon_sym_COMMA,
    ACTIONS(203), 1,
      anon_sym_RBRACK,
    STATE(13), 1,
      aux_sym__friendly_number,
    STATE(23), 1,
      sym_comment,
    STATE(77), 1,
      sym_identifier,
    STATE(80), 1,
      sym__double_quote_string,
    STATE(86), 1,
      sym_integer,
    STATE(112), 1,
      sym__single_quote_string,
    STATE(178), 1,
      sym_assignment,
    STATE(189), 1,
      sym__expression,
    STATE(371), 1,
      sym_term,
    STATE(437), 1,
      sym__alias_identifier,
    STATE(88), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(102), 2,
      sym__literal_string,
      sym_decimal_number,
    STATE(109), 2,
      sym__double_f_string,
      sym__triple_f_string,
    ACTIONS(17), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(113), 8,
      sym_literal,
      sym_f_string,
      sym_s_string,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [2206] = 32,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(23), 1,
      anon_sym_LPAREN,
    ACTIONS(29), 1,
      anon_sym_DASH,
    ACTIONS(31), 1,
      anon_sym_DQUOTE,
    ACTIONS(33), 1,
      anon_sym_SQUOTE,
    ACTIONS(35), 1,
      anon_sym_f_DQUOTE,
    ACTIONS(37), 1,
      anon_sym_f_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(39), 1,
      anon_sym_s_DQUOTE,
    ACTIONS(41), 1,
      anon_sym_s_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(43), 1,
      sym__natural_number,
    ACTIONS(45), 1,
      anon_sym__,
    ACTIONS(47), 1,
      anon_sym_DOT,
    ACTIONS(49), 1,
      anon_sym_BQUOTE,
    ACTIONS(51), 1,
      sym__identifier,
    ACTIONS(53), 1,
      anon_sym_AT,
    ACTIONS(205), 1,
      anon_sym_COMMA,
    ACTIONS(207), 1,
      anon_sym_RBRACK,
    STATE(13), 1,
      aux_sym__friendly_number,
    STATE(24), 1,
      sym_comment,
    STATE(77), 1,
      sym_identifier,
    STATE(80), 1,
      sym__double_quote_string,
    STATE(86), 1,
      sym_integer,
    STATE(112), 1,
      sym__single_quote_string,
    STATE(178), 1,
      sym_assignment,
    STATE(189), 1,
      sym__expression,
    STATE(376), 1,
      sym_term,
    STATE(437), 1,
      sym__alias_identifier,
    STATE(88), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(102), 2,
      sym__literal_string,
      sym_decimal_number,
    STATE(109), 2,
      sym__double_f_string,
      sym__triple_f_string,
    ACTIONS(17), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(113), 8,
      sym_literal,
      sym_f_string,
      sym_s_string,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [2315] = 32,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(23), 1,
      anon_sym_LPAREN,
    ACTIONS(29), 1,
      anon_sym_DASH,
    ACTIONS(31), 1,
      anon_sym_DQUOTE,
    ACTIONS(33), 1,
      anon_sym_SQUOTE,
    ACTIONS(35), 1,
      anon_sym_f_DQUOTE,
    ACTIONS(37), 1,
      anon_sym_f_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(39), 1,
      anon_sym_s_DQUOTE,
    ACTIONS(41), 1,
      anon_sym_s_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(43), 1,
      sym__natural_number,
    ACTIONS(45), 1,
      anon_sym__,
    ACTIONS(47), 1,
      anon_sym_DOT,
    ACTIONS(49), 1,
      anon_sym_BQUOTE,
    ACTIONS(51), 1,
      sym__identifier,
    ACTIONS(53), 1,
      anon_sym_AT,
    ACTIONS(209), 1,
      anon_sym_LBRACK,
    ACTIONS(211), 1,
      sym_bang,
    STATE(13), 1,
      aux_sym__friendly_number,
    STATE(25), 1,
      sym_comment,
    STATE(77), 1,
      sym_identifier,
    STATE(80), 1,
      sym__double_quote_string,
    STATE(86), 1,
      sym_integer,
    STATE(112), 1,
      sym__single_quote_string,
    STATE(137), 1,
      sym__expression,
    STATE(178), 1,
      sym_assignment,
    STATE(207), 1,
      sym_term,
    STATE(437), 1,
      sym__alias_identifier,
    STATE(88), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(102), 2,
      sym__literal_string,
      sym_decimal_number,
    STATE(109), 2,
      sym__double_f_string,
      sym__triple_f_string,
    ACTIONS(17), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(113), 8,
      sym_literal,
      sym_f_string,
      sym_s_string,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [2424] = 32,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(23), 1,
      anon_sym_LPAREN,
    ACTIONS(29), 1,
      anon_sym_DASH,
    ACTIONS(31), 1,
      anon_sym_DQUOTE,
    ACTIONS(33), 1,
      anon_sym_SQUOTE,
    ACTIONS(35), 1,
      anon_sym_f_DQUOTE,
    ACTIONS(37), 1,
      anon_sym_f_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(39), 1,
      anon_sym_s_DQUOTE,
    ACTIONS(41), 1,
      anon_sym_s_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(43), 1,
      sym__natural_number,
    ACTIONS(45), 1,
      anon_sym__,
    ACTIONS(47), 1,
      anon_sym_DOT,
    ACTIONS(49), 1,
      anon_sym_BQUOTE,
    ACTIONS(51), 1,
      sym__identifier,
    ACTIONS(53), 1,
      anon_sym_AT,
    ACTIONS(209), 1,
      anon_sym_LBRACK,
    ACTIONS(211), 1,
      sym_bang,
    STATE(13), 1,
      aux_sym__friendly_number,
    STATE(26), 1,
      sym_comment,
    STATE(77), 1,
      sym_identifier,
    STATE(80), 1,
      sym__double_quote_string,
    STATE(86), 1,
      sym_integer,
    STATE(112), 1,
      sym__single_quote_string,
    STATE(118), 1,
      sym__expression,
    STATE(178), 1,
      sym_assignment,
    STATE(207), 1,
      sym_term,
    STATE(437), 1,
      sym__alias_identifier,
    STATE(88), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(102), 2,
      sym__literal_string,
      sym_decimal_number,
    STATE(109), 2,
      sym__double_f_string,
      sym__triple_f_string,
    ACTIONS(17), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(113), 8,
      sym_literal,
      sym_f_string,
      sym_s_string,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [2533] = 31,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(23), 1,
      anon_sym_LPAREN,
    ACTIONS(29), 1,
      anon_sym_DASH,
    ACTIONS(31), 1,
      anon_sym_DQUOTE,
    ACTIONS(33), 1,
      anon_sym_SQUOTE,
    ACTIONS(35), 1,
      anon_sym_f_DQUOTE,
    ACTIONS(37), 1,
      anon_sym_f_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(39), 1,
      anon_sym_s_DQUOTE,
    ACTIONS(41), 1,
      anon_sym_s_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(43), 1,
      sym__natural_number,
    ACTIONS(45), 1,
      anon_sym__,
    ACTIONS(47), 1,
      anon_sym_DOT,
    ACTIONS(49), 1,
      anon_sym_BQUOTE,
    ACTIONS(51), 1,
      sym__identifier,
    ACTIONS(53), 1,
      anon_sym_AT,
    ACTIONS(213), 1,
      anon_sym_LBRACK,
    STATE(13), 1,
      aux_sym__friendly_number,
    STATE(27), 1,
      sym_comment,
    STATE(77), 1,
      sym_identifier,
    STATE(80), 1,
      sym__double_quote_string,
    STATE(86), 1,
      sym_integer,
    STATE(112), 1,
      sym__single_quote_string,
    STATE(178), 1,
      sym_assignment,
    STATE(189), 1,
      sym__expression,
    STATE(436), 1,
      sym_term,
    STATE(437), 1,
      sym__alias_identifier,
    STATE(88), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(102), 2,
      sym__literal_string,
      sym_decimal_number,
    STATE(109), 2,
      sym__double_f_string,
      sym__triple_f_string,
    ACTIONS(17), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(113), 8,
      sym_literal,
      sym_f_string,
      sym_s_string,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [2639] = 31,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(23), 1,
      anon_sym_LPAREN,
    ACTIONS(29), 1,
      anon_sym_DASH,
    ACTIONS(31), 1,
      anon_sym_DQUOTE,
    ACTIONS(33), 1,
      anon_sym_SQUOTE,
    ACTIONS(35), 1,
      anon_sym_f_DQUOTE,
    ACTIONS(37), 1,
      anon_sym_f_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(39), 1,
      anon_sym_s_DQUOTE,
    ACTIONS(41), 1,
      anon_sym_s_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(43), 1,
      sym__natural_number,
    ACTIONS(45), 1,
      anon_sym__,
    ACTIONS(47), 1,
      anon_sym_DOT,
    ACTIONS(49), 1,
      anon_sym_BQUOTE,
    ACTIONS(51), 1,
      sym__identifier,
    ACTIONS(53), 1,
      anon_sym_AT,
    ACTIONS(215), 1,
      anon_sym_RBRACK,
    STATE(13), 1,
      aux_sym__friendly_number,
    STATE(28), 1,
      sym_comment,
    STATE(77), 1,
      sym_identifier,
    STATE(80), 1,
      sym__double_quote_string,
    STATE(86), 1,
      sym_integer,
    STATE(112), 1,
      sym__single_quote_string,
    STATE(178), 1,
      sym_assignment,
    STATE(189), 1,
      sym__expression,
    STATE(401), 1,
      sym_term,
    STATE(437), 1,
      sym__alias_identifier,
    STATE(88), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(102), 2,
      sym__literal_string,
      sym_decimal_number,
    STATE(109), 2,
      sym__double_f_string,
      sym__triple_f_string,
    ACTIONS(17), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(113), 8,
      sym_literal,
      sym_f_string,
      sym_s_string,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [2745] = 33,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(23), 1,
      anon_sym_LPAREN,
    ACTIONS(29), 1,
      anon_sym_DASH,
    ACTIONS(31), 1,
      anon_sym_DQUOTE,
    ACTIONS(33), 1,
      anon_sym_SQUOTE,
    ACTIONS(35), 1,
      anon_sym_f_DQUOTE,
    ACTIONS(37), 1,
      anon_sym_f_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(39), 1,
      anon_sym_s_DQUOTE,
    ACTIONS(41), 1,
      anon_sym_s_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(43), 1,
      sym__natural_number,
    ACTIONS(45), 1,
      anon_sym__,
    ACTIONS(47), 1,
      anon_sym_DOT,
    ACTIONS(49), 1,
      anon_sym_BQUOTE,
    ACTIONS(51), 1,
      sym__identifier,
    ACTIONS(53), 1,
      anon_sym_AT,
    ACTIONS(217), 1,
      anon_sym_RBRACK,
    STATE(13), 1,
      aux_sym__friendly_number,
    STATE(20), 1,
      aux_sym_switch_repeat1,
    STATE(29), 1,
      sym_comment,
    STATE(77), 1,
      sym_identifier,
    STATE(80), 1,
      sym__double_quote_string,
    STATE(86), 1,
      sym_integer,
    STATE(112), 1,
      sym__single_quote_string,
    STATE(185), 1,
      sym_switch_condition,
    STATE(273), 1,
      sym_binary_expression,
    STATE(274), 1,
      sym_literal,
    STATE(283), 1,
      sym__expression,
    STATE(437), 1,
      sym__alias_identifier,
    STATE(88), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(102), 2,
      sym__literal_string,
      sym_decimal_number,
    STATE(109), 2,
      sym__double_f_string,
      sym__triple_f_string,
    ACTIONS(17), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(113), 6,
      sym_f_string,
      sym_s_string,
      sym_field,
      sym_date,
      sym_time,
      sym_timestamp,
  [2855] = 31,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(23), 1,
      anon_sym_LPAREN,
    ACTIONS(29), 1,
      anon_sym_DASH,
    ACTIONS(31), 1,
      anon_sym_DQUOTE,
    ACTIONS(33), 1,
      anon_sym_SQUOTE,
    ACTIONS(35), 1,
      anon_sym_f_DQUOTE,
    ACTIONS(37), 1,
      anon_sym_f_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(39), 1,
      anon_sym_s_DQUOTE,
    ACTIONS(41), 1,
      anon_sym_s_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(43), 1,
      sym__natural_number,
    ACTIONS(45), 1,
      anon_sym__,
    ACTIONS(47), 1,
      anon_sym_DOT,
    ACTIONS(49), 1,
      anon_sym_BQUOTE,
    ACTIONS(51), 1,
      sym__identifier,
    ACTIONS(53), 1,
      anon_sym_AT,
    ACTIONS(219), 1,
      anon_sym_RBRACK,
    STATE(13), 1,
      aux_sym__friendly_number,
    STATE(30), 1,
      sym_comment,
    STATE(77), 1,
      sym_identifier,
    STATE(80), 1,
      sym__double_quote_string,
    STATE(86), 1,
      sym_integer,
    STATE(112), 1,
      sym__single_quote_string,
    STATE(178), 1,
      sym_assignment,
    STATE(189), 1,
      sym__expression,
    STATE(401), 1,
      sym_term,
    STATE(437), 1,
      sym__alias_identifier,
    STATE(88), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(102), 2,
      sym__literal_string,
      sym_decimal_number,
    STATE(109), 2,
      sym__double_f_string,
      sym__triple_f_string,
    ACTIONS(17), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(113), 8,
      sym_literal,
      sym_f_string,
      sym_s_string,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [2961] = 31,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(23), 1,
      anon_sym_LPAREN,
    ACTIONS(29), 1,
      anon_sym_DASH,
    ACTIONS(31), 1,
      anon_sym_DQUOTE,
    ACTIONS(33), 1,
      anon_sym_SQUOTE,
    ACTIONS(35), 1,
      anon_sym_f_DQUOTE,
    ACTIONS(37), 1,
      anon_sym_f_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(39), 1,
      anon_sym_s_DQUOTE,
    ACTIONS(41), 1,
      anon_sym_s_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(43), 1,
      sym__natural_number,
    ACTIONS(45), 1,
      anon_sym__,
    ACTIONS(47), 1,
      anon_sym_DOT,
    ACTIONS(49), 1,
      anon_sym_BQUOTE,
    ACTIONS(51), 1,
      sym__identifier,
    ACTIONS(53), 1,
      anon_sym_AT,
    ACTIONS(221), 1,
      anon_sym_RBRACK,
    STATE(13), 1,
      aux_sym__friendly_number,
    STATE(31), 1,
      sym_comment,
    STATE(77), 1,
      sym_identifier,
    STATE(80), 1,
      sym__double_quote_string,
    STATE(86), 1,
      sym_integer,
    STATE(112), 1,
      sym__single_quote_string,
    STATE(178), 1,
      sym_assignment,
    STATE(189), 1,
      sym__expression,
    STATE(401), 1,
      sym_term,
    STATE(437), 1,
      sym__alias_identifier,
    STATE(88), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(102), 2,
      sym__literal_string,
      sym_decimal_number,
    STATE(109), 2,
      sym__double_f_string,
      sym__triple_f_string,
    ACTIONS(17), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(113), 8,
      sym_literal,
      sym_f_string,
      sym_s_string,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [3067] = 31,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(23), 1,
      anon_sym_LPAREN,
    ACTIONS(29), 1,
      anon_sym_DASH,
    ACTIONS(31), 1,
      anon_sym_DQUOTE,
    ACTIONS(33), 1,
      anon_sym_SQUOTE,
    ACTIONS(35), 1,
      anon_sym_f_DQUOTE,
    ACTIONS(37), 1,
      anon_sym_f_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(39), 1,
      anon_sym_s_DQUOTE,
    ACTIONS(41), 1,
      anon_sym_s_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(43), 1,
      sym__natural_number,
    ACTIONS(45), 1,
      anon_sym__,
    ACTIONS(47), 1,
      anon_sym_DOT,
    ACTIONS(49), 1,
      anon_sym_BQUOTE,
    ACTIONS(51), 1,
      sym__identifier,
    ACTIONS(53), 1,
      anon_sym_AT,
    ACTIONS(223), 1,
      anon_sym_LBRACK,
    STATE(13), 1,
      aux_sym__friendly_number,
    STATE(32), 1,
      sym_comment,
    STATE(77), 1,
      sym_identifier,
    STATE(80), 1,
      sym__double_quote_string,
    STATE(86), 1,
      sym_integer,
    STATE(112), 1,
      sym__single_quote_string,
    STATE(189), 1,
      sym__expression,
    STATE(214), 1,
      sym_assignment,
    STATE(215), 1,
      sym_term,
    STATE(437), 1,
      sym__alias_identifier,
    STATE(88), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(102), 2,
      sym__literal_string,
      sym_decimal_number,
    STATE(109), 2,
      sym__double_f_string,
      sym__triple_f_string,
    ACTIONS(17), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(113), 8,
      sym_literal,
      sym_f_string,
      sym_s_string,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [3173] = 31,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(29), 1,
      anon_sym_DASH,
    ACTIONS(31), 1,
      anon_sym_DQUOTE,
    ACTIONS(33), 1,
      anon_sym_SQUOTE,
    ACTIONS(35), 1,
      anon_sym_f_DQUOTE,
    ACTIONS(37), 1,
      anon_sym_f_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(39), 1,
      anon_sym_s_DQUOTE,
    ACTIONS(41), 1,
      anon_sym_s_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(43), 1,
      sym__natural_number,
    ACTIONS(45), 1,
      anon_sym__,
    ACTIONS(47), 1,
      anon_sym_DOT,
    ACTIONS(49), 1,
      anon_sym_BQUOTE,
    ACTIONS(51), 1,
      sym__identifier,
    ACTIONS(53), 1,
      anon_sym_AT,
    ACTIONS(225), 1,
      anon_sym_LPAREN,
    ACTIONS(227), 1,
      anon_sym_RBRACK,
    STATE(13), 1,
      aux_sym__friendly_number,
    STATE(33), 1,
      sym_comment,
    STATE(77), 1,
      sym_identifier,
    STATE(80), 1,
      sym__double_quote_string,
    STATE(86), 1,
      sym_integer,
    STATE(112), 1,
      sym__single_quote_string,
    STATE(178), 1,
      sym_assignment,
    STATE(189), 1,
      sym__expression,
    STATE(399), 1,
      sym_term,
    STATE(437), 1,
      sym__alias_identifier,
    STATE(88), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(102), 2,
      sym__literal_string,
      sym_decimal_number,
    STATE(109), 2,
      sym__double_f_string,
      sym__triple_f_string,
    ACTIONS(17), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(113), 8,
      sym_literal,
      sym_f_string,
      sym_s_string,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [3279] = 31,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(23), 1,
      anon_sym_LPAREN,
    ACTIONS(29), 1,
      anon_sym_DASH,
    ACTIONS(31), 1,
      anon_sym_DQUOTE,
    ACTIONS(33), 1,
      anon_sym_SQUOTE,
    ACTIONS(35), 1,
      anon_sym_f_DQUOTE,
    ACTIONS(37), 1,
      anon_sym_f_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(39), 1,
      anon_sym_s_DQUOTE,
    ACTIONS(41), 1,
      anon_sym_s_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(43), 1,
      sym__natural_number,
    ACTIONS(45), 1,
      anon_sym__,
    ACTIONS(47), 1,
      anon_sym_DOT,
    ACTIONS(49), 1,
      anon_sym_BQUOTE,
    ACTIONS(51), 1,
      sym__identifier,
    ACTIONS(53), 1,
      anon_sym_AT,
    ACTIONS(223), 1,
      anon_sym_LBRACK,
    STATE(13), 1,
      aux_sym__friendly_number,
    STATE(34), 1,
      sym_comment,
    STATE(77), 1,
      sym_identifier,
    STATE(80), 1,
      sym__double_quote_string,
    STATE(86), 1,
      sym_integer,
    STATE(112), 1,
      sym__single_quote_string,
    STATE(137), 1,
      sym__expression,
    STATE(214), 1,
      sym_assignment,
    STATE(215), 1,
      sym_term,
    STATE(437), 1,
      sym__alias_identifier,
    STATE(88), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(102), 2,
      sym__literal_string,
      sym_decimal_number,
    STATE(109), 2,
      sym__double_f_string,
      sym__triple_f_string,
    ACTIONS(17), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(113), 8,
      sym_literal,
      sym_f_string,
      sym_s_string,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [3385] = 31,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(23), 1,
      anon_sym_LPAREN,
    ACTIONS(29), 1,
      anon_sym_DASH,
    ACTIONS(31), 1,
      anon_sym_DQUOTE,
    ACTIONS(33), 1,
      anon_sym_SQUOTE,
    ACTIONS(35), 1,
      anon_sym_f_DQUOTE,
    ACTIONS(37), 1,
      anon_sym_f_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(39), 1,
      anon_sym_s_DQUOTE,
    ACTIONS(41), 1,
      anon_sym_s_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(43), 1,
      sym__natural_number,
    ACTIONS(45), 1,
      anon_sym__,
    ACTIONS(47), 1,
      anon_sym_DOT,
    ACTIONS(49), 1,
      anon_sym_BQUOTE,
    ACTIONS(51), 1,
      sym__identifier,
    ACTIONS(53), 1,
      anon_sym_AT,
    ACTIONS(229), 1,
      anon_sym_RBRACK,
    STATE(13), 1,
      aux_sym__friendly_number,
    STATE(35), 1,
      sym_comment,
    STATE(77), 1,
      sym_identifier,
    STATE(80), 1,
      sym__double_quote_string,
    STATE(86), 1,
      sym_integer,
    STATE(112), 1,
      sym__single_quote_string,
    STATE(178), 1,
      sym_assignment,
    STATE(189), 1,
      sym__expression,
    STATE(401), 1,
      sym_term,
    STATE(437), 1,
      sym__alias_identifier,
    STATE(88), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(102), 2,
      sym__literal_string,
      sym_decimal_number,
    STATE(109), 2,
      sym__double_f_string,
      sym__triple_f_string,
    ACTIONS(17), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(113), 8,
      sym_literal,
      sym_f_string,
      sym_s_string,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [3491] = 32,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(23), 1,
      anon_sym_LPAREN,
    ACTIONS(29), 1,
      anon_sym_DASH,
    ACTIONS(31), 1,
      anon_sym_DQUOTE,
    ACTIONS(33), 1,
      anon_sym_SQUOTE,
    ACTIONS(35), 1,
      anon_sym_f_DQUOTE,
    ACTIONS(37), 1,
      anon_sym_f_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(39), 1,
      anon_sym_s_DQUOTE,
    ACTIONS(41), 1,
      anon_sym_s_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(43), 1,
      sym__natural_number,
    ACTIONS(45), 1,
      anon_sym__,
    ACTIONS(47), 1,
      anon_sym_DOT,
    ACTIONS(49), 1,
      anon_sym_BQUOTE,
    ACTIONS(51), 1,
      sym__identifier,
    ACTIONS(53), 1,
      anon_sym_AT,
    ACTIONS(231), 1,
      anon_sym_COMMA,
    ACTIONS(233), 1,
      anon_sym_RBRACK,
    ACTIONS(235), 1,
      anon_sym_EQ_EQ,
    STATE(13), 1,
      aux_sym__friendly_number,
    STATE(36), 1,
      sym_comment,
    STATE(77), 1,
      sym_identifier,
    STATE(80), 1,
      sym__double_quote_string,
    STATE(86), 1,
      sym_integer,
    STATE(112), 1,
      sym__single_quote_string,
    STATE(236), 1,
      sym_binary_expression,
    STATE(283), 1,
      sym__expression,
    STATE(437), 1,
      sym__alias_identifier,
    STATE(88), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(102), 2,
      sym__literal_string,
      sym_decimal_number,
    STATE(109), 2,
      sym__double_f_string,
      sym__triple_f_string,
    ACTIONS(17), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(113), 7,
      sym_literal,
      sym_f_string,
      sym_s_string,
      sym_field,
      sym_date,
      sym_time,
      sym_timestamp,
  [3599] = 33,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(23), 1,
      anon_sym_LPAREN,
    ACTIONS(29), 1,
      anon_sym_DASH,
    ACTIONS(31), 1,
      anon_sym_DQUOTE,
    ACTIONS(33), 1,
      anon_sym_SQUOTE,
    ACTIONS(35), 1,
      anon_sym_f_DQUOTE,
    ACTIONS(37), 1,
      anon_sym_f_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(39), 1,
      anon_sym_s_DQUOTE,
    ACTIONS(41), 1,
      anon_sym_s_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(43), 1,
      sym__natural_number,
    ACTIONS(45), 1,
      anon_sym__,
    ACTIONS(47), 1,
      anon_sym_DOT,
    ACTIONS(49), 1,
      anon_sym_BQUOTE,
    ACTIONS(51), 1,
      sym__identifier,
    ACTIONS(53), 1,
      anon_sym_AT,
    ACTIONS(237), 1,
      anon_sym_RBRACK,
    STATE(13), 1,
      aux_sym__friendly_number,
    STATE(20), 1,
      aux_sym_switch_repeat1,
    STATE(37), 1,
      sym_comment,
    STATE(77), 1,
      sym_identifier,
    STATE(80), 1,
      sym__double_quote_string,
    STATE(86), 1,
      sym_integer,
    STATE(112), 1,
      sym__single_quote_string,
    STATE(185), 1,
      sym_switch_condition,
    STATE(273), 1,
      sym_binary_expression,
    STATE(274), 1,
      sym_literal,
    STATE(283), 1,
      sym__expression,
    STATE(437), 1,
      sym__alias_identifier,
    STATE(88), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(102), 2,
      sym__literal_string,
      sym_decimal_number,
    STATE(109), 2,
      sym__double_f_string,
      sym__triple_f_string,
    ACTIONS(17), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(113), 6,
      sym_f_string,
      sym_s_string,
      sym_field,
      sym_date,
      sym_time,
      sym_timestamp,
  [3709] = 31,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(23), 1,
      anon_sym_LPAREN,
    ACTIONS(29), 1,
      anon_sym_DASH,
    ACTIONS(31), 1,
      anon_sym_DQUOTE,
    ACTIONS(33), 1,
      anon_sym_SQUOTE,
    ACTIONS(35), 1,
      anon_sym_f_DQUOTE,
    ACTIONS(37), 1,
      anon_sym_f_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(39), 1,
      anon_sym_s_DQUOTE,
    ACTIONS(41), 1,
      anon_sym_s_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(43), 1,
      sym__natural_number,
    ACTIONS(45), 1,
      anon_sym__,
    ACTIONS(47), 1,
      anon_sym_DOT,
    ACTIONS(49), 1,
      anon_sym_BQUOTE,
    ACTIONS(51), 1,
      sym__identifier,
    ACTIONS(53), 1,
      anon_sym_AT,
    ACTIONS(223), 1,
      anon_sym_LBRACK,
    STATE(13), 1,
      aux_sym__friendly_number,
    STATE(38), 1,
      sym_comment,
    STATE(77), 1,
      sym_identifier,
    STATE(80), 1,
      sym__double_quote_string,
    STATE(86), 1,
      sym_integer,
    STATE(112), 1,
      sym__single_quote_string,
    STATE(118), 1,
      sym__expression,
    STATE(214), 1,
      sym_assignment,
    STATE(215), 1,
      sym_term,
    STATE(437), 1,
      sym__alias_identifier,
    STATE(88), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(102), 2,
      sym__literal_string,
      sym_decimal_number,
    STATE(109), 2,
      sym__double_f_string,
      sym__triple_f_string,
    ACTIONS(17), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(113), 8,
      sym_literal,
      sym_f_string,
      sym_s_string,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [3815] = 31,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(29), 1,
      anon_sym_DASH,
    ACTIONS(31), 1,
      anon_sym_DQUOTE,
    ACTIONS(33), 1,
      anon_sym_SQUOTE,
    ACTIONS(35), 1,
      anon_sym_f_DQUOTE,
    ACTIONS(37), 1,
      anon_sym_f_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(39), 1,
      anon_sym_s_DQUOTE,
    ACTIONS(41), 1,
      anon_sym_s_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(43), 1,
      sym__natural_number,
    ACTIONS(45), 1,
      anon_sym__,
    ACTIONS(47), 1,
      anon_sym_DOT,
    ACTIONS(49), 1,
      anon_sym_BQUOTE,
    ACTIONS(51), 1,
      sym__identifier,
    ACTIONS(53), 1,
      anon_sym_AT,
    ACTIONS(225), 1,
      anon_sym_LPAREN,
    ACTIONS(239), 1,
      anon_sym_RBRACK,
    STATE(13), 1,
      aux_sym__friendly_number,
    STATE(39), 1,
      sym_comment,
    STATE(77), 1,
      sym_identifier,
    STATE(80), 1,
      sym__double_quote_string,
    STATE(86), 1,
      sym_integer,
    STATE(112), 1,
      sym__single_quote_string,
    STATE(178), 1,
      sym_assignment,
    STATE(189), 1,
      sym__expression,
    STATE(399), 1,
      sym_term,
    STATE(437), 1,
      sym__alias_identifier,
    STATE(88), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(102), 2,
      sym__literal_string,
      sym_decimal_number,
    STATE(109), 2,
      sym__double_f_string,
      sym__triple_f_string,
    ACTIONS(17), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(113), 8,
      sym_literal,
      sym_f_string,
      sym_s_string,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [3921] = 31,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(29), 1,
      anon_sym_DASH,
    ACTIONS(31), 1,
      anon_sym_DQUOTE,
    ACTIONS(33), 1,
      anon_sym_SQUOTE,
    ACTIONS(35), 1,
      anon_sym_f_DQUOTE,
    ACTIONS(37), 1,
      anon_sym_f_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(39), 1,
      anon_sym_s_DQUOTE,
    ACTIONS(41), 1,
      anon_sym_s_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(43), 1,
      sym__natural_number,
    ACTIONS(45), 1,
      anon_sym__,
    ACTIONS(47), 1,
      anon_sym_DOT,
    ACTIONS(49), 1,
      anon_sym_BQUOTE,
    ACTIONS(51), 1,
      sym__identifier,
    ACTIONS(53), 1,
      anon_sym_AT,
    ACTIONS(225), 1,
      anon_sym_LPAREN,
    ACTIONS(241), 1,
      anon_sym_RBRACK,
    STATE(13), 1,
      aux_sym__friendly_number,
    STATE(40), 1,
      sym_comment,
    STATE(77), 1,
      sym_identifier,
    STATE(80), 1,
      sym__double_quote_string,
    STATE(86), 1,
      sym_integer,
    STATE(112), 1,
      sym__single_quote_string,
    STATE(178), 1,
      sym_assignment,
    STATE(189), 1,
      sym__expression,
    STATE(399), 1,
      sym_term,
    STATE(437), 1,
      sym__alias_identifier,
    STATE(88), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(102), 2,
      sym__literal_string,
      sym_decimal_number,
    STATE(109), 2,
      sym__double_f_string,
      sym__triple_f_string,
    ACTIONS(17), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(113), 8,
      sym_literal,
      sym_f_string,
      sym_s_string,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [4027] = 31,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(23), 1,
      anon_sym_LPAREN,
    ACTIONS(29), 1,
      anon_sym_DASH,
    ACTIONS(31), 1,
      anon_sym_DQUOTE,
    ACTIONS(33), 1,
      anon_sym_SQUOTE,
    ACTIONS(35), 1,
      anon_sym_f_DQUOTE,
    ACTIONS(37), 1,
      anon_sym_f_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(39), 1,
      anon_sym_s_DQUOTE,
    ACTIONS(41), 1,
      anon_sym_s_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(43), 1,
      sym__natural_number,
    ACTIONS(45), 1,
      anon_sym__,
    ACTIONS(47), 1,
      anon_sym_DOT,
    ACTIONS(49), 1,
      anon_sym_BQUOTE,
    ACTIONS(51), 1,
      sym__identifier,
    ACTIONS(53), 1,
      anon_sym_AT,
    ACTIONS(243), 1,
      anon_sym_RBRACK,
    STATE(13), 1,
      aux_sym__friendly_number,
    STATE(41), 1,
      sym_comment,
    STATE(77), 1,
      sym_identifier,
    STATE(80), 1,
      sym__double_quote_string,
    STATE(86), 1,
      sym_integer,
    STATE(112), 1,
      sym__single_quote_string,
    STATE(178), 1,
      sym_assignment,
    STATE(189), 1,
      sym__expression,
    STATE(401), 1,
      sym_term,
    STATE(437), 1,
      sym__alias_identifier,
    STATE(88), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(102), 2,
      sym__literal_string,
      sym_decimal_number,
    STATE(109), 2,
      sym__double_f_string,
      sym__triple_f_string,
    ACTIONS(17), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(113), 8,
      sym_literal,
      sym_f_string,
      sym_s_string,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [4133] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(42), 1,
      sym_comment,
    ACTIONS(245), 16,
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
      anon_sym_PIPE,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_QMARK_QMARK,
    ACTIONS(247), 24,
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
  [4184] = 32,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(23), 1,
      anon_sym_LPAREN,
    ACTIONS(29), 1,
      anon_sym_DASH,
    ACTIONS(31), 1,
      anon_sym_DQUOTE,
    ACTIONS(33), 1,
      anon_sym_SQUOTE,
    ACTIONS(35), 1,
      anon_sym_f_DQUOTE,
    ACTIONS(37), 1,
      anon_sym_f_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(39), 1,
      anon_sym_s_DQUOTE,
    ACTIONS(41), 1,
      anon_sym_s_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(43), 1,
      sym__natural_number,
    ACTIONS(45), 1,
      anon_sym__,
    ACTIONS(47), 1,
      anon_sym_DOT,
    ACTIONS(49), 1,
      anon_sym_BQUOTE,
    ACTIONS(51), 1,
      sym__identifier,
    ACTIONS(53), 1,
      anon_sym_AT,
    STATE(13), 1,
      aux_sym__friendly_number,
    STATE(20), 1,
      aux_sym_switch_repeat1,
    STATE(43), 1,
      sym_comment,
    STATE(77), 1,
      sym_identifier,
    STATE(80), 1,
      sym__double_quote_string,
    STATE(86), 1,
      sym_integer,
    STATE(112), 1,
      sym__single_quote_string,
    STATE(185), 1,
      sym_switch_condition,
    STATE(273), 1,
      sym_binary_expression,
    STATE(274), 1,
      sym_literal,
    STATE(283), 1,
      sym__expression,
    STATE(437), 1,
      sym__alias_identifier,
    STATE(88), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(102), 2,
      sym__literal_string,
      sym_decimal_number,
    STATE(109), 2,
      sym__double_f_string,
      sym__triple_f_string,
    ACTIONS(17), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(113), 6,
      sym_f_string,
      sym_s_string,
      sym_field,
      sym_date,
      sym_time,
      sym_timestamp,
  [4291] = 30,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(23), 1,
      anon_sym_LPAREN,
    ACTIONS(29), 1,
      anon_sym_DASH,
    ACTIONS(31), 1,
      anon_sym_DQUOTE,
    ACTIONS(33), 1,
      anon_sym_SQUOTE,
    ACTIONS(35), 1,
      anon_sym_f_DQUOTE,
    ACTIONS(37), 1,
      anon_sym_f_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(39), 1,
      anon_sym_s_DQUOTE,
    ACTIONS(41), 1,
      anon_sym_s_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(43), 1,
      sym__natural_number,
    ACTIONS(45), 1,
      anon_sym__,
    ACTIONS(47), 1,
      anon_sym_DOT,
    ACTIONS(49), 1,
      anon_sym_BQUOTE,
    ACTIONS(51), 1,
      sym__identifier,
    ACTIONS(53), 1,
      anon_sym_AT,
    STATE(13), 1,
      aux_sym__friendly_number,
    STATE(44), 1,
      sym_comment,
    STATE(77), 1,
      sym_identifier,
    STATE(80), 1,
      sym__double_quote_string,
    STATE(86), 1,
      sym_integer,
    STATE(112), 1,
      sym__single_quote_string,
    STATE(178), 1,
      sym_assignment,
    STATE(189), 1,
      sym__expression,
    STATE(401), 1,
      sym_term,
    STATE(437), 1,
      sym__alias_identifier,
    STATE(88), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(102), 2,
      sym__literal_string,
      sym_decimal_number,
    STATE(109), 2,
      sym__double_f_string,
      sym__triple_f_string,
    ACTIONS(17), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(113), 8,
      sym_literal,
      sym_f_string,
      sym_s_string,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [4394] = 29,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(23), 1,
      anon_sym_LPAREN,
    ACTIONS(29), 1,
      anon_sym_DASH,
    ACTIONS(31), 1,
      anon_sym_DQUOTE,
    ACTIONS(33), 1,
      anon_sym_SQUOTE,
    ACTIONS(35), 1,
      anon_sym_f_DQUOTE,
    ACTIONS(37), 1,
      anon_sym_f_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(39), 1,
      anon_sym_s_DQUOTE,
    ACTIONS(41), 1,
      anon_sym_s_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(43), 1,
      sym__natural_number,
    ACTIONS(45), 1,
      anon_sym__,
    ACTIONS(47), 1,
      anon_sym_DOT,
    ACTIONS(49), 1,
      anon_sym_BQUOTE,
    ACTIONS(51), 1,
      sym__identifier,
    ACTIONS(53), 1,
      anon_sym_AT,
    STATE(13), 1,
      aux_sym__friendly_number,
    STATE(45), 1,
      sym_comment,
    STATE(77), 1,
      sym_identifier,
    STATE(80), 1,
      sym__double_quote_string,
    STATE(86), 1,
      sym_integer,
    STATE(112), 1,
      sym__single_quote_string,
    STATE(254), 1,
      sym__expression,
    STATE(437), 1,
      sym__alias_identifier,
    ACTIONS(249), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
    STATE(88), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(102), 2,
      sym__literal_string,
      sym_decimal_number,
    STATE(109), 2,
      sym__double_f_string,
      sym__triple_f_string,
    ACTIONS(17), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(113), 8,
      sym_literal,
      sym_f_string,
      sym_s_string,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [4495] = 30,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(23), 1,
      anon_sym_LPAREN,
    ACTIONS(29), 1,
      anon_sym_DASH,
    ACTIONS(31), 1,
      anon_sym_DQUOTE,
    ACTIONS(33), 1,
      anon_sym_SQUOTE,
    ACTIONS(35), 1,
      anon_sym_f_DQUOTE,
    ACTIONS(37), 1,
      anon_sym_f_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(39), 1,
      anon_sym_s_DQUOTE,
    ACTIONS(41), 1,
      anon_sym_s_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(43), 1,
      sym__natural_number,
    ACTIONS(45), 1,
      anon_sym__,
    ACTIONS(47), 1,
      anon_sym_DOT,
    ACTIONS(49), 1,
      anon_sym_BQUOTE,
    ACTIONS(51), 1,
      sym__identifier,
    ACTIONS(53), 1,
      anon_sym_AT,
    STATE(13), 1,
      aux_sym__friendly_number,
    STATE(46), 1,
      sym_comment,
    STATE(77), 1,
      sym_identifier,
    STATE(80), 1,
      sym__double_quote_string,
    STATE(86), 1,
      sym_integer,
    STATE(112), 1,
      sym__single_quote_string,
    STATE(178), 1,
      sym_assignment,
    STATE(189), 1,
      sym__expression,
    STATE(437), 1,
      sym__alias_identifier,
    STATE(460), 1,
      sym_term,
    STATE(88), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(102), 2,
      sym__literal_string,
      sym_decimal_number,
    STATE(109), 2,
      sym__double_f_string,
      sym__triple_f_string,
    ACTIONS(17), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(113), 8,
      sym_literal,
      sym_f_string,
      sym_s_string,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [4598] = 30,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(29), 1,
      anon_sym_DASH,
    ACTIONS(31), 1,
      anon_sym_DQUOTE,
    ACTIONS(33), 1,
      anon_sym_SQUOTE,
    ACTIONS(35), 1,
      anon_sym_f_DQUOTE,
    ACTIONS(37), 1,
      anon_sym_f_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(39), 1,
      anon_sym_s_DQUOTE,
    ACTIONS(41), 1,
      anon_sym_s_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(43), 1,
      sym__natural_number,
    ACTIONS(45), 1,
      anon_sym__,
    ACTIONS(47), 1,
      anon_sym_DOT,
    ACTIONS(49), 1,
      anon_sym_BQUOTE,
    ACTIONS(51), 1,
      sym__identifier,
    ACTIONS(53), 1,
      anon_sym_AT,
    ACTIONS(225), 1,
      anon_sym_LPAREN,
    STATE(13), 1,
      aux_sym__friendly_number,
    STATE(47), 1,
      sym_comment,
    STATE(77), 1,
      sym_identifier,
    STATE(80), 1,
      sym__double_quote_string,
    STATE(86), 1,
      sym_integer,
    STATE(112), 1,
      sym__single_quote_string,
    STATE(178), 1,
      sym_assignment,
    STATE(189), 1,
      sym__expression,
    STATE(399), 1,
      sym_term,
    STATE(437), 1,
      sym__alias_identifier,
    STATE(88), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(102), 2,
      sym__literal_string,
      sym_decimal_number,
    STATE(109), 2,
      sym__double_f_string,
      sym__triple_f_string,
    ACTIONS(17), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(113), 8,
      sym_literal,
      sym_f_string,
      sym_s_string,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [4701] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(48), 1,
      sym_comment,
    ACTIONS(251), 16,
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
      anon_sym_PIPE,
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
  [4752] = 30,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(23), 1,
      anon_sym_LPAREN,
    ACTIONS(29), 1,
      anon_sym_DASH,
    ACTIONS(31), 1,
      anon_sym_DQUOTE,
    ACTIONS(33), 1,
      anon_sym_SQUOTE,
    ACTIONS(35), 1,
      anon_sym_f_DQUOTE,
    ACTIONS(37), 1,
      anon_sym_f_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(39), 1,
      anon_sym_s_DQUOTE,
    ACTIONS(41), 1,
      anon_sym_s_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(43), 1,
      sym__natural_number,
    ACTIONS(45), 1,
      anon_sym__,
    ACTIONS(47), 1,
      anon_sym_DOT,
    ACTIONS(49), 1,
      anon_sym_BQUOTE,
    ACTIONS(51), 1,
      sym__identifier,
    ACTIONS(53), 1,
      anon_sym_AT,
    ACTIONS(255), 1,
      anon_sym_RBRACK,
    STATE(13), 1,
      aux_sym__friendly_number,
    STATE(49), 1,
      sym_comment,
    STATE(77), 1,
      sym_identifier,
    STATE(80), 1,
      sym__double_quote_string,
    STATE(86), 1,
      sym_integer,
    STATE(112), 1,
      sym__single_quote_string,
    STATE(255), 1,
      sym_binary_expression,
    STATE(283), 1,
      sym__expression,
    STATE(437), 1,
      sym__alias_identifier,
    STATE(88), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(102), 2,
      sym__literal_string,
      sym_decimal_number,
    STATE(109), 2,
      sym__double_f_string,
      sym__triple_f_string,
    ACTIONS(17), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(113), 7,
      sym_literal,
      sym_f_string,
      sym_s_string,
      sym_field,
      sym_date,
      sym_time,
      sym_timestamp,
  [4854] = 9,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(261), 1,
      anon_sym_DASH,
    ACTIONS(263), 1,
      anon_sym_PLUS,
    ACTIONS(265), 1,
      anon_sym_Z,
    STATE(50), 1,
      sym_comment,
    STATE(105), 1,
      sym_timezone,
    STATE(434), 1,
      sym_direction,
    ACTIONS(259), 4,
      sym_keyword_from,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(257), 30,
      ts_builtin_sym_end,
      sym_keyword_filter,
      sym_keyword_derive,
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
      anon_sym_PIPE,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_QMARK_QMARK,
  [4914] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(51), 1,
      sym_comment,
    ACTIONS(247), 5,
      sym_keyword_from,
      anon_sym_EQ,
      anon_sym_DASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(245), 34,
      ts_builtin_sym_end,
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
      anon_sym_PIPE,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_QMARK_QMARK,
  [4964] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(271), 1,
      anon_sym_COLON,
    ACTIONS(273), 1,
      anon_sym_DOT,
    STATE(52), 1,
      sym_comment,
    ACTIONS(269), 5,
      sym_keyword_from,
      anon_sym_EQ,
      anon_sym_DASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(267), 32,
      ts_builtin_sym_end,
      sym_keyword_filter,
      sym_keyword_derive,
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
      anon_sym_PIPE,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_QMARK_QMARK,
      anon_sym_Z,
  [5018] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(53), 1,
      sym_comment,
    ACTIONS(253), 5,
      sym_keyword_from,
      anon_sym_EQ,
      anon_sym_DASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(251), 34,
      ts_builtin_sym_end,
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
      anon_sym_PIPE,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_QMARK_QMARK,
  [5068] = 29,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(29), 1,
      anon_sym_DASH,
    ACTIONS(31), 1,
      anon_sym_DQUOTE,
    ACTIONS(33), 1,
      anon_sym_SQUOTE,
    ACTIONS(35), 1,
      anon_sym_f_DQUOTE,
    ACTIONS(37), 1,
      anon_sym_f_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(39), 1,
      anon_sym_s_DQUOTE,
    ACTIONS(41), 1,
      anon_sym_s_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(43), 1,
      sym__natural_number,
    ACTIONS(45), 1,
      anon_sym__,
    ACTIONS(47), 1,
      anon_sym_DOT,
    ACTIONS(49), 1,
      anon_sym_BQUOTE,
    ACTIONS(51), 1,
      sym__identifier,
    ACTIONS(53), 1,
      anon_sym_AT,
    ACTIONS(275), 1,
      anon_sym_LPAREN,
    STATE(13), 1,
      aux_sym__friendly_number,
    STATE(54), 1,
      sym_comment,
    STATE(77), 1,
      sym_identifier,
    STATE(80), 1,
      sym__double_quote_string,
    STATE(86), 1,
      sym_integer,
    STATE(112), 1,
      sym__single_quote_string,
    STATE(119), 1,
      sym__expression,
    STATE(217), 1,
      sym__boolean_expression,
    STATE(437), 1,
      sym__alias_identifier,
    STATE(88), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(102), 2,
      sym__literal_string,
      sym_decimal_number,
    STATE(109), 2,
      sym__double_f_string,
      sym__triple_f_string,
    ACTIONS(17), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(113), 8,
      sym_literal,
      sym_f_string,
      sym_s_string,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [5168] = 30,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(23), 1,
      anon_sym_LPAREN,
    ACTIONS(29), 1,
      anon_sym_DASH,
    ACTIONS(31), 1,
      anon_sym_DQUOTE,
    ACTIONS(33), 1,
      anon_sym_SQUOTE,
    ACTIONS(35), 1,
      anon_sym_f_DQUOTE,
    ACTIONS(37), 1,
      anon_sym_f_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(39), 1,
      anon_sym_s_DQUOTE,
    ACTIONS(41), 1,
      anon_sym_s_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(43), 1,
      sym__natural_number,
    ACTIONS(45), 1,
      anon_sym__,
    ACTIONS(47), 1,
      anon_sym_DOT,
    ACTIONS(49), 1,
      anon_sym_BQUOTE,
    ACTIONS(51), 1,
      sym__identifier,
    ACTIONS(53), 1,
      anon_sym_AT,
    ACTIONS(277), 1,
      anon_sym_RBRACK,
    STATE(13), 1,
      aux_sym__friendly_number,
    STATE(55), 1,
      sym_comment,
    STATE(77), 1,
      sym_identifier,
    STATE(80), 1,
      sym__double_quote_string,
    STATE(86), 1,
      sym_integer,
    STATE(112), 1,
      sym__single_quote_string,
    STATE(255), 1,
      sym_binary_expression,
    STATE(283), 1,
      sym__expression,
    STATE(437), 1,
      sym__alias_identifier,
    STATE(88), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(102), 2,
      sym__literal_string,
      sym_decimal_number,
    STATE(109), 2,
      sym__double_f_string,
      sym__triple_f_string,
    ACTIONS(17), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(113), 7,
      sym_literal,
      sym_f_string,
      sym_s_string,
      sym_field,
      sym_date,
      sym_time,
      sym_timestamp,
  [5270] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(283), 1,
      anon_sym_COLON,
    ACTIONS(285), 1,
      anon_sym_DOT,
    STATE(56), 1,
      sym_comment,
    ACTIONS(281), 5,
      sym_keyword_from,
      anon_sym_EQ,
      anon_sym_DASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(279), 32,
      ts_builtin_sym_end,
      sym_keyword_filter,
      sym_keyword_derive,
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
      anon_sym_PIPE,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_QMARK_QMARK,
      anon_sym_Z,
  [5324] = 28,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(23), 1,
      anon_sym_LPAREN,
    ACTIONS(29), 1,
      anon_sym_DASH,
    ACTIONS(31), 1,
      anon_sym_DQUOTE,
    ACTIONS(33), 1,
      anon_sym_SQUOTE,
    ACTIONS(35), 1,
      anon_sym_f_DQUOTE,
    ACTIONS(37), 1,
      anon_sym_f_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(39), 1,
      anon_sym_s_DQUOTE,
    ACTIONS(41), 1,
      anon_sym_s_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(43), 1,
      sym__natural_number,
    ACTIONS(45), 1,
      anon_sym__,
    ACTIONS(47), 1,
      anon_sym_DOT,
    ACTIONS(49), 1,
      anon_sym_BQUOTE,
    ACTIONS(51), 1,
      sym__identifier,
    ACTIONS(53), 1,
      anon_sym_AT,
    STATE(13), 1,
      aux_sym__friendly_number,
    STATE(57), 1,
      sym_comment,
    STATE(77), 1,
      sym_identifier,
    STATE(80), 1,
      sym__double_quote_string,
    STATE(86), 1,
      sym_integer,
    STATE(112), 1,
      sym__single_quote_string,
    STATE(266), 1,
      sym__expression,
    STATE(437), 1,
      sym__alias_identifier,
    STATE(88), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(102), 2,
      sym__literal_string,
      sym_decimal_number,
    STATE(109), 2,
      sym__double_f_string,
      sym__triple_f_string,
    ACTIONS(17), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(113), 8,
      sym_literal,
      sym_f_string,
      sym_s_string,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [5421] = 20,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(289), 1,
      anon_sym_DQUOTE,
    ACTIONS(291), 1,
      anon_sym_SQUOTE,
    ACTIONS(293), 1,
      sym__natural_number,
    ACTIONS(295), 1,
      anon_sym__,
    ACTIONS(297), 1,
      anon_sym_DOT,
    ACTIONS(299), 1,
      anon_sym_BQUOTE,
    ACTIONS(301), 1,
      sym__identifier,
    STATE(58), 1,
      sym_comment,
    STATE(149), 1,
      aux_sym_function_call_repeat1,
    STATE(257), 1,
      sym_identifier,
    STATE(258), 1,
      aux_sym__friendly_number,
    STATE(262), 1,
      sym_integer,
    STATE(270), 1,
      sym__call_parameter,
    STATE(276), 1,
      sym_literal,
    STATE(268), 2,
      sym__literal_string,
      sym_decimal_number,
    STATE(269), 2,
      sym__double_quote_string,
      sym__single_quote_string,
    ACTIONS(287), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    ACTIONS(61), 4,
      sym_keyword_and,
      sym_keyword_or,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(59), 14,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
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
  [5502] = 29,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(23), 1,
      anon_sym_LPAREN,
    ACTIONS(29), 1,
      anon_sym_DASH,
    ACTIONS(31), 1,
      anon_sym_DQUOTE,
    ACTIONS(33), 1,
      anon_sym_SQUOTE,
    ACTIONS(35), 1,
      anon_sym_f_DQUOTE,
    ACTIONS(37), 1,
      anon_sym_f_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(39), 1,
      anon_sym_s_DQUOTE,
    ACTIONS(41), 1,
      anon_sym_s_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(43), 1,
      sym__natural_number,
    ACTIONS(45), 1,
      anon_sym__,
    ACTIONS(47), 1,
      anon_sym_DOT,
    ACTIONS(49), 1,
      anon_sym_BQUOTE,
    ACTIONS(51), 1,
      sym__identifier,
    ACTIONS(53), 1,
      anon_sym_AT,
    STATE(13), 1,
      aux_sym__friendly_number,
    STATE(59), 1,
      sym_comment,
    STATE(77), 1,
      sym_identifier,
    STATE(80), 1,
      sym__double_quote_string,
    STATE(86), 1,
      sym_integer,
    STATE(112), 1,
      sym__single_quote_string,
    STATE(271), 1,
      sym_binary_expression,
    STATE(279), 1,
      sym__expression,
    STATE(437), 1,
      sym__alias_identifier,
    STATE(88), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(102), 2,
      sym__literal_string,
      sym_decimal_number,
    STATE(109), 2,
      sym__double_f_string,
      sym__triple_f_string,
    ACTIONS(17), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(113), 7,
      sym_literal,
      sym_f_string,
      sym_s_string,
      sym_field,
      sym_date,
      sym_time,
      sym_timestamp,
  [5601] = 29,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(23), 1,
      anon_sym_LPAREN,
    ACTIONS(29), 1,
      anon_sym_DASH,
    ACTIONS(31), 1,
      anon_sym_DQUOTE,
    ACTIONS(33), 1,
      anon_sym_SQUOTE,
    ACTIONS(35), 1,
      anon_sym_f_DQUOTE,
    ACTIONS(37), 1,
      anon_sym_f_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(39), 1,
      anon_sym_s_DQUOTE,
    ACTIONS(41), 1,
      anon_sym_s_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(43), 1,
      sym__natural_number,
    ACTIONS(45), 1,
      anon_sym__,
    ACTIONS(47), 1,
      anon_sym_DOT,
    ACTIONS(49), 1,
      anon_sym_BQUOTE,
    ACTIONS(51), 1,
      sym__identifier,
    ACTIONS(53), 1,
      anon_sym_AT,
    STATE(13), 1,
      aux_sym__friendly_number,
    STATE(60), 1,
      sym_comment,
    STATE(77), 1,
      sym_identifier,
    STATE(80), 1,
      sym__double_quote_string,
    STATE(86), 1,
      sym_integer,
    STATE(112), 1,
      sym__single_quote_string,
    STATE(255), 1,
      sym_binary_expression,
    STATE(283), 1,
      sym__expression,
    STATE(437), 1,
      sym__alias_identifier,
    STATE(88), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(102), 2,
      sym__literal_string,
      sym_decimal_number,
    STATE(109), 2,
      sym__double_f_string,
      sym__triple_f_string,
    ACTIONS(17), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(113), 7,
      sym_literal,
      sym_f_string,
      sym_s_string,
      sym_field,
      sym_date,
      sym_time,
      sym_timestamp,
  [5700] = 28,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(23), 1,
      anon_sym_LPAREN,
    ACTIONS(29), 1,
      anon_sym_DASH,
    ACTIONS(31), 1,
      anon_sym_DQUOTE,
    ACTIONS(33), 1,
      anon_sym_SQUOTE,
    ACTIONS(35), 1,
      anon_sym_f_DQUOTE,
    ACTIONS(37), 1,
      anon_sym_f_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(39), 1,
      anon_sym_s_DQUOTE,
    ACTIONS(41), 1,
      anon_sym_s_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(43), 1,
      sym__natural_number,
    ACTIONS(45), 1,
      anon_sym__,
    ACTIONS(47), 1,
      anon_sym_DOT,
    ACTIONS(49), 1,
      anon_sym_BQUOTE,
    ACTIONS(51), 1,
      sym__identifier,
    ACTIONS(53), 1,
      anon_sym_AT,
    STATE(13), 1,
      aux_sym__friendly_number,
    STATE(61), 1,
      sym_comment,
    STATE(77), 1,
      sym_identifier,
    STATE(80), 1,
      sym__double_quote_string,
    STATE(86), 1,
      sym_integer,
    STATE(112), 1,
      sym__single_quote_string,
    STATE(114), 1,
      sym__expression,
    STATE(437), 1,
      sym__alias_identifier,
    STATE(88), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(102), 2,
      sym__literal_string,
      sym_decimal_number,
    STATE(109), 2,
      sym__double_f_string,
      sym__triple_f_string,
    ACTIONS(17), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(113), 8,
      sym_literal,
      sym_f_string,
      sym_s_string,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [5797] = 28,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(23), 1,
      anon_sym_LPAREN,
    ACTIONS(29), 1,
      anon_sym_DASH,
    ACTIONS(31), 1,
      anon_sym_DQUOTE,
    ACTIONS(33), 1,
      anon_sym_SQUOTE,
    ACTIONS(35), 1,
      anon_sym_f_DQUOTE,
    ACTIONS(37), 1,
      anon_sym_f_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(39), 1,
      anon_sym_s_DQUOTE,
    ACTIONS(41), 1,
      anon_sym_s_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(43), 1,
      sym__natural_number,
    ACTIONS(45), 1,
      anon_sym__,
    ACTIONS(47), 1,
      anon_sym_DOT,
    ACTIONS(49), 1,
      anon_sym_BQUOTE,
    ACTIONS(51), 1,
      sym__identifier,
    ACTIONS(53), 1,
      anon_sym_AT,
    STATE(13), 1,
      aux_sym__friendly_number,
    STATE(62), 1,
      sym_comment,
    STATE(77), 1,
      sym_identifier,
    STATE(80), 1,
      sym__double_quote_string,
    STATE(86), 1,
      sym_integer,
    STATE(107), 1,
      sym__expression,
    STATE(112), 1,
      sym__single_quote_string,
    STATE(437), 1,
      sym__alias_identifier,
    STATE(88), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(102), 2,
      sym__literal_string,
      sym_decimal_number,
    STATE(109), 2,
      sym__double_f_string,
      sym__triple_f_string,
    ACTIONS(17), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(113), 8,
      sym_literal,
      sym_f_string,
      sym_s_string,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [5894] = 28,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(23), 1,
      anon_sym_LPAREN,
    ACTIONS(29), 1,
      anon_sym_DASH,
    ACTIONS(31), 1,
      anon_sym_DQUOTE,
    ACTIONS(33), 1,
      anon_sym_SQUOTE,
    ACTIONS(35), 1,
      anon_sym_f_DQUOTE,
    ACTIONS(37), 1,
      anon_sym_f_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(39), 1,
      anon_sym_s_DQUOTE,
    ACTIONS(41), 1,
      anon_sym_s_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(43), 1,
      sym__natural_number,
    ACTIONS(45), 1,
      anon_sym__,
    ACTIONS(47), 1,
      anon_sym_DOT,
    ACTIONS(49), 1,
      anon_sym_BQUOTE,
    ACTIONS(51), 1,
      sym__identifier,
    ACTIONS(53), 1,
      anon_sym_AT,
    STATE(13), 1,
      aux_sym__friendly_number,
    STATE(63), 1,
      sym_comment,
    STATE(77), 1,
      sym_identifier,
    STATE(80), 1,
      sym__double_quote_string,
    STATE(86), 1,
      sym_integer,
    STATE(110), 1,
      sym__expression,
    STATE(112), 1,
      sym__single_quote_string,
    STATE(437), 1,
      sym__alias_identifier,
    STATE(88), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(102), 2,
      sym__literal_string,
      sym_decimal_number,
    STATE(109), 2,
      sym__double_f_string,
      sym__triple_f_string,
    ACTIONS(17), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(113), 8,
      sym_literal,
      sym_f_string,
      sym_s_string,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [5991] = 28,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(23), 1,
      anon_sym_LPAREN,
    ACTIONS(29), 1,
      anon_sym_DASH,
    ACTIONS(31), 1,
      anon_sym_DQUOTE,
    ACTIONS(33), 1,
      anon_sym_SQUOTE,
    ACTIONS(35), 1,
      anon_sym_f_DQUOTE,
    ACTIONS(37), 1,
      anon_sym_f_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(39), 1,
      anon_sym_s_DQUOTE,
    ACTIONS(41), 1,
      anon_sym_s_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(43), 1,
      sym__natural_number,
    ACTIONS(45), 1,
      anon_sym__,
    ACTIONS(47), 1,
      anon_sym_DOT,
    ACTIONS(49), 1,
      anon_sym_BQUOTE,
    ACTIONS(51), 1,
      sym__identifier,
    ACTIONS(53), 1,
      anon_sym_AT,
    STATE(13), 1,
      aux_sym__friendly_number,
    STATE(64), 1,
      sym_comment,
    STATE(77), 1,
      sym_identifier,
    STATE(80), 1,
      sym__double_quote_string,
    STATE(86), 1,
      sym_integer,
    STATE(111), 1,
      sym__expression,
    STATE(112), 1,
      sym__single_quote_string,
    STATE(437), 1,
      sym__alias_identifier,
    STATE(88), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(102), 2,
      sym__literal_string,
      sym_decimal_number,
    STATE(109), 2,
      sym__double_f_string,
      sym__triple_f_string,
    ACTIONS(17), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(113), 8,
      sym_literal,
      sym_f_string,
      sym_s_string,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [6088] = 28,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(23), 1,
      anon_sym_LPAREN,
    ACTIONS(29), 1,
      anon_sym_DASH,
    ACTIONS(31), 1,
      anon_sym_DQUOTE,
    ACTIONS(33), 1,
      anon_sym_SQUOTE,
    ACTIONS(35), 1,
      anon_sym_f_DQUOTE,
    ACTIONS(37), 1,
      anon_sym_f_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(39), 1,
      anon_sym_s_DQUOTE,
    ACTIONS(41), 1,
      anon_sym_s_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(43), 1,
      sym__natural_number,
    ACTIONS(45), 1,
      anon_sym__,
    ACTIONS(47), 1,
      anon_sym_DOT,
    ACTIONS(49), 1,
      anon_sym_BQUOTE,
    ACTIONS(51), 1,
      sym__identifier,
    ACTIONS(53), 1,
      anon_sym_AT,
    STATE(13), 1,
      aux_sym__friendly_number,
    STATE(65), 1,
      sym_comment,
    STATE(77), 1,
      sym_identifier,
    STATE(80), 1,
      sym__double_quote_string,
    STATE(86), 1,
      sym_integer,
    STATE(96), 1,
      sym__expression,
    STATE(112), 1,
      sym__single_quote_string,
    STATE(437), 1,
      sym__alias_identifier,
    STATE(88), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(102), 2,
      sym__literal_string,
      sym_decimal_number,
    STATE(109), 2,
      sym__double_f_string,
      sym__triple_f_string,
    ACTIONS(17), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(113), 8,
      sym_literal,
      sym_f_string,
      sym_s_string,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [6185] = 28,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(23), 1,
      anon_sym_LPAREN,
    ACTIONS(29), 1,
      anon_sym_DASH,
    ACTIONS(31), 1,
      anon_sym_DQUOTE,
    ACTIONS(33), 1,
      anon_sym_SQUOTE,
    ACTIONS(35), 1,
      anon_sym_f_DQUOTE,
    ACTIONS(37), 1,
      anon_sym_f_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(39), 1,
      anon_sym_s_DQUOTE,
    ACTIONS(41), 1,
      anon_sym_s_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(43), 1,
      sym__natural_number,
    ACTIONS(45), 1,
      anon_sym__,
    ACTIONS(47), 1,
      anon_sym_DOT,
    ACTIONS(49), 1,
      anon_sym_BQUOTE,
    ACTIONS(51), 1,
      sym__identifier,
    ACTIONS(53), 1,
      anon_sym_AT,
    STATE(13), 1,
      aux_sym__friendly_number,
    STATE(66), 1,
      sym_comment,
    STATE(77), 1,
      sym_identifier,
    STATE(80), 1,
      sym__double_quote_string,
    STATE(86), 1,
      sym_integer,
    STATE(103), 1,
      sym__expression,
    STATE(112), 1,
      sym__single_quote_string,
    STATE(437), 1,
      sym__alias_identifier,
    STATE(88), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(102), 2,
      sym__literal_string,
      sym_decimal_number,
    STATE(109), 2,
      sym__double_f_string,
      sym__triple_f_string,
    ACTIONS(17), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(113), 8,
      sym_literal,
      sym_f_string,
      sym_s_string,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [6282] = 28,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(23), 1,
      anon_sym_LPAREN,
    ACTIONS(29), 1,
      anon_sym_DASH,
    ACTIONS(31), 1,
      anon_sym_DQUOTE,
    ACTIONS(33), 1,
      anon_sym_SQUOTE,
    ACTIONS(35), 1,
      anon_sym_f_DQUOTE,
    ACTIONS(37), 1,
      anon_sym_f_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(39), 1,
      anon_sym_s_DQUOTE,
    ACTIONS(41), 1,
      anon_sym_s_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(43), 1,
      sym__natural_number,
    ACTIONS(45), 1,
      anon_sym__,
    ACTIONS(47), 1,
      anon_sym_DOT,
    ACTIONS(49), 1,
      anon_sym_BQUOTE,
    ACTIONS(51), 1,
      sym__identifier,
    ACTIONS(53), 1,
      anon_sym_AT,
    STATE(13), 1,
      aux_sym__friendly_number,
    STATE(67), 1,
      sym_comment,
    STATE(77), 1,
      sym_identifier,
    STATE(80), 1,
      sym__double_quote_string,
    STATE(86), 1,
      sym_integer,
    STATE(104), 1,
      sym__expression,
    STATE(112), 1,
      sym__single_quote_string,
    STATE(437), 1,
      sym__alias_identifier,
    STATE(88), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(102), 2,
      sym__literal_string,
      sym_decimal_number,
    STATE(109), 2,
      sym__double_f_string,
      sym__triple_f_string,
    ACTIONS(17), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(113), 8,
      sym_literal,
      sym_f_string,
      sym_s_string,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [6379] = 28,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(23), 1,
      anon_sym_LPAREN,
    ACTIONS(29), 1,
      anon_sym_DASH,
    ACTIONS(31), 1,
      anon_sym_DQUOTE,
    ACTIONS(33), 1,
      anon_sym_SQUOTE,
    ACTIONS(35), 1,
      anon_sym_f_DQUOTE,
    ACTIONS(37), 1,
      anon_sym_f_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(39), 1,
      anon_sym_s_DQUOTE,
    ACTIONS(41), 1,
      anon_sym_s_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(43), 1,
      sym__natural_number,
    ACTIONS(45), 1,
      anon_sym__,
    ACTIONS(47), 1,
      anon_sym_DOT,
    ACTIONS(49), 1,
      anon_sym_BQUOTE,
    ACTIONS(51), 1,
      sym__identifier,
    ACTIONS(53), 1,
      anon_sym_AT,
    STATE(13), 1,
      aux_sym__friendly_number,
    STATE(68), 1,
      sym_comment,
    STATE(77), 1,
      sym_identifier,
    STATE(80), 1,
      sym__double_quote_string,
    STATE(86), 1,
      sym_integer,
    STATE(101), 1,
      sym__expression,
    STATE(112), 1,
      sym__single_quote_string,
    STATE(437), 1,
      sym__alias_identifier,
    STATE(88), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(102), 2,
      sym__literal_string,
      sym_decimal_number,
    STATE(109), 2,
      sym__double_f_string,
      sym__triple_f_string,
    ACTIONS(17), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(113), 8,
      sym_literal,
      sym_f_string,
      sym_s_string,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [6476] = 29,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(23), 1,
      anon_sym_LPAREN,
    ACTIONS(29), 1,
      anon_sym_DASH,
    ACTIONS(31), 1,
      anon_sym_DQUOTE,
    ACTIONS(33), 1,
      anon_sym_SQUOTE,
    ACTIONS(35), 1,
      anon_sym_f_DQUOTE,
    ACTIONS(37), 1,
      anon_sym_f_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(39), 1,
      anon_sym_s_DQUOTE,
    ACTIONS(41), 1,
      anon_sym_s_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(43), 1,
      sym__natural_number,
    ACTIONS(45), 1,
      anon_sym__,
    ACTIONS(47), 1,
      anon_sym_DOT,
    ACTIONS(49), 1,
      anon_sym_BQUOTE,
    ACTIONS(51), 1,
      sym__identifier,
    ACTIONS(53), 1,
      anon_sym_AT,
    STATE(13), 1,
      aux_sym__friendly_number,
    STATE(69), 1,
      sym_comment,
    STATE(77), 1,
      sym_identifier,
    STATE(80), 1,
      sym__double_quote_string,
    STATE(86), 1,
      sym_integer,
    STATE(112), 1,
      sym__single_quote_string,
    STATE(277), 1,
      sym_binary_expression,
    STATE(285), 1,
      sym__expression,
    STATE(437), 1,
      sym__alias_identifier,
    STATE(88), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(102), 2,
      sym__literal_string,
      sym_decimal_number,
    STATE(109), 2,
      sym__double_f_string,
      sym__triple_f_string,
    ACTIONS(17), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(113), 7,
      sym_literal,
      sym_f_string,
      sym_s_string,
      sym_field,
      sym_date,
      sym_time,
      sym_timestamp,
  [6575] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(307), 1,
      anon_sym_DOT,
    STATE(70), 1,
      sym_comment,
    ACTIONS(305), 5,
      sym_keyword_from,
      anon_sym_EQ,
      anon_sym_DASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(303), 32,
      ts_builtin_sym_end,
      sym_keyword_filter,
      sym_keyword_derive,
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
      anon_sym_PIPE,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_QMARK_QMARK,
      anon_sym_Z,
  [6626] = 29,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(23), 1,
      anon_sym_LPAREN,
    ACTIONS(29), 1,
      anon_sym_DASH,
    ACTIONS(31), 1,
      anon_sym_DQUOTE,
    ACTIONS(33), 1,
      anon_sym_SQUOTE,
    ACTIONS(35), 1,
      anon_sym_f_DQUOTE,
    ACTIONS(37), 1,
      anon_sym_f_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(39), 1,
      anon_sym_s_DQUOTE,
    ACTIONS(41), 1,
      anon_sym_s_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(43), 1,
      sym__natural_number,
    ACTIONS(45), 1,
      anon_sym__,
    ACTIONS(47), 1,
      anon_sym_DOT,
    ACTIONS(49), 1,
      anon_sym_BQUOTE,
    ACTIONS(51), 1,
      sym__identifier,
    ACTIONS(53), 1,
      anon_sym_AT,
    STATE(13), 1,
      aux_sym__friendly_number,
    STATE(71), 1,
      sym_comment,
    STATE(77), 1,
      sym_identifier,
    STATE(80), 1,
      sym__double_quote_string,
    STATE(86), 1,
      sym_integer,
    STATE(112), 1,
      sym__single_quote_string,
    STATE(283), 1,
      sym__expression,
    STATE(437), 1,
      sym__alias_identifier,
    STATE(88), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(102), 2,
      sym__literal_string,
      sym_decimal_number,
    STATE(109), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(187), 2,
      sym_s_string,
      sym_binary_expression,
    ACTIONS(17), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(113), 6,
      sym_literal,
      sym_f_string,
      sym_field,
      sym_date,
      sym_time,
      sym_timestamp,
  [6725] = 28,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(23), 1,
      anon_sym_LPAREN,
    ACTIONS(29), 1,
      anon_sym_DASH,
    ACTIONS(31), 1,
      anon_sym_DQUOTE,
    ACTIONS(33), 1,
      anon_sym_SQUOTE,
    ACTIONS(35), 1,
      anon_sym_f_DQUOTE,
    ACTIONS(37), 1,
      anon_sym_f_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(39), 1,
      anon_sym_s_DQUOTE,
    ACTIONS(41), 1,
      anon_sym_s_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(43), 1,
      sym__natural_number,
    ACTIONS(45), 1,
      anon_sym__,
    ACTIONS(47), 1,
      anon_sym_DOT,
    ACTIONS(49), 1,
      anon_sym_BQUOTE,
    ACTIONS(51), 1,
      sym__identifier,
    ACTIONS(53), 1,
      anon_sym_AT,
    STATE(13), 1,
      aux_sym__friendly_number,
    STATE(72), 1,
      sym_comment,
    STATE(77), 1,
      sym_identifier,
    STATE(80), 1,
      sym__double_quote_string,
    STATE(86), 1,
      sym_integer,
    STATE(112), 1,
      sym__single_quote_string,
    STATE(253), 1,
      sym__expression,
    STATE(437), 1,
      sym__alias_identifier,
    STATE(88), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(102), 2,
      sym__literal_string,
      sym_decimal_number,
    STATE(109), 2,
      sym__double_f_string,
      sym__triple_f_string,
    ACTIONS(17), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(113), 8,
      sym_literal,
      sym_f_string,
      sym_s_string,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [6822] = 28,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(23), 1,
      anon_sym_LPAREN,
    ACTIONS(29), 1,
      anon_sym_DASH,
    ACTIONS(31), 1,
      anon_sym_DQUOTE,
    ACTIONS(33), 1,
      anon_sym_SQUOTE,
    ACTIONS(35), 1,
      anon_sym_f_DQUOTE,
    ACTIONS(37), 1,
      anon_sym_f_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(39), 1,
      anon_sym_s_DQUOTE,
    ACTIONS(41), 1,
      anon_sym_s_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(43), 1,
      sym__natural_number,
    ACTIONS(45), 1,
      anon_sym__,
    ACTIONS(47), 1,
      anon_sym_DOT,
    ACTIONS(49), 1,
      anon_sym_BQUOTE,
    ACTIONS(51), 1,
      sym__identifier,
    ACTIONS(53), 1,
      anon_sym_AT,
    STATE(13), 1,
      aux_sym__friendly_number,
    STATE(73), 1,
      sym_comment,
    STATE(77), 1,
      sym_identifier,
    STATE(80), 1,
      sym__double_quote_string,
    STATE(86), 1,
      sym_integer,
    STATE(112), 1,
      sym__single_quote_string,
    STATE(267), 1,
      sym__expression,
    STATE(437), 1,
      sym__alias_identifier,
    STATE(88), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(102), 2,
      sym__literal_string,
      sym_decimal_number,
    STATE(109), 2,
      sym__double_f_string,
      sym__triple_f_string,
    ACTIONS(17), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(113), 8,
      sym_literal,
      sym_f_string,
      sym_s_string,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [6919] = 29,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(23), 1,
      anon_sym_LPAREN,
    ACTIONS(29), 1,
      anon_sym_DASH,
    ACTIONS(31), 1,
      anon_sym_DQUOTE,
    ACTIONS(33), 1,
      anon_sym_SQUOTE,
    ACTIONS(35), 1,
      anon_sym_f_DQUOTE,
    ACTIONS(37), 1,
      anon_sym_f_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(39), 1,
      anon_sym_s_DQUOTE,
    ACTIONS(41), 1,
      anon_sym_s_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(43), 1,
      sym__natural_number,
    ACTIONS(45), 1,
      anon_sym__,
    ACTIONS(47), 1,
      anon_sym_DOT,
    ACTIONS(49), 1,
      anon_sym_BQUOTE,
    ACTIONS(51), 1,
      sym__identifier,
    ACTIONS(53), 1,
      anon_sym_AT,
    STATE(13), 1,
      aux_sym__friendly_number,
    STATE(74), 1,
      sym_comment,
    STATE(77), 1,
      sym_identifier,
    STATE(80), 1,
      sym__double_quote_string,
    STATE(86), 1,
      sym_integer,
    STATE(112), 1,
      sym__single_quote_string,
    STATE(280), 1,
      sym_binary_expression,
    STATE(285), 1,
      sym__expression,
    STATE(437), 1,
      sym__alias_identifier,
    STATE(88), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(102), 2,
      sym__literal_string,
      sym_decimal_number,
    STATE(109), 2,
      sym__double_f_string,
      sym__triple_f_string,
    ACTIONS(17), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(113), 7,
      sym_literal,
      sym_f_string,
      sym_s_string,
      sym_field,
      sym_date,
      sym_time,
      sym_timestamp,
  [7018] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(75), 1,
      sym_comment,
    ACTIONS(311), 5,
      sym_keyword_from,
      anon_sym_EQ,
      anon_sym_DASH,
      anon_sym_GT,
      anon_sym_LT,
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
      anon_sym_PIPE,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_QMARK_QMARK,
  [7067] = 29,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(23), 1,
      anon_sym_LPAREN,
    ACTIONS(29), 1,
      anon_sym_DASH,
    ACTIONS(31), 1,
      anon_sym_DQUOTE,
    ACTIONS(33), 1,
      anon_sym_SQUOTE,
    ACTIONS(35), 1,
      anon_sym_f_DQUOTE,
    ACTIONS(37), 1,
      anon_sym_f_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(39), 1,
      anon_sym_s_DQUOTE,
    ACTIONS(41), 1,
      anon_sym_s_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(43), 1,
      sym__natural_number,
    ACTIONS(45), 1,
      anon_sym__,
    ACTIONS(47), 1,
      anon_sym_DOT,
    ACTIONS(49), 1,
      anon_sym_BQUOTE,
    ACTIONS(51), 1,
      sym__identifier,
    ACTIONS(53), 1,
      anon_sym_AT,
    STATE(13), 1,
      aux_sym__friendly_number,
    STATE(76), 1,
      sym_comment,
    STATE(77), 1,
      sym_identifier,
    STATE(80), 1,
      sym__double_quote_string,
    STATE(86), 1,
      sym_integer,
    STATE(112), 1,
      sym__single_quote_string,
    STATE(282), 1,
      sym_binary_expression,
    STATE(285), 1,
      sym__expression,
    STATE(437), 1,
      sym__alias_identifier,
    STATE(88), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(102), 2,
      sym__literal_string,
      sym_decimal_number,
    STATE(109), 2,
      sym__double_f_string,
      sym__triple_f_string,
    ACTIONS(17), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(113), 7,
      sym_literal,
      sym_f_string,
      sym_s_string,
      sym_field,
      sym_date,
      sym_time,
      sym_timestamp,
  [7166] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(313), 1,
      anon_sym_DOT,
    STATE(77), 1,
      sym_comment,
    ACTIONS(61), 5,
      sym_keyword_from,
      anon_sym_EQ,
      anon_sym_DASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(59), 31,
      ts_builtin_sym_end,
      sym_keyword_filter,
      sym_keyword_derive,
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
      anon_sym_PIPE,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_QMARK_QMARK,
  [7216] = 21,
    ACTIONS(3), 1,
      anon_sym_POUND,
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
      anon_sym_BQUOTE,
    ACTIONS(77), 1,
      sym__identifier,
    ACTIONS(315), 1,
      ts_builtin_sym_end,
    ACTIONS(319), 1,
      anon_sym_DASH,
    STATE(78), 1,
      sym_comment,
    STATE(85), 1,
      aux_sym_function_call_repeat1,
    STATE(122), 1,
      sym_identifier,
    STATE(123), 1,
      aux_sym__friendly_number,
    STATE(128), 1,
      sym_integer,
    STATE(131), 1,
      sym__call_parameter,
    STATE(133), 1,
      sym_literal,
    STATE(130), 2,
      sym__double_quote_string,
      sym__single_quote_string,
    STATE(136), 2,
      sym__literal_string,
      sym_decimal_number,
    ACTIONS(63), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    ACTIONS(317), 15,
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
  [7298] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(325), 1,
      anon_sym_T,
    STATE(79), 1,
      sym_comment,
    ACTIONS(323), 5,
      sym_keyword_from,
      anon_sym_EQ,
      anon_sym_DASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(321), 31,
      ts_builtin_sym_end,
      sym_keyword_filter,
      sym_keyword_derive,
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
      anon_sym_PIPE,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_QMARK_QMARK,
  [7348] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(331), 1,
      anon_sym_DOT,
    STATE(80), 1,
      sym_comment,
    ACTIONS(329), 5,
      sym_keyword_from,
      anon_sym_EQ,
      anon_sym_DASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(327), 31,
      ts_builtin_sym_end,
      sym_keyword_filter,
      sym_keyword_derive,
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
      anon_sym_PIPE,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_QMARK_QMARK,
  [7398] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(81), 1,
      sym_comment,
    ACTIONS(305), 5,
      sym_keyword_from,
      anon_sym_EQ,
      anon_sym_DASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(303), 32,
      ts_builtin_sym_end,
      sym_keyword_filter,
      sym_keyword_derive,
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
      anon_sym_PIPE,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_QMARK_QMARK,
      anon_sym_Z,
  [7446] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(337), 1,
      sym__natural_number,
    STATE(82), 1,
      sym_comment,
    ACTIONS(335), 5,
      sym_keyword_from,
      anon_sym_EQ,
      anon_sym_DASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(333), 31,
      ts_builtin_sym_end,
      sym_keyword_filter,
      sym_keyword_derive,
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
      anon_sym_PIPE,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_QMARK_QMARK,
  [7496] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(83), 1,
      sym_comment,
    ACTIONS(269), 5,
      sym_keyword_from,
      anon_sym_EQ,
      anon_sym_DASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(267), 32,
      ts_builtin_sym_end,
      sym_keyword_filter,
      sym_keyword_derive,
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
      anon_sym_PIPE,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_QMARK_QMARK,
      anon_sym_Z,
  [7544] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(84), 1,
      sym_comment,
    ACTIONS(341), 5,
      sym_keyword_from,
      anon_sym_EQ,
      anon_sym_DASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(339), 32,
      ts_builtin_sym_end,
      sym_keyword_filter,
      sym_keyword_derive,
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
      anon_sym_PIPE,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_QMARK_QMARK,
      anon_sym_Z,
  [7592] = 20,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(343), 1,
      ts_builtin_sym_end,
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
      anon_sym_DOT,
    ACTIONS(368), 1,
      anon_sym_BQUOTE,
    ACTIONS(371), 1,
      sym__identifier,
    STATE(122), 1,
      sym_identifier,
    STATE(123), 1,
      aux_sym__friendly_number,
    STATE(128), 1,
      sym_integer,
    STATE(131), 1,
      sym__call_parameter,
    STATE(133), 1,
      sym_literal,
    STATE(85), 2,
      sym_comment,
      aux_sym_function_call_repeat1,
    STATE(130), 2,
      sym__double_quote_string,
      sym__single_quote_string,
    STATE(136), 2,
      sym__literal_string,
      sym_decimal_number,
    ACTIONS(347), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    ACTIONS(345), 15,
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
  [7672] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(378), 1,
      anon_sym_DOT,
    STATE(86), 1,
      sym_comment,
    ACTIONS(376), 5,
      sym_keyword_from,
      anon_sym_EQ,
      anon_sym_DASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(374), 31,
      ts_builtin_sym_end,
      sym_keyword_filter,
      sym_keyword_derive,
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
      anon_sym_PIPE,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_QMARK_QMARK,
  [7722] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(87), 1,
      sym_comment,
    ACTIONS(382), 5,
      sym_keyword_from,
      anon_sym_EQ,
      anon_sym_DASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(380), 31,
      ts_builtin_sym_end,
      sym_keyword_filter,
      sym_keyword_derive,
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
      anon_sym_PIPE,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_QMARK_QMARK,
  [7769] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(88), 1,
      sym_comment,
    ACTIONS(386), 5,
      sym_keyword_from,
      anon_sym_EQ,
      anon_sym_DASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(384), 31,
      ts_builtin_sym_end,
      sym_keyword_filter,
      sym_keyword_derive,
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
      anon_sym_PIPE,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_QMARK_QMARK,
  [7816] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(89), 1,
      sym_comment,
    ACTIONS(390), 5,
      sym_keyword_from,
      anon_sym_EQ,
      anon_sym_DASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(388), 31,
      ts_builtin_sym_end,
      sym_keyword_filter,
      sym_keyword_derive,
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
      anon_sym_PIPE,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_QMARK_QMARK,
  [7863] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(90), 1,
      sym_comment,
    ACTIONS(394), 5,
      sym_keyword_from,
      anon_sym_EQ,
      anon_sym_DASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(392), 31,
      ts_builtin_sym_end,
      sym_keyword_filter,
      sym_keyword_derive,
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
      anon_sym_PIPE,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_QMARK_QMARK,
  [7910] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(91), 1,
      sym_comment,
    ACTIONS(398), 5,
      sym_keyword_from,
      anon_sym_EQ,
      anon_sym_DASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(396), 31,
      ts_builtin_sym_end,
      sym_keyword_filter,
      sym_keyword_derive,
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
      anon_sym_PIPE,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_QMARK_QMARK,
  [7957] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(92), 1,
      sym_comment,
    ACTIONS(402), 5,
      sym_keyword_from,
      anon_sym_EQ,
      anon_sym_DASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(400), 31,
      ts_builtin_sym_end,
      sym_keyword_filter,
      sym_keyword_derive,
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
      anon_sym_PIPE,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_QMARK_QMARK,
  [8004] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(93), 1,
      sym_comment,
    ACTIONS(406), 5,
      sym_keyword_from,
      anon_sym_EQ,
      anon_sym_DASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(404), 31,
      ts_builtin_sym_end,
      sym_keyword_filter,
      sym_keyword_derive,
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
      anon_sym_PIPE,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_QMARK_QMARK,
  [8051] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(94), 1,
      sym_comment,
    ACTIONS(335), 5,
      sym_keyword_from,
      anon_sym_EQ,
      anon_sym_DASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(333), 31,
      ts_builtin_sym_end,
      sym_keyword_filter,
      sym_keyword_derive,
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
      anon_sym_PIPE,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_QMARK_QMARK,
  [8098] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(95), 1,
      sym_comment,
    ACTIONS(410), 5,
      sym_keyword_from,
      anon_sym_EQ,
      anon_sym_DASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(408), 31,
      ts_builtin_sym_end,
      sym_keyword_filter,
      sym_keyword_derive,
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
      anon_sym_PIPE,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_QMARK_QMARK,
  [8145] = 8,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(416), 1,
      anon_sym_DASH,
    ACTIONS(418), 1,
      anon_sym_PLUS,
    ACTIONS(422), 1,
      anon_sym_PIPE,
    STATE(96), 1,
      sym_comment,
    ACTIONS(420), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(414), 4,
      sym_keyword_from,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(412), 27,
      ts_builtin_sym_end,
      sym_keyword_filter,
      sym_keyword_derive,
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
  [8200] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(97), 1,
      sym_comment,
    ACTIONS(426), 5,
      sym_keyword_from,
      anon_sym_EQ,
      anon_sym_DASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(424), 31,
      ts_builtin_sym_end,
      sym_keyword_filter,
      sym_keyword_derive,
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
      anon_sym_PIPE,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_QMARK_QMARK,
  [8247] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(98), 1,
      sym_comment,
    ACTIONS(251), 16,
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
      anon_sym_PIPE,
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
  [8294] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(99), 1,
      sym_comment,
    ACTIONS(430), 5,
      sym_keyword_from,
      anon_sym_EQ,
      anon_sym_DASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(428), 31,
      ts_builtin_sym_end,
      sym_keyword_filter,
      sym_keyword_derive,
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
      anon_sym_PIPE,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_QMARK_QMARK,
  [8341] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(100), 1,
      sym_comment,
    ACTIONS(434), 5,
      sym_keyword_from,
      anon_sym_EQ,
      anon_sym_DASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(432), 31,
      ts_builtin_sym_end,
      sym_keyword_filter,
      sym_keyword_derive,
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
      anon_sym_PIPE,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_QMARK_QMARK,
  [8388] = 10,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(416), 1,
      anon_sym_DASH,
    ACTIONS(418), 1,
      anon_sym_PLUS,
    ACTIONS(422), 1,
      anon_sym_PIPE,
    STATE(101), 1,
      sym_comment,
    ACTIONS(414), 2,
      sym_keyword_from,
      anon_sym_EQ,
    ACTIONS(420), 2,
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
    ACTIONS(412), 23,
      ts_builtin_sym_end,
      sym_keyword_filter,
      sym_keyword_derive,
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
  [8447] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(102), 1,
      sym_comment,
    ACTIONS(376), 5,
      sym_keyword_from,
      anon_sym_EQ,
      anon_sym_DASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(374), 31,
      ts_builtin_sym_end,
      sym_keyword_filter,
      sym_keyword_derive,
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
      anon_sym_PIPE,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_QMARK_QMARK,
  [8494] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(416), 1,
      anon_sym_DASH,
    ACTIONS(418), 1,
      anon_sym_PLUS,
    STATE(103), 1,
      sym_comment,
    ACTIONS(414), 4,
      sym_keyword_from,
      anon_sym_EQ,
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
      anon_sym_EQ_EQ,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PIPE,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_QMARK_QMARK,
  [8545] = 7,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(416), 1,
      anon_sym_DASH,
    ACTIONS(418), 1,
      anon_sym_PLUS,
    STATE(104), 1,
      sym_comment,
    ACTIONS(420), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(414), 4,
      sym_keyword_from,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(412), 28,
      ts_builtin_sym_end,
      sym_keyword_filter,
      sym_keyword_derive,
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
      anon_sym_PIPE,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_QMARK_QMARK,
  [8598] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(105), 1,
      sym_comment,
    ACTIONS(442), 5,
      sym_keyword_from,
      anon_sym_EQ,
      anon_sym_DASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(440), 31,
      ts_builtin_sym_end,
      sym_keyword_filter,
      sym_keyword_derive,
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
      anon_sym_PIPE,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_QMARK_QMARK,
  [8645] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(106), 1,
      sym_comment,
    ACTIONS(245), 16,
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
      anon_sym_PIPE,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_QMARK_QMARK,
    ACTIONS(247), 20,
      sym_keyword_filter,
      sym_keyword_derive,
      sym_keyword_group,
      sym_keyword_aggregate,
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
  [8692] = 11,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(416), 1,
      anon_sym_DASH,
    ACTIONS(418), 1,
      anon_sym_PLUS,
    ACTIONS(422), 1,
      anon_sym_PIPE,
    ACTIONS(444), 1,
      anon_sym_QMARK_QMARK,
    STATE(107), 1,
      sym_comment,
    ACTIONS(414), 2,
      sym_keyword_from,
      anon_sym_EQ,
    ACTIONS(420), 2,
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
    ACTIONS(412), 22,
      ts_builtin_sym_end,
      sym_keyword_filter,
      sym_keyword_derive,
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
  [8753] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(108), 1,
      sym_comment,
    ACTIONS(448), 5,
      sym_keyword_from,
      anon_sym_EQ,
      anon_sym_DASH,
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
      anon_sym_DASH_GT,
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
  [8800] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(109), 1,
      sym_comment,
    ACTIONS(452), 5,
      sym_keyword_from,
      anon_sym_EQ,
      anon_sym_DASH,
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
      anon_sym_DASH_GT,
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
  [8847] = 12,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(416), 1,
      anon_sym_DASH,
    ACTIONS(418), 1,
      anon_sym_PLUS,
    ACTIONS(422), 1,
      anon_sym_PIPE,
    ACTIONS(444), 1,
      anon_sym_QMARK_QMARK,
    ACTIONS(454), 1,
      sym_keyword_and,
    STATE(110), 1,
      sym_comment,
    ACTIONS(414), 2,
      sym_keyword_from,
      anon_sym_EQ,
    ACTIONS(420), 2,
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
    ACTIONS(412), 21,
      ts_builtin_sym_end,
      sym_keyword_filter,
      sym_keyword_derive,
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
  [8910] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(111), 1,
      sym_comment,
    ACTIONS(414), 5,
      sym_keyword_from,
      anon_sym_EQ,
      anon_sym_DASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(412), 31,
      ts_builtin_sym_end,
      sym_keyword_filter,
      sym_keyword_derive,
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
      anon_sym_PIPE,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_QMARK_QMARK,
  [8957] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(112), 1,
      sym_comment,
    ACTIONS(329), 5,
      sym_keyword_from,
      anon_sym_EQ,
      anon_sym_DASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(327), 31,
      ts_builtin_sym_end,
      sym_keyword_filter,
      sym_keyword_derive,
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
      anon_sym_PIPE,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_QMARK_QMARK,
  [9004] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(113), 1,
      sym_comment,
    ACTIONS(458), 5,
      sym_keyword_from,
      anon_sym_EQ,
      anon_sym_DASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(456), 31,
      ts_builtin_sym_end,
      sym_keyword_filter,
      sym_keyword_derive,
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
      anon_sym_PIPE,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_QMARK_QMARK,
  [9051] = 12,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(422), 1,
      anon_sym_PIPE,
    ACTIONS(444), 1,
      anon_sym_QMARK_QMARK,
    ACTIONS(454), 1,
      sym_keyword_and,
    ACTIONS(462), 1,
      sym_keyword_from,
    ACTIONS(464), 1,
      sym_keyword_or,
    STATE(114), 1,
      sym_comment,
    ACTIONS(418), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(420), 2,
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
    ACTIONS(460), 19,
      ts_builtin_sym_end,
      sym_keyword_filter,
      sym_keyword_derive,
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
  [9112] = 12,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(422), 1,
      anon_sym_PIPE,
    ACTIONS(444), 1,
      anon_sym_QMARK_QMARK,
    ACTIONS(454), 1,
      sym_keyword_and,
    ACTIONS(464), 1,
      sym_keyword_or,
    ACTIONS(468), 1,
      sym_keyword_from,
    STATE(115), 1,
      sym_comment,
    ACTIONS(418), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(420), 2,
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
    ACTIONS(466), 19,
      ts_builtin_sym_end,
      sym_keyword_filter,
      sym_keyword_derive,
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
  [9173] = 21,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(97), 1,
      anon_sym_DQUOTE,
    ACTIONS(99), 1,
      anon_sym_SQUOTE,
    ACTIONS(101), 1,
      sym__natural_number,
    ACTIONS(103), 1,
      anon_sym__,
    ACTIONS(105), 1,
      anon_sym_DOT,
    ACTIONS(107), 1,
      anon_sym_BQUOTE,
    ACTIONS(109), 1,
      sym__identifier,
    ACTIONS(315), 1,
      anon_sym_RPAREN,
    ACTIONS(470), 1,
      anon_sym_DASH,
    STATE(116), 1,
      sym_comment,
    STATE(117), 1,
      aux_sym_function_call_repeat1,
    STATE(151), 1,
      sym_identifier,
    STATE(153), 1,
      aux_sym__friendly_number,
    STATE(156), 1,
      sym_integer,
    STATE(166), 1,
      sym__call_parameter,
    STATE(168), 1,
      sym_literal,
    STATE(163), 2,
      sym__literal_string,
      sym_decimal_number,
    STATE(164), 2,
      sym__double_quote_string,
      sym__single_quote_string,
    ACTIONS(95), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    ACTIONS(317), 11,
      sym_keyword_filter,
      sym_keyword_derive,
      sym_keyword_group,
      sym_keyword_aggregate,
      sym_keyword_sort,
      sym_keyword_take,
      sym_keyword_join,
      sym_keyword_select,
      sym_keyword_append,
      sym_keyword_remove,
      sym_keyword_intersect,
  [9251] = 20,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(343), 1,
      anon_sym_RPAREN,
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
      anon_sym_BQUOTE,
    ACTIONS(496), 1,
      sym__identifier,
    STATE(151), 1,
      sym_identifier,
    STATE(153), 1,
      aux_sym__friendly_number,
    STATE(156), 1,
      sym_integer,
    STATE(166), 1,
      sym__call_parameter,
    STATE(168), 1,
      sym_literal,
    STATE(117), 2,
      sym_comment,
      aux_sym_function_call_repeat1,
    STATE(163), 2,
      sym__literal_string,
      sym_decimal_number,
    STATE(164), 2,
      sym__double_quote_string,
      sym__single_quote_string,
    ACTIONS(472), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    ACTIONS(345), 11,
      sym_keyword_filter,
      sym_keyword_derive,
      sym_keyword_group,
      sym_keyword_aggregate,
      sym_keyword_sort,
      sym_keyword_take,
      sym_keyword_join,
      sym_keyword_select,
      sym_keyword_append,
      sym_keyword_remove,
      sym_keyword_intersect,
  [9327] = 13,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(422), 1,
      anon_sym_PIPE,
    ACTIONS(444), 1,
      anon_sym_QMARK_QMARK,
    ACTIONS(454), 1,
      sym_keyword_and,
    ACTIONS(464), 1,
      sym_keyword_or,
    ACTIONS(501), 1,
      sym_keyword_from,
    ACTIONS(503), 1,
      anon_sym_EQ,
    STATE(118), 1,
      sym_comment,
    ACTIONS(418), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(420), 2,
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
    ACTIONS(499), 15,
      ts_builtin_sym_end,
      sym_keyword_filter,
      sym_keyword_derive,
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
  [9387] = 12,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(422), 1,
      anon_sym_PIPE,
    ACTIONS(444), 1,
      anon_sym_QMARK_QMARK,
    ACTIONS(454), 1,
      sym_keyword_and,
    ACTIONS(464), 1,
      sym_keyword_or,
    ACTIONS(507), 1,
      sym_keyword_from,
    STATE(119), 1,
      sym_comment,
    ACTIONS(418), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(420), 2,
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
    ACTIONS(505), 16,
      ts_builtin_sym_end,
      sym_keyword_filter,
      sym_keyword_derive,
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
  [9445] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(120), 1,
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
    ACTIONS(251), 19,
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
      anon_sym_PIPE,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_QMARK_QMARK,
  [9484] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(121), 1,
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
    ACTIONS(247), 20,
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
  [9523] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(513), 1,
      anon_sym_COLON,
    STATE(122), 1,
      sym_comment,
    ACTIONS(509), 7,
      ts_builtin_sym_end,
      anon_sym_DASH,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym__natural_number,
      anon_sym_DOT,
      anon_sym_BQUOTE,
    ACTIONS(511), 20,
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
  [9564] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(123), 1,
      sym_comment,
    STATE(127), 1,
      aux_sym__friendly_number,
    ACTIONS(118), 7,
      ts_builtin_sym_end,
      anon_sym_DASH,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym__natural_number,
      anon_sym_DOT,
      anon_sym_BQUOTE,
    ACTIONS(120), 20,
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
  [9605] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(124), 1,
      sym_comment,
    STATE(127), 1,
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
  [9646] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(125), 1,
      sym_comment,
    ACTIONS(247), 9,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_and,
      sym_keyword_or,
      sym_keyword_null,
      anon_sym__,
      sym__identifier,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(245), 19,
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
      anon_sym_PIPE,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_QMARK_QMARK,
  [9685] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(126), 1,
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
  [9724] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(515), 1,
      sym__natural_number,
    ACTIONS(518), 1,
      anon_sym__,
    STATE(127), 2,
      aux_sym__friendly_number,
      sym_comment,
    ACTIONS(111), 6,
      ts_builtin_sym_end,
      anon_sym_DASH,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      anon_sym_DOT,
      anon_sym_BQUOTE,
    ACTIONS(113), 19,
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
  [9767] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(128), 1,
      sym_comment,
    ACTIONS(374), 7,
      ts_builtin_sym_end,
      anon_sym_DASH,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym__natural_number,
      anon_sym_DOT,
      anon_sym_BQUOTE,
    ACTIONS(376), 20,
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
  [9805] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(129), 1,
      sym_comment,
    ACTIONS(400), 7,
      ts_builtin_sym_end,
      anon_sym_DASH,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym__natural_number,
      anon_sym_DOT,
      anon_sym_BQUOTE,
    ACTIONS(402), 20,
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
  [9843] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(130), 1,
      sym_comment,
    ACTIONS(327), 7,
      ts_builtin_sym_end,
      anon_sym_DASH,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym__natural_number,
      anon_sym_DOT,
      anon_sym_BQUOTE,
    ACTIONS(329), 20,
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
  [9881] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(131), 1,
      sym_comment,
    ACTIONS(521), 7,
      ts_builtin_sym_end,
      anon_sym_DASH,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym__natural_number,
      anon_sym_DOT,
      anon_sym_BQUOTE,
    ACTIONS(523), 20,
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
  [9919] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(132), 1,
      sym_comment,
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
  [9957] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(133), 1,
      sym_comment,
    ACTIONS(509), 7,
      ts_builtin_sym_end,
      anon_sym_DASH,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym__natural_number,
      anon_sym_DOT,
      anon_sym_BQUOTE,
    ACTIONS(511), 20,
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
  [9995] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(134), 1,
      sym_comment,
    ACTIONS(525), 7,
      ts_builtin_sym_end,
      anon_sym_DASH,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym__natural_number,
      anon_sym_DOT,
      anon_sym_BQUOTE,
    ACTIONS(527), 20,
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
  [10033] = 16,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(531), 1,
      sym_keyword_from,
    ACTIONS(533), 1,
      sym_keyword_filter,
    ACTIONS(535), 1,
      sym_keyword_derive,
    ACTIONS(537), 1,
      sym_keyword_group,
    ACTIONS(539), 1,
      sym_keyword_aggregate,
    ACTIONS(541), 1,
      sym_keyword_sort,
    ACTIONS(543), 1,
      sym_keyword_take,
    ACTIONS(545), 1,
      sym_keyword_join,
    ACTIONS(547), 1,
      sym_keyword_select,
    STATE(135), 1,
      sym_comment,
    STATE(145), 1,
      aux_sym_transforms_repeat1,
    STATE(315), 1,
      sym_transforms,
    ACTIONS(549), 3,
      sym_keyword_append,
      sym_keyword_remove,
      sym_keyword_intersect,
    ACTIONS(529), 4,
      ts_builtin_sym_end,
      sym_keyword_func,
      sym_keyword_let,
      sym_keyword_from_text,
    STATE(220), 9,
      sym_derives,
      sym_append,
      sym_filter,
      sym_aggregate,
      sym_sorts,
      sym_takes,
      sym_group,
      sym_joins,
      sym_select,
  [10095] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(136), 1,
      sym_comment,
    ACTIONS(374), 7,
      ts_builtin_sym_end,
      anon_sym_DASH,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym__natural_number,
      anon_sym_DOT,
      anon_sym_BQUOTE,
    ACTIONS(376), 20,
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
  [10133] = 12,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(422), 1,
      anon_sym_PIPE,
    ACTIONS(444), 1,
      anon_sym_QMARK_QMARK,
    ACTIONS(454), 1,
      sym_keyword_and,
    ACTIONS(464), 1,
      sym_keyword_or,
    ACTIONS(551), 1,
      anon_sym_EQ,
    STATE(137), 1,
      sym_comment,
    ACTIONS(418), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(420), 2,
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
    ACTIONS(499), 12,
      sym_keyword_filter,
      sym_keyword_derive,
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
  [10187] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(138), 1,
      sym_comment,
    ACTIONS(333), 7,
      ts_builtin_sym_end,
      anon_sym_DASH,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym__natural_number,
      anon_sym_DOT,
      anon_sym_BQUOTE,
    ACTIONS(335), 20,
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
  [10225] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(139), 1,
      sym_comment,
    ACTIONS(404), 7,
      ts_builtin_sym_end,
      anon_sym_DASH,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym__natural_number,
      anon_sym_DOT,
      anon_sym_BQUOTE,
    ACTIONS(406), 20,
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
  [10263] = 16,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(533), 1,
      sym_keyword_filter,
    ACTIONS(535), 1,
      sym_keyword_derive,
    ACTIONS(537), 1,
      sym_keyword_group,
    ACTIONS(539), 1,
      sym_keyword_aggregate,
    ACTIONS(541), 1,
      sym_keyword_sort,
    ACTIONS(543), 1,
      sym_keyword_take,
    ACTIONS(545), 1,
      sym_keyword_join,
    ACTIONS(547), 1,
      sym_keyword_select,
    ACTIONS(555), 1,
      sym_keyword_from,
    STATE(140), 1,
      sym_comment,
    STATE(145), 1,
      aux_sym_transforms_repeat1,
    STATE(328), 1,
      sym_transforms,
    ACTIONS(549), 3,
      sym_keyword_append,
      sym_keyword_remove,
      sym_keyword_intersect,
    ACTIONS(553), 4,
      ts_builtin_sym_end,
      sym_keyword_func,
      sym_keyword_let,
      sym_keyword_from_text,
    STATE(220), 9,
      sym_derives,
      sym_append,
      sym_filter,
      sym_aggregate,
      sym_sorts,
      sym_takes,
      sym_group,
      sym_joins,
      sym_select,
  [10325] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(141), 1,
      sym_comment,
    ACTIONS(309), 7,
      ts_builtin_sym_end,
      anon_sym_DASH,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym__natural_number,
      anon_sym_DOT,
      anon_sym_BQUOTE,
    ACTIONS(311), 20,
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
  [10363] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(120), 1,
      sym_keyword_from,
    STATE(142), 1,
      sym_comment,
    STATE(143), 1,
      aux_sym__friendly_number,
    ACTIONS(557), 2,
      sym__natural_number,
      anon_sym__,
    ACTIONS(118), 22,
      ts_builtin_sym_end,
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
  [10404] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(113), 1,
      sym_keyword_from,
    ACTIONS(559), 2,
      sym__natural_number,
      anon_sym__,
    STATE(143), 2,
      aux_sym__friendly_number,
      sym_comment,
    ACTIONS(111), 22,
      ts_builtin_sym_end,
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
  [10443] = 14,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(564), 1,
      sym_keyword_from,
    ACTIONS(566), 1,
      sym_keyword_filter,
    ACTIONS(569), 1,
      sym_keyword_derive,
    ACTIONS(572), 1,
      sym_keyword_group,
    ACTIONS(575), 1,
      sym_keyword_aggregate,
    ACTIONS(578), 1,
      sym_keyword_sort,
    ACTIONS(581), 1,
      sym_keyword_take,
    ACTIONS(584), 1,
      sym_keyword_join,
    ACTIONS(587), 1,
      sym_keyword_select,
    STATE(144), 2,
      sym_comment,
      aux_sym_transforms_repeat1,
    ACTIONS(590), 3,
      sym_keyword_append,
      sym_keyword_remove,
      sym_keyword_intersect,
    ACTIONS(562), 4,
      ts_builtin_sym_end,
      sym_keyword_func,
      sym_keyword_let,
      sym_keyword_from_text,
    STATE(220), 9,
      sym_derives,
      sym_append,
      sym_filter,
      sym_aggregate,
      sym_sorts,
      sym_takes,
      sym_group,
      sym_joins,
      sym_select,
  [10500] = 15,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(533), 1,
      sym_keyword_filter,
    ACTIONS(535), 1,
      sym_keyword_derive,
    ACTIONS(537), 1,
      sym_keyword_group,
    ACTIONS(539), 1,
      sym_keyword_aggregate,
    ACTIONS(541), 1,
      sym_keyword_sort,
    ACTIONS(543), 1,
      sym_keyword_take,
    ACTIONS(545), 1,
      sym_keyword_join,
    ACTIONS(547), 1,
      sym_keyword_select,
    ACTIONS(595), 1,
      sym_keyword_from,
    STATE(144), 1,
      aux_sym_transforms_repeat1,
    STATE(145), 1,
      sym_comment,
    ACTIONS(549), 3,
      sym_keyword_append,
      sym_keyword_remove,
      sym_keyword_intersect,
    ACTIONS(593), 4,
      ts_builtin_sym_end,
      sym_keyword_func,
      sym_keyword_let,
      sym_keyword_from_text,
    STATE(220), 9,
      sym_derives,
      sym_append,
      sym_filter,
      sym_aggregate,
      sym_sorts,
      sym_takes,
      sym_group,
      sym_joins,
      sym_select,
  [10559] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(124), 1,
      sym_keyword_from,
    STATE(143), 1,
      aux_sym__friendly_number,
    STATE(146), 1,
      sym_comment,
    ACTIONS(557), 2,
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
  [10600] = 19,
    ACTIONS(3), 1,
      anon_sym_POUND,
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
    STATE(257), 1,
      sym_identifier,
    STATE(258), 1,
      aux_sym__friendly_number,
    STATE(262), 1,
      sym_integer,
    STATE(270), 1,
      sym__call_parameter,
    STATE(276), 1,
      sym_literal,
    STATE(147), 2,
      sym_comment,
      aux_sym_function_call_repeat1,
    STATE(268), 2,
      sym__literal_string,
      sym_decimal_number,
    STATE(269), 2,
      sym__double_quote_string,
      sym__single_quote_string,
    ACTIONS(597), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    ACTIONS(343), 4,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [10666] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(128), 1,
      sym_keyword_from,
    STATE(148), 1,
      sym_comment,
    ACTIONS(126), 24,
      ts_builtin_sym_end,
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
  [10702] = 20,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(289), 1,
      anon_sym_DQUOTE,
    ACTIONS(291), 1,
      anon_sym_SQUOTE,
    ACTIONS(293), 1,
      sym__natural_number,
    ACTIONS(295), 1,
      anon_sym__,
    ACTIONS(297), 1,
      anon_sym_DOT,
    ACTIONS(299), 1,
      anon_sym_BQUOTE,
    ACTIONS(301), 1,
      sym__identifier,
    ACTIONS(624), 1,
      anon_sym_DASH,
    STATE(147), 1,
      aux_sym_function_call_repeat1,
    STATE(149), 1,
      sym_comment,
    STATE(257), 1,
      sym_identifier,
    STATE(258), 1,
      aux_sym__friendly_number,
    STATE(262), 1,
      sym_integer,
    STATE(270), 1,
      sym__call_parameter,
    STATE(276), 1,
      sym_literal,
    STATE(268), 2,
      sym__literal_string,
      sym_decimal_number,
    STATE(269), 2,
      sym__double_quote_string,
      sym__single_quote_string,
    ACTIONS(287), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    ACTIONS(315), 4,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [10770] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(150), 1,
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
    ACTIONS(247), 16,
      sym_keyword_filter,
      sym_keyword_derive,
      sym_keyword_group,
      sym_keyword_aggregate,
      sym_keyword_sort,
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
  [10805] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(626), 1,
      anon_sym_COLON,
    STATE(151), 1,
      sym_comment,
    ACTIONS(509), 7,
      anon_sym_RPAREN,
      anon_sym_DASH,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym__natural_number,
      anon_sym_DOT,
      anon_sym_BQUOTE,
    ACTIONS(511), 16,
      sym_keyword_filter,
      sym_keyword_derive,
      sym_keyword_group,
      sym_keyword_aggregate,
      sym_keyword_sort,
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
  [10842] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(152), 1,
      sym_comment,
    STATE(155), 1,
      aux_sym__friendly_number,
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
  [10879] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(153), 1,
      sym_comment,
    STATE(155), 1,
      aux_sym__friendly_number,
    ACTIONS(118), 7,
      anon_sym_RPAREN,
      anon_sym_DASH,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym__natural_number,
      anon_sym_DOT,
      anon_sym_BQUOTE,
    ACTIONS(120), 16,
      sym_keyword_filter,
      sym_keyword_derive,
      sym_keyword_group,
      sym_keyword_aggregate,
      sym_keyword_sort,
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
  [10916] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(154), 1,
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
  [10951] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(628), 1,
      sym__natural_number,
    ACTIONS(631), 1,
      anon_sym__,
    STATE(155), 2,
      aux_sym__friendly_number,
      sym_comment,
    ACTIONS(111), 6,
      anon_sym_RPAREN,
      anon_sym_DASH,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      anon_sym_DOT,
      anon_sym_BQUOTE,
    ACTIONS(113), 15,
      sym_keyword_filter,
      sym_keyword_derive,
      sym_keyword_group,
      sym_keyword_aggregate,
      sym_keyword_sort,
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
  [10990] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(156), 1,
      sym_comment,
    ACTIONS(374), 7,
      anon_sym_RPAREN,
      anon_sym_DASH,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym__natural_number,
      anon_sym_DOT,
      anon_sym_BQUOTE,
    ACTIONS(376), 16,
      sym_keyword_filter,
      sym_keyword_derive,
      sym_keyword_group,
      sym_keyword_aggregate,
      sym_keyword_sort,
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
  [11024] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(157), 1,
      sym_comment,
    ACTIONS(309), 7,
      anon_sym_RPAREN,
      anon_sym_DASH,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym__natural_number,
      anon_sym_DOT,
      anon_sym_BQUOTE,
    ACTIONS(311), 16,
      sym_keyword_filter,
      sym_keyword_derive,
      sym_keyword_group,
      sym_keyword_aggregate,
      sym_keyword_sort,
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
  [11058] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(158), 1,
      sym_comment,
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
  [11092] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(159), 1,
      sym_comment,
    ACTIONS(333), 7,
      anon_sym_RPAREN,
      anon_sym_DASH,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym__natural_number,
      anon_sym_DOT,
      anon_sym_BQUOTE,
    ACTIONS(335), 16,
      sym_keyword_filter,
      sym_keyword_derive,
      sym_keyword_group,
      sym_keyword_aggregate,
      sym_keyword_sort,
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
  [11126] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(160), 1,
      sym_comment,
    ACTIONS(525), 7,
      anon_sym_RPAREN,
      anon_sym_DASH,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym__natural_number,
      anon_sym_DOT,
      anon_sym_BQUOTE,
    ACTIONS(527), 16,
      sym_keyword_filter,
      sym_keyword_derive,
      sym_keyword_group,
      sym_keyword_aggregate,
      sym_keyword_sort,
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
  [11160] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(161), 1,
      sym_comment,
    ACTIONS(400), 7,
      anon_sym_RPAREN,
      anon_sym_DASH,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym__natural_number,
      anon_sym_DOT,
      anon_sym_BQUOTE,
    ACTIONS(402), 16,
      sym_keyword_filter,
      sym_keyword_derive,
      sym_keyword_group,
      sym_keyword_aggregate,
      sym_keyword_sort,
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
  [11194] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(323), 1,
      sym_keyword_from,
    STATE(162), 1,
      sym_comment,
    ACTIONS(321), 22,
      ts_builtin_sym_end,
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
  [11228] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(163), 1,
      sym_comment,
    ACTIONS(374), 7,
      anon_sym_RPAREN,
      anon_sym_DASH,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym__natural_number,
      anon_sym_DOT,
      anon_sym_BQUOTE,
    ACTIONS(376), 16,
      sym_keyword_filter,
      sym_keyword_derive,
      sym_keyword_group,
      sym_keyword_aggregate,
      sym_keyword_sort,
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
  [11262] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(164), 1,
      sym_comment,
    ACTIONS(327), 7,
      anon_sym_RPAREN,
      anon_sym_DASH,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym__natural_number,
      anon_sym_DOT,
      anon_sym_BQUOTE,
    ACTIONS(329), 16,
      sym_keyword_filter,
      sym_keyword_derive,
      sym_keyword_group,
      sym_keyword_aggregate,
      sym_keyword_sort,
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
  [11296] = 15,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(529), 1,
      anon_sym_RPAREN,
    ACTIONS(533), 1,
      sym_keyword_filter,
    ACTIONS(537), 1,
      sym_keyword_group,
    ACTIONS(539), 1,
      sym_keyword_aggregate,
    ACTIONS(541), 1,
      sym_keyword_sort,
    ACTIONS(543), 1,
      sym_keyword_take,
    ACTIONS(545), 1,
      sym_keyword_join,
    ACTIONS(634), 1,
      sym_keyword_derive,
    ACTIONS(636), 1,
      sym_keyword_select,
    STATE(165), 1,
      sym_comment,
    STATE(171), 1,
      aux_sym_transforms_repeat1,
    STATE(315), 1,
      sym_transforms,
    ACTIONS(549), 3,
      sym_keyword_append,
      sym_keyword_remove,
      sym_keyword_intersect,
    STATE(220), 9,
      sym_derives,
      sym_append,
      sym_filter,
      sym_aggregate,
      sym_sorts,
      sym_takes,
      sym_group,
      sym_joins,
      sym_select,
  [11352] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(166), 1,
      sym_comment,
    ACTIONS(521), 7,
      anon_sym_RPAREN,
      anon_sym_DASH,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym__natural_number,
      anon_sym_DOT,
      anon_sym_BQUOTE,
    ACTIONS(523), 16,
      sym_keyword_filter,
      sym_keyword_derive,
      sym_keyword_group,
      sym_keyword_aggregate,
      sym_keyword_sort,
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
  [11386] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(167), 1,
      sym_comment,
    ACTIONS(404), 7,
      anon_sym_RPAREN,
      anon_sym_DASH,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym__natural_number,
      anon_sym_DOT,
      anon_sym_BQUOTE,
    ACTIONS(406), 16,
      sym_keyword_filter,
      sym_keyword_derive,
      sym_keyword_group,
      sym_keyword_aggregate,
      sym_keyword_sort,
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
  [11420] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(168), 1,
      sym_comment,
    ACTIONS(509), 7,
      anon_sym_RPAREN,
      anon_sym_DASH,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym__natural_number,
      anon_sym_DOT,
      anon_sym_BQUOTE,
    ACTIONS(511), 16,
      sym_keyword_filter,
      sym_keyword_derive,
      sym_keyword_group,
      sym_keyword_aggregate,
      sym_keyword_sort,
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
  [11454] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(640), 1,
      sym_keyword_from,
    STATE(169), 1,
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
  [11487] = 13,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(562), 1,
      anon_sym_RPAREN,
    ACTIONS(566), 1,
      sym_keyword_filter,
    ACTIONS(572), 1,
      sym_keyword_group,
    ACTIONS(575), 1,
      sym_keyword_aggregate,
    ACTIONS(578), 1,
      sym_keyword_sort,
    ACTIONS(581), 1,
      sym_keyword_take,
    ACTIONS(584), 1,
      sym_keyword_join,
    ACTIONS(642), 1,
      sym_keyword_derive,
    ACTIONS(645), 1,
      sym_keyword_select,
    STATE(170), 2,
      sym_comment,
      aux_sym_transforms_repeat1,
    ACTIONS(590), 3,
      sym_keyword_append,
      sym_keyword_remove,
      sym_keyword_intersect,
    STATE(220), 9,
      sym_derives,
      sym_append,
      sym_filter,
      sym_aggregate,
      sym_sorts,
      sym_takes,
      sym_group,
      sym_joins,
      sym_select,
  [11538] = 14,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(533), 1,
      sym_keyword_filter,
    ACTIONS(537), 1,
      sym_keyword_group,
    ACTIONS(539), 1,
      sym_keyword_aggregate,
    ACTIONS(541), 1,
      sym_keyword_sort,
    ACTIONS(543), 1,
      sym_keyword_take,
    ACTIONS(545), 1,
      sym_keyword_join,
    ACTIONS(593), 1,
      anon_sym_RPAREN,
    ACTIONS(634), 1,
      sym_keyword_derive,
    ACTIONS(636), 1,
      sym_keyword_select,
    STATE(170), 1,
      aux_sym_transforms_repeat1,
    STATE(171), 1,
      sym_comment,
    ACTIONS(549), 3,
      sym_keyword_append,
      sym_keyword_remove,
      sym_keyword_intersect,
    STATE(220), 9,
      sym_derives,
      sym_append,
      sym_filter,
      sym_aggregate,
      sym_sorts,
      sym_takes,
      sym_group,
      sym_joins,
      sym_select,
  [11591] = 7,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(650), 1,
      sym_keyword_from,
    ACTIONS(652), 1,
      anon_sym_LBRACK,
    STATE(172), 1,
      sym_comment,
    STATE(222), 1,
      sym_conditions,
    STATE(243), 1,
      sym__self_join,
    ACTIONS(648), 16,
      ts_builtin_sym_end,
      sym_keyword_filter,
      sym_keyword_derive,
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
  [11628] = 7,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(652), 1,
      anon_sym_LBRACK,
    ACTIONS(656), 1,
      sym_keyword_from,
    STATE(173), 1,
      sym_comment,
    STATE(237), 1,
      sym_conditions,
    STATE(243), 1,
      sym__self_join,
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
  [11665] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(660), 1,
      sym_keyword_from,
    STATE(174), 1,
      sym_comment,
    ACTIONS(658), 19,
      ts_builtin_sym_end,
      sym_keyword_filter,
      sym_keyword_derive,
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
  [11696] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(664), 1,
      sym_keyword_from,
    STATE(175), 1,
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
  [11727] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(668), 1,
      sym_keyword_from,
    STATE(176), 1,
      sym_comment,
    ACTIONS(666), 19,
      ts_builtin_sym_end,
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
  [11758] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(672), 1,
      sym_keyword_from,
    STATE(177), 1,
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
  [11789] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(501), 1,
      sym_keyword_from,
    STATE(178), 1,
      sym_comment,
    ACTIONS(499), 19,
      ts_builtin_sym_end,
      sym_keyword_filter,
      sym_keyword_derive,
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
  [11820] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(676), 1,
      sym_keyword_from,
    STATE(179), 1,
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
  [11851] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(680), 1,
      sym_keyword_from,
    STATE(180), 1,
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
  [11882] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(684), 1,
      sym_keyword_from,
    STATE(181), 1,
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
  [11913] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(688), 1,
      sym_keyword_from,
    STATE(182), 1,
      sym_comment,
    ACTIONS(686), 19,
      ts_builtin_sym_end,
      sym_keyword_filter,
      sym_keyword_derive,
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
  [11944] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(692), 1,
      sym_keyword_from,
    STATE(183), 1,
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
  [11975] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(696), 1,
      sym_keyword_from,
    STATE(184), 1,
      sym_comment,
    ACTIONS(694), 19,
      ts_builtin_sym_end,
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
  [12006] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(185), 1,
      sym_comment,
    ACTIONS(698), 7,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
      anon_sym_f_DQUOTE,
      anon_sym_s_DQUOTE,
      anon_sym__,
      sym__identifier,
    ACTIONS(700), 12,
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
  [12036] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(186), 1,
      sym_comment,
    ACTIONS(702), 7,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
      anon_sym_f_DQUOTE,
      anon_sym_s_DQUOTE,
      anon_sym__,
      sym__identifier,
    ACTIONS(704), 12,
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
  [12066] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(708), 1,
      sym_keyword_from,
    STATE(187), 1,
      sym_comment,
    ACTIONS(458), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(706), 4,
      ts_builtin_sym_end,
      sym_keyword_func,
      sym_keyword_let,
      sym_keyword_from_text,
    ACTIONS(456), 12,
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
  [12100] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(188), 1,
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
  [12130] = 12,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(422), 1,
      anon_sym_PIPE,
    ACTIONS(444), 1,
      anon_sym_QMARK_QMARK,
    ACTIONS(454), 1,
      sym_keyword_and,
    ACTIONS(464), 1,
      sym_keyword_or,
    ACTIONS(714), 1,
      anon_sym_EQ,
    STATE(189), 1,
      sym_comment,
    ACTIONS(418), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(420), 2,
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
    ACTIONS(499), 4,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [12176] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(718), 1,
      sym_keyword_from,
    ACTIONS(720), 1,
      anon_sym_EQ,
    STATE(190), 1,
      sym_comment,
    ACTIONS(716), 17,
      ts_builtin_sym_end,
      sym_keyword_filter,
      sym_keyword_derive,
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
  [12208] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(724), 1,
      sym_keyword_from,
    ACTIONS(726), 1,
      anon_sym_DOT_DOT,
    STATE(191), 1,
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
  [12240] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(730), 1,
      sym_keyword_from,
    STATE(192), 1,
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
  [12269] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(734), 1,
      sym_keyword_from,
    STATE(193), 1,
      sym_comment,
    ACTIONS(732), 17,
      ts_builtin_sym_end,
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
  [12298] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(194), 1,
      sym_comment,
    STATE(381), 1,
      aux_sym_derives_repeat1,
    ACTIONS(410), 3,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(408), 14,
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
  [12329] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(724), 1,
      sym_keyword_from,
    STATE(195), 1,
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
  [12358] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(718), 1,
      sym_keyword_from,
    STATE(196), 1,
      sym_comment,
    ACTIONS(716), 17,
      ts_builtin_sym_end,
      sym_keyword_filter,
      sym_keyword_derive,
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
  [12387] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(738), 1,
      sym_keyword_from,
    STATE(197), 1,
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
  [12416] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(742), 1,
      sym_keyword_from,
    STATE(198), 1,
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
  [12445] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(746), 1,
      sym_keyword_from,
    STATE(199), 1,
      sym_comment,
    ACTIONS(744), 17,
      ts_builtin_sym_end,
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
  [12474] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(750), 1,
      sym_keyword_from,
    STATE(200), 1,
      sym_comment,
    ACTIONS(748), 17,
      ts_builtin_sym_end,
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
  [12503] = 7,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(752), 1,
      anon_sym_COMMA,
    ACTIONS(754), 1,
      anon_sym_RBRACK,
    STATE(201), 1,
      sym_comment,
    STATE(389), 1,
      aux_sym_aggregate_repeat1,
    ACTIONS(458), 3,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(456), 12,
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
  [12538] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(758), 1,
      sym_keyword_from,
    STATE(202), 1,
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
  [12567] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(762), 1,
      sym_keyword_from,
    STATE(203), 1,
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
  [12596] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(766), 1,
      sym_keyword_from,
    STATE(204), 1,
      sym_comment,
    ACTIONS(764), 17,
      ts_builtin_sym_end,
      sym_keyword_filter,
      sym_keyword_derive,
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
  [12625] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(770), 1,
      sym_keyword_from,
    STATE(205), 1,
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
  [12654] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(774), 1,
      sym_keyword_from,
    STATE(206), 1,
      sym_comment,
    ACTIONS(772), 17,
      ts_builtin_sym_end,
      sym_keyword_filter,
      sym_keyword_derive,
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
  [12683] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(778), 1,
      sym_keyword_from,
    STATE(207), 1,
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
  [12711] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(782), 1,
      sym_keyword_from,
    STATE(208), 1,
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
  [12739] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(786), 1,
      sym_keyword_from,
    STATE(209), 1,
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
  [12767] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(790), 1,
      sym_keyword_from,
    STATE(210), 1,
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
  [12795] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(794), 1,
      sym_keyword_from,
    STATE(211), 1,
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
  [12823] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(798), 1,
      sym_keyword_from,
    STATE(212), 1,
      sym_comment,
    ACTIONS(796), 16,
      ts_builtin_sym_end,
      sym_keyword_filter,
      sym_keyword_derive,
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
  [12851] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(802), 1,
      sym_keyword_from,
    STATE(213), 1,
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
  [12879] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(501), 1,
      sym_keyword_from,
    STATE(214), 1,
      sym_comment,
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
  [12907] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(806), 1,
      sym_keyword_from,
    STATE(215), 1,
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
  [12935] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(216), 1,
      sym_comment,
    ACTIONS(808), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
    ACTIONS(458), 3,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(456), 12,
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
  [12965] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(812), 1,
      sym_keyword_from,
    STATE(217), 1,
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
  [12993] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(816), 1,
      sym_keyword_from,
    STATE(218), 1,
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
  [13021] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(820), 1,
      sym_keyword_from,
    STATE(219), 1,
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
  [13049] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(824), 1,
      sym_keyword_from,
    STATE(220), 1,
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
  [13077] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(828), 1,
      sym_keyword_from,
    STATE(221), 1,
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
  [13105] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(832), 1,
      sym_keyword_from,
    STATE(222), 1,
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
  [13133] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(836), 1,
      sym_keyword_from,
    STATE(223), 1,
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
  [13161] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(224), 1,
      sym_comment,
    ACTIONS(410), 3,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(408), 14,
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
  [13189] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(840), 1,
      sym_keyword_from,
    STATE(225), 1,
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
  [13217] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(844), 1,
      sym_keyword_from,
    STATE(226), 1,
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
  [13245] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(848), 1,
      sym_keyword_from,
    STATE(227), 1,
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
  [13273] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(852), 1,
      sym_keyword_from,
    STATE(228), 1,
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
  [13301] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(856), 1,
      sym_keyword_from,
    STATE(229), 1,
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
  [13329] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(860), 1,
      sym_keyword_from,
    STATE(230), 1,
      sym_comment,
    ACTIONS(858), 16,
      ts_builtin_sym_end,
      sym_keyword_filter,
      sym_keyword_derive,
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
  [13357] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(864), 1,
      sym_keyword_from,
    STATE(231), 1,
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
  [13385] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(868), 1,
      sym_keyword_from,
    STATE(232), 1,
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
  [13413] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(872), 1,
      sym_keyword_from,
    STATE(233), 1,
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
  [13441] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(876), 1,
      sym_keyword_from,
    STATE(234), 1,
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
  [13469] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(880), 1,
      sym_keyword_from,
    STATE(235), 1,
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
  [13497] = 7,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(882), 1,
      anon_sym_COMMA,
    ACTIONS(884), 1,
      anon_sym_RBRACK,
    STATE(236), 1,
      sym_comment,
    STATE(358), 1,
      aux_sym_conditions_repeat1,
    ACTIONS(458), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(456), 12,
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
  [13531] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(888), 1,
      sym_keyword_from,
    STATE(237), 1,
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
  [13559] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(892), 1,
      sym_keyword_from,
    STATE(238), 1,
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
  [13587] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(896), 1,
      sym_keyword_from,
    STATE(239), 1,
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
  [13615] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(900), 1,
      sym_keyword_from,
    STATE(240), 1,
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
  [13643] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(904), 1,
      sym_keyword_from,
    STATE(241), 1,
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
  [13671] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(908), 1,
      sym_keyword_from,
    STATE(242), 1,
      sym_comment,
    ACTIONS(906), 16,
      ts_builtin_sym_end,
      sym_keyword_filter,
      sym_keyword_derive,
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
  [13699] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(912), 1,
      sym_keyword_from,
    STATE(243), 1,
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
  [13727] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(916), 1,
      sym_keyword_from,
    STATE(244), 1,
      sym_comment,
    ACTIONS(914), 16,
      ts_builtin_sym_end,
      sym_keyword_filter,
      sym_keyword_derive,
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
  [13755] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(245), 1,
      sym_comment,
    ACTIONS(918), 7,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
      anon_sym_f_DQUOTE,
      anon_sym_s_DQUOTE,
      anon_sym__,
      sym__identifier,
    ACTIONS(920), 10,
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
  [13783] = 13,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(65), 1,
      anon_sym_DQUOTE,
    ACTIONS(67), 1,
      anon_sym_SQUOTE,
    ACTIONS(73), 1,
      anon_sym_DOT,
    ACTIONS(319), 1,
      anon_sym_DASH,
    STATE(123), 1,
      aux_sym__friendly_number,
    STATE(128), 1,
      sym_integer,
    STATE(134), 1,
      sym_literal,
    STATE(246), 1,
      sym_comment,
    ACTIONS(69), 2,
      sym__natural_number,
      anon_sym__,
    STATE(130), 2,
      sym__double_quote_string,
      sym__single_quote_string,
    STATE(136), 2,
      sym__literal_string,
      sym_decimal_number,
    ACTIONS(922), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
  [13828] = 13,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(289), 1,
      anon_sym_DQUOTE,
    ACTIONS(291), 1,
      anon_sym_SQUOTE,
    ACTIONS(297), 1,
      anon_sym_DOT,
    ACTIONS(624), 1,
      anon_sym_DASH,
    STATE(247), 1,
      sym_comment,
    STATE(258), 1,
      aux_sym__friendly_number,
    STATE(262), 1,
      sym_integer,
    STATE(272), 1,
      sym_literal,
    ACTIONS(293), 2,
      sym__natural_number,
      anon_sym__,
    STATE(268), 2,
      sym__literal_string,
      sym_decimal_number,
    STATE(269), 2,
      sym__double_quote_string,
      sym__single_quote_string,
    ACTIONS(924), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
  [13873] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(248), 1,
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
  [13900] = 13,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(928), 1,
      anon_sym_DASH,
    ACTIONS(930), 1,
      anon_sym_DQUOTE,
    ACTIONS(932), 1,
      anon_sym_SQUOTE,
    ACTIONS(936), 1,
      anon_sym_DOT,
    STATE(249), 1,
      sym_comment,
    STATE(308), 1,
      aux_sym__friendly_number,
    STATE(347), 1,
      sym_integer,
    STATE(369), 1,
      sym_literal,
    ACTIONS(934), 2,
      sym__natural_number,
      anon_sym__,
    STATE(355), 2,
      sym__double_quote_string,
      sym__single_quote_string,
    STATE(373), 2,
      sym__literal_string,
      sym_decimal_number,
    ACTIONS(926), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
  [13945] = 13,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(97), 1,
      anon_sym_DQUOTE,
    ACTIONS(99), 1,
      anon_sym_SQUOTE,
    ACTIONS(105), 1,
      anon_sym_DOT,
    ACTIONS(470), 1,
      anon_sym_DASH,
    STATE(153), 1,
      aux_sym__friendly_number,
    STATE(156), 1,
      sym_integer,
    STATE(160), 1,
      sym_literal,
    STATE(250), 1,
      sym_comment,
    ACTIONS(101), 2,
      sym__natural_number,
      anon_sym__,
    STATE(163), 2,
      sym__literal_string,
      sym_decimal_number,
    STATE(164), 2,
      sym__double_quote_string,
      sym__single_quote_string,
    ACTIONS(938), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
  [13990] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(251), 1,
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
  [14017] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(252), 1,
      sym_comment,
    STATE(256), 1,
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
  [14046] = 11,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(422), 1,
      anon_sym_PIPE,
    ACTIONS(444), 1,
      anon_sym_QMARK_QMARK,
    ACTIONS(454), 1,
      sym_keyword_and,
    ACTIONS(464), 1,
      sym_keyword_or,
    STATE(253), 1,
      sym_comment,
    ACTIONS(418), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(420), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(438), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(940), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
    ACTIONS(436), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
  [14087] = 11,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(422), 1,
      anon_sym_PIPE,
    ACTIONS(444), 1,
      anon_sym_QMARK_QMARK,
    ACTIONS(454), 1,
      sym_keyword_and,
    ACTIONS(464), 1,
      sym_keyword_or,
    STATE(254), 1,
      sym_comment,
    ACTIONS(418), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(420), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(438), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(942), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
    ACTIONS(436), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
  [14128] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(255), 1,
      sym_comment,
    ACTIONS(458), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(944), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
    ACTIONS(456), 12,
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
  [14157] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(946), 1,
      sym__natural_number,
    ACTIONS(949), 1,
      anon_sym__,
    STATE(256), 2,
      aux_sym__friendly_number,
      sym_comment,
    ACTIONS(113), 4,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
      sym__identifier,
    ACTIONS(111), 9,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_DASH,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      anon_sym_DOT,
      anon_sym_BQUOTE,
  [14188] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(952), 1,
      anon_sym_COLON,
    STATE(257), 1,
      sym_comment,
    ACTIONS(511), 5,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
      anon_sym__,
      sym__identifier,
    ACTIONS(509), 10,
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
  [14217] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(256), 1,
      aux_sym__friendly_number,
    STATE(258), 1,
      sym_comment,
    ACTIONS(120), 5,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
      anon_sym__,
      sym__identifier,
    ACTIONS(118), 10,
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
  [14246] = 13,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(29), 1,
      anon_sym_DASH,
    ACTIONS(31), 1,
      anon_sym_DQUOTE,
    ACTIONS(33), 1,
      anon_sym_SQUOTE,
    ACTIONS(47), 1,
      anon_sym_DOT,
    STATE(13), 1,
      aux_sym__friendly_number,
    STATE(86), 1,
      sym_integer,
    STATE(259), 1,
      sym_comment,
    STATE(448), 1,
      sym_literal,
    ACTIONS(43), 2,
      sym__natural_number,
      anon_sym__,
    STATE(102), 2,
      sym__literal_string,
      sym_decimal_number,
    STATE(112), 2,
      sym__double_quote_string,
      sym__single_quote_string,
    ACTIONS(954), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
  [14291] = 13,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(29), 1,
      anon_sym_DASH,
    ACTIONS(31), 1,
      anon_sym_DQUOTE,
    ACTIONS(33), 1,
      anon_sym_SQUOTE,
    ACTIONS(47), 1,
      anon_sym_DOT,
    STATE(13), 1,
      aux_sym__friendly_number,
    STATE(86), 1,
      sym_integer,
    STATE(260), 1,
      sym_comment,
    STATE(447), 1,
      sym_literal,
    ACTIONS(43), 2,
      sym__natural_number,
      anon_sym__,
    STATE(102), 2,
      sym__literal_string,
      sym_decimal_number,
    STATE(112), 2,
      sym__double_quote_string,
      sym__single_quote_string,
    ACTIONS(954), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
  [14336] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(261), 1,
      sym_comment,
    ACTIONS(335), 5,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
      anon_sym__,
      sym__identifier,
    ACTIONS(333), 10,
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
  [14362] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(262), 1,
      sym_comment,
    ACTIONS(376), 5,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
      anon_sym__,
      sym__identifier,
    ACTIONS(374), 10,
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
  [14388] = 11,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(422), 1,
      anon_sym_PIPE,
    ACTIONS(444), 1,
      anon_sym_QMARK_QMARK,
    ACTIONS(466), 1,
      anon_sym_RPAREN,
    ACTIONS(956), 1,
      sym_keyword_and,
    ACTIONS(958), 1,
      sym_keyword_or,
    STATE(263), 1,
      sym_comment,
    ACTIONS(418), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(420), 2,
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
  [14428] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(264), 1,
      sym_comment,
    ACTIONS(406), 5,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
      anon_sym__,
      sym__identifier,
    ACTIONS(404), 10,
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
  [14454] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(265), 1,
      sym_comment,
    ACTIONS(402), 5,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
      anon_sym__,
      sym__identifier,
    ACTIONS(400), 10,
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
  [14480] = 9,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(422), 1,
      anon_sym_PIPE,
    ACTIONS(444), 1,
      anon_sym_QMARK_QMARK,
    STATE(266), 1,
      sym_comment,
    ACTIONS(418), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(420), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(438), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(412), 3,
      sym_keyword_and,
      sym_keyword_or,
      anon_sym_RPAREN,
    ACTIONS(436), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
  [14516] = 10,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(422), 1,
      anon_sym_PIPE,
    ACTIONS(444), 1,
      anon_sym_QMARK_QMARK,
    ACTIONS(454), 1,
      sym_keyword_and,
    STATE(267), 1,
      sym_comment,
    ACTIONS(412), 2,
      sym_keyword_or,
      anon_sym_RPAREN,
    ACTIONS(418), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(420), 2,
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
  [14554] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(268), 1,
      sym_comment,
    ACTIONS(376), 5,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
      anon_sym__,
      sym__identifier,
    ACTIONS(374), 10,
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
  [14580] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(269), 1,
      sym_comment,
    ACTIONS(329), 5,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
      anon_sym__,
      sym__identifier,
    ACTIONS(327), 10,
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
  [14606] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(270), 1,
      sym_comment,
    ACTIONS(523), 5,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
      anon_sym__,
      sym__identifier,
    ACTIONS(521), 10,
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
  [14632] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(271), 1,
      sym_comment,
    ACTIONS(458), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(456), 13,
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
  [14658] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(272), 1,
      sym_comment,
    ACTIONS(527), 5,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
      anon_sym__,
      sym__identifier,
    ACTIONS(525), 10,
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
  [14684] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(960), 1,
      anon_sym_DASH_GT,
    STATE(273), 1,
      sym_comment,
    ACTIONS(458), 3,
      anon_sym_DASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(456), 11,
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
  [14712] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(962), 1,
      anon_sym_DASH_GT,
    STATE(274), 1,
      sym_comment,
    ACTIONS(458), 3,
      anon_sym_DASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(456), 11,
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
  [14740] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(275), 1,
      sym_comment,
    ACTIONS(311), 5,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
      anon_sym__,
      sym__identifier,
    ACTIONS(309), 10,
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
  [14766] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(276), 1,
      sym_comment,
    ACTIONS(511), 5,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
      anon_sym__,
      sym__identifier,
    ACTIONS(509), 10,
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
  [14792] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(964), 1,
      anon_sym_RPAREN,
    STATE(277), 1,
      sym_comment,
    ACTIONS(458), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(456), 12,
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
  [14820] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(278), 1,
      sym_comment,
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
  [14846] = 11,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(422), 1,
      anon_sym_PIPE,
    ACTIONS(444), 1,
      anon_sym_QMARK_QMARK,
    ACTIONS(956), 1,
      sym_keyword_and,
    ACTIONS(958), 1,
      sym_keyword_or,
    ACTIONS(966), 1,
      anon_sym_RPAREN,
    STATE(279), 1,
      sym_comment,
    ACTIONS(418), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(420), 2,
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
  [14886] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(968), 1,
      anon_sym_RPAREN,
    STATE(280), 1,
      sym_comment,
    ACTIONS(458), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(456), 12,
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
  [14914] = 11,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(422), 1,
      anon_sym_PIPE,
    ACTIONS(444), 1,
      anon_sym_QMARK_QMARK,
    ACTIONS(454), 1,
      sym_keyword_and,
    ACTIONS(464), 1,
      sym_keyword_or,
    ACTIONS(714), 1,
      anon_sym_EQ,
    STATE(281), 1,
      sym_comment,
    ACTIONS(418), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(420), 2,
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
  [14954] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(970), 1,
      anon_sym_RPAREN,
    STATE(282), 1,
      sym_comment,
    ACTIONS(458), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(456), 12,
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
  [14982] = 10,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(422), 1,
      anon_sym_PIPE,
    ACTIONS(444), 1,
      anon_sym_QMARK_QMARK,
    ACTIONS(454), 1,
      sym_keyword_and,
    ACTIONS(464), 1,
      sym_keyword_or,
    STATE(283), 1,
      sym_comment,
    ACTIONS(418), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(420), 2,
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
  [15019] = 13,
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
    ACTIONS(972), 1,
      ts_builtin_sym_end,
    STATE(284), 1,
      sym_comment,
    STATE(287), 1,
      aux_sym_program_repeat2,
    STATE(306), 1,
      aux_sym_program_repeat1,
    STATE(316), 1,
      sym_prql,
    STATE(135), 2,
      sym_from_text,
      sym_from,
    STATE(324), 3,
      sym_pipeline,
      sym_variable,
      sym_function_definition,
  [15062] = 10,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(422), 1,
      anon_sym_PIPE,
    ACTIONS(444), 1,
      anon_sym_QMARK_QMARK,
    ACTIONS(956), 1,
      sym_keyword_and,
    ACTIONS(958), 1,
      sym_keyword_or,
    STATE(285), 1,
      sym_comment,
    ACTIONS(418), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(420), 2,
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
  [15099] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(286), 1,
      sym_comment,
    STATE(319), 1,
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
  [15122] = 10,
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
    ACTIONS(976), 1,
      ts_builtin_sym_end,
    STATE(287), 1,
      sym_comment,
    STATE(288), 1,
      aux_sym_program_repeat2,
    STATE(135), 2,
      sym_from_text,
      sym_from,
    STATE(324), 3,
      sym_pipeline,
      sym_variable,
      sym_function_definition,
  [15156] = 9,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(978), 1,
      ts_builtin_sym_end,
    ACTIONS(980), 1,
      sym_keyword_from,
    ACTIONS(983), 1,
      sym_keyword_func,
    ACTIONS(986), 1,
      sym_keyword_let,
    ACTIONS(989), 1,
      sym_keyword_from_text,
    STATE(135), 2,
      sym_from_text,
      sym_from,
    STATE(288), 2,
      sym_comment,
      aux_sym_program_repeat2,
    STATE(324), 3,
      sym_pipeline,
      sym_variable,
      sym_function_definition,
  [15188] = 10,
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
    ACTIONS(972), 1,
      ts_builtin_sym_end,
    STATE(288), 1,
      aux_sym_program_repeat2,
    STATE(289), 1,
      sym_comment,
    STATE(135), 2,
      sym_from_text,
      sym_from,
    STATE(324), 3,
      sym_pipeline,
      sym_variable,
      sym_function_definition,
  [15222] = 9,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(539), 1,
      sym_keyword_aggregate,
    ACTIONS(541), 1,
      sym_keyword_sort,
    ACTIONS(543), 1,
      sym_keyword_take,
    ACTIONS(992), 1,
      sym_keyword_window,
    ACTIONS(994), 1,
      anon_sym_RPAREN,
    STATE(290), 1,
      sym_comment,
    STATE(291), 1,
      aux_sym_group_repeat2,
    STATE(335), 4,
      sym_aggregate,
      sym_sorts,
      sym_takes,
      sym_window,
  [15253] = 8,
    ACTIONS(3), 1,
      anon_sym_POUND,
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
    STATE(335), 4,
      sym_aggregate,
      sym_sorts,
      sym_takes,
      sym_window,
  [15282] = 9,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(539), 1,
      sym_keyword_aggregate,
    ACTIONS(541), 1,
      sym_keyword_sort,
    ACTIONS(543), 1,
      sym_keyword_take,
    ACTIONS(992), 1,
      sym_keyword_window,
    ACTIONS(1010), 1,
      anon_sym_RPAREN,
    STATE(291), 1,
      aux_sym_group_repeat2,
    STATE(292), 1,
      sym_comment,
    STATE(335), 4,
      sym_aggregate,
      sym_sorts,
      sym_takes,
      sym_window,
  [15313] = 9,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(539), 1,
      sym_keyword_aggregate,
    ACTIONS(541), 1,
      sym_keyword_sort,
    ACTIONS(543), 1,
      sym_keyword_take,
    ACTIONS(992), 1,
      sym_keyword_window,
    ACTIONS(1012), 1,
      anon_sym_RPAREN,
    STATE(291), 1,
      aux_sym_group_repeat2,
    STATE(293), 1,
      sym_comment,
    STATE(335), 4,
      sym_aggregate,
      sym_sorts,
      sym_takes,
      sym_window,
  [15344] = 9,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(539), 1,
      sym_keyword_aggregate,
    ACTIONS(541), 1,
      sym_keyword_sort,
    ACTIONS(543), 1,
      sym_keyword_take,
    ACTIONS(992), 1,
      sym_keyword_window,
    ACTIONS(1014), 1,
      anon_sym_RPAREN,
    STATE(291), 1,
      aux_sym_group_repeat2,
    STATE(294), 1,
      sym_comment,
    STATE(335), 4,
      sym_aggregate,
      sym_sorts,
      sym_takes,
      sym_window,
  [15375] = 9,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(539), 1,
      sym_keyword_aggregate,
    ACTIONS(541), 1,
      sym_keyword_sort,
    ACTIONS(543), 1,
      sym_keyword_take,
    ACTIONS(992), 1,
      sym_keyword_window,
    ACTIONS(1016), 1,
      anon_sym_RPAREN,
    STATE(291), 1,
      aux_sym_group_repeat2,
    STATE(295), 1,
      sym_comment,
    STATE(335), 4,
      sym_aggregate,
      sym_sorts,
      sym_takes,
      sym_window,
  [15406] = 8,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(539), 1,
      sym_keyword_aggregate,
    ACTIONS(541), 1,
      sym_keyword_sort,
    ACTIONS(543), 1,
      sym_keyword_take,
    ACTIONS(992), 1,
      sym_keyword_window,
    STATE(295), 1,
      aux_sym_group_repeat2,
    STATE(296), 1,
      sym_comment,
    STATE(335), 4,
      sym_aggregate,
      sym_sorts,
      sym_takes,
      sym_window,
  [15434] = 10,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(49), 1,
      anon_sym_BQUOTE,
    ACTIONS(1018), 1,
      anon_sym_COMMA,
    ACTIONS(1020), 1,
      anon_sym_RBRACK,
    ACTIONS(1022), 1,
      sym__identifier,
    STATE(184), 1,
      sym_identifier,
    STATE(297), 1,
      sym_comment,
    STATE(366), 1,
      sym_direction,
    STATE(391), 1,
      sym__sort_instruction,
    ACTIONS(263), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
  [15466] = 8,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(539), 1,
      sym_keyword_aggregate,
    ACTIONS(541), 1,
      sym_keyword_sort,
    ACTIONS(543), 1,
      sym_keyword_take,
    ACTIONS(992), 1,
      sym_keyword_window,
    STATE(292), 1,
      aux_sym_group_repeat2,
    STATE(298), 1,
      sym_comment,
    STATE(335), 4,
      sym_aggregate,
      sym_sorts,
      sym_takes,
      sym_window,
  [15494] = 8,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(539), 1,
      sym_keyword_aggregate,
    ACTIONS(541), 1,
      sym_keyword_sort,
    ACTIONS(543), 1,
      sym_keyword_take,
    ACTIONS(992), 1,
      sym_keyword_window,
    STATE(294), 1,
      aux_sym_group_repeat2,
    STATE(299), 1,
      sym_comment,
    STATE(335), 4,
      sym_aggregate,
      sym_sorts,
      sym_takes,
      sym_window,
  [15522] = 8,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(539), 1,
      sym_keyword_aggregate,
    ACTIONS(541), 1,
      sym_keyword_sort,
    ACTIONS(543), 1,
      sym_keyword_take,
    ACTIONS(992), 1,
      sym_keyword_window,
    STATE(293), 1,
      aux_sym_group_repeat2,
    STATE(300), 1,
      sym_comment,
    STATE(335), 4,
      sym_aggregate,
      sym_sorts,
      sym_takes,
      sym_window,
  [15550] = 8,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(539), 1,
      sym_keyword_aggregate,
    ACTIONS(541), 1,
      sym_keyword_sort,
    ACTIONS(543), 1,
      sym_keyword_take,
    ACTIONS(992), 1,
      sym_keyword_window,
    STATE(290), 1,
      aux_sym_group_repeat2,
    STATE(301), 1,
      sym_comment,
    STATE(335), 4,
      sym_aggregate,
      sym_sorts,
      sym_takes,
      sym_window,
  [15578] = 9,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(49), 1,
      anon_sym_BQUOTE,
    ACTIONS(1022), 1,
      sym__identifier,
    ACTIONS(1024), 1,
      anon_sym_LBRACK,
    STATE(184), 1,
      sym_identifier,
    STATE(193), 1,
      sym__sort_instruction,
    STATE(302), 1,
      sym_comment,
    STATE(366), 1,
      sym_direction,
    ACTIONS(263), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
  [15607] = 9,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(1026), 1,
      anon_sym_DASH,
    ACTIONS(1028), 1,
      anon_sym_AT,
    STATE(142), 1,
      aux_sym__friendly_number,
    STATE(303), 1,
      sym_comment,
    STATE(326), 1,
      sym_integer,
    STATE(343), 1,
      sym_range,
    STATE(433), 1,
      sym_date,
    ACTIONS(557), 2,
      sym__natural_number,
      anon_sym__,
  [15636] = 9,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(1026), 1,
      anon_sym_DASH,
    ACTIONS(1028), 1,
      anon_sym_AT,
    STATE(142), 1,
      aux_sym__friendly_number,
    STATE(191), 1,
      sym_integer,
    STATE(195), 1,
      sym_range,
    STATE(304), 1,
      sym_comment,
    STATE(433), 1,
      sym_date,
    ACTIONS(557), 2,
      sym__natural_number,
      anon_sym__,
  [15665] = 9,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(49), 1,
      anon_sym_BQUOTE,
    ACTIONS(1022), 1,
      sym__identifier,
    ACTIONS(1030), 1,
      anon_sym_RBRACK,
    STATE(184), 1,
      sym_identifier,
    STATE(305), 1,
      sym_comment,
    STATE(366), 1,
      sym_direction,
    STATE(398), 1,
      sym__sort_instruction,
    ACTIONS(263), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
  [15694] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(1034), 1,
      sym_keyword_from,
    ACTIONS(1036), 1,
      sym_keyword_prql,
    STATE(316), 1,
      sym_prql,
    STATE(306), 2,
      sym_comment,
      aux_sym_program_repeat1,
    ACTIONS(1032), 4,
      ts_builtin_sym_end,
      sym_keyword_func,
      sym_keyword_let,
      sym_keyword_from_text,
  [15717] = 9,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(49), 1,
      anon_sym_BQUOTE,
    ACTIONS(1022), 1,
      sym__identifier,
    ACTIONS(1039), 1,
      anon_sym_RBRACK,
    STATE(184), 1,
      sym_identifier,
    STATE(307), 1,
      sym_comment,
    STATE(366), 1,
      sym_direction,
    STATE(398), 1,
      sym__sort_instruction,
    ACTIONS(263), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
  [15746] = 7,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(120), 1,
      sym__identifier,
    ACTIONS(934), 1,
      sym__natural_number,
    ACTIONS(1041), 1,
      anon_sym__,
    STATE(308), 1,
      sym_comment,
    STATE(311), 1,
      aux_sym__friendly_number,
    ACTIONS(118), 3,
      anon_sym_DASH_GT,
      anon_sym_DOT,
      anon_sym_BQUOTE,
  [15770] = 9,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(49), 1,
      anon_sym_BQUOTE,
    ACTIONS(51), 1,
      sym__identifier,
    ACTIONS(1043), 1,
      sym_keyword_side,
    STATE(172), 1,
      sym__table_selection,
    STATE(190), 1,
      sym_identifier,
    STATE(204), 1,
      sym__table_reference,
    STATE(309), 1,
      sym_comment,
    STATE(334), 1,
      sym__join_definition,
  [15798] = 8,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(49), 1,
      anon_sym_BQUOTE,
    ACTIONS(1022), 1,
      sym__identifier,
    STATE(184), 1,
      sym_identifier,
    STATE(310), 1,
      sym_comment,
    STATE(366), 1,
      sym_direction,
    STATE(398), 1,
      sym__sort_instruction,
    ACTIONS(263), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
  [15824] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(113), 1,
      sym__identifier,
    ACTIONS(1045), 1,
      sym__natural_number,
    ACTIONS(1048), 1,
      anon_sym__,
    STATE(311), 2,
      aux_sym__friendly_number,
      sym_comment,
    ACTIONS(111), 3,
      anon_sym_DASH_GT,
      anon_sym_DOT,
      anon_sym_BQUOTE,
  [15846] = 7,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(124), 1,
      sym__identifier,
    ACTIONS(934), 1,
      sym__natural_number,
    ACTIONS(1041), 1,
      anon_sym__,
    STATE(311), 1,
      aux_sym__friendly_number,
    STATE(312), 1,
      sym_comment,
    ACTIONS(122), 3,
      anon_sym_DASH_GT,
      anon_sym_DOT,
      anon_sym_BQUOTE,
  [15870] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(1054), 1,
      anon_sym_LPAREN,
    STATE(351), 1,
      sym__window_definition,
    STATE(313), 2,
      sym_comment,
      aux_sym_window_definitions_repeat1,
    ACTIONS(1051), 3,
      sym_keyword_rolling,
      sym_keyword_rows,
      sym_keyword_expanding,
  [15889] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(314), 1,
      sym_comment,
    STATE(321), 1,
      aux_sym_window_definitions_repeat1,
    STATE(351), 1,
      sym__window_definition,
    STATE(438), 1,
      sym_window_definitions,
    ACTIONS(1056), 3,
      sym_keyword_rolling,
      sym_keyword_rows,
      sym_keyword_expanding,
  [15910] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(1060), 1,
      sym_keyword_from,
    STATE(315), 1,
      sym_comment,
    ACTIONS(1058), 5,
      ts_builtin_sym_end,
      sym_keyword_func,
      sym_keyword_let,
      sym_keyword_from_text,
      anon_sym_RPAREN,
  [15927] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(1064), 1,
      sym_keyword_from,
    STATE(316), 1,
      sym_comment,
    ACTIONS(1062), 5,
      ts_builtin_sym_end,
      sym_keyword_func,
      sym_keyword_let,
      sym_keyword_prql,
      sym_keyword_from_text,
  [15944] = 7,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(1066), 1,
      anon_sym_DASH_GT,
    ACTIONS(1068), 1,
      anon_sym_BQUOTE,
    ACTIONS(1071), 1,
      sym__identifier,
    STATE(352), 1,
      sym_identifier,
    STATE(360), 1,
      sym_parameter,
    STATE(317), 2,
      sym_comment,
      aux_sym_function_definition_repeat1,
  [15967] = 8,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(1074), 1,
      anon_sym_DASH_GT,
    ACTIONS(1076), 1,
      anon_sym_BQUOTE,
    ACTIONS(1078), 1,
      sym__identifier,
    STATE(317), 1,
      aux_sym_function_definition_repeat1,
    STATE(318), 1,
      sym_comment,
    STATE(352), 1,
      sym_identifier,
    STATE(360), 1,
      sym_parameter,
  [15992] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(1082), 1,
      sym_keyword_from,
    STATE(319), 1,
      sym_comment,
    ACTIONS(1080), 5,
      ts_builtin_sym_end,
      sym_keyword_func,
      sym_keyword_let,
      sym_keyword_prql,
      sym_keyword_from_text,
  [16009] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(1086), 1,
      sym_keyword_from,
    STATE(320), 1,
      sym_comment,
    ACTIONS(1084), 5,
      ts_builtin_sym_end,
      sym_keyword_func,
      sym_keyword_let,
      sym_keyword_prql,
      sym_keyword_from_text,
  [16026] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(1088), 1,
      anon_sym_LPAREN,
    STATE(313), 1,
      aux_sym_window_definitions_repeat1,
    STATE(321), 1,
      sym_comment,
    STATE(351), 1,
      sym__window_definition,
    ACTIONS(1056), 3,
      sym_keyword_rolling,
      sym_keyword_rows,
      sym_keyword_expanding,
  [16047] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(322), 1,
      sym_comment,
    ACTIONS(128), 2,
      anon_sym__,
      sym__identifier,
    ACTIONS(126), 4,
      anon_sym_DASH_GT,
      sym__natural_number,
      anon_sym_DOT,
      anon_sym_BQUOTE,
  [16064] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(1092), 1,
      sym_keyword_from,
    STATE(323), 1,
      sym_comment,
    ACTIONS(1090), 5,
      ts_builtin_sym_end,
      sym_keyword_func,
      sym_keyword_let,
      sym_keyword_prql,
      sym_keyword_from_text,
  [16081] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(1096), 1,
      sym_keyword_from,
    STATE(324), 1,
      sym_comment,
    ACTIONS(1094), 4,
      ts_builtin_sym_end,
      sym_keyword_func,
      sym_keyword_let,
      sym_keyword_from_text,
  [16097] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(1098), 1,
      anon_sym_DASH,
    STATE(13), 1,
      aux_sym__friendly_number,
    STATE(81), 1,
      sym_integer,
    STATE(325), 1,
      sym_comment,
    ACTIONS(43), 2,
      sym__natural_number,
      anon_sym__,
  [16117] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(726), 1,
      anon_sym_DOT_DOT,
    STATE(326), 1,
      sym_comment,
    ACTIONS(1100), 4,
      sym_keyword_rolling,
      sym_keyword_rows,
      sym_keyword_expanding,
      anon_sym_LPAREN,
  [16133] = 7,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(1076), 1,
      anon_sym_BQUOTE,
    ACTIONS(1078), 1,
      sym__identifier,
    STATE(318), 1,
      aux_sym_function_definition_repeat1,
    STATE(327), 1,
      sym_comment,
    STATE(352), 1,
      sym_identifier,
    STATE(360), 1,
      sym_parameter,
  [16155] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(1104), 1,
      sym_keyword_from,
    STATE(328), 1,
      sym_comment,
    ACTIONS(1102), 4,
      ts_builtin_sym_end,
      sym_keyword_func,
      sym_keyword_let,
      sym_keyword_from_text,
  [16171] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(1098), 1,
      anon_sym_DASH,
    STATE(13), 1,
      aux_sym__friendly_number,
    STATE(83), 1,
      sym_integer,
    STATE(329), 1,
      sym_comment,
    ACTIONS(43), 2,
      sym__natural_number,
      anon_sym__,
  [16191] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(1098), 1,
      anon_sym_DASH,
    STATE(13), 1,
      aux_sym__friendly_number,
    STATE(84), 1,
      sym_integer,
    STATE(330), 1,
      sym_comment,
    ACTIONS(43), 2,
      sym__natural_number,
      anon_sym__,
  [16211] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(1108), 1,
      sym_keyword_from,
    STATE(331), 1,
      sym_comment,
    ACTIONS(1106), 4,
      ts_builtin_sym_end,
      sym_keyword_func,
      sym_keyword_let,
      sym_keyword_from_text,
  [16227] = 7,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(49), 1,
      anon_sym_BQUOTE,
    ACTIONS(1022), 1,
      sym__identifier,
    STATE(190), 1,
      sym_identifier,
    STATE(204), 1,
      sym__table_reference,
    STATE(228), 1,
      sym__table_selection,
    STATE(332), 1,
      sym_comment,
  [16249] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(1098), 1,
      anon_sym_DASH,
    STATE(13), 1,
      aux_sym__friendly_number,
    STATE(169), 1,
      sym_integer,
    STATE(333), 1,
      sym_comment,
    ACTIONS(43), 2,
      sym__natural_number,
      anon_sym__,
  [16269] = 7,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(49), 1,
      anon_sym_BQUOTE,
    ACTIONS(1022), 1,
      sym__identifier,
    STATE(173), 1,
      sym__table_selection,
    STATE(190), 1,
      sym_identifier,
    STATE(204), 1,
      sym__table_reference,
    STATE(334), 1,
      sym_comment,
  [16291] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(335), 1,
      sym_comment,
    ACTIONS(1110), 5,
      sym_keyword_aggregate,
      sym_keyword_sort,
      sym_keyword_take,
      sym_keyword_window,
      anon_sym_RPAREN,
  [16305] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(7), 1,
      sym_keyword_from,
    ACTIONS(15), 1,
      sym_keyword_from_text,
    STATE(336), 1,
      sym_comment,
    STATE(417), 1,
      sym_pipeline,
    STATE(165), 2,
      sym_from_text,
      sym_from,
  [16325] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(337), 1,
      sym_comment,
    ACTIONS(1112), 5,
      sym_keyword_aggregate,
      sym_keyword_sort,
      sym_keyword_take,
      sym_keyword_window,
      anon_sym_RPAREN,
  [16339] = 7,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(49), 1,
      anon_sym_BQUOTE,
    ACTIONS(1022), 1,
      sym__identifier,
    STATE(190), 1,
      sym_identifier,
    STATE(204), 1,
      sym__table_reference,
    STATE(226), 1,
      sym__table_selection,
    STATE(338), 1,
      sym_comment,
  [16361] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(339), 1,
      sym_comment,
    ACTIONS(251), 4,
      anon_sym_COLON,
      anon_sym_DASH_GT,
      anon_sym_BQUOTE,
      sym__identifier,
  [16374] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(1114), 1,
      aux_sym__date_token1,
    ACTIONS(1116), 1,
      aux_sym__time_token1,
    STATE(79), 1,
      sym__date,
    STATE(97), 1,
      sym__time,
    STATE(340), 1,
      sym_comment,
  [16393] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(1118), 1,
      anon_sym_DOT,
    STATE(152), 1,
      aux_sym__friendly_number,
    STATE(341), 1,
      sym_comment,
    ACTIONS(101), 2,
      sym__natural_number,
      anon_sym__,
  [16410] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(1120), 1,
      anon_sym_DOT,
    STATE(252), 1,
      aux_sym__friendly_number,
    STATE(342), 1,
      sym_comment,
    ACTIONS(293), 2,
      sym__natural_number,
      anon_sym__,
  [16427] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(343), 1,
      sym_comment,
    ACTIONS(1100), 4,
      sym_keyword_rolling,
      sym_keyword_rows,
      sym_keyword_expanding,
      anon_sym_LPAREN,
  [16440] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(1122), 1,
      anon_sym_DOT,
    STATE(124), 1,
      aux_sym__friendly_number,
    STATE(344), 1,
      sym_comment,
    ACTIONS(69), 2,
      sym__natural_number,
      anon_sym__,
  [16457] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(1124), 1,
      sym__natural_number,
    STATE(345), 1,
      sym_comment,
    ACTIONS(333), 3,
      anon_sym_DASH_GT,
      anon_sym_BQUOTE,
      sym__identifier,
  [16472] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(346), 1,
      sym_comment,
    ACTIONS(1126), 4,
      sym_keyword_inner,
      sym_keyword_left,
      sym_keyword_right,
      sym_keyword_full,
  [16485] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(1128), 1,
      anon_sym_DOT,
    STATE(347), 1,
      sym_comment,
    ACTIONS(374), 3,
      anon_sym_DASH_GT,
      anon_sym_BQUOTE,
      sym__identifier,
  [16500] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(348), 1,
      sym_comment,
    ACTIONS(245), 4,
      anon_sym_COLON,
      anon_sym_DASH_GT,
      anon_sym_BQUOTE,
      sym__identifier,
  [16513] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(1130), 1,
      anon_sym_DOT,
    STATE(312), 1,
      aux_sym__friendly_number,
    STATE(349), 1,
      sym_comment,
    ACTIONS(934), 2,
      sym__natural_number,
      anon_sym__,
  [16530] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(49), 1,
      anon_sym_BQUOTE,
    ACTIONS(1022), 1,
      sym__identifier,
    STATE(196), 1,
      sym_identifier,
    STATE(206), 1,
      sym__table_reference,
    STATE(350), 1,
      sym_comment,
  [16549] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(351), 1,
      sym_comment,
    ACTIONS(1132), 4,
      sym_keyword_rolling,
      sym_keyword_rows,
      sym_keyword_expanding,
      anon_sym_LPAREN,
  [16562] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(1134), 1,
      anon_sym_COLON,
    STATE(352), 1,
      sym_comment,
    ACTIONS(1136), 3,
      anon_sym_DASH_GT,
      anon_sym_BQUOTE,
      sym__identifier,
  [16577] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(1138), 1,
      anon_sym_DOT,
    STATE(14), 1,
      aux_sym__friendly_number,
    STATE(353), 1,
      sym_comment,
    ACTIONS(43), 2,
      sym__natural_number,
      anon_sym__,
  [16594] = 4,
    ACTIONS(1140), 1,
      aux_sym__inner_triple_quotes_token1,
    ACTIONS(1143), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(1145), 1,
      anon_sym_POUND,
    STATE(354), 2,
      aux_sym__inner_triple_quotes,
      sym_comment,
  [16608] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(355), 1,
      sym_comment,
    ACTIONS(327), 3,
      anon_sym_DASH_GT,
      anon_sym_BQUOTE,
      sym__identifier,
  [16620] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(1147), 1,
      anon_sym_COMMA,
    ACTIONS(1150), 1,
      anon_sym_RBRACK,
    STATE(356), 2,
      sym_comment,
      aux_sym_sorts_repeat1,
  [16634] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(944), 1,
      anon_sym_RBRACK,
    ACTIONS(1152), 1,
      anon_sym_COMMA,
    STATE(357), 2,
      sym_comment,
      aux_sym_conditions_repeat1,
  [16648] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(277), 1,
      anon_sym_RBRACK,
    ACTIONS(1155), 1,
      anon_sym_COMMA,
    STATE(357), 1,
      aux_sym_conditions_repeat1,
    STATE(358), 1,
      sym_comment,
  [16664] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(1157), 1,
      anon_sym_COMMA,
    ACTIONS(1160), 1,
      anon_sym_RBRACK,
    STATE(359), 2,
      sym_comment,
      aux_sym_group_repeat1,
  [16678] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(360), 1,
      sym_comment,
    ACTIONS(1162), 3,
      anon_sym_DASH_GT,
      anon_sym_BQUOTE,
      sym__identifier,
  [16690] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(15), 1,
      sym_keyword_from_text,
    ACTIONS(1164), 1,
      anon_sym_LPAREN,
    STATE(140), 1,
      sym_from_text,
    STATE(361), 1,
      sym_comment,
  [16706] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(221), 1,
      anon_sym_RBRACK,
    ACTIONS(1166), 1,
      anon_sym_COMMA,
    STATE(359), 1,
      aux_sym_group_repeat1,
    STATE(362), 1,
      sym_comment,
  [16722] = 5,
    ACTIONS(1145), 1,
      anon_sym_POUND,
    ACTIONS(1168), 1,
      aux_sym__inner_triple_quotes_token1,
    ACTIONS(1170), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    STATE(354), 1,
      aux_sym__inner_triple_quotes,
    STATE(363), 1,
      sym_comment,
  [16738] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(148), 1,
      anon_sym_RBRACK,
    ACTIONS(1172), 1,
      anon_sym_COMMA,
    STATE(364), 2,
      sym_comment,
      aux_sym_switch_repeat2,
  [16752] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(365), 1,
      sym_comment,
    ACTIONS(1175), 3,
      anon_sym_BQUOTE,
      sym__identifier,
      aux_sym__date_token2,
  [16764] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(49), 1,
      anon_sym_BQUOTE,
    ACTIONS(1022), 1,
      sym__identifier,
    STATE(176), 1,
      sym_identifier,
    STATE(366), 1,
      sym_comment,
  [16780] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(146), 1,
      aux_sym__friendly_number,
    STATE(367), 1,
      sym_comment,
    ACTIONS(557), 2,
      sym__natural_number,
      anon_sym__,
  [16794] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(1177), 1,
      anon_sym_COMMA,
    ACTIONS(1179), 1,
      anon_sym_RBRACK,
    STATE(368), 1,
      sym_comment,
    STATE(390), 1,
      aux_sym_group_repeat1,
  [16810] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(369), 1,
      sym_comment,
    ACTIONS(1181), 3,
      anon_sym_DASH_GT,
      anon_sym_BQUOTE,
      sym__identifier,
  [16822] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(1183), 1,
      anon_sym_COMMA,
    ACTIONS(1186), 1,
      anon_sym_RBRACK,
    STATE(370), 2,
      sym_comment,
      aux_sym_derives_repeat1,
  [16836] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(207), 1,
      anon_sym_RBRACK,
    ACTIONS(1188), 1,
      anon_sym_COMMA,
    STATE(371), 1,
      sym_comment,
    STATE(380), 1,
      aux_sym_group_repeat1,
  [16852] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(49), 1,
      anon_sym_BQUOTE,
    ACTIONS(1022), 1,
      sym__identifier,
    STATE(372), 1,
      sym_comment,
    STATE(485), 1,
      sym_identifier,
  [16868] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(373), 1,
      sym_comment,
    ACTIONS(374), 3,
      anon_sym_DASH_GT,
      anon_sym_BQUOTE,
      sym__identifier,
  [16880] = 5,
    ACTIONS(1145), 1,
      anon_sym_POUND,
    ACTIONS(1168), 1,
      aux_sym__inner_triple_quotes_token1,
    ACTIONS(1190), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    STATE(354), 1,
      aux_sym__inner_triple_quotes,
    STATE(374), 1,
      sym_comment,
  [16896] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(1192), 1,
      sym_keyword_format,
    ACTIONS(1194), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    STATE(240), 1,
      sym__triple_quote_string,
    STATE(375), 1,
      sym_comment,
  [16912] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(215), 1,
      anon_sym_RBRACK,
    ACTIONS(1196), 1,
      anon_sym_COMMA,
    STATE(362), 1,
      aux_sym_group_repeat1,
    STATE(376), 1,
      sym_comment,
  [16928] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(237), 1,
      anon_sym_RBRACK,
    ACTIONS(1198), 1,
      anon_sym_COMMA,
    STATE(364), 1,
      aux_sym_switch_repeat2,
    STATE(377), 1,
      sym_comment,
  [16944] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(14), 1,
      aux_sym__friendly_number,
    STATE(378), 1,
      sym_comment,
    ACTIONS(43), 2,
      sym__natural_number,
      anon_sym__,
  [16958] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(49), 1,
      anon_sym_BQUOTE,
    ACTIONS(1022), 1,
      sym__identifier,
    STATE(99), 1,
      sym_identifier,
    STATE(379), 1,
      sym_comment,
  [16974] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(215), 1,
      anon_sym_RBRACK,
    ACTIONS(1196), 1,
      anon_sym_COMMA,
    STATE(359), 1,
      aux_sym_group_repeat1,
    STATE(380), 1,
      sym_comment,
  [16990] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(1200), 1,
      anon_sym_COMMA,
    ACTIONS(1202), 1,
      anon_sym_RBRACK,
    STATE(370), 1,
      aux_sym_derives_repeat1,
    STATE(381), 1,
      sym_comment,
  [17006] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(382), 1,
      sym_comment,
    ACTIONS(333), 3,
      anon_sym_DASH_GT,
      anon_sym_BQUOTE,
      sym__identifier,
  [17018] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(1204), 1,
      anon_sym_COMMA,
    ACTIONS(1206), 1,
      anon_sym_RBRACK,
    STATE(383), 1,
      sym_comment,
    STATE(393), 1,
      aux_sym_derives_repeat1,
  [17034] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(1076), 1,
      anon_sym_BQUOTE,
    ACTIONS(1078), 1,
      sym__identifier,
    STATE(327), 1,
      sym_identifier,
    STATE(384), 1,
      sym_comment,
  [17050] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(385), 1,
      sym_comment,
    ACTIONS(404), 3,
      anon_sym_DASH_GT,
      anon_sym_BQUOTE,
      sym__identifier,
  [17062] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(386), 1,
      sym_comment,
    ACTIONS(309), 3,
      anon_sym_DASH_GT,
      anon_sym_BQUOTE,
      sym__identifier,
  [17074] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(387), 1,
      sym_comment,
    ACTIONS(400), 3,
      anon_sym_DASH_GT,
      anon_sym_BQUOTE,
      sym__identifier,
  [17086] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(1030), 1,
      anon_sym_RBRACK,
    ACTIONS(1208), 1,
      anon_sym_COMMA,
    STATE(356), 1,
      aux_sym_sorts_repeat1,
    STATE(388), 1,
      sym_comment,
  [17102] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(55), 1,
      anon_sym_RBRACK,
    ACTIONS(1210), 1,
      anon_sym_COMMA,
    STATE(389), 1,
      sym_comment,
    STATE(392), 1,
      aux_sym_aggregate_repeat1,
  [17118] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(219), 1,
      anon_sym_RBRACK,
    ACTIONS(1212), 1,
      anon_sym_COMMA,
    STATE(359), 1,
      aux_sym_group_repeat1,
    STATE(390), 1,
      sym_comment,
  [17134] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(1214), 1,
      anon_sym_COMMA,
    ACTIONS(1216), 1,
      anon_sym_RBRACK,
    STATE(388), 1,
      aux_sym_sorts_repeat1,
    STATE(391), 1,
      sym_comment,
  [17150] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(808), 1,
      anon_sym_RBRACK,
    ACTIONS(1218), 1,
      anon_sym_COMMA,
    STATE(392), 2,
      sym_comment,
      aux_sym_aggregate_repeat1,
  [17164] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(227), 1,
      anon_sym_RBRACK,
    ACTIONS(1221), 1,
      anon_sym_COMMA,
    STATE(370), 1,
      aux_sym_derives_repeat1,
    STATE(393), 1,
      sym_comment,
  [17180] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(752), 1,
      anon_sym_COMMA,
    ACTIONS(754), 1,
      anon_sym_RBRACK,
    STATE(389), 1,
      aux_sym_aggregate_repeat1,
    STATE(394), 1,
      sym_comment,
  [17196] = 5,
    ACTIONS(1145), 1,
      anon_sym_POUND,
    ACTIONS(1168), 1,
      aux_sym__inner_triple_quotes_token1,
    ACTIONS(1223), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    STATE(354), 1,
      aux_sym__inner_triple_quotes,
    STATE(395), 1,
      sym_comment,
  [17212] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(1194), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    STATE(208), 1,
      sym__triple_quote_string,
    STATE(396), 1,
      sym_comment,
  [17225] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(31), 1,
      anon_sym_DQUOTE,
    STATE(323), 1,
      sym__double_quote_string,
    STATE(397), 1,
      sym_comment,
  [17238] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(398), 1,
      sym_comment,
    ACTIONS(1150), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [17249] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(399), 1,
      sym_comment,
    ACTIONS(1186), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [17260] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(1225), 1,
      sym_keyword_version,
    ACTIONS(1227), 1,
      sym_keyword_target,
    STATE(400), 1,
      sym_comment,
  [17273] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(401), 1,
      sym_comment,
    ACTIONS(1160), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [17284] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(402), 1,
      sym_comment,
    ACTIONS(1229), 2,
      anon_sym_BQUOTE,
      sym__identifier,
  [17295] = 4,
    ACTIONS(1145), 1,
      anon_sym_POUND,
    ACTIONS(1168), 1,
      aux_sym__inner_triple_quotes_token1,
    STATE(363), 1,
      aux_sym__inner_triple_quotes,
    STATE(403), 1,
      sym_comment,
  [17308] = 4,
    ACTIONS(1145), 1,
      anon_sym_POUND,
    ACTIONS(1168), 1,
      aux_sym__inner_triple_quotes_token1,
    STATE(395), 1,
      aux_sym__inner_triple_quotes,
    STATE(404), 1,
      sym_comment,
  [17321] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(1231), 1,
      aux_sym__time_token1,
    STATE(50), 1,
      sym__time,
    STATE(405), 1,
      sym_comment,
  [17334] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(406), 1,
      sym_comment,
    ACTIONS(808), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [17345] = 3,
    ACTIONS(1145), 1,
      anon_sym_POUND,
    STATE(407), 1,
      sym_comment,
    ACTIONS(1233), 2,
      aux_sym__inner_triple_quotes_token1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
  [17356] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(408), 1,
      sym_comment,
    ACTIONS(1235), 2,
      sym_keyword_csv,
      sym_keyword_json,
  [17367] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(1114), 1,
      aux_sym__date_token1,
    STATE(162), 1,
      sym__date,
    STATE(409), 1,
      sym_comment,
  [17380] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(1028), 1,
      anon_sym_AT,
    STATE(169), 1,
      sym_date,
    STATE(410), 1,
      sym_comment,
  [17393] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(1237), 1,
      sym_keyword_derive,
    STATE(411), 1,
      sym_comment,
    STATE(468), 1,
      sym_derives,
  [17406] = 4,
    ACTIONS(1145), 1,
      anon_sym_POUND,
    ACTIONS(1168), 1,
      aux_sym__inner_triple_quotes_token1,
    STATE(374), 1,
      aux_sym__inner_triple_quotes,
    STATE(412), 1,
      sym_comment,
  [17419] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(1239), 1,
      anon_sym_BQUOTE,
    STATE(413), 1,
      sym_comment,
  [17429] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(1241), 1,
      anon_sym_COLON,
    STATE(414), 1,
      sym_comment,
  [17439] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(1243), 1,
      aux_sym__date_token2,
    STATE(415), 1,
      sym_comment,
  [17449] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(1245), 1,
      aux_sym__date_token2,
    STATE(416), 1,
      sym_comment,
  [17459] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(1247), 1,
      anon_sym_RPAREN,
    STATE(417), 1,
      sym_comment,
  [17469] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(207), 1,
      anon_sym_RBRACK,
    STATE(418), 1,
      sym_comment,
  [17479] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(1216), 1,
      anon_sym_RBRACK,
    STATE(419), 1,
      sym_comment,
  [17489] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(754), 1,
      anon_sym_RBRACK,
    STATE(420), 1,
      sym_comment,
  [17499] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(1249), 1,
      anon_sym_LPAREN,
    STATE(421), 1,
      sym_comment,
  [17509] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(1179), 1,
      anon_sym_RBRACK,
    STATE(422), 1,
      sym_comment,
  [17519] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(1206), 1,
      anon_sym_RBRACK,
    STATE(423), 1,
      sym_comment,
  [17529] = 3,
    ACTIONS(1145), 1,
      anon_sym_POUND,
    ACTIONS(1251), 1,
      aux_sym_comment_token1,
    STATE(424), 1,
      sym_comment,
  [17539] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(1253), 1,
      anon_sym_DASH,
    STATE(425), 1,
      sym_comment,
  [17549] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(1255), 1,
      anon_sym_DQUOTE,
    STATE(426), 1,
      sym_comment,
  [17559] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(1257), 1,
      anon_sym_DQUOTE,
    STATE(427), 1,
      sym_comment,
  [17569] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(1259), 1,
      anon_sym_SQUOTE,
    STATE(428), 1,
      sym_comment,
  [17579] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(1261), 1,
      anon_sym_DQUOTE,
    STATE(429), 1,
      sym_comment,
  [17589] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(337), 1,
      sym__natural_number,
    STATE(430), 1,
      sym_comment,
  [17599] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(1263), 1,
      anon_sym_LBRACK,
    STATE(431), 1,
      sym_comment,
  [17609] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(1265), 1,
      anon_sym_COLON,
    STATE(432), 1,
      sym_comment,
  [17619] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(1267), 1,
      anon_sym_DOT_DOT,
    STATE(433), 1,
      sym_comment,
  [17629] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(1269), 1,
      aux_sym__date_token2,
    STATE(434), 1,
      sym_comment,
  [17639] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(1271), 1,
      anon_sym_LPAREN,
    STATE(435), 1,
      sym_comment,
  [17649] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(1273), 1,
      anon_sym_LPAREN,
    STATE(436), 1,
      sym_comment,
  [17659] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(1275), 1,
      anon_sym_DOT,
    STATE(437), 1,
      sym_comment,
  [17669] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(1277), 1,
      anon_sym_LPAREN,
    STATE(438), 1,
      sym_comment,
  [17679] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(1279), 1,
      sym__natural_number,
    STATE(439), 1,
      sym_comment,
  [17689] = 3,
    ACTIONS(1145), 1,
      anon_sym_POUND,
    ACTIONS(1281), 1,
      aux_sym__double_quote_string_token1,
    STATE(440), 1,
      sym_comment,
  [17699] = 3,
    ACTIONS(1145), 1,
      anon_sym_POUND,
    ACTIONS(1283), 1,
      aux_sym__double_quote_string_token1,
    STATE(441), 1,
      sym_comment,
  [17709] = 3,
    ACTIONS(1145), 1,
      anon_sym_POUND,
    ACTIONS(1285), 1,
      aux_sym__single_quote_string_token1,
    STATE(442), 1,
      sym_comment,
  [17719] = 3,
    ACTIONS(1145), 1,
      anon_sym_POUND,
    ACTIONS(1287), 1,
      aux_sym__double_quote_string_token1,
    STATE(443), 1,
      sym_comment,
  [17729] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(1289), 1,
      anon_sym_COLON,
    STATE(444), 1,
      sym_comment,
  [17739] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(1291), 1,
      aux_sym__date_token2,
    STATE(445), 1,
      sym_comment,
  [17749] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(1293), 1,
      aux_sym__date_token2,
    STATE(446), 1,
      sym_comment,
  [17759] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(1295), 1,
      anon_sym_COMMA,
    STATE(447), 1,
      sym_comment,
  [17769] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(1297), 1,
      anon_sym_COMMA,
    STATE(448), 1,
      sym_comment,
  [17779] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(1299), 1,
      anon_sym_BQUOTE,
    STATE(449), 1,
      sym_comment,
  [17789] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(1301), 1,
      anon_sym_LBRACK,
    STATE(450), 1,
      sym_comment,
  [17799] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(215), 1,
      anon_sym_RBRACK,
    STATE(451), 1,
      sym_comment,
  [17809] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(1303), 1,
      anon_sym_RPAREN,
    STATE(452), 1,
      sym_comment,
  [17819] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(1305), 1,
      sym__natural_number,
    STATE(453), 1,
      sym_comment,
  [17829] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(1124), 1,
      sym__natural_number,
    STATE(454), 1,
      sym_comment,
  [17839] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(1307), 1,
      anon_sym_DQUOTE,
    STATE(455), 1,
      sym_comment,
  [17849] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(1309), 1,
      anon_sym_SQUOTE,
    STATE(456), 1,
      sym_comment,
  [17859] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(1311), 1,
      anon_sym_RPAREN,
    STATE(457), 1,
      sym_comment,
  [17869] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(1313), 1,
      anon_sym_LBRACK,
    STATE(458), 1,
      sym_comment,
  [17879] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(1315), 1,
      anon_sym_BQUOTE,
    STATE(459), 1,
      sym_comment,
  [17889] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(1317), 1,
      anon_sym_RBRACK,
    STATE(460), 1,
      sym_comment,
  [17899] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(1319), 1,
      sym__natural_number,
    STATE(461), 1,
      sym_comment,
  [17909] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(1321), 1,
      sym__natural_number,
    STATE(462), 1,
      sym_comment,
  [17919] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(1323), 1,
      anon_sym_DQUOTE,
    STATE(463), 1,
      sym_comment,
  [17929] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(1325), 1,
      anon_sym_SQUOTE,
    STATE(464), 1,
      sym_comment,
  [17939] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(1327), 1,
      anon_sym_COLON,
    STATE(465), 1,
      sym_comment,
  [17949] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(1329), 1,
      anon_sym_COLON,
    STATE(466), 1,
      sym_comment,
  [17959] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(1331), 1,
      anon_sym_BQUOTE,
    STATE(467), 1,
      sym_comment,
  [17969] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(1333), 1,
      anon_sym_RPAREN,
    STATE(468), 1,
      sym_comment,
  [17979] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(1335), 1,
      sym__natural_number,
    STATE(469), 1,
      sym_comment,
  [17989] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(1337), 1,
      sym__natural_number,
    STATE(470), 1,
      sym_comment,
  [17999] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(1339), 1,
      anon_sym_DQUOTE,
    STATE(471), 1,
      sym_comment,
  [18009] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(1341), 1,
      anon_sym_SQUOTE,
    STATE(472), 1,
      sym_comment,
  [18019] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(1343), 1,
      anon_sym_BQUOTE,
    STATE(473), 1,
      sym_comment,
  [18029] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(1345), 1,
      anon_sym_LPAREN,
    STATE(474), 1,
      sym_comment,
  [18039] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(1347), 1,
      sym__natural_number,
    STATE(475), 1,
      sym_comment,
  [18049] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(1349), 1,
      sym__natural_number,
    STATE(476), 1,
      sym_comment,
  [18059] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(1351), 1,
      anon_sym_DQUOTE,
    STATE(477), 1,
      sym_comment,
  [18069] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(1353), 1,
      anon_sym_SQUOTE,
    STATE(478), 1,
      sym_comment,
  [18079] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(1355), 1,
      anon_sym_BQUOTE,
    STATE(479), 1,
      sym_comment,
  [18089] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(1357), 1,
      anon_sym_BQUOTE,
    STATE(480), 1,
      sym_comment,
  [18099] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(1359), 1,
      anon_sym_BQUOTE,
    STATE(481), 1,
      sym_comment,
  [18109] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(1361), 1,
      sym__identifier_dot,
    STATE(482), 1,
      sym_comment,
  [18119] = 3,
    ACTIONS(1145), 1,
      anon_sym_POUND,
    ACTIONS(1363), 1,
      aux_sym__double_quote_string_token1,
    STATE(483), 1,
      sym_comment,
  [18129] = 3,
    ACTIONS(1145), 1,
      anon_sym_POUND,
    ACTIONS(1365), 1,
      aux_sym__single_quote_string_token1,
    STATE(484), 1,
      sym_comment,
  [18139] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(1367), 1,
      anon_sym_EQ,
    STATE(485), 1,
      sym_comment,
  [18149] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(1369), 1,
      sym__identifier_dot,
    STATE(486), 1,
      sym_comment,
  [18159] = 3,
    ACTIONS(1145), 1,
      anon_sym_POUND,
    ACTIONS(1371), 1,
      aux_sym__double_quote_string_token1,
    STATE(487), 1,
      sym_comment,
  [18169] = 3,
    ACTIONS(1145), 1,
      anon_sym_POUND,
    ACTIONS(1373), 1,
      aux_sym__single_quote_string_token1,
    STATE(488), 1,
      sym_comment,
  [18179] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(1375), 1,
      sym__identifier_dot,
    STATE(489), 1,
      sym_comment,
  [18189] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(1377), 1,
      sym__identifier_dot,
    STATE(490), 1,
      sym_comment,
  [18199] = 3,
    ACTIONS(1145), 1,
      anon_sym_POUND,
    ACTIONS(1379), 1,
      aux_sym__double_quote_string_token1,
    STATE(491), 1,
      sym_comment,
  [18209] = 3,
    ACTIONS(1145), 1,
      anon_sym_POUND,
    ACTIONS(1381), 1,
      aux_sym__single_quote_string_token1,
    STATE(492), 1,
      sym_comment,
  [18219] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(1383), 1,
      sym__identifier_dot,
    STATE(493), 1,
      sym_comment,
  [18229] = 3,
    ACTIONS(1145), 1,
      anon_sym_POUND,
    ACTIONS(1385), 1,
      aux_sym__double_quote_string_token1,
    STATE(494), 1,
      sym_comment,
  [18239] = 3,
    ACTIONS(1145), 1,
      anon_sym_POUND,
    ACTIONS(1387), 1,
      aux_sym__single_quote_string_token1,
    STATE(495), 1,
      sym_comment,
  [18249] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(1389), 1,
      sym__identifier_dot,
    STATE(496), 1,
      sym_comment,
  [18259] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(1391), 1,
      sym__identifier_dot,
    STATE(497), 1,
      sym_comment,
  [18269] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(1393), 1,
      sym__identifier_dot,
    STATE(498), 1,
      sym_comment,
  [18279] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(1395), 1,
      anon_sym_DASH,
    STATE(499), 1,
      sym_comment,
  [18289] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(1397), 1,
      ts_builtin_sym_end,
    STATE(500), 1,
      sym_comment,
  [18299] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(132), 1,
      anon_sym_RBRACK,
    STATE(501), 1,
      sym_comment,
  [18309] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(884), 1,
      anon_sym_RBRACK,
    STATE(502), 1,
      sym_comment,
  [18319] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(1399), 1,
      anon_sym_LPAREN,
    STATE(503), 1,
      sym_comment,
  [18329] = 1,
    ACTIONS(1401), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 125,
  [SMALL_STATE(4)] = 247,
  [SMALL_STATE(5)] = 369,
  [SMALL_STATE(6)] = 462,
  [SMALL_STATE(7)] = 581,
  [SMALL_STATE(8)] = 700,
  [SMALL_STATE(9)] = 819,
  [SMALL_STATE(10)] = 938,
  [SMALL_STATE(11)] = 1055,
  [SMALL_STATE(12)] = 1144,
  [SMALL_STATE(13)] = 1202,
  [SMALL_STATE(14)] = 1262,
  [SMALL_STATE(15)] = 1322,
  [SMALL_STATE(16)] = 1377,
  [SMALL_STATE(17)] = 1493,
  [SMALL_STATE(18)] = 1602,
  [SMALL_STATE(19)] = 1655,
  [SMALL_STATE(20)] = 1764,
  [SMALL_STATE(21)] = 1875,
  [SMALL_STATE(22)] = 1988,
  [SMALL_STATE(23)] = 2097,
  [SMALL_STATE(24)] = 2206,
  [SMALL_STATE(25)] = 2315,
  [SMALL_STATE(26)] = 2424,
  [SMALL_STATE(27)] = 2533,
  [SMALL_STATE(28)] = 2639,
  [SMALL_STATE(29)] = 2745,
  [SMALL_STATE(30)] = 2855,
  [SMALL_STATE(31)] = 2961,
  [SMALL_STATE(32)] = 3067,
  [SMALL_STATE(33)] = 3173,
  [SMALL_STATE(34)] = 3279,
  [SMALL_STATE(35)] = 3385,
  [SMALL_STATE(36)] = 3491,
  [SMALL_STATE(37)] = 3599,
  [SMALL_STATE(38)] = 3709,
  [SMALL_STATE(39)] = 3815,
  [SMALL_STATE(40)] = 3921,
  [SMALL_STATE(41)] = 4027,
  [SMALL_STATE(42)] = 4133,
  [SMALL_STATE(43)] = 4184,
  [SMALL_STATE(44)] = 4291,
  [SMALL_STATE(45)] = 4394,
  [SMALL_STATE(46)] = 4495,
  [SMALL_STATE(47)] = 4598,
  [SMALL_STATE(48)] = 4701,
  [SMALL_STATE(49)] = 4752,
  [SMALL_STATE(50)] = 4854,
  [SMALL_STATE(51)] = 4914,
  [SMALL_STATE(52)] = 4964,
  [SMALL_STATE(53)] = 5018,
  [SMALL_STATE(54)] = 5068,
  [SMALL_STATE(55)] = 5168,
  [SMALL_STATE(56)] = 5270,
  [SMALL_STATE(57)] = 5324,
  [SMALL_STATE(58)] = 5421,
  [SMALL_STATE(59)] = 5502,
  [SMALL_STATE(60)] = 5601,
  [SMALL_STATE(61)] = 5700,
  [SMALL_STATE(62)] = 5797,
  [SMALL_STATE(63)] = 5894,
  [SMALL_STATE(64)] = 5991,
  [SMALL_STATE(65)] = 6088,
  [SMALL_STATE(66)] = 6185,
  [SMALL_STATE(67)] = 6282,
  [SMALL_STATE(68)] = 6379,
  [SMALL_STATE(69)] = 6476,
  [SMALL_STATE(70)] = 6575,
  [SMALL_STATE(71)] = 6626,
  [SMALL_STATE(72)] = 6725,
  [SMALL_STATE(73)] = 6822,
  [SMALL_STATE(74)] = 6919,
  [SMALL_STATE(75)] = 7018,
  [SMALL_STATE(76)] = 7067,
  [SMALL_STATE(77)] = 7166,
  [SMALL_STATE(78)] = 7216,
  [SMALL_STATE(79)] = 7298,
  [SMALL_STATE(80)] = 7348,
  [SMALL_STATE(81)] = 7398,
  [SMALL_STATE(82)] = 7446,
  [SMALL_STATE(83)] = 7496,
  [SMALL_STATE(84)] = 7544,
  [SMALL_STATE(85)] = 7592,
  [SMALL_STATE(86)] = 7672,
  [SMALL_STATE(87)] = 7722,
  [SMALL_STATE(88)] = 7769,
  [SMALL_STATE(89)] = 7816,
  [SMALL_STATE(90)] = 7863,
  [SMALL_STATE(91)] = 7910,
  [SMALL_STATE(92)] = 7957,
  [SMALL_STATE(93)] = 8004,
  [SMALL_STATE(94)] = 8051,
  [SMALL_STATE(95)] = 8098,
  [SMALL_STATE(96)] = 8145,
  [SMALL_STATE(97)] = 8200,
  [SMALL_STATE(98)] = 8247,
  [SMALL_STATE(99)] = 8294,
  [SMALL_STATE(100)] = 8341,
  [SMALL_STATE(101)] = 8388,
  [SMALL_STATE(102)] = 8447,
  [SMALL_STATE(103)] = 8494,
  [SMALL_STATE(104)] = 8545,
  [SMALL_STATE(105)] = 8598,
  [SMALL_STATE(106)] = 8645,
  [SMALL_STATE(107)] = 8692,
  [SMALL_STATE(108)] = 8753,
  [SMALL_STATE(109)] = 8800,
  [SMALL_STATE(110)] = 8847,
  [SMALL_STATE(111)] = 8910,
  [SMALL_STATE(112)] = 8957,
  [SMALL_STATE(113)] = 9004,
  [SMALL_STATE(114)] = 9051,
  [SMALL_STATE(115)] = 9112,
  [SMALL_STATE(116)] = 9173,
  [SMALL_STATE(117)] = 9251,
  [SMALL_STATE(118)] = 9327,
  [SMALL_STATE(119)] = 9387,
  [SMALL_STATE(120)] = 9445,
  [SMALL_STATE(121)] = 9484,
  [SMALL_STATE(122)] = 9523,
  [SMALL_STATE(123)] = 9564,
  [SMALL_STATE(124)] = 9605,
  [SMALL_STATE(125)] = 9646,
  [SMALL_STATE(126)] = 9685,
  [SMALL_STATE(127)] = 9724,
  [SMALL_STATE(128)] = 9767,
  [SMALL_STATE(129)] = 9805,
  [SMALL_STATE(130)] = 9843,
  [SMALL_STATE(131)] = 9881,
  [SMALL_STATE(132)] = 9919,
  [SMALL_STATE(133)] = 9957,
  [SMALL_STATE(134)] = 9995,
  [SMALL_STATE(135)] = 10033,
  [SMALL_STATE(136)] = 10095,
  [SMALL_STATE(137)] = 10133,
  [SMALL_STATE(138)] = 10187,
  [SMALL_STATE(139)] = 10225,
  [SMALL_STATE(140)] = 10263,
  [SMALL_STATE(141)] = 10325,
  [SMALL_STATE(142)] = 10363,
  [SMALL_STATE(143)] = 10404,
  [SMALL_STATE(144)] = 10443,
  [SMALL_STATE(145)] = 10500,
  [SMALL_STATE(146)] = 10559,
  [SMALL_STATE(147)] = 10600,
  [SMALL_STATE(148)] = 10666,
  [SMALL_STATE(149)] = 10702,
  [SMALL_STATE(150)] = 10770,
  [SMALL_STATE(151)] = 10805,
  [SMALL_STATE(152)] = 10842,
  [SMALL_STATE(153)] = 10879,
  [SMALL_STATE(154)] = 10916,
  [SMALL_STATE(155)] = 10951,
  [SMALL_STATE(156)] = 10990,
  [SMALL_STATE(157)] = 11024,
  [SMALL_STATE(158)] = 11058,
  [SMALL_STATE(159)] = 11092,
  [SMALL_STATE(160)] = 11126,
  [SMALL_STATE(161)] = 11160,
  [SMALL_STATE(162)] = 11194,
  [SMALL_STATE(163)] = 11228,
  [SMALL_STATE(164)] = 11262,
  [SMALL_STATE(165)] = 11296,
  [SMALL_STATE(166)] = 11352,
  [SMALL_STATE(167)] = 11386,
  [SMALL_STATE(168)] = 11420,
  [SMALL_STATE(169)] = 11454,
  [SMALL_STATE(170)] = 11487,
  [SMALL_STATE(171)] = 11538,
  [SMALL_STATE(172)] = 11591,
  [SMALL_STATE(173)] = 11628,
  [SMALL_STATE(174)] = 11665,
  [SMALL_STATE(175)] = 11696,
  [SMALL_STATE(176)] = 11727,
  [SMALL_STATE(177)] = 11758,
  [SMALL_STATE(178)] = 11789,
  [SMALL_STATE(179)] = 11820,
  [SMALL_STATE(180)] = 11851,
  [SMALL_STATE(181)] = 11882,
  [SMALL_STATE(182)] = 11913,
  [SMALL_STATE(183)] = 11944,
  [SMALL_STATE(184)] = 11975,
  [SMALL_STATE(185)] = 12006,
  [SMALL_STATE(186)] = 12036,
  [SMALL_STATE(187)] = 12066,
  [SMALL_STATE(188)] = 12100,
  [SMALL_STATE(189)] = 12130,
  [SMALL_STATE(190)] = 12176,
  [SMALL_STATE(191)] = 12208,
  [SMALL_STATE(192)] = 12240,
  [SMALL_STATE(193)] = 12269,
  [SMALL_STATE(194)] = 12298,
  [SMALL_STATE(195)] = 12329,
  [SMALL_STATE(196)] = 12358,
  [SMALL_STATE(197)] = 12387,
  [SMALL_STATE(198)] = 12416,
  [SMALL_STATE(199)] = 12445,
  [SMALL_STATE(200)] = 12474,
  [SMALL_STATE(201)] = 12503,
  [SMALL_STATE(202)] = 12538,
  [SMALL_STATE(203)] = 12567,
  [SMALL_STATE(204)] = 12596,
  [SMALL_STATE(205)] = 12625,
  [SMALL_STATE(206)] = 12654,
  [SMALL_STATE(207)] = 12683,
  [SMALL_STATE(208)] = 12711,
  [SMALL_STATE(209)] = 12739,
  [SMALL_STATE(210)] = 12767,
  [SMALL_STATE(211)] = 12795,
  [SMALL_STATE(212)] = 12823,
  [SMALL_STATE(213)] = 12851,
  [SMALL_STATE(214)] = 12879,
  [SMALL_STATE(215)] = 12907,
  [SMALL_STATE(216)] = 12935,
  [SMALL_STATE(217)] = 12965,
  [SMALL_STATE(218)] = 12993,
  [SMALL_STATE(219)] = 13021,
  [SMALL_STATE(220)] = 13049,
  [SMALL_STATE(221)] = 13077,
  [SMALL_STATE(222)] = 13105,
  [SMALL_STATE(223)] = 13133,
  [SMALL_STATE(224)] = 13161,
  [SMALL_STATE(225)] = 13189,
  [SMALL_STATE(226)] = 13217,
  [SMALL_STATE(227)] = 13245,
  [SMALL_STATE(228)] = 13273,
  [SMALL_STATE(229)] = 13301,
  [SMALL_STATE(230)] = 13329,
  [SMALL_STATE(231)] = 13357,
  [SMALL_STATE(232)] = 13385,
  [SMALL_STATE(233)] = 13413,
  [SMALL_STATE(234)] = 13441,
  [SMALL_STATE(235)] = 13469,
  [SMALL_STATE(236)] = 13497,
  [SMALL_STATE(237)] = 13531,
  [SMALL_STATE(238)] = 13559,
  [SMALL_STATE(239)] = 13587,
  [SMALL_STATE(240)] = 13615,
  [SMALL_STATE(241)] = 13643,
  [SMALL_STATE(242)] = 13671,
  [SMALL_STATE(243)] = 13699,
  [SMALL_STATE(244)] = 13727,
  [SMALL_STATE(245)] = 13755,
  [SMALL_STATE(246)] = 13783,
  [SMALL_STATE(247)] = 13828,
  [SMALL_STATE(248)] = 13873,
  [SMALL_STATE(249)] = 13900,
  [SMALL_STATE(250)] = 13945,
  [SMALL_STATE(251)] = 13990,
  [SMALL_STATE(252)] = 14017,
  [SMALL_STATE(253)] = 14046,
  [SMALL_STATE(254)] = 14087,
  [SMALL_STATE(255)] = 14128,
  [SMALL_STATE(256)] = 14157,
  [SMALL_STATE(257)] = 14188,
  [SMALL_STATE(258)] = 14217,
  [SMALL_STATE(259)] = 14246,
  [SMALL_STATE(260)] = 14291,
  [SMALL_STATE(261)] = 14336,
  [SMALL_STATE(262)] = 14362,
  [SMALL_STATE(263)] = 14388,
  [SMALL_STATE(264)] = 14428,
  [SMALL_STATE(265)] = 14454,
  [SMALL_STATE(266)] = 14480,
  [SMALL_STATE(267)] = 14516,
  [SMALL_STATE(268)] = 14554,
  [SMALL_STATE(269)] = 14580,
  [SMALL_STATE(270)] = 14606,
  [SMALL_STATE(271)] = 14632,
  [SMALL_STATE(272)] = 14658,
  [SMALL_STATE(273)] = 14684,
  [SMALL_STATE(274)] = 14712,
  [SMALL_STATE(275)] = 14740,
  [SMALL_STATE(276)] = 14766,
  [SMALL_STATE(277)] = 14792,
  [SMALL_STATE(278)] = 14820,
  [SMALL_STATE(279)] = 14846,
  [SMALL_STATE(280)] = 14886,
  [SMALL_STATE(281)] = 14914,
  [SMALL_STATE(282)] = 14954,
  [SMALL_STATE(283)] = 14982,
  [SMALL_STATE(284)] = 15019,
  [SMALL_STATE(285)] = 15062,
  [SMALL_STATE(286)] = 15099,
  [SMALL_STATE(287)] = 15122,
  [SMALL_STATE(288)] = 15156,
  [SMALL_STATE(289)] = 15188,
  [SMALL_STATE(290)] = 15222,
  [SMALL_STATE(291)] = 15253,
  [SMALL_STATE(292)] = 15282,
  [SMALL_STATE(293)] = 15313,
  [SMALL_STATE(294)] = 15344,
  [SMALL_STATE(295)] = 15375,
  [SMALL_STATE(296)] = 15406,
  [SMALL_STATE(297)] = 15434,
  [SMALL_STATE(298)] = 15466,
  [SMALL_STATE(299)] = 15494,
  [SMALL_STATE(300)] = 15522,
  [SMALL_STATE(301)] = 15550,
  [SMALL_STATE(302)] = 15578,
  [SMALL_STATE(303)] = 15607,
  [SMALL_STATE(304)] = 15636,
  [SMALL_STATE(305)] = 15665,
  [SMALL_STATE(306)] = 15694,
  [SMALL_STATE(307)] = 15717,
  [SMALL_STATE(308)] = 15746,
  [SMALL_STATE(309)] = 15770,
  [SMALL_STATE(310)] = 15798,
  [SMALL_STATE(311)] = 15824,
  [SMALL_STATE(312)] = 15846,
  [SMALL_STATE(313)] = 15870,
  [SMALL_STATE(314)] = 15889,
  [SMALL_STATE(315)] = 15910,
  [SMALL_STATE(316)] = 15927,
  [SMALL_STATE(317)] = 15944,
  [SMALL_STATE(318)] = 15967,
  [SMALL_STATE(319)] = 15992,
  [SMALL_STATE(320)] = 16009,
  [SMALL_STATE(321)] = 16026,
  [SMALL_STATE(322)] = 16047,
  [SMALL_STATE(323)] = 16064,
  [SMALL_STATE(324)] = 16081,
  [SMALL_STATE(325)] = 16097,
  [SMALL_STATE(326)] = 16117,
  [SMALL_STATE(327)] = 16133,
  [SMALL_STATE(328)] = 16155,
  [SMALL_STATE(329)] = 16171,
  [SMALL_STATE(330)] = 16191,
  [SMALL_STATE(331)] = 16211,
  [SMALL_STATE(332)] = 16227,
  [SMALL_STATE(333)] = 16249,
  [SMALL_STATE(334)] = 16269,
  [SMALL_STATE(335)] = 16291,
  [SMALL_STATE(336)] = 16305,
  [SMALL_STATE(337)] = 16325,
  [SMALL_STATE(338)] = 16339,
  [SMALL_STATE(339)] = 16361,
  [SMALL_STATE(340)] = 16374,
  [SMALL_STATE(341)] = 16393,
  [SMALL_STATE(342)] = 16410,
  [SMALL_STATE(343)] = 16427,
  [SMALL_STATE(344)] = 16440,
  [SMALL_STATE(345)] = 16457,
  [SMALL_STATE(346)] = 16472,
  [SMALL_STATE(347)] = 16485,
  [SMALL_STATE(348)] = 16500,
  [SMALL_STATE(349)] = 16513,
  [SMALL_STATE(350)] = 16530,
  [SMALL_STATE(351)] = 16549,
  [SMALL_STATE(352)] = 16562,
  [SMALL_STATE(353)] = 16577,
  [SMALL_STATE(354)] = 16594,
  [SMALL_STATE(355)] = 16608,
  [SMALL_STATE(356)] = 16620,
  [SMALL_STATE(357)] = 16634,
  [SMALL_STATE(358)] = 16648,
  [SMALL_STATE(359)] = 16664,
  [SMALL_STATE(360)] = 16678,
  [SMALL_STATE(361)] = 16690,
  [SMALL_STATE(362)] = 16706,
  [SMALL_STATE(363)] = 16722,
  [SMALL_STATE(364)] = 16738,
  [SMALL_STATE(365)] = 16752,
  [SMALL_STATE(366)] = 16764,
  [SMALL_STATE(367)] = 16780,
  [SMALL_STATE(368)] = 16794,
  [SMALL_STATE(369)] = 16810,
  [SMALL_STATE(370)] = 16822,
  [SMALL_STATE(371)] = 16836,
  [SMALL_STATE(372)] = 16852,
  [SMALL_STATE(373)] = 16868,
  [SMALL_STATE(374)] = 16880,
  [SMALL_STATE(375)] = 16896,
  [SMALL_STATE(376)] = 16912,
  [SMALL_STATE(377)] = 16928,
  [SMALL_STATE(378)] = 16944,
  [SMALL_STATE(379)] = 16958,
  [SMALL_STATE(380)] = 16974,
  [SMALL_STATE(381)] = 16990,
  [SMALL_STATE(382)] = 17006,
  [SMALL_STATE(383)] = 17018,
  [SMALL_STATE(384)] = 17034,
  [SMALL_STATE(385)] = 17050,
  [SMALL_STATE(386)] = 17062,
  [SMALL_STATE(387)] = 17074,
  [SMALL_STATE(388)] = 17086,
  [SMALL_STATE(389)] = 17102,
  [SMALL_STATE(390)] = 17118,
  [SMALL_STATE(391)] = 17134,
  [SMALL_STATE(392)] = 17150,
  [SMALL_STATE(393)] = 17164,
  [SMALL_STATE(394)] = 17180,
  [SMALL_STATE(395)] = 17196,
  [SMALL_STATE(396)] = 17212,
  [SMALL_STATE(397)] = 17225,
  [SMALL_STATE(398)] = 17238,
  [SMALL_STATE(399)] = 17249,
  [SMALL_STATE(400)] = 17260,
  [SMALL_STATE(401)] = 17273,
  [SMALL_STATE(402)] = 17284,
  [SMALL_STATE(403)] = 17295,
  [SMALL_STATE(404)] = 17308,
  [SMALL_STATE(405)] = 17321,
  [SMALL_STATE(406)] = 17334,
  [SMALL_STATE(407)] = 17345,
  [SMALL_STATE(408)] = 17356,
  [SMALL_STATE(409)] = 17367,
  [SMALL_STATE(410)] = 17380,
  [SMALL_STATE(411)] = 17393,
  [SMALL_STATE(412)] = 17406,
  [SMALL_STATE(413)] = 17419,
  [SMALL_STATE(414)] = 17429,
  [SMALL_STATE(415)] = 17439,
  [SMALL_STATE(416)] = 17449,
  [SMALL_STATE(417)] = 17459,
  [SMALL_STATE(418)] = 17469,
  [SMALL_STATE(419)] = 17479,
  [SMALL_STATE(420)] = 17489,
  [SMALL_STATE(421)] = 17499,
  [SMALL_STATE(422)] = 17509,
  [SMALL_STATE(423)] = 17519,
  [SMALL_STATE(424)] = 17529,
  [SMALL_STATE(425)] = 17539,
  [SMALL_STATE(426)] = 17549,
  [SMALL_STATE(427)] = 17559,
  [SMALL_STATE(428)] = 17569,
  [SMALL_STATE(429)] = 17579,
  [SMALL_STATE(430)] = 17589,
  [SMALL_STATE(431)] = 17599,
  [SMALL_STATE(432)] = 17609,
  [SMALL_STATE(433)] = 17619,
  [SMALL_STATE(434)] = 17629,
  [SMALL_STATE(435)] = 17639,
  [SMALL_STATE(436)] = 17649,
  [SMALL_STATE(437)] = 17659,
  [SMALL_STATE(438)] = 17669,
  [SMALL_STATE(439)] = 17679,
  [SMALL_STATE(440)] = 17689,
  [SMALL_STATE(441)] = 17699,
  [SMALL_STATE(442)] = 17709,
  [SMALL_STATE(443)] = 17719,
  [SMALL_STATE(444)] = 17729,
  [SMALL_STATE(445)] = 17739,
  [SMALL_STATE(446)] = 17749,
  [SMALL_STATE(447)] = 17759,
  [SMALL_STATE(448)] = 17769,
  [SMALL_STATE(449)] = 17779,
  [SMALL_STATE(450)] = 17789,
  [SMALL_STATE(451)] = 17799,
  [SMALL_STATE(452)] = 17809,
  [SMALL_STATE(453)] = 17819,
  [SMALL_STATE(454)] = 17829,
  [SMALL_STATE(455)] = 17839,
  [SMALL_STATE(456)] = 17849,
  [SMALL_STATE(457)] = 17859,
  [SMALL_STATE(458)] = 17869,
  [SMALL_STATE(459)] = 17879,
  [SMALL_STATE(460)] = 17889,
  [SMALL_STATE(461)] = 17899,
  [SMALL_STATE(462)] = 17909,
  [SMALL_STATE(463)] = 17919,
  [SMALL_STATE(464)] = 17929,
  [SMALL_STATE(465)] = 17939,
  [SMALL_STATE(466)] = 17949,
  [SMALL_STATE(467)] = 17959,
  [SMALL_STATE(468)] = 17969,
  [SMALL_STATE(469)] = 17979,
  [SMALL_STATE(470)] = 17989,
  [SMALL_STATE(471)] = 17999,
  [SMALL_STATE(472)] = 18009,
  [SMALL_STATE(473)] = 18019,
  [SMALL_STATE(474)] = 18029,
  [SMALL_STATE(475)] = 18039,
  [SMALL_STATE(476)] = 18049,
  [SMALL_STATE(477)] = 18059,
  [SMALL_STATE(478)] = 18069,
  [SMALL_STATE(479)] = 18079,
  [SMALL_STATE(480)] = 18089,
  [SMALL_STATE(481)] = 18099,
  [SMALL_STATE(482)] = 18109,
  [SMALL_STATE(483)] = 18119,
  [SMALL_STATE(484)] = 18129,
  [SMALL_STATE(485)] = 18139,
  [SMALL_STATE(486)] = 18149,
  [SMALL_STATE(487)] = 18159,
  [SMALL_STATE(488)] = 18169,
  [SMALL_STATE(489)] = 18179,
  [SMALL_STATE(490)] = 18189,
  [SMALL_STATE(491)] = 18199,
  [SMALL_STATE(492)] = 18209,
  [SMALL_STATE(493)] = 18219,
  [SMALL_STATE(494)] = 18229,
  [SMALL_STATE(495)] = 18239,
  [SMALL_STATE(496)] = 18249,
  [SMALL_STATE(497)] = 18259,
  [SMALL_STATE(498)] = 18269,
  [SMALL_STATE(499)] = 18279,
  [SMALL_STATE(500)] = 18289,
  [SMALL_STATE(501)] = 18299,
  [SMALL_STATE(502)] = 18309,
  [SMALL_STATE(503)] = 18319,
  [SMALL_STATE(504)] = 18329,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(424),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 0),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(338),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(384),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(372),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(400),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(375),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(102),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(245),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(45),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(420),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(192),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(353),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(443),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(442),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(441),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(404),
  [39] = {.entry = {.count = 1, .reusable = false}}, SHIFT(440),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(412),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [45] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(439),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(489),
  [51] = {.entry = {.count = 1, .reusable = false}}, SHIFT(51),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(340),
  [55] = {.entry = {.count = 1, .reusable = true}}, SHIFT(205),
  [57] = {.entry = {.count = 1, .reusable = true}}, SHIFT(197),
  [59] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field, 1, .production_id = 7),
  [61] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_field, 1, .production_id = 7),
  [63] = {.entry = {.count = 1, .reusable = false}}, SHIFT(136),
  [65] = {.entry = {.count = 1, .reusable = true}}, SHIFT(487),
  [67] = {.entry = {.count = 1, .reusable = true}}, SHIFT(488),
  [69] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [71] = {.entry = {.count = 1, .reusable = false}}, SHIFT(132),
  [73] = {.entry = {.count = 1, .reusable = true}}, SHIFT(461),
  [75] = {.entry = {.count = 1, .reusable = true}}, SHIFT(493),
  [77] = {.entry = {.count = 1, .reusable = false}}, SHIFT(121),
  [79] = {.entry = {.count = 1, .reusable = false}}, SHIFT(458),
  [81] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [83] = {.entry = {.count = 1, .reusable = true}}, SHIFT(490),
  [85] = {.entry = {.count = 1, .reusable = false}}, SHIFT(125),
  [87] = {.entry = {.count = 1, .reusable = true}}, SHIFT(497),
  [89] = {.entry = {.count = 1, .reusable = false}}, SHIFT(106),
  [91] = {.entry = {.count = 1, .reusable = true}}, SHIFT(486),
  [93] = {.entry = {.count = 1, .reusable = false}}, SHIFT(42),
  [95] = {.entry = {.count = 1, .reusable = false}}, SHIFT(163),
  [97] = {.entry = {.count = 1, .reusable = true}}, SHIFT(494),
  [99] = {.entry = {.count = 1, .reusable = true}}, SHIFT(495),
  [101] = {.entry = {.count = 1, .reusable = true}}, SHIFT(158),
  [103] = {.entry = {.count = 1, .reusable = false}}, SHIFT(158),
  [105] = {.entry = {.count = 1, .reusable = true}}, SHIFT(475),
  [107] = {.entry = {.count = 1, .reusable = true}}, SHIFT(498),
  [109] = {.entry = {.count = 1, .reusable = false}}, SHIFT(150),
  [111] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__friendly_number, 2),
  [113] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__friendly_number, 2),
  [115] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__friendly_number, 2), SHIFT_REPEAT(15),
  [118] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_integer, 1),
  [120] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_integer, 1),
  [122] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_integer, 2),
  [124] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_integer, 2),
  [126] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__friendly_number, 1),
  [128] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__friendly_number, 1),
  [130] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [132] = {.entry = {.count = 1, .reusable = true}}, SHIFT(175),
  [134] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [136] = {.entry = {.count = 1, .reusable = true}}, SHIFT(423),
  [138] = {.entry = {.count = 1, .reusable = true}}, SHIFT(239),
  [140] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__date, 5),
  [142] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__date, 5),
  [144] = {.entry = {.count = 1, .reusable = true}}, SHIFT(422),
  [146] = {.entry = {.count = 1, .reusable = true}}, SHIFT(421),
  [148] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_switch_repeat2, 2),
  [150] = {.entry = {.count = 1, .reusable = true}}, SHIFT(501),
  [152] = {.entry = {.count = 1, .reusable = true}}, SHIFT(183),
  [154] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_switch_repeat1, 2), SHIFT_REPEAT(102),
  [157] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_switch_repeat1, 2), SHIFT_REPEAT(76),
  [160] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_switch_repeat1, 2),
  [162] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_switch_repeat1, 2), SHIFT_REPEAT(353),
  [165] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_switch_repeat1, 2), SHIFT_REPEAT(443),
  [168] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_switch_repeat1, 2), SHIFT_REPEAT(442),
  [171] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_switch_repeat1, 2), SHIFT_REPEAT(441),
  [174] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_switch_repeat1, 2), SHIFT_REPEAT(404),
  [177] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_switch_repeat1, 2), SHIFT_REPEAT(440),
  [180] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_switch_repeat1, 2), SHIFT_REPEAT(412),
  [183] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_switch_repeat1, 2), SHIFT_REPEAT(15),
  [186] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_switch_repeat1, 2), SHIFT_REPEAT(15),
  [189] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_switch_repeat1, 2), SHIFT_REPEAT(439),
  [192] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_switch_repeat1, 2), SHIFT_REPEAT(489),
  [195] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_switch_repeat1, 2), SHIFT_REPEAT(51),
  [198] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_switch_repeat1, 2), SHIFT_REPEAT(340),
  [201] = {.entry = {.count = 1, .reusable = true}}, SHIFT(418),
  [203] = {.entry = {.count = 1, .reusable = true}}, SHIFT(221),
  [205] = {.entry = {.count = 1, .reusable = true}}, SHIFT(451),
  [207] = {.entry = {.count = 1, .reusable = true}}, SHIFT(238),
  [209] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [211] = {.entry = {.count = 1, .reusable = true}}, SHIFT(431),
  [213] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [215] = {.entry = {.count = 1, .reusable = true}}, SHIFT(230),
  [217] = {.entry = {.count = 1, .reusable = true}}, SHIFT(182),
  [219] = {.entry = {.count = 1, .reusable = true}}, SHIFT(503),
  [221] = {.entry = {.count = 1, .reusable = true}}, SHIFT(227),
  [223] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [225] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [227] = {.entry = {.count = 1, .reusable = true}}, SHIFT(232),
  [229] = {.entry = {.count = 1, .reusable = true}}, SHIFT(435),
  [231] = {.entry = {.count = 1, .reusable = true}}, SHIFT(502),
  [233] = {.entry = {.count = 1, .reusable = true}}, SHIFT(234),
  [235] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [237] = {.entry = {.count = 1, .reusable = true}}, SHIFT(174),
  [239] = {.entry = {.count = 1, .reusable = true}}, SHIFT(210),
  [241] = {.entry = {.count = 1, .reusable = true}}, SHIFT(235),
  [243] = {.entry = {.count = 1, .reusable = true}}, SHIFT(211),
  [245] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_identifier, 1),
  [247] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_identifier, 1),
  [249] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__aggregate_count, 1),
  [251] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_identifier, 3),
  [253] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_identifier, 3),
  [255] = {.entry = {.count = 1, .reusable = true}}, SHIFT(212),
  [257] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_timestamp, 4),
  [259] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_timestamp, 4),
  [261] = {.entry = {.count = 1, .reusable = false}}, SHIFT(365),
  [263] = {.entry = {.count = 1, .reusable = true}}, SHIFT(365),
  [265] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [267] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__time, 3),
  [269] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__time, 3),
  [271] = {.entry = {.count = 1, .reusable = true}}, SHIFT(445),
  [273] = {.entry = {.count = 1, .reusable = true}}, SHIFT(325),
  [275] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [277] = {.entry = {.count = 1, .reusable = true}}, SHIFT(231),
  [279] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__time, 1),
  [281] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__time, 1),
  [283] = {.entry = {.count = 1, .reusable = true}}, SHIFT(415),
  [285] = {.entry = {.count = 1, .reusable = true}}, SHIFT(329),
  [287] = {.entry = {.count = 1, .reusable = false}}, SHIFT(268),
  [289] = {.entry = {.count = 1, .reusable = true}}, SHIFT(491),
  [291] = {.entry = {.count = 1, .reusable = true}}, SHIFT(492),
  [293] = {.entry = {.count = 1, .reusable = true}}, SHIFT(278),
  [295] = {.entry = {.count = 1, .reusable = false}}, SHIFT(278),
  [297] = {.entry = {.count = 1, .reusable = true}}, SHIFT(469),
  [299] = {.entry = {.count = 1, .reusable = true}}, SHIFT(496),
  [301] = {.entry = {.count = 1, .reusable = false}}, SHIFT(251),
  [303] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__time, 5),
  [305] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__time, 5),
  [307] = {.entry = {.count = 1, .reusable = true}}, SHIFT(330),
  [309] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__double_quote_string, 3),
  [311] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__double_quote_string, 3),
  [313] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__alias_identifier, 1),
  [315] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_call, 2, .production_id = 7),
  [317] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_call, 2, .production_id = 7),
  [319] = {.entry = {.count = 1, .reusable = true}}, SHIFT(344),
  [321] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_date, 2),
  [323] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_date, 2),
  [325] = {.entry = {.count = 1, .reusable = false}}, SHIFT(405),
  [327] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__literal_string, 1),
  [329] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__literal_string, 1),
  [331] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__alias_identifier, 1, .production_id = 6),
  [333] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_decimal_number, 2),
  [335] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_decimal_number, 2),
  [337] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [339] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__time, 7),
  [341] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__time, 7),
  [343] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_function_call_repeat1, 2),
  [345] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_function_call_repeat1, 2),
  [347] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_function_call_repeat1, 2), SHIFT_REPEAT(136),
  [350] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_call_repeat1, 2), SHIFT_REPEAT(344),
  [353] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_call_repeat1, 2), SHIFT_REPEAT(487),
  [356] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_call_repeat1, 2), SHIFT_REPEAT(488),
  [359] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_call_repeat1, 2), SHIFT_REPEAT(132),
  [362] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_function_call_repeat1, 2), SHIFT_REPEAT(132),
  [365] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_call_repeat1, 2), SHIFT_REPEAT(461),
  [368] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_call_repeat1, 2), SHIFT_REPEAT(493),
  [371] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_function_call_repeat1, 2), SHIFT_REPEAT(121),
  [374] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_literal, 1),
  [376] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_literal, 1),
  [378] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [380] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_timezone, 1),
  [382] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_timezone, 1),
  [384] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_s_string, 1),
  [386] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_s_string, 1),
  [388] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__double_s_string, 3),
  [390] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__double_s_string, 3),
  [392] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__triple_f_string, 3),
  [394] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__triple_f_string, 3),
  [396] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__double_f_string, 3),
  [398] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__double_f_string, 3),
  [400] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__single_quote_string, 3),
  [402] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__single_quote_string, 3),
  [404] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_decimal_number, 3),
  [406] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_decimal_number, 3),
  [408] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expression, 3),
  [410] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__expression, 3),
  [412] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_expression, 3, .production_id = 18),
  [414] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binary_expression, 3, .production_id = 18),
  [416] = {.entry = {.count = 1, .reusable = false}}, SHIFT(64),
  [418] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [420] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [422] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [424] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_time, 2),
  [426] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_time, 2),
  [428] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field, 3, .production_id = 19),
  [430] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_field, 3, .production_id = 19),
  [432] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_timezone, 2),
  [434] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_timezone, 2),
  [436] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [438] = {.entry = {.count = 1, .reusable = false}}, SHIFT(65),
  [440] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_timestamp, 5),
  [442] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_timestamp, 5),
  [444] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [446] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__triple_s_string, 3),
  [448] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__triple_s_string, 3),
  [450] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_f_string, 1),
  [452] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_f_string, 1),
  [454] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [456] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expression, 1),
  [458] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__expression, 1),
  [460] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__agg_rhs_assignment, 2, .production_id = 24),
  [462] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__agg_rhs_assignment, 2, .production_id = 24),
  [464] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [466] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__agg_rhs_assignment, 1, .production_id = 21),
  [468] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__agg_rhs_assignment, 1, .production_id = 21),
  [470] = {.entry = {.count = 1, .reusable = true}}, SHIFT(341),
  [472] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_function_call_repeat1, 2), SHIFT_REPEAT(163),
  [475] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_call_repeat1, 2), SHIFT_REPEAT(341),
  [478] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_call_repeat1, 2), SHIFT_REPEAT(494),
  [481] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_call_repeat1, 2), SHIFT_REPEAT(495),
  [484] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_call_repeat1, 2), SHIFT_REPEAT(158),
  [487] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_function_call_repeat1, 2), SHIFT_REPEAT(158),
  [490] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_call_repeat1, 2), SHIFT_REPEAT(475),
  [493] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_call_repeat1, 2), SHIFT_REPEAT(498),
  [496] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_function_call_repeat1, 2), SHIFT_REPEAT(150),
  [499] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_term, 1, .production_id = 8),
  [501] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_term, 1, .production_id = 8),
  [503] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [505] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__boolean_expression, 1, .production_id = 5),
  [507] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__boolean_expression, 1, .production_id = 5),
  [509] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__call_parameter, 1, .production_id = 8),
  [511] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__call_parameter, 1, .production_id = 8),
  [513] = {.entry = {.count = 1, .reusable = true}}, SHIFT(246),
  [515] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__friendly_number, 2), SHIFT_REPEAT(132),
  [518] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__friendly_number, 2), SHIFT_REPEAT(132),
  [521] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_function_call_repeat1, 1, .production_id = 25),
  [523] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_function_call_repeat1, 1, .production_id = 25),
  [525] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__call_parameter, 3, .production_id = 29),
  [527] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__call_parameter, 3, .production_id = 29),
  [529] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pipeline, 1),
  [531] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pipeline, 1),
  [533] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [535] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [537] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [539] = {.entry = {.count = 1, .reusable = true}}, SHIFT(450),
  [541] = {.entry = {.count = 1, .reusable = true}}, SHIFT(302),
  [543] = {.entry = {.count = 1, .reusable = true}}, SHIFT(304),
  [545] = {.entry = {.count = 1, .reusable = true}}, SHIFT(309),
  [547] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [549] = {.entry = {.count = 1, .reusable = true}}, SHIFT(332),
  [551] = {.entry = {.count = 1, .reusable = false}}, SHIFT(7),
  [553] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable, 4, .production_id = 11),
  [555] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable, 4, .production_id = 11),
  [557] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [559] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__friendly_number, 2), SHIFT_REPEAT(148),
  [562] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_transforms_repeat1, 2),
  [564] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_transforms_repeat1, 2),
  [566] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_transforms_repeat1, 2), SHIFT_REPEAT(54),
  [569] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_transforms_repeat1, 2), SHIFT_REPEAT(38),
  [572] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_transforms_repeat1, 2), SHIFT_REPEAT(27),
  [575] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_transforms_repeat1, 2), SHIFT_REPEAT(450),
  [578] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_transforms_repeat1, 2), SHIFT_REPEAT(302),
  [581] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_transforms_repeat1, 2), SHIFT_REPEAT(304),
  [584] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_transforms_repeat1, 2), SHIFT_REPEAT(309),
  [587] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_transforms_repeat1, 2), SHIFT_REPEAT(26),
  [590] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_transforms_repeat1, 2), SHIFT_REPEAT(332),
  [593] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_transforms, 1),
  [595] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_transforms, 1),
  [597] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_function_call_repeat1, 2), SHIFT_REPEAT(268),
  [600] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_call_repeat1, 2), SHIFT_REPEAT(342),
  [603] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_call_repeat1, 2), SHIFT_REPEAT(491),
  [606] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_call_repeat1, 2), SHIFT_REPEAT(492),
  [609] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_call_repeat1, 2), SHIFT_REPEAT(278),
  [612] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_function_call_repeat1, 2), SHIFT_REPEAT(278),
  [615] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_call_repeat1, 2), SHIFT_REPEAT(469),
  [618] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_call_repeat1, 2), SHIFT_REPEAT(496),
  [621] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_function_call_repeat1, 2), SHIFT_REPEAT(251),
  [624] = {.entry = {.count = 1, .reusable = true}}, SHIFT(342),
  [626] = {.entry = {.count = 1, .reusable = true}}, SHIFT(250),
  [628] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__friendly_number, 2), SHIFT_REPEAT(158),
  [631] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__friendly_number, 2), SHIFT_REPEAT(158),
  [634] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [636] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [638] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_range, 3, .production_id = 23),
  [640] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_range, 3, .production_id = 23),
  [642] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_transforms_repeat1, 2), SHIFT_REPEAT(34),
  [645] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_transforms_repeat1, 2), SHIFT_REPEAT(25),
  [648] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_joins, 2, .production_id = 9),
  [650] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_joins, 2, .production_id = 9),
  [652] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [654] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_joins, 3, .production_id = 14),
  [656] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_joins, 3, .production_id = 14),
  [658] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_switch, 5),
  [660] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_switch, 5),
  [662] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_switch, 4),
  [664] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_switch, 4),
  [666] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__sort_instruction, 2),
  [668] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__sort_instruction, 2),
  [670] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment, 3, .production_id = 22),
  [672] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_assignment, 3, .production_id = 22),
  [674] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment, 5, .production_id = 28),
  [676] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_assignment, 5, .production_id = 28),
  [678] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment, 5, .production_id = 27),
  [680] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_assignment, 5, .production_id = 27),
  [682] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment, 3, .production_id = 20),
  [684] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_assignment, 3, .production_id = 20),
  [686] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_switch, 6),
  [688] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_switch, 6),
  [690] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_switch, 3),
  [692] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_switch, 3),
  [694] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__sort_instruction, 1),
  [696] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__sort_instruction, 1),
  [698] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_switch_repeat1, 1),
  [700] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_switch_repeat1, 1),
  [702] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_switch_condition, 4, .production_id = 31),
  [704] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_switch_condition, 4, .production_id = 31),
  [706] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_definition, 5, .production_id = 16),
  [708] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_definition, 5, .production_id = 16),
  [710] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_switch_condition, 4, .production_id = 30),
  [712] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_switch_condition, 4, .production_id = 30),
  [714] = {.entry = {.count = 1, .reusable = false}}, SHIFT(6),
  [716] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__table_reference, 1, .production_id = 3),
  [718] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__table_reference, 1, .production_id = 3),
  [720] = {.entry = {.count = 1, .reusable = true}}, SHIFT(350),
  [722] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_takes, 2),
  [724] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_takes, 2),
  [726] = {.entry = {.count = 1, .reusable = true}}, SHIFT(333),
  [728] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_aggregate, 3),
  [730] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_aggregate, 3),
  [732] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sorts, 2),
  [734] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sorts, 2),
  [736] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_aggregate, 6),
  [738] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_aggregate, 6),
  [740] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sorts, 5),
  [742] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sorts, 5),
  [744] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sorts, 6),
  [746] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sorts, 6),
  [748] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sorts, 4),
  [750] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sorts, 4),
  [752] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [754] = {.entry = {.count = 1, .reusable = true}}, SHIFT(203),
  [756] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sorts, 3),
  [758] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sorts, 3),
  [760] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_aggregate, 4),
  [762] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_aggregate, 4),
  [764] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__table_selection, 1, .production_id = 2),
  [766] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__table_selection, 1, .production_id = 2),
  [768] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_aggregate, 5),
  [770] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_aggregate, 5),
  [772] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__table_selection, 3, .production_id = 10),
  [774] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__table_selection, 3, .production_id = 10),
  [776] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select, 2),
  [778] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_select, 2),
  [780] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_from_text, 5),
  [782] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_from_text, 5),
  [784] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_group, 8),
  [786] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_group, 8),
  [788] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_derives, 8),
  [790] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_derives, 8),
  [792] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select, 7),
  [794] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_select, 7),
  [796] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_conditions, 5),
  [798] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_conditions, 5),
  [800] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_group, 7),
  [802] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_group, 7),
  [804] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_derives, 2),
  [806] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_derives, 2),
  [808] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_aggregate_repeat1, 2),
  [810] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_filter, 2, .production_id = 4),
  [812] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_filter, 2, .production_id = 4),
  [814] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_group, 5),
  [816] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_group, 5),
  [818] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_derives, 4),
  [820] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_derives, 4),
  [822] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_transforms_repeat1, 1),
  [824] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_transforms_repeat1, 1),
  [826] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select, 3),
  [828] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_select, 3),
  [830] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_joins, 3, .production_id = 9),
  [832] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_joins, 3, .production_id = 9),
  [834] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__triple_quote_string, 3),
  [836] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__triple_quote_string, 3),
  [838] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_derives, 7),
  [840] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_derives, 7),
  [842] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_from, 2, .production_id = 1),
  [844] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_from, 2, .production_id = 1),
  [846] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select, 6),
  [848] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_select, 6),
  [850] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_append, 2, .production_id = 1),
  [852] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_append, 2, .production_id = 1),
  [854] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_conditions, 3),
  [856] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_conditions, 3),
  [858] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select, 5),
  [860] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_select, 5),
  [862] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_conditions, 4),
  [864] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_conditions, 4),
  [866] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_derives, 5),
  [868] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_derives, 5),
  [870] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__self_join, 4),
  [872] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__self_join, 4),
  [874] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_conditions, 2),
  [876] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_conditions, 2),
  [878] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_derives, 6),
  [880] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_derives, 6),
  [882] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [884] = {.entry = {.count = 1, .reusable = true}}, SHIFT(229),
  [886] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_joins, 4, .production_id = 14),
  [888] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_joins, 4, .production_id = 14),
  [890] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select, 4),
  [892] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_select, 4),
  [894] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_derives, 3),
  [896] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_derives, 3),
  [898] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_from_text, 2),
  [900] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_from_text, 2),
  [902] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__boolean_expression, 3, .production_id = 17),
  [904] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__boolean_expression, 3, .production_id = 17),
  [906] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_group, 6),
  [908] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_group, 6),
  [910] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_conditions, 1),
  [912] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_conditions, 1),
  [914] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_group, 9),
  [916] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_group, 9),
  [918] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__agg_keywords, 1),
  [920] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__agg_keywords, 1),
  [922] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [924] = {.entry = {.count = 1, .reusable = true}}, SHIFT(268),
  [926] = {.entry = {.count = 1, .reusable = true}}, SHIFT(373),
  [928] = {.entry = {.count = 1, .reusable = true}}, SHIFT(349),
  [930] = {.entry = {.count = 1, .reusable = true}}, SHIFT(483),
  [932] = {.entry = {.count = 1, .reusable = true}}, SHIFT(484),
  [934] = {.entry = {.count = 1, .reusable = true}}, SHIFT(322),
  [936] = {.entry = {.count = 1, .reusable = true}}, SHIFT(453),
  [938] = {.entry = {.count = 1, .reusable = true}}, SHIFT(163),
  [940] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_aggregate_operation, 2),
  [942] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__aggregate_count, 2),
  [944] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_conditions_repeat1, 2),
  [946] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__friendly_number, 2), SHIFT_REPEAT(278),
  [949] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__friendly_number, 2), SHIFT_REPEAT(278),
  [952] = {.entry = {.count = 1, .reusable = true}}, SHIFT(247),
  [954] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [956] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [958] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [960] = {.entry = {.count = 1, .reusable = true}}, SHIFT(260),
  [962] = {.entry = {.count = 1, .reusable = true}}, SHIFT(259),
  [964] = {.entry = {.count = 1, .reusable = true}}, SHIFT(194),
  [966] = {.entry = {.count = 1, .reusable = true}}, SHIFT(241),
  [968] = {.entry = {.count = 1, .reusable = true}}, SHIFT(224),
  [970] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [972] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 1),
  [974] = {.entry = {.count = 1, .reusable = true}}, SHIFT(320),
  [976] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 2),
  [978] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_program_repeat2, 2),
  [980] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat2, 2), SHIFT_REPEAT(338),
  [983] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat2, 2), SHIFT_REPEAT(384),
  [986] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat2, 2), SHIFT_REPEAT(372),
  [989] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat2, 2), SHIFT_REPEAT(375),
  [992] = {.entry = {.count = 1, .reusable = true}}, SHIFT(314),
  [994] = {.entry = {.count = 1, .reusable = true}}, SHIFT(209),
  [996] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_group_repeat2, 2), SHIFT_REPEAT(450),
  [999] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_group_repeat2, 2), SHIFT_REPEAT(302),
  [1002] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_group_repeat2, 2), SHIFT_REPEAT(304),
  [1005] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_group_repeat2, 2), SHIFT_REPEAT(314),
  [1008] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_group_repeat2, 2),
  [1010] = {.entry = {.count = 1, .reusable = true}}, SHIFT(242),
  [1012] = {.entry = {.count = 1, .reusable = true}}, SHIFT(213),
  [1014] = {.entry = {.count = 1, .reusable = true}}, SHIFT(218),
  [1016] = {.entry = {.count = 1, .reusable = true}}, SHIFT(244),
  [1018] = {.entry = {.count = 1, .reusable = true}}, SHIFT(419),
  [1020] = {.entry = {.count = 1, .reusable = true}}, SHIFT(202),
  [1022] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [1024] = {.entry = {.count = 1, .reusable = true}}, SHIFT(297),
  [1026] = {.entry = {.count = 1, .reusable = true}}, SHIFT(367),
  [1028] = {.entry = {.count = 1, .reusable = true}}, SHIFT(409),
  [1030] = {.entry = {.count = 1, .reusable = true}}, SHIFT(198),
  [1032] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2),
  [1034] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2),
  [1036] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(400),
  [1039] = {.entry = {.count = 1, .reusable = true}}, SHIFT(199),
  [1041] = {.entry = {.count = 1, .reusable = false}}, SHIFT(322),
  [1043] = {.entry = {.count = 1, .reusable = false}}, SHIFT(432),
  [1045] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__friendly_number, 2), SHIFT_REPEAT(322),
  [1048] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__friendly_number, 2), SHIFT_REPEAT(322),
  [1051] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_window_definitions_repeat1, 2), SHIFT_REPEAT(444),
  [1054] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_window_definitions_repeat1, 2),
  [1056] = {.entry = {.count = 1, .reusable = true}}, SHIFT(444),
  [1058] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pipeline, 2),
  [1060] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pipeline, 2),
  [1062] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 1),
  [1064] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 1),
  [1066] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_function_definition_repeat1, 2),
  [1068] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_definition_repeat1, 2), SHIFT_REPEAT(482),
  [1071] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_definition_repeat1, 2), SHIFT_REPEAT(348),
  [1074] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [1076] = {.entry = {.count = 1, .reusable = true}}, SHIFT(482),
  [1078] = {.entry = {.count = 1, .reusable = true}}, SHIFT(348),
  [1080] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_prql, 4, .production_id = 13),
  [1082] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_prql, 4, .production_id = 13),
  [1084] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_target, 1),
  [1086] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_target, 1),
  [1088] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_window_definitions, 1),
  [1090] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_prql, 4, .production_id = 12),
  [1092] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_prql, 4, .production_id = 12),
  [1094] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_program_repeat2, 1),
  [1096] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_program_repeat2, 1),
  [1098] = {.entry = {.count = 1, .reusable = true}}, SHIFT(378),
  [1100] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__window_definition, 3),
  [1102] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable, 5, .production_id = 11),
  [1104] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable, 5, .production_id = 11),
  [1106] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable, 6, .production_id = 11),
  [1108] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable, 6, .production_id = 11),
  [1110] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_group_repeat2, 1),
  [1112] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_window, 5),
  [1114] = {.entry = {.count = 1, .reusable = true}}, SHIFT(425),
  [1116] = {.entry = {.count = 1, .reusable = false}}, SHIFT(56),
  [1118] = {.entry = {.count = 1, .reusable = true}}, SHIFT(476),
  [1120] = {.entry = {.count = 1, .reusable = true}}, SHIFT(470),
  [1122] = {.entry = {.count = 1, .reusable = true}}, SHIFT(462),
  [1124] = {.entry = {.count = 1, .reusable = true}}, SHIFT(385),
  [1126] = {.entry = {.count = 1, .reusable = true}}, SHIFT(402),
  [1128] = {.entry = {.count = 1, .reusable = true}}, SHIFT(345),
  [1130] = {.entry = {.count = 1, .reusable = true}}, SHIFT(454),
  [1132] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_window_definitions_repeat1, 1),
  [1134] = {.entry = {.count = 1, .reusable = true}}, SHIFT(249),
  [1136] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter, 1),
  [1138] = {.entry = {.count = 1, .reusable = true}}, SHIFT(430),
  [1140] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__inner_triple_quotes, 2), SHIFT_REPEAT(407),
  [1143] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__inner_triple_quotes, 2),
  [1145] = {.entry = {.count = 1, .reusable = false}}, SHIFT(424),
  [1147] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_sorts_repeat1, 2), SHIFT_REPEAT(310),
  [1150] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_sorts_repeat1, 2),
  [1152] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_conditions_repeat1, 2), SHIFT_REPEAT(60),
  [1155] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [1157] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_group_repeat1, 2), SHIFT_REPEAT(44),
  [1160] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_group_repeat1, 2),
  [1162] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_function_definition_repeat1, 1),
  [1164] = {.entry = {.count = 1, .reusable = true}}, SHIFT(336),
  [1166] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [1168] = {.entry = {.count = 1, .reusable = false}}, SHIFT(407),
  [1170] = {.entry = {.count = 1, .reusable = false}}, SHIFT(223),
  [1172] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_switch_repeat2, 2), SHIFT_REPEAT(43),
  [1175] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_direction, 1),
  [1177] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [1179] = {.entry = {.count = 1, .reusable = true}}, SHIFT(474),
  [1181] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter, 3, .production_id = 15),
  [1183] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_derives_repeat1, 2), SHIFT_REPEAT(47),
  [1186] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_derives_repeat1, 2),
  [1188] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [1190] = {.entry = {.count = 1, .reusable = false}}, SHIFT(108),
  [1192] = {.entry = {.count = 1, .reusable = true}}, SHIFT(414),
  [1194] = {.entry = {.count = 1, .reusable = true}}, SHIFT(403),
  [1196] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [1198] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [1200] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [1202] = {.entry = {.count = 1, .reusable = true}}, SHIFT(225),
  [1204] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [1206] = {.entry = {.count = 1, .reusable = true}}, SHIFT(219),
  [1208] = {.entry = {.count = 1, .reusable = true}}, SHIFT(307),
  [1210] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [1212] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [1214] = {.entry = {.count = 1, .reusable = true}}, SHIFT(305),
  [1216] = {.entry = {.count = 1, .reusable = true}}, SHIFT(200),
  [1218] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_aggregate_repeat1, 2), SHIFT_REPEAT(8),
  [1221] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [1223] = {.entry = {.count = 1, .reusable = false}}, SHIFT(90),
  [1225] = {.entry = {.count = 1, .reusable = true}}, SHIFT(466),
  [1227] = {.entry = {.count = 1, .reusable = true}}, SHIFT(465),
  [1229] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__join_definition, 3),
  [1231] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [1233] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__inner_triple_quotes, 1),
  [1235] = {.entry = {.count = 1, .reusable = true}}, SHIFT(396),
  [1237] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [1239] = {.entry = {.count = 1, .reusable = true}}, SHIFT(339),
  [1241] = {.entry = {.count = 1, .reusable = true}}, SHIFT(408),
  [1243] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [1245] = {.entry = {.count = 1, .reusable = true}}, SHIFT(499),
  [1247] = {.entry = {.count = 1, .reusable = true}}, SHIFT(331),
  [1249] = {.entry = {.count = 1, .reusable = true}}, SHIFT(298),
  [1251] = {.entry = {.count = 1, .reusable = false}}, SHIFT(504),
  [1253] = {.entry = {.count = 1, .reusable = true}}, SHIFT(416),
  [1255] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [1257] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [1259] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [1261] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [1263] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [1265] = {.entry = {.count = 1, .reusable = true}}, SHIFT(346),
  [1267] = {.entry = {.count = 1, .reusable = true}}, SHIFT(410),
  [1269] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [1271] = {.entry = {.count = 1, .reusable = true}}, SHIFT(296),
  [1273] = {.entry = {.count = 1, .reusable = true}}, SHIFT(299),
  [1275] = {.entry = {.count = 1, .reusable = true}}, SHIFT(379),
  [1277] = {.entry = {.count = 1, .reusable = true}}, SHIFT(411),
  [1279] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [1281] = {.entry = {.count = 1, .reusable = false}}, SHIFT(426),
  [1283] = {.entry = {.count = 1, .reusable = false}}, SHIFT(427),
  [1285] = {.entry = {.count = 1, .reusable = false}}, SHIFT(428),
  [1287] = {.entry = {.count = 1, .reusable = false}}, SHIFT(429),
  [1289] = {.entry = {.count = 1, .reusable = true}}, SHIFT(303),
  [1291] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [1293] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [1295] = {.entry = {.count = 1, .reusable = true}}, SHIFT(186),
  [1297] = {.entry = {.count = 1, .reusable = true}}, SHIFT(188),
  [1299] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [1301] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [1303] = {.entry = {.count = 1, .reusable = true}}, SHIFT(179),
  [1305] = {.entry = {.count = 1, .reusable = true}}, SHIFT(382),
  [1307] = {.entry = {.count = 1, .reusable = true}}, SHIFT(386),
  [1309] = {.entry = {.count = 1, .reusable = true}}, SHIFT(387),
  [1311] = {.entry = {.count = 1, .reusable = true}}, SHIFT(180),
  [1313] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [1315] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [1317] = {.entry = {.count = 1, .reusable = true}}, SHIFT(233),
  [1319] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [1321] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [1323] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [1325] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [1327] = {.entry = {.count = 1, .reusable = true}}, SHIFT(286),
  [1329] = {.entry = {.count = 1, .reusable = true}}, SHIFT(397),
  [1331] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [1333] = {.entry = {.count = 1, .reusable = true}}, SHIFT(337),
  [1335] = {.entry = {.count = 1, .reusable = true}}, SHIFT(261),
  [1337] = {.entry = {.count = 1, .reusable = true}}, SHIFT(264),
  [1339] = {.entry = {.count = 1, .reusable = true}}, SHIFT(275),
  [1341] = {.entry = {.count = 1, .reusable = true}}, SHIFT(265),
  [1343] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [1345] = {.entry = {.count = 1, .reusable = true}}, SHIFT(300),
  [1347] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [1349] = {.entry = {.count = 1, .reusable = true}}, SHIFT(167),
  [1351] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
  [1353] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
  [1355] = {.entry = {.count = 1, .reusable = true}}, SHIFT(248),
  [1357] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [1359] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [1361] = {.entry = {.count = 1, .reusable = true}}, SHIFT(413),
  [1363] = {.entry = {.count = 1, .reusable = false}}, SHIFT(455),
  [1365] = {.entry = {.count = 1, .reusable = false}}, SHIFT(456),
  [1367] = {.entry = {.count = 1, .reusable = true}}, SHIFT(361),
  [1369] = {.entry = {.count = 1, .reusable = true}}, SHIFT(459),
  [1371] = {.entry = {.count = 1, .reusable = false}}, SHIFT(463),
  [1373] = {.entry = {.count = 1, .reusable = false}}, SHIFT(464),
  [1375] = {.entry = {.count = 1, .reusable = true}}, SHIFT(449),
  [1377] = {.entry = {.count = 1, .reusable = true}}, SHIFT(467),
  [1379] = {.entry = {.count = 1, .reusable = false}}, SHIFT(471),
  [1381] = {.entry = {.count = 1, .reusable = false}}, SHIFT(472),
  [1383] = {.entry = {.count = 1, .reusable = true}}, SHIFT(473),
  [1385] = {.entry = {.count = 1, .reusable = false}}, SHIFT(477),
  [1387] = {.entry = {.count = 1, .reusable = false}}, SHIFT(478),
  [1389] = {.entry = {.count = 1, .reusable = true}}, SHIFT(479),
  [1391] = {.entry = {.count = 1, .reusable = true}}, SHIFT(480),
  [1393] = {.entry = {.count = 1, .reusable = true}}, SHIFT(481),
  [1395] = {.entry = {.count = 1, .reusable = true}}, SHIFT(446),
  [1397] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [1399] = {.entry = {.count = 1, .reusable = true}}, SHIFT(301),
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
