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
#define SYMBOL_COUNT 184
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
  sym_aggregate_operation = 124,
  sym__aggregate_count = 125,
  sym_sorts = 126,
  sym__sort_instruction = 127,
  sym_direction = 128,
  sym_takes = 129,
  sym_window = 130,
  sym_window_definitions = 131,
  sym__window_definition = 132,
  sym_group = 133,
  sym_joins = 134,
  sym__join_definition = 135,
  sym_conditions = 136,
  sym__self_join = 137,
  sym_select = 138,
  sym_term = 139,
  sym__expression = 140,
  sym_literal = 141,
  sym_f_string = 142,
  sym_s_string = 143,
  sym__double_quote_string = 144,
  sym__single_quote_string = 145,
  aux_sym__inner_triple_quotes = 146,
  sym__triple_quote_string = 147,
  sym__double_f_string = 148,
  sym__triple_f_string = 149,
  sym__double_s_string = 150,
  sym__triple_s_string = 151,
  sym__literal_string = 152,
  aux_sym__friendly_number = 153,
  sym_integer = 154,
  sym_decimal_number = 155,
  sym_field = 156,
  sym__alias_identifier = 157,
  sym_identifier = 158,
  sym_range = 159,
  sym__agg_rhs_assignment = 160,
  sym_assignment = 161,
  sym_binary_expression = 162,
  sym__date = 163,
  sym_date = 164,
  sym__time = 165,
  sym_time = 166,
  sym_timestamp = 167,
  sym_timezone = 168,
  sym_comment = 169,
  aux_sym_program_repeat1 = 170,
  aux_sym_program_repeat2 = 171,
  aux_sym_function_definition_repeat1 = 172,
  aux_sym_function_call_repeat1 = 173,
  aux_sym_transforms_repeat1 = 174,
  aux_sym_derives_repeat1 = 175,
  aux_sym_switch_repeat1 = 176,
  aux_sym_switch_repeat2 = 177,
  aux_sym_aggregate_repeat1 = 178,
  aux_sym_sorts_repeat1 = 179,
  aux_sym_window_definitions_repeat1 = 180,
  aux_sym_group_repeat1 = 181,
  aux_sym_group_repeat2 = 182,
  aux_sym_conditions_repeat1 = 183,
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
      if (lookahead == '!') ADVANCE(828);
      if (lookahead == '"') ADVANCE(547);
      if (lookahead == '#') ADVANCE(821);
      if (lookahead == '\'') ADVANCE(551);
      if (lookahead == '(') ADVANCE(537);
      if (lookahead == ')') ADVANCE(538);
      if (lookahead == '*') ADVANCE(804);
      if (lookahead == '+') ADVANCE(545);
      if (lookahead == ',') ADVANCE(541);
      if (lookahead == '-') ADVANCE(544);
      if (lookahead == '.') ADVANCE(567);
      if (lookahead == '/') ADVANCE(805);
      if (lookahead == ':') ADVANCE(519);
      if (lookahead == '<') ADVANCE(810);
      if (lookahead == '=') ADVANCE(536);
      if (lookahead == '>') ADVANCE(808);
      if (lookahead == '?') ADVANCE(27);
      if (lookahead == '@') ADVANCE(816);
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
      if (lookahead == 'T') ADVANCE(818);
      if (lookahead == 'V') ADVANCE(67);
      if (lookahead == 'W') ADVANCE(91);
      if (lookahead == 'Z') ADVANCE(820);
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
      if (lookahead == '|') ADVANCE(806);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(438)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(564);
      END_STATE();
    case 1:
      if (lookahead == '!') ADVANCE(24);
      if (lookahead == '"') ADVANCE(547);
      if (lookahead == '#') ADVANCE(821);
      if (lookahead == '\'') ADVANCE(551);
      if (lookahead == '(') ADVANCE(537);
      if (lookahead == ')') ADVANCE(538);
      if (lookahead == '*') ADVANCE(804);
      if (lookahead == '+') ADVANCE(545);
      if (lookahead == ',') ADVANCE(541);
      if (lookahead == '-') ADVANCE(543);
      if (lookahead == '.') ADVANCE(567);
      if (lookahead == '/') ADVANCE(805);
      if (lookahead == '<') ADVANCE(810);
      if (lookahead == '=') ADVANCE(25);
      if (lookahead == '>') ADVANCE(808);
      if (lookahead == '?') ADVANCE(27);
      if (lookahead == 'A') ADVANCE(640);
      if (lookahead == 'F') ADVANCE(576);
      if (lookahead == 'N') ADVANCE(679);
      if (lookahead == 'O') ADVANCE(650);
      if (lookahead == 'T') ADVANCE(653);
      if (lookahead == ']') ADVANCE(542);
      if (lookahead == '_') ADVANCE(566);
      if (lookahead == '`') ADVANCE(568);
      if (lookahead == 'a') ADVANCE(755);
      if (lookahead == 'f') ADVANCE(691);
      if (lookahead == 'n') ADVANCE(791);
      if (lookahead == 'o') ADVANCE(766);
      if (lookahead == 't') ADVANCE(768);
      if (lookahead == '|') ADVANCE(806);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(419)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(564);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(801);
      END_STATE();
    case 2:
      if (lookahead == '!') ADVANCE(24);
      if (lookahead == '"') ADVANCE(547);
      if (lookahead == '#') ADVANCE(821);
      if (lookahead == '\'') ADVANCE(551);
      if (lookahead == ')') ADVANCE(538);
      if (lookahead == '*') ADVANCE(804);
      if (lookahead == '+') ADVANCE(545);
      if (lookahead == '-') ADVANCE(543);
      if (lookahead == '.') ADVANCE(567);
      if (lookahead == '/') ADVANCE(805);
      if (lookahead == '<') ADVANCE(810);
      if (lookahead == '=') ADVANCE(25);
      if (lookahead == '>') ADVANCE(808);
      if (lookahead == '?') ADVANCE(27);
      if (lookahead == 'A') ADVANCE(614);
      if (lookahead == 'D') ADVANCE(606);
      if (lookahead == 'F') ADVANCE(575);
      if (lookahead == 'G') ADVANCE(657);
      if (lookahead == 'I') ADVANCE(641);
      if (lookahead == 'J') ADVANCE(646);
      if (lookahead == 'N') ADVANCE(679);
      if (lookahead == 'O') ADVANCE(650);
      if (lookahead == 'R') ADVANCE(604);
      if (lookahead == 'S') ADVANCE(607);
      if (lookahead == 'T') ADVANCE(579);
      if (lookahead == '_') ADVANCE(566);
      if (lookahead == '`') ADVANCE(568);
      if (lookahead == 'a') ADVANCE(730);
      if (lookahead == 'd') ADVANCE(721);
      if (lookahead == 'f') ADVANCE(690);
      if (lookahead == 'g') ADVANCE(772);
      if (lookahead == 'i') ADVANCE(756);
      if (lookahead == 'j') ADVANCE(761);
      if (lookahead == 'n') ADVANCE(791);
      if (lookahead == 'o') ADVANCE(766);
      if (lookahead == 'r') ADVANCE(719);
      if (lookahead == 's') ADVANCE(722);
      if (lookahead == 't') ADVANCE(694);
      if (lookahead == '|') ADVANCE(806);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(416)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(564);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(801);
      END_STATE();
    case 3:
      if (lookahead == '!') ADVANCE(827);
      if (lookahead == '"') ADVANCE(547);
      if (lookahead == '#') ADVANCE(821);
      if (lookahead == '\'') ADVANCE(551);
      if (lookahead == '(') ADVANCE(537);
      if (lookahead == ',') ADVANCE(541);
      if (lookahead == '-') ADVANCE(543);
      if (lookahead == '.') ADVANCE(567);
      if (lookahead == '=') ADVANCE(25);
      if (lookahead == '@') ADVANCE(816);
      if (lookahead == 'F') ADVANCE(576);
      if (lookahead == 'N') ADVANCE(679);
      if (lookahead == 'T') ADVANCE(653);
      if (lookahead == '[') ADVANCE(540);
      if (lookahead == ']') ADVANCE(542);
      if (lookahead == '_') ADVANCE(566);
      if (lookahead == '`') ADVANCE(568);
      if (lookahead == 'f') ADVANCE(569);
      if (lookahead == 'n') ADVANCE(791);
      if (lookahead == 's') ADVANCE(573);
      if (lookahead == 't') ADVANCE(768);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(418)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(564);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(801);
      END_STATE();
    case 4:
      if (lookahead == '"') ADVANCE(547);
      if (lookahead == '#') ADVANCE(821);
      if (lookahead == '\'') ADVANCE(551);
      if (lookahead == '(') ADVANCE(537);
      if (lookahead == ')') ADVANCE(538);
      if (lookahead == ',') ADVANCE(541);
      if (lookahead == '-') ADVANCE(543);
      if (lookahead == '.') ADVANCE(567);
      if (lookahead == ':') ADVANCE(519);
      if (lookahead == 'F') ADVANCE(576);
      if (lookahead == 'N') ADVANCE(679);
      if (lookahead == 'T') ADVANCE(653);
      if (lookahead == ']') ADVANCE(542);
      if (lookahead == '_') ADVANCE(566);
      if (lookahead == '`') ADVANCE(568);
      if (lookahead == 'f') ADVANCE(691);
      if (lookahead == 'n') ADVANCE(791);
      if (lookahead == 't') ADVANCE(768);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(421)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(564);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(801);
      END_STATE();
    case 5:
      if (lookahead == '"') ADVANCE(547);
      if (lookahead == '#') ADVANCE(821);
      if (lookahead == '\'') ADVANCE(551);
      if (lookahead == '(') ADVANCE(537);
      if (lookahead == ',') ADVANCE(541);
      if (lookahead == '-') ADVANCE(543);
      if (lookahead == '.') ADVANCE(567);
      if (lookahead == '@') ADVANCE(816);
      if (lookahead == 'A') ADVANCE(682);
      if (lookahead == 'C') ADVANCE(643);
      if (lookahead == 'F') ADVANCE(576);
      if (lookahead == 'M') ADVANCE(577);
      if (lookahead == 'N') ADVANCE(679);
      if (lookahead == 'S') ADVANCE(662);
      if (lookahead == 'T') ADVANCE(653);
      if (lookahead == ']') ADVANCE(542);
      if (lookahead == '_') ADVANCE(566);
      if (lookahead == '`') ADVANCE(568);
      if (lookahead == 'a') ADVANCE(794);
      if (lookahead == 'c') ADVANCE(758);
      if (lookahead == 'f') ADVANCE(569);
      if (lookahead == 'm') ADVANCE(692);
      if (lookahead == 'n') ADVANCE(791);
      if (lookahead == 's') ADVANCE(570);
      if (lookahead == 't') ADVANCE(768);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(415)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(564);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(801);
      END_STATE();
    case 6:
      if (lookahead == '"') ADVANCE(547);
      if (lookahead == '#') ADVANCE(821);
      if (lookahead == '\'') ADVANCE(551);
      if (lookahead == '(') ADVANCE(537);
      if (lookahead == '-') ADVANCE(543);
      if (lookahead == '.') ADVANCE(567);
      if (lookahead == '@') ADVANCE(816);
      if (lookahead == 'A') ADVANCE(686);
      if (lookahead == 'F') ADVANCE(576);
      if (lookahead == 'N') ADVANCE(679);
      if (lookahead == 'S') ADVANCE(676);
      if (lookahead == 'T') ADVANCE(653);
      if (lookahead == '_') ADVANCE(566);
      if (lookahead == '`') ADVANCE(568);
      if (lookahead == 'a') ADVANCE(798);
      if (lookahead == 'f') ADVANCE(569);
      if (lookahead == 'n') ADVANCE(791);
      if (lookahead == 's') ADVANCE(571);
      if (lookahead == 't') ADVANCE(768);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(417)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(564);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(801);
      END_STATE();
    case 7:
      if (lookahead == '"') ADVANCE(547);
      if (lookahead == '#') ADVANCE(821);
      if (lookahead == '\'') ADVANCE(551);
      if (lookahead == '(') ADVANCE(537);
      if (lookahead == '-') ADVANCE(543);
      if (lookahead == '.') ADVANCE(567);
      if (lookahead == '@') ADVANCE(816);
      if (lookahead == 'A') ADVANCE(686);
      if (lookahead == 'F') ADVANCE(576);
      if (lookahead == 'N') ADVANCE(679);
      if (lookahead == 'S') ADVANCE(677);
      if (lookahead == 'T') ADVANCE(653);
      if (lookahead == '_') ADVANCE(566);
      if (lookahead == '`') ADVANCE(568);
      if (lookahead == 'a') ADVANCE(798);
      if (lookahead == 'f') ADVANCE(569);
      if (lookahead == 'n') ADVANCE(791);
      if (lookahead == 's') ADVANCE(572);
      if (lookahead == 't') ADVANCE(768);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(431)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(564);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(801);
      END_STATE();
    case 8:
      if (lookahead == '"') ADVANCE(547);
      if (lookahead == '#') ADVANCE(821);
      if (lookahead == '\'') ADVANCE(551);
      if (lookahead == ')') ADVANCE(538);
      if (lookahead == '-') ADVANCE(543);
      if (lookahead == '.') ADVANCE(567);
      if (lookahead == ':') ADVANCE(519);
      if (lookahead == 'A') ADVANCE(615);
      if (lookahead == 'D') ADVANCE(606);
      if (lookahead == 'F') ADVANCE(575);
      if (lookahead == 'G') ADVANCE(657);
      if (lookahead == 'I') ADVANCE(641);
      if (lookahead == 'J') ADVANCE(646);
      if (lookahead == 'N') ADVANCE(679);
      if (lookahead == 'R') ADVANCE(604);
      if (lookahead == 'S') ADVANCE(607);
      if (lookahead == 'T') ADVANCE(579);
      if (lookahead == '_') ADVANCE(566);
      if (lookahead == '`') ADVANCE(568);
      if (lookahead == 'a') ADVANCE(731);
      if (lookahead == 'd') ADVANCE(721);
      if (lookahead == 'f') ADVANCE(690);
      if (lookahead == 'g') ADVANCE(772);
      if (lookahead == 'i') ADVANCE(756);
      if (lookahead == 'j') ADVANCE(761);
      if (lookahead == 'n') ADVANCE(791);
      if (lookahead == 'r') ADVANCE(719);
      if (lookahead == 's') ADVANCE(722);
      if (lookahead == 't') ADVANCE(694);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(420)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(564);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(801);
      END_STATE();
    case 9:
      if (lookahead == '"') ADVANCE(547);
      if (lookahead == '#') ADVANCE(821);
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
      if (lookahead == '#') ADVANCE(821);
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
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(801);
      END_STATE();
    case 17:
      if (lookahead == '#') ADVANCE(821);
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
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(801);
      END_STATE();
    case 18:
      if (lookahead == '#') ADVANCE(821);
      if (lookahead == '-') ADVANCE(26);
      if (lookahead == '`') ADVANCE(568);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(426)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(564);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(801);
      END_STATE();
    case 19:
      if (lookahead == '#') ADVANCE(821);
      if (lookahead == 'S') ADVANCE(625);
      if (lookahead == '`') ADVANCE(568);
      if (lookahead == 's') ADVANCE(740);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(425)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(815);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(801);
      END_STATE();
    case 20:
      if (lookahead == '#') ADVANCE(821);
      if (lookahead == '`') ADVANCE(568);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(428)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(815);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(801);
      END_STATE();
    case 21:
      if (lookahead == '#') ADVANCE(821);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(430)
      if (lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(802);
      END_STATE();
    case 22:
      if (lookahead == '.') ADVANCE(196);
      END_STATE();
    case 23:
      if (lookahead == '.') ADVANCE(803);
      END_STATE();
    case 24:
      if (lookahead == '=') ADVANCE(807);
      END_STATE();
    case 25:
      if (lookahead == '=') ADVANCE(546);
      END_STATE();
    case 26:
      if (lookahead == '>') ADVANCE(539);
      END_STATE();
    case 27:
      if (lookahead == '?') ADVANCE(812);
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
      if (lookahead == '#') ADVANCE(821);
      if (lookahead == '\'') ADVANCE(551);
      if (lookahead == '(') ADVANCE(537);
      if (lookahead == ',') ADVANCE(541);
      if (lookahead == '-') ADVANCE(543);
      if (lookahead == '.') ADVANCE(567);
      if (lookahead == '@') ADVANCE(816);
      if (lookahead == 'A') ADVANCE(682);
      if (lookahead == 'C') ADVANCE(643);
      if (lookahead == 'F') ADVANCE(576);
      if (lookahead == 'M') ADVANCE(577);
      if (lookahead == 'N') ADVANCE(679);
      if (lookahead == 'S') ADVANCE(662);
      if (lookahead == 'T') ADVANCE(653);
      if (lookahead == ']') ADVANCE(542);
      if (lookahead == '_') ADVANCE(566);
      if (lookahead == '`') ADVANCE(568);
      if (lookahead == 'a') ADVANCE(794);
      if (lookahead == 'c') ADVANCE(758);
      if (lookahead == 'f') ADVANCE(569);
      if (lookahead == 'm') ADVANCE(692);
      if (lookahead == 'n') ADVANCE(791);
      if (lookahead == 's') ADVANCE(570);
      if (lookahead == 't') ADVANCE(768);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(564);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(801);
      END_STATE();
    case 416:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(416)
      if (lookahead == '!') ADVANCE(24);
      if (lookahead == '"') ADVANCE(547);
      if (lookahead == '#') ADVANCE(821);
      if (lookahead == '\'') ADVANCE(551);
      if (lookahead == ')') ADVANCE(538);
      if (lookahead == '*') ADVANCE(804);
      if (lookahead == '+') ADVANCE(545);
      if (lookahead == '-') ADVANCE(543);
      if (lookahead == '.') ADVANCE(567);
      if (lookahead == '/') ADVANCE(805);
      if (lookahead == '<') ADVANCE(810);
      if (lookahead == '=') ADVANCE(25);
      if (lookahead == '>') ADVANCE(808);
      if (lookahead == '?') ADVANCE(27);
      if (lookahead == 'A') ADVANCE(614);
      if (lookahead == 'D') ADVANCE(606);
      if (lookahead == 'F') ADVANCE(575);
      if (lookahead == 'G') ADVANCE(657);
      if (lookahead == 'I') ADVANCE(641);
      if (lookahead == 'J') ADVANCE(646);
      if (lookahead == 'N') ADVANCE(679);
      if (lookahead == 'O') ADVANCE(650);
      if (lookahead == 'R') ADVANCE(604);
      if (lookahead == 'S') ADVANCE(607);
      if (lookahead == 'T') ADVANCE(579);
      if (lookahead == '_') ADVANCE(566);
      if (lookahead == '`') ADVANCE(568);
      if (lookahead == 'a') ADVANCE(730);
      if (lookahead == 'd') ADVANCE(721);
      if (lookahead == 'f') ADVANCE(690);
      if (lookahead == 'g') ADVANCE(772);
      if (lookahead == 'i') ADVANCE(756);
      if (lookahead == 'j') ADVANCE(761);
      if (lookahead == 'n') ADVANCE(791);
      if (lookahead == 'o') ADVANCE(766);
      if (lookahead == 'r') ADVANCE(719);
      if (lookahead == 's') ADVANCE(722);
      if (lookahead == 't') ADVANCE(694);
      if (lookahead == '|') ADVANCE(806);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(564);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(801);
      END_STATE();
    case 417:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(417)
      if (lookahead == '"') ADVANCE(547);
      if (lookahead == '#') ADVANCE(821);
      if (lookahead == '\'') ADVANCE(551);
      if (lookahead == '(') ADVANCE(537);
      if (lookahead == '-') ADVANCE(543);
      if (lookahead == '.') ADVANCE(567);
      if (lookahead == '@') ADVANCE(816);
      if (lookahead == 'A') ADVANCE(686);
      if (lookahead == 'F') ADVANCE(576);
      if (lookahead == 'N') ADVANCE(679);
      if (lookahead == 'S') ADVANCE(676);
      if (lookahead == 'T') ADVANCE(653);
      if (lookahead == '_') ADVANCE(566);
      if (lookahead == '`') ADVANCE(568);
      if (lookahead == 'a') ADVANCE(798);
      if (lookahead == 'f') ADVANCE(569);
      if (lookahead == 'n') ADVANCE(791);
      if (lookahead == 's') ADVANCE(571);
      if (lookahead == 't') ADVANCE(768);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(564);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(801);
      END_STATE();
    case 418:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(418)
      if (lookahead == '!') ADVANCE(827);
      if (lookahead == '"') ADVANCE(547);
      if (lookahead == '#') ADVANCE(821);
      if (lookahead == '\'') ADVANCE(551);
      if (lookahead == '(') ADVANCE(537);
      if (lookahead == ',') ADVANCE(541);
      if (lookahead == '-') ADVANCE(543);
      if (lookahead == '.') ADVANCE(567);
      if (lookahead == '=') ADVANCE(25);
      if (lookahead == '@') ADVANCE(816);
      if (lookahead == 'F') ADVANCE(576);
      if (lookahead == 'N') ADVANCE(679);
      if (lookahead == 'T') ADVANCE(653);
      if (lookahead == '[') ADVANCE(540);
      if (lookahead == ']') ADVANCE(542);
      if (lookahead == '_') ADVANCE(566);
      if (lookahead == '`') ADVANCE(568);
      if (lookahead == 'f') ADVANCE(569);
      if (lookahead == 'n') ADVANCE(791);
      if (lookahead == 's') ADVANCE(573);
      if (lookahead == 't') ADVANCE(768);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(564);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(801);
      END_STATE();
    case 419:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(419)
      if (lookahead == '!') ADVANCE(24);
      if (lookahead == '"') ADVANCE(547);
      if (lookahead == '#') ADVANCE(821);
      if (lookahead == '\'') ADVANCE(551);
      if (lookahead == '(') ADVANCE(537);
      if (lookahead == ')') ADVANCE(538);
      if (lookahead == '*') ADVANCE(804);
      if (lookahead == '+') ADVANCE(545);
      if (lookahead == ',') ADVANCE(541);
      if (lookahead == '-') ADVANCE(543);
      if (lookahead == '.') ADVANCE(567);
      if (lookahead == '/') ADVANCE(805);
      if (lookahead == '<') ADVANCE(810);
      if (lookahead == '=') ADVANCE(25);
      if (lookahead == '>') ADVANCE(808);
      if (lookahead == '?') ADVANCE(27);
      if (lookahead == 'A') ADVANCE(640);
      if (lookahead == 'F') ADVANCE(576);
      if (lookahead == 'N') ADVANCE(679);
      if (lookahead == 'O') ADVANCE(650);
      if (lookahead == 'T') ADVANCE(653);
      if (lookahead == ']') ADVANCE(542);
      if (lookahead == '_') ADVANCE(566);
      if (lookahead == '`') ADVANCE(568);
      if (lookahead == 'a') ADVANCE(755);
      if (lookahead == 'f') ADVANCE(691);
      if (lookahead == 'n') ADVANCE(791);
      if (lookahead == 'o') ADVANCE(766);
      if (lookahead == 't') ADVANCE(768);
      if (lookahead == '|') ADVANCE(806);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(564);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(801);
      END_STATE();
    case 420:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(420)
      if (lookahead == '"') ADVANCE(547);
      if (lookahead == '#') ADVANCE(821);
      if (lookahead == '\'') ADVANCE(551);
      if (lookahead == ')') ADVANCE(538);
      if (lookahead == '-') ADVANCE(543);
      if (lookahead == '.') ADVANCE(567);
      if (lookahead == ':') ADVANCE(519);
      if (lookahead == 'A') ADVANCE(615);
      if (lookahead == 'D') ADVANCE(606);
      if (lookahead == 'F') ADVANCE(575);
      if (lookahead == 'G') ADVANCE(657);
      if (lookahead == 'I') ADVANCE(641);
      if (lookahead == 'J') ADVANCE(646);
      if (lookahead == 'N') ADVANCE(679);
      if (lookahead == 'R') ADVANCE(604);
      if (lookahead == 'S') ADVANCE(607);
      if (lookahead == 'T') ADVANCE(579);
      if (lookahead == '_') ADVANCE(566);
      if (lookahead == '`') ADVANCE(568);
      if (lookahead == 'a') ADVANCE(731);
      if (lookahead == 'd') ADVANCE(721);
      if (lookahead == 'f') ADVANCE(690);
      if (lookahead == 'g') ADVANCE(772);
      if (lookahead == 'i') ADVANCE(756);
      if (lookahead == 'j') ADVANCE(761);
      if (lookahead == 'n') ADVANCE(791);
      if (lookahead == 'r') ADVANCE(719);
      if (lookahead == 's') ADVANCE(722);
      if (lookahead == 't') ADVANCE(694);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(564);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(801);
      END_STATE();
    case 421:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(421)
      if (lookahead == '"') ADVANCE(547);
      if (lookahead == '#') ADVANCE(821);
      if (lookahead == '\'') ADVANCE(551);
      if (lookahead == '(') ADVANCE(537);
      if (lookahead == ')') ADVANCE(538);
      if (lookahead == ',') ADVANCE(541);
      if (lookahead == '-') ADVANCE(543);
      if (lookahead == '.') ADVANCE(567);
      if (lookahead == ':') ADVANCE(519);
      if (lookahead == 'F') ADVANCE(576);
      if (lookahead == 'N') ADVANCE(679);
      if (lookahead == 'T') ADVANCE(653);
      if (lookahead == ']') ADVANCE(542);
      if (lookahead == '_') ADVANCE(566);
      if (lookahead == '`') ADVANCE(568);
      if (lookahead == 'f') ADVANCE(691);
      if (lookahead == 'n') ADVANCE(791);
      if (lookahead == 't') ADVANCE(768);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(564);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(801);
      END_STATE();
    case 422:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(422)
      if (lookahead == '"') ADVANCE(547);
      if (lookahead == '#') ADVANCE(821);
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
      if (lookahead == '#') ADVANCE(821);
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
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(801);
      END_STATE();
    case 424:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(424)
      if (lookahead == '#') ADVANCE(821);
      if (lookahead == '-') ADVANCE(26);
      if (lookahead == '.') ADVANCE(567);
      if (lookahead == '_') ADVANCE(566);
      if (lookahead == '`') ADVANCE(568);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(564);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(801);
      END_STATE();
    case 425:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(425)
      if (lookahead == '#') ADVANCE(821);
      if (lookahead == 'S') ADVANCE(625);
      if (lookahead == '`') ADVANCE(568);
      if (lookahead == 's') ADVANCE(740);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(815);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(801);
      END_STATE();
    case 426:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(426)
      if (lookahead == '#') ADVANCE(821);
      if (lookahead == '-') ADVANCE(26);
      if (lookahead == '`') ADVANCE(568);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(564);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(801);
      END_STATE();
    case 427:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(557);
      if (lookahead == '"') ADVANCE(556);
      if (lookahead == '#') ADVANCE(821);
      if (lookahead != 0) ADVANCE(555);
      END_STATE();
    case 428:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(428)
      if (lookahead == '#') ADVANCE(821);
      if (lookahead == '`') ADVANCE(568);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(815);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(801);
      END_STATE();
    case 429:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(558);
      if (lookahead == '#') ADVANCE(821);
      if (lookahead != 0) ADVANCE(555);
      END_STATE();
    case 430:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(430)
      if (lookahead == '#') ADVANCE(821);
      if (lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(802);
      END_STATE();
    case 431:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(431)
      if (lookahead == '"') ADVANCE(547);
      if (lookahead == '#') ADVANCE(821);
      if (lookahead == '\'') ADVANCE(551);
      if (lookahead == '(') ADVANCE(537);
      if (lookahead == '-') ADVANCE(543);
      if (lookahead == '.') ADVANCE(567);
      if (lookahead == '@') ADVANCE(816);
      if (lookahead == 'A') ADVANCE(686);
      if (lookahead == 'F') ADVANCE(576);
      if (lookahead == 'N') ADVANCE(679);
      if (lookahead == 'S') ADVANCE(677);
      if (lookahead == 'T') ADVANCE(653);
      if (lookahead == '_') ADVANCE(566);
      if (lookahead == '`') ADVANCE(568);
      if (lookahead == 'a') ADVANCE(798);
      if (lookahead == 'f') ADVANCE(569);
      if (lookahead == 'n') ADVANCE(791);
      if (lookahead == 's') ADVANCE(572);
      if (lookahead == 't') ADVANCE(768);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(564);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(801);
      END_STATE();
    case 432:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(817);
      END_STATE();
    case 433:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(813);
      END_STATE();
    case 434:
      if (eof) ADVANCE(443);
      if (lookahead == '!') ADVANCE(24);
      if (lookahead == '"') ADVANCE(547);
      if (lookahead == '#') ADVANCE(821);
      if (lookahead == '\'') ADVANCE(551);
      if (lookahead == '*') ADVANCE(804);
      if (lookahead == '+') ADVANCE(545);
      if (lookahead == '-') ADVANCE(543);
      if (lookahead == '.') ADVANCE(567);
      if (lookahead == '/') ADVANCE(805);
      if (lookahead == '<') ADVANCE(810);
      if (lookahead == '=') ADVANCE(25);
      if (lookahead == '>') ADVANCE(808);
      if (lookahead == '?') ADVANCE(27);
      if (lookahead == 'A') ADVANCE(614);
      if (lookahead == 'D') ADVANCE(606);
      if (lookahead == 'F') ADVANCE(574);
      if (lookahead == 'G') ADVANCE(657);
      if (lookahead == 'I') ADVANCE(641);
      if (lookahead == 'J') ADVANCE(646);
      if (lookahead == 'L') ADVANCE(608);
      if (lookahead == 'N') ADVANCE(679);
      if (lookahead == 'O') ADVANCE(650);
      if (lookahead == 'R') ADVANCE(604);
      if (lookahead == 'S') ADVANCE(607);
      if (lookahead == 'T') ADVANCE(579);
      if (lookahead == '_') ADVANCE(566);
      if (lookahead == '`') ADVANCE(568);
      if (lookahead == 'a') ADVANCE(730);
      if (lookahead == 'd') ADVANCE(721);
      if (lookahead == 'f') ADVANCE(689);
      if (lookahead == 'g') ADVANCE(772);
      if (lookahead == 'i') ADVANCE(756);
      if (lookahead == 'j') ADVANCE(761);
      if (lookahead == 'l') ADVANCE(723);
      if (lookahead == 'n') ADVANCE(791);
      if (lookahead == 'o') ADVANCE(766);
      if (lookahead == 'r') ADVANCE(719);
      if (lookahead == 's') ADVANCE(722);
      if (lookahead == 't') ADVANCE(694);
      if (lookahead == '|') ADVANCE(806);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(439)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(564);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(801);
      END_STATE();
    case 435:
      if (eof) ADVANCE(443);
      if (lookahead == '!') ADVANCE(24);
      if (lookahead == '"') ADVANCE(15);
      if (lookahead == '#') ADVANCE(821);
      if (lookahead == '(') ADVANCE(537);
      if (lookahead == ')') ADVANCE(538);
      if (lookahead == '*') ADVANCE(804);
      if (lookahead == '+') ADVANCE(545);
      if (lookahead == ',') ADVANCE(541);
      if (lookahead == '-') ADVANCE(544);
      if (lookahead == '.') ADVANCE(567);
      if (lookahead == '/') ADVANCE(805);
      if (lookahead == ':') ADVANCE(519);
      if (lookahead == '<') ADVANCE(810);
      if (lookahead == '=') ADVANCE(536);
      if (lookahead == '>') ADVANCE(808);
      if (lookahead == '?') ADVANCE(27);
      if (lookahead == '@') ADVANCE(816);
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
      if (lookahead == 'T') ADVANCE(819);
      if (lookahead == 'W') ADVANCE(91);
      if (lookahead == 'Z') ADVANCE(820);
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
      if (lookahead == '|') ADVANCE(806);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(440)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(564);
      END_STATE();
    case 436:
      if (eof) ADVANCE(443);
      if (lookahead == '!') ADVANCE(24);
      if (lookahead == '#') ADVANCE(821);
      if (lookahead == '(') ADVANCE(537);
      if (lookahead == ')') ADVANCE(538);
      if (lookahead == '*') ADVANCE(804);
      if (lookahead == '+') ADVANCE(545);
      if (lookahead == ',') ADVANCE(541);
      if (lookahead == '-') ADVANCE(544);
      if (lookahead == '.') ADVANCE(23);
      if (lookahead == '/') ADVANCE(805);
      if (lookahead == '<') ADVANCE(810);
      if (lookahead == '=') ADVANCE(536);
      if (lookahead == '>') ADVANCE(808);
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
      if (lookahead == 'T') ADVANCE(819);
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
      if (lookahead == '|') ADVANCE(806);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(441)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(564);
      END_STATE();
    case 437:
      if (eof) ADVANCE(443);
      if (lookahead == '"') ADVANCE(547);
      if (lookahead == '#') ADVANCE(821);
      if (lookahead == '\'') ADVANCE(551);
      if (lookahead == '-') ADVANCE(543);
      if (lookahead == '.') ADVANCE(567);
      if (lookahead == ':') ADVANCE(519);
      if (lookahead == 'A') ADVANCE(615);
      if (lookahead == 'D') ADVANCE(606);
      if (lookahead == 'F') ADVANCE(574);
      if (lookahead == 'G') ADVANCE(657);
      if (lookahead == 'I') ADVANCE(641);
      if (lookahead == 'J') ADVANCE(646);
      if (lookahead == 'L') ADVANCE(608);
      if (lookahead == 'N') ADVANCE(679);
      if (lookahead == 'R') ADVANCE(604);
      if (lookahead == 'S') ADVANCE(607);
      if (lookahead == 'T') ADVANCE(579);
      if (lookahead == '_') ADVANCE(566);
      if (lookahead == '`') ADVANCE(568);
      if (lookahead == 'a') ADVANCE(731);
      if (lookahead == 'd') ADVANCE(721);
      if (lookahead == 'f') ADVANCE(689);
      if (lookahead == 'g') ADVANCE(772);
      if (lookahead == 'i') ADVANCE(756);
      if (lookahead == 'j') ADVANCE(761);
      if (lookahead == 'l') ADVANCE(723);
      if (lookahead == 'n') ADVANCE(791);
      if (lookahead == 'r') ADVANCE(719);
      if (lookahead == 's') ADVANCE(722);
      if (lookahead == 't') ADVANCE(694);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(442)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(564);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(801);
      END_STATE();
    case 438:
      if (eof) ADVANCE(443);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(438)
      if (lookahead == '!') ADVANCE(828);
      if (lookahead == '"') ADVANCE(547);
      if (lookahead == '#') ADVANCE(821);
      if (lookahead == '\'') ADVANCE(551);
      if (lookahead == '(') ADVANCE(537);
      if (lookahead == ')') ADVANCE(538);
      if (lookahead == '*') ADVANCE(804);
      if (lookahead == '+') ADVANCE(545);
      if (lookahead == ',') ADVANCE(541);
      if (lookahead == '-') ADVANCE(544);
      if (lookahead == '.') ADVANCE(567);
      if (lookahead == '/') ADVANCE(805);
      if (lookahead == ':') ADVANCE(519);
      if (lookahead == '<') ADVANCE(810);
      if (lookahead == '=') ADVANCE(536);
      if (lookahead == '>') ADVANCE(808);
      if (lookahead == '?') ADVANCE(27);
      if (lookahead == '@') ADVANCE(816);
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
      if (lookahead == 'T') ADVANCE(818);
      if (lookahead == 'V') ADVANCE(67);
      if (lookahead == 'W') ADVANCE(91);
      if (lookahead == 'Z') ADVANCE(820);
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
      if (lookahead == '|') ADVANCE(806);
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
      if (lookahead == '#') ADVANCE(821);
      if (lookahead == '\'') ADVANCE(551);
      if (lookahead == '*') ADVANCE(804);
      if (lookahead == '+') ADVANCE(545);
      if (lookahead == '-') ADVANCE(543);
      if (lookahead == '.') ADVANCE(567);
      if (lookahead == '/') ADVANCE(805);
      if (lookahead == '<') ADVANCE(810);
      if (lookahead == '=') ADVANCE(25);
      if (lookahead == '>') ADVANCE(808);
      if (lookahead == '?') ADVANCE(27);
      if (lookahead == 'A') ADVANCE(614);
      if (lookahead == 'D') ADVANCE(606);
      if (lookahead == 'F') ADVANCE(574);
      if (lookahead == 'G') ADVANCE(657);
      if (lookahead == 'I') ADVANCE(641);
      if (lookahead == 'J') ADVANCE(646);
      if (lookahead == 'L') ADVANCE(608);
      if (lookahead == 'N') ADVANCE(679);
      if (lookahead == 'O') ADVANCE(650);
      if (lookahead == 'R') ADVANCE(604);
      if (lookahead == 'S') ADVANCE(607);
      if (lookahead == 'T') ADVANCE(579);
      if (lookahead == '_') ADVANCE(566);
      if (lookahead == '`') ADVANCE(568);
      if (lookahead == 'a') ADVANCE(730);
      if (lookahead == 'd') ADVANCE(721);
      if (lookahead == 'f') ADVANCE(689);
      if (lookahead == 'g') ADVANCE(772);
      if (lookahead == 'i') ADVANCE(756);
      if (lookahead == 'j') ADVANCE(761);
      if (lookahead == 'l') ADVANCE(723);
      if (lookahead == 'n') ADVANCE(791);
      if (lookahead == 'o') ADVANCE(766);
      if (lookahead == 'r') ADVANCE(719);
      if (lookahead == 's') ADVANCE(722);
      if (lookahead == 't') ADVANCE(694);
      if (lookahead == '|') ADVANCE(806);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(564);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(801);
      END_STATE();
    case 440:
      if (eof) ADVANCE(443);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(440)
      if (lookahead == '!') ADVANCE(24);
      if (lookahead == '"') ADVANCE(15);
      if (lookahead == '#') ADVANCE(821);
      if (lookahead == '(') ADVANCE(537);
      if (lookahead == ')') ADVANCE(538);
      if (lookahead == '*') ADVANCE(804);
      if (lookahead == '+') ADVANCE(545);
      if (lookahead == ',') ADVANCE(541);
      if (lookahead == '-') ADVANCE(544);
      if (lookahead == '.') ADVANCE(567);
      if (lookahead == '/') ADVANCE(805);
      if (lookahead == ':') ADVANCE(519);
      if (lookahead == '<') ADVANCE(810);
      if (lookahead == '=') ADVANCE(536);
      if (lookahead == '>') ADVANCE(808);
      if (lookahead == '?') ADVANCE(27);
      if (lookahead == '@') ADVANCE(816);
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
      if (lookahead == 'T') ADVANCE(819);
      if (lookahead == 'W') ADVANCE(91);
      if (lookahead == 'Z') ADVANCE(820);
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
      if (lookahead == '|') ADVANCE(806);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(564);
      END_STATE();
    case 441:
      if (eof) ADVANCE(443);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(441)
      if (lookahead == '!') ADVANCE(24);
      if (lookahead == '#') ADVANCE(821);
      if (lookahead == '(') ADVANCE(537);
      if (lookahead == ')') ADVANCE(538);
      if (lookahead == '*') ADVANCE(804);
      if (lookahead == '+') ADVANCE(545);
      if (lookahead == ',') ADVANCE(541);
      if (lookahead == '-') ADVANCE(544);
      if (lookahead == '.') ADVANCE(23);
      if (lookahead == '/') ADVANCE(805);
      if (lookahead == '<') ADVANCE(810);
      if (lookahead == '=') ADVANCE(536);
      if (lookahead == '>') ADVANCE(808);
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
      if (lookahead == 'T') ADVANCE(819);
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
      if (lookahead == '|') ADVANCE(806);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(564);
      END_STATE();
    case 442:
      if (eof) ADVANCE(443);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(442)
      if (lookahead == '"') ADVANCE(547);
      if (lookahead == '#') ADVANCE(821);
      if (lookahead == '\'') ADVANCE(551);
      if (lookahead == '-') ADVANCE(543);
      if (lookahead == '.') ADVANCE(567);
      if (lookahead == ':') ADVANCE(519);
      if (lookahead == 'A') ADVANCE(615);
      if (lookahead == 'D') ADVANCE(606);
      if (lookahead == 'F') ADVANCE(574);
      if (lookahead == 'G') ADVANCE(657);
      if (lookahead == 'I') ADVANCE(641);
      if (lookahead == 'J') ADVANCE(646);
      if (lookahead == 'L') ADVANCE(608);
      if (lookahead == 'N') ADVANCE(679);
      if (lookahead == 'R') ADVANCE(604);
      if (lookahead == 'S') ADVANCE(607);
      if (lookahead == 'T') ADVANCE(579);
      if (lookahead == '_') ADVANCE(566);
      if (lookahead == '`') ADVANCE(568);
      if (lookahead == 'a') ADVANCE(731);
      if (lookahead == 'd') ADVANCE(721);
      if (lookahead == 'f') ADVANCE(689);
      if (lookahead == 'g') ADVANCE(772);
      if (lookahead == 'i') ADVANCE(756);
      if (lookahead == 'j') ADVANCE(761);
      if (lookahead == 'l') ADVANCE(723);
      if (lookahead == 'n') ADVANCE(791);
      if (lookahead == 'r') ADVANCE(719);
      if (lookahead == 's') ADVANCE(722);
      if (lookahead == 't') ADVANCE(694);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(564);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(801);
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
      if (lookahead == '_') ADVANCE(674);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(801);
      END_STATE();
    case 447:
      ACCEPT_TOKEN(sym_keyword_from);
      if (lookahead == '_') ADVANCE(788);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(801);
      END_STATE();
    case 448:
      ACCEPT_TOKEN(sym_keyword_filter);
      END_STATE();
    case 449:
      ACCEPT_TOKEN(sym_keyword_filter);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(801);
      END_STATE();
    case 450:
      ACCEPT_TOKEN(sym_keyword_derive);
      END_STATE();
    case 451:
      ACCEPT_TOKEN(sym_keyword_derive);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(801);
      END_STATE();
    case 452:
      ACCEPT_TOKEN(sym_keyword_group);
      END_STATE();
    case 453:
      ACCEPT_TOKEN(sym_keyword_group);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(801);
      END_STATE();
    case 454:
      ACCEPT_TOKEN(sym_keyword_aggregate);
      END_STATE();
    case 455:
      ACCEPT_TOKEN(sym_keyword_aggregate);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(801);
      END_STATE();
    case 456:
      ACCEPT_TOKEN(sym_keyword_sort);
      END_STATE();
    case 457:
      ACCEPT_TOKEN(sym_keyword_sort);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(801);
      END_STATE();
    case 458:
      ACCEPT_TOKEN(sym_keyword_take);
      END_STATE();
    case 459:
      ACCEPT_TOKEN(sym_keyword_take);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(801);
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
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(801);
      END_STATE();
    case 463:
      ACCEPT_TOKEN(sym_keyword_select);
      END_STATE();
    case 464:
      ACCEPT_TOKEN(sym_keyword_select);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(801);
      END_STATE();
    case 465:
      ACCEPT_TOKEN(sym_keyword_true);
      END_STATE();
    case 466:
      ACCEPT_TOKEN(sym_keyword_true);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(801);
      END_STATE();
    case 467:
      ACCEPT_TOKEN(sym_keyword_false);
      END_STATE();
    case 468:
      ACCEPT_TOKEN(sym_keyword_false);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(801);
      END_STATE();
    case 469:
      ACCEPT_TOKEN(sym_keyword_switch);
      END_STATE();
    case 470:
      ACCEPT_TOKEN(sym_keyword_switch);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(801);
      END_STATE();
    case 471:
      ACCEPT_TOKEN(sym_keyword_append);
      END_STATE();
    case 472:
      ACCEPT_TOKEN(sym_keyword_append);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(801);
      END_STATE();
    case 473:
      ACCEPT_TOKEN(sym_keyword_remove);
      END_STATE();
    case 474:
      ACCEPT_TOKEN(sym_keyword_remove);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(801);
      END_STATE();
    case 475:
      ACCEPT_TOKEN(sym_keyword_intersect);
      END_STATE();
    case 476:
      ACCEPT_TOKEN(sym_keyword_intersect);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(801);
      END_STATE();
    case 477:
      ACCEPT_TOKEN(sym_keyword_average);
      END_STATE();
    case 478:
      ACCEPT_TOKEN(sym_keyword_average);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(801);
      END_STATE();
    case 479:
      ACCEPT_TOKEN(sym_keyword_min);
      END_STATE();
    case 480:
      ACCEPT_TOKEN(sym_keyword_min);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(801);
      END_STATE();
    case 481:
      ACCEPT_TOKEN(sym_keyword_max);
      END_STATE();
    case 482:
      ACCEPT_TOKEN(sym_keyword_max);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(801);
      END_STATE();
    case 483:
      ACCEPT_TOKEN(sym_keyword_count);
      if (lookahead == '_') ADVANCE(586);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(801);
      END_STATE();
    case 484:
      ACCEPT_TOKEN(sym_keyword_count);
      if (lookahead == '_') ADVANCE(701);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(801);
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
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(801);
      END_STATE();
    case 489:
      ACCEPT_TOKEN(sym_keyword_avg);
      END_STATE();
    case 490:
      ACCEPT_TOKEN(sym_keyword_avg);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(801);
      END_STATE();
    case 491:
      ACCEPT_TOKEN(sym_keyword_sum);
      END_STATE();
    case 492:
      ACCEPT_TOKEN(sym_keyword_sum);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(801);
      END_STATE();
    case 493:
      ACCEPT_TOKEN(sym_keyword_count_distinct);
      END_STATE();
    case 494:
      ACCEPT_TOKEN(sym_keyword_count_distinct);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(801);
      END_STATE();
    case 495:
      ACCEPT_TOKEN(sym_keyword_side);
      END_STATE();
    case 496:
      ACCEPT_TOKEN(sym_keyword_side);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(801);
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
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(801);
      END_STATE();
    case 503:
      ACCEPT_TOKEN(sym_keyword_or);
      END_STATE();
    case 504:
      ACCEPT_TOKEN(sym_keyword_or);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(801);
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
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(801);
      END_STATE();
    case 512:
      ACCEPT_TOKEN(sym_keyword_func);
      END_STATE();
    case 513:
      ACCEPT_TOKEN(sym_keyword_func);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(801);
      END_STATE();
    case 514:
      ACCEPT_TOKEN(sym_keyword_let);
      END_STATE();
    case 515:
      ACCEPT_TOKEN(sym_keyword_let);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(801);
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
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(801);
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
      if (lookahead == '#') ADVANCE(823);
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
      if (lookahead == '#') ADVANCE(823);
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
      if (lookahead == '#') ADVANCE(824);
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
      if (lookahead == '#') ADVANCE(824);
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
      if (lookahead == '#') ADVANCE(821);
      if (lookahead != 0) ADVANCE(555);
      END_STATE();
    case 558:
      ACCEPT_TOKEN(aux_sym__inner_triple_quotes_token1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(558);
      if (lookahead == '#') ADVANCE(821);
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
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(801);
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
      if (lookahead == 'a') ADVANCE(742);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(801);
      END_STATE();
    case 570:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '"') ADVANCE(562);
      if (lookahead == 't') ADVANCE(704);
      if (lookahead == 'u') ADVANCE(747);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(801);
      END_STATE();
    case 571:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '"') ADVANCE(562);
      if (lookahead == 'u') ADVANCE(747);
      if (lookahead == 'w') ADVANCE(739);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(801);
      END_STATE();
    case 572:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '"') ADVANCE(562);
      if (lookahead == 'u') ADVANCE(747);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(801);
      END_STATE();
    case 573:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '"') ADVANCE(562);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(801);
      END_STATE();
    case 574:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'A') ADVANCE(627);
      if (lookahead == 'I') ADVANCE(631);
      if (lookahead == 'R') ADVANCE(644);
      if (lookahead == 'U') ADVANCE(639);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(801);
      END_STATE();
    case 575:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'A') ADVANCE(627);
      if (lookahead == 'I') ADVANCE(631);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(801);
      END_STATE();
    case 576:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'A') ADVANCE(627);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(801);
      END_STATE();
    case 577:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'A') ADVANCE(687);
      if (lookahead == 'I') ADVANCE(635);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(801);
      END_STATE();
    case 578:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'A') ADVANCE(617);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(801);
      END_STATE();
    case 579:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'A') ADVANCE(626);
      if (lookahead == 'R') ADVANCE(678);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(801);
      END_STATE();
    case 580:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'A') ADVANCE(675);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(801);
      END_STATE();
    case 581:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'C') ADVANCE(513);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(801);
      END_STATE();
    case 582:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'C') ADVANCE(619);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(801);
      END_STATE();
    case 583:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'C') ADVANCE(664);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(801);
      END_STATE();
    case 584:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'C') ADVANCE(667);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(801);
      END_STATE();
    case 585:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'C') ADVANCE(669);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(801);
      END_STATE();
    case 586:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'D') ADVANCE(620);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(801);
      END_STATE();
    case 587:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'D') ADVANCE(502);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(801);
      END_STATE();
    case 588:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'D') ADVANCE(472);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(801);
      END_STATE();
    case 589:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'D') ADVANCE(590);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(801);
      END_STATE();
    case 590:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'D') ADVANCE(600);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(801);
      END_STATE();
    case 591:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'D') ADVANCE(599);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(801);
      END_STATE();
    case 592:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'E') ADVANCE(466);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(801);
      END_STATE();
    case 593:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'E') ADVANCE(468);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(801);
      END_STATE();
    case 594:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'E') ADVANCE(478);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(801);
      END_STATE();
    case 595:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'E') ADVANCE(459);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(801);
      END_STATE();
    case 596:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'E') ADVANCE(451);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(801);
      END_STATE();
    case 597:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'E') ADVANCE(474);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(801);
      END_STATE();
    case 598:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'E') ADVANCE(455);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(801);
      END_STATE();
    case 599:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'E') ADVANCE(496);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(801);
      END_STATE();
    case 600:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'E') ADVANCE(683);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(801);
      END_STATE();
    case 601:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'E') ADVANCE(652);
      if (lookahead == 'G') ADVANCE(490);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(801);
      END_STATE();
    case 602:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'E') ADVANCE(652);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(801);
      END_STATE();
    case 603:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'E') ADVANCE(688);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(801);
      END_STATE();
    case 604:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'E') ADVANCE(634);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(801);
      END_STATE();
    case 605:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'E') ADVANCE(616);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(801);
      END_STATE();
    case 606:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'E') ADVANCE(654);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(801);
      END_STATE();
    case 607:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'E') ADVANCE(630);
      if (lookahead == 'O') ADVANCE(655);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(801);
      END_STATE();
    case 608:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'E') ADVANCE(665);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(801);
      END_STATE();
    case 609:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'E') ADVANCE(642);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(801);
      END_STATE();
    case 610:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'E') ADVANCE(658);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(801);
      END_STATE();
    case 611:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'E') ADVANCE(651);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(801);
      END_STATE();
    case 612:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'E') ADVANCE(584);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(801);
      END_STATE();
    case 613:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'E') ADVANCE(585);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(801);
      END_STATE();
    case 614:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'G') ADVANCE(618);
      if (lookahead == 'N') ADVANCE(587);
      if (lookahead == 'P') ADVANCE(649);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(801);
      END_STATE();
    case 615:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'G') ADVANCE(618);
      if (lookahead == 'P') ADVANCE(649);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(801);
      END_STATE();
    case 616:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'G') ADVANCE(580);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(801);
      END_STATE();
    case 617:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'G') ADVANCE(594);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(801);
      END_STATE();
    case 618:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'G') ADVANCE(656);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(801);
      END_STATE();
    case 619:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'H') ADVANCE(470);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(801);
      END_STATE();
    case 620:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'I') ADVANCE(660);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(801);
      END_STATE();
    case 621:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'I') ADVANCE(684);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(801);
      END_STATE();
    case 622:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'I') ADVANCE(637);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(801);
      END_STATE();
    case 623:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'I') ADVANCE(638);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(801);
      END_STATE();
    case 624:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'I') ADVANCE(671);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(801);
      END_STATE();
    case 625:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'I') ADVANCE(591);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(801);
      END_STATE();
    case 626:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'K') ADVANCE(595);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(801);
      END_STATE();
    case 627:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'L') ADVANCE(659);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(801);
      END_STATE();
    case 628:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'L') ADVANCE(511);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(801);
      END_STATE();
    case 629:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'L') ADVANCE(628);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(801);
      END_STATE();
    case 630:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'L') ADVANCE(612);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(801);
      END_STATE();
    case 631:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'L') ADVANCE(673);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(801);
      END_STATE();
    case 632:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'M') ADVANCE(492);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(801);
      END_STATE();
    case 633:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'M') ADVANCE(446);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(801);
      END_STATE();
    case 634:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'M') ADVANCE(647);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(801);
      END_STATE();
    case 635:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'N') ADVANCE(480);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(801);
      END_STATE();
    case 636:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'N') ADVANCE(663);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(801);
      END_STATE();
    case 637:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'N') ADVANCE(583);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(801);
      END_STATE();
    case 638:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'N') ADVANCE(462);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(801);
      END_STATE();
    case 639:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'N') ADVANCE(581);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(801);
      END_STATE();
    case 640:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'N') ADVANCE(587);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(801);
      END_STATE();
    case 641:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'N') ADVANCE(672);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(801);
      END_STATE();
    case 642:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'N') ADVANCE(588);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(801);
      END_STATE();
    case 643:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'O') ADVANCE(680);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(801);
      END_STATE();
    case 644:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'O') ADVANCE(633);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(801);
      END_STATE();
    case 645:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'O') ADVANCE(681);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(801);
      END_STATE();
    case 646:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'O') ADVANCE(623);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(801);
      END_STATE();
    case 647:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'O') ADVANCE(685);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(801);
      END_STATE();
    case 648:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'P') ADVANCE(453);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(801);
      END_STATE();
    case 649:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'P') ADVANCE(609);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(801);
      END_STATE();
    case 650:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'R') ADVANCE(504);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(801);
      END_STATE();
    case 651:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'R') ADVANCE(449);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(801);
      END_STATE();
    case 652:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'R') ADVANCE(578);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(801);
      END_STATE();
    case 653:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'R') ADVANCE(678);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(801);
      END_STATE();
    case 654:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'R') ADVANCE(621);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(801);
      END_STATE();
    case 655:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'R') ADVANCE(666);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(801);
      END_STATE();
    case 656:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'R') ADVANCE(605);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(801);
      END_STATE();
    case 657:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'R') ADVANCE(645);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(801);
      END_STATE();
    case 658:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'R') ADVANCE(661);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(801);
      END_STATE();
    case 659:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'S') ADVANCE(593);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(801);
      END_STATE();
    case 660:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'S') ADVANCE(670);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(801);
      END_STATE();
    case 661:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'S') ADVANCE(613);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(801);
      END_STATE();
    case 662:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'T') ADVANCE(589);
      if (lookahead == 'U') ADVANCE(632);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(801);
      END_STATE();
    case 663:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'T') ADVANCE(483);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(801);
      END_STATE();
    case 664:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'T') ADVANCE(494);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(801);
      END_STATE();
    case 665:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'T') ADVANCE(515);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(801);
      END_STATE();
    case 666:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'T') ADVANCE(457);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(801);
      END_STATE();
    case 667:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'T') ADVANCE(464);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(801);
      END_STATE();
    case 668:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'T') ADVANCE(532);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(801);
      END_STATE();
    case 669:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'T') ADVANCE(476);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(801);
      END_STATE();
    case 670:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'T') ADVANCE(622);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(801);
      END_STATE();
    case 671:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'T') ADVANCE(582);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(801);
      END_STATE();
    case 672:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'T') ADVANCE(610);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(801);
      END_STATE();
    case 673:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'T') ADVANCE(611);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(801);
      END_STATE();
    case 674:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'T') ADVANCE(603);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(801);
      END_STATE();
    case 675:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'T') ADVANCE(598);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(801);
      END_STATE();
    case 676:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'U') ADVANCE(632);
      if (lookahead == 'W') ADVANCE(624);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(801);
      END_STATE();
    case 677:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'U') ADVANCE(632);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(801);
      END_STATE();
    case 678:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'U') ADVANCE(592);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(801);
      END_STATE();
    case 679:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'U') ADVANCE(629);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(801);
      END_STATE();
    case 680:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'U') ADVANCE(636);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(801);
      END_STATE();
    case 681:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'U') ADVANCE(648);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(801);
      END_STATE();
    case 682:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'V') ADVANCE(601);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(801);
      END_STATE();
    case 683:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'V') ADVANCE(488);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(801);
      END_STATE();
    case 684:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'V') ADVANCE(596);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(801);
      END_STATE();
    case 685:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'V') ADVANCE(597);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(801);
      END_STATE();
    case 686:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'V') ADVANCE(602);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(801);
      END_STATE();
    case 687:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'X') ADVANCE(482);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(801);
      END_STATE();
    case 688:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'X') ADVANCE(668);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(801);
      END_STATE();
    case 689:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'a') ADVANCE(742);
      if (lookahead == 'i') ADVANCE(746);
      if (lookahead == 'r') ADVANCE(759);
      if (lookahead == 'u') ADVANCE(754);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(801);
      END_STATE();
    case 690:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'a') ADVANCE(742);
      if (lookahead == 'i') ADVANCE(746);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(801);
      END_STATE();
    case 691:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'a') ADVANCE(742);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(801);
      END_STATE();
    case 692:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'a') ADVANCE(799);
      if (lookahead == 'i') ADVANCE(750);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(801);
      END_STATE();
    case 693:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'a') ADVANCE(732);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(801);
      END_STATE();
    case 694:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'a') ADVANCE(741);
      if (lookahead == 'r') ADVANCE(790);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(801);
      END_STATE();
    case 695:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'a') ADVANCE(789);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(801);
      END_STATE();
    case 696:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'c') ADVANCE(513);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(801);
      END_STATE();
    case 697:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'c') ADVANCE(734);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(801);
      END_STATE();
    case 698:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'c') ADVANCE(777);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(801);
      END_STATE();
    case 699:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'c') ADVANCE(780);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(801);
      END_STATE();
    case 700:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'c') ADVANCE(782);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(801);
      END_STATE();
    case 701:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'd') ADVANCE(735);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(801);
      END_STATE();
    case 702:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'd') ADVANCE(502);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(801);
      END_STATE();
    case 703:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'd') ADVANCE(472);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(801);
      END_STATE();
    case 704:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'd') ADVANCE(705);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(801);
      END_STATE();
    case 705:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'd') ADVANCE(715);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(801);
      END_STATE();
    case 706:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'd') ADVANCE(714);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(801);
      END_STATE();
    case 707:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(466);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(801);
      END_STATE();
    case 708:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(468);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(801);
      END_STATE();
    case 709:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(478);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(801);
      END_STATE();
    case 710:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(459);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(801);
      END_STATE();
    case 711:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(451);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(801);
      END_STATE();
    case 712:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(474);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(801);
      END_STATE();
    case 713:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(455);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(801);
      END_STATE();
    case 714:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(496);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(801);
      END_STATE();
    case 715:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(795);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(801);
      END_STATE();
    case 716:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(765);
      if (lookahead == 'g') ADVANCE(490);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(801);
      END_STATE();
    case 717:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(765);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(801);
      END_STATE();
    case 718:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(800);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(801);
      END_STATE();
    case 719:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(749);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(801);
      END_STATE();
    case 720:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(729);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(801);
      END_STATE();
    case 721:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(769);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(801);
      END_STATE();
    case 722:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(745);
      if (lookahead == 'o') ADVANCE(770);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(801);
      END_STATE();
    case 723:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(778);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(801);
      END_STATE();
    case 724:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(757);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(801);
      END_STATE();
    case 725:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(773);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(801);
      END_STATE();
    case 726:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(767);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(801);
      END_STATE();
    case 727:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(699);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(801);
      END_STATE();
    case 728:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(700);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(801);
      END_STATE();
    case 729:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'g') ADVANCE(695);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(801);
      END_STATE();
    case 730:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'g') ADVANCE(733);
      if (lookahead == 'n') ADVANCE(702);
      if (lookahead == 'p') ADVANCE(764);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(801);
      END_STATE();
    case 731:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'g') ADVANCE(733);
      if (lookahead == 'p') ADVANCE(764);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(801);
      END_STATE();
    case 732:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'g') ADVANCE(709);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(801);
      END_STATE();
    case 733:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'g') ADVANCE(771);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(801);
      END_STATE();
    case 734:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'h') ADVANCE(470);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(801);
      END_STATE();
    case 735:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'i') ADVANCE(775);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(801);
      END_STATE();
    case 736:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'i') ADVANCE(796);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(801);
      END_STATE();
    case 737:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'i') ADVANCE(752);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(801);
      END_STATE();
    case 738:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'i') ADVANCE(753);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(801);
      END_STATE();
    case 739:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'i') ADVANCE(785);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(801);
      END_STATE();
    case 740:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'i') ADVANCE(706);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(801);
      END_STATE();
    case 741:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'k') ADVANCE(710);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(801);
      END_STATE();
    case 742:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'l') ADVANCE(774);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(801);
      END_STATE();
    case 743:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'l') ADVANCE(511);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(801);
      END_STATE();
    case 744:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'l') ADVANCE(743);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(801);
      END_STATE();
    case 745:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'l') ADVANCE(727);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(801);
      END_STATE();
    case 746:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'l') ADVANCE(787);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(801);
      END_STATE();
    case 747:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'm') ADVANCE(492);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(801);
      END_STATE();
    case 748:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'm') ADVANCE(447);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(801);
      END_STATE();
    case 749:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'm') ADVANCE(762);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(801);
      END_STATE();
    case 750:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'n') ADVANCE(480);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(801);
      END_STATE();
    case 751:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'n') ADVANCE(783);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(801);
      END_STATE();
    case 752:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'n') ADVANCE(698);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(801);
      END_STATE();
    case 753:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'n') ADVANCE(462);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(801);
      END_STATE();
    case 754:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'n') ADVANCE(696);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(801);
      END_STATE();
    case 755:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'n') ADVANCE(702);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(801);
      END_STATE();
    case 756:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'n') ADVANCE(786);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(801);
      END_STATE();
    case 757:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'n') ADVANCE(703);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(801);
      END_STATE();
    case 758:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'o') ADVANCE(792);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(801);
      END_STATE();
    case 759:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'o') ADVANCE(748);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(801);
      END_STATE();
    case 760:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'o') ADVANCE(793);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(801);
      END_STATE();
    case 761:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'o') ADVANCE(738);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(801);
      END_STATE();
    case 762:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'o') ADVANCE(797);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(801);
      END_STATE();
    case 763:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'p') ADVANCE(453);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(801);
      END_STATE();
    case 764:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'p') ADVANCE(724);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(801);
      END_STATE();
    case 765:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'r') ADVANCE(693);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(801);
      END_STATE();
    case 766:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'r') ADVANCE(504);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(801);
      END_STATE();
    case 767:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'r') ADVANCE(449);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(801);
      END_STATE();
    case 768:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'r') ADVANCE(790);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(801);
      END_STATE();
    case 769:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'r') ADVANCE(736);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(801);
      END_STATE();
    case 770:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'r') ADVANCE(779);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(801);
      END_STATE();
    case 771:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'r') ADVANCE(720);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(801);
      END_STATE();
    case 772:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'r') ADVANCE(760);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(801);
      END_STATE();
    case 773:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'r') ADVANCE(776);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(801);
      END_STATE();
    case 774:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 's') ADVANCE(708);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(801);
      END_STATE();
    case 775:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 's') ADVANCE(784);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(801);
      END_STATE();
    case 776:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 's') ADVANCE(728);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(801);
      END_STATE();
    case 777:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 't') ADVANCE(494);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(801);
      END_STATE();
    case 778:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 't') ADVANCE(515);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(801);
      END_STATE();
    case 779:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 't') ADVANCE(457);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(801);
      END_STATE();
    case 780:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 't') ADVANCE(464);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(801);
      END_STATE();
    case 781:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 't') ADVANCE(532);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(801);
      END_STATE();
    case 782:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 't') ADVANCE(476);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(801);
      END_STATE();
    case 783:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 't') ADVANCE(484);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(801);
      END_STATE();
    case 784:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 't') ADVANCE(737);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(801);
      END_STATE();
    case 785:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 't') ADVANCE(697);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(801);
      END_STATE();
    case 786:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 't') ADVANCE(725);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(801);
      END_STATE();
    case 787:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 't') ADVANCE(726);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(801);
      END_STATE();
    case 788:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 't') ADVANCE(718);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(801);
      END_STATE();
    case 789:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 't') ADVANCE(713);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(801);
      END_STATE();
    case 790:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'u') ADVANCE(707);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(801);
      END_STATE();
    case 791:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'u') ADVANCE(744);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(801);
      END_STATE();
    case 792:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'u') ADVANCE(751);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(801);
      END_STATE();
    case 793:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'u') ADVANCE(763);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(801);
      END_STATE();
    case 794:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'v') ADVANCE(716);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(801);
      END_STATE();
    case 795:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'v') ADVANCE(488);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(801);
      END_STATE();
    case 796:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'v') ADVANCE(711);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(801);
      END_STATE();
    case 797:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'v') ADVANCE(712);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(801);
      END_STATE();
    case 798:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'v') ADVANCE(717);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(801);
      END_STATE();
    case 799:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'x') ADVANCE(482);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(801);
      END_STATE();
    case 800:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'x') ADVANCE(781);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(801);
      END_STATE();
    case 801:
      ACCEPT_TOKEN(sym__identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(801);
      END_STATE();
    case 802:
      ACCEPT_TOKEN(sym__identifier_dot);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(802);
      END_STATE();
    case 803:
      ACCEPT_TOKEN(anon_sym_DOT_DOT);
      END_STATE();
    case 804:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 805:
      ACCEPT_TOKEN(anon_sym_SLASH);
      END_STATE();
    case 806:
      ACCEPT_TOKEN(anon_sym_PIPE);
      END_STATE();
    case 807:
      ACCEPT_TOKEN(anon_sym_BANG_EQ);
      END_STATE();
    case 808:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '=') ADVANCE(809);
      END_STATE();
    case 809:
      ACCEPT_TOKEN(anon_sym_GT_EQ);
      END_STATE();
    case 810:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '=') ADVANCE(811);
      END_STATE();
    case 811:
      ACCEPT_TOKEN(anon_sym_LT_EQ);
      END_STATE();
    case 812:
      ACCEPT_TOKEN(anon_sym_QMARK_QMARK);
      END_STATE();
    case 813:
      ACCEPT_TOKEN(aux_sym__date_token1);
      END_STATE();
    case 814:
      ACCEPT_TOKEN(aux_sym__date_token2);
      END_STATE();
    case 815:
      ACCEPT_TOKEN(aux_sym__date_token2);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(814);
      END_STATE();
    case 816:
      ACCEPT_TOKEN(anon_sym_AT);
      END_STATE();
    case 817:
      ACCEPT_TOKEN(aux_sym__time_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(433);
      END_STATE();
    case 818:
      ACCEPT_TOKEN(anon_sym_T);
      if (lookahead == 'A') ADVANCE(100);
      if (lookahead == 'R') ADVANCE(182);
      END_STATE();
    case 819:
      ACCEPT_TOKEN(anon_sym_T);
      if (lookahead == 'A') ADVANCE(99);
      END_STATE();
    case 820:
      ACCEPT_TOKEN(anon_sym_Z);
      END_STATE();
    case 821:
      ACCEPT_TOKEN(anon_sym_POUND);
      END_STATE();
    case 822:
      ACCEPT_TOKEN(anon_sym_POUND);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(826);
      END_STATE();
    case 823:
      ACCEPT_TOKEN(anon_sym_POUND);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(550);
      END_STATE();
    case 824:
      ACCEPT_TOKEN(anon_sym_POUND);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(554);
      END_STATE();
    case 825:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == '#') ADVANCE(822);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(825);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(826);
      END_STATE();
    case 826:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(826);
      END_STATE();
    case 827:
      ACCEPT_TOKEN(sym_bang);
      END_STATE();
    case 828:
      ACCEPT_TOKEN(sym_bang);
      if (lookahead == '=') ADVANCE(807);
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
  [4] = {.lex_state = 434},
  [5] = {.lex_state = 5},
  [6] = {.lex_state = 5},
  [7] = {.lex_state = 2},
  [8] = {.lex_state = 435},
  [9] = {.lex_state = 435},
  [10] = {.lex_state = 435},
  [11] = {.lex_state = 435},
  [12] = {.lex_state = 6},
  [13] = {.lex_state = 6},
  [14] = {.lex_state = 6},
  [15] = {.lex_state = 3},
  [16] = {.lex_state = 3},
  [17] = {.lex_state = 7},
  [18] = {.lex_state = 3},
  [19] = {.lex_state = 3},
  [20] = {.lex_state = 3},
  [21] = {.lex_state = 3},
  [22] = {.lex_state = 3},
  [23] = {.lex_state = 436},
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
  [42] = {.lex_state = 3},
  [43] = {.lex_state = 3},
  [44] = {.lex_state = 3},
  [45] = {.lex_state = 434},
  [46] = {.lex_state = 3},
  [47] = {.lex_state = 3},
  [48] = {.lex_state = 434},
  [49] = {.lex_state = 435},
  [50] = {.lex_state = 3},
  [51] = {.lex_state = 435},
  [52] = {.lex_state = 435},
  [53] = {.lex_state = 435},
  [54] = {.lex_state = 3},
  [55] = {.lex_state = 3},
  [56] = {.lex_state = 435},
  [57] = {.lex_state = 3},
  [58] = {.lex_state = 3},
  [59] = {.lex_state = 3},
  [60] = {.lex_state = 3},
  [61] = {.lex_state = 1},
  [62] = {.lex_state = 3},
  [63] = {.lex_state = 435},
  [64] = {.lex_state = 3},
  [65] = {.lex_state = 3},
  [66] = {.lex_state = 3},
  [67] = {.lex_state = 3},
  [68] = {.lex_state = 3},
  [69] = {.lex_state = 3},
  [70] = {.lex_state = 3},
  [71] = {.lex_state = 3},
  [72] = {.lex_state = 3},
  [73] = {.lex_state = 3},
  [74] = {.lex_state = 435},
  [75] = {.lex_state = 3},
  [76] = {.lex_state = 3},
  [77] = {.lex_state = 435},
  [78] = {.lex_state = 435},
  [79] = {.lex_state = 437},
  [80] = {.lex_state = 435},
  [81] = {.lex_state = 437},
  [82] = {.lex_state = 435},
  [83] = {.lex_state = 435},
  [84] = {.lex_state = 435},
  [85] = {.lex_state = 435},
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
  [98] = {.lex_state = 435},
  [99] = {.lex_state = 435},
  [100] = {.lex_state = 435},
  [101] = {.lex_state = 435},
  [102] = {.lex_state = 435},
  [103] = {.lex_state = 435},
  [104] = {.lex_state = 435},
  [105] = {.lex_state = 435},
  [106] = {.lex_state = 435},
  [107] = {.lex_state = 435},
  [108] = {.lex_state = 435},
  [109] = {.lex_state = 435},
  [110] = {.lex_state = 2},
  [111] = {.lex_state = 2},
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
  [125] = {.lex_state = 437},
  [126] = {.lex_state = 437},
  [127] = {.lex_state = 1},
  [128] = {.lex_state = 437},
  [129] = {.lex_state = 435},
  [130] = {.lex_state = 437},
  [131] = {.lex_state = 437},
  [132] = {.lex_state = 437},
  [133] = {.lex_state = 437},
  [134] = {.lex_state = 437},
  [135] = {.lex_state = 437},
  [136] = {.lex_state = 437},
  [137] = {.lex_state = 437},
  [138] = {.lex_state = 435},
  [139] = {.lex_state = 435},
  [140] = {.lex_state = 437},
  [141] = {.lex_state = 437},
  [142] = {.lex_state = 435},
  [143] = {.lex_state = 435},
  [144] = {.lex_state = 436},
  [145] = {.lex_state = 436},
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
  [157] = {.lex_state = 436},
  [158] = {.lex_state = 8},
  [159] = {.lex_state = 8},
  [160] = {.lex_state = 8},
  [161] = {.lex_state = 8},
  [162] = {.lex_state = 8},
  [163] = {.lex_state = 8},
  [164] = {.lex_state = 8},
  [165] = {.lex_state = 8},
  [166] = {.lex_state = 8},
  [167] = {.lex_state = 8},
  [168] = {.lex_state = 435},
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
  [186] = {.lex_state = 435},
  [187] = {.lex_state = 436},
  [188] = {.lex_state = 3},
  [189] = {.lex_state = 3},
  [190] = {.lex_state = 435},
  [191] = {.lex_state = 435},
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
  [245] = {.lex_state = 9},
  [246] = {.lex_state = 4},
  [247] = {.lex_state = 4},
  [248] = {.lex_state = 435},
  [249] = {.lex_state = 4},
  [250] = {.lex_state = 9},
  [251] = {.lex_state = 9},
  [252] = {.lex_state = 435},
  [253] = {.lex_state = 435},
  [254] = {.lex_state = 9},
  [255] = {.lex_state = 4},
  [256] = {.lex_state = 4},
  [257] = {.lex_state = 4},
  [258] = {.lex_state = 9},
  [259] = {.lex_state = 9},
  [260] = {.lex_state = 4},
  [261] = {.lex_state = 435},
  [262] = {.lex_state = 435},
  [263] = {.lex_state = 435},
  [264] = {.lex_state = 4},
  [265] = {.lex_state = 4},
  [266] = {.lex_state = 435},
  [267] = {.lex_state = 435},
  [268] = {.lex_state = 4},
  [269] = {.lex_state = 4},
  [270] = {.lex_state = 435},
  [271] = {.lex_state = 435},
  [272] = {.lex_state = 435},
  [273] = {.lex_state = 435},
  [274] = {.lex_state = 435},
  [275] = {.lex_state = 4},
  [276] = {.lex_state = 4},
  [277] = {.lex_state = 4},
  [278] = {.lex_state = 4},
  [279] = {.lex_state = 4},
  [280] = {.lex_state = 4},
  [281] = {.lex_state = 435},
  [282] = {.lex_state = 435},
  [283] = {.lex_state = 0},
  [284] = {.lex_state = 435},
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
  [295] = {.lex_state = 16},
  [296] = {.lex_state = 0},
  [297] = {.lex_state = 0},
  [298] = {.lex_state = 0},
  [299] = {.lex_state = 0},
  [300] = {.lex_state = 0},
  [301] = {.lex_state = 16},
  [302] = {.lex_state = 16},
  [303] = {.lex_state = 435},
  [304] = {.lex_state = 0},
  [305] = {.lex_state = 16},
  [306] = {.lex_state = 435},
  [307] = {.lex_state = 16},
  [308] = {.lex_state = 17},
  [309] = {.lex_state = 17},
  [310] = {.lex_state = 19},
  [311] = {.lex_state = 17},
  [312] = {.lex_state = 0},
  [313] = {.lex_state = 16},
  [314] = {.lex_state = 0},
  [315] = {.lex_state = 0},
  [316] = {.lex_state = 0},
  [317] = {.lex_state = 0},
  [318] = {.lex_state = 17},
  [319] = {.lex_state = 0},
  [320] = {.lex_state = 0},
  [321] = {.lex_state = 16},
  [322] = {.lex_state = 0},
  [323] = {.lex_state = 0},
  [324] = {.lex_state = 16},
  [325] = {.lex_state = 436},
  [326] = {.lex_state = 435},
  [327] = {.lex_state = 0},
  [328] = {.lex_state = 16},
  [329] = {.lex_state = 435},
  [330] = {.lex_state = 435},
  [331] = {.lex_state = 0},
  [332] = {.lex_state = 435},
  [333] = {.lex_state = 0},
  [334] = {.lex_state = 0},
  [335] = {.lex_state = 16},
  [336] = {.lex_state = 0},
  [337] = {.lex_state = 16},
  [338] = {.lex_state = 16},
  [339] = {.lex_state = 16},
  [340] = {.lex_state = 435},
  [341] = {.lex_state = 435},
  [342] = {.lex_state = 0},
  [343] = {.lex_state = 435},
  [344] = {.lex_state = 18},
  [345] = {.lex_state = 435},
  [346] = {.lex_state = 16},
  [347] = {.lex_state = 16},
  [348] = {.lex_state = 435},
  [349] = {.lex_state = 16},
  [350] = {.lex_state = 0},
  [351] = {.lex_state = 16},
  [352] = {.lex_state = 435},
  [353] = {.lex_state = 427},
  [354] = {.lex_state = 16},
  [355] = {.lex_state = 0},
  [356] = {.lex_state = 0},
  [357] = {.lex_state = 0},
  [358] = {.lex_state = 0},
  [359] = {.lex_state = 16},
  [360] = {.lex_state = 0},
  [361] = {.lex_state = 0},
  [362] = {.lex_state = 427},
  [363] = {.lex_state = 0},
  [364] = {.lex_state = 20},
  [365] = {.lex_state = 16},
  [366] = {.lex_state = 435},
  [367] = {.lex_state = 0},
  [368] = {.lex_state = 16},
  [369] = {.lex_state = 0},
  [370] = {.lex_state = 0},
  [371] = {.lex_state = 16},
  [372] = {.lex_state = 16},
  [373] = {.lex_state = 427},
  [374] = {.lex_state = 435},
  [375] = {.lex_state = 0},
  [376] = {.lex_state = 0},
  [377] = {.lex_state = 435},
  [378] = {.lex_state = 16},
  [379] = {.lex_state = 0},
  [380] = {.lex_state = 0},
  [381] = {.lex_state = 16},
  [382] = {.lex_state = 0},
  [383] = {.lex_state = 16},
  [384] = {.lex_state = 16},
  [385] = {.lex_state = 16},
  [386] = {.lex_state = 16},
  [387] = {.lex_state = 0},
  [388] = {.lex_state = 0},
  [389] = {.lex_state = 0},
  [390] = {.lex_state = 0},
  [391] = {.lex_state = 0},
  [392] = {.lex_state = 0},
  [393] = {.lex_state = 0},
  [394] = {.lex_state = 427},
  [395] = {.lex_state = 435},
  [396] = {.lex_state = 0},
  [397] = {.lex_state = 0},
  [398] = {.lex_state = 0},
  [399] = {.lex_state = 9},
  [400] = {.lex_state = 0},
  [401] = {.lex_state = 16},
  [402] = {.lex_state = 429},
  [403] = {.lex_state = 429},
  [404] = {.lex_state = 16},
  [405] = {.lex_state = 0},
  [406] = {.lex_state = 427},
  [407] = {.lex_state = 0},
  [408] = {.lex_state = 16},
  [409] = {.lex_state = 0},
  [410] = {.lex_state = 0},
  [411] = {.lex_state = 429},
  [412] = {.lex_state = 0},
  [413] = {.lex_state = 0},
  [414] = {.lex_state = 19},
  [415] = {.lex_state = 19},
  [416] = {.lex_state = 0},
  [417] = {.lex_state = 0},
  [418] = {.lex_state = 0},
  [419] = {.lex_state = 0},
  [420] = {.lex_state = 0},
  [421] = {.lex_state = 0},
  [422] = {.lex_state = 0},
  [423] = {.lex_state = 825},
  [424] = {.lex_state = 0},
  [425] = {.lex_state = 0},
  [426] = {.lex_state = 0},
  [427] = {.lex_state = 0},
  [428] = {.lex_state = 0},
  [429] = {.lex_state = 5},
  [430] = {.lex_state = 0},
  [431] = {.lex_state = 0},
  [432] = {.lex_state = 436},
  [433] = {.lex_state = 19},
  [434] = {.lex_state = 0},
  [435] = {.lex_state = 0},
  [436] = {.lex_state = 0},
  [437] = {.lex_state = 0},
  [438] = {.lex_state = 5},
  [439] = {.lex_state = 548},
  [440] = {.lex_state = 548},
  [441] = {.lex_state = 552},
  [442] = {.lex_state = 548},
  [443] = {.lex_state = 0},
  [444] = {.lex_state = 19},
  [445] = {.lex_state = 19},
  [446] = {.lex_state = 0},
  [447] = {.lex_state = 0},
  [448] = {.lex_state = 0},
  [449] = {.lex_state = 0},
  [450] = {.lex_state = 0},
  [451] = {.lex_state = 0},
  [452] = {.lex_state = 5},
  [453] = {.lex_state = 5},
  [454] = {.lex_state = 0},
  [455] = {.lex_state = 0},
  [456] = {.lex_state = 0},
  [457] = {.lex_state = 0},
  [458] = {.lex_state = 0},
  [459] = {.lex_state = 0},
  [460] = {.lex_state = 5},
  [461] = {.lex_state = 5},
  [462] = {.lex_state = 0},
  [463] = {.lex_state = 0},
  [464] = {.lex_state = 0},
  [465] = {.lex_state = 0},
  [466] = {.lex_state = 0},
  [467] = {.lex_state = 0},
  [468] = {.lex_state = 5},
  [469] = {.lex_state = 5},
  [470] = {.lex_state = 0},
  [471] = {.lex_state = 0},
  [472] = {.lex_state = 0},
  [473] = {.lex_state = 0},
  [474] = {.lex_state = 5},
  [475] = {.lex_state = 5},
  [476] = {.lex_state = 0},
  [477] = {.lex_state = 0},
  [478] = {.lex_state = 0},
  [479] = {.lex_state = 0},
  [480] = {.lex_state = 0},
  [481] = {.lex_state = 21},
  [482] = {.lex_state = 548},
  [483] = {.lex_state = 552},
  [484] = {.lex_state = 0},
  [485] = {.lex_state = 21},
  [486] = {.lex_state = 548},
  [487] = {.lex_state = 552},
  [488] = {.lex_state = 21},
  [489] = {.lex_state = 21},
  [490] = {.lex_state = 548},
  [491] = {.lex_state = 552},
  [492] = {.lex_state = 21},
  [493] = {.lex_state = 548},
  [494] = {.lex_state = 552},
  [495] = {.lex_state = 21},
  [496] = {.lex_state = 21},
  [497] = {.lex_state = 21},
  [498] = {.lex_state = 0},
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
    [sym_program] = STATE(499),
    [sym_prql] = STATE(315),
    [sym_pipeline] = STATE(333),
    [sym_variable] = STATE(333),
    [sym_function_definition] = STATE(333),
    [sym_from_text] = STATE(139),
    [sym_from] = STATE(139),
    [sym_comment] = STATE(1),
    [aux_sym_program_repeat1] = STATE(283),
    [aux_sym_program_repeat2] = STATE(288),
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
  [0] = 34,
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
    STATE(8), 1,
      aux_sym__friendly_number,
    STATE(82), 1,
      sym_integer,
    STATE(83), 1,
      sym_identifier,
    STATE(84), 1,
      sym__double_quote_string,
    STATE(102), 1,
      sym__single_quote_string,
    STATE(204), 1,
      sym_binary_expression,
    STATE(271), 1,
      sym__expression,
    STATE(436), 1,
      sym__alias_identifier,
    STATE(93), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(105), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(112), 2,
      sym__literal_string,
      sym_decimal_number,
    ACTIONS(17), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(393), 3,
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
    STATE(92), 7,
      sym_literal,
      sym_f_string,
      sym_s_string,
      sym_field,
      sym_date,
      sym_time,
      sym_timestamp,
  [122] = 33,
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
    STATE(8), 1,
      aux_sym__friendly_number,
    STATE(82), 1,
      sym_integer,
    STATE(83), 1,
      sym_identifier,
    STATE(84), 1,
      sym__double_quote_string,
    STATE(102), 1,
      sym__single_quote_string,
    STATE(220), 1,
      sym_binary_expression,
    STATE(271), 1,
      sym__expression,
    STATE(436), 1,
      sym__alias_identifier,
    STATE(93), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(105), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(112), 2,
      sym__literal_string,
      sym_decimal_number,
    ACTIONS(17), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(405), 3,
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
    STATE(92), 7,
      sym_literal,
      sym_f_string,
      sym_s_string,
      sym_field,
      sym_date,
      sym_time,
      sym_timestamp,
  [241] = 21,
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
      anon_sym_BQUOTE,
    ACTIONS(77), 1,
      sym__identifier,
    STATE(4), 1,
      sym_comment,
    STATE(79), 1,
      aux_sym_function_call_repeat1,
    STATE(122), 1,
      sym_identifier,
    STATE(123), 1,
      aux_sym__friendly_number,
    STATE(132), 1,
      sym_literal,
    STATE(135), 1,
      sym_integer,
    STATE(136), 1,
      sym__call_parameter,
    STATE(137), 2,
      sym__double_quote_string,
      sym__single_quote_string,
    STATE(140), 2,
      sym__literal_string,
      sym_decimal_number,
    ACTIONS(61), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    ACTIONS(57), 10,
      ts_builtin_sym_end,
      anon_sym_PLUS,
      anon_sym_EQ_EQ,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PIPE,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_QMARK_QMARK,
    ACTIONS(59), 19,
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
  [336] = 33,
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
    ACTIONS(79), 1,
      anon_sym_RBRACK,
    STATE(5), 1,
      sym_comment,
    STATE(8), 1,
      aux_sym__friendly_number,
    STATE(82), 1,
      sym_integer,
    STATE(83), 1,
      sym_identifier,
    STATE(84), 1,
      sym__double_quote_string,
    STATE(102), 1,
      sym__single_quote_string,
    STATE(220), 1,
      sym_binary_expression,
    STATE(271), 1,
      sym__expression,
    STATE(436), 1,
      sym__alias_identifier,
    STATE(93), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(105), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(112), 2,
      sym__literal_string,
      sym_decimal_number,
    ACTIONS(17), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(405), 3,
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
    STATE(92), 7,
      sym_literal,
      sym_f_string,
      sym_s_string,
      sym_field,
      sym_date,
      sym_time,
      sym_timestamp,
  [455] = 32,
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
    STATE(6), 1,
      sym_comment,
    STATE(8), 1,
      aux_sym__friendly_number,
    STATE(82), 1,
      sym_integer,
    STATE(83), 1,
      sym_identifier,
    STATE(84), 1,
      sym__double_quote_string,
    STATE(102), 1,
      sym__single_quote_string,
    STATE(220), 1,
      sym_binary_expression,
    STATE(271), 1,
      sym__expression,
    STATE(436), 1,
      sym__alias_identifier,
    STATE(93), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(105), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(112), 2,
      sym__literal_string,
      sym_decimal_number,
    ACTIONS(17), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(405), 3,
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
    STATE(92), 7,
      sym_literal,
      sym_f_string,
      sym_s_string,
      sym_field,
      sym_date,
      sym_time,
      sym_timestamp,
  [571] = 21,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(83), 1,
      anon_sym_DASH,
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
    STATE(7), 1,
      sym_comment,
    STATE(117), 1,
      aux_sym_function_call_repeat1,
    STATE(151), 1,
      aux_sym__friendly_number,
    STATE(153), 1,
      sym_identifier,
    STATE(158), 1,
      sym_integer,
    STATE(160), 1,
      sym__call_parameter,
    STATE(161), 1,
      sym_literal,
    STATE(156), 2,
      sym__literal_string,
      sym_decimal_number,
    STATE(165), 2,
      sym__double_quote_string,
      sym__single_quote_string,
    ACTIONS(81), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
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
    ACTIONS(59), 15,
      sym_keyword_filter,
      sym_keyword_derive,
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
  [662] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(8), 1,
      sym_comment,
    STATE(9), 1,
      aux_sym__friendly_number,
    ACTIONS(43), 2,
      sym__natural_number,
      anon_sym__,
    ACTIONS(101), 5,
      sym_keyword_from,
      anon_sym_EQ,
      anon_sym_DASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(99), 37,
      ts_builtin_sym_end,
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
  [722] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(107), 2,
      sym__natural_number,
      anon_sym__,
    STATE(9), 2,
      aux_sym__friendly_number,
      sym_comment,
    ACTIONS(105), 5,
      sym_keyword_from,
      anon_sym_EQ,
      anon_sym_DASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(103), 37,
      ts_builtin_sym_end,
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
  [780] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(9), 1,
      aux_sym__friendly_number,
    STATE(10), 1,
      sym_comment,
    ACTIONS(43), 2,
      sym__natural_number,
      anon_sym__,
    ACTIONS(112), 5,
      sym_keyword_from,
      anon_sym_EQ,
      anon_sym_DASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(110), 37,
      ts_builtin_sym_end,
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
  [840] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(11), 1,
      sym_comment,
    ACTIONS(116), 5,
      sym_keyword_from,
      anon_sym_EQ,
      anon_sym_DASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(114), 39,
      ts_builtin_sym_end,
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
  [895] = 32,
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
    ACTIONS(118), 1,
      sym_keyword_switch,
    ACTIONS(122), 1,
      anon_sym_LPAREN,
    ACTIONS(124), 1,
      anon_sym_BQUOTE,
    ACTIONS(126), 1,
      sym__identifier,
    STATE(4), 1,
      sym_identifier,
    STATE(8), 1,
      aux_sym__friendly_number,
    STATE(12), 1,
      sym_comment,
    STATE(82), 1,
      sym_integer,
    STATE(84), 1,
      sym__double_quote_string,
    STATE(102), 1,
      sym__single_quote_string,
    STATE(114), 1,
      sym__expression,
    STATE(178), 1,
      sym__agg_rhs_assignment,
    STATE(436), 1,
      sym__alias_identifier,
    ACTIONS(120), 2,
      sym_keyword_average,
      sym_keyword_sum,
    STATE(93), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(105), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(112), 2,
      sym__literal_string,
      sym_decimal_number,
    STATE(181), 2,
      sym_function_call,
      sym_switch,
    ACTIONS(17), 3,
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
  [1006] = 32,
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
    ACTIONS(118), 1,
      sym_keyword_switch,
    ACTIONS(122), 1,
      anon_sym_LPAREN,
    ACTIONS(128), 1,
      anon_sym_BQUOTE,
    ACTIONS(130), 1,
      sym__identifier,
    STATE(8), 1,
      aux_sym__friendly_number,
    STATE(13), 1,
      sym_comment,
    STATE(61), 1,
      sym_identifier,
    STATE(82), 1,
      sym_integer,
    STATE(84), 1,
      sym__double_quote_string,
    STATE(102), 1,
      sym__single_quote_string,
    STATE(114), 1,
      sym__expression,
    STATE(178), 1,
      sym__agg_rhs_assignment,
    STATE(436), 1,
      sym__alias_identifier,
    ACTIONS(120), 2,
      sym_keyword_average,
      sym_keyword_sum,
    STATE(93), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(105), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(112), 2,
      sym__literal_string,
      sym_decimal_number,
    STATE(181), 2,
      sym_function_call,
      sym_switch,
    ACTIONS(17), 3,
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
  [1117] = 32,
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
    ACTIONS(118), 1,
      sym_keyword_switch,
    ACTIONS(122), 1,
      anon_sym_LPAREN,
    ACTIONS(132), 1,
      anon_sym_BQUOTE,
    ACTIONS(134), 1,
      sym__identifier,
    STATE(7), 1,
      sym_identifier,
    STATE(8), 1,
      aux_sym__friendly_number,
    STATE(14), 1,
      sym_comment,
    STATE(82), 1,
      sym_integer,
    STATE(84), 1,
      sym__double_quote_string,
    STATE(102), 1,
      sym__single_quote_string,
    STATE(114), 1,
      sym__expression,
    STATE(178), 1,
      sym__agg_rhs_assignment,
    STATE(436), 1,
      sym__alias_identifier,
    ACTIONS(120), 2,
      sym_keyword_average,
      sym_keyword_sum,
    STATE(93), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(105), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(112), 2,
      sym__literal_string,
      sym_decimal_number,
    STATE(181), 2,
      sym_function_call,
      sym_switch,
    ACTIONS(17), 3,
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
  [1228] = 35,
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
    ACTIONS(136), 1,
      anon_sym_COMMA,
    ACTIONS(138), 1,
      anon_sym_RBRACK,
    STATE(8), 1,
      aux_sym__friendly_number,
    STATE(15), 1,
      sym_comment,
    STATE(24), 1,
      aux_sym_switch_repeat1,
    STATE(82), 1,
      sym_integer,
    STATE(83), 1,
      sym_identifier,
    STATE(84), 1,
      sym__double_quote_string,
    STATE(102), 1,
      sym__single_quote_string,
    STATE(189), 1,
      sym_switch_condition,
    STATE(266), 1,
      sym_binary_expression,
    STATE(267), 1,
      sym_literal,
    STATE(282), 1,
      sym__expression,
    STATE(376), 1,
      aux_sym_switch_repeat2,
    STATE(436), 1,
      sym__alias_identifier,
    STATE(93), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(105), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(112), 2,
      sym__literal_string,
      sym_decimal_number,
    ACTIONS(17), 3,
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
  [1344] = 33,
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
    STATE(8), 1,
      aux_sym__friendly_number,
    STATE(16), 1,
      sym_comment,
    STATE(24), 1,
      aux_sym_switch_repeat1,
    STATE(82), 1,
      sym_integer,
    STATE(83), 1,
      sym_identifier,
    STATE(84), 1,
      sym__double_quote_string,
    STATE(102), 1,
      sym__single_quote_string,
    STATE(189), 1,
      sym_switch_condition,
    STATE(266), 1,
      sym_binary_expression,
    STATE(267), 1,
      sym_literal,
    STATE(282), 1,
      sym__expression,
    STATE(436), 1,
      sym__alias_identifier,
    ACTIONS(140), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
    STATE(93), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(105), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(112), 2,
      sym__literal_string,
      sym_decimal_number,
    ACTIONS(17), 3,
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
  [1455] = 32,
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
    ACTIONS(128), 1,
      anon_sym_BQUOTE,
    ACTIONS(130), 1,
      sym__identifier,
    STATE(8), 1,
      aux_sym__friendly_number,
    STATE(17), 1,
      sym_comment,
    STATE(61), 1,
      sym_identifier,
    STATE(82), 1,
      sym_integer,
    STATE(84), 1,
      sym__double_quote_string,
    STATE(102), 1,
      sym__single_quote_string,
    STATE(263), 1,
      sym__expression,
    STATE(273), 1,
      sym_binary_expression,
    STATE(436), 1,
      sym__alias_identifier,
    STATE(451), 1,
      sym__agg_rhs_assignment,
    STATE(456), 1,
      sym_function_call,
    ACTIONS(120), 2,
      sym_keyword_average,
      sym_keyword_sum,
    STATE(93), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(105), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(112), 2,
      sym__literal_string,
      sym_decimal_number,
    ACTIONS(17), 3,
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
  [1564] = 32,
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
    ACTIONS(142), 1,
      anon_sym_COMMA,
    ACTIONS(144), 1,
      anon_sym_RBRACK,
    STATE(8), 1,
      aux_sym__friendly_number,
    STATE(18), 1,
      sym_comment,
    STATE(82), 1,
      sym_integer,
    STATE(83), 1,
      sym_identifier,
    STATE(84), 1,
      sym__double_quote_string,
    STATE(102), 1,
      sym__single_quote_string,
    STATE(172), 1,
      sym_assignment,
    STATE(190), 1,
      sym__expression,
    STATE(367), 1,
      sym_term,
    STATE(436), 1,
      sym__alias_identifier,
    STATE(93), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(105), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(112), 2,
      sym__literal_string,
      sym_decimal_number,
    ACTIONS(17), 3,
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
  [1673] = 32,
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
    ACTIONS(146), 1,
      anon_sym_LPAREN,
    ACTIONS(148), 1,
      anon_sym_COMMA,
    ACTIONS(150), 1,
      anon_sym_RBRACK,
    STATE(8), 1,
      aux_sym__friendly_number,
    STATE(19), 1,
      sym_comment,
    STATE(82), 1,
      sym_integer,
    STATE(83), 1,
      sym_identifier,
    STATE(84), 1,
      sym__double_quote_string,
    STATE(102), 1,
      sym__single_quote_string,
    STATE(172), 1,
      sym_assignment,
    STATE(190), 1,
      sym__expression,
    STATE(382), 1,
      sym_term,
    STATE(436), 1,
      sym__alias_identifier,
    STATE(93), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(105), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(112), 2,
      sym__literal_string,
      sym_decimal_number,
    ACTIONS(17), 3,
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
  [1782] = 32,
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
    ACTIONS(152), 1,
      anon_sym_COMMA,
    ACTIONS(154), 1,
      anon_sym_RBRACK,
    STATE(8), 1,
      aux_sym__friendly_number,
    STATE(20), 1,
      sym_comment,
    STATE(82), 1,
      sym_integer,
    STATE(83), 1,
      sym_identifier,
    STATE(84), 1,
      sym__double_quote_string,
    STATE(102), 1,
      sym__single_quote_string,
    STATE(172), 1,
      sym_assignment,
    STATE(190), 1,
      sym__expression,
    STATE(370), 1,
      sym_term,
    STATE(436), 1,
      sym__alias_identifier,
    STATE(93), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(105), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(112), 2,
      sym__literal_string,
      sym_decimal_number,
    ACTIONS(17), 3,
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
  [1891] = 34,
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
    ACTIONS(156), 1,
      anon_sym_COMMA,
    ACTIONS(158), 1,
      anon_sym_RBRACK,
    STATE(8), 1,
      aux_sym__friendly_number,
    STATE(15), 1,
      aux_sym_switch_repeat1,
    STATE(21), 1,
      sym_comment,
    STATE(82), 1,
      sym_integer,
    STATE(83), 1,
      sym_identifier,
    STATE(84), 1,
      sym__double_quote_string,
    STATE(102), 1,
      sym__single_quote_string,
    STATE(189), 1,
      sym_switch_condition,
    STATE(266), 1,
      sym_binary_expression,
    STATE(267), 1,
      sym_literal,
    STATE(282), 1,
      sym__expression,
    STATE(436), 1,
      sym__alias_identifier,
    STATE(93), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(105), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(112), 2,
      sym__literal_string,
      sym_decimal_number,
    ACTIONS(17), 3,
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
  [2004] = 32,
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
    ACTIONS(160), 1,
      anon_sym_LBRACK,
    ACTIONS(162), 1,
      sym_bang,
    STATE(8), 1,
      aux_sym__friendly_number,
    STATE(22), 1,
      sym_comment,
    STATE(82), 1,
      sym_integer,
    STATE(83), 1,
      sym_identifier,
    STATE(84), 1,
      sym__double_quote_string,
    STATE(102), 1,
      sym__single_quote_string,
    STATE(129), 1,
      sym__expression,
    STATE(172), 1,
      sym_assignment,
    STATE(229), 1,
      sym_term,
    STATE(436), 1,
      sym__alias_identifier,
    STATE(93), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(105), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(112), 2,
      sym__literal_string,
      sym_decimal_number,
    ACTIONS(17), 3,
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
  [2113] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(23), 1,
      sym_comment,
    ACTIONS(166), 6,
      sym_keyword_from,
      anon_sym_EQ,
      anon_sym_DASH,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_T,
    ACTIONS(164), 36,
      ts_builtin_sym_end,
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
  [2166] = 32,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(171), 1,
      anon_sym_LPAREN,
    ACTIONS(176), 1,
      anon_sym_DASH,
    ACTIONS(179), 1,
      anon_sym_DQUOTE,
    ACTIONS(182), 1,
      anon_sym_SQUOTE,
    ACTIONS(185), 1,
      anon_sym_f_DQUOTE,
    ACTIONS(188), 1,
      anon_sym_f_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(191), 1,
      anon_sym_s_DQUOTE,
    ACTIONS(194), 1,
      anon_sym_s_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(197), 1,
      sym__natural_number,
    ACTIONS(200), 1,
      anon_sym__,
    ACTIONS(203), 1,
      anon_sym_DOT,
    ACTIONS(206), 1,
      anon_sym_BQUOTE,
    ACTIONS(209), 1,
      sym__identifier,
    ACTIONS(212), 1,
      anon_sym_AT,
    STATE(8), 1,
      aux_sym__friendly_number,
    STATE(82), 1,
      sym_integer,
    STATE(83), 1,
      sym_identifier,
    STATE(84), 1,
      sym__double_quote_string,
    STATE(102), 1,
      sym__single_quote_string,
    STATE(189), 1,
      sym_switch_condition,
    STATE(266), 1,
      sym_binary_expression,
    STATE(267), 1,
      sym_literal,
    STATE(282), 1,
      sym__expression,
    STATE(436), 1,
      sym__alias_identifier,
    ACTIONS(174), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
    STATE(24), 2,
      sym_comment,
      aux_sym_switch_repeat1,
    STATE(93), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(105), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(112), 2,
      sym__literal_string,
      sym_decimal_number,
    ACTIONS(168), 3,
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
  [2275] = 32,
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
    ACTIONS(160), 1,
      anon_sym_LBRACK,
    ACTIONS(162), 1,
      sym_bang,
    STATE(8), 1,
      aux_sym__friendly_number,
    STATE(25), 1,
      sym_comment,
    STATE(82), 1,
      sym_integer,
    STATE(83), 1,
      sym_identifier,
    STATE(84), 1,
      sym__double_quote_string,
    STATE(102), 1,
      sym__single_quote_string,
    STATE(118), 1,
      sym__expression,
    STATE(172), 1,
      sym_assignment,
    STATE(229), 1,
      sym_term,
    STATE(436), 1,
      sym__alias_identifier,
    STATE(93), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(105), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(112), 2,
      sym__literal_string,
      sym_decimal_number,
    ACTIONS(17), 3,
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
  [2384] = 32,
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
      anon_sym_COMMA,
    ACTIONS(217), 1,
      anon_sym_RBRACK,
    STATE(8), 1,
      aux_sym__friendly_number,
    STATE(26), 1,
      sym_comment,
    STATE(82), 1,
      sym_integer,
    STATE(83), 1,
      sym_identifier,
    STATE(84), 1,
      sym__double_quote_string,
    STATE(102), 1,
      sym__single_quote_string,
    STATE(172), 1,
      sym_assignment,
    STATE(190), 1,
      sym__expression,
    STATE(375), 1,
      sym_term,
    STATE(436), 1,
      sym__alias_identifier,
    STATE(93), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(105), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(112), 2,
      sym__literal_string,
      sym_decimal_number,
    ACTIONS(17), 3,
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
  [2493] = 31,
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
    ACTIONS(219), 1,
      anon_sym_LPAREN,
    ACTIONS(221), 1,
      anon_sym_RBRACK,
    STATE(8), 1,
      aux_sym__friendly_number,
    STATE(27), 1,
      sym_comment,
    STATE(82), 1,
      sym_integer,
    STATE(83), 1,
      sym_identifier,
    STATE(84), 1,
      sym__double_quote_string,
    STATE(102), 1,
      sym__single_quote_string,
    STATE(172), 1,
      sym_assignment,
    STATE(190), 1,
      sym__expression,
    STATE(398), 1,
      sym_term,
    STATE(436), 1,
      sym__alias_identifier,
    STATE(93), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(105), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(112), 2,
      sym__literal_string,
      sym_decimal_number,
    ACTIONS(17), 3,
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
  [2599] = 31,
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
    STATE(8), 1,
      aux_sym__friendly_number,
    STATE(28), 1,
      sym_comment,
    STATE(82), 1,
      sym_integer,
    STATE(83), 1,
      sym_identifier,
    STATE(84), 1,
      sym__double_quote_string,
    STATE(102), 1,
      sym__single_quote_string,
    STATE(118), 1,
      sym__expression,
    STATE(230), 1,
      sym_term,
    STATE(234), 1,
      sym_assignment,
    STATE(436), 1,
      sym__alias_identifier,
    STATE(93), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(105), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(112), 2,
      sym__literal_string,
      sym_decimal_number,
    ACTIONS(17), 3,
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
  [2705] = 31,
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
    ACTIONS(225), 1,
      anon_sym_LBRACK,
    STATE(8), 1,
      aux_sym__friendly_number,
    STATE(29), 1,
      sym_comment,
    STATE(82), 1,
      sym_integer,
    STATE(83), 1,
      sym_identifier,
    STATE(84), 1,
      sym__double_quote_string,
    STATE(102), 1,
      sym__single_quote_string,
    STATE(172), 1,
      sym_assignment,
    STATE(190), 1,
      sym__expression,
    STATE(435), 1,
      sym_term,
    STATE(436), 1,
      sym__alias_identifier,
    STATE(93), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(105), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(112), 2,
      sym__literal_string,
      sym_decimal_number,
    ACTIONS(17), 3,
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
  [2811] = 31,
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
    ACTIONS(227), 1,
      anon_sym_RBRACK,
    STATE(8), 1,
      aux_sym__friendly_number,
    STATE(30), 1,
      sym_comment,
    STATE(82), 1,
      sym_integer,
    STATE(83), 1,
      sym_identifier,
    STATE(84), 1,
      sym__double_quote_string,
    STATE(102), 1,
      sym__single_quote_string,
    STATE(172), 1,
      sym_assignment,
    STATE(190), 1,
      sym__expression,
    STATE(400), 1,
      sym_term,
    STATE(436), 1,
      sym__alias_identifier,
    STATE(93), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(105), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(112), 2,
      sym__literal_string,
      sym_decimal_number,
    ACTIONS(17), 3,
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
  [2917] = 31,
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
    STATE(8), 1,
      aux_sym__friendly_number,
    STATE(31), 1,
      sym_comment,
    STATE(82), 1,
      sym_integer,
    STATE(83), 1,
      sym_identifier,
    STATE(84), 1,
      sym__double_quote_string,
    STATE(102), 1,
      sym__single_quote_string,
    STATE(172), 1,
      sym_assignment,
    STATE(190), 1,
      sym__expression,
    STATE(400), 1,
      sym_term,
    STATE(436), 1,
      sym__alias_identifier,
    STATE(93), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(105), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(112), 2,
      sym__literal_string,
      sym_decimal_number,
    ACTIONS(17), 3,
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
  [3023] = 33,
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
      anon_sym_RBRACK,
    STATE(8), 1,
      aux_sym__friendly_number,
    STATE(16), 1,
      aux_sym_switch_repeat1,
    STATE(32), 1,
      sym_comment,
    STATE(82), 1,
      sym_integer,
    STATE(83), 1,
      sym_identifier,
    STATE(84), 1,
      sym__double_quote_string,
    STATE(102), 1,
      sym__single_quote_string,
    STATE(189), 1,
      sym_switch_condition,
    STATE(266), 1,
      sym_binary_expression,
    STATE(267), 1,
      sym_literal,
    STATE(282), 1,
      sym__expression,
    STATE(436), 1,
      sym__alias_identifier,
    STATE(93), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(105), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(112), 2,
      sym__literal_string,
      sym_decimal_number,
    ACTIONS(17), 3,
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
  [3133] = 31,
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
    STATE(8), 1,
      aux_sym__friendly_number,
    STATE(33), 1,
      sym_comment,
    STATE(82), 1,
      sym_integer,
    STATE(83), 1,
      sym_identifier,
    STATE(84), 1,
      sym__double_quote_string,
    STATE(102), 1,
      sym__single_quote_string,
    STATE(129), 1,
      sym__expression,
    STATE(230), 1,
      sym_term,
    STATE(234), 1,
      sym_assignment,
    STATE(436), 1,
      sym__alias_identifier,
    STATE(93), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(105), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(112), 2,
      sym__literal_string,
      sym_decimal_number,
    ACTIONS(17), 3,
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
  [3239] = 32,
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
    ACTIONS(233), 1,
      anon_sym_COMMA,
    ACTIONS(235), 1,
      anon_sym_RBRACK,
    ACTIONS(237), 1,
      anon_sym_EQ_EQ,
    STATE(8), 1,
      aux_sym__friendly_number,
    STATE(34), 1,
      sym_comment,
    STATE(82), 1,
      sym_integer,
    STATE(83), 1,
      sym_identifier,
    STATE(84), 1,
      sym__double_quote_string,
    STATE(102), 1,
      sym__single_quote_string,
    STATE(235), 1,
      sym_binary_expression,
    STATE(282), 1,
      sym__expression,
    STATE(436), 1,
      sym__alias_identifier,
    STATE(93), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(105), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(112), 2,
      sym__literal_string,
      sym_decimal_number,
    ACTIONS(17), 3,
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
  [3347] = 33,
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
    ACTIONS(239), 1,
      anon_sym_RBRACK,
    STATE(8), 1,
      aux_sym__friendly_number,
    STATE(16), 1,
      aux_sym_switch_repeat1,
    STATE(35), 1,
      sym_comment,
    STATE(82), 1,
      sym_integer,
    STATE(83), 1,
      sym_identifier,
    STATE(84), 1,
      sym__double_quote_string,
    STATE(102), 1,
      sym__single_quote_string,
    STATE(189), 1,
      sym_switch_condition,
    STATE(266), 1,
      sym_binary_expression,
    STATE(267), 1,
      sym_literal,
    STATE(282), 1,
      sym__expression,
    STATE(436), 1,
      sym__alias_identifier,
    STATE(93), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(105), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(112), 2,
      sym__literal_string,
      sym_decimal_number,
    ACTIONS(17), 3,
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
  [3457] = 31,
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
    ACTIONS(241), 1,
      anon_sym_RBRACK,
    STATE(8), 1,
      aux_sym__friendly_number,
    STATE(36), 1,
      sym_comment,
    STATE(82), 1,
      sym_integer,
    STATE(83), 1,
      sym_identifier,
    STATE(84), 1,
      sym__double_quote_string,
    STATE(102), 1,
      sym__single_quote_string,
    STATE(172), 1,
      sym_assignment,
    STATE(190), 1,
      sym__expression,
    STATE(400), 1,
      sym_term,
    STATE(436), 1,
      sym__alias_identifier,
    STATE(93), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(105), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(112), 2,
      sym__literal_string,
      sym_decimal_number,
    ACTIONS(17), 3,
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
  [3563] = 31,
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
    ACTIONS(219), 1,
      anon_sym_LPAREN,
    ACTIONS(243), 1,
      anon_sym_RBRACK,
    STATE(8), 1,
      aux_sym__friendly_number,
    STATE(37), 1,
      sym_comment,
    STATE(82), 1,
      sym_integer,
    STATE(83), 1,
      sym_identifier,
    STATE(84), 1,
      sym__double_quote_string,
    STATE(102), 1,
      sym__single_quote_string,
    STATE(172), 1,
      sym_assignment,
    STATE(190), 1,
      sym__expression,
    STATE(398), 1,
      sym_term,
    STATE(436), 1,
      sym__alias_identifier,
    STATE(93), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(105), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(112), 2,
      sym__literal_string,
      sym_decimal_number,
    ACTIONS(17), 3,
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
  [3669] = 31,
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
    ACTIONS(219), 1,
      anon_sym_LPAREN,
    ACTIONS(245), 1,
      anon_sym_RBRACK,
    STATE(8), 1,
      aux_sym__friendly_number,
    STATE(38), 1,
      sym_comment,
    STATE(82), 1,
      sym_integer,
    STATE(83), 1,
      sym_identifier,
    STATE(84), 1,
      sym__double_quote_string,
    STATE(102), 1,
      sym__single_quote_string,
    STATE(172), 1,
      sym_assignment,
    STATE(190), 1,
      sym__expression,
    STATE(398), 1,
      sym_term,
    STATE(436), 1,
      sym__alias_identifier,
    STATE(93), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(105), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(112), 2,
      sym__literal_string,
      sym_decimal_number,
    ACTIONS(17), 3,
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
  [3775] = 31,
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
    ACTIONS(247), 1,
      anon_sym_RBRACK,
    STATE(8), 1,
      aux_sym__friendly_number,
    STATE(39), 1,
      sym_comment,
    STATE(82), 1,
      sym_integer,
    STATE(83), 1,
      sym_identifier,
    STATE(84), 1,
      sym__double_quote_string,
    STATE(102), 1,
      sym__single_quote_string,
    STATE(172), 1,
      sym_assignment,
    STATE(190), 1,
      sym__expression,
    STATE(400), 1,
      sym_term,
    STATE(436), 1,
      sym__alias_identifier,
    STATE(93), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(105), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(112), 2,
      sym__literal_string,
      sym_decimal_number,
    ACTIONS(17), 3,
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
  [3881] = 31,
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
    STATE(8), 1,
      aux_sym__friendly_number,
    STATE(40), 1,
      sym_comment,
    STATE(82), 1,
      sym_integer,
    STATE(83), 1,
      sym_identifier,
    STATE(84), 1,
      sym__double_quote_string,
    STATE(102), 1,
      sym__single_quote_string,
    STATE(190), 1,
      sym__expression,
    STATE(230), 1,
      sym_term,
    STATE(234), 1,
      sym_assignment,
    STATE(436), 1,
      sym__alias_identifier,
    STATE(93), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(105), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(112), 2,
      sym__literal_string,
      sym_decimal_number,
    ACTIONS(17), 3,
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
  [3987] = 31,
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
    ACTIONS(249), 1,
      anon_sym_RBRACK,
    STATE(8), 1,
      aux_sym__friendly_number,
    STATE(41), 1,
      sym_comment,
    STATE(82), 1,
      sym_integer,
    STATE(83), 1,
      sym_identifier,
    STATE(84), 1,
      sym__double_quote_string,
    STATE(102), 1,
      sym__single_quote_string,
    STATE(172), 1,
      sym_assignment,
    STATE(190), 1,
      sym__expression,
    STATE(400), 1,
      sym_term,
    STATE(436), 1,
      sym__alias_identifier,
    STATE(93), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(105), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(112), 2,
      sym__literal_string,
      sym_decimal_number,
    ACTIONS(17), 3,
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
  [4093] = 29,
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
    STATE(8), 1,
      aux_sym__friendly_number,
    STATE(42), 1,
      sym_comment,
    STATE(82), 1,
      sym_integer,
    STATE(83), 1,
      sym_identifier,
    STATE(84), 1,
      sym__double_quote_string,
    STATE(102), 1,
      sym__single_quote_string,
    STATE(253), 1,
      sym__expression,
    STATE(436), 1,
      sym__alias_identifier,
    ACTIONS(251), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
    STATE(93), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(105), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(112), 2,
      sym__literal_string,
      sym_decimal_number,
    ACTIONS(17), 3,
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
  [4194] = 30,
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
    ACTIONS(219), 1,
      anon_sym_LPAREN,
    STATE(8), 1,
      aux_sym__friendly_number,
    STATE(43), 1,
      sym_comment,
    STATE(82), 1,
      sym_integer,
    STATE(83), 1,
      sym_identifier,
    STATE(84), 1,
      sym__double_quote_string,
    STATE(102), 1,
      sym__single_quote_string,
    STATE(172), 1,
      sym_assignment,
    STATE(190), 1,
      sym__expression,
    STATE(398), 1,
      sym_term,
    STATE(436), 1,
      sym__alias_identifier,
    STATE(93), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(105), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(112), 2,
      sym__literal_string,
      sym_decimal_number,
    ACTIONS(17), 3,
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
  [4297] = 32,
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
    STATE(8), 1,
      aux_sym__friendly_number,
    STATE(16), 1,
      aux_sym_switch_repeat1,
    STATE(44), 1,
      sym_comment,
    STATE(82), 1,
      sym_integer,
    STATE(83), 1,
      sym_identifier,
    STATE(84), 1,
      sym__double_quote_string,
    STATE(102), 1,
      sym__single_quote_string,
    STATE(189), 1,
      sym_switch_condition,
    STATE(266), 1,
      sym_binary_expression,
    STATE(267), 1,
      sym_literal,
    STATE(282), 1,
      sym__expression,
    STATE(436), 1,
      sym__alias_identifier,
    STATE(93), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(105), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(112), 2,
      sym__literal_string,
      sym_decimal_number,
    ACTIONS(17), 3,
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
  [4404] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(45), 1,
      sym_comment,
    ACTIONS(253), 16,
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
    ACTIONS(255), 24,
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
  [4455] = 30,
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
    STATE(8), 1,
      aux_sym__friendly_number,
    STATE(46), 1,
      sym_comment,
    STATE(82), 1,
      sym_integer,
    STATE(83), 1,
      sym_identifier,
    STATE(84), 1,
      sym__double_quote_string,
    STATE(102), 1,
      sym__single_quote_string,
    STATE(172), 1,
      sym_assignment,
    STATE(190), 1,
      sym__expression,
    STATE(436), 1,
      sym__alias_identifier,
    STATE(459), 1,
      sym_term,
    STATE(93), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(105), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(112), 2,
      sym__literal_string,
      sym_decimal_number,
    ACTIONS(17), 3,
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
  [4558] = 30,
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
    STATE(8), 1,
      aux_sym__friendly_number,
    STATE(47), 1,
      sym_comment,
    STATE(82), 1,
      sym_integer,
    STATE(83), 1,
      sym_identifier,
    STATE(84), 1,
      sym__double_quote_string,
    STATE(102), 1,
      sym__single_quote_string,
    STATE(172), 1,
      sym_assignment,
    STATE(190), 1,
      sym__expression,
    STATE(400), 1,
      sym_term,
    STATE(436), 1,
      sym__alias_identifier,
    STATE(93), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(105), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(112), 2,
      sym__literal_string,
      sym_decimal_number,
    ACTIONS(17), 3,
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
  [4661] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(48), 1,
      sym_comment,
    ACTIONS(257), 16,
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
  [4712] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(265), 1,
      anon_sym_COLON,
    ACTIONS(267), 1,
      anon_sym_DOT,
    STATE(49), 1,
      sym_comment,
    ACTIONS(263), 5,
      sym_keyword_from,
      anon_sym_EQ,
      anon_sym_DASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(261), 32,
      ts_builtin_sym_end,
      sym_keyword_filter,
      sym_keyword_derive,
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
  [4766] = 30,
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
    ACTIONS(269), 1,
      anon_sym_RBRACK,
    STATE(8), 1,
      aux_sym__friendly_number,
    STATE(50), 1,
      sym_comment,
    STATE(82), 1,
      sym_integer,
    STATE(83), 1,
      sym_identifier,
    STATE(84), 1,
      sym__double_quote_string,
    STATE(102), 1,
      sym__single_quote_string,
    STATE(248), 1,
      sym_binary_expression,
    STATE(282), 1,
      sym__expression,
    STATE(436), 1,
      sym__alias_identifier,
    STATE(93), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(105), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(112), 2,
      sym__literal_string,
      sym_decimal_number,
    ACTIONS(17), 3,
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
  [4868] = 9,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(275), 1,
      anon_sym_DASH,
    ACTIONS(277), 1,
      anon_sym_PLUS,
    ACTIONS(279), 1,
      anon_sym_Z,
    STATE(51), 1,
      sym_comment,
    STATE(88), 1,
      sym_timezone,
    STATE(433), 1,
      sym_direction,
    ACTIONS(273), 4,
      sym_keyword_from,
      anon_sym_EQ,
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
  [4928] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(285), 1,
      anon_sym_COLON,
    ACTIONS(287), 1,
      anon_sym_DOT,
    STATE(52), 1,
      sym_comment,
    ACTIONS(283), 5,
      sym_keyword_from,
      anon_sym_EQ,
      anon_sym_DASH,
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
  [4982] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(53), 1,
      sym_comment,
    ACTIONS(259), 5,
      sym_keyword_from,
      anon_sym_EQ,
      anon_sym_DASH,
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
  [5032] = 29,
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
    ACTIONS(289), 1,
      anon_sym_LPAREN,
    STATE(8), 1,
      aux_sym__friendly_number,
    STATE(54), 1,
      sym_comment,
    STATE(82), 1,
      sym_integer,
    STATE(83), 1,
      sym_identifier,
    STATE(84), 1,
      sym__double_quote_string,
    STATE(102), 1,
      sym__single_quote_string,
    STATE(119), 1,
      sym__expression,
    STATE(223), 1,
      sym__boolean_expression,
    STATE(436), 1,
      sym__alias_identifier,
    STATE(93), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(105), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(112), 2,
      sym__literal_string,
      sym_decimal_number,
    ACTIONS(17), 3,
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
  [5132] = 30,
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
    ACTIONS(291), 1,
      anon_sym_RBRACK,
    STATE(8), 1,
      aux_sym__friendly_number,
    STATE(55), 1,
      sym_comment,
    STATE(82), 1,
      sym_integer,
    STATE(83), 1,
      sym_identifier,
    STATE(84), 1,
      sym__double_quote_string,
    STATE(102), 1,
      sym__single_quote_string,
    STATE(248), 1,
      sym_binary_expression,
    STATE(282), 1,
      sym__expression,
    STATE(436), 1,
      sym__alias_identifier,
    STATE(93), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(105), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(112), 2,
      sym__literal_string,
      sym_decimal_number,
    ACTIONS(17), 3,
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
  [5234] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(56), 1,
      sym_comment,
    ACTIONS(255), 5,
      sym_keyword_from,
      anon_sym_EQ,
      anon_sym_DASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(253), 34,
      ts_builtin_sym_end,
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
  [5284] = 29,
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
    STATE(8), 1,
      aux_sym__friendly_number,
    STATE(57), 1,
      sym_comment,
    STATE(82), 1,
      sym_integer,
    STATE(83), 1,
      sym_identifier,
    STATE(84), 1,
      sym__double_quote_string,
    STATE(102), 1,
      sym__single_quote_string,
    STATE(281), 1,
      sym_binary_expression,
    STATE(284), 1,
      sym__expression,
    STATE(436), 1,
      sym__alias_identifier,
    STATE(93), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(105), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(112), 2,
      sym__literal_string,
      sym_decimal_number,
    ACTIONS(17), 3,
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
  [5383] = 28,
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
    STATE(8), 1,
      aux_sym__friendly_number,
    STATE(58), 1,
      sym_comment,
    STATE(82), 1,
      sym_integer,
    STATE(83), 1,
      sym_identifier,
    STATE(84), 1,
      sym__double_quote_string,
    STATE(100), 1,
      sym__expression,
    STATE(102), 1,
      sym__single_quote_string,
    STATE(436), 1,
      sym__alias_identifier,
    STATE(93), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(105), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(112), 2,
      sym__literal_string,
      sym_decimal_number,
    ACTIONS(17), 3,
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
  [5480] = 29,
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
    STATE(8), 1,
      aux_sym__friendly_number,
    STATE(59), 1,
      sym_comment,
    STATE(82), 1,
      sym_integer,
    STATE(83), 1,
      sym_identifier,
    STATE(84), 1,
      sym__double_quote_string,
    STATE(102), 1,
      sym__single_quote_string,
    STATE(282), 1,
      sym__expression,
    STATE(436), 1,
      sym__alias_identifier,
    STATE(93), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(105), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(112), 2,
      sym__literal_string,
      sym_decimal_number,
    STATE(186), 2,
      sym_s_string,
      sym_binary_expression,
    ACTIONS(17), 3,
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
  [5579] = 29,
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
    STATE(8), 1,
      aux_sym__friendly_number,
    STATE(60), 1,
      sym_comment,
    STATE(82), 1,
      sym_integer,
    STATE(83), 1,
      sym_identifier,
    STATE(84), 1,
      sym__double_quote_string,
    STATE(102), 1,
      sym__single_quote_string,
    STATE(273), 1,
      sym_binary_expression,
    STATE(274), 1,
      sym__expression,
    STATE(436), 1,
      sym__alias_identifier,
    STATE(93), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(105), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(112), 2,
      sym__literal_string,
      sym_decimal_number,
    ACTIONS(17), 3,
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
  [5678] = 21,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(295), 1,
      anon_sym_DASH,
    ACTIONS(297), 1,
      anon_sym_DQUOTE,
    ACTIONS(299), 1,
      anon_sym_SQUOTE,
    ACTIONS(301), 1,
      sym__natural_number,
    ACTIONS(303), 1,
      anon_sym__,
    ACTIONS(305), 1,
      anon_sym_DOT,
    ACTIONS(307), 1,
      anon_sym_BQUOTE,
    ACTIONS(309), 1,
      sym__identifier,
    STATE(61), 1,
      sym_comment,
    STATE(147), 1,
      aux_sym_function_call_repeat1,
    STATE(246), 1,
      aux_sym__friendly_number,
    STATE(247), 1,
      sym_identifier,
    STATE(275), 1,
      sym_literal,
    STATE(276), 1,
      sym__call_parameter,
    STATE(278), 1,
      sym_integer,
    STATE(260), 2,
      sym__literal_string,
      sym_decimal_number,
    STATE(268), 2,
      sym__double_quote_string,
      sym__single_quote_string,
    ACTIONS(293), 3,
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
  [5761] = 28,
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
    STATE(8), 1,
      aux_sym__friendly_number,
    STATE(62), 1,
      sym_comment,
    STATE(82), 1,
      sym_integer,
    STATE(83), 1,
      sym_identifier,
    STATE(84), 1,
      sym__double_quote_string,
    STATE(102), 1,
      sym__single_quote_string,
    STATE(115), 1,
      sym__expression,
    STATE(436), 1,
      sym__alias_identifier,
    STATE(93), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(105), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(112), 2,
      sym__literal_string,
      sym_decimal_number,
    ACTIONS(17), 3,
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
  [5858] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(315), 1,
      anon_sym_DOT,
    STATE(63), 1,
      sym_comment,
    ACTIONS(313), 5,
      sym_keyword_from,
      anon_sym_EQ,
      anon_sym_DASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(311), 32,
      ts_builtin_sym_end,
      sym_keyword_filter,
      sym_keyword_derive,
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
  [5909] = 28,
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
    STATE(8), 1,
      aux_sym__friendly_number,
    STATE(64), 1,
      sym_comment,
    STATE(82), 1,
      sym_integer,
    STATE(83), 1,
      sym_identifier,
    STATE(84), 1,
      sym__double_quote_string,
    STATE(102), 1,
      sym__single_quote_string,
    STATE(107), 1,
      sym__expression,
    STATE(436), 1,
      sym__alias_identifier,
    STATE(93), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(105), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(112), 2,
      sym__literal_string,
      sym_decimal_number,
    ACTIONS(17), 3,
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
  [6006] = 28,
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
    STATE(8), 1,
      aux_sym__friendly_number,
    STATE(65), 1,
      sym_comment,
    STATE(82), 1,
      sym_integer,
    STATE(83), 1,
      sym_identifier,
    STATE(84), 1,
      sym__double_quote_string,
    STATE(102), 1,
      sym__single_quote_string,
    STATE(252), 1,
      sym__expression,
    STATE(436), 1,
      sym__alias_identifier,
    STATE(93), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(105), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(112), 2,
      sym__literal_string,
      sym_decimal_number,
    ACTIONS(17), 3,
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
  [6103] = 28,
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
    STATE(8), 1,
      aux_sym__friendly_number,
    STATE(66), 1,
      sym_comment,
    STATE(82), 1,
      sym_integer,
    STATE(83), 1,
      sym_identifier,
    STATE(84), 1,
      sym__double_quote_string,
    STATE(102), 1,
      sym__single_quote_string,
    STATE(106), 1,
      sym__expression,
    STATE(436), 1,
      sym__alias_identifier,
    STATE(93), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(105), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(112), 2,
      sym__literal_string,
      sym_decimal_number,
    ACTIONS(17), 3,
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
  [6200] = 28,
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
    STATE(8), 1,
      aux_sym__friendly_number,
    STATE(67), 1,
      sym_comment,
    STATE(82), 1,
      sym_integer,
    STATE(83), 1,
      sym_identifier,
    STATE(84), 1,
      sym__double_quote_string,
    STATE(102), 1,
      sym__single_quote_string,
    STATE(104), 1,
      sym__expression,
    STATE(436), 1,
      sym__alias_identifier,
    STATE(93), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(105), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(112), 2,
      sym__literal_string,
      sym_decimal_number,
    ACTIONS(17), 3,
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
  [6297] = 28,
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
    STATE(8), 1,
      aux_sym__friendly_number,
    STATE(68), 1,
      sym_comment,
    STATE(82), 1,
      sym_integer,
    STATE(83), 1,
      sym_identifier,
    STATE(84), 1,
      sym__double_quote_string,
    STATE(95), 1,
      sym__expression,
    STATE(102), 1,
      sym__single_quote_string,
    STATE(436), 1,
      sym__alias_identifier,
    STATE(93), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(105), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(112), 2,
      sym__literal_string,
      sym_decimal_number,
    ACTIONS(17), 3,
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
  [6394] = 29,
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
    STATE(8), 1,
      aux_sym__friendly_number,
    STATE(69), 1,
      sym_comment,
    STATE(82), 1,
      sym_integer,
    STATE(83), 1,
      sym_identifier,
    STATE(84), 1,
      sym__double_quote_string,
    STATE(102), 1,
      sym__single_quote_string,
    STATE(248), 1,
      sym_binary_expression,
    STATE(282), 1,
      sym__expression,
    STATE(436), 1,
      sym__alias_identifier,
    STATE(93), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(105), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(112), 2,
      sym__literal_string,
      sym_decimal_number,
    ACTIONS(17), 3,
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
  [6493] = 28,
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
    STATE(8), 1,
      aux_sym__friendly_number,
    STATE(70), 1,
      sym_comment,
    STATE(82), 1,
      sym_integer,
    STATE(83), 1,
      sym_identifier,
    STATE(84), 1,
      sym__double_quote_string,
    STATE(94), 1,
      sym__expression,
    STATE(102), 1,
      sym__single_quote_string,
    STATE(436), 1,
      sym__alias_identifier,
    STATE(93), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(105), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(112), 2,
      sym__literal_string,
      sym_decimal_number,
    ACTIONS(17), 3,
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
  [6590] = 28,
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
    STATE(8), 1,
      aux_sym__friendly_number,
    STATE(71), 1,
      sym_comment,
    STATE(82), 1,
      sym_integer,
    STATE(83), 1,
      sym_identifier,
    STATE(84), 1,
      sym__double_quote_string,
    STATE(102), 1,
      sym__single_quote_string,
    STATE(272), 1,
      sym__expression,
    STATE(436), 1,
      sym__alias_identifier,
    STATE(93), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(105), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(112), 2,
      sym__literal_string,
      sym_decimal_number,
    ACTIONS(17), 3,
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
  [6687] = 28,
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
    STATE(8), 1,
      aux_sym__friendly_number,
    STATE(72), 1,
      sym_comment,
    STATE(82), 1,
      sym_integer,
    STATE(83), 1,
      sym_identifier,
    STATE(84), 1,
      sym__double_quote_string,
    STATE(102), 1,
      sym__single_quote_string,
    STATE(270), 1,
      sym__expression,
    STATE(436), 1,
      sym__alias_identifier,
    STATE(93), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(105), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(112), 2,
      sym__literal_string,
      sym_decimal_number,
    ACTIONS(17), 3,
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
  [6784] = 28,
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
    STATE(8), 1,
      aux_sym__friendly_number,
    STATE(73), 1,
      sym_comment,
    STATE(82), 1,
      sym_integer,
    STATE(83), 1,
      sym_identifier,
    STATE(84), 1,
      sym__double_quote_string,
    STATE(102), 1,
      sym__single_quote_string,
    STATE(108), 1,
      sym__expression,
    STATE(436), 1,
      sym__alias_identifier,
    STATE(93), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(105), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(112), 2,
      sym__literal_string,
      sym_decimal_number,
    ACTIONS(17), 3,
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
  [6881] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(74), 1,
      sym_comment,
    ACTIONS(319), 5,
      sym_keyword_from,
      anon_sym_EQ,
      anon_sym_DASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(317), 33,
      ts_builtin_sym_end,
      sym_keyword_filter,
      sym_keyword_derive,
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
  [6930] = 29,
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
    STATE(8), 1,
      aux_sym__friendly_number,
    STATE(75), 1,
      sym_comment,
    STATE(82), 1,
      sym_integer,
    STATE(83), 1,
      sym_identifier,
    STATE(84), 1,
      sym__double_quote_string,
    STATE(102), 1,
      sym__single_quote_string,
    STATE(261), 1,
      sym_binary_expression,
    STATE(284), 1,
      sym__expression,
    STATE(436), 1,
      sym__alias_identifier,
    STATE(93), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(105), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(112), 2,
      sym__literal_string,
      sym_decimal_number,
    ACTIONS(17), 3,
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
  [7029] = 29,
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
    STATE(8), 1,
      aux_sym__friendly_number,
    STATE(76), 1,
      sym_comment,
    STATE(82), 1,
      sym_integer,
    STATE(83), 1,
      sym_identifier,
    STATE(84), 1,
      sym__double_quote_string,
    STATE(102), 1,
      sym__single_quote_string,
    STATE(262), 1,
      sym_binary_expression,
    STATE(284), 1,
      sym__expression,
    STATE(436), 1,
      sym__alias_identifier,
    STATE(93), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(105), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(112), 2,
      sym__literal_string,
      sym_decimal_number,
    ACTIONS(17), 3,
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
  [7128] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(325), 1,
      anon_sym_T,
    STATE(77), 1,
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
  [7178] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(78), 1,
      sym_comment,
    ACTIONS(263), 5,
      sym_keyword_from,
      anon_sym_EQ,
      anon_sym_DASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(261), 32,
      ts_builtin_sym_end,
      sym_keyword_filter,
      sym_keyword_derive,
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
  [7226] = 21,
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
      anon_sym_BQUOTE,
    ACTIONS(77), 1,
      sym__identifier,
    ACTIONS(327), 1,
      ts_builtin_sym_end,
    STATE(79), 1,
      sym_comment,
    STATE(81), 1,
      aux_sym_function_call_repeat1,
    STATE(122), 1,
      sym_identifier,
    STATE(123), 1,
      aux_sym__friendly_number,
    STATE(132), 1,
      sym_literal,
    STATE(135), 1,
      sym_integer,
    STATE(136), 1,
      sym__call_parameter,
    STATE(137), 2,
      sym__double_quote_string,
      sym__single_quote_string,
    STATE(140), 2,
      sym__literal_string,
      sym_decimal_number,
    ACTIONS(61), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    ACTIONS(329), 15,
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
  [7308] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(335), 1,
      sym__natural_number,
    STATE(80), 1,
      sym_comment,
    ACTIONS(333), 5,
      sym_keyword_from,
      anon_sym_EQ,
      anon_sym_DASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(331), 31,
      ts_builtin_sym_end,
      sym_keyword_filter,
      sym_keyword_derive,
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
  [7358] = 20,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(337), 1,
      ts_builtin_sym_end,
    ACTIONS(344), 1,
      anon_sym_DASH,
    ACTIONS(347), 1,
      anon_sym_DQUOTE,
    ACTIONS(350), 1,
      anon_sym_SQUOTE,
    ACTIONS(353), 1,
      sym__natural_number,
    ACTIONS(356), 1,
      anon_sym__,
    ACTIONS(359), 1,
      anon_sym_DOT,
    ACTIONS(362), 1,
      anon_sym_BQUOTE,
    ACTIONS(365), 1,
      sym__identifier,
    STATE(122), 1,
      sym_identifier,
    STATE(123), 1,
      aux_sym__friendly_number,
    STATE(132), 1,
      sym_literal,
    STATE(135), 1,
      sym_integer,
    STATE(136), 1,
      sym__call_parameter,
    STATE(81), 2,
      sym_comment,
      aux_sym_function_call_repeat1,
    STATE(137), 2,
      sym__double_quote_string,
      sym__single_quote_string,
    STATE(140), 2,
      sym__literal_string,
      sym_decimal_number,
    ACTIONS(341), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    ACTIONS(339), 15,
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
  [7438] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(372), 1,
      anon_sym_DOT,
    STATE(82), 1,
      sym_comment,
    ACTIONS(370), 5,
      sym_keyword_from,
      anon_sym_EQ,
      anon_sym_DASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(368), 31,
      ts_builtin_sym_end,
      sym_keyword_filter,
      sym_keyword_derive,
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
  [7488] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(374), 1,
      anon_sym_DOT,
    STATE(83), 1,
      sym_comment,
    ACTIONS(59), 5,
      sym_keyword_from,
      anon_sym_EQ,
      anon_sym_DASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(57), 31,
      ts_builtin_sym_end,
      sym_keyword_filter,
      sym_keyword_derive,
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
  [7538] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(380), 1,
      anon_sym_DOT,
    STATE(84), 1,
      sym_comment,
    ACTIONS(378), 5,
      sym_keyword_from,
      anon_sym_EQ,
      anon_sym_DASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(376), 31,
      ts_builtin_sym_end,
      sym_keyword_filter,
      sym_keyword_derive,
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
  [7588] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(85), 1,
      sym_comment,
    ACTIONS(384), 5,
      sym_keyword_from,
      anon_sym_EQ,
      anon_sym_DASH,
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
  [7636] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(86), 1,
      sym_comment,
    ACTIONS(313), 5,
      sym_keyword_from,
      anon_sym_EQ,
      anon_sym_DASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(311), 32,
      ts_builtin_sym_end,
      sym_keyword_filter,
      sym_keyword_derive,
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
  [7684] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(87), 1,
      sym_comment,
    ACTIONS(388), 5,
      sym_keyword_from,
      anon_sym_EQ,
      anon_sym_DASH,
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
  [7731] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(88), 1,
      sym_comment,
    ACTIONS(392), 5,
      sym_keyword_from,
      anon_sym_EQ,
      anon_sym_DASH,
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
  [7778] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(89), 1,
      sym_comment,
    ACTIONS(396), 5,
      sym_keyword_from,
      anon_sym_EQ,
      anon_sym_DASH,
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
  [7825] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(90), 1,
      sym_comment,
    ACTIONS(400), 5,
      sym_keyword_from,
      anon_sym_EQ,
      anon_sym_DASH,
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
  [7872] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(91), 1,
      sym_comment,
    ACTIONS(333), 5,
      sym_keyword_from,
      anon_sym_EQ,
      anon_sym_DASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(331), 31,
      ts_builtin_sym_end,
      sym_keyword_filter,
      sym_keyword_derive,
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
  [7919] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(92), 1,
      sym_comment,
    ACTIONS(404), 5,
      sym_keyword_from,
      anon_sym_EQ,
      anon_sym_DASH,
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
  [7966] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(93), 1,
      sym_comment,
    ACTIONS(408), 5,
      sym_keyword_from,
      anon_sym_EQ,
      anon_sym_DASH,
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
  [8013] = 12,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(414), 1,
      sym_keyword_and,
    ACTIONS(416), 1,
      anon_sym_DASH,
    ACTIONS(418), 1,
      anon_sym_PLUS,
    ACTIONS(424), 1,
      anon_sym_PIPE,
    ACTIONS(428), 1,
      anon_sym_QMARK_QMARK,
    STATE(94), 1,
      sym_comment,
    ACTIONS(412), 2,
      sym_keyword_from,
      anon_sym_EQ,
    ACTIONS(422), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(426), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(420), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(410), 21,
      ts_builtin_sym_end,
      sym_keyword_filter,
      sym_keyword_derive,
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
  [8076] = 11,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(416), 1,
      anon_sym_DASH,
    ACTIONS(418), 1,
      anon_sym_PLUS,
    ACTIONS(424), 1,
      anon_sym_PIPE,
    ACTIONS(428), 1,
      anon_sym_QMARK_QMARK,
    STATE(95), 1,
      sym_comment,
    ACTIONS(412), 2,
      sym_keyword_from,
      anon_sym_EQ,
    ACTIONS(422), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(426), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(420), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(410), 22,
      ts_builtin_sym_end,
      sym_keyword_filter,
      sym_keyword_derive,
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
  [8137] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(96), 1,
      sym_comment,
    ACTIONS(432), 5,
      sym_keyword_from,
      anon_sym_EQ,
      anon_sym_DASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(430), 31,
      ts_builtin_sym_end,
      sym_keyword_filter,
      sym_keyword_derive,
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
  [8184] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(97), 1,
      sym_comment,
    ACTIONS(436), 5,
      sym_keyword_from,
      anon_sym_EQ,
      anon_sym_DASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(434), 31,
      ts_builtin_sym_end,
      sym_keyword_filter,
      sym_keyword_derive,
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
  [8231] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(98), 1,
      sym_comment,
    ACTIONS(440), 5,
      sym_keyword_from,
      anon_sym_EQ,
      anon_sym_DASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(438), 31,
      ts_builtin_sym_end,
      sym_keyword_filter,
      sym_keyword_derive,
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
  [8278] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(99), 1,
      sym_comment,
    ACTIONS(444), 5,
      sym_keyword_from,
      anon_sym_EQ,
      anon_sym_DASH,
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
  [8325] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(100), 1,
      sym_comment,
    ACTIONS(412), 5,
      sym_keyword_from,
      anon_sym_EQ,
      anon_sym_DASH,
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
  [8372] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(101), 1,
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
  [8419] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(102), 1,
      sym_comment,
    ACTIONS(378), 5,
      sym_keyword_from,
      anon_sym_EQ,
      anon_sym_DASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(376), 31,
      ts_builtin_sym_end,
      sym_keyword_filter,
      sym_keyword_derive,
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
  [8466] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(103), 1,
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
  [8513] = 8,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(416), 1,
      anon_sym_DASH,
    ACTIONS(418), 1,
      anon_sym_PLUS,
    ACTIONS(424), 1,
      anon_sym_PIPE,
    STATE(104), 1,
      sym_comment,
    ACTIONS(422), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(412), 4,
      sym_keyword_from,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(410), 27,
      ts_builtin_sym_end,
      sym_keyword_filter,
      sym_keyword_derive,
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
  [8568] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(105), 1,
      sym_comment,
    ACTIONS(456), 5,
      sym_keyword_from,
      anon_sym_EQ,
      anon_sym_DASH,
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
  [8615] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(416), 1,
      anon_sym_DASH,
    ACTIONS(418), 1,
      anon_sym_PLUS,
    STATE(106), 1,
      sym_comment,
    ACTIONS(412), 4,
      sym_keyword_from,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(410), 30,
      ts_builtin_sym_end,
      sym_keyword_filter,
      sym_keyword_derive,
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
  [8666] = 7,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(416), 1,
      anon_sym_DASH,
    ACTIONS(418), 1,
      anon_sym_PLUS,
    STATE(107), 1,
      sym_comment,
    ACTIONS(422), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(412), 4,
      sym_keyword_from,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(410), 28,
      ts_builtin_sym_end,
      sym_keyword_filter,
      sym_keyword_derive,
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
  [8719] = 10,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(416), 1,
      anon_sym_DASH,
    ACTIONS(418), 1,
      anon_sym_PLUS,
    ACTIONS(424), 1,
      anon_sym_PIPE,
    STATE(108), 1,
      sym_comment,
    ACTIONS(412), 2,
      sym_keyword_from,
      anon_sym_EQ,
    ACTIONS(422), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(426), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(420), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(410), 23,
      ts_builtin_sym_end,
      sym_keyword_filter,
      sym_keyword_derive,
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
  [8778] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(109), 1,
      sym_comment,
    ACTIONS(460), 5,
      sym_keyword_from,
      anon_sym_EQ,
      anon_sym_DASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(458), 31,
      ts_builtin_sym_end,
      sym_keyword_filter,
      sym_keyword_derive,
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
  [8825] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(110), 1,
      sym_comment,
    ACTIONS(253), 16,
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
    ACTIONS(255), 20,
      sym_keyword_filter,
      sym_keyword_derive,
      sym_keyword_group,
      sym_keyword_aggregate,
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
  [8872] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(111), 1,
      sym_comment,
    ACTIONS(257), 16,
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
  [8919] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(112), 1,
      sym_comment,
    ACTIONS(370), 5,
      sym_keyword_from,
      anon_sym_EQ,
      anon_sym_DASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(368), 31,
      ts_builtin_sym_end,
      sym_keyword_filter,
      sym_keyword_derive,
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
  [8966] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(113), 1,
      sym_comment,
    ACTIONS(464), 5,
      sym_keyword_from,
      anon_sym_EQ,
      anon_sym_DASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(462), 31,
      ts_builtin_sym_end,
      sym_keyword_filter,
      sym_keyword_derive,
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
  [9013] = 12,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(414), 1,
      sym_keyword_and,
    ACTIONS(424), 1,
      anon_sym_PIPE,
    ACTIONS(428), 1,
      anon_sym_QMARK_QMARK,
    ACTIONS(468), 1,
      sym_keyword_from,
    ACTIONS(470), 1,
      sym_keyword_or,
    STATE(114), 1,
      sym_comment,
    ACTIONS(418), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(422), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(426), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(420), 4,
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
  [9074] = 12,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(414), 1,
      sym_keyword_and,
    ACTIONS(424), 1,
      anon_sym_PIPE,
    ACTIONS(428), 1,
      anon_sym_QMARK_QMARK,
    ACTIONS(470), 1,
      sym_keyword_or,
    ACTIONS(474), 1,
      sym_keyword_from,
    STATE(115), 1,
      sym_comment,
    ACTIONS(418), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(422), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(426), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(420), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(472), 19,
      ts_builtin_sym_end,
      sym_keyword_filter,
      sym_keyword_derive,
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
  [9135] = 20,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(337), 1,
      anon_sym_RPAREN,
    ACTIONS(479), 1,
      anon_sym_DASH,
    ACTIONS(482), 1,
      anon_sym_DQUOTE,
    ACTIONS(485), 1,
      anon_sym_SQUOTE,
    ACTIONS(488), 1,
      sym__natural_number,
    ACTIONS(491), 1,
      anon_sym__,
    ACTIONS(494), 1,
      anon_sym_DOT,
    ACTIONS(497), 1,
      anon_sym_BQUOTE,
    ACTIONS(500), 1,
      sym__identifier,
    STATE(151), 1,
      aux_sym__friendly_number,
    STATE(153), 1,
      sym_identifier,
    STATE(158), 1,
      sym_integer,
    STATE(160), 1,
      sym__call_parameter,
    STATE(161), 1,
      sym_literal,
    STATE(116), 2,
      sym_comment,
      aux_sym_function_call_repeat1,
    STATE(156), 2,
      sym__literal_string,
      sym_decimal_number,
    STATE(165), 2,
      sym__double_quote_string,
      sym__single_quote_string,
    ACTIONS(476), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    ACTIONS(339), 11,
      sym_keyword_filter,
      sym_keyword_derive,
      sym_keyword_group,
      sym_keyword_aggregate,
      sym_keyword_sort,
      sym_keyword_take,
      sym_keyword_join,
      sym_keyword_select,
      sym_keyword_append,
      sym_keyword_remove,
      sym_keyword_intersect,
  [9211] = 21,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(83), 1,
      anon_sym_DASH,
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
    ACTIONS(327), 1,
      anon_sym_RPAREN,
    STATE(116), 1,
      aux_sym_function_call_repeat1,
    STATE(117), 1,
      sym_comment,
    STATE(151), 1,
      aux_sym__friendly_number,
    STATE(153), 1,
      sym_identifier,
    STATE(158), 1,
      sym_integer,
    STATE(160), 1,
      sym__call_parameter,
    STATE(161), 1,
      sym_literal,
    STATE(156), 2,
      sym__literal_string,
      sym_decimal_number,
    STATE(165), 2,
      sym__double_quote_string,
      sym__single_quote_string,
    ACTIONS(81), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    ACTIONS(329), 11,
      sym_keyword_filter,
      sym_keyword_derive,
      sym_keyword_group,
      sym_keyword_aggregate,
      sym_keyword_sort,
      sym_keyword_take,
      sym_keyword_join,
      sym_keyword_select,
      sym_keyword_append,
      sym_keyword_remove,
      sym_keyword_intersect,
  [9289] = 13,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(414), 1,
      sym_keyword_and,
    ACTIONS(424), 1,
      anon_sym_PIPE,
    ACTIONS(428), 1,
      anon_sym_QMARK_QMARK,
    ACTIONS(470), 1,
      sym_keyword_or,
    ACTIONS(505), 1,
      sym_keyword_from,
    ACTIONS(507), 1,
      anon_sym_EQ,
    STATE(118), 1,
      sym_comment,
    ACTIONS(418), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(422), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(426), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(420), 4,
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
  [9349] = 12,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(414), 1,
      sym_keyword_and,
    ACTIONS(424), 1,
      anon_sym_PIPE,
    ACTIONS(428), 1,
      anon_sym_QMARK_QMARK,
    ACTIONS(470), 1,
      sym_keyword_or,
    ACTIONS(511), 1,
      sym_keyword_from,
    STATE(119), 1,
      sym_comment,
    ACTIONS(418), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(422), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(426), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(420), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(509), 16,
      ts_builtin_sym_end,
      sym_keyword_filter,
      sym_keyword_derive,
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
  [9407] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(120), 1,
      sym_comment,
    ACTIONS(255), 9,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_and,
      sym_keyword_or,
      sym_keyword_null,
      anon_sym__,
      sym__identifier,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(253), 19,
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
  [9446] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(121), 1,
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
  [9485] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(517), 1,
      anon_sym_COLON,
    STATE(122), 1,
      sym_comment,
    ACTIONS(513), 7,
      ts_builtin_sym_end,
      anon_sym_DASH,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym__natural_number,
      anon_sym_DOT,
      anon_sym_BQUOTE,
    ACTIONS(515), 20,
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
  [9526] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(123), 1,
      sym_comment,
    STATE(126), 1,
      aux_sym__friendly_number,
    ACTIONS(99), 7,
      ts_builtin_sym_end,
      anon_sym_DASH,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym__natural_number,
      anon_sym_DOT,
      anon_sym_BQUOTE,
    ACTIONS(101), 20,
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
  [9567] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(124), 1,
      sym_comment,
    ACTIONS(253), 8,
      ts_builtin_sym_end,
      anon_sym_COLON,
      anon_sym_DASH,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym__natural_number,
      anon_sym_DOT,
      anon_sym_BQUOTE,
    ACTIONS(255), 20,
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
  [9606] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(125), 1,
      sym_comment,
    STATE(126), 1,
      aux_sym__friendly_number,
    ACTIONS(110), 7,
      ts_builtin_sym_end,
      anon_sym_DASH,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym__natural_number,
      anon_sym_DOT,
      anon_sym_BQUOTE,
    ACTIONS(112), 20,
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
  [9647] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(519), 1,
      sym__natural_number,
    ACTIONS(522), 1,
      anon_sym__,
    STATE(126), 2,
      aux_sym__friendly_number,
      sym_comment,
    ACTIONS(103), 6,
      ts_builtin_sym_end,
      anon_sym_DASH,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      anon_sym_DOT,
      anon_sym_BQUOTE,
    ACTIONS(105), 19,
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
  [9690] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(127), 1,
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
    ACTIONS(257), 19,
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
  [9729] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(128), 1,
      sym_comment,
    ACTIONS(317), 7,
      ts_builtin_sym_end,
      anon_sym_DASH,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym__natural_number,
      anon_sym_DOT,
      anon_sym_BQUOTE,
    ACTIONS(319), 20,
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
  [9767] = 12,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(414), 1,
      sym_keyword_and,
    ACTIONS(424), 1,
      anon_sym_PIPE,
    ACTIONS(428), 1,
      anon_sym_QMARK_QMARK,
    ACTIONS(470), 1,
      sym_keyword_or,
    ACTIONS(525), 1,
      anon_sym_EQ,
    STATE(129), 1,
      sym_comment,
    ACTIONS(418), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(422), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(426), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(420), 4,
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
  [9821] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(130), 1,
      sym_comment,
    ACTIONS(438), 7,
      ts_builtin_sym_end,
      anon_sym_DASH,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym__natural_number,
      anon_sym_DOT,
      anon_sym_BQUOTE,
    ACTIONS(440), 20,
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
  [9859] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(131), 1,
      sym_comment,
    ACTIONS(114), 7,
      ts_builtin_sym_end,
      anon_sym_DASH,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym__natural_number,
      anon_sym_DOT,
      anon_sym_BQUOTE,
    ACTIONS(116), 20,
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
  [9897] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(132), 1,
      sym_comment,
    ACTIONS(513), 7,
      ts_builtin_sym_end,
      anon_sym_DASH,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym__natural_number,
      anon_sym_DOT,
      anon_sym_BQUOTE,
    ACTIONS(515), 20,
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
  [9935] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(133), 1,
      sym_comment,
    ACTIONS(434), 7,
      ts_builtin_sym_end,
      anon_sym_DASH,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym__natural_number,
      anon_sym_DOT,
      anon_sym_BQUOTE,
    ACTIONS(436), 20,
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
  [9973] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(134), 1,
      sym_comment,
    ACTIONS(331), 7,
      ts_builtin_sym_end,
      anon_sym_DASH,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym__natural_number,
      anon_sym_DOT,
      anon_sym_BQUOTE,
    ACTIONS(333), 20,
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
  [10011] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
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
    ACTIONS(370), 20,
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
  [10049] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(136), 1,
      sym_comment,
    ACTIONS(527), 7,
      ts_builtin_sym_end,
      anon_sym_DASH,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym__natural_number,
      anon_sym_DOT,
      anon_sym_BQUOTE,
    ACTIONS(529), 20,
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
  [10087] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(137), 1,
      sym_comment,
    ACTIONS(376), 7,
      ts_builtin_sym_end,
      anon_sym_DASH,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym__natural_number,
      anon_sym_DOT,
      anon_sym_BQUOTE,
    ACTIONS(378), 20,
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
  [10125] = 16,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(533), 1,
      sym_keyword_from,
    ACTIONS(535), 1,
      sym_keyword_filter,
    ACTIONS(537), 1,
      sym_keyword_derive,
    ACTIONS(539), 1,
      sym_keyword_group,
    ACTIONS(541), 1,
      sym_keyword_aggregate,
    ACTIONS(543), 1,
      sym_keyword_sort,
    ACTIONS(545), 1,
      sym_keyword_take,
    ACTIONS(547), 1,
      sym_keyword_join,
    ACTIONS(549), 1,
      sym_keyword_select,
    STATE(138), 1,
      sym_comment,
    STATE(142), 1,
      aux_sym_transforms_repeat1,
    STATE(331), 1,
      sym_transforms,
    ACTIONS(551), 3,
      sym_keyword_append,
      sym_keyword_remove,
      sym_keyword_intersect,
    ACTIONS(531), 4,
      ts_builtin_sym_end,
      sym_keyword_func,
      sym_keyword_let,
      sym_keyword_from_text,
    STATE(212), 9,
      sym_derives,
      sym_append,
      sym_filter,
      sym_aggregate,
      sym_sorts,
      sym_takes,
      sym_group,
      sym_joins,
      sym_select,
  [10187] = 16,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(535), 1,
      sym_keyword_filter,
    ACTIONS(537), 1,
      sym_keyword_derive,
    ACTIONS(539), 1,
      sym_keyword_group,
    ACTIONS(541), 1,
      sym_keyword_aggregate,
    ACTIONS(543), 1,
      sym_keyword_sort,
    ACTIONS(545), 1,
      sym_keyword_take,
    ACTIONS(547), 1,
      sym_keyword_join,
    ACTIONS(549), 1,
      sym_keyword_select,
    ACTIONS(555), 1,
      sym_keyword_from,
    STATE(139), 1,
      sym_comment,
    STATE(142), 1,
      aux_sym_transforms_repeat1,
    STATE(316), 1,
      sym_transforms,
    ACTIONS(551), 3,
      sym_keyword_append,
      sym_keyword_remove,
      sym_keyword_intersect,
    ACTIONS(553), 4,
      ts_builtin_sym_end,
      sym_keyword_func,
      sym_keyword_let,
      sym_keyword_from_text,
    STATE(212), 9,
      sym_derives,
      sym_append,
      sym_filter,
      sym_aggregate,
      sym_sorts,
      sym_takes,
      sym_group,
      sym_joins,
      sym_select,
  [10249] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(140), 1,
      sym_comment,
    ACTIONS(368), 7,
      ts_builtin_sym_end,
      anon_sym_DASH,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym__natural_number,
      anon_sym_DOT,
      anon_sym_BQUOTE,
    ACTIONS(370), 20,
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
  [10287] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(141), 1,
      sym_comment,
    ACTIONS(557), 7,
      ts_builtin_sym_end,
      anon_sym_DASH,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym__natural_number,
      anon_sym_DOT,
      anon_sym_BQUOTE,
    ACTIONS(559), 20,
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
  [10325] = 15,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(535), 1,
      sym_keyword_filter,
    ACTIONS(537), 1,
      sym_keyword_derive,
    ACTIONS(539), 1,
      sym_keyword_group,
    ACTIONS(541), 1,
      sym_keyword_aggregate,
    ACTIONS(543), 1,
      sym_keyword_sort,
    ACTIONS(545), 1,
      sym_keyword_take,
    ACTIONS(547), 1,
      sym_keyword_join,
    ACTIONS(549), 1,
      sym_keyword_select,
    ACTIONS(563), 1,
      sym_keyword_from,
    STATE(142), 1,
      sym_comment,
    STATE(143), 1,
      aux_sym_transforms_repeat1,
    ACTIONS(551), 3,
      sym_keyword_append,
      sym_keyword_remove,
      sym_keyword_intersect,
    ACTIONS(561), 4,
      ts_builtin_sym_end,
      sym_keyword_func,
      sym_keyword_let,
      sym_keyword_from_text,
    STATE(212), 9,
      sym_derives,
      sym_append,
      sym_filter,
      sym_aggregate,
      sym_sorts,
      sym_takes,
      sym_group,
      sym_joins,
      sym_select,
  [10384] = 14,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(567), 1,
      sym_keyword_from,
    ACTIONS(569), 1,
      sym_keyword_filter,
    ACTIONS(572), 1,
      sym_keyword_derive,
    ACTIONS(575), 1,
      sym_keyword_group,
    ACTIONS(578), 1,
      sym_keyword_aggregate,
    ACTIONS(581), 1,
      sym_keyword_sort,
    ACTIONS(584), 1,
      sym_keyword_take,
    ACTIONS(587), 1,
      sym_keyword_join,
    ACTIONS(590), 1,
      sym_keyword_select,
    STATE(143), 2,
      sym_comment,
      aux_sym_transforms_repeat1,
    ACTIONS(593), 3,
      sym_keyword_append,
      sym_keyword_remove,
      sym_keyword_intersect,
    ACTIONS(565), 4,
      ts_builtin_sym_end,
      sym_keyword_func,
      sym_keyword_let,
      sym_keyword_from_text,
    STATE(212), 9,
      sym_derives,
      sym_append,
      sym_filter,
      sym_aggregate,
      sym_sorts,
      sym_takes,
      sym_group,
      sym_joins,
      sym_select,
  [10441] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(105), 1,
      sym_keyword_from,
    ACTIONS(596), 2,
      sym__natural_number,
      anon_sym__,
    STATE(144), 2,
      aux_sym__friendly_number,
      sym_comment,
    ACTIONS(103), 22,
      ts_builtin_sym_end,
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
  [10480] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(112), 1,
      sym_keyword_from,
    STATE(144), 1,
      aux_sym__friendly_number,
    STATE(145), 1,
      sym_comment,
    ACTIONS(599), 2,
      sym__natural_number,
      anon_sym__,
    ACTIONS(110), 22,
      ts_builtin_sym_end,
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
  [10521] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(101), 1,
      sym_keyword_from,
    STATE(144), 1,
      aux_sym__friendly_number,
    STATE(146), 1,
      sym_comment,
    ACTIONS(599), 2,
      sym__natural_number,
      anon_sym__,
    ACTIONS(99), 22,
      ts_builtin_sym_end,
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
  [10562] = 20,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(295), 1,
      anon_sym_DASH,
    ACTIONS(297), 1,
      anon_sym_DQUOTE,
    ACTIONS(299), 1,
      anon_sym_SQUOTE,
    ACTIONS(301), 1,
      sym__natural_number,
    ACTIONS(303), 1,
      anon_sym__,
    ACTIONS(305), 1,
      anon_sym_DOT,
    ACTIONS(307), 1,
      anon_sym_BQUOTE,
    ACTIONS(309), 1,
      sym__identifier,
    STATE(147), 1,
      sym_comment,
    STATE(149), 1,
      aux_sym_function_call_repeat1,
    STATE(246), 1,
      aux_sym__friendly_number,
    STATE(247), 1,
      sym_identifier,
    STATE(275), 1,
      sym_literal,
    STATE(276), 1,
      sym__call_parameter,
    STATE(278), 1,
      sym_integer,
    STATE(260), 2,
      sym__literal_string,
      sym_decimal_number,
    STATE(268), 2,
      sym__double_quote_string,
      sym__single_quote_string,
    ACTIONS(293), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    ACTIONS(327), 4,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [10630] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(116), 1,
      sym_keyword_from,
    STATE(148), 1,
      sym_comment,
    ACTIONS(114), 24,
      ts_builtin_sym_end,
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
  [10666] = 19,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(604), 1,
      anon_sym_DASH,
    ACTIONS(607), 1,
      anon_sym_DQUOTE,
    ACTIONS(610), 1,
      anon_sym_SQUOTE,
    ACTIONS(613), 1,
      sym__natural_number,
    ACTIONS(616), 1,
      anon_sym__,
    ACTIONS(619), 1,
      anon_sym_DOT,
    ACTIONS(622), 1,
      anon_sym_BQUOTE,
    ACTIONS(625), 1,
      sym__identifier,
    STATE(246), 1,
      aux_sym__friendly_number,
    STATE(247), 1,
      sym_identifier,
    STATE(275), 1,
      sym_literal,
    STATE(276), 1,
      sym__call_parameter,
    STATE(278), 1,
      sym_integer,
    STATE(149), 2,
      sym_comment,
      aux_sym_function_call_repeat1,
    STATE(260), 2,
      sym__literal_string,
      sym_decimal_number,
    STATE(268), 2,
      sym__double_quote_string,
      sym__single_quote_string,
    ACTIONS(601), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    ACTIONS(337), 4,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [10732] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(150), 1,
      sym_comment,
    ACTIONS(253), 8,
      anon_sym_COLON,
      anon_sym_RPAREN,
      anon_sym_DASH,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym__natural_number,
      anon_sym_DOT,
      anon_sym_BQUOTE,
    ACTIONS(255), 16,
      sym_keyword_filter,
      sym_keyword_derive,
      sym_keyword_group,
      sym_keyword_aggregate,
      sym_keyword_sort,
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
  [10767] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(151), 1,
      sym_comment,
    STATE(154), 1,
      aux_sym__friendly_number,
    ACTIONS(99), 7,
      anon_sym_RPAREN,
      anon_sym_DASH,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym__natural_number,
      anon_sym_DOT,
      anon_sym_BQUOTE,
    ACTIONS(101), 16,
      sym_keyword_filter,
      sym_keyword_derive,
      sym_keyword_group,
      sym_keyword_aggregate,
      sym_keyword_sort,
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
  [10804] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(152), 1,
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
  [10839] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(628), 1,
      anon_sym_COLON,
    STATE(153), 1,
      sym_comment,
    ACTIONS(513), 7,
      anon_sym_RPAREN,
      anon_sym_DASH,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym__natural_number,
      anon_sym_DOT,
      anon_sym_BQUOTE,
    ACTIONS(515), 16,
      sym_keyword_filter,
      sym_keyword_derive,
      sym_keyword_group,
      sym_keyword_aggregate,
      sym_keyword_sort,
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
  [10876] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(630), 1,
      sym__natural_number,
    ACTIONS(633), 1,
      anon_sym__,
    STATE(154), 2,
      aux_sym__friendly_number,
      sym_comment,
    ACTIONS(103), 6,
      anon_sym_RPAREN,
      anon_sym_DASH,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      anon_sym_DOT,
      anon_sym_BQUOTE,
    ACTIONS(105), 15,
      sym_keyword_filter,
      sym_keyword_derive,
      sym_keyword_group,
      sym_keyword_aggregate,
      sym_keyword_sort,
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
  [10915] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(154), 1,
      aux_sym__friendly_number,
    STATE(155), 1,
      sym_comment,
    ACTIONS(110), 7,
      anon_sym_RPAREN,
      anon_sym_DASH,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym__natural_number,
      anon_sym_DOT,
      anon_sym_BQUOTE,
    ACTIONS(112), 16,
      sym_keyword_filter,
      sym_keyword_derive,
      sym_keyword_group,
      sym_keyword_aggregate,
      sym_keyword_sort,
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
  [10952] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(156), 1,
      sym_comment,
    ACTIONS(368), 7,
      anon_sym_RPAREN,
      anon_sym_DASH,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym__natural_number,
      anon_sym_DOT,
      anon_sym_BQUOTE,
    ACTIONS(370), 16,
      sym_keyword_filter,
      sym_keyword_derive,
      sym_keyword_group,
      sym_keyword_aggregate,
      sym_keyword_sort,
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
  [10986] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(323), 1,
      sym_keyword_from,
    STATE(157), 1,
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
  [11020] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(158), 1,
      sym_comment,
    ACTIONS(368), 7,
      anon_sym_RPAREN,
      anon_sym_DASH,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym__natural_number,
      anon_sym_DOT,
      anon_sym_BQUOTE,
    ACTIONS(370), 16,
      sym_keyword_filter,
      sym_keyword_derive,
      sym_keyword_group,
      sym_keyword_aggregate,
      sym_keyword_sort,
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
  [11054] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(159), 1,
      sym_comment,
    ACTIONS(331), 7,
      anon_sym_RPAREN,
      anon_sym_DASH,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym__natural_number,
      anon_sym_DOT,
      anon_sym_BQUOTE,
    ACTIONS(333), 16,
      sym_keyword_filter,
      sym_keyword_derive,
      sym_keyword_group,
      sym_keyword_aggregate,
      sym_keyword_sort,
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
  [11088] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(160), 1,
      sym_comment,
    ACTIONS(527), 7,
      anon_sym_RPAREN,
      anon_sym_DASH,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym__natural_number,
      anon_sym_DOT,
      anon_sym_BQUOTE,
    ACTIONS(529), 16,
      sym_keyword_filter,
      sym_keyword_derive,
      sym_keyword_group,
      sym_keyword_aggregate,
      sym_keyword_sort,
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
  [11122] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(161), 1,
      sym_comment,
    ACTIONS(513), 7,
      anon_sym_RPAREN,
      anon_sym_DASH,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym__natural_number,
      anon_sym_DOT,
      anon_sym_BQUOTE,
    ACTIONS(515), 16,
      sym_keyword_filter,
      sym_keyword_derive,
      sym_keyword_group,
      sym_keyword_aggregate,
      sym_keyword_sort,
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
  [11156] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(162), 1,
      sym_comment,
    ACTIONS(438), 7,
      anon_sym_RPAREN,
      anon_sym_DASH,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym__natural_number,
      anon_sym_DOT,
      anon_sym_BQUOTE,
    ACTIONS(440), 16,
      sym_keyword_filter,
      sym_keyword_derive,
      sym_keyword_group,
      sym_keyword_aggregate,
      sym_keyword_sort,
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
  [11190] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(163), 1,
      sym_comment,
    ACTIONS(557), 7,
      anon_sym_RPAREN,
      anon_sym_DASH,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym__natural_number,
      anon_sym_DOT,
      anon_sym_BQUOTE,
    ACTIONS(559), 16,
      sym_keyword_filter,
      sym_keyword_derive,
      sym_keyword_group,
      sym_keyword_aggregate,
      sym_keyword_sort,
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
  [11224] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(164), 1,
      sym_comment,
    ACTIONS(317), 7,
      anon_sym_RPAREN,
      anon_sym_DASH,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym__natural_number,
      anon_sym_DOT,
      anon_sym_BQUOTE,
    ACTIONS(319), 16,
      sym_keyword_filter,
      sym_keyword_derive,
      sym_keyword_group,
      sym_keyword_aggregate,
      sym_keyword_sort,
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
  [11258] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(165), 1,
      sym_comment,
    ACTIONS(376), 7,
      anon_sym_RPAREN,
      anon_sym_DASH,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym__natural_number,
      anon_sym_DOT,
      anon_sym_BQUOTE,
    ACTIONS(378), 16,
      sym_keyword_filter,
      sym_keyword_derive,
      sym_keyword_group,
      sym_keyword_aggregate,
      sym_keyword_sort,
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
  [11292] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(166), 1,
      sym_comment,
    ACTIONS(114), 7,
      anon_sym_RPAREN,
      anon_sym_DASH,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym__natural_number,
      anon_sym_DOT,
      anon_sym_BQUOTE,
    ACTIONS(116), 16,
      sym_keyword_filter,
      sym_keyword_derive,
      sym_keyword_group,
      sym_keyword_aggregate,
      sym_keyword_sort,
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
  [11326] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(167), 1,
      sym_comment,
    ACTIONS(434), 7,
      anon_sym_RPAREN,
      anon_sym_DASH,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym__natural_number,
      anon_sym_DOT,
      anon_sym_BQUOTE,
    ACTIONS(436), 16,
      sym_keyword_filter,
      sym_keyword_derive,
      sym_keyword_group,
      sym_keyword_aggregate,
      sym_keyword_sort,
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
  [11360] = 15,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(535), 1,
      sym_keyword_filter,
    ACTIONS(539), 1,
      sym_keyword_group,
    ACTIONS(541), 1,
      sym_keyword_aggregate,
    ACTIONS(543), 1,
      sym_keyword_sort,
    ACTIONS(545), 1,
      sym_keyword_take,
    ACTIONS(547), 1,
      sym_keyword_join,
    ACTIONS(553), 1,
      anon_sym_RPAREN,
    ACTIONS(636), 1,
      sym_keyword_derive,
    ACTIONS(638), 1,
      sym_keyword_select,
    STATE(168), 1,
      sym_comment,
    STATE(169), 1,
      aux_sym_transforms_repeat1,
    STATE(316), 1,
      sym_transforms,
    ACTIONS(551), 3,
      sym_keyword_append,
      sym_keyword_remove,
      sym_keyword_intersect,
    STATE(212), 9,
      sym_derives,
      sym_append,
      sym_filter,
      sym_aggregate,
      sym_sorts,
      sym_takes,
      sym_group,
      sym_joins,
      sym_select,
  [11416] = 14,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(535), 1,
      sym_keyword_filter,
    ACTIONS(539), 1,
      sym_keyword_group,
    ACTIONS(541), 1,
      sym_keyword_aggregate,
    ACTIONS(543), 1,
      sym_keyword_sort,
    ACTIONS(545), 1,
      sym_keyword_take,
    ACTIONS(547), 1,
      sym_keyword_join,
    ACTIONS(561), 1,
      anon_sym_RPAREN,
    ACTIONS(636), 1,
      sym_keyword_derive,
    ACTIONS(638), 1,
      sym_keyword_select,
    STATE(169), 1,
      sym_comment,
    STATE(170), 1,
      aux_sym_transforms_repeat1,
    ACTIONS(551), 3,
      sym_keyword_append,
      sym_keyword_remove,
      sym_keyword_intersect,
    STATE(212), 9,
      sym_derives,
      sym_append,
      sym_filter,
      sym_aggregate,
      sym_sorts,
      sym_takes,
      sym_group,
      sym_joins,
      sym_select,
  [11469] = 13,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(565), 1,
      anon_sym_RPAREN,
    ACTIONS(569), 1,
      sym_keyword_filter,
    ACTIONS(575), 1,
      sym_keyword_group,
    ACTIONS(578), 1,
      sym_keyword_aggregate,
    ACTIONS(581), 1,
      sym_keyword_sort,
    ACTIONS(584), 1,
      sym_keyword_take,
    ACTIONS(587), 1,
      sym_keyword_join,
    ACTIONS(640), 1,
      sym_keyword_derive,
    ACTIONS(643), 1,
      sym_keyword_select,
    STATE(170), 2,
      sym_comment,
      aux_sym_transforms_repeat1,
    ACTIONS(593), 3,
      sym_keyword_append,
      sym_keyword_remove,
      sym_keyword_intersect,
    STATE(212), 9,
      sym_derives,
      sym_append,
      sym_filter,
      sym_aggregate,
      sym_sorts,
      sym_takes,
      sym_group,
      sym_joins,
      sym_select,
  [11520] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(648), 1,
      sym_keyword_from,
    STATE(171), 1,
      sym_comment,
    ACTIONS(646), 21,
      ts_builtin_sym_end,
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
  [11553] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(505), 1,
      sym_keyword_from,
    STATE(172), 1,
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
  [11584] = 7,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(652), 1,
      sym_keyword_from,
    ACTIONS(654), 1,
      anon_sym_LBRACK,
    STATE(173), 1,
      sym_comment,
    STATE(236), 1,
      sym_conditions,
    STATE(241), 1,
      sym__self_join,
    ACTIONS(650), 16,
      ts_builtin_sym_end,
      sym_keyword_filter,
      sym_keyword_derive,
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
  [11621] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(658), 1,
      sym_keyword_from,
    STATE(174), 1,
      sym_comment,
    ACTIONS(656), 19,
      ts_builtin_sym_end,
      sym_keyword_filter,
      sym_keyword_derive,
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
  [11652] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(662), 1,
      sym_keyword_from,
    STATE(175), 1,
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
  [11683] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(666), 1,
      sym_keyword_from,
    STATE(176), 1,
      sym_comment,
    ACTIONS(664), 19,
      ts_builtin_sym_end,
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
  [11714] = 7,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(654), 1,
      anon_sym_LBRACK,
    ACTIONS(670), 1,
      sym_keyword_from,
    STATE(177), 1,
      sym_comment,
    STATE(219), 1,
      sym_conditions,
    STATE(241), 1,
      sym__self_join,
    ACTIONS(668), 16,
      ts_builtin_sym_end,
      sym_keyword_filter,
      sym_keyword_derive,
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
  [11751] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(674), 1,
      sym_keyword_from,
    STATE(178), 1,
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
  [11782] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
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
  [11813] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
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
  [11844] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(686), 1,
      sym_keyword_from,
    STATE(181), 1,
      sym_comment,
    ACTIONS(684), 19,
      ts_builtin_sym_end,
      sym_keyword_filter,
      sym_keyword_derive,
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
  [11875] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
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
  [11906] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
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
  [11937] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(698), 1,
      sym_keyword_from,
    STATE(184), 1,
      sym_comment,
    ACTIONS(696), 19,
      ts_builtin_sym_end,
      sym_keyword_filter,
      sym_keyword_derive,
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
  [11968] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(185), 1,
      sym_comment,
    ACTIONS(700), 7,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
      anon_sym_f_DQUOTE,
      anon_sym_s_DQUOTE,
      anon_sym__,
      sym__identifier,
    ACTIONS(702), 12,
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
  [11998] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(706), 1,
      sym_keyword_from,
    STATE(186), 1,
      sym_comment,
    ACTIONS(404), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(704), 4,
      ts_builtin_sym_end,
      sym_keyword_func,
      sym_keyword_let,
      sym_keyword_from_text,
    ACTIONS(402), 12,
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
  [12032] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(710), 1,
      sym_keyword_from,
    ACTIONS(712), 1,
      anon_sym_DOT_DOT,
    STATE(187), 1,
      sym_comment,
    ACTIONS(708), 17,
      ts_builtin_sym_end,
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
  [12064] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(188), 1,
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
  [12094] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(189), 1,
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
  [12124] = 12,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(414), 1,
      sym_keyword_and,
    ACTIONS(424), 1,
      anon_sym_PIPE,
    ACTIONS(428), 1,
      anon_sym_QMARK_QMARK,
    ACTIONS(470), 1,
      sym_keyword_or,
    ACTIONS(722), 1,
      anon_sym_EQ,
    STATE(190), 1,
      sym_comment,
    ACTIONS(418), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(422), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(426), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(420), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(503), 4,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [12170] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(726), 1,
      sym_keyword_from,
    ACTIONS(728), 1,
      anon_sym_EQ,
    STATE(191), 1,
      sym_comment,
    ACTIONS(724), 17,
      ts_builtin_sym_end,
      sym_keyword_filter,
      sym_keyword_derive,
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
  [12202] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(732), 1,
      sym_keyword_from,
    STATE(192), 1,
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
  [12231] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(736), 1,
      sym_keyword_from,
    STATE(193), 1,
      sym_comment,
    ACTIONS(734), 17,
      ts_builtin_sym_end,
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
  [12260] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(194), 1,
      sym_comment,
    STATE(380), 1,
      aux_sym_derives_repeat1,
    ACTIONS(444), 3,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(442), 14,
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
  [12291] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(740), 1,
      sym_keyword_from,
    STATE(195), 1,
      sym_comment,
    ACTIONS(738), 17,
      ts_builtin_sym_end,
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
  [12320] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(744), 1,
      sym_keyword_from,
    STATE(196), 1,
      sym_comment,
    ACTIONS(742), 17,
      ts_builtin_sym_end,
      sym_keyword_filter,
      sym_keyword_derive,
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
  [12349] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(710), 1,
      sym_keyword_from,
    STATE(197), 1,
      sym_comment,
    ACTIONS(708), 17,
      ts_builtin_sym_end,
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
  [12378] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(748), 1,
      sym_keyword_from,
    STATE(198), 1,
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
  [12407] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(752), 1,
      sym_keyword_from,
    STATE(199), 1,
      sym_comment,
    ACTIONS(750), 17,
      ts_builtin_sym_end,
      sym_keyword_filter,
      sym_keyword_derive,
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
  [12436] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(756), 1,
      sym_keyword_from,
    STATE(200), 1,
      sym_comment,
    ACTIONS(754), 17,
      ts_builtin_sym_end,
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
  [12465] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(760), 1,
      sym_keyword_from,
    STATE(201), 1,
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
  [12494] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(764), 1,
      sym_keyword_from,
    STATE(202), 1,
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
  [12523] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
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
  [12552] = 7,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(770), 1,
      anon_sym_COMMA,
    ACTIONS(772), 1,
      anon_sym_RBRACK,
    STATE(204), 1,
      sym_comment,
    STATE(388), 1,
      aux_sym_aggregate_repeat1,
    ACTIONS(404), 3,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(402), 12,
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
  [12587] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(776), 1,
      sym_keyword_from,
    STATE(205), 1,
      sym_comment,
    ACTIONS(774), 17,
      ts_builtin_sym_end,
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
  [12616] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(726), 1,
      sym_keyword_from,
    STATE(206), 1,
      sym_comment,
    ACTIONS(724), 17,
      ts_builtin_sym_end,
      sym_keyword_filter,
      sym_keyword_derive,
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
  [12645] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(780), 1,
      sym_keyword_from,
    STATE(207), 1,
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
  [12673] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(784), 1,
      sym_keyword_from,
    STATE(208), 1,
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
  [12701] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(788), 1,
      sym_keyword_from,
    STATE(209), 1,
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
  [12729] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(792), 1,
      sym_keyword_from,
    STATE(210), 1,
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
  [12757] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
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
  [12785] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
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
  [12813] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
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
  [12841] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
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
  [12869] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
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
  [12897] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
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
  [12925] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
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
  [12953] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
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
  [12981] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
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
  [13009] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(220), 1,
      sym_comment,
    ACTIONS(830), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
    ACTIONS(404), 3,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(402), 12,
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
  [13039] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(834), 1,
      sym_keyword_from,
    STATE(221), 1,
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
  [13067] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(838), 1,
      sym_keyword_from,
    STATE(222), 1,
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
  [13095] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(842), 1,
      sym_keyword_from,
    STATE(223), 1,
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
  [13123] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(846), 1,
      sym_keyword_from,
    STATE(224), 1,
      sym_comment,
    ACTIONS(844), 16,
      ts_builtin_sym_end,
      sym_keyword_filter,
      sym_keyword_derive,
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
  [13151] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(850), 1,
      sym_keyword_from,
    STATE(225), 1,
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
  [13179] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(854), 1,
      sym_keyword_from,
    STATE(226), 1,
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
  [13207] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(858), 1,
      sym_keyword_from,
    STATE(227), 1,
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
  [13235] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(862), 1,
      sym_keyword_from,
    STATE(228), 1,
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
  [13263] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(866), 1,
      sym_keyword_from,
    STATE(229), 1,
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
  [13291] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(870), 1,
      sym_keyword_from,
    STATE(230), 1,
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
  [13319] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(874), 1,
      sym_keyword_from,
    STATE(231), 1,
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
  [13347] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(878), 1,
      sym_keyword_from,
    STATE(232), 1,
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
  [13375] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(882), 1,
      sym_keyword_from,
    STATE(233), 1,
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
  [13403] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(505), 1,
      sym_keyword_from,
    STATE(234), 1,
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
  [13431] = 7,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(884), 1,
      anon_sym_COMMA,
    ACTIONS(886), 1,
      anon_sym_RBRACK,
    STATE(235), 1,
      sym_comment,
    STATE(357), 1,
      aux_sym_conditions_repeat1,
    ACTIONS(404), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(402), 12,
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
  [13465] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(890), 1,
      sym_keyword_from,
    STATE(236), 1,
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
  [13493] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(894), 1,
      sym_keyword_from,
    STATE(237), 1,
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
  [13521] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(898), 1,
      sym_keyword_from,
    STATE(238), 1,
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
  [13549] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(902), 1,
      sym_keyword_from,
    STATE(239), 1,
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
  [13577] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(240), 1,
      sym_comment,
    ACTIONS(444), 3,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(442), 14,
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
  [13605] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(906), 1,
      sym_keyword_from,
    STATE(241), 1,
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
  [13633] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(910), 1,
      sym_keyword_from,
    STATE(242), 1,
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
  [13661] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(914), 1,
      sym_keyword_from,
    STATE(243), 1,
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
  [13689] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(918), 1,
      sym_keyword_from,
    STATE(244), 1,
      sym_comment,
    ACTIONS(916), 16,
      ts_builtin_sym_end,
      sym_keyword_filter,
      sym_keyword_derive,
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
  [13717] = 13,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(922), 1,
      anon_sym_DASH,
    ACTIONS(924), 1,
      anon_sym_DQUOTE,
    ACTIONS(926), 1,
      anon_sym_SQUOTE,
    ACTIONS(930), 1,
      anon_sym_DOT,
    STATE(245), 1,
      sym_comment,
    STATE(309), 1,
      aux_sym__friendly_number,
    STATE(346), 1,
      sym_integer,
    STATE(368), 1,
      sym_literal,
    ACTIONS(928), 2,
      sym__natural_number,
      anon_sym__,
    STATE(354), 2,
      sym__double_quote_string,
      sym__single_quote_string,
    STATE(372), 2,
      sym__literal_string,
      sym_decimal_number,
    ACTIONS(920), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
  [13762] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(246), 1,
      sym_comment,
    STATE(257), 1,
      aux_sym__friendly_number,
    ACTIONS(101), 5,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
      anon_sym__,
      sym__identifier,
    ACTIONS(99), 10,
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
  [13791] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(932), 1,
      anon_sym_COLON,
    STATE(247), 1,
      sym_comment,
    ACTIONS(515), 5,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
      anon_sym__,
      sym__identifier,
    ACTIONS(513), 10,
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
  [13820] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(248), 1,
      sym_comment,
    ACTIONS(404), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(934), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
    ACTIONS(402), 12,
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
  [13849] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(249), 1,
      sym_comment,
    ACTIONS(255), 5,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
      anon_sym__,
      sym__identifier,
    ACTIONS(253), 11,
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
  [13876] = 13,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(295), 1,
      anon_sym_DASH,
    ACTIONS(297), 1,
      anon_sym_DQUOTE,
    ACTIONS(299), 1,
      anon_sym_SQUOTE,
    ACTIONS(305), 1,
      anon_sym_DOT,
    STATE(246), 1,
      aux_sym__friendly_number,
    STATE(250), 1,
      sym_comment,
    STATE(264), 1,
      sym_literal,
    STATE(278), 1,
      sym_integer,
    ACTIONS(301), 2,
      sym__natural_number,
      anon_sym__,
    STATE(260), 2,
      sym__literal_string,
      sym_decimal_number,
    STATE(268), 2,
      sym__double_quote_string,
      sym__single_quote_string,
    ACTIONS(936), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
  [13921] = 13,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(83), 1,
      anon_sym_DASH,
    ACTIONS(85), 1,
      anon_sym_DQUOTE,
    ACTIONS(87), 1,
      anon_sym_SQUOTE,
    ACTIONS(93), 1,
      anon_sym_DOT,
    STATE(151), 1,
      aux_sym__friendly_number,
    STATE(158), 1,
      sym_integer,
    STATE(163), 1,
      sym_literal,
    STATE(251), 1,
      sym_comment,
    ACTIONS(89), 2,
      sym__natural_number,
      anon_sym__,
    STATE(156), 2,
      sym__literal_string,
      sym_decimal_number,
    STATE(165), 2,
      sym__double_quote_string,
      sym__single_quote_string,
    ACTIONS(938), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
  [13966] = 11,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(414), 1,
      sym_keyword_and,
    ACTIONS(424), 1,
      anon_sym_PIPE,
    ACTIONS(428), 1,
      anon_sym_QMARK_QMARK,
    ACTIONS(470), 1,
      sym_keyword_or,
    STATE(252), 1,
      sym_comment,
    ACTIONS(418), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(422), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(426), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(940), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
    ACTIONS(420), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
  [14007] = 11,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(414), 1,
      sym_keyword_and,
    ACTIONS(424), 1,
      anon_sym_PIPE,
    ACTIONS(428), 1,
      anon_sym_QMARK_QMARK,
    ACTIONS(470), 1,
      sym_keyword_or,
    STATE(253), 1,
      sym_comment,
    ACTIONS(418), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(422), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(426), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(942), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
    ACTIONS(420), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
  [14048] = 13,
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
    STATE(123), 1,
      aux_sym__friendly_number,
    STATE(135), 1,
      sym_integer,
    STATE(141), 1,
      sym_literal,
    STATE(254), 1,
      sym_comment,
    ACTIONS(69), 2,
      sym__natural_number,
      anon_sym__,
    STATE(137), 2,
      sym__double_quote_string,
      sym__single_quote_string,
    STATE(140), 2,
      sym__literal_string,
      sym_decimal_number,
    ACTIONS(944), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
  [14093] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(255), 1,
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
  [14120] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(256), 1,
      sym_comment,
    STATE(257), 1,
      aux_sym__friendly_number,
    ACTIONS(112), 5,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
      anon_sym__,
      sym__identifier,
    ACTIONS(110), 10,
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
  [14149] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(946), 1,
      sym__natural_number,
    ACTIONS(949), 1,
      anon_sym__,
    STATE(257), 2,
      aux_sym__friendly_number,
      sym_comment,
    ACTIONS(105), 4,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
      sym__identifier,
    ACTIONS(103), 9,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_DASH,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      anon_sym_DOT,
      anon_sym_BQUOTE,
  [14180] = 13,
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
    STATE(8), 1,
      aux_sym__friendly_number,
    STATE(82), 1,
      sym_integer,
    STATE(258), 1,
      sym_comment,
    STATE(446), 1,
      sym_literal,
    ACTIONS(43), 2,
      sym__natural_number,
      anon_sym__,
    STATE(102), 2,
      sym__double_quote_string,
      sym__single_quote_string,
    STATE(112), 2,
      sym__literal_string,
      sym_decimal_number,
    ACTIONS(952), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
  [14225] = 13,
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
    STATE(8), 1,
      aux_sym__friendly_number,
    STATE(82), 1,
      sym_integer,
    STATE(259), 1,
      sym_comment,
    STATE(447), 1,
      sym_literal,
    ACTIONS(43), 2,
      sym__natural_number,
      anon_sym__,
    STATE(102), 2,
      sym__double_quote_string,
      sym__single_quote_string,
    STATE(112), 2,
      sym__literal_string,
      sym_decimal_number,
    ACTIONS(952), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
  [14270] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(260), 1,
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
  [14296] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(954), 1,
      anon_sym_RPAREN,
    STATE(261), 1,
      sym_comment,
    ACTIONS(404), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(402), 12,
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
  [14324] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(956), 1,
      anon_sym_RPAREN,
    STATE(262), 1,
      sym_comment,
    ACTIONS(404), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(402), 12,
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
  [14352] = 11,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(424), 1,
      anon_sym_PIPE,
    ACTIONS(428), 1,
      anon_sym_QMARK_QMARK,
    ACTIONS(466), 1,
      anon_sym_RPAREN,
    ACTIONS(958), 1,
      sym_keyword_and,
    ACTIONS(960), 1,
      sym_keyword_or,
    STATE(263), 1,
      sym_comment,
    ACTIONS(418), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(422), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(426), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(420), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
  [14392] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(264), 1,
      sym_comment,
    ACTIONS(559), 5,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
      anon_sym__,
      sym__identifier,
    ACTIONS(557), 10,
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
  [14418] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(265), 1,
      sym_comment,
    ACTIONS(333), 5,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
      anon_sym__,
      sym__identifier,
    ACTIONS(331), 10,
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
  [14444] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(962), 1,
      anon_sym_DASH_GT,
    STATE(266), 1,
      sym_comment,
    ACTIONS(404), 3,
      anon_sym_DASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(402), 11,
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
  [14472] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(964), 1,
      anon_sym_DASH_GT,
    STATE(267), 1,
      sym_comment,
    ACTIONS(404), 3,
      anon_sym_DASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(402), 11,
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
  [14500] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(268), 1,
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
  [14526] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(269), 1,
      sym_comment,
    ACTIONS(436), 5,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
      anon_sym__,
      sym__identifier,
    ACTIONS(434), 10,
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
  [14552] = 10,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(414), 1,
      sym_keyword_and,
    ACTIONS(424), 1,
      anon_sym_PIPE,
    ACTIONS(428), 1,
      anon_sym_QMARK_QMARK,
    STATE(270), 1,
      sym_comment,
    ACTIONS(410), 2,
      sym_keyword_or,
      anon_sym_RPAREN,
    ACTIONS(418), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(422), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(426), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(420), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
  [14590] = 11,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(414), 1,
      sym_keyword_and,
    ACTIONS(424), 1,
      anon_sym_PIPE,
    ACTIONS(428), 1,
      anon_sym_QMARK_QMARK,
    ACTIONS(470), 1,
      sym_keyword_or,
    ACTIONS(722), 1,
      anon_sym_EQ,
    STATE(271), 1,
      sym_comment,
    ACTIONS(418), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(422), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(426), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(420), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
  [14630] = 9,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(424), 1,
      anon_sym_PIPE,
    ACTIONS(428), 1,
      anon_sym_QMARK_QMARK,
    STATE(272), 1,
      sym_comment,
    ACTIONS(418), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(422), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(426), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(410), 3,
      sym_keyword_and,
      sym_keyword_or,
      anon_sym_RPAREN,
    ACTIONS(420), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
  [14666] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(273), 1,
      sym_comment,
    ACTIONS(404), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(402), 13,
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
  [14692] = 11,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(424), 1,
      anon_sym_PIPE,
    ACTIONS(428), 1,
      anon_sym_QMARK_QMARK,
    ACTIONS(958), 1,
      sym_keyword_and,
    ACTIONS(960), 1,
      sym_keyword_or,
    ACTIONS(966), 1,
      anon_sym_RPAREN,
    STATE(274), 1,
      sym_comment,
    ACTIONS(418), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(422), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(426), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(420), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
  [14732] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(275), 1,
      sym_comment,
    ACTIONS(515), 5,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
      anon_sym__,
      sym__identifier,
    ACTIONS(513), 10,
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
  [14758] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(276), 1,
      sym_comment,
    ACTIONS(529), 5,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
      anon_sym__,
      sym__identifier,
    ACTIONS(527), 10,
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
  [14784] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(277), 1,
      sym_comment,
    ACTIONS(319), 5,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
      anon_sym__,
      sym__identifier,
    ACTIONS(317), 10,
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
  [14810] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(278), 1,
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
  [14836] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(279), 1,
      sym_comment,
    ACTIONS(440), 5,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
      anon_sym__,
      sym__identifier,
    ACTIONS(438), 10,
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
  [14862] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(280), 1,
      sym_comment,
    ACTIONS(116), 5,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
      anon_sym__,
      sym__identifier,
    ACTIONS(114), 10,
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
  [14888] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(968), 1,
      anon_sym_RPAREN,
    STATE(281), 1,
      sym_comment,
    ACTIONS(404), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(402), 12,
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
  [14916] = 10,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(414), 1,
      sym_keyword_and,
    ACTIONS(424), 1,
      anon_sym_PIPE,
    ACTIONS(428), 1,
      anon_sym_QMARK_QMARK,
    ACTIONS(470), 1,
      sym_keyword_or,
    STATE(282), 1,
      sym_comment,
    ACTIONS(418), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(422), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(426), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(420), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
  [14953] = 13,
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
    ACTIONS(970), 1,
      ts_builtin_sym_end,
    STATE(283), 1,
      sym_comment,
    STATE(286), 1,
      aux_sym_program_repeat2,
    STATE(304), 1,
      aux_sym_program_repeat1,
    STATE(315), 1,
      sym_prql,
    STATE(139), 2,
      sym_from_text,
      sym_from,
    STATE(333), 3,
      sym_pipeline,
      sym_variable,
      sym_function_definition,
  [14996] = 10,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(424), 1,
      anon_sym_PIPE,
    ACTIONS(428), 1,
      anon_sym_QMARK_QMARK,
    ACTIONS(958), 1,
      sym_keyword_and,
    ACTIONS(960), 1,
      sym_keyword_or,
    STATE(284), 1,
      sym_comment,
    ACTIONS(418), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(422), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(426), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(420), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
  [15033] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(285), 1,
      sym_comment,
    STATE(320), 1,
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
  [15056] = 10,
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
    ACTIONS(974), 1,
      ts_builtin_sym_end,
    STATE(286), 1,
      sym_comment,
    STATE(287), 1,
      aux_sym_program_repeat2,
    STATE(139), 2,
      sym_from_text,
      sym_from,
    STATE(333), 3,
      sym_pipeline,
      sym_variable,
      sym_function_definition,
  [15090] = 9,
    ACTIONS(3), 1,
      anon_sym_POUND,
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
    STATE(139), 2,
      sym_from_text,
      sym_from,
    STATE(287), 2,
      sym_comment,
      aux_sym_program_repeat2,
    STATE(333), 3,
      sym_pipeline,
      sym_variable,
      sym_function_definition,
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
    ACTIONS(970), 1,
      ts_builtin_sym_end,
    STATE(287), 1,
      aux_sym_program_repeat2,
    STATE(288), 1,
      sym_comment,
    STATE(139), 2,
      sym_from_text,
      sym_from,
    STATE(333), 3,
      sym_pipeline,
      sym_variable,
      sym_function_definition,
  [15156] = 9,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(541), 1,
      sym_keyword_aggregate,
    ACTIONS(543), 1,
      sym_keyword_sort,
    ACTIONS(545), 1,
      sym_keyword_take,
    ACTIONS(990), 1,
      sym_keyword_window,
    ACTIONS(992), 1,
      anon_sym_RPAREN,
    STATE(289), 1,
      sym_comment,
    STATE(293), 1,
      aux_sym_group_repeat2,
    STATE(327), 4,
      sym_aggregate,
      sym_sorts,
      sym_takes,
      sym_window,
  [15187] = 9,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(541), 1,
      sym_keyword_aggregate,
    ACTIONS(543), 1,
      sym_keyword_sort,
    ACTIONS(545), 1,
      sym_keyword_take,
    ACTIONS(990), 1,
      sym_keyword_window,
    ACTIONS(994), 1,
      anon_sym_RPAREN,
    STATE(290), 1,
      sym_comment,
    STATE(293), 1,
      aux_sym_group_repeat2,
    STATE(327), 4,
      sym_aggregate,
      sym_sorts,
      sym_takes,
      sym_window,
  [15218] = 9,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(541), 1,
      sym_keyword_aggregate,
    ACTIONS(543), 1,
      sym_keyword_sort,
    ACTIONS(545), 1,
      sym_keyword_take,
    ACTIONS(990), 1,
      sym_keyword_window,
    ACTIONS(996), 1,
      anon_sym_RPAREN,
    STATE(291), 1,
      sym_comment,
    STATE(293), 1,
      aux_sym_group_repeat2,
    STATE(327), 4,
      sym_aggregate,
      sym_sorts,
      sym_takes,
      sym_window,
  [15249] = 9,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(541), 1,
      sym_keyword_aggregate,
    ACTIONS(543), 1,
      sym_keyword_sort,
    ACTIONS(545), 1,
      sym_keyword_take,
    ACTIONS(990), 1,
      sym_keyword_window,
    ACTIONS(998), 1,
      anon_sym_RPAREN,
    STATE(292), 1,
      sym_comment,
    STATE(293), 1,
      aux_sym_group_repeat2,
    STATE(327), 4,
      sym_aggregate,
      sym_sorts,
      sym_takes,
      sym_window,
  [15280] = 8,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(1000), 1,
      sym_keyword_aggregate,
    ACTIONS(1003), 1,
      sym_keyword_sort,
    ACTIONS(1006), 1,
      sym_keyword_take,
    ACTIONS(1009), 1,
      sym_keyword_window,
    ACTIONS(1012), 1,
      anon_sym_RPAREN,
    STATE(293), 2,
      sym_comment,
      aux_sym_group_repeat2,
    STATE(327), 4,
      sym_aggregate,
      sym_sorts,
      sym_takes,
      sym_window,
  [15309] = 9,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(541), 1,
      sym_keyword_aggregate,
    ACTIONS(543), 1,
      sym_keyword_sort,
    ACTIONS(545), 1,
      sym_keyword_take,
    ACTIONS(990), 1,
      sym_keyword_window,
    ACTIONS(1014), 1,
      anon_sym_RPAREN,
    STATE(293), 1,
      aux_sym_group_repeat2,
    STATE(294), 1,
      sym_comment,
    STATE(327), 4,
      sym_aggregate,
      sym_sorts,
      sym_takes,
      sym_window,
  [15340] = 10,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(49), 1,
      anon_sym_BQUOTE,
    ACTIONS(1016), 1,
      anon_sym_COMMA,
    ACTIONS(1018), 1,
      anon_sym_RBRACK,
    ACTIONS(1020), 1,
      sym__identifier,
    STATE(176), 1,
      sym_identifier,
    STATE(295), 1,
      sym_comment,
    STATE(365), 1,
      sym_direction,
    STATE(390), 1,
      sym__sort_instruction,
    ACTIONS(277), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
  [15372] = 8,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(541), 1,
      sym_keyword_aggregate,
    ACTIONS(543), 1,
      sym_keyword_sort,
    ACTIONS(545), 1,
      sym_keyword_take,
    ACTIONS(990), 1,
      sym_keyword_window,
    STATE(290), 1,
      aux_sym_group_repeat2,
    STATE(296), 1,
      sym_comment,
    STATE(327), 4,
      sym_aggregate,
      sym_sorts,
      sym_takes,
      sym_window,
  [15400] = 8,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(541), 1,
      sym_keyword_aggregate,
    ACTIONS(543), 1,
      sym_keyword_sort,
    ACTIONS(545), 1,
      sym_keyword_take,
    ACTIONS(990), 1,
      sym_keyword_window,
    STATE(291), 1,
      aux_sym_group_repeat2,
    STATE(297), 1,
      sym_comment,
    STATE(327), 4,
      sym_aggregate,
      sym_sorts,
      sym_takes,
      sym_window,
  [15428] = 8,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(541), 1,
      sym_keyword_aggregate,
    ACTIONS(543), 1,
      sym_keyword_sort,
    ACTIONS(545), 1,
      sym_keyword_take,
    ACTIONS(990), 1,
      sym_keyword_window,
    STATE(294), 1,
      aux_sym_group_repeat2,
    STATE(298), 1,
      sym_comment,
    STATE(327), 4,
      sym_aggregate,
      sym_sorts,
      sym_takes,
      sym_window,
  [15456] = 8,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(541), 1,
      sym_keyword_aggregate,
    ACTIONS(543), 1,
      sym_keyword_sort,
    ACTIONS(545), 1,
      sym_keyword_take,
    ACTIONS(990), 1,
      sym_keyword_window,
    STATE(289), 1,
      aux_sym_group_repeat2,
    STATE(299), 1,
      sym_comment,
    STATE(327), 4,
      sym_aggregate,
      sym_sorts,
      sym_takes,
      sym_window,
  [15484] = 8,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(541), 1,
      sym_keyword_aggregate,
    ACTIONS(543), 1,
      sym_keyword_sort,
    ACTIONS(545), 1,
      sym_keyword_take,
    ACTIONS(990), 1,
      sym_keyword_window,
    STATE(292), 1,
      aux_sym_group_repeat2,
    STATE(300), 1,
      sym_comment,
    STATE(327), 4,
      sym_aggregate,
      sym_sorts,
      sym_takes,
      sym_window,
  [15512] = 9,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(49), 1,
      anon_sym_BQUOTE,
    ACTIONS(1020), 1,
      sym__identifier,
    ACTIONS(1022), 1,
      anon_sym_RBRACK,
    STATE(176), 1,
      sym_identifier,
    STATE(301), 1,
      sym_comment,
    STATE(365), 1,
      sym_direction,
    STATE(397), 1,
      sym__sort_instruction,
    ACTIONS(277), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
  [15541] = 9,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(49), 1,
      anon_sym_BQUOTE,
    ACTIONS(1020), 1,
      sym__identifier,
    ACTIONS(1024), 1,
      anon_sym_RBRACK,
    STATE(176), 1,
      sym_identifier,
    STATE(302), 1,
      sym_comment,
    STATE(365), 1,
      sym_direction,
    STATE(397), 1,
      sym__sort_instruction,
    ACTIONS(277), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
  [15570] = 9,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(1026), 1,
      anon_sym_DASH,
    ACTIONS(1028), 1,
      anon_sym_AT,
    STATE(146), 1,
      aux_sym__friendly_number,
    STATE(303), 1,
      sym_comment,
    STATE(325), 1,
      sym_integer,
    STATE(342), 1,
      sym_range,
    STATE(432), 1,
      sym_date,
    ACTIONS(599), 2,
      sym__natural_number,
      anon_sym__,
  [15599] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(1032), 1,
      sym_keyword_from,
    ACTIONS(1034), 1,
      sym_keyword_prql,
    STATE(315), 1,
      sym_prql,
    STATE(304), 2,
      sym_comment,
      aux_sym_program_repeat1,
    ACTIONS(1030), 4,
      ts_builtin_sym_end,
      sym_keyword_func,
      sym_keyword_let,
      sym_keyword_from_text,
  [15622] = 9,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(49), 1,
      anon_sym_BQUOTE,
    ACTIONS(1020), 1,
      sym__identifier,
    ACTIONS(1037), 1,
      anon_sym_LBRACK,
    STATE(176), 1,
      sym_identifier,
    STATE(195), 1,
      sym__sort_instruction,
    STATE(305), 1,
      sym_comment,
    STATE(365), 1,
      sym_direction,
    ACTIONS(277), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
  [15651] = 9,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(1026), 1,
      anon_sym_DASH,
    ACTIONS(1028), 1,
      anon_sym_AT,
    STATE(146), 1,
      aux_sym__friendly_number,
    STATE(187), 1,
      sym_integer,
    STATE(197), 1,
      sym_range,
    STATE(306), 1,
      sym_comment,
    STATE(432), 1,
      sym_date,
    ACTIONS(599), 2,
      sym__natural_number,
      anon_sym__,
  [15680] = 8,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(49), 1,
      anon_sym_BQUOTE,
    ACTIONS(1020), 1,
      sym__identifier,
    STATE(176), 1,
      sym_identifier,
    STATE(307), 1,
      sym_comment,
    STATE(365), 1,
      sym_direction,
    STATE(397), 1,
      sym__sort_instruction,
    ACTIONS(277), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
  [15706] = 7,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(112), 1,
      sym__identifier,
    ACTIONS(928), 1,
      sym__natural_number,
    ACTIONS(1039), 1,
      anon_sym__,
    STATE(308), 1,
      sym_comment,
    STATE(311), 1,
      aux_sym__friendly_number,
    ACTIONS(110), 3,
      anon_sym_DASH_GT,
      anon_sym_DOT,
      anon_sym_BQUOTE,
  [15730] = 7,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(101), 1,
      sym__identifier,
    ACTIONS(928), 1,
      sym__natural_number,
    ACTIONS(1039), 1,
      anon_sym__,
    STATE(309), 1,
      sym_comment,
    STATE(311), 1,
      aux_sym__friendly_number,
    ACTIONS(99), 3,
      anon_sym_DASH_GT,
      anon_sym_DOT,
      anon_sym_BQUOTE,
  [15754] = 9,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(49), 1,
      anon_sym_BQUOTE,
    ACTIONS(51), 1,
      sym__identifier,
    ACTIONS(1041), 1,
      sym_keyword_side,
    STATE(177), 1,
      sym__table_selection,
    STATE(191), 1,
      sym_identifier,
    STATE(196), 1,
      sym__table_reference,
    STATE(310), 1,
      sym_comment,
    STATE(328), 1,
      sym__join_definition,
  [15782] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(105), 1,
      sym__identifier,
    ACTIONS(1043), 1,
      sym__natural_number,
    ACTIONS(1046), 1,
      anon_sym__,
    STATE(311), 2,
      aux_sym__friendly_number,
      sym_comment,
    ACTIONS(103), 3,
      anon_sym_DASH_GT,
      anon_sym_DOT,
      anon_sym_BQUOTE,
  [15804] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(1052), 1,
      anon_sym_LPAREN,
    STATE(350), 1,
      sym__window_definition,
    STATE(312), 2,
      sym_comment,
      aux_sym_window_definitions_repeat1,
    ACTIONS(1049), 3,
      sym_keyword_rolling,
      sym_keyword_rows,
      sym_keyword_expanding,
  [15823] = 8,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(1054), 1,
      anon_sym_DASH_GT,
    ACTIONS(1056), 1,
      anon_sym_BQUOTE,
    ACTIONS(1058), 1,
      sym__identifier,
    STATE(313), 1,
      sym_comment,
    STATE(321), 1,
      aux_sym_function_definition_repeat1,
    STATE(351), 1,
      sym_identifier,
    STATE(359), 1,
      sym_parameter,
  [15848] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(314), 1,
      sym_comment,
    STATE(319), 1,
      aux_sym_window_definitions_repeat1,
    STATE(350), 1,
      sym__window_definition,
    STATE(437), 1,
      sym_window_definitions,
    ACTIONS(1060), 3,
      sym_keyword_rolling,
      sym_keyword_rows,
      sym_keyword_expanding,
  [15869] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(1064), 1,
      sym_keyword_from,
    STATE(315), 1,
      sym_comment,
    ACTIONS(1062), 5,
      ts_builtin_sym_end,
      sym_keyword_func,
      sym_keyword_let,
      sym_keyword_prql,
      sym_keyword_from_text,
  [15886] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(1068), 1,
      sym_keyword_from,
    STATE(316), 1,
      sym_comment,
    ACTIONS(1066), 5,
      ts_builtin_sym_end,
      sym_keyword_func,
      sym_keyword_let,
      sym_keyword_from_text,
      anon_sym_RPAREN,
  [15903] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
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
  [15920] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(318), 1,
      sym_comment,
    ACTIONS(116), 2,
      anon_sym__,
      sym__identifier,
    ACTIONS(114), 4,
      anon_sym_DASH_GT,
      sym__natural_number,
      anon_sym_DOT,
      anon_sym_BQUOTE,
  [15937] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(1074), 1,
      anon_sym_LPAREN,
    STATE(312), 1,
      aux_sym_window_definitions_repeat1,
    STATE(319), 1,
      sym_comment,
    STATE(350), 1,
      sym__window_definition,
    ACTIONS(1060), 3,
      sym_keyword_rolling,
      sym_keyword_rows,
      sym_keyword_expanding,
  [15958] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(1078), 1,
      sym_keyword_from,
    STATE(320), 1,
      sym_comment,
    ACTIONS(1076), 5,
      ts_builtin_sym_end,
      sym_keyword_func,
      sym_keyword_let,
      sym_keyword_prql,
      sym_keyword_from_text,
  [15975] = 7,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(1080), 1,
      anon_sym_DASH_GT,
    ACTIONS(1082), 1,
      anon_sym_BQUOTE,
    ACTIONS(1085), 1,
      sym__identifier,
    STATE(351), 1,
      sym_identifier,
    STATE(359), 1,
      sym_parameter,
    STATE(321), 2,
      sym_comment,
      aux_sym_function_definition_repeat1,
  [15998] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
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
  [16015] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(7), 1,
      sym_keyword_from,
    ACTIONS(15), 1,
      sym_keyword_from_text,
    STATE(323), 1,
      sym_comment,
    STATE(416), 1,
      sym_pipeline,
    STATE(168), 2,
      sym_from_text,
      sym_from,
  [16035] = 7,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(49), 1,
      anon_sym_BQUOTE,
    ACTIONS(1020), 1,
      sym__identifier,
    STATE(191), 1,
      sym_identifier,
    STATE(196), 1,
      sym__table_reference,
    STATE(208), 1,
      sym__table_selection,
    STATE(324), 1,
      sym_comment,
  [16057] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(712), 1,
      anon_sym_DOT_DOT,
    STATE(325), 1,
      sym_comment,
    ACTIONS(1092), 4,
      sym_keyword_rolling,
      sym_keyword_rows,
      sym_keyword_expanding,
      anon_sym_LPAREN,
  [16073] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(1094), 1,
      anon_sym_DASH,
    STATE(8), 1,
      aux_sym__friendly_number,
    STATE(171), 1,
      sym_integer,
    STATE(326), 1,
      sym_comment,
    ACTIONS(43), 2,
      sym__natural_number,
      anon_sym__,
  [16093] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(327), 1,
      sym_comment,
    ACTIONS(1096), 5,
      sym_keyword_aggregate,
      sym_keyword_sort,
      sym_keyword_take,
      sym_keyword_window,
      anon_sym_RPAREN,
  [16107] = 7,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(49), 1,
      anon_sym_BQUOTE,
    ACTIONS(1020), 1,
      sym__identifier,
    STATE(173), 1,
      sym__table_selection,
    STATE(191), 1,
      sym_identifier,
    STATE(196), 1,
      sym__table_reference,
    STATE(328), 1,
      sym_comment,
  [16129] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(1094), 1,
      anon_sym_DASH,
    STATE(8), 1,
      aux_sym__friendly_number,
    STATE(85), 1,
      sym_integer,
    STATE(329), 1,
      sym_comment,
    ACTIONS(43), 2,
      sym__natural_number,
      anon_sym__,
  [16149] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(1094), 1,
      anon_sym_DASH,
    STATE(8), 1,
      aux_sym__friendly_number,
    STATE(78), 1,
      sym_integer,
    STATE(330), 1,
      sym_comment,
    ACTIONS(43), 2,
      sym__natural_number,
      anon_sym__,
  [16169] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(1100), 1,
      sym_keyword_from,
    STATE(331), 1,
      sym_comment,
    ACTIONS(1098), 4,
      ts_builtin_sym_end,
      sym_keyword_func,
      sym_keyword_let,
      sym_keyword_from_text,
  [16185] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(1094), 1,
      anon_sym_DASH,
    STATE(8), 1,
      aux_sym__friendly_number,
    STATE(86), 1,
      sym_integer,
    STATE(332), 1,
      sym_comment,
    ACTIONS(43), 2,
      sym__natural_number,
      anon_sym__,
  [16205] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(1104), 1,
      sym_keyword_from,
    STATE(333), 1,
      sym_comment,
    ACTIONS(1102), 4,
      ts_builtin_sym_end,
      sym_keyword_func,
      sym_keyword_let,
      sym_keyword_from_text,
  [16221] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(1108), 1,
      sym_keyword_from,
    STATE(334), 1,
      sym_comment,
    ACTIONS(1106), 4,
      ts_builtin_sym_end,
      sym_keyword_func,
      sym_keyword_let,
      sym_keyword_from_text,
  [16237] = 7,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(49), 1,
      anon_sym_BQUOTE,
    ACTIONS(1020), 1,
      sym__identifier,
    STATE(191), 1,
      sym_identifier,
    STATE(196), 1,
      sym__table_reference,
    STATE(218), 1,
      sym__table_selection,
    STATE(335), 1,
      sym_comment,
  [16259] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(336), 1,
      sym_comment,
    ACTIONS(1110), 5,
      sym_keyword_aggregate,
      sym_keyword_sort,
      sym_keyword_take,
      sym_keyword_window,
      anon_sym_RPAREN,
  [16273] = 7,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(1056), 1,
      anon_sym_BQUOTE,
    ACTIONS(1058), 1,
      sym__identifier,
    STATE(313), 1,
      aux_sym_function_definition_repeat1,
    STATE(337), 1,
      sym_comment,
    STATE(351), 1,
      sym_identifier,
    STATE(359), 1,
      sym_parameter,
  [16295] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(338), 1,
      sym_comment,
    ACTIONS(253), 4,
      anon_sym_COLON,
      anon_sym_DASH_GT,
      anon_sym_BQUOTE,
      sym__identifier,
  [16308] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(1112), 1,
      aux_sym__date_token1,
    ACTIONS(1114), 1,
      aux_sym__time_token1,
    STATE(77), 1,
      sym__date,
    STATE(103), 1,
      sym__time,
    STATE(339), 1,
      sym_comment,
  [16327] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(1116), 1,
      anon_sym_DOT,
    STATE(155), 1,
      aux_sym__friendly_number,
    STATE(340), 1,
      sym_comment,
    ACTIONS(89), 2,
      sym__natural_number,
      anon_sym__,
  [16344] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(1118), 1,
      anon_sym_DOT,
    STATE(256), 1,
      aux_sym__friendly_number,
    STATE(341), 1,
      sym_comment,
    ACTIONS(301), 2,
      sym__natural_number,
      anon_sym__,
  [16361] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(342), 1,
      sym_comment,
    ACTIONS(1092), 4,
      sym_keyword_rolling,
      sym_keyword_rows,
      sym_keyword_expanding,
      anon_sym_LPAREN,
  [16374] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(1120), 1,
      anon_sym_DOT,
    STATE(125), 1,
      aux_sym__friendly_number,
    STATE(343), 1,
      sym_comment,
    ACTIONS(69), 2,
      sym__natural_number,
      anon_sym__,
  [16391] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(1122), 1,
      sym__natural_number,
    STATE(344), 1,
      sym_comment,
    ACTIONS(331), 3,
      anon_sym_DASH_GT,
      anon_sym_BQUOTE,
      sym__identifier,
  [16406] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(345), 1,
      sym_comment,
    ACTIONS(1124), 4,
      sym_keyword_inner,
      sym_keyword_left,
      sym_keyword_right,
      sym_keyword_full,
  [16419] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(1126), 1,
      anon_sym_DOT,
    STATE(346), 1,
      sym_comment,
    ACTIONS(368), 3,
      anon_sym_DASH_GT,
      anon_sym_BQUOTE,
      sym__identifier,
  [16434] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(347), 1,
      sym_comment,
    ACTIONS(257), 4,
      anon_sym_COLON,
      anon_sym_DASH_GT,
      anon_sym_BQUOTE,
      sym__identifier,
  [16447] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(1128), 1,
      anon_sym_DOT,
    STATE(308), 1,
      aux_sym__friendly_number,
    STATE(348), 1,
      sym_comment,
    ACTIONS(928), 2,
      sym__natural_number,
      anon_sym__,
  [16464] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(49), 1,
      anon_sym_BQUOTE,
    ACTIONS(1020), 1,
      sym__identifier,
    STATE(199), 1,
      sym__table_reference,
    STATE(206), 1,
      sym_identifier,
    STATE(349), 1,
      sym_comment,
  [16483] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(350), 1,
      sym_comment,
    ACTIONS(1130), 4,
      sym_keyword_rolling,
      sym_keyword_rows,
      sym_keyword_expanding,
      anon_sym_LPAREN,
  [16496] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(1132), 1,
      anon_sym_COLON,
    STATE(351), 1,
      sym_comment,
    ACTIONS(1134), 3,
      anon_sym_DASH_GT,
      anon_sym_BQUOTE,
      sym__identifier,
  [16511] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(1136), 1,
      anon_sym_DOT,
    STATE(10), 1,
      aux_sym__friendly_number,
    STATE(352), 1,
      sym_comment,
    ACTIONS(43), 2,
      sym__natural_number,
      anon_sym__,
  [16528] = 4,
    ACTIONS(1138), 1,
      aux_sym__inner_triple_quotes_token1,
    ACTIONS(1141), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(1143), 1,
      anon_sym_POUND,
    STATE(353), 2,
      aux_sym__inner_triple_quotes,
      sym_comment,
  [16542] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(354), 1,
      sym_comment,
    ACTIONS(376), 3,
      anon_sym_DASH_GT,
      anon_sym_BQUOTE,
      sym__identifier,
  [16554] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(1145), 1,
      anon_sym_COMMA,
    ACTIONS(1148), 1,
      anon_sym_RBRACK,
    STATE(355), 2,
      sym_comment,
      aux_sym_sorts_repeat1,
  [16568] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(934), 1,
      anon_sym_RBRACK,
    ACTIONS(1150), 1,
      anon_sym_COMMA,
    STATE(356), 2,
      sym_comment,
      aux_sym_conditions_repeat1,
  [16582] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(269), 1,
      anon_sym_RBRACK,
    ACTIONS(1153), 1,
      anon_sym_COMMA,
    STATE(356), 1,
      aux_sym_conditions_repeat1,
    STATE(357), 1,
      sym_comment,
  [16598] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(1155), 1,
      anon_sym_COMMA,
    ACTIONS(1158), 1,
      anon_sym_RBRACK,
    STATE(358), 2,
      sym_comment,
      aux_sym_group_repeat1,
  [16612] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(359), 1,
      sym_comment,
    ACTIONS(1160), 3,
      anon_sym_DASH_GT,
      anon_sym_BQUOTE,
      sym__identifier,
  [16624] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(15), 1,
      sym_keyword_from_text,
    ACTIONS(1162), 1,
      anon_sym_LPAREN,
    STATE(138), 1,
      sym_from_text,
    STATE(360), 1,
      sym_comment,
  [16640] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(247), 1,
      anon_sym_RBRACK,
    ACTIONS(1164), 1,
      anon_sym_COMMA,
    STATE(358), 1,
      aux_sym_group_repeat1,
    STATE(361), 1,
      sym_comment,
  [16656] = 5,
    ACTIONS(1143), 1,
      anon_sym_POUND,
    ACTIONS(1166), 1,
      aux_sym__inner_triple_quotes_token1,
    ACTIONS(1168), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    STATE(353), 1,
      aux_sym__inner_triple_quotes,
    STATE(362), 1,
      sym_comment,
  [16672] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(140), 1,
      anon_sym_RBRACK,
    ACTIONS(1170), 1,
      anon_sym_COMMA,
    STATE(363), 2,
      sym_comment,
      aux_sym_switch_repeat2,
  [16686] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(364), 1,
      sym_comment,
    ACTIONS(1173), 3,
      anon_sym_BQUOTE,
      sym__identifier,
      aux_sym__date_token2,
  [16698] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(49), 1,
      anon_sym_BQUOTE,
    ACTIONS(1020), 1,
      sym__identifier,
    STATE(180), 1,
      sym_identifier,
    STATE(365), 1,
      sym_comment,
  [16714] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(145), 1,
      aux_sym__friendly_number,
    STATE(366), 1,
      sym_comment,
    ACTIONS(599), 2,
      sym__natural_number,
      anon_sym__,
  [16728] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(1175), 1,
      anon_sym_COMMA,
    ACTIONS(1177), 1,
      anon_sym_RBRACK,
    STATE(367), 1,
      sym_comment,
    STATE(389), 1,
      aux_sym_group_repeat1,
  [16744] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(368), 1,
      sym_comment,
    ACTIONS(1179), 3,
      anon_sym_DASH_GT,
      anon_sym_BQUOTE,
      sym__identifier,
  [16756] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(1181), 1,
      anon_sym_COMMA,
    ACTIONS(1184), 1,
      anon_sym_RBRACK,
    STATE(369), 2,
      sym_comment,
      aux_sym_derives_repeat1,
  [16770] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(217), 1,
      anon_sym_RBRACK,
    ACTIONS(1186), 1,
      anon_sym_COMMA,
    STATE(370), 1,
      sym_comment,
    STATE(379), 1,
      aux_sym_group_repeat1,
  [16786] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(49), 1,
      anon_sym_BQUOTE,
    ACTIONS(1020), 1,
      sym__identifier,
    STATE(371), 1,
      sym_comment,
    STATE(484), 1,
      sym_identifier,
  [16802] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(372), 1,
      sym_comment,
    ACTIONS(368), 3,
      anon_sym_DASH_GT,
      anon_sym_BQUOTE,
      sym__identifier,
  [16814] = 5,
    ACTIONS(1143), 1,
      anon_sym_POUND,
    ACTIONS(1166), 1,
      aux_sym__inner_triple_quotes_token1,
    ACTIONS(1188), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    STATE(353), 1,
      aux_sym__inner_triple_quotes,
    STATE(373), 1,
      sym_comment,
  [16830] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(1190), 1,
      sym_keyword_format,
    ACTIONS(1192), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    STATE(225), 1,
      sym__triple_quote_string,
    STATE(374), 1,
      sym_comment,
  [16846] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(241), 1,
      anon_sym_RBRACK,
    ACTIONS(1194), 1,
      anon_sym_COMMA,
    STATE(361), 1,
      aux_sym_group_repeat1,
    STATE(375), 1,
      sym_comment,
  [16862] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(239), 1,
      anon_sym_RBRACK,
    ACTIONS(1196), 1,
      anon_sym_COMMA,
    STATE(363), 1,
      aux_sym_switch_repeat2,
    STATE(376), 1,
      sym_comment,
  [16878] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(10), 1,
      aux_sym__friendly_number,
    STATE(377), 1,
      sym_comment,
    ACTIONS(43), 2,
      sym__natural_number,
      anon_sym__,
  [16892] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(49), 1,
      anon_sym_BQUOTE,
    ACTIONS(1020), 1,
      sym__identifier,
    STATE(113), 1,
      sym_identifier,
    STATE(378), 1,
      sym_comment,
  [16908] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(241), 1,
      anon_sym_RBRACK,
    ACTIONS(1194), 1,
      anon_sym_COMMA,
    STATE(358), 1,
      aux_sym_group_repeat1,
    STATE(379), 1,
      sym_comment,
  [16924] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(1198), 1,
      anon_sym_COMMA,
    ACTIONS(1200), 1,
      anon_sym_RBRACK,
    STATE(369), 1,
      aux_sym_derives_repeat1,
    STATE(380), 1,
      sym_comment,
  [16940] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(381), 1,
      sym_comment,
    ACTIONS(331), 3,
      anon_sym_DASH_GT,
      anon_sym_BQUOTE,
      sym__identifier,
  [16952] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(1202), 1,
      anon_sym_COMMA,
    ACTIONS(1204), 1,
      anon_sym_RBRACK,
    STATE(382), 1,
      sym_comment,
    STATE(392), 1,
      aux_sym_derives_repeat1,
  [16968] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(1056), 1,
      anon_sym_BQUOTE,
    ACTIONS(1058), 1,
      sym__identifier,
    STATE(337), 1,
      sym_identifier,
    STATE(383), 1,
      sym_comment,
  [16984] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(384), 1,
      sym_comment,
    ACTIONS(438), 3,
      anon_sym_DASH_GT,
      anon_sym_BQUOTE,
      sym__identifier,
  [16996] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(385), 1,
      sym_comment,
    ACTIONS(317), 3,
      anon_sym_DASH_GT,
      anon_sym_BQUOTE,
      sym__identifier,
  [17008] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(386), 1,
      sym_comment,
    ACTIONS(434), 3,
      anon_sym_DASH_GT,
      anon_sym_BQUOTE,
      sym__identifier,
  [17020] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(1024), 1,
      anon_sym_RBRACK,
    ACTIONS(1206), 1,
      anon_sym_COMMA,
    STATE(355), 1,
      aux_sym_sorts_repeat1,
    STATE(387), 1,
      sym_comment,
  [17036] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(79), 1,
      anon_sym_RBRACK,
    ACTIONS(1208), 1,
      anon_sym_COMMA,
    STATE(388), 1,
      sym_comment,
    STATE(391), 1,
      aux_sym_aggregate_repeat1,
  [17052] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(229), 1,
      anon_sym_RBRACK,
    ACTIONS(1210), 1,
      anon_sym_COMMA,
    STATE(358), 1,
      aux_sym_group_repeat1,
    STATE(389), 1,
      sym_comment,
  [17068] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(1212), 1,
      anon_sym_COMMA,
    ACTIONS(1214), 1,
      anon_sym_RBRACK,
    STATE(387), 1,
      aux_sym_sorts_repeat1,
    STATE(390), 1,
      sym_comment,
  [17084] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(830), 1,
      anon_sym_RBRACK,
    ACTIONS(1216), 1,
      anon_sym_COMMA,
    STATE(391), 2,
      sym_comment,
      aux_sym_aggregate_repeat1,
  [17098] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(243), 1,
      anon_sym_RBRACK,
    ACTIONS(1219), 1,
      anon_sym_COMMA,
    STATE(369), 1,
      aux_sym_derives_repeat1,
    STATE(392), 1,
      sym_comment,
  [17114] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(770), 1,
      anon_sym_COMMA,
    ACTIONS(772), 1,
      anon_sym_RBRACK,
    STATE(388), 1,
      aux_sym_aggregate_repeat1,
    STATE(393), 1,
      sym_comment,
  [17130] = 5,
    ACTIONS(1143), 1,
      anon_sym_POUND,
    ACTIONS(1166), 1,
      aux_sym__inner_triple_quotes_token1,
    ACTIONS(1221), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    STATE(353), 1,
      aux_sym__inner_triple_quotes,
    STATE(394), 1,
      sym_comment,
  [17146] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(1192), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    STATE(232), 1,
      sym__triple_quote_string,
    STATE(395), 1,
      sym_comment,
  [17159] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(31), 1,
      anon_sym_DQUOTE,
    STATE(317), 1,
      sym__double_quote_string,
    STATE(396), 1,
      sym_comment,
  [17172] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(397), 1,
      sym_comment,
    ACTIONS(1148), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [17183] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(398), 1,
      sym_comment,
    ACTIONS(1184), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [17194] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(1223), 1,
      sym_keyword_version,
    ACTIONS(1225), 1,
      sym_keyword_target,
    STATE(399), 1,
      sym_comment,
  [17207] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(400), 1,
      sym_comment,
    ACTIONS(1158), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [17218] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(401), 1,
      sym_comment,
    ACTIONS(1227), 2,
      anon_sym_BQUOTE,
      sym__identifier,
  [17229] = 4,
    ACTIONS(1143), 1,
      anon_sym_POUND,
    ACTIONS(1166), 1,
      aux_sym__inner_triple_quotes_token1,
    STATE(362), 1,
      aux_sym__inner_triple_quotes,
    STATE(402), 1,
      sym_comment,
  [17242] = 4,
    ACTIONS(1143), 1,
      anon_sym_POUND,
    ACTIONS(1166), 1,
      aux_sym__inner_triple_quotes_token1,
    STATE(394), 1,
      aux_sym__inner_triple_quotes,
    STATE(403), 1,
      sym_comment,
  [17255] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(1229), 1,
      aux_sym__time_token1,
    STATE(51), 1,
      sym__time,
    STATE(404), 1,
      sym_comment,
  [17268] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(405), 1,
      sym_comment,
    ACTIONS(830), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [17279] = 3,
    ACTIONS(1143), 1,
      anon_sym_POUND,
    STATE(406), 1,
      sym_comment,
    ACTIONS(1231), 2,
      aux_sym__inner_triple_quotes_token1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
  [17290] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(407), 1,
      sym_comment,
    ACTIONS(1233), 2,
      sym_keyword_csv,
      sym_keyword_json,
  [17301] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(1112), 1,
      aux_sym__date_token1,
    STATE(157), 1,
      sym__date,
    STATE(408), 1,
      sym_comment,
  [17314] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(1028), 1,
      anon_sym_AT,
    STATE(171), 1,
      sym_date,
    STATE(409), 1,
      sym_comment,
  [17327] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(1235), 1,
      sym_keyword_derive,
    STATE(410), 1,
      sym_comment,
    STATE(467), 1,
      sym_derives,
  [17340] = 4,
    ACTIONS(1143), 1,
      anon_sym_POUND,
    ACTIONS(1166), 1,
      aux_sym__inner_triple_quotes_token1,
    STATE(373), 1,
      aux_sym__inner_triple_quotes,
    STATE(411), 1,
      sym_comment,
  [17353] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(1237), 1,
      anon_sym_BQUOTE,
    STATE(412), 1,
      sym_comment,
  [17363] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(1239), 1,
      anon_sym_COLON,
    STATE(413), 1,
      sym_comment,
  [17373] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(1241), 1,
      aux_sym__date_token2,
    STATE(414), 1,
      sym_comment,
  [17383] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(1243), 1,
      aux_sym__date_token2,
    STATE(415), 1,
      sym_comment,
  [17393] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(1245), 1,
      anon_sym_RPAREN,
    STATE(416), 1,
      sym_comment,
  [17403] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(217), 1,
      anon_sym_RBRACK,
    STATE(417), 1,
      sym_comment,
  [17413] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(1214), 1,
      anon_sym_RBRACK,
    STATE(418), 1,
      sym_comment,
  [17423] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(772), 1,
      anon_sym_RBRACK,
    STATE(419), 1,
      sym_comment,
  [17433] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(1247), 1,
      anon_sym_LPAREN,
    STATE(420), 1,
      sym_comment,
  [17443] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(1177), 1,
      anon_sym_RBRACK,
    STATE(421), 1,
      sym_comment,
  [17453] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(1204), 1,
      anon_sym_RBRACK,
    STATE(422), 1,
      sym_comment,
  [17463] = 3,
    ACTIONS(1143), 1,
      anon_sym_POUND,
    ACTIONS(1249), 1,
      aux_sym_comment_token1,
    STATE(423), 1,
      sym_comment,
  [17473] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(1251), 1,
      anon_sym_DASH,
    STATE(424), 1,
      sym_comment,
  [17483] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(1253), 1,
      anon_sym_DQUOTE,
    STATE(425), 1,
      sym_comment,
  [17493] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(1255), 1,
      anon_sym_DQUOTE,
    STATE(426), 1,
      sym_comment,
  [17503] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(1257), 1,
      anon_sym_SQUOTE,
    STATE(427), 1,
      sym_comment,
  [17513] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(1259), 1,
      anon_sym_DQUOTE,
    STATE(428), 1,
      sym_comment,
  [17523] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(335), 1,
      sym__natural_number,
    STATE(429), 1,
      sym_comment,
  [17533] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(1261), 1,
      anon_sym_LBRACK,
    STATE(430), 1,
      sym_comment,
  [17543] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(1263), 1,
      anon_sym_COLON,
    STATE(431), 1,
      sym_comment,
  [17553] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(1265), 1,
      anon_sym_DOT_DOT,
    STATE(432), 1,
      sym_comment,
  [17563] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(1267), 1,
      aux_sym__date_token2,
    STATE(433), 1,
      sym_comment,
  [17573] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(1269), 1,
      anon_sym_LPAREN,
    STATE(434), 1,
      sym_comment,
  [17583] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(1271), 1,
      anon_sym_LPAREN,
    STATE(435), 1,
      sym_comment,
  [17593] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(1273), 1,
      anon_sym_DOT,
    STATE(436), 1,
      sym_comment,
  [17603] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(1275), 1,
      anon_sym_LPAREN,
    STATE(437), 1,
      sym_comment,
  [17613] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(1277), 1,
      sym__natural_number,
    STATE(438), 1,
      sym_comment,
  [17623] = 3,
    ACTIONS(1143), 1,
      anon_sym_POUND,
    ACTIONS(1279), 1,
      aux_sym__double_quote_string_token1,
    STATE(439), 1,
      sym_comment,
  [17633] = 3,
    ACTIONS(1143), 1,
      anon_sym_POUND,
    ACTIONS(1281), 1,
      aux_sym__double_quote_string_token1,
    STATE(440), 1,
      sym_comment,
  [17643] = 3,
    ACTIONS(1143), 1,
      anon_sym_POUND,
    ACTIONS(1283), 1,
      aux_sym__single_quote_string_token1,
    STATE(441), 1,
      sym_comment,
  [17653] = 3,
    ACTIONS(1143), 1,
      anon_sym_POUND,
    ACTIONS(1285), 1,
      aux_sym__double_quote_string_token1,
    STATE(442), 1,
      sym_comment,
  [17663] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(1287), 1,
      anon_sym_COLON,
    STATE(443), 1,
      sym_comment,
  [17673] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(1289), 1,
      aux_sym__date_token2,
    STATE(444), 1,
      sym_comment,
  [17683] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(1291), 1,
      aux_sym__date_token2,
    STATE(445), 1,
      sym_comment,
  [17693] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(1293), 1,
      anon_sym_COMMA,
    STATE(446), 1,
      sym_comment,
  [17703] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(1295), 1,
      anon_sym_COMMA,
    STATE(447), 1,
      sym_comment,
  [17713] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(1297), 1,
      anon_sym_BQUOTE,
    STATE(448), 1,
      sym_comment,
  [17723] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(1299), 1,
      anon_sym_LBRACK,
    STATE(449), 1,
      sym_comment,
  [17733] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(241), 1,
      anon_sym_RBRACK,
    STATE(450), 1,
      sym_comment,
  [17743] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(1301), 1,
      anon_sym_RPAREN,
    STATE(451), 1,
      sym_comment,
  [17753] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(1303), 1,
      sym__natural_number,
    STATE(452), 1,
      sym_comment,
  [17763] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(1122), 1,
      sym__natural_number,
    STATE(453), 1,
      sym_comment,
  [17773] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(1305), 1,
      anon_sym_DQUOTE,
    STATE(454), 1,
      sym_comment,
  [17783] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(1307), 1,
      anon_sym_SQUOTE,
    STATE(455), 1,
      sym_comment,
  [17793] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(1309), 1,
      anon_sym_RPAREN,
    STATE(456), 1,
      sym_comment,
  [17803] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(1311), 1,
      anon_sym_LBRACK,
    STATE(457), 1,
      sym_comment,
  [17813] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(1313), 1,
      anon_sym_BQUOTE,
    STATE(458), 1,
      sym_comment,
  [17823] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(1315), 1,
      anon_sym_RBRACK,
    STATE(459), 1,
      sym_comment,
  [17833] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(1317), 1,
      sym__natural_number,
    STATE(460), 1,
      sym_comment,
  [17843] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(1319), 1,
      sym__natural_number,
    STATE(461), 1,
      sym_comment,
  [17853] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(1321), 1,
      anon_sym_DQUOTE,
    STATE(462), 1,
      sym_comment,
  [17863] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(1323), 1,
      anon_sym_SQUOTE,
    STATE(463), 1,
      sym_comment,
  [17873] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(1325), 1,
      anon_sym_COLON,
    STATE(464), 1,
      sym_comment,
  [17883] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(1327), 1,
      anon_sym_COLON,
    STATE(465), 1,
      sym_comment,
  [17893] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(1329), 1,
      anon_sym_BQUOTE,
    STATE(466), 1,
      sym_comment,
  [17903] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(1331), 1,
      anon_sym_RPAREN,
    STATE(467), 1,
      sym_comment,
  [17913] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(1333), 1,
      sym__natural_number,
    STATE(468), 1,
      sym_comment,
  [17923] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(1335), 1,
      sym__natural_number,
    STATE(469), 1,
      sym_comment,
  [17933] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(1337), 1,
      anon_sym_DQUOTE,
    STATE(470), 1,
      sym_comment,
  [17943] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(1339), 1,
      anon_sym_SQUOTE,
    STATE(471), 1,
      sym_comment,
  [17953] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(1341), 1,
      anon_sym_BQUOTE,
    STATE(472), 1,
      sym_comment,
  [17963] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(1343), 1,
      anon_sym_LPAREN,
    STATE(473), 1,
      sym_comment,
  [17973] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(1345), 1,
      sym__natural_number,
    STATE(474), 1,
      sym_comment,
  [17983] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(1347), 1,
      sym__natural_number,
    STATE(475), 1,
      sym_comment,
  [17993] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(1349), 1,
      anon_sym_DQUOTE,
    STATE(476), 1,
      sym_comment,
  [18003] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(1351), 1,
      anon_sym_SQUOTE,
    STATE(477), 1,
      sym_comment,
  [18013] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(1353), 1,
      anon_sym_BQUOTE,
    STATE(478), 1,
      sym_comment,
  [18023] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(1355), 1,
      anon_sym_BQUOTE,
    STATE(479), 1,
      sym_comment,
  [18033] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(1357), 1,
      anon_sym_BQUOTE,
    STATE(480), 1,
      sym_comment,
  [18043] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(1359), 1,
      sym__identifier_dot,
    STATE(481), 1,
      sym_comment,
  [18053] = 3,
    ACTIONS(1143), 1,
      anon_sym_POUND,
    ACTIONS(1361), 1,
      aux_sym__double_quote_string_token1,
    STATE(482), 1,
      sym_comment,
  [18063] = 3,
    ACTIONS(1143), 1,
      anon_sym_POUND,
    ACTIONS(1363), 1,
      aux_sym__single_quote_string_token1,
    STATE(483), 1,
      sym_comment,
  [18073] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(1365), 1,
      anon_sym_EQ,
    STATE(484), 1,
      sym_comment,
  [18083] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(1367), 1,
      sym__identifier_dot,
    STATE(485), 1,
      sym_comment,
  [18093] = 3,
    ACTIONS(1143), 1,
      anon_sym_POUND,
    ACTIONS(1369), 1,
      aux_sym__double_quote_string_token1,
    STATE(486), 1,
      sym_comment,
  [18103] = 3,
    ACTIONS(1143), 1,
      anon_sym_POUND,
    ACTIONS(1371), 1,
      aux_sym__single_quote_string_token1,
    STATE(487), 1,
      sym_comment,
  [18113] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(1373), 1,
      sym__identifier_dot,
    STATE(488), 1,
      sym_comment,
  [18123] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(1375), 1,
      sym__identifier_dot,
    STATE(489), 1,
      sym_comment,
  [18133] = 3,
    ACTIONS(1143), 1,
      anon_sym_POUND,
    ACTIONS(1377), 1,
      aux_sym__double_quote_string_token1,
    STATE(490), 1,
      sym_comment,
  [18143] = 3,
    ACTIONS(1143), 1,
      anon_sym_POUND,
    ACTIONS(1379), 1,
      aux_sym__single_quote_string_token1,
    STATE(491), 1,
      sym_comment,
  [18153] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(1381), 1,
      sym__identifier_dot,
    STATE(492), 1,
      sym_comment,
  [18163] = 3,
    ACTIONS(1143), 1,
      anon_sym_POUND,
    ACTIONS(1383), 1,
      aux_sym__double_quote_string_token1,
    STATE(493), 1,
      sym_comment,
  [18173] = 3,
    ACTIONS(1143), 1,
      anon_sym_POUND,
    ACTIONS(1385), 1,
      aux_sym__single_quote_string_token1,
    STATE(494), 1,
      sym_comment,
  [18183] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(1387), 1,
      sym__identifier_dot,
    STATE(495), 1,
      sym_comment,
  [18193] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(1389), 1,
      sym__identifier_dot,
    STATE(496), 1,
      sym_comment,
  [18203] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(1391), 1,
      sym__identifier_dot,
    STATE(497), 1,
      sym_comment,
  [18213] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(1393), 1,
      anon_sym_DASH,
    STATE(498), 1,
      sym_comment,
  [18223] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(1395), 1,
      ts_builtin_sym_end,
    STATE(499), 1,
      sym_comment,
  [18233] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(138), 1,
      anon_sym_RBRACK,
    STATE(500), 1,
      sym_comment,
  [18243] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(886), 1,
      anon_sym_RBRACK,
    STATE(501), 1,
      sym_comment,
  [18253] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(1397), 1,
      anon_sym_LPAREN,
    STATE(502), 1,
      sym_comment,
  [18263] = 1,
    ACTIONS(1399), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 122,
  [SMALL_STATE(4)] = 241,
  [SMALL_STATE(5)] = 336,
  [SMALL_STATE(6)] = 455,
  [SMALL_STATE(7)] = 571,
  [SMALL_STATE(8)] = 662,
  [SMALL_STATE(9)] = 722,
  [SMALL_STATE(10)] = 780,
  [SMALL_STATE(11)] = 840,
  [SMALL_STATE(12)] = 895,
  [SMALL_STATE(13)] = 1006,
  [SMALL_STATE(14)] = 1117,
  [SMALL_STATE(15)] = 1228,
  [SMALL_STATE(16)] = 1344,
  [SMALL_STATE(17)] = 1455,
  [SMALL_STATE(18)] = 1564,
  [SMALL_STATE(19)] = 1673,
  [SMALL_STATE(20)] = 1782,
  [SMALL_STATE(21)] = 1891,
  [SMALL_STATE(22)] = 2004,
  [SMALL_STATE(23)] = 2113,
  [SMALL_STATE(24)] = 2166,
  [SMALL_STATE(25)] = 2275,
  [SMALL_STATE(26)] = 2384,
  [SMALL_STATE(27)] = 2493,
  [SMALL_STATE(28)] = 2599,
  [SMALL_STATE(29)] = 2705,
  [SMALL_STATE(30)] = 2811,
  [SMALL_STATE(31)] = 2917,
  [SMALL_STATE(32)] = 3023,
  [SMALL_STATE(33)] = 3133,
  [SMALL_STATE(34)] = 3239,
  [SMALL_STATE(35)] = 3347,
  [SMALL_STATE(36)] = 3457,
  [SMALL_STATE(37)] = 3563,
  [SMALL_STATE(38)] = 3669,
  [SMALL_STATE(39)] = 3775,
  [SMALL_STATE(40)] = 3881,
  [SMALL_STATE(41)] = 3987,
  [SMALL_STATE(42)] = 4093,
  [SMALL_STATE(43)] = 4194,
  [SMALL_STATE(44)] = 4297,
  [SMALL_STATE(45)] = 4404,
  [SMALL_STATE(46)] = 4455,
  [SMALL_STATE(47)] = 4558,
  [SMALL_STATE(48)] = 4661,
  [SMALL_STATE(49)] = 4712,
  [SMALL_STATE(50)] = 4766,
  [SMALL_STATE(51)] = 4868,
  [SMALL_STATE(52)] = 4928,
  [SMALL_STATE(53)] = 4982,
  [SMALL_STATE(54)] = 5032,
  [SMALL_STATE(55)] = 5132,
  [SMALL_STATE(56)] = 5234,
  [SMALL_STATE(57)] = 5284,
  [SMALL_STATE(58)] = 5383,
  [SMALL_STATE(59)] = 5480,
  [SMALL_STATE(60)] = 5579,
  [SMALL_STATE(61)] = 5678,
  [SMALL_STATE(62)] = 5761,
  [SMALL_STATE(63)] = 5858,
  [SMALL_STATE(64)] = 5909,
  [SMALL_STATE(65)] = 6006,
  [SMALL_STATE(66)] = 6103,
  [SMALL_STATE(67)] = 6200,
  [SMALL_STATE(68)] = 6297,
  [SMALL_STATE(69)] = 6394,
  [SMALL_STATE(70)] = 6493,
  [SMALL_STATE(71)] = 6590,
  [SMALL_STATE(72)] = 6687,
  [SMALL_STATE(73)] = 6784,
  [SMALL_STATE(74)] = 6881,
  [SMALL_STATE(75)] = 6930,
  [SMALL_STATE(76)] = 7029,
  [SMALL_STATE(77)] = 7128,
  [SMALL_STATE(78)] = 7178,
  [SMALL_STATE(79)] = 7226,
  [SMALL_STATE(80)] = 7308,
  [SMALL_STATE(81)] = 7358,
  [SMALL_STATE(82)] = 7438,
  [SMALL_STATE(83)] = 7488,
  [SMALL_STATE(84)] = 7538,
  [SMALL_STATE(85)] = 7588,
  [SMALL_STATE(86)] = 7636,
  [SMALL_STATE(87)] = 7684,
  [SMALL_STATE(88)] = 7731,
  [SMALL_STATE(89)] = 7778,
  [SMALL_STATE(90)] = 7825,
  [SMALL_STATE(91)] = 7872,
  [SMALL_STATE(92)] = 7919,
  [SMALL_STATE(93)] = 7966,
  [SMALL_STATE(94)] = 8013,
  [SMALL_STATE(95)] = 8076,
  [SMALL_STATE(96)] = 8137,
  [SMALL_STATE(97)] = 8184,
  [SMALL_STATE(98)] = 8231,
  [SMALL_STATE(99)] = 8278,
  [SMALL_STATE(100)] = 8325,
  [SMALL_STATE(101)] = 8372,
  [SMALL_STATE(102)] = 8419,
  [SMALL_STATE(103)] = 8466,
  [SMALL_STATE(104)] = 8513,
  [SMALL_STATE(105)] = 8568,
  [SMALL_STATE(106)] = 8615,
  [SMALL_STATE(107)] = 8666,
  [SMALL_STATE(108)] = 8719,
  [SMALL_STATE(109)] = 8778,
  [SMALL_STATE(110)] = 8825,
  [SMALL_STATE(111)] = 8872,
  [SMALL_STATE(112)] = 8919,
  [SMALL_STATE(113)] = 8966,
  [SMALL_STATE(114)] = 9013,
  [SMALL_STATE(115)] = 9074,
  [SMALL_STATE(116)] = 9135,
  [SMALL_STATE(117)] = 9211,
  [SMALL_STATE(118)] = 9289,
  [SMALL_STATE(119)] = 9349,
  [SMALL_STATE(120)] = 9407,
  [SMALL_STATE(121)] = 9446,
  [SMALL_STATE(122)] = 9485,
  [SMALL_STATE(123)] = 9526,
  [SMALL_STATE(124)] = 9567,
  [SMALL_STATE(125)] = 9606,
  [SMALL_STATE(126)] = 9647,
  [SMALL_STATE(127)] = 9690,
  [SMALL_STATE(128)] = 9729,
  [SMALL_STATE(129)] = 9767,
  [SMALL_STATE(130)] = 9821,
  [SMALL_STATE(131)] = 9859,
  [SMALL_STATE(132)] = 9897,
  [SMALL_STATE(133)] = 9935,
  [SMALL_STATE(134)] = 9973,
  [SMALL_STATE(135)] = 10011,
  [SMALL_STATE(136)] = 10049,
  [SMALL_STATE(137)] = 10087,
  [SMALL_STATE(138)] = 10125,
  [SMALL_STATE(139)] = 10187,
  [SMALL_STATE(140)] = 10249,
  [SMALL_STATE(141)] = 10287,
  [SMALL_STATE(142)] = 10325,
  [SMALL_STATE(143)] = 10384,
  [SMALL_STATE(144)] = 10441,
  [SMALL_STATE(145)] = 10480,
  [SMALL_STATE(146)] = 10521,
  [SMALL_STATE(147)] = 10562,
  [SMALL_STATE(148)] = 10630,
  [SMALL_STATE(149)] = 10666,
  [SMALL_STATE(150)] = 10732,
  [SMALL_STATE(151)] = 10767,
  [SMALL_STATE(152)] = 10804,
  [SMALL_STATE(153)] = 10839,
  [SMALL_STATE(154)] = 10876,
  [SMALL_STATE(155)] = 10915,
  [SMALL_STATE(156)] = 10952,
  [SMALL_STATE(157)] = 10986,
  [SMALL_STATE(158)] = 11020,
  [SMALL_STATE(159)] = 11054,
  [SMALL_STATE(160)] = 11088,
  [SMALL_STATE(161)] = 11122,
  [SMALL_STATE(162)] = 11156,
  [SMALL_STATE(163)] = 11190,
  [SMALL_STATE(164)] = 11224,
  [SMALL_STATE(165)] = 11258,
  [SMALL_STATE(166)] = 11292,
  [SMALL_STATE(167)] = 11326,
  [SMALL_STATE(168)] = 11360,
  [SMALL_STATE(169)] = 11416,
  [SMALL_STATE(170)] = 11469,
  [SMALL_STATE(171)] = 11520,
  [SMALL_STATE(172)] = 11553,
  [SMALL_STATE(173)] = 11584,
  [SMALL_STATE(174)] = 11621,
  [SMALL_STATE(175)] = 11652,
  [SMALL_STATE(176)] = 11683,
  [SMALL_STATE(177)] = 11714,
  [SMALL_STATE(178)] = 11751,
  [SMALL_STATE(179)] = 11782,
  [SMALL_STATE(180)] = 11813,
  [SMALL_STATE(181)] = 11844,
  [SMALL_STATE(182)] = 11875,
  [SMALL_STATE(183)] = 11906,
  [SMALL_STATE(184)] = 11937,
  [SMALL_STATE(185)] = 11968,
  [SMALL_STATE(186)] = 11998,
  [SMALL_STATE(187)] = 12032,
  [SMALL_STATE(188)] = 12064,
  [SMALL_STATE(189)] = 12094,
  [SMALL_STATE(190)] = 12124,
  [SMALL_STATE(191)] = 12170,
  [SMALL_STATE(192)] = 12202,
  [SMALL_STATE(193)] = 12231,
  [SMALL_STATE(194)] = 12260,
  [SMALL_STATE(195)] = 12291,
  [SMALL_STATE(196)] = 12320,
  [SMALL_STATE(197)] = 12349,
  [SMALL_STATE(198)] = 12378,
  [SMALL_STATE(199)] = 12407,
  [SMALL_STATE(200)] = 12436,
  [SMALL_STATE(201)] = 12465,
  [SMALL_STATE(202)] = 12494,
  [SMALL_STATE(203)] = 12523,
  [SMALL_STATE(204)] = 12552,
  [SMALL_STATE(205)] = 12587,
  [SMALL_STATE(206)] = 12616,
  [SMALL_STATE(207)] = 12645,
  [SMALL_STATE(208)] = 12673,
  [SMALL_STATE(209)] = 12701,
  [SMALL_STATE(210)] = 12729,
  [SMALL_STATE(211)] = 12757,
  [SMALL_STATE(212)] = 12785,
  [SMALL_STATE(213)] = 12813,
  [SMALL_STATE(214)] = 12841,
  [SMALL_STATE(215)] = 12869,
  [SMALL_STATE(216)] = 12897,
  [SMALL_STATE(217)] = 12925,
  [SMALL_STATE(218)] = 12953,
  [SMALL_STATE(219)] = 12981,
  [SMALL_STATE(220)] = 13009,
  [SMALL_STATE(221)] = 13039,
  [SMALL_STATE(222)] = 13067,
  [SMALL_STATE(223)] = 13095,
  [SMALL_STATE(224)] = 13123,
  [SMALL_STATE(225)] = 13151,
  [SMALL_STATE(226)] = 13179,
  [SMALL_STATE(227)] = 13207,
  [SMALL_STATE(228)] = 13235,
  [SMALL_STATE(229)] = 13263,
  [SMALL_STATE(230)] = 13291,
  [SMALL_STATE(231)] = 13319,
  [SMALL_STATE(232)] = 13347,
  [SMALL_STATE(233)] = 13375,
  [SMALL_STATE(234)] = 13403,
  [SMALL_STATE(235)] = 13431,
  [SMALL_STATE(236)] = 13465,
  [SMALL_STATE(237)] = 13493,
  [SMALL_STATE(238)] = 13521,
  [SMALL_STATE(239)] = 13549,
  [SMALL_STATE(240)] = 13577,
  [SMALL_STATE(241)] = 13605,
  [SMALL_STATE(242)] = 13633,
  [SMALL_STATE(243)] = 13661,
  [SMALL_STATE(244)] = 13689,
  [SMALL_STATE(245)] = 13717,
  [SMALL_STATE(246)] = 13762,
  [SMALL_STATE(247)] = 13791,
  [SMALL_STATE(248)] = 13820,
  [SMALL_STATE(249)] = 13849,
  [SMALL_STATE(250)] = 13876,
  [SMALL_STATE(251)] = 13921,
  [SMALL_STATE(252)] = 13966,
  [SMALL_STATE(253)] = 14007,
  [SMALL_STATE(254)] = 14048,
  [SMALL_STATE(255)] = 14093,
  [SMALL_STATE(256)] = 14120,
  [SMALL_STATE(257)] = 14149,
  [SMALL_STATE(258)] = 14180,
  [SMALL_STATE(259)] = 14225,
  [SMALL_STATE(260)] = 14270,
  [SMALL_STATE(261)] = 14296,
  [SMALL_STATE(262)] = 14324,
  [SMALL_STATE(263)] = 14352,
  [SMALL_STATE(264)] = 14392,
  [SMALL_STATE(265)] = 14418,
  [SMALL_STATE(266)] = 14444,
  [SMALL_STATE(267)] = 14472,
  [SMALL_STATE(268)] = 14500,
  [SMALL_STATE(269)] = 14526,
  [SMALL_STATE(270)] = 14552,
  [SMALL_STATE(271)] = 14590,
  [SMALL_STATE(272)] = 14630,
  [SMALL_STATE(273)] = 14666,
  [SMALL_STATE(274)] = 14692,
  [SMALL_STATE(275)] = 14732,
  [SMALL_STATE(276)] = 14758,
  [SMALL_STATE(277)] = 14784,
  [SMALL_STATE(278)] = 14810,
  [SMALL_STATE(279)] = 14836,
  [SMALL_STATE(280)] = 14862,
  [SMALL_STATE(281)] = 14888,
  [SMALL_STATE(282)] = 14916,
  [SMALL_STATE(283)] = 14953,
  [SMALL_STATE(284)] = 14996,
  [SMALL_STATE(285)] = 15033,
  [SMALL_STATE(286)] = 15056,
  [SMALL_STATE(287)] = 15090,
  [SMALL_STATE(288)] = 15122,
  [SMALL_STATE(289)] = 15156,
  [SMALL_STATE(290)] = 15187,
  [SMALL_STATE(291)] = 15218,
  [SMALL_STATE(292)] = 15249,
  [SMALL_STATE(293)] = 15280,
  [SMALL_STATE(294)] = 15309,
  [SMALL_STATE(295)] = 15340,
  [SMALL_STATE(296)] = 15372,
  [SMALL_STATE(297)] = 15400,
  [SMALL_STATE(298)] = 15428,
  [SMALL_STATE(299)] = 15456,
  [SMALL_STATE(300)] = 15484,
  [SMALL_STATE(301)] = 15512,
  [SMALL_STATE(302)] = 15541,
  [SMALL_STATE(303)] = 15570,
  [SMALL_STATE(304)] = 15599,
  [SMALL_STATE(305)] = 15622,
  [SMALL_STATE(306)] = 15651,
  [SMALL_STATE(307)] = 15680,
  [SMALL_STATE(308)] = 15706,
  [SMALL_STATE(309)] = 15730,
  [SMALL_STATE(310)] = 15754,
  [SMALL_STATE(311)] = 15782,
  [SMALL_STATE(312)] = 15804,
  [SMALL_STATE(313)] = 15823,
  [SMALL_STATE(314)] = 15848,
  [SMALL_STATE(315)] = 15869,
  [SMALL_STATE(316)] = 15886,
  [SMALL_STATE(317)] = 15903,
  [SMALL_STATE(318)] = 15920,
  [SMALL_STATE(319)] = 15937,
  [SMALL_STATE(320)] = 15958,
  [SMALL_STATE(321)] = 15975,
  [SMALL_STATE(322)] = 15998,
  [SMALL_STATE(323)] = 16015,
  [SMALL_STATE(324)] = 16035,
  [SMALL_STATE(325)] = 16057,
  [SMALL_STATE(326)] = 16073,
  [SMALL_STATE(327)] = 16093,
  [SMALL_STATE(328)] = 16107,
  [SMALL_STATE(329)] = 16129,
  [SMALL_STATE(330)] = 16149,
  [SMALL_STATE(331)] = 16169,
  [SMALL_STATE(332)] = 16185,
  [SMALL_STATE(333)] = 16205,
  [SMALL_STATE(334)] = 16221,
  [SMALL_STATE(335)] = 16237,
  [SMALL_STATE(336)] = 16259,
  [SMALL_STATE(337)] = 16273,
  [SMALL_STATE(338)] = 16295,
  [SMALL_STATE(339)] = 16308,
  [SMALL_STATE(340)] = 16327,
  [SMALL_STATE(341)] = 16344,
  [SMALL_STATE(342)] = 16361,
  [SMALL_STATE(343)] = 16374,
  [SMALL_STATE(344)] = 16391,
  [SMALL_STATE(345)] = 16406,
  [SMALL_STATE(346)] = 16419,
  [SMALL_STATE(347)] = 16434,
  [SMALL_STATE(348)] = 16447,
  [SMALL_STATE(349)] = 16464,
  [SMALL_STATE(350)] = 16483,
  [SMALL_STATE(351)] = 16496,
  [SMALL_STATE(352)] = 16511,
  [SMALL_STATE(353)] = 16528,
  [SMALL_STATE(354)] = 16542,
  [SMALL_STATE(355)] = 16554,
  [SMALL_STATE(356)] = 16568,
  [SMALL_STATE(357)] = 16582,
  [SMALL_STATE(358)] = 16598,
  [SMALL_STATE(359)] = 16612,
  [SMALL_STATE(360)] = 16624,
  [SMALL_STATE(361)] = 16640,
  [SMALL_STATE(362)] = 16656,
  [SMALL_STATE(363)] = 16672,
  [SMALL_STATE(364)] = 16686,
  [SMALL_STATE(365)] = 16698,
  [SMALL_STATE(366)] = 16714,
  [SMALL_STATE(367)] = 16728,
  [SMALL_STATE(368)] = 16744,
  [SMALL_STATE(369)] = 16756,
  [SMALL_STATE(370)] = 16770,
  [SMALL_STATE(371)] = 16786,
  [SMALL_STATE(372)] = 16802,
  [SMALL_STATE(373)] = 16814,
  [SMALL_STATE(374)] = 16830,
  [SMALL_STATE(375)] = 16846,
  [SMALL_STATE(376)] = 16862,
  [SMALL_STATE(377)] = 16878,
  [SMALL_STATE(378)] = 16892,
  [SMALL_STATE(379)] = 16908,
  [SMALL_STATE(380)] = 16924,
  [SMALL_STATE(381)] = 16940,
  [SMALL_STATE(382)] = 16952,
  [SMALL_STATE(383)] = 16968,
  [SMALL_STATE(384)] = 16984,
  [SMALL_STATE(385)] = 16996,
  [SMALL_STATE(386)] = 17008,
  [SMALL_STATE(387)] = 17020,
  [SMALL_STATE(388)] = 17036,
  [SMALL_STATE(389)] = 17052,
  [SMALL_STATE(390)] = 17068,
  [SMALL_STATE(391)] = 17084,
  [SMALL_STATE(392)] = 17098,
  [SMALL_STATE(393)] = 17114,
  [SMALL_STATE(394)] = 17130,
  [SMALL_STATE(395)] = 17146,
  [SMALL_STATE(396)] = 17159,
  [SMALL_STATE(397)] = 17172,
  [SMALL_STATE(398)] = 17183,
  [SMALL_STATE(399)] = 17194,
  [SMALL_STATE(400)] = 17207,
  [SMALL_STATE(401)] = 17218,
  [SMALL_STATE(402)] = 17229,
  [SMALL_STATE(403)] = 17242,
  [SMALL_STATE(404)] = 17255,
  [SMALL_STATE(405)] = 17268,
  [SMALL_STATE(406)] = 17279,
  [SMALL_STATE(407)] = 17290,
  [SMALL_STATE(408)] = 17301,
  [SMALL_STATE(409)] = 17314,
  [SMALL_STATE(410)] = 17327,
  [SMALL_STATE(411)] = 17340,
  [SMALL_STATE(412)] = 17353,
  [SMALL_STATE(413)] = 17363,
  [SMALL_STATE(414)] = 17373,
  [SMALL_STATE(415)] = 17383,
  [SMALL_STATE(416)] = 17393,
  [SMALL_STATE(417)] = 17403,
  [SMALL_STATE(418)] = 17413,
  [SMALL_STATE(419)] = 17423,
  [SMALL_STATE(420)] = 17433,
  [SMALL_STATE(421)] = 17443,
  [SMALL_STATE(422)] = 17453,
  [SMALL_STATE(423)] = 17463,
  [SMALL_STATE(424)] = 17473,
  [SMALL_STATE(425)] = 17483,
  [SMALL_STATE(426)] = 17493,
  [SMALL_STATE(427)] = 17503,
  [SMALL_STATE(428)] = 17513,
  [SMALL_STATE(429)] = 17523,
  [SMALL_STATE(430)] = 17533,
  [SMALL_STATE(431)] = 17543,
  [SMALL_STATE(432)] = 17553,
  [SMALL_STATE(433)] = 17563,
  [SMALL_STATE(434)] = 17573,
  [SMALL_STATE(435)] = 17583,
  [SMALL_STATE(436)] = 17593,
  [SMALL_STATE(437)] = 17603,
  [SMALL_STATE(438)] = 17613,
  [SMALL_STATE(439)] = 17623,
  [SMALL_STATE(440)] = 17633,
  [SMALL_STATE(441)] = 17643,
  [SMALL_STATE(442)] = 17653,
  [SMALL_STATE(443)] = 17663,
  [SMALL_STATE(444)] = 17673,
  [SMALL_STATE(445)] = 17683,
  [SMALL_STATE(446)] = 17693,
  [SMALL_STATE(447)] = 17703,
  [SMALL_STATE(448)] = 17713,
  [SMALL_STATE(449)] = 17723,
  [SMALL_STATE(450)] = 17733,
  [SMALL_STATE(451)] = 17743,
  [SMALL_STATE(452)] = 17753,
  [SMALL_STATE(453)] = 17763,
  [SMALL_STATE(454)] = 17773,
  [SMALL_STATE(455)] = 17783,
  [SMALL_STATE(456)] = 17793,
  [SMALL_STATE(457)] = 17803,
  [SMALL_STATE(458)] = 17813,
  [SMALL_STATE(459)] = 17823,
  [SMALL_STATE(460)] = 17833,
  [SMALL_STATE(461)] = 17843,
  [SMALL_STATE(462)] = 17853,
  [SMALL_STATE(463)] = 17863,
  [SMALL_STATE(464)] = 17873,
  [SMALL_STATE(465)] = 17883,
  [SMALL_STATE(466)] = 17893,
  [SMALL_STATE(467)] = 17903,
  [SMALL_STATE(468)] = 17913,
  [SMALL_STATE(469)] = 17923,
  [SMALL_STATE(470)] = 17933,
  [SMALL_STATE(471)] = 17943,
  [SMALL_STATE(472)] = 17953,
  [SMALL_STATE(473)] = 17963,
  [SMALL_STATE(474)] = 17973,
  [SMALL_STATE(475)] = 17983,
  [SMALL_STATE(476)] = 17993,
  [SMALL_STATE(477)] = 18003,
  [SMALL_STATE(478)] = 18013,
  [SMALL_STATE(479)] = 18023,
  [SMALL_STATE(480)] = 18033,
  [SMALL_STATE(481)] = 18043,
  [SMALL_STATE(482)] = 18053,
  [SMALL_STATE(483)] = 18063,
  [SMALL_STATE(484)] = 18073,
  [SMALL_STATE(485)] = 18083,
  [SMALL_STATE(486)] = 18093,
  [SMALL_STATE(487)] = 18103,
  [SMALL_STATE(488)] = 18113,
  [SMALL_STATE(489)] = 18123,
  [SMALL_STATE(490)] = 18133,
  [SMALL_STATE(491)] = 18143,
  [SMALL_STATE(492)] = 18153,
  [SMALL_STATE(493)] = 18163,
  [SMALL_STATE(494)] = 18173,
  [SMALL_STATE(495)] = 18183,
  [SMALL_STATE(496)] = 18193,
  [SMALL_STATE(497)] = 18203,
  [SMALL_STATE(498)] = 18213,
  [SMALL_STATE(499)] = 18223,
  [SMALL_STATE(500)] = 18233,
  [SMALL_STATE(501)] = 18243,
  [SMALL_STATE(502)] = 18253,
  [SMALL_STATE(503)] = 18263,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(423),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 0),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(335),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(383),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(371),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(399),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(374),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(112),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(65),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(42),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(419),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(203),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(352),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(442),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(441),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(440),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(403),
  [39] = {.entry = {.count = 1, .reusable = false}}, SHIFT(439),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(411),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [45] = {.entry = {.count = 1, .reusable = false}}, SHIFT(11),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(438),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(488),
  [51] = {.entry = {.count = 1, .reusable = false}}, SHIFT(53),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(339),
  [55] = {.entry = {.count = 1, .reusable = true}}, SHIFT(193),
  [57] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field, 1, .production_id = 7),
  [59] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_field, 1, .production_id = 7),
  [61] = {.entry = {.count = 1, .reusable = false}}, SHIFT(140),
  [63] = {.entry = {.count = 1, .reusable = true}}, SHIFT(343),
  [65] = {.entry = {.count = 1, .reusable = true}}, SHIFT(486),
  [67] = {.entry = {.count = 1, .reusable = true}}, SHIFT(487),
  [69] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [71] = {.entry = {.count = 1, .reusable = false}}, SHIFT(131),
  [73] = {.entry = {.count = 1, .reusable = true}}, SHIFT(460),
  [75] = {.entry = {.count = 1, .reusable = true}}, SHIFT(492),
  [77] = {.entry = {.count = 1, .reusable = false}}, SHIFT(121),
  [79] = {.entry = {.count = 1, .reusable = true}}, SHIFT(201),
  [81] = {.entry = {.count = 1, .reusable = false}}, SHIFT(156),
  [83] = {.entry = {.count = 1, .reusable = true}}, SHIFT(340),
  [85] = {.entry = {.count = 1, .reusable = true}}, SHIFT(493),
  [87] = {.entry = {.count = 1, .reusable = true}}, SHIFT(494),
  [89] = {.entry = {.count = 1, .reusable = true}}, SHIFT(166),
  [91] = {.entry = {.count = 1, .reusable = false}}, SHIFT(166),
  [93] = {.entry = {.count = 1, .reusable = true}}, SHIFT(474),
  [95] = {.entry = {.count = 1, .reusable = true}}, SHIFT(497),
  [97] = {.entry = {.count = 1, .reusable = false}}, SHIFT(152),
  [99] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_integer, 1),
  [101] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_integer, 1),
  [103] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__friendly_number, 2),
  [105] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__friendly_number, 2),
  [107] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__friendly_number, 2), SHIFT_REPEAT(11),
  [110] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_integer, 2),
  [112] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_integer, 2),
  [114] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__friendly_number, 1),
  [116] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__friendly_number, 1),
  [118] = {.entry = {.count = 1, .reusable = false}}, SHIFT(457),
  [120] = {.entry = {.count = 1, .reusable = false}}, SHIFT(62),
  [122] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [124] = {.entry = {.count = 1, .reusable = true}}, SHIFT(485),
  [126] = {.entry = {.count = 1, .reusable = false}}, SHIFT(48),
  [128] = {.entry = {.count = 1, .reusable = true}}, SHIFT(489),
  [130] = {.entry = {.count = 1, .reusable = false}}, SHIFT(127),
  [132] = {.entry = {.count = 1, .reusable = true}}, SHIFT(496),
  [134] = {.entry = {.count = 1, .reusable = false}}, SHIFT(111),
  [136] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [138] = {.entry = {.count = 1, .reusable = true}}, SHIFT(184),
  [140] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_switch_repeat2, 2),
  [142] = {.entry = {.count = 1, .reusable = true}}, SHIFT(421),
  [144] = {.entry = {.count = 1, .reusable = true}}, SHIFT(420),
  [146] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [148] = {.entry = {.count = 1, .reusable = true}}, SHIFT(422),
  [150] = {.entry = {.count = 1, .reusable = true}}, SHIFT(242),
  [152] = {.entry = {.count = 1, .reusable = true}}, SHIFT(417),
  [154] = {.entry = {.count = 1, .reusable = true}}, SHIFT(238),
  [156] = {.entry = {.count = 1, .reusable = true}}, SHIFT(500),
  [158] = {.entry = {.count = 1, .reusable = true}}, SHIFT(179),
  [160] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [162] = {.entry = {.count = 1, .reusable = true}}, SHIFT(430),
  [164] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__date, 5),
  [166] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__date, 5),
  [168] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_switch_repeat1, 2), SHIFT_REPEAT(112),
  [171] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_switch_repeat1, 2), SHIFT_REPEAT(76),
  [174] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_switch_repeat1, 2),
  [176] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_switch_repeat1, 2), SHIFT_REPEAT(352),
  [179] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_switch_repeat1, 2), SHIFT_REPEAT(442),
  [182] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_switch_repeat1, 2), SHIFT_REPEAT(441),
  [185] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_switch_repeat1, 2), SHIFT_REPEAT(440),
  [188] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_switch_repeat1, 2), SHIFT_REPEAT(403),
  [191] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_switch_repeat1, 2), SHIFT_REPEAT(439),
  [194] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_switch_repeat1, 2), SHIFT_REPEAT(411),
  [197] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_switch_repeat1, 2), SHIFT_REPEAT(11),
  [200] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_switch_repeat1, 2), SHIFT_REPEAT(11),
  [203] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_switch_repeat1, 2), SHIFT_REPEAT(438),
  [206] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_switch_repeat1, 2), SHIFT_REPEAT(488),
  [209] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_switch_repeat1, 2), SHIFT_REPEAT(53),
  [212] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_switch_repeat1, 2), SHIFT_REPEAT(339),
  [215] = {.entry = {.count = 1, .reusable = true}}, SHIFT(450),
  [217] = {.entry = {.count = 1, .reusable = true}}, SHIFT(237),
  [219] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [221] = {.entry = {.count = 1, .reusable = true}}, SHIFT(216),
  [223] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [225] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [227] = {.entry = {.count = 1, .reusable = true}}, SHIFT(228),
  [229] = {.entry = {.count = 1, .reusable = true}}, SHIFT(502),
  [231] = {.entry = {.count = 1, .reusable = true}}, SHIFT(174),
  [233] = {.entry = {.count = 1, .reusable = true}}, SHIFT(501),
  [235] = {.entry = {.count = 1, .reusable = true}}, SHIFT(233),
  [237] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [239] = {.entry = {.count = 1, .reusable = true}}, SHIFT(175),
  [241] = {.entry = {.count = 1, .reusable = true}}, SHIFT(217),
  [243] = {.entry = {.count = 1, .reusable = true}}, SHIFT(243),
  [245] = {.entry = {.count = 1, .reusable = true}}, SHIFT(239),
  [247] = {.entry = {.count = 1, .reusable = true}}, SHIFT(224),
  [249] = {.entry = {.count = 1, .reusable = true}}, SHIFT(434),
  [251] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__aggregate_count, 1),
  [253] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_identifier, 3),
  [255] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_identifier, 3),
  [257] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_identifier, 1),
  [259] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_identifier, 1),
  [261] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__time, 3),
  [263] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__time, 3),
  [265] = {.entry = {.count = 1, .reusable = true}}, SHIFT(444),
  [267] = {.entry = {.count = 1, .reusable = true}}, SHIFT(332),
  [269] = {.entry = {.count = 1, .reusable = true}}, SHIFT(221),
  [271] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_timestamp, 4),
  [273] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_timestamp, 4),
  [275] = {.entry = {.count = 1, .reusable = false}}, SHIFT(364),
  [277] = {.entry = {.count = 1, .reusable = true}}, SHIFT(364),
  [279] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [281] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__time, 1),
  [283] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__time, 1),
  [285] = {.entry = {.count = 1, .reusable = true}}, SHIFT(414),
  [287] = {.entry = {.count = 1, .reusable = true}}, SHIFT(330),
  [289] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [291] = {.entry = {.count = 1, .reusable = true}}, SHIFT(214),
  [293] = {.entry = {.count = 1, .reusable = false}}, SHIFT(260),
  [295] = {.entry = {.count = 1, .reusable = true}}, SHIFT(341),
  [297] = {.entry = {.count = 1, .reusable = true}}, SHIFT(490),
  [299] = {.entry = {.count = 1, .reusable = true}}, SHIFT(491),
  [301] = {.entry = {.count = 1, .reusable = true}}, SHIFT(280),
  [303] = {.entry = {.count = 1, .reusable = false}}, SHIFT(280),
  [305] = {.entry = {.count = 1, .reusable = true}}, SHIFT(468),
  [307] = {.entry = {.count = 1, .reusable = true}}, SHIFT(495),
  [309] = {.entry = {.count = 1, .reusable = false}}, SHIFT(255),
  [311] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__time, 5),
  [313] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__time, 5),
  [315] = {.entry = {.count = 1, .reusable = true}}, SHIFT(329),
  [317] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__double_quote_string, 3),
  [319] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__double_quote_string, 3),
  [321] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_date, 2),
  [323] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_date, 2),
  [325] = {.entry = {.count = 1, .reusable = false}}, SHIFT(404),
  [327] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_call, 2, .production_id = 7),
  [329] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_call, 2, .production_id = 7),
  [331] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_decimal_number, 2),
  [333] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_decimal_number, 2),
  [335] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [337] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_function_call_repeat1, 2),
  [339] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_function_call_repeat1, 2),
  [341] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_function_call_repeat1, 2), SHIFT_REPEAT(140),
  [344] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_call_repeat1, 2), SHIFT_REPEAT(343),
  [347] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_call_repeat1, 2), SHIFT_REPEAT(486),
  [350] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_call_repeat1, 2), SHIFT_REPEAT(487),
  [353] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_call_repeat1, 2), SHIFT_REPEAT(131),
  [356] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_function_call_repeat1, 2), SHIFT_REPEAT(131),
  [359] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_call_repeat1, 2), SHIFT_REPEAT(460),
  [362] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_call_repeat1, 2), SHIFT_REPEAT(492),
  [365] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_function_call_repeat1, 2), SHIFT_REPEAT(121),
  [368] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_literal, 1),
  [370] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_literal, 1),
  [372] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [374] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__alias_identifier, 1),
  [376] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__literal_string, 1),
  [378] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__literal_string, 1),
  [380] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__alias_identifier, 1, .production_id = 6),
  [382] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__time, 7),
  [384] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__time, 7),
  [386] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__triple_f_string, 3),
  [388] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__triple_f_string, 3),
  [390] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_timestamp, 5),
  [392] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_timestamp, 5),
  [394] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__triple_s_string, 3),
  [396] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__triple_s_string, 3),
  [398] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__double_s_string, 3),
  [400] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__double_s_string, 3),
  [402] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expression, 1),
  [404] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__expression, 1),
  [406] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_f_string, 1),
  [408] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_f_string, 1),
  [410] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_expression, 3, .production_id = 18),
  [412] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binary_expression, 3, .production_id = 18),
  [414] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [416] = {.entry = {.count = 1, .reusable = false}}, SHIFT(58),
  [418] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [420] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [422] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [424] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [426] = {.entry = {.count = 1, .reusable = false}}, SHIFT(67),
  [428] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [430] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__double_f_string, 3),
  [432] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__double_f_string, 3),
  [434] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__single_quote_string, 3),
  [436] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__single_quote_string, 3),
  [438] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_decimal_number, 3),
  [440] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_decimal_number, 3),
  [442] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expression, 3),
  [444] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__expression, 3),
  [446] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_timezone, 2),
  [448] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_timezone, 2),
  [450] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_time, 2),
  [452] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_time, 2),
  [454] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_s_string, 1),
  [456] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_s_string, 1),
  [458] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_timezone, 1),
  [460] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_timezone, 1),
  [462] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field, 3, .production_id = 19),
  [464] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_field, 3, .production_id = 19),
  [466] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__agg_rhs_assignment, 1, .production_id = 21),
  [468] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__agg_rhs_assignment, 1, .production_id = 21),
  [470] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [472] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__agg_rhs_assignment, 2, .production_id = 24),
  [474] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__agg_rhs_assignment, 2, .production_id = 24),
  [476] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_function_call_repeat1, 2), SHIFT_REPEAT(156),
  [479] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_call_repeat1, 2), SHIFT_REPEAT(340),
  [482] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_call_repeat1, 2), SHIFT_REPEAT(493),
  [485] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_call_repeat1, 2), SHIFT_REPEAT(494),
  [488] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_call_repeat1, 2), SHIFT_REPEAT(166),
  [491] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_function_call_repeat1, 2), SHIFT_REPEAT(166),
  [494] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_call_repeat1, 2), SHIFT_REPEAT(474),
  [497] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_call_repeat1, 2), SHIFT_REPEAT(497),
  [500] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_function_call_repeat1, 2), SHIFT_REPEAT(152),
  [503] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_term, 1, .production_id = 8),
  [505] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_term, 1, .production_id = 8),
  [507] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [509] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__boolean_expression, 1, .production_id = 5),
  [511] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__boolean_expression, 1, .production_id = 5),
  [513] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__call_parameter, 1, .production_id = 8),
  [515] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__call_parameter, 1, .production_id = 8),
  [517] = {.entry = {.count = 1, .reusable = true}}, SHIFT(254),
  [519] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__friendly_number, 2), SHIFT_REPEAT(131),
  [522] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__friendly_number, 2), SHIFT_REPEAT(131),
  [525] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [527] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_function_call_repeat1, 1, .production_id = 25),
  [529] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_function_call_repeat1, 1, .production_id = 25),
  [531] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable, 4, .production_id = 11),
  [533] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable, 4, .production_id = 11),
  [535] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [537] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [539] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [541] = {.entry = {.count = 1, .reusable = true}}, SHIFT(449),
  [543] = {.entry = {.count = 1, .reusable = true}}, SHIFT(305),
  [545] = {.entry = {.count = 1, .reusable = true}}, SHIFT(306),
  [547] = {.entry = {.count = 1, .reusable = true}}, SHIFT(310),
  [549] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [551] = {.entry = {.count = 1, .reusable = true}}, SHIFT(324),
  [553] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pipeline, 1),
  [555] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pipeline, 1),
  [557] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__call_parameter, 3, .production_id = 29),
  [559] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__call_parameter, 3, .production_id = 29),
  [561] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_transforms, 1),
  [563] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_transforms, 1),
  [565] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_transforms_repeat1, 2),
  [567] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_transforms_repeat1, 2),
  [569] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_transforms_repeat1, 2), SHIFT_REPEAT(54),
  [572] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_transforms_repeat1, 2), SHIFT_REPEAT(28),
  [575] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_transforms_repeat1, 2), SHIFT_REPEAT(29),
  [578] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_transforms_repeat1, 2), SHIFT_REPEAT(449),
  [581] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_transforms_repeat1, 2), SHIFT_REPEAT(305),
  [584] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_transforms_repeat1, 2), SHIFT_REPEAT(306),
  [587] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_transforms_repeat1, 2), SHIFT_REPEAT(310),
  [590] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_transforms_repeat1, 2), SHIFT_REPEAT(25),
  [593] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_transforms_repeat1, 2), SHIFT_REPEAT(324),
  [596] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__friendly_number, 2), SHIFT_REPEAT(148),
  [599] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [601] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_function_call_repeat1, 2), SHIFT_REPEAT(260),
  [604] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_call_repeat1, 2), SHIFT_REPEAT(341),
  [607] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_call_repeat1, 2), SHIFT_REPEAT(490),
  [610] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_call_repeat1, 2), SHIFT_REPEAT(491),
  [613] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_call_repeat1, 2), SHIFT_REPEAT(280),
  [616] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_function_call_repeat1, 2), SHIFT_REPEAT(280),
  [619] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_call_repeat1, 2), SHIFT_REPEAT(468),
  [622] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_call_repeat1, 2), SHIFT_REPEAT(495),
  [625] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_function_call_repeat1, 2), SHIFT_REPEAT(255),
  [628] = {.entry = {.count = 1, .reusable = true}}, SHIFT(251),
  [630] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__friendly_number, 2), SHIFT_REPEAT(166),
  [633] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__friendly_number, 2), SHIFT_REPEAT(166),
  [636] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [638] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [640] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_transforms_repeat1, 2), SHIFT_REPEAT(33),
  [643] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_transforms_repeat1, 2), SHIFT_REPEAT(22),
  [646] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_range, 3, .production_id = 23),
  [648] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_range, 3, .production_id = 23),
  [650] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_joins, 3, .production_id = 14),
  [652] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_joins, 3, .production_id = 14),
  [654] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [656] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_switch, 6),
  [658] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_switch, 6),
  [660] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_switch, 5),
  [662] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_switch, 5),
  [664] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__sort_instruction, 1),
  [666] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__sort_instruction, 1),
  [668] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_joins, 2, .production_id = 9),
  [670] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_joins, 2, .production_id = 9),
  [672] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment, 3, .production_id = 22),
  [674] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_assignment, 3, .production_id = 22),
  [676] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_switch, 3),
  [678] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_switch, 3),
  [680] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__sort_instruction, 2),
  [682] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__sort_instruction, 2),
  [684] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment, 3, .production_id = 20),
  [686] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_assignment, 3, .production_id = 20),
  [688] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment, 5, .production_id = 27),
  [690] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_assignment, 5, .production_id = 27),
  [692] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment, 5, .production_id = 28),
  [694] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_assignment, 5, .production_id = 28),
  [696] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_switch, 4),
  [698] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_switch, 4),
  [700] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_switch_condition, 4, .production_id = 30),
  [702] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_switch_condition, 4, .production_id = 30),
  [704] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_definition, 5, .production_id = 16),
  [706] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_definition, 5, .production_id = 16),
  [708] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_takes, 2),
  [710] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_takes, 2),
  [712] = {.entry = {.count = 1, .reusable = true}}, SHIFT(326),
  [714] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_switch_condition, 4, .production_id = 31),
  [716] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_switch_condition, 4, .production_id = 31),
  [718] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_switch_repeat1, 1),
  [720] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_switch_repeat1, 1),
  [722] = {.entry = {.count = 1, .reusable = false}}, SHIFT(13),
  [724] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__table_reference, 1, .production_id = 3),
  [726] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__table_reference, 1, .production_id = 3),
  [728] = {.entry = {.count = 1, .reusable = true}}, SHIFT(349),
  [730] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sorts, 4),
  [732] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sorts, 4),
  [734] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_aggregate, 6),
  [736] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_aggregate, 6),
  [738] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sorts, 2),
  [740] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sorts, 2),
  [742] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__table_selection, 1, .production_id = 2),
  [744] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__table_selection, 1, .production_id = 2),
  [746] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sorts, 3),
  [748] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sorts, 3),
  [750] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__table_selection, 3, .production_id = 10),
  [752] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__table_selection, 3, .production_id = 10),
  [754] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_aggregate, 4),
  [756] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_aggregate, 4),
  [758] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_aggregate, 5),
  [760] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_aggregate, 5),
  [762] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sorts, 5),
  [764] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sorts, 5),
  [766] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_aggregate, 3),
  [768] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_aggregate, 3),
  [770] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [772] = {.entry = {.count = 1, .reusable = true}}, SHIFT(200),
  [774] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sorts, 6),
  [776] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sorts, 6),
  [778] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_conditions, 3),
  [780] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_conditions, 3),
  [782] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_append, 2, .production_id = 1),
  [784] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_append, 2, .production_id = 1),
  [786] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__triple_quote_string, 3),
  [788] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__triple_quote_string, 3),
  [790] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_derives, 4),
  [792] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_derives, 4),
  [794] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_group, 6),
  [796] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_group, 6),
  [798] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_transforms_repeat1, 1),
  [800] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_transforms_repeat1, 1),
  [802] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_group, 7),
  [804] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_group, 7),
  [806] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_conditions, 5),
  [808] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_conditions, 5),
  [810] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__boolean_expression, 3, .production_id = 17),
  [812] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__boolean_expression, 3, .production_id = 17),
  [814] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_derives, 6),
  [816] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_derives, 6),
  [818] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select, 5),
  [820] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_select, 5),
  [822] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_from, 2, .production_id = 1),
  [824] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_from, 2, .production_id = 1),
  [826] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_joins, 3, .production_id = 9),
  [828] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_joins, 3, .production_id = 9),
  [830] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_aggregate_repeat1, 2),
  [832] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_conditions, 4),
  [834] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_conditions, 4),
  [836] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_group, 5),
  [838] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_group, 5),
  [840] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_filter, 2, .production_id = 4),
  [842] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_filter, 2, .production_id = 4),
  [844] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select, 6),
  [846] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_select, 6),
  [848] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_from_text, 2),
  [850] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_from_text, 2),
  [852] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__self_join, 4),
  [854] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__self_join, 4),
  [856] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_group, 9),
  [858] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_group, 9),
  [860] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select, 7),
  [862] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_select, 7),
  [864] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select, 2),
  [866] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_select, 2),
  [868] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_derives, 2),
  [870] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_derives, 2),
  [872] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_derives, 7),
  [874] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_derives, 7),
  [876] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_from_text, 5),
  [878] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_from_text, 5),
  [880] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_conditions, 2),
  [882] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_conditions, 2),
  [884] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [886] = {.entry = {.count = 1, .reusable = true}}, SHIFT(207),
  [888] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_joins, 4, .production_id = 14),
  [890] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_joins, 4, .production_id = 14),
  [892] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select, 4),
  [894] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_select, 4),
  [896] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select, 3),
  [898] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_select, 3),
  [900] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_derives, 8),
  [902] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_derives, 8),
  [904] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_conditions, 1),
  [906] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_conditions, 1),
  [908] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_derives, 3),
  [910] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_derives, 3),
  [912] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_derives, 5),
  [914] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_derives, 5),
  [916] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_group, 8),
  [918] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_group, 8),
  [920] = {.entry = {.count = 1, .reusable = true}}, SHIFT(372),
  [922] = {.entry = {.count = 1, .reusable = true}}, SHIFT(348),
  [924] = {.entry = {.count = 1, .reusable = true}}, SHIFT(482),
  [926] = {.entry = {.count = 1, .reusable = true}}, SHIFT(483),
  [928] = {.entry = {.count = 1, .reusable = true}}, SHIFT(318),
  [930] = {.entry = {.count = 1, .reusable = true}}, SHIFT(452),
  [932] = {.entry = {.count = 1, .reusable = true}}, SHIFT(250),
  [934] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_conditions_repeat1, 2),
  [936] = {.entry = {.count = 1, .reusable = true}}, SHIFT(260),
  [938] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [940] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_aggregate_operation, 2),
  [942] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__aggregate_count, 2),
  [944] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [946] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__friendly_number, 2), SHIFT_REPEAT(280),
  [949] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__friendly_number, 2), SHIFT_REPEAT(280),
  [952] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [954] = {.entry = {.count = 1, .reusable = true}}, SHIFT(240),
  [956] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [958] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [960] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [962] = {.entry = {.count = 1, .reusable = true}}, SHIFT(258),
  [964] = {.entry = {.count = 1, .reusable = true}}, SHIFT(259),
  [966] = {.entry = {.count = 1, .reusable = true}}, SHIFT(215),
  [968] = {.entry = {.count = 1, .reusable = true}}, SHIFT(194),
  [970] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 1),
  [972] = {.entry = {.count = 1, .reusable = true}}, SHIFT(322),
  [974] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 2),
  [976] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_program_repeat2, 2),
  [978] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat2, 2), SHIFT_REPEAT(335),
  [981] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat2, 2), SHIFT_REPEAT(383),
  [984] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat2, 2), SHIFT_REPEAT(371),
  [987] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat2, 2), SHIFT_REPEAT(374),
  [990] = {.entry = {.count = 1, .reusable = true}}, SHIFT(314),
  [992] = {.entry = {.count = 1, .reusable = true}}, SHIFT(213),
  [994] = {.entry = {.count = 1, .reusable = true}}, SHIFT(227),
  [996] = {.entry = {.count = 1, .reusable = true}}, SHIFT(244),
  [998] = {.entry = {.count = 1, .reusable = true}}, SHIFT(211),
  [1000] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_group_repeat2, 2), SHIFT_REPEAT(449),
  [1003] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_group_repeat2, 2), SHIFT_REPEAT(305),
  [1006] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_group_repeat2, 2), SHIFT_REPEAT(306),
  [1009] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_group_repeat2, 2), SHIFT_REPEAT(314),
  [1012] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_group_repeat2, 2),
  [1014] = {.entry = {.count = 1, .reusable = true}}, SHIFT(222),
  [1016] = {.entry = {.count = 1, .reusable = true}}, SHIFT(418),
  [1018] = {.entry = {.count = 1, .reusable = true}}, SHIFT(198),
  [1020] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [1022] = {.entry = {.count = 1, .reusable = true}}, SHIFT(205),
  [1024] = {.entry = {.count = 1, .reusable = true}}, SHIFT(202),
  [1026] = {.entry = {.count = 1, .reusable = true}}, SHIFT(366),
  [1028] = {.entry = {.count = 1, .reusable = true}}, SHIFT(408),
  [1030] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2),
  [1032] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2),
  [1034] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(399),
  [1037] = {.entry = {.count = 1, .reusable = true}}, SHIFT(295),
  [1039] = {.entry = {.count = 1, .reusable = false}}, SHIFT(318),
  [1041] = {.entry = {.count = 1, .reusable = false}}, SHIFT(431),
  [1043] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__friendly_number, 2), SHIFT_REPEAT(318),
  [1046] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__friendly_number, 2), SHIFT_REPEAT(318),
  [1049] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_window_definitions_repeat1, 2), SHIFT_REPEAT(443),
  [1052] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_window_definitions_repeat1, 2),
  [1054] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [1056] = {.entry = {.count = 1, .reusable = true}}, SHIFT(481),
  [1058] = {.entry = {.count = 1, .reusable = true}}, SHIFT(347),
  [1060] = {.entry = {.count = 1, .reusable = true}}, SHIFT(443),
  [1062] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 1),
  [1064] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 1),
  [1066] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pipeline, 2),
  [1068] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pipeline, 2),
  [1070] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_prql, 4, .production_id = 12),
  [1072] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_prql, 4, .production_id = 12),
  [1074] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_window_definitions, 1),
  [1076] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_prql, 4, .production_id = 13),
  [1078] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_prql, 4, .production_id = 13),
  [1080] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_function_definition_repeat1, 2),
  [1082] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_definition_repeat1, 2), SHIFT_REPEAT(481),
  [1085] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_definition_repeat1, 2), SHIFT_REPEAT(347),
  [1088] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_target, 1),
  [1090] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_target, 1),
  [1092] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__window_definition, 3),
  [1094] = {.entry = {.count = 1, .reusable = true}}, SHIFT(377),
  [1096] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_group_repeat2, 1),
  [1098] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable, 5, .production_id = 11),
  [1100] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable, 5, .production_id = 11),
  [1102] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_program_repeat2, 1),
  [1104] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_program_repeat2, 1),
  [1106] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable, 6, .production_id = 11),
  [1108] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable, 6, .production_id = 11),
  [1110] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_window, 5),
  [1112] = {.entry = {.count = 1, .reusable = true}}, SHIFT(424),
  [1114] = {.entry = {.count = 1, .reusable = false}}, SHIFT(52),
  [1116] = {.entry = {.count = 1, .reusable = true}}, SHIFT(475),
  [1118] = {.entry = {.count = 1, .reusable = true}}, SHIFT(469),
  [1120] = {.entry = {.count = 1, .reusable = true}}, SHIFT(461),
  [1122] = {.entry = {.count = 1, .reusable = true}}, SHIFT(384),
  [1124] = {.entry = {.count = 1, .reusable = true}}, SHIFT(401),
  [1126] = {.entry = {.count = 1, .reusable = true}}, SHIFT(344),
  [1128] = {.entry = {.count = 1, .reusable = true}}, SHIFT(453),
  [1130] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_window_definitions_repeat1, 1),
  [1132] = {.entry = {.count = 1, .reusable = true}}, SHIFT(245),
  [1134] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter, 1),
  [1136] = {.entry = {.count = 1, .reusable = true}}, SHIFT(429),
  [1138] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__inner_triple_quotes, 2), SHIFT_REPEAT(406),
  [1141] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__inner_triple_quotes, 2),
  [1143] = {.entry = {.count = 1, .reusable = false}}, SHIFT(423),
  [1145] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_sorts_repeat1, 2), SHIFT_REPEAT(307),
  [1148] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_sorts_repeat1, 2),
  [1150] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_conditions_repeat1, 2), SHIFT_REPEAT(69),
  [1153] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [1155] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_group_repeat1, 2), SHIFT_REPEAT(47),
  [1158] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_group_repeat1, 2),
  [1160] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_function_definition_repeat1, 1),
  [1162] = {.entry = {.count = 1, .reusable = true}}, SHIFT(323),
  [1164] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [1166] = {.entry = {.count = 1, .reusable = false}}, SHIFT(406),
  [1168] = {.entry = {.count = 1, .reusable = false}}, SHIFT(209),
  [1170] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_switch_repeat2, 2), SHIFT_REPEAT(44),
  [1173] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_direction, 1),
  [1175] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [1177] = {.entry = {.count = 1, .reusable = true}}, SHIFT(473),
  [1179] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter, 3, .production_id = 15),
  [1181] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_derives_repeat1, 2), SHIFT_REPEAT(43),
  [1184] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_derives_repeat1, 2),
  [1186] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [1188] = {.entry = {.count = 1, .reusable = false}}, SHIFT(89),
  [1190] = {.entry = {.count = 1, .reusable = true}}, SHIFT(413),
  [1192] = {.entry = {.count = 1, .reusable = true}}, SHIFT(402),
  [1194] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [1196] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [1198] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [1200] = {.entry = {.count = 1, .reusable = true}}, SHIFT(231),
  [1202] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [1204] = {.entry = {.count = 1, .reusable = true}}, SHIFT(210),
  [1206] = {.entry = {.count = 1, .reusable = true}}, SHIFT(301),
  [1208] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [1210] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [1212] = {.entry = {.count = 1, .reusable = true}}, SHIFT(302),
  [1214] = {.entry = {.count = 1, .reusable = true}}, SHIFT(192),
  [1216] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_aggregate_repeat1, 2), SHIFT_REPEAT(6),
  [1219] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [1221] = {.entry = {.count = 1, .reusable = false}}, SHIFT(87),
  [1223] = {.entry = {.count = 1, .reusable = true}}, SHIFT(465),
  [1225] = {.entry = {.count = 1, .reusable = true}}, SHIFT(464),
  [1227] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__join_definition, 3),
  [1229] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [1231] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__inner_triple_quotes, 1),
  [1233] = {.entry = {.count = 1, .reusable = true}}, SHIFT(395),
  [1235] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [1237] = {.entry = {.count = 1, .reusable = true}}, SHIFT(338),
  [1239] = {.entry = {.count = 1, .reusable = true}}, SHIFT(407),
  [1241] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [1243] = {.entry = {.count = 1, .reusable = true}}, SHIFT(498),
  [1245] = {.entry = {.count = 1, .reusable = true}}, SHIFT(334),
  [1247] = {.entry = {.count = 1, .reusable = true}}, SHIFT(300),
  [1249] = {.entry = {.count = 1, .reusable = false}}, SHIFT(503),
  [1251] = {.entry = {.count = 1, .reusable = true}}, SHIFT(415),
  [1253] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [1255] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [1257] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [1259] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [1261] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [1263] = {.entry = {.count = 1, .reusable = true}}, SHIFT(345),
  [1265] = {.entry = {.count = 1, .reusable = true}}, SHIFT(409),
  [1267] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [1269] = {.entry = {.count = 1, .reusable = true}}, SHIFT(296),
  [1271] = {.entry = {.count = 1, .reusable = true}}, SHIFT(298),
  [1273] = {.entry = {.count = 1, .reusable = true}}, SHIFT(378),
  [1275] = {.entry = {.count = 1, .reusable = true}}, SHIFT(410),
  [1277] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [1279] = {.entry = {.count = 1, .reusable = false}}, SHIFT(425),
  [1281] = {.entry = {.count = 1, .reusable = false}}, SHIFT(426),
  [1283] = {.entry = {.count = 1, .reusable = false}}, SHIFT(427),
  [1285] = {.entry = {.count = 1, .reusable = false}}, SHIFT(428),
  [1287] = {.entry = {.count = 1, .reusable = true}}, SHIFT(303),
  [1289] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [1291] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [1293] = {.entry = {.count = 1, .reusable = true}}, SHIFT(188),
  [1295] = {.entry = {.count = 1, .reusable = true}}, SHIFT(185),
  [1297] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [1299] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [1301] = {.entry = {.count = 1, .reusable = true}}, SHIFT(183),
  [1303] = {.entry = {.count = 1, .reusable = true}}, SHIFT(381),
  [1305] = {.entry = {.count = 1, .reusable = true}}, SHIFT(385),
  [1307] = {.entry = {.count = 1, .reusable = true}}, SHIFT(386),
  [1309] = {.entry = {.count = 1, .reusable = true}}, SHIFT(182),
  [1311] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [1313] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [1315] = {.entry = {.count = 1, .reusable = true}}, SHIFT(226),
  [1317] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [1319] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [1321] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [1323] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [1325] = {.entry = {.count = 1, .reusable = true}}, SHIFT(285),
  [1327] = {.entry = {.count = 1, .reusable = true}}, SHIFT(396),
  [1329] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [1331] = {.entry = {.count = 1, .reusable = true}}, SHIFT(336),
  [1333] = {.entry = {.count = 1, .reusable = true}}, SHIFT(265),
  [1335] = {.entry = {.count = 1, .reusable = true}}, SHIFT(279),
  [1337] = {.entry = {.count = 1, .reusable = true}}, SHIFT(277),
  [1339] = {.entry = {.count = 1, .reusable = true}}, SHIFT(269),
  [1341] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [1343] = {.entry = {.count = 1, .reusable = true}}, SHIFT(299),
  [1345] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [1347] = {.entry = {.count = 1, .reusable = true}}, SHIFT(162),
  [1349] = {.entry = {.count = 1, .reusable = true}}, SHIFT(164),
  [1351] = {.entry = {.count = 1, .reusable = true}}, SHIFT(167),
  [1353] = {.entry = {.count = 1, .reusable = true}}, SHIFT(249),
  [1355] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [1357] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [1359] = {.entry = {.count = 1, .reusable = true}}, SHIFT(412),
  [1361] = {.entry = {.count = 1, .reusable = false}}, SHIFT(454),
  [1363] = {.entry = {.count = 1, .reusable = false}}, SHIFT(455),
  [1365] = {.entry = {.count = 1, .reusable = true}}, SHIFT(360),
  [1367] = {.entry = {.count = 1, .reusable = true}}, SHIFT(458),
  [1369] = {.entry = {.count = 1, .reusable = false}}, SHIFT(462),
  [1371] = {.entry = {.count = 1, .reusable = false}}, SHIFT(463),
  [1373] = {.entry = {.count = 1, .reusable = true}}, SHIFT(448),
  [1375] = {.entry = {.count = 1, .reusable = true}}, SHIFT(466),
  [1377] = {.entry = {.count = 1, .reusable = false}}, SHIFT(470),
  [1379] = {.entry = {.count = 1, .reusable = false}}, SHIFT(471),
  [1381] = {.entry = {.count = 1, .reusable = true}}, SHIFT(472),
  [1383] = {.entry = {.count = 1, .reusable = false}}, SHIFT(476),
  [1385] = {.entry = {.count = 1, .reusable = false}}, SHIFT(477),
  [1387] = {.entry = {.count = 1, .reusable = true}}, SHIFT(478),
  [1389] = {.entry = {.count = 1, .reusable = true}}, SHIFT(479),
  [1391] = {.entry = {.count = 1, .reusable = true}}, SHIFT(480),
  [1393] = {.entry = {.count = 1, .reusable = true}}, SHIFT(445),
  [1395] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [1397] = {.entry = {.count = 1, .reusable = true}}, SHIFT(297),
  [1399] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 2),
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
