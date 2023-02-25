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
#define STATE_COUNT 502
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 180
#define ALIAS_COUNT 0
#define TOKEN_COUNT 100
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
  anon_sym_SQUOTE = 67,
  aux_sym__single_quote_string_token1 = 68,
  aux_sym__inner_triple_quotes_token1 = 69,
  anon_sym_DQUOTE_DQUOTE_DQUOTE = 70,
  anon_sym_f_DQUOTE = 71,
  anon_sym_f_DQUOTE_DQUOTE_DQUOTE = 72,
  anon_sym_s_DQUOTE = 73,
  anon_sym_s_DQUOTE_DQUOTE_DQUOTE = 74,
  sym__natural_number = 75,
  anon_sym__ = 76,
  anon_sym_DOT = 77,
  anon_sym_BQUOTE = 78,
  sym__identifier = 79,
  sym__identifier_dot = 80,
  anon_sym_DOT_DOT = 81,
  anon_sym_STAR = 82,
  anon_sym_SLASH = 83,
  anon_sym_PIPE = 84,
  anon_sym_BANG_EQ = 85,
  anon_sym_GT = 86,
  anon_sym_GT_EQ = 87,
  anon_sym_LT = 88,
  anon_sym_LT_EQ = 89,
  anon_sym_QMARK_QMARK = 90,
  aux_sym__date_token1 = 91,
  aux_sym__date_token2 = 92,
  anon_sym_AT = 93,
  aux_sym__time_token1 = 94,
  anon_sym_T = 95,
  anon_sym_Z = 96,
  anon_sym_POUND = 97,
  aux_sym_comment_token1 = 98,
  sym_bang = 99,
  sym_program = 100,
  sym_prql = 101,
  sym_target = 102,
  sym_pipeline = 103,
  sym_variable = 104,
  sym_function_definition = 105,
  sym_parameter = 106,
  sym__call_parameter = 107,
  sym_function_call = 108,
  sym_from_text = 109,
  sym_transforms = 110,
  sym_from = 111,
  sym__table_selection = 112,
  sym__table_reference = 113,
  sym_derives = 114,
  sym_filter = 115,
  sym__boolean_expression = 116,
  sym_switch = 117,
  sym_switch_condition = 118,
  sym_aggregate = 119,
  sym_aggregate_operation = 120,
  sym__aggregate_count = 121,
  sym_sorts = 122,
  sym__sort_instruction = 123,
  sym_direction = 124,
  sym_takes = 125,
  sym_window = 126,
  sym_window_definitions = 127,
  sym__window_definition = 128,
  sym_group = 129,
  sym_joins = 130,
  sym__join_definition = 131,
  sym_conditions = 132,
  sym__self_join = 133,
  sym_select = 134,
  sym_term = 135,
  sym__expression = 136,
  sym_literal = 137,
  sym_f_string = 138,
  sym_s_string = 139,
  sym__double_quote_string = 140,
  sym__single_quote_string = 141,
  aux_sym__inner_triple_quotes = 142,
  sym__triple_quote_string = 143,
  sym__double_f_string = 144,
  sym__triple_f_string = 145,
  sym__double_s_string = 146,
  sym__triple_s_string = 147,
  sym__literal_string = 148,
  aux_sym__friendly_number = 149,
  sym_integer = 150,
  sym_decimal_number = 151,
  sym_field = 152,
  sym__alias_identifier = 153,
  sym_identifier = 154,
  sym_range = 155,
  sym__agg_rhs_assignment = 156,
  sym_assignment = 157,
  sym_binary_expression = 158,
  sym__date = 159,
  sym_date = 160,
  sym__time = 161,
  sym_time = 162,
  sym_timestamp = 163,
  sym_timezone = 164,
  sym_comment = 165,
  aux_sym_program_repeat1 = 166,
  aux_sym_program_repeat2 = 167,
  aux_sym_function_definition_repeat1 = 168,
  aux_sym_function_call_repeat1 = 169,
  aux_sym_transforms_repeat1 = 170,
  aux_sym_derives_repeat1 = 171,
  aux_sym_switch_repeat1 = 172,
  aux_sym_switch_repeat2 = 173,
  aux_sym_aggregate_repeat1 = 174,
  aux_sym_sorts_repeat1 = 175,
  aux_sym_window_definitions_repeat1 = 176,
  aux_sym_group_repeat1 = 177,
  aux_sym_group_repeat2 = 178,
  aux_sym_conditions_repeat1 = 179,
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
      if (eof) ADVANCE(409);
      if (lookahead == '!') ADVANCE(754);
      if (lookahead == '"') ADVANCE(507);
      if (lookahead == '#') ADVANCE(747);
      if (lookahead == '\'') ADVANCE(511);
      if (lookahead == '(') ADVANCE(497);
      if (lookahead == ')') ADVANCE(498);
      if (lookahead == '*') ADVANCE(730);
      if (lookahead == '+') ADVANCE(505);
      if (lookahead == ',') ADVANCE(501);
      if (lookahead == '-') ADVANCE(504);
      if (lookahead == '.') ADVANCE(527);
      if (lookahead == '/') ADVANCE(731);
      if (lookahead == ':') ADVANCE(479);
      if (lookahead == '<') ADVANCE(736);
      if (lookahead == '=') ADVANCE(496);
      if (lookahead == '>') ADVANCE(734);
      if (lookahead == '?') ADVANCE(26);
      if (lookahead == '@') ADVANCE(742);
      if (lookahead == 'A') ADVANCE(69);
      if (lookahead == 'C') ADVANCE(122);
      if (lookahead == 'D') ADVANCE(57);
      if (lookahead == 'E') ADVANCE(171);
      if (lookahead == 'F') ADVANCE(28);
      if (lookahead == 'G') ADVANCE(136);
      if (lookahead == 'I') ADVANCE(106);
      if (lookahead == 'J') ADVANCE(128);
      if (lookahead == 'L') ADVANCE(46);
      if (lookahead == 'M') ADVANCE(29);
      if (lookahead == 'N') ADVANCE(164);
      if (lookahead == 'O') ADVANCE(132);
      if (lookahead == 'P') ADVANCE(133);
      if (lookahead == 'R') ADVANCE(79);
      if (lookahead == 'S') ADVANCE(59);
      if (lookahead == 'T') ADVANCE(744);
      if (lookahead == 'V') ADVANCE(61);
      if (lookahead == 'W') ADVANCE(83);
      if (lookahead == 'Z') ADVANCE(746);
      if (lookahead == '[') ADVANCE(500);
      if (lookahead == ']') ADVANCE(502);
      if (lookahead == '_') ADVANCE(525);
      if (lookahead == '`') ADVANCE(528);
      if (lookahead == 'a') ADVANCE(232);
      if (lookahead == 'c') ADVANCE(306);
      if (lookahead == 'd') ADVANCE(216);
      if (lookahead == 'e') ADVANCE(378);
      if (lookahead == 'f') ADVANCE(10);
      if (lookahead == 'g') ADVANCE(327);
      if (lookahead == 'i') ADVANCE(287);
      if (lookahead == 'j') ADVANCE(315);
      if (lookahead == 'l') ADVANCE(201);
      if (lookahead == 'm') ADVANCE(176);
      if (lookahead == 'n') ADVANCE(366);
      if (lookahead == 'o') ADVANCE(322);
      if (lookahead == 'p') ADVANCE(323);
      if (lookahead == 'r') ADVANCE(246);
      if (lookahead == 's') ADVANCE(11);
      if (lookahead == 't') ADVANCE(175);
      if (lookahead == 'v') ADVANCE(220);
      if (lookahead == 'w') ADVANCE(250);
      if (lookahead == '|') ADVANCE(732);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(404)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(524);
      END_STATE();
    case 1:
      if (lookahead == '!') ADVANCE(23);
      if (lookahead == '"') ADVANCE(507);
      if (lookahead == '#') ADVANCE(747);
      if (lookahead == '\'') ADVANCE(511);
      if (lookahead == '(') ADVANCE(497);
      if (lookahead == ')') ADVANCE(498);
      if (lookahead == '*') ADVANCE(730);
      if (lookahead == '+') ADVANCE(505);
      if (lookahead == ',') ADVANCE(501);
      if (lookahead == '-') ADVANCE(503);
      if (lookahead == '.') ADVANCE(527);
      if (lookahead == '/') ADVANCE(731);
      if (lookahead == '<') ADVANCE(736);
      if (lookahead == '=') ADVANCE(24);
      if (lookahead == '>') ADVANCE(734);
      if (lookahead == '?') ADVANCE(26);
      if (lookahead == 'A') ADVANCE(592);
      if (lookahead == 'F') ADVANCE(536);
      if (lookahead == 'N') ADVANCE(624);
      if (lookahead == 'O') ADVANCE(598);
      if (lookahead == 'T') ADVANCE(601);
      if (lookahead == ']') ADVANCE(502);
      if (lookahead == '_') ADVANCE(526);
      if (lookahead == '`') ADVANCE(528);
      if (lookahead == 'a') ADVANCE(690);
      if (lookahead == 'f') ADVANCE(634);
      if (lookahead == 'n') ADVANCE(719);
      if (lookahead == 'o') ADVANCE(697);
      if (lookahead == 't') ADVANCE(699);
      if (lookahead == '|') ADVANCE(732);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(386)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(524);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(727);
      END_STATE();
    case 2:
      if (lookahead == '!') ADVANCE(23);
      if (lookahead == '"') ADVANCE(507);
      if (lookahead == '#') ADVANCE(747);
      if (lookahead == '\'') ADVANCE(511);
      if (lookahead == ')') ADVANCE(498);
      if (lookahead == '*') ADVANCE(730);
      if (lookahead == '+') ADVANCE(505);
      if (lookahead == '-') ADVANCE(503);
      if (lookahead == '.') ADVANCE(527);
      if (lookahead == '/') ADVANCE(731);
      if (lookahead == '<') ADVANCE(736);
      if (lookahead == '=') ADVANCE(24);
      if (lookahead == '>') ADVANCE(734);
      if (lookahead == '?') ADVANCE(26);
      if (lookahead == 'A') ADVANCE(567);
      if (lookahead == 'D') ADVANCE(563);
      if (lookahead == 'F') ADVANCE(535);
      if (lookahead == 'G') ADVANCE(605);
      if (lookahead == 'J') ADVANCE(596);
      if (lookahead == 'N') ADVANCE(624);
      if (lookahead == 'O') ADVANCE(598);
      if (lookahead == 'S') ADVANCE(564);
      if (lookahead == 'T') ADVANCE(539);
      if (lookahead == '_') ADVANCE(526);
      if (lookahead == '`') ADVANCE(528);
      if (lookahead == 'a') ADVANCE(666);
      if (lookahead == 'd') ADVANCE(661);
      if (lookahead == 'f') ADVANCE(633);
      if (lookahead == 'g') ADVANCE(703);
      if (lookahead == 'j') ADVANCE(694);
      if (lookahead == 'n') ADVANCE(719);
      if (lookahead == 'o') ADVANCE(697);
      if (lookahead == 's') ADVANCE(662);
      if (lookahead == 't') ADVANCE(637);
      if (lookahead == '|') ADVANCE(732);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(384)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(524);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(727);
      END_STATE();
    case 3:
      if (lookahead == '!') ADVANCE(753);
      if (lookahead == '"') ADVANCE(507);
      if (lookahead == '#') ADVANCE(747);
      if (lookahead == '\'') ADVANCE(511);
      if (lookahead == '(') ADVANCE(497);
      if (lookahead == ',') ADVANCE(501);
      if (lookahead == '-') ADVANCE(503);
      if (lookahead == '.') ADVANCE(527);
      if (lookahead == '=') ADVANCE(24);
      if (lookahead == '@') ADVANCE(742);
      if (lookahead == 'F') ADVANCE(536);
      if (lookahead == 'N') ADVANCE(624);
      if (lookahead == 'T') ADVANCE(601);
      if (lookahead == '[') ADVANCE(500);
      if (lookahead == ']') ADVANCE(502);
      if (lookahead == '_') ADVANCE(526);
      if (lookahead == '`') ADVANCE(528);
      if (lookahead == 'f') ADVANCE(529);
      if (lookahead == 'n') ADVANCE(719);
      if (lookahead == 's') ADVANCE(533);
      if (lookahead == 't') ADVANCE(699);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(385)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(524);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(727);
      END_STATE();
    case 4:
      if (lookahead == '"') ADVANCE(507);
      if (lookahead == '#') ADVANCE(747);
      if (lookahead == '\'') ADVANCE(511);
      if (lookahead == '(') ADVANCE(497);
      if (lookahead == ')') ADVANCE(498);
      if (lookahead == ',') ADVANCE(501);
      if (lookahead == '-') ADVANCE(503);
      if (lookahead == '.') ADVANCE(527);
      if (lookahead == ':') ADVANCE(479);
      if (lookahead == 'F') ADVANCE(536);
      if (lookahead == 'N') ADVANCE(624);
      if (lookahead == 'T') ADVANCE(601);
      if (lookahead == ']') ADVANCE(502);
      if (lookahead == '_') ADVANCE(526);
      if (lookahead == '`') ADVANCE(528);
      if (lookahead == 'f') ADVANCE(634);
      if (lookahead == 'n') ADVANCE(719);
      if (lookahead == 't') ADVANCE(699);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(388)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(524);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(727);
      END_STATE();
    case 5:
      if (lookahead == '"') ADVANCE(507);
      if (lookahead == '#') ADVANCE(747);
      if (lookahead == '\'') ADVANCE(511);
      if (lookahead == '(') ADVANCE(497);
      if (lookahead == ',') ADVANCE(501);
      if (lookahead == '-') ADVANCE(503);
      if (lookahead == '.') ADVANCE(527);
      if (lookahead == '@') ADVANCE(742);
      if (lookahead == 'A') ADVANCE(626);
      if (lookahead == 'C') ADVANCE(593);
      if (lookahead == 'F') ADVANCE(536);
      if (lookahead == 'M') ADVANCE(537);
      if (lookahead == 'N') ADVANCE(624);
      if (lookahead == 'S') ADVANCE(608);
      if (lookahead == 'T') ADVANCE(601);
      if (lookahead == ']') ADVANCE(502);
      if (lookahead == '_') ADVANCE(526);
      if (lookahead == '`') ADVANCE(528);
      if (lookahead == 'a') ADVANCE(721);
      if (lookahead == 'c') ADVANCE(691);
      if (lookahead == 'f') ADVANCE(529);
      if (lookahead == 'm') ADVANCE(635);
      if (lookahead == 'n') ADVANCE(719);
      if (lookahead == 's') ADVANCE(530);
      if (lookahead == 't') ADVANCE(699);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(382)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(524);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(727);
      END_STATE();
    case 6:
      if (lookahead == '"') ADVANCE(507);
      if (lookahead == '#') ADVANCE(747);
      if (lookahead == '\'') ADVANCE(511);
      if (lookahead == '(') ADVANCE(497);
      if (lookahead == '-') ADVANCE(503);
      if (lookahead == '.') ADVANCE(527);
      if (lookahead == '@') ADVANCE(742);
      if (lookahead == 'A') ADVANCE(629);
      if (lookahead == 'F') ADVANCE(536);
      if (lookahead == 'N') ADVANCE(624);
      if (lookahead == 'S') ADVANCE(620);
      if (lookahead == 'T') ADVANCE(601);
      if (lookahead == '_') ADVANCE(526);
      if (lookahead == '`') ADVANCE(528);
      if (lookahead == 'a') ADVANCE(724);
      if (lookahead == 'f') ADVANCE(529);
      if (lookahead == 'n') ADVANCE(719);
      if (lookahead == 's') ADVANCE(531);
      if (lookahead == 't') ADVANCE(699);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(383)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(524);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(727);
      END_STATE();
    case 7:
      if (lookahead == '"') ADVANCE(507);
      if (lookahead == '#') ADVANCE(747);
      if (lookahead == '\'') ADVANCE(511);
      if (lookahead == '(') ADVANCE(497);
      if (lookahead == '-') ADVANCE(503);
      if (lookahead == '.') ADVANCE(527);
      if (lookahead == '@') ADVANCE(742);
      if (lookahead == 'A') ADVANCE(629);
      if (lookahead == 'F') ADVANCE(536);
      if (lookahead == 'N') ADVANCE(624);
      if (lookahead == 'S') ADVANCE(621);
      if (lookahead == 'T') ADVANCE(601);
      if (lookahead == '_') ADVANCE(526);
      if (lookahead == '`') ADVANCE(528);
      if (lookahead == 'a') ADVANCE(724);
      if (lookahead == 'f') ADVANCE(529);
      if (lookahead == 'n') ADVANCE(719);
      if (lookahead == 's') ADVANCE(532);
      if (lookahead == 't') ADVANCE(699);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(397)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(524);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(727);
      END_STATE();
    case 8:
      if (lookahead == '"') ADVANCE(507);
      if (lookahead == '#') ADVANCE(747);
      if (lookahead == '\'') ADVANCE(511);
      if (lookahead == ')') ADVANCE(498);
      if (lookahead == '-') ADVANCE(503);
      if (lookahead == '.') ADVANCE(527);
      if (lookahead == ':') ADVANCE(479);
      if (lookahead == 'A') ADVANCE(568);
      if (lookahead == 'D') ADVANCE(563);
      if (lookahead == 'F') ADVANCE(535);
      if (lookahead == 'G') ADVANCE(605);
      if (lookahead == 'J') ADVANCE(596);
      if (lookahead == 'N') ADVANCE(624);
      if (lookahead == 'S') ADVANCE(564);
      if (lookahead == 'T') ADVANCE(539);
      if (lookahead == '_') ADVANCE(526);
      if (lookahead == '`') ADVANCE(528);
      if (lookahead == 'a') ADVANCE(667);
      if (lookahead == 'd') ADVANCE(661);
      if (lookahead == 'f') ADVANCE(633);
      if (lookahead == 'g') ADVANCE(703);
      if (lookahead == 'j') ADVANCE(694);
      if (lookahead == 'n') ADVANCE(719);
      if (lookahead == 's') ADVANCE(662);
      if (lookahead == 't') ADVANCE(637);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(387)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(524);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(727);
      END_STATE();
    case 9:
      if (lookahead == '"') ADVANCE(507);
      if (lookahead == '#') ADVANCE(747);
      if (lookahead == '\'') ADVANCE(511);
      if (lookahead == '-') ADVANCE(503);
      if (lookahead == '.') ADVANCE(527);
      if (lookahead == 'F') ADVANCE(27);
      if (lookahead == 'N') ADVANCE(164);
      if (lookahead == 'T') ADVANCE(31);
      if (lookahead == 'V') ADVANCE(61);
      if (lookahead == '_') ADVANCE(525);
      if (lookahead == 'f') ADVANCE(174);
      if (lookahead == 'n') ADVANCE(366);
      if (lookahead == 't') ADVANCE(180);
      if (lookahead == 'v') ADVANCE(220);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(389)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(524);
      END_STATE();
    case 10:
      if (lookahead == '"') ADVANCE(520);
      if (lookahead == 'a') ADVANCE(268);
      if (lookahead == 'i') ADVANCE(269);
      if (lookahead == 'o') ADVANCE(328);
      if (lookahead == 'r') ADVANCE(308);
      if (lookahead == 'u') ADVANCE(279);
      END_STATE();
    case 11:
      if (lookahead == '"') ADVANCE(522);
      if (lookahead == 'e') ADVANCE(276);
      if (lookahead == 'i') ADVANCE(195);
      if (lookahead == 'o') ADVANCE(333);
      if (lookahead == 'q') ADVANCE(270);
      if (lookahead == 't') ADVANCE(199);
      if (lookahead == 'u') ADVANCE(284);
      if (lookahead == 'w') ADVANCE(251);
      END_STATE();
    case 12:
      if (lookahead == '"') ADVANCE(521);
      END_STATE();
    case 13:
      if (lookahead == '"') ADVANCE(523);
      END_STATE();
    case 14:
      if (lookahead == '"') ADVANCE(519);
      END_STATE();
    case 15:
      if (lookahead == '"') ADVANCE(14);
      END_STATE();
    case 16:
      if (lookahead == '#') ADVANCE(747);
      if (lookahead == '+') ADVANCE(505);
      if (lookahead == ',') ADVANCE(501);
      if (lookahead == '-') ADVANCE(504);
      if (lookahead == '.') ADVANCE(527);
      if (lookahead == ':') ADVANCE(479);
      if (lookahead == '[') ADVANCE(500);
      if (lookahead == ']') ADVANCE(502);
      if (lookahead == '`') ADVANCE(528);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(390)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(524);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(727);
      END_STATE();
    case 17:
      if (lookahead == '#') ADVANCE(747);
      if (lookahead == '-') ADVANCE(25);
      if (lookahead == '.') ADVANCE(527);
      if (lookahead == '_') ADVANCE(526);
      if (lookahead == '`') ADVANCE(528);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(391)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(524);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(727);
      END_STATE();
    case 18:
      if (lookahead == '#') ADVANCE(747);
      if (lookahead == 'S') ADVANCE(578);
      if (lookahead == '`') ADVANCE(528);
      if (lookahead == 's') ADVANCE(676);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(392)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(398);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(727);
      END_STATE();
    case 19:
      if (lookahead == '#') ADVANCE(747);
      if (lookahead == '`') ADVANCE(528);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(394)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(741);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(727);
      END_STATE();
    case 20:
      if (lookahead == '#') ADVANCE(747);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(396)
      if (lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(728);
      END_STATE();
    case 21:
      if (lookahead == '.') ADVANCE(179);
      END_STATE();
    case 22:
      if (lookahead == '.') ADVANCE(729);
      END_STATE();
    case 23:
      if (lookahead == '=') ADVANCE(733);
      END_STATE();
    case 24:
      if (lookahead == '=') ADVANCE(506);
      END_STATE();
    case 25:
      if (lookahead == '>') ADVANCE(499);
      END_STATE();
    case 26:
      if (lookahead == '?') ADVANCE(738);
      END_STATE();
    case 27:
      if (lookahead == 'A') ADVANCE(93);
      END_STATE();
    case 28:
      if (lookahead == 'A') ADVANCE(93);
      if (lookahead == 'I') ADVANCE(94);
      if (lookahead == 'O') ADVANCE(137);
      if (lookahead == 'R') ADVANCE(123);
      if (lookahead == 'U') ADVANCE(99);
      END_STATE();
    case 29:
      if (lookahead == 'A') ADVANCE(172);
      if (lookahead == 'I') ADVANCE(108);
      END_STATE();
    case 30:
      if (lookahead == 'A') ADVANCE(153);
      END_STATE();
    case 31:
      if (lookahead == 'A') ADVANCE(140);
      if (lookahead == 'R') ADVANCE(166);
      END_STATE();
    case 32:
      if (lookahead == 'A') ADVANCE(114);
      END_STATE();
    case 33:
      if (lookahead == 'A') ADVANCE(75);
      END_STATE();
    case 34:
      if (lookahead == 'A') ADVANCE(160);
      END_STATE();
    case 35:
      if (lookahead == 'C') ADVANCE(472);
      END_STATE();
    case 36:
      if (lookahead == 'C') ADVANCE(77);
      END_STATE();
    case 37:
      if (lookahead == 'C') ADVANCE(154);
      END_STATE();
    case 38:
      if (lookahead == 'C') ADVANCE(157);
      END_STATE();
    case 39:
      if (lookahead == 'D') ADVANCE(461);
      END_STATE();
    case 40:
      if (lookahead == 'D') ADVANCE(47);
      END_STATE();
    case 41:
      if (lookahead == 'D') ADVANCE(121);
      END_STATE();
    case 42:
      if (lookahead == 'D') ADVANCE(84);
      END_STATE();
    case 43:
      if (lookahead == 'D') ADVANCE(56);
      END_STATE();
    case 44:
      if (lookahead == 'D') ADVANCE(43);
      END_STATE();
    case 45:
      if (lookahead == 'D') ADVANCE(88);
      END_STATE();
    case 46:
      if (lookahead == 'E') ADVANCE(67);
      END_STATE();
    case 47:
      if (lookahead == 'E') ADVANCE(455);
      END_STATE();
    case 48:
      if (lookahead == 'E') ADVANCE(424);
      END_STATE();
    case 49:
      if (lookahead == 'E') ADVANCE(431);
      END_STATE();
    case 50:
      if (lookahead == 'E') ADVANCE(433);
      END_STATE();
    case 51:
      if (lookahead == 'E') ADVANCE(416);
      END_STATE();
    case 52:
      if (lookahead == 'E') ADVANCE(437);
      END_STATE();
    case 53:
      if (lookahead == 'E') ADVANCE(420);
      END_STATE();
    case 54:
      if (lookahead == 'E') ADVANCE(37);
      END_STATE();
    case 55:
      if (lookahead == 'E') ADVANCE(173);
      END_STATE();
    case 56:
      if (lookahead == 'E') ADVANCE(168);
      END_STATE();
    case 57:
      if (lookahead == 'E') ADVANCE(139);
      END_STATE();
    case 58:
      if (lookahead == 'E') ADVANCE(76);
      END_STATE();
    case 59:
      if (lookahead == 'E') ADVANCE(98);
      if (lookahead == 'I') ADVANCE(40);
      if (lookahead == 'O') ADVANCE(142);
      if (lookahead == 'T') ADVANCE(44);
      if (lookahead == 'U') ADVANCE(103);
      if (lookahead == 'W') ADVANCE(85);
      END_STATE();
    case 60:
      if (lookahead == 'E') ADVANCE(98);
      if (lookahead == 'O') ADVANCE(142);
      END_STATE();
    case 61:
      if (lookahead == 'E') ADVANCE(141);
      END_STATE();
    case 62:
      if (lookahead == 'E') ADVANCE(138);
      if (lookahead == 'G') ADVANCE(449);
      END_STATE();
    case 63:
      if (lookahead == 'E') ADVANCE(134);
      END_STATE();
    case 64:
      if (lookahead == 'E') ADVANCE(155);
      END_STATE();
    case 65:
      if (lookahead == 'E') ADVANCE(135);
      END_STATE();
    case 66:
      if (lookahead == 'E') ADVANCE(148);
      END_STATE();
    case 67:
      if (lookahead == 'F') ADVANCE(149);
      if (lookahead == 'T') ADVANCE(474);
      END_STATE();
    case 68:
      if (lookahead == 'G') ADVANCE(73);
      if (lookahead == 'N') ADVANCE(39);
      END_STATE();
    case 69:
      if (lookahead == 'G') ADVANCE(73);
      if (lookahead == 'N') ADVANCE(39);
      if (lookahead == 'V') ADVANCE(62);
      END_STATE();
    case 70:
      if (lookahead == 'G') ADVANCE(78);
      END_STATE();
    case 71:
      if (lookahead == 'G') ADVANCE(467);
      END_STATE();
    case 72:
      if (lookahead == 'G') ADVANCE(469);
      END_STATE();
    case 73:
      if (lookahead == 'G') ADVANCE(143);
      END_STATE();
    case 74:
      if (lookahead == 'G') ADVANCE(64);
      END_STATE();
    case 75:
      if (lookahead == 'G') ADVANCE(52);
      END_STATE();
    case 76:
      if (lookahead == 'G') ADVANCE(34);
      END_STATE();
    case 77:
      if (lookahead == 'H') ADVANCE(435);
      END_STATE();
    case 78:
      if (lookahead == 'H') ADVANCE(152);
      END_STATE();
    case 79:
      if (lookahead == 'I') ADVANCE(70);
      if (lookahead == 'O') ADVANCE(101);
      END_STATE();
    case 80:
      if (lookahead == 'I') ADVANCE(169);
      END_STATE();
    case 81:
      if (lookahead == 'I') ADVANCE(94);
      if (lookahead == 'O') ADVANCE(137);
      if (lookahead == 'R') ADVANCE(123);
      if (lookahead == 'U') ADVANCE(99);
      END_STATE();
    case 82:
      if (lookahead == 'I') ADVANCE(94);
      if (lookahead == 'R') ADVANCE(123);
      if (lookahead == 'U') ADVANCE(107);
      END_STATE();
    case 83:
      if (lookahead == 'I') ADVANCE(112);
      END_STATE();
    case 84:
      if (lookahead == 'I') ADVANCE(147);
      END_STATE();
    case 85:
      if (lookahead == 'I') ADVANCE(158);
      END_STATE();
    case 86:
      if (lookahead == 'I') ADVANCE(109);
      END_STATE();
    case 87:
      if (lookahead == 'I') ADVANCE(113);
      END_STATE();
    case 88:
      if (lookahead == 'I') ADVANCE(116);
      END_STATE();
    case 89:
      if (lookahead == 'I') ADVANCE(118);
      END_STATE();
    case 90:
      if (lookahead == 'I') ADVANCE(126);
      END_STATE();
    case 91:
      if (lookahead == 'K') ADVANCE(48);
      END_STATE();
    case 92:
      if (lookahead == 'K') ADVANCE(48);
      if (lookahead == 'R') ADVANCE(74);
      END_STATE();
    case 93:
      if (lookahead == 'L') ADVANCE(146);
      END_STATE();
    case 94:
      if (lookahead == 'L') ADVANCE(161);
      END_STATE();
    case 95:
      if (lookahead == 'L') ADVANCE(460);
      END_STATE();
    case 96:
      if (lookahead == 'L') ADVANCE(470);
      END_STATE();
    case 97:
      if (lookahead == 'L') ADVANCE(476);
      END_STATE();
    case 98:
      if (lookahead == 'L') ADVANCE(54);
      END_STATE();
    case 99:
      if (lookahead == 'L') ADVANCE(95);
      if (lookahead == 'N') ADVANCE(35);
      END_STATE();
    case 100:
      if (lookahead == 'L') ADVANCE(96);
      END_STATE();
    case 101:
      if (lookahead == 'L') ADVANCE(102);
      if (lookahead == 'W') ADVANCE(144);
      END_STATE();
    case 102:
      if (lookahead == 'L') ADVANCE(87);
      END_STATE();
    case 103:
      if (lookahead == 'M') ADVANCE(451);
      END_STATE();
    case 104:
      if (lookahead == 'M') ADVANCE(410);
      END_STATE();
    case 105:
      if (lookahead == 'M') ADVANCE(30);
      END_STATE();
    case 106:
      if (lookahead == 'N') ADVANCE(465);
      END_STATE();
    case 107:
      if (lookahead == 'N') ADVANCE(35);
      END_STATE();
    case 108:
      if (lookahead == 'N') ADVANCE(439);
      END_STATE();
    case 109:
      if (lookahead == 'N') ADVANCE(427);
      END_STATE();
    case 110:
      if (lookahead == 'N') ADVANCE(495);
      END_STATE();
    case 111:
      if (lookahead == 'N') ADVANCE(477);
      END_STATE();
    case 112:
      if (lookahead == 'N') ADVANCE(41);
      END_STATE();
    case 113:
      if (lookahead == 'N') ADVANCE(71);
      END_STATE();
    case 114:
      if (lookahead == 'N') ADVANCE(45);
      END_STATE();
    case 115:
      if (lookahead == 'N') ADVANCE(151);
      END_STATE();
    case 116:
      if (lookahead == 'N') ADVANCE(72);
      END_STATE();
    case 117:
      if (lookahead == 'N') ADVANCE(119);
      END_STATE();
    case 118:
      if (lookahead == 'N') ADVANCE(38);
      END_STATE();
    case 119:
      if (lookahead == 'N') ADVANCE(63);
      END_STATE();
    case 120:
      if (lookahead == 'O') ADVANCE(101);
      END_STATE();
    case 121:
      if (lookahead == 'O') ADVANCE(170);
      END_STATE();
    case 122:
      if (lookahead == 'O') ADVANCE(165);
      if (lookahead == 'S') ADVANCE(167);
      END_STATE();
    case 123:
      if (lookahead == 'O') ADVANCE(104);
      END_STATE();
    case 124:
      if (lookahead == 'O') ADVANCE(163);
      END_STATE();
    case 125:
      if (lookahead == 'O') ADVANCE(110);
      END_STATE();
    case 126:
      if (lookahead == 'O') ADVANCE(111);
      END_STATE();
    case 127:
      if (lookahead == 'O') ADVANCE(86);
      END_STATE();
    case 128:
      if (lookahead == 'O') ADVANCE(86);
      if (lookahead == 'S') ADVANCE(125);
      END_STATE();
    case 129:
      if (lookahead == 'P') ADVANCE(32);
      END_STATE();
    case 130:
      if (lookahead == 'P') ADVANCE(418);
      END_STATE();
    case 131:
      if (lookahead == 'Q') ADVANCE(97);
      END_STATE();
    case 132:
      if (lookahead == 'R') ADVANCE(463);
      END_STATE();
    case 133:
      if (lookahead == 'R') ADVANCE(131);
      END_STATE();
    case 134:
      if (lookahead == 'R') ADVANCE(457);
      END_STATE();
    case 135:
      if (lookahead == 'R') ADVANCE(414);
      END_STATE();
    case 136:
      if (lookahead == 'R') ADVANCE(124);
      END_STATE();
    case 137:
      if (lookahead == 'R') ADVANCE(105);
      END_STATE();
    case 138:
      if (lookahead == 'R') ADVANCE(33);
      END_STATE();
    case 139:
      if (lookahead == 'R') ADVANCE(80);
      END_STATE();
    case 140:
      if (lookahead == 'R') ADVANCE(74);
      END_STATE();
    case 141:
      if (lookahead == 'R') ADVANCE(145);
      END_STATE();
    case 142:
      if (lookahead == 'R') ADVANCE(150);
      END_STATE();
    case 143:
      if (lookahead == 'R') ADVANCE(58);
      END_STATE();
    case 144:
      if (lookahead == 'S') ADVANCE(468);
      END_STATE();
    case 145:
      if (lookahead == 'S') ADVANCE(90);
      END_STATE();
    case 146:
      if (lookahead == 'S') ADVANCE(50);
      END_STATE();
    case 147:
      if (lookahead == 'S') ADVANCE(162);
      END_STATE();
    case 148:
      if (lookahead == 'T') ADVANCE(474);
      END_STATE();
    case 149:
      if (lookahead == 'T') ADVANCE(458);
      END_STATE();
    case 150:
      if (lookahead == 'T') ADVANCE(422);
      END_STATE();
    case 151:
      if (lookahead == 'T') ADVANCE(445);
      END_STATE();
    case 152:
      if (lookahead == 'T') ADVANCE(459);
      END_STATE();
    case 153:
      if (lookahead == 'T') ADVANCE(493);
      END_STATE();
    case 154:
      if (lookahead == 'T') ADVANCE(429);
      END_STATE();
    case 155:
      if (lookahead == 'T') ADVANCE(478);
      END_STATE();
    case 156:
      if (lookahead == 'T') ADVANCE(491);
      END_STATE();
    case 157:
      if (lookahead == 'T') ADVANCE(453);
      END_STATE();
    case 158:
      if (lookahead == 'T') ADVANCE(36);
      END_STATE();
    case 159:
      if (lookahead == 'T') ADVANCE(55);
      END_STATE();
    case 160:
      if (lookahead == 'T') ADVANCE(53);
      END_STATE();
    case 161:
      if (lookahead == 'T') ADVANCE(65);
      END_STATE();
    case 162:
      if (lookahead == 'T') ADVANCE(89);
      END_STATE();
    case 163:
      if (lookahead == 'U') ADVANCE(130);
      END_STATE();
    case 164:
      if (lookahead == 'U') ADVANCE(100);
      END_STATE();
    case 165:
      if (lookahead == 'U') ADVANCE(115);
      END_STATE();
    case 166:
      if (lookahead == 'U') ADVANCE(49);
      END_STATE();
    case 167:
      if (lookahead == 'V') ADVANCE(494);
      END_STATE();
    case 168:
      if (lookahead == 'V') ADVANCE(447);
      END_STATE();
    case 169:
      if (lookahead == 'V') ADVANCE(51);
      END_STATE();
    case 170:
      if (lookahead == 'W') ADVANCE(426);
      END_STATE();
    case 171:
      if (lookahead == 'X') ADVANCE(129);
      END_STATE();
    case 172:
      if (lookahead == 'X') ADVANCE(441);
      END_STATE();
    case 173:
      if (lookahead == 'X') ADVANCE(156);
      END_STATE();
    case 174:
      if (lookahead == 'a') ADVANCE(268);
      END_STATE();
    case 175:
      if (lookahead == 'a') ADVANCE(265);
      if (lookahead == 'r') ADVANCE(369);
      END_STATE();
    case 176:
      if (lookahead == 'a') ADVANCE(379);
      if (lookahead == 'i') ADVANCE(288);
      END_STATE();
    case 177:
      if (lookahead == 'a') ADVANCE(267);
      END_STATE();
    case 178:
      if (lookahead == 'a') ADVANCE(352);
      END_STATE();
    case 179:
      if (lookahead == 'a') ADVANCE(300);
      if (lookahead == 'b') ADVANCE(254);
      if (lookahead == 'c') ADVANCE(278);
      if (lookahead == 'd') ADVANCE(368);
      if (lookahead == 'g') ADVANCE(222);
      if (lookahead == 'h') ADVANCE(259);
      if (lookahead == 'm') ADVANCE(340);
      if (lookahead == 'p') ADVANCE(310);
      if (lookahead == 's') ADVANCE(297);
      END_STATE();
    case 180:
      if (lookahead == 'a') ADVANCE(331);
      if (lookahead == 'r') ADVANCE(369);
      END_STATE();
    case 181:
      if (lookahead == 'a') ADVANCE(295);
      END_STATE();
    case 182:
      if (lookahead == 'a') ADVANCE(239);
      END_STATE();
    case 183:
      if (lookahead == 'a') ADVANCE(264);
      END_STATE();
    case 184:
      if (lookahead == 'a') ADVANCE(360);
      END_STATE();
    case 185:
      if (lookahead == 'b') ADVANCE(490);
      END_STATE();
    case 186:
      if (lookahead == 'c') ADVANCE(472);
      END_STATE();
    case 187:
      if (lookahead == 'c') ADVANCE(266);
      END_STATE();
    case 188:
      if (lookahead == 'c') ADVANCE(483);
      END_STATE();
    case 189:
      if (lookahead == 'c') ADVANCE(242);
      END_STATE();
    case 190:
      if (lookahead == 'c') ADVANCE(263);
      END_STATE();
    case 191:
      if (lookahead == 'c') ADVANCE(353);
      END_STATE();
    case 192:
      if (lookahead == 'c') ADVANCE(356);
      END_STATE();
    case 193:
      if (lookahead == 'd') ADVANCE(461);
      END_STATE();
    case 194:
      if (lookahead == 'd') ADVANCE(185);
      END_STATE();
    case 195:
      if (lookahead == 'd') ADVANCE(202);
      END_STATE();
    case 196:
      if (lookahead == 'd') ADVANCE(305);
      END_STATE();
    case 197:
      if (lookahead == 'd') ADVANCE(261);
      END_STATE();
    case 198:
      if (lookahead == 'd') ADVANCE(215);
      END_STATE();
    case 199:
      if (lookahead == 'd') ADVANCE(198);
      END_STATE();
    case 200:
      if (lookahead == 'd') ADVANCE(257);
      END_STATE();
    case 201:
      if (lookahead == 'e') ADVANCE(229);
      END_STATE();
    case 202:
      if (lookahead == 'e') ADVANCE(455);
      END_STATE();
    case 203:
      if (lookahead == 'e') ADVANCE(424);
      END_STATE();
    case 204:
      if (lookahead == 'e') ADVANCE(431);
      END_STATE();
    case 205:
      if (lookahead == 'e') ADVANCE(433);
      END_STATE();
    case 206:
      if (lookahead == 'e') ADVANCE(416);
      END_STATE();
    case 207:
      if (lookahead == 'e') ADVANCE(437);
      END_STATE();
    case 208:
      if (lookahead == 'e') ADVANCE(484);
      END_STATE();
    case 209:
      if (lookahead == 'e') ADVANCE(420);
      END_STATE();
    case 210:
      if (lookahead == 'e') ADVANCE(488);
      END_STATE();
    case 211:
      if (lookahead == 'e') ADVANCE(489);
      END_STATE();
    case 212:
      if (lookahead == 'e') ADVANCE(482);
      END_STATE();
    case 213:
      if (lookahead == 'e') ADVANCE(191);
      END_STATE();
    case 214:
      if (lookahead == 'e') ADVANCE(380);
      END_STATE();
    case 215:
      if (lookahead == 'e') ADVANCE(373);
      END_STATE();
    case 216:
      if (lookahead == 'e') ADVANCE(330);
      END_STATE();
    case 217:
      if (lookahead == 'e') ADVANCE(241);
      END_STATE();
    case 218:
      if (lookahead == 'e') ADVANCE(276);
      if (lookahead == 'o') ADVANCE(333);
      END_STATE();
    case 219:
      if (lookahead == 'e') ADVANCE(338);
      END_STATE();
    case 220:
      if (lookahead == 'e') ADVANCE(332);
      END_STATE();
    case 221:
      if (lookahead == 'e') ADVANCE(329);
      if (lookahead == 'g') ADVANCE(449);
      END_STATE();
    case 222:
      if (lookahead == 'e') ADVANCE(302);
      END_STATE();
    case 223:
      if (lookahead == 'e') ADVANCE(324);
      END_STATE();
    case 224:
      if (lookahead == 'e') ADVANCE(354);
      END_STATE();
    case 225:
      if (lookahead == 'e') ADVANCE(325);
      END_STATE();
    case 226:
      if (lookahead == 'e') ADVANCE(335);
      END_STATE();
    case 227:
      if (lookahead == 'e') ADVANCE(326);
      END_STATE();
    case 228:
      if (lookahead == 'e') ADVANCE(348);
      END_STATE();
    case 229:
      if (lookahead == 'f') ADVANCE(349);
      if (lookahead == 't') ADVANCE(474);
      END_STATE();
    case 230:
      if (lookahead == 'f') ADVANCE(277);
      END_STATE();
    case 231:
      if (lookahead == 'g') ADVANCE(237);
      if (lookahead == 'n') ADVANCE(193);
      END_STATE();
    case 232:
      if (lookahead == 'g') ADVANCE(237);
      if (lookahead == 'n') ADVANCE(193);
      if (lookahead == 'v') ADVANCE(221);
      END_STATE();
    case 233:
      if (lookahead == 'g') ADVANCE(243);
      END_STATE();
    case 234:
      if (lookahead == 'g') ADVANCE(467);
      END_STATE();
    case 235:
      if (lookahead == 'g') ADVANCE(469);
      END_STATE();
    case 236:
      if (lookahead == 'g') ADVANCE(318);
      END_STATE();
    case 237:
      if (lookahead == 'g') ADVANCE(334);
      END_STATE();
    case 238:
      if (lookahead == 'g') ADVANCE(224);
      END_STATE();
    case 239:
      if (lookahead == 'g') ADVANCE(207);
      END_STATE();
    case 240:
      if (lookahead == 'g') ADVANCE(336);
      END_STATE();
    case 241:
      if (lookahead == 'g') ADVANCE(184);
      END_STATE();
    case 242:
      if (lookahead == 'h') ADVANCE(435);
      END_STATE();
    case 243:
      if (lookahead == 'h') ADVANCE(351);
      END_STATE();
    case 244:
      if (lookahead == 'h') ADVANCE(312);
      END_STATE();
    case 245:
      if (lookahead == 'i') ADVANCE(480);
      END_STATE();
    case 246:
      if (lookahead == 'i') ADVANCE(233);
      if (lookahead == 'o') ADVANCE(281);
      END_STATE();
    case 247:
      if (lookahead == 'i') ADVANCE(374);
      END_STATE();
    case 248:
      if (lookahead == 'i') ADVANCE(269);
      if (lookahead == 'o') ADVANCE(328);
      if (lookahead == 'r') ADVANCE(308);
      if (lookahead == 'u') ADVANCE(279);
      END_STATE();
    case 249:
      if (lookahead == 'i') ADVANCE(269);
      if (lookahead == 'r') ADVANCE(308);
      if (lookahead == 'u') ADVANCE(289);
      END_STATE();
    case 250:
      if (lookahead == 'i') ADVANCE(293);
      END_STATE();
    case 251:
      if (lookahead == 'i') ADVANCE(358);
      END_STATE();
    case 252:
      if (lookahead == 'i') ADVANCE(290);
      END_STATE();
    case 253:
      if (lookahead == 'i') ADVANCE(190);
      END_STATE();
    case 254:
      if (lookahead == 'i') ADVANCE(236);
      END_STATE();
    case 255:
      if (lookahead == 'i') ADVANCE(188);
      END_STATE();
    case 256:
      if (lookahead == 'i') ADVANCE(294);
      END_STATE();
    case 257:
      if (lookahead == 'i') ADVANCE(298);
      END_STATE();
    case 258:
      if (lookahead == 'i') ADVANCE(299);
      END_STATE();
    case 259:
      if (lookahead == 'i') ADVANCE(375);
      END_STATE();
    case 260:
      if (lookahead == 'i') ADVANCE(313);
      END_STATE();
    case 261:
      if (lookahead == 'i') ADVANCE(344);
      END_STATE();
    case 262:
      if (lookahead == 'i') ADVANCE(361);
      END_STATE();
    case 263:
      if (lookahead == 'k') ADVANCE(244);
      END_STATE();
    case 264:
      if (lookahead == 'k') ADVANCE(203);
      END_STATE();
    case 265:
      if (lookahead == 'k') ADVANCE(203);
      if (lookahead == 'r') ADVANCE(238);
      END_STATE();
    case 266:
      if (lookahead == 'k') ADVANCE(194);
      END_STATE();
    case 267:
      if (lookahead == 'k') ADVANCE(211);
      END_STATE();
    case 268:
      if (lookahead == 'l') ADVANCE(341);
      END_STATE();
    case 269:
      if (lookahead == 'l') ADVANCE(363);
      END_STATE();
    case 270:
      if (lookahead == 'l') ADVANCE(21);
      END_STATE();
    case 271:
      if (lookahead == 'l') ADVANCE(460);
      END_STATE();
    case 272:
      if (lookahead == 'l') ADVANCE(470);
      END_STATE();
    case 273:
      if (lookahead == 'l') ADVANCE(476);
      END_STATE();
    case 274:
      if (lookahead == 'l') ADVANCE(485);
      END_STATE();
    case 275:
      if (lookahead == 'l') ADVANCE(486);
      END_STATE();
    case 276:
      if (lookahead == 'l') ADVANCE(213);
      END_STATE();
    case 277:
      if (lookahead == 'l') ADVANCE(177);
      END_STATE();
    case 278:
      if (lookahead == 'l') ADVANCE(253);
      END_STATE();
    case 279:
      if (lookahead == 'l') ADVANCE(271);
      if (lookahead == 'n') ADVANCE(186);
      END_STATE();
    case 280:
      if (lookahead == 'l') ADVANCE(272);
      END_STATE();
    case 281:
      if (lookahead == 'l') ADVANCE(283);
      if (lookahead == 'w') ADVANCE(337);
      END_STATE();
    case 282:
      if (lookahead == 'l') ADVANCE(262);
      END_STATE();
    case 283:
      if (lookahead == 'l') ADVANCE(256);
      END_STATE();
    case 284:
      if (lookahead == 'm') ADVANCE(451);
      END_STATE();
    case 285:
      if (lookahead == 'm') ADVANCE(411);
      END_STATE();
    case 286:
      if (lookahead == 'm') ADVANCE(178);
      END_STATE();
    case 287:
      if (lookahead == 'n') ADVANCE(466);
      END_STATE();
    case 288:
      if (lookahead == 'n') ADVANCE(439);
      END_STATE();
    case 289:
      if (lookahead == 'n') ADVANCE(186);
      END_STATE();
    case 290:
      if (lookahead == 'n') ADVANCE(427);
      END_STATE();
    case 291:
      if (lookahead == 'n') ADVANCE(495);
      END_STATE();
    case 292:
      if (lookahead == 'n') ADVANCE(477);
      END_STATE();
    case 293:
      if (lookahead == 'n') ADVANCE(196);
      END_STATE();
    case 294:
      if (lookahead == 'n') ADVANCE(234);
      END_STATE();
    case 295:
      if (lookahead == 'n') ADVANCE(200);
      END_STATE();
    case 296:
      if (lookahead == 'n') ADVANCE(357);
      END_STATE();
    case 297:
      if (lookahead == 'n') ADVANCE(307);
      if (lookahead == 'q') ADVANCE(282);
      END_STATE();
    case 298:
      if (lookahead == 'n') ADVANCE(235);
      END_STATE();
    case 299:
      if (lookahead == 'n') ADVANCE(192);
      END_STATE();
    case 300:
      if (lookahead == 'n') ADVANCE(342);
      END_STATE();
    case 301:
      if (lookahead == 'n') ADVANCE(223);
      END_STATE();
    case 302:
      if (lookahead == 'n') ADVANCE(226);
      END_STATE();
    case 303:
      if (lookahead == 'n') ADVANCE(301);
      END_STATE();
    case 304:
      if (lookahead == 'o') ADVANCE(281);
      END_STATE();
    case 305:
      if (lookahead == 'o') ADVANCE(376);
      END_STATE();
    case 306:
      if (lookahead == 'o') ADVANCE(367);
      if (lookahead == 's') ADVANCE(372);
      END_STATE();
    case 307:
      if (lookahead == 'o') ADVANCE(377);
      END_STATE();
    case 308:
      if (lookahead == 'o') ADVANCE(285);
      END_STATE();
    case 309:
      if (lookahead == 'o') ADVANCE(365);
      END_STATE();
    case 310:
      if (lookahead == 'o') ADVANCE(343);
      END_STATE();
    case 311:
      if (lookahead == 'o') ADVANCE(291);
      END_STATE();
    case 312:
      if (lookahead == 'o') ADVANCE(370);
      END_STATE();
    case 313:
      if (lookahead == 'o') ADVANCE(292);
      END_STATE();
    case 314:
      if (lookahead == 'o') ADVANCE(252);
      END_STATE();
    case 315:
      if (lookahead == 'o') ADVANCE(252);
      if (lookahead == 's') ADVANCE(311);
      END_STATE();
    case 316:
      if (lookahead == 'p') ADVANCE(181);
      END_STATE();
    case 317:
      if (lookahead == 'p') ADVANCE(418);
      END_STATE();
    case 318:
      if (lookahead == 'q') ADVANCE(371);
      END_STATE();
    case 319:
      if (lookahead == 'q') ADVANCE(273);
      END_STATE();
    case 320:
      if (lookahead == 'q') ADVANCE(274);
      END_STATE();
    case 321:
      if (lookahead == 'q') ADVANCE(275);
      END_STATE();
    case 322:
      if (lookahead == 'r') ADVANCE(463);
      END_STATE();
    case 323:
      if (lookahead == 'r') ADVANCE(319);
      END_STATE();
    case 324:
      if (lookahead == 'r') ADVANCE(457);
      END_STATE();
    case 325:
      if (lookahead == 'r') ADVANCE(414);
      END_STATE();
    case 326:
      if (lookahead == 'r') ADVANCE(381);
      END_STATE();
    case 327:
      if (lookahead == 'r') ADVANCE(309);
      END_STATE();
    case 328:
      if (lookahead == 'r') ADVANCE(286);
      END_STATE();
    case 329:
      if (lookahead == 'r') ADVANCE(182);
      END_STATE();
    case 330:
      if (lookahead == 'r') ADVANCE(247);
      END_STATE();
    case 331:
      if (lookahead == 'r') ADVANCE(238);
      END_STATE();
    case 332:
      if (lookahead == 'r') ADVANCE(339);
      END_STATE();
    case 333:
      if (lookahead == 'r') ADVANCE(350);
      END_STATE();
    case 334:
      if (lookahead == 'r') ADVANCE(217);
      END_STATE();
    case 335:
      if (lookahead == 'r') ADVANCE(255);
      END_STATE();
    case 336:
      if (lookahead == 'r') ADVANCE(219);
      END_STATE();
    case 337:
      if (lookahead == 's') ADVANCE(468);
      END_STATE();
    case 338:
      if (lookahead == 's') ADVANCE(487);
      END_STATE();
    case 339:
      if (lookahead == 's') ADVANCE(260);
      END_STATE();
    case 340:
      if (lookahead == 's') ADVANCE(346);
      if (lookahead == 'y') ADVANCE(347);
      END_STATE();
    case 341:
      if (lookahead == 's') ADVANCE(205);
      END_STATE();
    case 342:
      if (lookahead == 's') ADVANCE(245);
      END_STATE();
    case 343:
      if (lookahead == 's') ADVANCE(362);
      END_STATE();
    case 344:
      if (lookahead == 's') ADVANCE(364);
      END_STATE();
    case 345:
      if (lookahead == 's') ADVANCE(212);
      END_STATE();
    case 346:
      if (lookahead == 's') ADVANCE(320);
      END_STATE();
    case 347:
      if (lookahead == 's') ADVANCE(321);
      END_STATE();
    case 348:
      if (lookahead == 't') ADVANCE(474);
      END_STATE();
    case 349:
      if (lookahead == 't') ADVANCE(458);
      END_STATE();
    case 350:
      if (lookahead == 't') ADVANCE(422);
      END_STATE();
    case 351:
      if (lookahead == 't') ADVANCE(459);
      END_STATE();
    case 352:
      if (lookahead == 't') ADVANCE(493);
      END_STATE();
    case 353:
      if (lookahead == 't') ADVANCE(429);
      END_STATE();
    case 354:
      if (lookahead == 't') ADVANCE(478);
      END_STATE();
    case 355:
      if (lookahead == 't') ADVANCE(491);
      END_STATE();
    case 356:
      if (lookahead == 't') ADVANCE(453);
      END_STATE();
    case 357:
      if (lookahead == 't') ADVANCE(446);
      END_STATE();
    case 358:
      if (lookahead == 't') ADVANCE(189);
      END_STATE();
    case 359:
      if (lookahead == 't') ADVANCE(214);
      END_STATE();
    case 360:
      if (lookahead == 't') ADVANCE(209);
      END_STATE();
    case 361:
      if (lookahead == 't') ADVANCE(210);
      END_STATE();
    case 362:
      if (lookahead == 't') ADVANCE(240);
      END_STATE();
    case 363:
      if (lookahead == 't') ADVANCE(225);
      END_STATE();
    case 364:
      if (lookahead == 't') ADVANCE(258);
      END_STATE();
    case 365:
      if (lookahead == 'u') ADVANCE(317);
      END_STATE();
    case 366:
      if (lookahead == 'u') ADVANCE(280);
      END_STATE();
    case 367:
      if (lookahead == 'u') ADVANCE(296);
      END_STATE();
    case 368:
      if (lookahead == 'u') ADVANCE(187);
      END_STATE();
    case 369:
      if (lookahead == 'u') ADVANCE(204);
      END_STATE();
    case 370:
      if (lookahead == 'u') ADVANCE(345);
      END_STATE();
    case 371:
      if (lookahead == 'u') ADVANCE(227);
      END_STATE();
    case 372:
      if (lookahead == 'v') ADVANCE(494);
      END_STATE();
    case 373:
      if (lookahead == 'v') ADVANCE(447);
      END_STATE();
    case 374:
      if (lookahead == 'v') ADVANCE(206);
      END_STATE();
    case 375:
      if (lookahead == 'v') ADVANCE(208);
      END_STATE();
    case 376:
      if (lookahead == 'w') ADVANCE(426);
      END_STATE();
    case 377:
      if (lookahead == 'w') ADVANCE(230);
      END_STATE();
    case 378:
      if (lookahead == 'x') ADVANCE(316);
      END_STATE();
    case 379:
      if (lookahead == 'x') ADVANCE(441);
      END_STATE();
    case 380:
      if (lookahead == 'x') ADVANCE(355);
      END_STATE();
    case 381:
      if (lookahead == 'y') ADVANCE(481);
      END_STATE();
    case 382:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(382)
      if (lookahead == '"') ADVANCE(507);
      if (lookahead == '#') ADVANCE(747);
      if (lookahead == '\'') ADVANCE(511);
      if (lookahead == '(') ADVANCE(497);
      if (lookahead == ',') ADVANCE(501);
      if (lookahead == '-') ADVANCE(503);
      if (lookahead == '.') ADVANCE(527);
      if (lookahead == '@') ADVANCE(742);
      if (lookahead == 'A') ADVANCE(626);
      if (lookahead == 'C') ADVANCE(593);
      if (lookahead == 'F') ADVANCE(536);
      if (lookahead == 'M') ADVANCE(537);
      if (lookahead == 'N') ADVANCE(624);
      if (lookahead == 'S') ADVANCE(608);
      if (lookahead == 'T') ADVANCE(601);
      if (lookahead == ']') ADVANCE(502);
      if (lookahead == '_') ADVANCE(526);
      if (lookahead == '`') ADVANCE(528);
      if (lookahead == 'a') ADVANCE(721);
      if (lookahead == 'c') ADVANCE(691);
      if (lookahead == 'f') ADVANCE(529);
      if (lookahead == 'm') ADVANCE(635);
      if (lookahead == 'n') ADVANCE(719);
      if (lookahead == 's') ADVANCE(530);
      if (lookahead == 't') ADVANCE(699);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(524);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(727);
      END_STATE();
    case 383:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(383)
      if (lookahead == '"') ADVANCE(507);
      if (lookahead == '#') ADVANCE(747);
      if (lookahead == '\'') ADVANCE(511);
      if (lookahead == '(') ADVANCE(497);
      if (lookahead == '-') ADVANCE(503);
      if (lookahead == '.') ADVANCE(527);
      if (lookahead == '@') ADVANCE(742);
      if (lookahead == 'A') ADVANCE(629);
      if (lookahead == 'F') ADVANCE(536);
      if (lookahead == 'N') ADVANCE(624);
      if (lookahead == 'S') ADVANCE(620);
      if (lookahead == 'T') ADVANCE(601);
      if (lookahead == '_') ADVANCE(526);
      if (lookahead == '`') ADVANCE(528);
      if (lookahead == 'a') ADVANCE(724);
      if (lookahead == 'f') ADVANCE(529);
      if (lookahead == 'n') ADVANCE(719);
      if (lookahead == 's') ADVANCE(531);
      if (lookahead == 't') ADVANCE(699);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(524);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(727);
      END_STATE();
    case 384:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(384)
      if (lookahead == '!') ADVANCE(23);
      if (lookahead == '"') ADVANCE(507);
      if (lookahead == '#') ADVANCE(747);
      if (lookahead == '\'') ADVANCE(511);
      if (lookahead == ')') ADVANCE(498);
      if (lookahead == '*') ADVANCE(730);
      if (lookahead == '+') ADVANCE(505);
      if (lookahead == '-') ADVANCE(503);
      if (lookahead == '.') ADVANCE(527);
      if (lookahead == '/') ADVANCE(731);
      if (lookahead == '<') ADVANCE(736);
      if (lookahead == '=') ADVANCE(24);
      if (lookahead == '>') ADVANCE(734);
      if (lookahead == '?') ADVANCE(26);
      if (lookahead == 'A') ADVANCE(567);
      if (lookahead == 'D') ADVANCE(563);
      if (lookahead == 'F') ADVANCE(535);
      if (lookahead == 'G') ADVANCE(605);
      if (lookahead == 'J') ADVANCE(596);
      if (lookahead == 'N') ADVANCE(624);
      if (lookahead == 'O') ADVANCE(598);
      if (lookahead == 'S') ADVANCE(564);
      if (lookahead == 'T') ADVANCE(539);
      if (lookahead == '_') ADVANCE(526);
      if (lookahead == '`') ADVANCE(528);
      if (lookahead == 'a') ADVANCE(666);
      if (lookahead == 'd') ADVANCE(661);
      if (lookahead == 'f') ADVANCE(633);
      if (lookahead == 'g') ADVANCE(703);
      if (lookahead == 'j') ADVANCE(694);
      if (lookahead == 'n') ADVANCE(719);
      if (lookahead == 'o') ADVANCE(697);
      if (lookahead == 's') ADVANCE(662);
      if (lookahead == 't') ADVANCE(637);
      if (lookahead == '|') ADVANCE(732);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(524);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(727);
      END_STATE();
    case 385:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(385)
      if (lookahead == '!') ADVANCE(753);
      if (lookahead == '"') ADVANCE(507);
      if (lookahead == '#') ADVANCE(747);
      if (lookahead == '\'') ADVANCE(511);
      if (lookahead == '(') ADVANCE(497);
      if (lookahead == ',') ADVANCE(501);
      if (lookahead == '-') ADVANCE(503);
      if (lookahead == '.') ADVANCE(527);
      if (lookahead == '=') ADVANCE(24);
      if (lookahead == '@') ADVANCE(742);
      if (lookahead == 'F') ADVANCE(536);
      if (lookahead == 'N') ADVANCE(624);
      if (lookahead == 'T') ADVANCE(601);
      if (lookahead == '[') ADVANCE(500);
      if (lookahead == ']') ADVANCE(502);
      if (lookahead == '_') ADVANCE(526);
      if (lookahead == '`') ADVANCE(528);
      if (lookahead == 'f') ADVANCE(529);
      if (lookahead == 'n') ADVANCE(719);
      if (lookahead == 's') ADVANCE(533);
      if (lookahead == 't') ADVANCE(699);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(524);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(727);
      END_STATE();
    case 386:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(386)
      if (lookahead == '!') ADVANCE(23);
      if (lookahead == '"') ADVANCE(507);
      if (lookahead == '#') ADVANCE(747);
      if (lookahead == '\'') ADVANCE(511);
      if (lookahead == '(') ADVANCE(497);
      if (lookahead == ')') ADVANCE(498);
      if (lookahead == '*') ADVANCE(730);
      if (lookahead == '+') ADVANCE(505);
      if (lookahead == ',') ADVANCE(501);
      if (lookahead == '-') ADVANCE(503);
      if (lookahead == '.') ADVANCE(527);
      if (lookahead == '/') ADVANCE(731);
      if (lookahead == '<') ADVANCE(736);
      if (lookahead == '=') ADVANCE(24);
      if (lookahead == '>') ADVANCE(734);
      if (lookahead == '?') ADVANCE(26);
      if (lookahead == 'A') ADVANCE(592);
      if (lookahead == 'F') ADVANCE(536);
      if (lookahead == 'N') ADVANCE(624);
      if (lookahead == 'O') ADVANCE(598);
      if (lookahead == 'T') ADVANCE(601);
      if (lookahead == ']') ADVANCE(502);
      if (lookahead == '_') ADVANCE(526);
      if (lookahead == '`') ADVANCE(528);
      if (lookahead == 'a') ADVANCE(690);
      if (lookahead == 'f') ADVANCE(634);
      if (lookahead == 'n') ADVANCE(719);
      if (lookahead == 'o') ADVANCE(697);
      if (lookahead == 't') ADVANCE(699);
      if (lookahead == '|') ADVANCE(732);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(524);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(727);
      END_STATE();
    case 387:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(387)
      if (lookahead == '"') ADVANCE(507);
      if (lookahead == '#') ADVANCE(747);
      if (lookahead == '\'') ADVANCE(511);
      if (lookahead == ')') ADVANCE(498);
      if (lookahead == '-') ADVANCE(503);
      if (lookahead == '.') ADVANCE(527);
      if (lookahead == ':') ADVANCE(479);
      if (lookahead == 'A') ADVANCE(568);
      if (lookahead == 'D') ADVANCE(563);
      if (lookahead == 'F') ADVANCE(535);
      if (lookahead == 'G') ADVANCE(605);
      if (lookahead == 'J') ADVANCE(596);
      if (lookahead == 'N') ADVANCE(624);
      if (lookahead == 'S') ADVANCE(564);
      if (lookahead == 'T') ADVANCE(539);
      if (lookahead == '_') ADVANCE(526);
      if (lookahead == '`') ADVANCE(528);
      if (lookahead == 'a') ADVANCE(667);
      if (lookahead == 'd') ADVANCE(661);
      if (lookahead == 'f') ADVANCE(633);
      if (lookahead == 'g') ADVANCE(703);
      if (lookahead == 'j') ADVANCE(694);
      if (lookahead == 'n') ADVANCE(719);
      if (lookahead == 's') ADVANCE(662);
      if (lookahead == 't') ADVANCE(637);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(524);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(727);
      END_STATE();
    case 388:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(388)
      if (lookahead == '"') ADVANCE(507);
      if (lookahead == '#') ADVANCE(747);
      if (lookahead == '\'') ADVANCE(511);
      if (lookahead == '(') ADVANCE(497);
      if (lookahead == ')') ADVANCE(498);
      if (lookahead == ',') ADVANCE(501);
      if (lookahead == '-') ADVANCE(503);
      if (lookahead == '.') ADVANCE(527);
      if (lookahead == ':') ADVANCE(479);
      if (lookahead == 'F') ADVANCE(536);
      if (lookahead == 'N') ADVANCE(624);
      if (lookahead == 'T') ADVANCE(601);
      if (lookahead == ']') ADVANCE(502);
      if (lookahead == '_') ADVANCE(526);
      if (lookahead == '`') ADVANCE(528);
      if (lookahead == 'f') ADVANCE(634);
      if (lookahead == 'n') ADVANCE(719);
      if (lookahead == 't') ADVANCE(699);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(524);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(727);
      END_STATE();
    case 389:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(389)
      if (lookahead == '"') ADVANCE(507);
      if (lookahead == '#') ADVANCE(747);
      if (lookahead == '\'') ADVANCE(511);
      if (lookahead == '-') ADVANCE(503);
      if (lookahead == '.') ADVANCE(527);
      if (lookahead == 'F') ADVANCE(27);
      if (lookahead == 'N') ADVANCE(164);
      if (lookahead == 'T') ADVANCE(31);
      if (lookahead == 'V') ADVANCE(61);
      if (lookahead == '_') ADVANCE(525);
      if (lookahead == 'f') ADVANCE(174);
      if (lookahead == 'n') ADVANCE(366);
      if (lookahead == 't') ADVANCE(180);
      if (lookahead == 'v') ADVANCE(220);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(524);
      END_STATE();
    case 390:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(390)
      if (lookahead == '#') ADVANCE(747);
      if (lookahead == '+') ADVANCE(505);
      if (lookahead == ',') ADVANCE(501);
      if (lookahead == '-') ADVANCE(504);
      if (lookahead == '.') ADVANCE(527);
      if (lookahead == ':') ADVANCE(479);
      if (lookahead == '[') ADVANCE(500);
      if (lookahead == ']') ADVANCE(502);
      if (lookahead == '`') ADVANCE(528);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(524);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(727);
      END_STATE();
    case 391:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(391)
      if (lookahead == '#') ADVANCE(747);
      if (lookahead == '-') ADVANCE(25);
      if (lookahead == '.') ADVANCE(527);
      if (lookahead == '_') ADVANCE(526);
      if (lookahead == '`') ADVANCE(528);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(524);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(727);
      END_STATE();
    case 392:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(392)
      if (lookahead == '#') ADVANCE(747);
      if (lookahead == 'S') ADVANCE(578);
      if (lookahead == '`') ADVANCE(528);
      if (lookahead == 's') ADVANCE(676);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(398);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(727);
      END_STATE();
    case 393:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(517);
      if (lookahead == '"') ADVANCE(516);
      if (lookahead == '#') ADVANCE(747);
      if (lookahead != 0) ADVANCE(515);
      END_STATE();
    case 394:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(394)
      if (lookahead == '#') ADVANCE(747);
      if (lookahead == '`') ADVANCE(528);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(741);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(727);
      END_STATE();
    case 395:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(518);
      if (lookahead == '#') ADVANCE(747);
      if (lookahead != 0) ADVANCE(515);
      END_STATE();
    case 396:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(396)
      if (lookahead == '#') ADVANCE(747);
      if (lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(728);
      END_STATE();
    case 397:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(397)
      if (lookahead == '"') ADVANCE(507);
      if (lookahead == '#') ADVANCE(747);
      if (lookahead == '\'') ADVANCE(511);
      if (lookahead == '(') ADVANCE(497);
      if (lookahead == '-') ADVANCE(503);
      if (lookahead == '.') ADVANCE(527);
      if (lookahead == '@') ADVANCE(742);
      if (lookahead == 'A') ADVANCE(629);
      if (lookahead == 'F') ADVANCE(536);
      if (lookahead == 'N') ADVANCE(624);
      if (lookahead == 'S') ADVANCE(621);
      if (lookahead == 'T') ADVANCE(601);
      if (lookahead == '_') ADVANCE(526);
      if (lookahead == '`') ADVANCE(528);
      if (lookahead == 'a') ADVANCE(724);
      if (lookahead == 'f') ADVANCE(529);
      if (lookahead == 'n') ADVANCE(719);
      if (lookahead == 's') ADVANCE(532);
      if (lookahead == 't') ADVANCE(699);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(524);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(727);
      END_STATE();
    case 398:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(743);
      END_STATE();
    case 399:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(739);
      END_STATE();
    case 400:
      if (eof) ADVANCE(409);
      if (lookahead == '!') ADVANCE(23);
      if (lookahead == '"') ADVANCE(507);
      if (lookahead == '#') ADVANCE(747);
      if (lookahead == '\'') ADVANCE(511);
      if (lookahead == '*') ADVANCE(730);
      if (lookahead == '+') ADVANCE(505);
      if (lookahead == '-') ADVANCE(503);
      if (lookahead == '.') ADVANCE(527);
      if (lookahead == '/') ADVANCE(731);
      if (lookahead == '<') ADVANCE(736);
      if (lookahead == '=') ADVANCE(24);
      if (lookahead == '>') ADVANCE(734);
      if (lookahead == '?') ADVANCE(26);
      if (lookahead == 'A') ADVANCE(567);
      if (lookahead == 'D') ADVANCE(563);
      if (lookahead == 'F') ADVANCE(534);
      if (lookahead == 'G') ADVANCE(605);
      if (lookahead == 'J') ADVANCE(596);
      if (lookahead == 'L') ADVANCE(562);
      if (lookahead == 'N') ADVANCE(624);
      if (lookahead == 'O') ADVANCE(598);
      if (lookahead == 'S') ADVANCE(564);
      if (lookahead == 'T') ADVANCE(539);
      if (lookahead == '_') ADVANCE(526);
      if (lookahead == '`') ADVANCE(528);
      if (lookahead == 'a') ADVANCE(666);
      if (lookahead == 'd') ADVANCE(661);
      if (lookahead == 'f') ADVANCE(632);
      if (lookahead == 'g') ADVANCE(703);
      if (lookahead == 'j') ADVANCE(694);
      if (lookahead == 'l') ADVANCE(660);
      if (lookahead == 'n') ADVANCE(719);
      if (lookahead == 'o') ADVANCE(697);
      if (lookahead == 's') ADVANCE(662);
      if (lookahead == 't') ADVANCE(637);
      if (lookahead == '|') ADVANCE(732);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(405)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(524);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(727);
      END_STATE();
    case 401:
      if (eof) ADVANCE(409);
      if (lookahead == '!') ADVANCE(23);
      if (lookahead == '"') ADVANCE(15);
      if (lookahead == '#') ADVANCE(747);
      if (lookahead == '(') ADVANCE(497);
      if (lookahead == ')') ADVANCE(498);
      if (lookahead == '*') ADVANCE(730);
      if (lookahead == '+') ADVANCE(505);
      if (lookahead == ',') ADVANCE(501);
      if (lookahead == '-') ADVANCE(504);
      if (lookahead == '.') ADVANCE(527);
      if (lookahead == '/') ADVANCE(731);
      if (lookahead == ':') ADVANCE(479);
      if (lookahead == '<') ADVANCE(736);
      if (lookahead == '=') ADVANCE(496);
      if (lookahead == '>') ADVANCE(734);
      if (lookahead == '?') ADVANCE(26);
      if (lookahead == '@') ADVANCE(742);
      if (lookahead == 'A') ADVANCE(68);
      if (lookahead == 'D') ADVANCE(57);
      if (lookahead == 'E') ADVANCE(171);
      if (lookahead == 'F') ADVANCE(81);
      if (lookahead == 'G') ADVANCE(136);
      if (lookahead == 'I') ADVANCE(117);
      if (lookahead == 'J') ADVANCE(127);
      if (lookahead == 'L') ADVANCE(46);
      if (lookahead == 'O') ADVANCE(132);
      if (lookahead == 'P') ADVANCE(133);
      if (lookahead == 'R') ADVANCE(79);
      if (lookahead == 'S') ADVANCE(60);
      if (lookahead == 'T') ADVANCE(745);
      if (lookahead == 'W') ADVANCE(83);
      if (lookahead == 'Z') ADVANCE(746);
      if (lookahead == '[') ADVANCE(500);
      if (lookahead == ']') ADVANCE(502);
      if (lookahead == '_') ADVANCE(525);
      if (lookahead == 'a') ADVANCE(231);
      if (lookahead == 'd') ADVANCE(216);
      if (lookahead == 'e') ADVANCE(378);
      if (lookahead == 'f') ADVANCE(248);
      if (lookahead == 'g') ADVANCE(327);
      if (lookahead == 'i') ADVANCE(303);
      if (lookahead == 'j') ADVANCE(314);
      if (lookahead == 'l') ADVANCE(201);
      if (lookahead == 'o') ADVANCE(322);
      if (lookahead == 'p') ADVANCE(323);
      if (lookahead == 'r') ADVANCE(246);
      if (lookahead == 's') ADVANCE(218);
      if (lookahead == 't') ADVANCE(183);
      if (lookahead == 'w') ADVANCE(250);
      if (lookahead == '|') ADVANCE(732);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(406)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(524);
      END_STATE();
    case 402:
      if (eof) ADVANCE(409);
      if (lookahead == '!') ADVANCE(23);
      if (lookahead == '#') ADVANCE(747);
      if (lookahead == '(') ADVANCE(497);
      if (lookahead == ')') ADVANCE(498);
      if (lookahead == '*') ADVANCE(730);
      if (lookahead == '+') ADVANCE(505);
      if (lookahead == ',') ADVANCE(501);
      if (lookahead == '-') ADVANCE(504);
      if (lookahead == '.') ADVANCE(22);
      if (lookahead == '/') ADVANCE(731);
      if (lookahead == '<') ADVANCE(736);
      if (lookahead == '=') ADVANCE(496);
      if (lookahead == '>') ADVANCE(734);
      if (lookahead == '?') ADVANCE(26);
      if (lookahead == 'A') ADVANCE(68);
      if (lookahead == 'D') ADVANCE(57);
      if (lookahead == 'E') ADVANCE(171);
      if (lookahead == 'F') ADVANCE(82);
      if (lookahead == 'G') ADVANCE(136);
      if (lookahead == 'J') ADVANCE(127);
      if (lookahead == 'L') ADVANCE(66);
      if (lookahead == 'O') ADVANCE(132);
      if (lookahead == 'R') ADVANCE(120);
      if (lookahead == 'S') ADVANCE(60);
      if (lookahead == 'T') ADVANCE(745);
      if (lookahead == 'W') ADVANCE(83);
      if (lookahead == ']') ADVANCE(502);
      if (lookahead == '_') ADVANCE(525);
      if (lookahead == 'a') ADVANCE(231);
      if (lookahead == 'd') ADVANCE(216);
      if (lookahead == 'e') ADVANCE(378);
      if (lookahead == 'f') ADVANCE(249);
      if (lookahead == 'g') ADVANCE(327);
      if (lookahead == 'j') ADVANCE(314);
      if (lookahead == 'l') ADVANCE(228);
      if (lookahead == 'o') ADVANCE(322);
      if (lookahead == 'r') ADVANCE(304);
      if (lookahead == 's') ADVANCE(218);
      if (lookahead == 't') ADVANCE(183);
      if (lookahead == 'w') ADVANCE(250);
      if (lookahead == '|') ADVANCE(732);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(407)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(524);
      END_STATE();
    case 403:
      if (eof) ADVANCE(409);
      if (lookahead == '"') ADVANCE(507);
      if (lookahead == '#') ADVANCE(747);
      if (lookahead == '\'') ADVANCE(511);
      if (lookahead == '-') ADVANCE(503);
      if (lookahead == '.') ADVANCE(527);
      if (lookahead == ':') ADVANCE(479);
      if (lookahead == 'A') ADVANCE(568);
      if (lookahead == 'D') ADVANCE(563);
      if (lookahead == 'F') ADVANCE(534);
      if (lookahead == 'G') ADVANCE(605);
      if (lookahead == 'J') ADVANCE(596);
      if (lookahead == 'L') ADVANCE(562);
      if (lookahead == 'N') ADVANCE(624);
      if (lookahead == 'S') ADVANCE(564);
      if (lookahead == 'T') ADVANCE(539);
      if (lookahead == '_') ADVANCE(526);
      if (lookahead == '`') ADVANCE(528);
      if (lookahead == 'a') ADVANCE(667);
      if (lookahead == 'd') ADVANCE(661);
      if (lookahead == 'f') ADVANCE(632);
      if (lookahead == 'g') ADVANCE(703);
      if (lookahead == 'j') ADVANCE(694);
      if (lookahead == 'l') ADVANCE(660);
      if (lookahead == 'n') ADVANCE(719);
      if (lookahead == 's') ADVANCE(662);
      if (lookahead == 't') ADVANCE(637);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(408)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(524);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(727);
      END_STATE();
    case 404:
      if (eof) ADVANCE(409);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(404)
      if (lookahead == '!') ADVANCE(754);
      if (lookahead == '"') ADVANCE(507);
      if (lookahead == '#') ADVANCE(747);
      if (lookahead == '\'') ADVANCE(511);
      if (lookahead == '(') ADVANCE(497);
      if (lookahead == ')') ADVANCE(498);
      if (lookahead == '*') ADVANCE(730);
      if (lookahead == '+') ADVANCE(505);
      if (lookahead == ',') ADVANCE(501);
      if (lookahead == '-') ADVANCE(504);
      if (lookahead == '.') ADVANCE(527);
      if (lookahead == '/') ADVANCE(731);
      if (lookahead == ':') ADVANCE(479);
      if (lookahead == '<') ADVANCE(736);
      if (lookahead == '=') ADVANCE(496);
      if (lookahead == '>') ADVANCE(734);
      if (lookahead == '?') ADVANCE(26);
      if (lookahead == '@') ADVANCE(742);
      if (lookahead == 'A') ADVANCE(69);
      if (lookahead == 'C') ADVANCE(122);
      if (lookahead == 'D') ADVANCE(57);
      if (lookahead == 'E') ADVANCE(171);
      if (lookahead == 'F') ADVANCE(28);
      if (lookahead == 'G') ADVANCE(136);
      if (lookahead == 'I') ADVANCE(106);
      if (lookahead == 'J') ADVANCE(128);
      if (lookahead == 'L') ADVANCE(46);
      if (lookahead == 'M') ADVANCE(29);
      if (lookahead == 'N') ADVANCE(164);
      if (lookahead == 'O') ADVANCE(132);
      if (lookahead == 'P') ADVANCE(133);
      if (lookahead == 'R') ADVANCE(79);
      if (lookahead == 'S') ADVANCE(59);
      if (lookahead == 'T') ADVANCE(744);
      if (lookahead == 'V') ADVANCE(61);
      if (lookahead == 'W') ADVANCE(83);
      if (lookahead == 'Z') ADVANCE(746);
      if (lookahead == '[') ADVANCE(500);
      if (lookahead == ']') ADVANCE(502);
      if (lookahead == '_') ADVANCE(525);
      if (lookahead == '`') ADVANCE(528);
      if (lookahead == 'a') ADVANCE(232);
      if (lookahead == 'c') ADVANCE(306);
      if (lookahead == 'd') ADVANCE(216);
      if (lookahead == 'e') ADVANCE(378);
      if (lookahead == 'f') ADVANCE(10);
      if (lookahead == 'g') ADVANCE(327);
      if (lookahead == 'i') ADVANCE(287);
      if (lookahead == 'j') ADVANCE(315);
      if (lookahead == 'l') ADVANCE(201);
      if (lookahead == 'm') ADVANCE(176);
      if (lookahead == 'n') ADVANCE(366);
      if (lookahead == 'o') ADVANCE(322);
      if (lookahead == 'p') ADVANCE(323);
      if (lookahead == 'r') ADVANCE(246);
      if (lookahead == 's') ADVANCE(11);
      if (lookahead == 't') ADVANCE(175);
      if (lookahead == 'v') ADVANCE(220);
      if (lookahead == 'w') ADVANCE(250);
      if (lookahead == '|') ADVANCE(732);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(524);
      END_STATE();
    case 405:
      if (eof) ADVANCE(409);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(405)
      if (lookahead == '!') ADVANCE(23);
      if (lookahead == '"') ADVANCE(507);
      if (lookahead == '#') ADVANCE(747);
      if (lookahead == '\'') ADVANCE(511);
      if (lookahead == '*') ADVANCE(730);
      if (lookahead == '+') ADVANCE(505);
      if (lookahead == '-') ADVANCE(503);
      if (lookahead == '.') ADVANCE(527);
      if (lookahead == '/') ADVANCE(731);
      if (lookahead == '<') ADVANCE(736);
      if (lookahead == '=') ADVANCE(24);
      if (lookahead == '>') ADVANCE(734);
      if (lookahead == '?') ADVANCE(26);
      if (lookahead == 'A') ADVANCE(567);
      if (lookahead == 'D') ADVANCE(563);
      if (lookahead == 'F') ADVANCE(534);
      if (lookahead == 'G') ADVANCE(605);
      if (lookahead == 'J') ADVANCE(596);
      if (lookahead == 'L') ADVANCE(562);
      if (lookahead == 'N') ADVANCE(624);
      if (lookahead == 'O') ADVANCE(598);
      if (lookahead == 'S') ADVANCE(564);
      if (lookahead == 'T') ADVANCE(539);
      if (lookahead == '_') ADVANCE(526);
      if (lookahead == '`') ADVANCE(528);
      if (lookahead == 'a') ADVANCE(666);
      if (lookahead == 'd') ADVANCE(661);
      if (lookahead == 'f') ADVANCE(632);
      if (lookahead == 'g') ADVANCE(703);
      if (lookahead == 'j') ADVANCE(694);
      if (lookahead == 'l') ADVANCE(660);
      if (lookahead == 'n') ADVANCE(719);
      if (lookahead == 'o') ADVANCE(697);
      if (lookahead == 's') ADVANCE(662);
      if (lookahead == 't') ADVANCE(637);
      if (lookahead == '|') ADVANCE(732);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(524);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(727);
      END_STATE();
    case 406:
      if (eof) ADVANCE(409);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(406)
      if (lookahead == '!') ADVANCE(23);
      if (lookahead == '"') ADVANCE(15);
      if (lookahead == '#') ADVANCE(747);
      if (lookahead == '(') ADVANCE(497);
      if (lookahead == ')') ADVANCE(498);
      if (lookahead == '*') ADVANCE(730);
      if (lookahead == '+') ADVANCE(505);
      if (lookahead == ',') ADVANCE(501);
      if (lookahead == '-') ADVANCE(504);
      if (lookahead == '.') ADVANCE(527);
      if (lookahead == '/') ADVANCE(731);
      if (lookahead == ':') ADVANCE(479);
      if (lookahead == '<') ADVANCE(736);
      if (lookahead == '=') ADVANCE(496);
      if (lookahead == '>') ADVANCE(734);
      if (lookahead == '?') ADVANCE(26);
      if (lookahead == '@') ADVANCE(742);
      if (lookahead == 'A') ADVANCE(68);
      if (lookahead == 'D') ADVANCE(57);
      if (lookahead == 'E') ADVANCE(171);
      if (lookahead == 'F') ADVANCE(81);
      if (lookahead == 'G') ADVANCE(136);
      if (lookahead == 'I') ADVANCE(117);
      if (lookahead == 'J') ADVANCE(127);
      if (lookahead == 'L') ADVANCE(46);
      if (lookahead == 'O') ADVANCE(132);
      if (lookahead == 'P') ADVANCE(133);
      if (lookahead == 'R') ADVANCE(79);
      if (lookahead == 'S') ADVANCE(60);
      if (lookahead == 'T') ADVANCE(745);
      if (lookahead == 'W') ADVANCE(83);
      if (lookahead == 'Z') ADVANCE(746);
      if (lookahead == '[') ADVANCE(500);
      if (lookahead == ']') ADVANCE(502);
      if (lookahead == '_') ADVANCE(525);
      if (lookahead == 'a') ADVANCE(231);
      if (lookahead == 'd') ADVANCE(216);
      if (lookahead == 'e') ADVANCE(378);
      if (lookahead == 'f') ADVANCE(248);
      if (lookahead == 'g') ADVANCE(327);
      if (lookahead == 'i') ADVANCE(303);
      if (lookahead == 'j') ADVANCE(314);
      if (lookahead == 'l') ADVANCE(201);
      if (lookahead == 'o') ADVANCE(322);
      if (lookahead == 'p') ADVANCE(323);
      if (lookahead == 'r') ADVANCE(246);
      if (lookahead == 's') ADVANCE(218);
      if (lookahead == 't') ADVANCE(183);
      if (lookahead == 'w') ADVANCE(250);
      if (lookahead == '|') ADVANCE(732);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(524);
      END_STATE();
    case 407:
      if (eof) ADVANCE(409);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(407)
      if (lookahead == '!') ADVANCE(23);
      if (lookahead == '#') ADVANCE(747);
      if (lookahead == '(') ADVANCE(497);
      if (lookahead == ')') ADVANCE(498);
      if (lookahead == '*') ADVANCE(730);
      if (lookahead == '+') ADVANCE(505);
      if (lookahead == ',') ADVANCE(501);
      if (lookahead == '-') ADVANCE(504);
      if (lookahead == '.') ADVANCE(22);
      if (lookahead == '/') ADVANCE(731);
      if (lookahead == '<') ADVANCE(736);
      if (lookahead == '=') ADVANCE(496);
      if (lookahead == '>') ADVANCE(734);
      if (lookahead == '?') ADVANCE(26);
      if (lookahead == 'A') ADVANCE(68);
      if (lookahead == 'D') ADVANCE(57);
      if (lookahead == 'E') ADVANCE(171);
      if (lookahead == 'F') ADVANCE(82);
      if (lookahead == 'G') ADVANCE(136);
      if (lookahead == 'J') ADVANCE(127);
      if (lookahead == 'L') ADVANCE(66);
      if (lookahead == 'O') ADVANCE(132);
      if (lookahead == 'R') ADVANCE(120);
      if (lookahead == 'S') ADVANCE(60);
      if (lookahead == 'T') ADVANCE(745);
      if (lookahead == 'W') ADVANCE(83);
      if (lookahead == ']') ADVANCE(502);
      if (lookahead == '_') ADVANCE(525);
      if (lookahead == 'a') ADVANCE(231);
      if (lookahead == 'd') ADVANCE(216);
      if (lookahead == 'e') ADVANCE(378);
      if (lookahead == 'f') ADVANCE(249);
      if (lookahead == 'g') ADVANCE(327);
      if (lookahead == 'j') ADVANCE(314);
      if (lookahead == 'l') ADVANCE(228);
      if (lookahead == 'o') ADVANCE(322);
      if (lookahead == 'r') ADVANCE(304);
      if (lookahead == 's') ADVANCE(218);
      if (lookahead == 't') ADVANCE(183);
      if (lookahead == 'w') ADVANCE(250);
      if (lookahead == '|') ADVANCE(732);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(524);
      END_STATE();
    case 408:
      if (eof) ADVANCE(409);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(408)
      if (lookahead == '"') ADVANCE(507);
      if (lookahead == '#') ADVANCE(747);
      if (lookahead == '\'') ADVANCE(511);
      if (lookahead == '-') ADVANCE(503);
      if (lookahead == '.') ADVANCE(527);
      if (lookahead == ':') ADVANCE(479);
      if (lookahead == 'A') ADVANCE(568);
      if (lookahead == 'D') ADVANCE(563);
      if (lookahead == 'F') ADVANCE(534);
      if (lookahead == 'G') ADVANCE(605);
      if (lookahead == 'J') ADVANCE(596);
      if (lookahead == 'L') ADVANCE(562);
      if (lookahead == 'N') ADVANCE(624);
      if (lookahead == 'S') ADVANCE(564);
      if (lookahead == 'T') ADVANCE(539);
      if (lookahead == '_') ADVANCE(526);
      if (lookahead == '`') ADVANCE(528);
      if (lookahead == 'a') ADVANCE(667);
      if (lookahead == 'd') ADVANCE(661);
      if (lookahead == 'f') ADVANCE(632);
      if (lookahead == 'g') ADVANCE(703);
      if (lookahead == 'j') ADVANCE(694);
      if (lookahead == 'l') ADVANCE(660);
      if (lookahead == 'n') ADVANCE(719);
      if (lookahead == 's') ADVANCE(662);
      if (lookahead == 't') ADVANCE(637);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(524);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(727);
      END_STATE();
    case 409:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 410:
      ACCEPT_TOKEN(sym_keyword_from);
      if (lookahead == '_') ADVANCE(159);
      END_STATE();
    case 411:
      ACCEPT_TOKEN(sym_keyword_from);
      if (lookahead == '_') ADVANCE(359);
      END_STATE();
    case 412:
      ACCEPT_TOKEN(sym_keyword_from);
      if (lookahead == '_') ADVANCE(618);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(727);
      END_STATE();
    case 413:
      ACCEPT_TOKEN(sym_keyword_from);
      if (lookahead == '_') ADVANCE(715);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(727);
      END_STATE();
    case 414:
      ACCEPT_TOKEN(sym_keyword_filter);
      END_STATE();
    case 415:
      ACCEPT_TOKEN(sym_keyword_filter);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(727);
      END_STATE();
    case 416:
      ACCEPT_TOKEN(sym_keyword_derive);
      END_STATE();
    case 417:
      ACCEPT_TOKEN(sym_keyword_derive);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(727);
      END_STATE();
    case 418:
      ACCEPT_TOKEN(sym_keyword_group);
      END_STATE();
    case 419:
      ACCEPT_TOKEN(sym_keyword_group);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(727);
      END_STATE();
    case 420:
      ACCEPT_TOKEN(sym_keyword_aggregate);
      END_STATE();
    case 421:
      ACCEPT_TOKEN(sym_keyword_aggregate);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(727);
      END_STATE();
    case 422:
      ACCEPT_TOKEN(sym_keyword_sort);
      END_STATE();
    case 423:
      ACCEPT_TOKEN(sym_keyword_sort);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(727);
      END_STATE();
    case 424:
      ACCEPT_TOKEN(sym_keyword_take);
      END_STATE();
    case 425:
      ACCEPT_TOKEN(sym_keyword_take);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(727);
      END_STATE();
    case 426:
      ACCEPT_TOKEN(sym_keyword_window);
      END_STATE();
    case 427:
      ACCEPT_TOKEN(sym_keyword_join);
      END_STATE();
    case 428:
      ACCEPT_TOKEN(sym_keyword_join);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(727);
      END_STATE();
    case 429:
      ACCEPT_TOKEN(sym_keyword_select);
      END_STATE();
    case 430:
      ACCEPT_TOKEN(sym_keyword_select);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(727);
      END_STATE();
    case 431:
      ACCEPT_TOKEN(sym_keyword_true);
      END_STATE();
    case 432:
      ACCEPT_TOKEN(sym_keyword_true);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(727);
      END_STATE();
    case 433:
      ACCEPT_TOKEN(sym_keyword_false);
      END_STATE();
    case 434:
      ACCEPT_TOKEN(sym_keyword_false);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(727);
      END_STATE();
    case 435:
      ACCEPT_TOKEN(sym_keyword_switch);
      END_STATE();
    case 436:
      ACCEPT_TOKEN(sym_keyword_switch);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(727);
      END_STATE();
    case 437:
      ACCEPT_TOKEN(sym_keyword_average);
      END_STATE();
    case 438:
      ACCEPT_TOKEN(sym_keyword_average);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(727);
      END_STATE();
    case 439:
      ACCEPT_TOKEN(sym_keyword_min);
      END_STATE();
    case 440:
      ACCEPT_TOKEN(sym_keyword_min);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(727);
      END_STATE();
    case 441:
      ACCEPT_TOKEN(sym_keyword_max);
      END_STATE();
    case 442:
      ACCEPT_TOKEN(sym_keyword_max);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(727);
      END_STATE();
    case 443:
      ACCEPT_TOKEN(sym_keyword_count);
      if (lookahead == '_') ADVANCE(545);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(727);
      END_STATE();
    case 444:
      ACCEPT_TOKEN(sym_keyword_count);
      if (lookahead == '_') ADVANCE(643);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(727);
      END_STATE();
    case 445:
      ACCEPT_TOKEN(sym_keyword_count);
      if (lookahead == '_') ADVANCE(42);
      END_STATE();
    case 446:
      ACCEPT_TOKEN(sym_keyword_count);
      if (lookahead == '_') ADVANCE(197);
      END_STATE();
    case 447:
      ACCEPT_TOKEN(sym_keyword_stddev);
      END_STATE();
    case 448:
      ACCEPT_TOKEN(sym_keyword_stddev);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(727);
      END_STATE();
    case 449:
      ACCEPT_TOKEN(sym_keyword_avg);
      END_STATE();
    case 450:
      ACCEPT_TOKEN(sym_keyword_avg);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(727);
      END_STATE();
    case 451:
      ACCEPT_TOKEN(sym_keyword_sum);
      END_STATE();
    case 452:
      ACCEPT_TOKEN(sym_keyword_sum);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(727);
      END_STATE();
    case 453:
      ACCEPT_TOKEN(sym_keyword_count_distinct);
      END_STATE();
    case 454:
      ACCEPT_TOKEN(sym_keyword_count_distinct);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(727);
      END_STATE();
    case 455:
      ACCEPT_TOKEN(sym_keyword_side);
      END_STATE();
    case 456:
      ACCEPT_TOKEN(sym_keyword_side);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(727);
      END_STATE();
    case 457:
      ACCEPT_TOKEN(sym_keyword_inner);
      END_STATE();
    case 458:
      ACCEPT_TOKEN(sym_keyword_left);
      END_STATE();
    case 459:
      ACCEPT_TOKEN(sym_keyword_right);
      END_STATE();
    case 460:
      ACCEPT_TOKEN(sym_keyword_full);
      END_STATE();
    case 461:
      ACCEPT_TOKEN(sym_keyword_and);
      END_STATE();
    case 462:
      ACCEPT_TOKEN(sym_keyword_and);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(727);
      END_STATE();
    case 463:
      ACCEPT_TOKEN(sym_keyword_or);
      END_STATE();
    case 464:
      ACCEPT_TOKEN(sym_keyword_or);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(727);
      END_STATE();
    case 465:
      ACCEPT_TOKEN(sym_keyword_in);
      if (lookahead == 'N') ADVANCE(63);
      END_STATE();
    case 466:
      ACCEPT_TOKEN(sym_keyword_in);
      if (lookahead == 'n') ADVANCE(223);
      END_STATE();
    case 467:
      ACCEPT_TOKEN(sym_keyword_rolling);
      END_STATE();
    case 468:
      ACCEPT_TOKEN(sym_keyword_rows);
      END_STATE();
    case 469:
      ACCEPT_TOKEN(sym_keyword_expanding);
      END_STATE();
    case 470:
      ACCEPT_TOKEN(sym_keyword_null);
      END_STATE();
    case 471:
      ACCEPT_TOKEN(sym_keyword_null);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(727);
      END_STATE();
    case 472:
      ACCEPT_TOKEN(sym_keyword_func);
      END_STATE();
    case 473:
      ACCEPT_TOKEN(sym_keyword_func);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(727);
      END_STATE();
    case 474:
      ACCEPT_TOKEN(sym_keyword_let);
      END_STATE();
    case 475:
      ACCEPT_TOKEN(sym_keyword_let);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(727);
      END_STATE();
    case 476:
      ACCEPT_TOKEN(sym_keyword_prql);
      END_STATE();
    case 477:
      ACCEPT_TOKEN(sym_keyword_version);
      END_STATE();
    case 478:
      ACCEPT_TOKEN(sym_keyword_target);
      END_STATE();
    case 479:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 480:
      ACCEPT_TOKEN(anon_sym_sql_DOTansi);
      END_STATE();
    case 481:
      ACCEPT_TOKEN(anon_sym_sql_DOTbigquery);
      END_STATE();
    case 482:
      ACCEPT_TOKEN(anon_sym_sql_DOTclickhouse);
      END_STATE();
    case 483:
      ACCEPT_TOKEN(anon_sym_sql_DOTgeneric);
      END_STATE();
    case 484:
      ACCEPT_TOKEN(anon_sym_sql_DOThive);
      END_STATE();
    case 485:
      ACCEPT_TOKEN(anon_sym_sql_DOTmssql);
      END_STATE();
    case 486:
      ACCEPT_TOKEN(anon_sym_sql_DOTmysql);
      END_STATE();
    case 487:
      ACCEPT_TOKEN(anon_sym_sql_DOTpostgres);
      END_STATE();
    case 488:
      ACCEPT_TOKEN(anon_sym_sql_DOTsqlite);
      END_STATE();
    case 489:
      ACCEPT_TOKEN(anon_sym_sql_DOTsnowflake);
      END_STATE();
    case 490:
      ACCEPT_TOKEN(anon_sym_sql_DOTduckdb);
      END_STATE();
    case 491:
      ACCEPT_TOKEN(sym_keyword_from_text);
      END_STATE();
    case 492:
      ACCEPT_TOKEN(sym_keyword_from_text);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(727);
      END_STATE();
    case 493:
      ACCEPT_TOKEN(sym_keyword_format);
      END_STATE();
    case 494:
      ACCEPT_TOKEN(sym_keyword_csv);
      END_STATE();
    case 495:
      ACCEPT_TOKEN(sym_keyword_json);
      END_STATE();
    case 496:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead == '=') ADVANCE(506);
      END_STATE();
    case 497:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 498:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 499:
      ACCEPT_TOKEN(anon_sym_DASH_GT);
      END_STATE();
    case 500:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 501:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 502:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 503:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 504:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '>') ADVANCE(499);
      END_STATE();
    case 505:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 506:
      ACCEPT_TOKEN(anon_sym_EQ_EQ);
      END_STATE();
    case 507:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 508:
      ACCEPT_TOKEN(aux_sym__double_quote_string_token1);
      if (lookahead == '#') ADVANCE(749);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(509);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(510);
      END_STATE();
    case 509:
      ACCEPT_TOKEN(aux_sym__double_quote_string_token1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(509);
      if (lookahead == '#') ADVANCE(749);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(510);
      END_STATE();
    case 510:
      ACCEPT_TOKEN(aux_sym__double_quote_string_token1);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(510);
      END_STATE();
    case 511:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 512:
      ACCEPT_TOKEN(aux_sym__single_quote_string_token1);
      if (lookahead == '#') ADVANCE(750);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(513);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(514);
      END_STATE();
    case 513:
      ACCEPT_TOKEN(aux_sym__single_quote_string_token1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(513);
      if (lookahead == '#') ADVANCE(750);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(514);
      END_STATE();
    case 514:
      ACCEPT_TOKEN(aux_sym__single_quote_string_token1);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(514);
      END_STATE();
    case 515:
      ACCEPT_TOKEN(aux_sym__inner_triple_quotes_token1);
      END_STATE();
    case 516:
      ACCEPT_TOKEN(aux_sym__inner_triple_quotes_token1);
      if (lookahead == '"') ADVANCE(14);
      END_STATE();
    case 517:
      ACCEPT_TOKEN(aux_sym__inner_triple_quotes_token1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(517);
      if (lookahead == '"') ADVANCE(516);
      if (lookahead == '#') ADVANCE(747);
      if (lookahead != 0) ADVANCE(515);
      END_STATE();
    case 518:
      ACCEPT_TOKEN(aux_sym__inner_triple_quotes_token1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(518);
      if (lookahead == '#') ADVANCE(747);
      if (lookahead != 0) ADVANCE(515);
      END_STATE();
    case 519:
      ACCEPT_TOKEN(anon_sym_DQUOTE_DQUOTE_DQUOTE);
      END_STATE();
    case 520:
      ACCEPT_TOKEN(anon_sym_f_DQUOTE);
      if (lookahead == '"') ADVANCE(12);
      END_STATE();
    case 521:
      ACCEPT_TOKEN(anon_sym_f_DQUOTE_DQUOTE_DQUOTE);
      END_STATE();
    case 522:
      ACCEPT_TOKEN(anon_sym_s_DQUOTE);
      if (lookahead == '"') ADVANCE(13);
      END_STATE();
    case 523:
      ACCEPT_TOKEN(anon_sym_s_DQUOTE_DQUOTE_DQUOTE);
      END_STATE();
    case 524:
      ACCEPT_TOKEN(sym__natural_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(524);
      END_STATE();
    case 525:
      ACCEPT_TOKEN(anon_sym__);
      END_STATE();
    case 526:
      ACCEPT_TOKEN(anon_sym__);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(727);
      END_STATE();
    case 527:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 528:
      ACCEPT_TOKEN(anon_sym_BQUOTE);
      END_STATE();
    case 529:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '"') ADVANCE(520);
      if (lookahead == 'a') ADVANCE(678);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(727);
      END_STATE();
    case 530:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '"') ADVANCE(522);
      if (lookahead == 't') ADVANCE(645);
      if (lookahead == 'u') ADVANCE(683);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(727);
      END_STATE();
    case 531:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '"') ADVANCE(522);
      if (lookahead == 'u') ADVANCE(683);
      if (lookahead == 'w') ADVANCE(675);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(727);
      END_STATE();
    case 532:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '"') ADVANCE(522);
      if (lookahead == 'u') ADVANCE(683);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(727);
      END_STATE();
    case 533:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '"') ADVANCE(522);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(727);
      END_STATE();
    case 534:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'A') ADVANCE(580);
      if (lookahead == 'I') ADVANCE(583);
      if (lookahead == 'R') ADVANCE(594);
      if (lookahead == 'U') ADVANCE(591);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(727);
      END_STATE();
    case 535:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'A') ADVANCE(580);
      if (lookahead == 'I') ADVANCE(583);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(727);
      END_STATE();
    case 536:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'A') ADVANCE(580);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(727);
      END_STATE();
    case 537:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'A') ADVANCE(630);
      if (lookahead == 'I') ADVANCE(587);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(727);
      END_STATE();
    case 538:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'A') ADVANCE(570);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(727);
      END_STATE();
    case 539:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'A') ADVANCE(579);
      if (lookahead == 'R') ADVANCE(622);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(727);
      END_STATE();
    case 540:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'A') ADVANCE(619);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(727);
      END_STATE();
    case 541:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'C') ADVANCE(473);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(727);
      END_STATE();
    case 542:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'C') ADVANCE(572);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(727);
      END_STATE();
    case 543:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'C') ADVANCE(610);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(727);
      END_STATE();
    case 544:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'C') ADVANCE(613);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(727);
      END_STATE();
    case 545:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'D') ADVANCE(573);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(727);
      END_STATE();
    case 546:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'D') ADVANCE(462);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(727);
      END_STATE();
    case 547:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'D') ADVANCE(548);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(727);
      END_STATE();
    case 548:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'D') ADVANCE(557);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(727);
      END_STATE();
    case 549:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'D') ADVANCE(556);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(727);
      END_STATE();
    case 550:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'E') ADVANCE(432);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(727);
      END_STATE();
    case 551:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'E') ADVANCE(434);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(727);
      END_STATE();
    case 552:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'E') ADVANCE(438);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(727);
      END_STATE();
    case 553:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'E') ADVANCE(425);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(727);
      END_STATE();
    case 554:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'E') ADVANCE(417);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(727);
      END_STATE();
    case 555:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'E') ADVANCE(421);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(727);
      END_STATE();
    case 556:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'E') ADVANCE(456);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(727);
      END_STATE();
    case 557:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'E') ADVANCE(627);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(727);
      END_STATE();
    case 558:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'E') ADVANCE(600);
      if (lookahead == 'G') ADVANCE(450);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(727);
      END_STATE();
    case 559:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'E') ADVANCE(600);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(727);
      END_STATE();
    case 560:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'E') ADVANCE(631);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(727);
      END_STATE();
    case 561:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'E') ADVANCE(569);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(727);
      END_STATE();
    case 562:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'E') ADVANCE(611);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(727);
      END_STATE();
    case 563:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'E') ADVANCE(602);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(727);
      END_STATE();
    case 564:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'E') ADVANCE(584);
      if (lookahead == 'O') ADVANCE(603);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(727);
      END_STATE();
    case 565:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'E') ADVANCE(599);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(727);
      END_STATE();
    case 566:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'E') ADVANCE(544);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(727);
      END_STATE();
    case 567:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'G') ADVANCE(571);
      if (lookahead == 'N') ADVANCE(546);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(727);
      END_STATE();
    case 568:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'G') ADVANCE(571);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(727);
      END_STATE();
    case 569:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'G') ADVANCE(540);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(727);
      END_STATE();
    case 570:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'G') ADVANCE(552);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(727);
      END_STATE();
    case 571:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'G') ADVANCE(604);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(727);
      END_STATE();
    case 572:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'H') ADVANCE(436);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(727);
      END_STATE();
    case 573:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'I') ADVANCE(607);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(727);
      END_STATE();
    case 574:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'I') ADVANCE(628);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(727);
      END_STATE();
    case 575:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'I') ADVANCE(589);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(727);
      END_STATE();
    case 576:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'I') ADVANCE(590);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(727);
      END_STATE();
    case 577:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'I') ADVANCE(616);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(727);
      END_STATE();
    case 578:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'I') ADVANCE(549);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(727);
      END_STATE();
    case 579:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'K') ADVANCE(553);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(727);
      END_STATE();
    case 580:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'L') ADVANCE(606);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(727);
      END_STATE();
    case 581:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'L') ADVANCE(471);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(727);
      END_STATE();
    case 582:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'L') ADVANCE(581);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(727);
      END_STATE();
    case 583:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'L') ADVANCE(617);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(727);
      END_STATE();
    case 584:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'L') ADVANCE(566);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(727);
      END_STATE();
    case 585:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'M') ADVANCE(452);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(727);
      END_STATE();
    case 586:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'M') ADVANCE(412);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(727);
      END_STATE();
    case 587:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'N') ADVANCE(440);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(727);
      END_STATE();
    case 588:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'N') ADVANCE(609);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(727);
      END_STATE();
    case 589:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'N') ADVANCE(543);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(727);
      END_STATE();
    case 590:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'N') ADVANCE(428);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(727);
      END_STATE();
    case 591:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'N') ADVANCE(541);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(727);
      END_STATE();
    case 592:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'N') ADVANCE(546);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(727);
      END_STATE();
    case 593:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'O') ADVANCE(625);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(727);
      END_STATE();
    case 594:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'O') ADVANCE(586);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(727);
      END_STATE();
    case 595:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'O') ADVANCE(623);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(727);
      END_STATE();
    case 596:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'O') ADVANCE(576);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(727);
      END_STATE();
    case 597:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'P') ADVANCE(419);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(727);
      END_STATE();
    case 598:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'R') ADVANCE(464);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(727);
      END_STATE();
    case 599:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'R') ADVANCE(415);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(727);
      END_STATE();
    case 600:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'R') ADVANCE(538);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(727);
      END_STATE();
    case 601:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'R') ADVANCE(622);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(727);
      END_STATE();
    case 602:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'R') ADVANCE(574);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(727);
      END_STATE();
    case 603:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'R') ADVANCE(612);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(727);
      END_STATE();
    case 604:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'R') ADVANCE(561);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(727);
      END_STATE();
    case 605:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'R') ADVANCE(595);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(727);
      END_STATE();
    case 606:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'S') ADVANCE(551);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(727);
      END_STATE();
    case 607:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'S') ADVANCE(615);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(727);
      END_STATE();
    case 608:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'T') ADVANCE(547);
      if (lookahead == 'U') ADVANCE(585);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(727);
      END_STATE();
    case 609:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'T') ADVANCE(443);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(727);
      END_STATE();
    case 610:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'T') ADVANCE(454);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(727);
      END_STATE();
    case 611:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'T') ADVANCE(475);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(727);
      END_STATE();
    case 612:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'T') ADVANCE(423);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(727);
      END_STATE();
    case 613:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'T') ADVANCE(430);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(727);
      END_STATE();
    case 614:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'T') ADVANCE(492);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(727);
      END_STATE();
    case 615:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'T') ADVANCE(575);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(727);
      END_STATE();
    case 616:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'T') ADVANCE(542);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(727);
      END_STATE();
    case 617:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'T') ADVANCE(565);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(727);
      END_STATE();
    case 618:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'T') ADVANCE(560);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(727);
      END_STATE();
    case 619:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'T') ADVANCE(555);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(727);
      END_STATE();
    case 620:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'U') ADVANCE(585);
      if (lookahead == 'W') ADVANCE(577);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(727);
      END_STATE();
    case 621:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'U') ADVANCE(585);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(727);
      END_STATE();
    case 622:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'U') ADVANCE(550);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(727);
      END_STATE();
    case 623:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'U') ADVANCE(597);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(727);
      END_STATE();
    case 624:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'U') ADVANCE(582);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(727);
      END_STATE();
    case 625:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'U') ADVANCE(588);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(727);
      END_STATE();
    case 626:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'V') ADVANCE(558);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(727);
      END_STATE();
    case 627:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'V') ADVANCE(448);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(727);
      END_STATE();
    case 628:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'V') ADVANCE(554);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(727);
      END_STATE();
    case 629:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'V') ADVANCE(559);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(727);
      END_STATE();
    case 630:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'X') ADVANCE(442);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(727);
      END_STATE();
    case 631:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'X') ADVANCE(614);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(727);
      END_STATE();
    case 632:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'a') ADVANCE(678);
      if (lookahead == 'i') ADVANCE(681);
      if (lookahead == 'r') ADVANCE(692);
      if (lookahead == 'u') ADVANCE(689);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(727);
      END_STATE();
    case 633:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'a') ADVANCE(678);
      if (lookahead == 'i') ADVANCE(681);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(727);
      END_STATE();
    case 634:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'a') ADVANCE(678);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(727);
      END_STATE();
    case 635:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'a') ADVANCE(725);
      if (lookahead == 'i') ADVANCE(685);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(727);
      END_STATE();
    case 636:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'a') ADVANCE(668);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(727);
      END_STATE();
    case 637:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'a') ADVANCE(677);
      if (lookahead == 'r') ADVANCE(717);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(727);
      END_STATE();
    case 638:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'a') ADVANCE(716);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(727);
      END_STATE();
    case 639:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'c') ADVANCE(473);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(727);
      END_STATE();
    case 640:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'c') ADVANCE(670);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(727);
      END_STATE();
    case 641:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'c') ADVANCE(706);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(727);
      END_STATE();
    case 642:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'c') ADVANCE(709);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(727);
      END_STATE();
    case 643:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'd') ADVANCE(671);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(727);
      END_STATE();
    case 644:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'd') ADVANCE(462);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(727);
      END_STATE();
    case 645:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'd') ADVANCE(646);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(727);
      END_STATE();
    case 646:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'd') ADVANCE(655);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(727);
      END_STATE();
    case 647:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'd') ADVANCE(654);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(727);
      END_STATE();
    case 648:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(432);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(727);
      END_STATE();
    case 649:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(434);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(727);
      END_STATE();
    case 650:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(438);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(727);
      END_STATE();
    case 651:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(425);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(727);
      END_STATE();
    case 652:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(417);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(727);
      END_STATE();
    case 653:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(421);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(727);
      END_STATE();
    case 654:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(456);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(727);
      END_STATE();
    case 655:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(722);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(727);
      END_STATE();
    case 656:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(696);
      if (lookahead == 'g') ADVANCE(450);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(727);
      END_STATE();
    case 657:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(696);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(727);
      END_STATE();
    case 658:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(726);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(727);
      END_STATE();
    case 659:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(665);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(727);
      END_STATE();
    case 660:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(707);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(727);
      END_STATE();
    case 661:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(700);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(727);
      END_STATE();
    case 662:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(682);
      if (lookahead == 'o') ADVANCE(701);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(727);
      END_STATE();
    case 663:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(698);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(727);
      END_STATE();
    case 664:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(642);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(727);
      END_STATE();
    case 665:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'g') ADVANCE(638);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(727);
      END_STATE();
    case 666:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'g') ADVANCE(669);
      if (lookahead == 'n') ADVANCE(644);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(727);
      END_STATE();
    case 667:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'g') ADVANCE(669);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(727);
      END_STATE();
    case 668:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'g') ADVANCE(650);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(727);
      END_STATE();
    case 669:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'g') ADVANCE(702);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(727);
      END_STATE();
    case 670:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'h') ADVANCE(436);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(727);
      END_STATE();
    case 671:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'i') ADVANCE(705);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(727);
      END_STATE();
    case 672:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'i') ADVANCE(723);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(727);
      END_STATE();
    case 673:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'i') ADVANCE(687);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(727);
      END_STATE();
    case 674:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'i') ADVANCE(688);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(727);
      END_STATE();
    case 675:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'i') ADVANCE(713);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(727);
      END_STATE();
    case 676:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'i') ADVANCE(647);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(727);
      END_STATE();
    case 677:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'k') ADVANCE(651);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(727);
      END_STATE();
    case 678:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'l') ADVANCE(704);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(727);
      END_STATE();
    case 679:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'l') ADVANCE(471);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(727);
      END_STATE();
    case 680:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'l') ADVANCE(679);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(727);
      END_STATE();
    case 681:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'l') ADVANCE(714);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(727);
      END_STATE();
    case 682:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'l') ADVANCE(664);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(727);
      END_STATE();
    case 683:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'm') ADVANCE(452);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(727);
      END_STATE();
    case 684:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'm') ADVANCE(413);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(727);
      END_STATE();
    case 685:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'n') ADVANCE(440);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(727);
      END_STATE();
    case 686:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'n') ADVANCE(711);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(727);
      END_STATE();
    case 687:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'n') ADVANCE(641);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(727);
      END_STATE();
    case 688:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'n') ADVANCE(428);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(727);
      END_STATE();
    case 689:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'n') ADVANCE(639);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(727);
      END_STATE();
    case 690:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'n') ADVANCE(644);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(727);
      END_STATE();
    case 691:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'o') ADVANCE(720);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(727);
      END_STATE();
    case 692:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'o') ADVANCE(684);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(727);
      END_STATE();
    case 693:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'o') ADVANCE(718);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(727);
      END_STATE();
    case 694:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'o') ADVANCE(674);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(727);
      END_STATE();
    case 695:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'p') ADVANCE(419);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(727);
      END_STATE();
    case 696:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'r') ADVANCE(636);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(727);
      END_STATE();
    case 697:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'r') ADVANCE(464);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(727);
      END_STATE();
    case 698:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'r') ADVANCE(415);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(727);
      END_STATE();
    case 699:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'r') ADVANCE(717);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(727);
      END_STATE();
    case 700:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'r') ADVANCE(672);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(727);
      END_STATE();
    case 701:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'r') ADVANCE(708);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(727);
      END_STATE();
    case 702:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'r') ADVANCE(659);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(727);
      END_STATE();
    case 703:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'r') ADVANCE(693);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(727);
      END_STATE();
    case 704:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 's') ADVANCE(649);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(727);
      END_STATE();
    case 705:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 's') ADVANCE(712);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(727);
      END_STATE();
    case 706:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 't') ADVANCE(454);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(727);
      END_STATE();
    case 707:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 't') ADVANCE(475);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(727);
      END_STATE();
    case 708:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 't') ADVANCE(423);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(727);
      END_STATE();
    case 709:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 't') ADVANCE(430);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(727);
      END_STATE();
    case 710:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 't') ADVANCE(492);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(727);
      END_STATE();
    case 711:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 't') ADVANCE(444);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(727);
      END_STATE();
    case 712:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 't') ADVANCE(673);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(727);
      END_STATE();
    case 713:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 't') ADVANCE(640);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(727);
      END_STATE();
    case 714:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 't') ADVANCE(663);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(727);
      END_STATE();
    case 715:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 't') ADVANCE(658);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(727);
      END_STATE();
    case 716:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 't') ADVANCE(653);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(727);
      END_STATE();
    case 717:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'u') ADVANCE(648);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(727);
      END_STATE();
    case 718:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'u') ADVANCE(695);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(727);
      END_STATE();
    case 719:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'u') ADVANCE(680);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(727);
      END_STATE();
    case 720:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'u') ADVANCE(686);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(727);
      END_STATE();
    case 721:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'v') ADVANCE(656);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(727);
      END_STATE();
    case 722:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'v') ADVANCE(448);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(727);
      END_STATE();
    case 723:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'v') ADVANCE(652);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(727);
      END_STATE();
    case 724:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'v') ADVANCE(657);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(727);
      END_STATE();
    case 725:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'x') ADVANCE(442);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(727);
      END_STATE();
    case 726:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'x') ADVANCE(710);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(727);
      END_STATE();
    case 727:
      ACCEPT_TOKEN(sym__identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(727);
      END_STATE();
    case 728:
      ACCEPT_TOKEN(sym__identifier_dot);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(728);
      END_STATE();
    case 729:
      ACCEPT_TOKEN(anon_sym_DOT_DOT);
      END_STATE();
    case 730:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 731:
      ACCEPT_TOKEN(anon_sym_SLASH);
      END_STATE();
    case 732:
      ACCEPT_TOKEN(anon_sym_PIPE);
      END_STATE();
    case 733:
      ACCEPT_TOKEN(anon_sym_BANG_EQ);
      END_STATE();
    case 734:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '=') ADVANCE(735);
      END_STATE();
    case 735:
      ACCEPT_TOKEN(anon_sym_GT_EQ);
      END_STATE();
    case 736:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '=') ADVANCE(737);
      END_STATE();
    case 737:
      ACCEPT_TOKEN(anon_sym_LT_EQ);
      END_STATE();
    case 738:
      ACCEPT_TOKEN(anon_sym_QMARK_QMARK);
      END_STATE();
    case 739:
      ACCEPT_TOKEN(aux_sym__date_token1);
      END_STATE();
    case 740:
      ACCEPT_TOKEN(aux_sym__date_token2);
      END_STATE();
    case 741:
      ACCEPT_TOKEN(aux_sym__date_token2);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(740);
      END_STATE();
    case 742:
      ACCEPT_TOKEN(anon_sym_AT);
      END_STATE();
    case 743:
      ACCEPT_TOKEN(aux_sym__time_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(399);
      END_STATE();
    case 744:
      ACCEPT_TOKEN(anon_sym_T);
      if (lookahead == 'A') ADVANCE(92);
      if (lookahead == 'R') ADVANCE(166);
      END_STATE();
    case 745:
      ACCEPT_TOKEN(anon_sym_T);
      if (lookahead == 'A') ADVANCE(91);
      END_STATE();
    case 746:
      ACCEPT_TOKEN(anon_sym_Z);
      END_STATE();
    case 747:
      ACCEPT_TOKEN(anon_sym_POUND);
      END_STATE();
    case 748:
      ACCEPT_TOKEN(anon_sym_POUND);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(752);
      END_STATE();
    case 749:
      ACCEPT_TOKEN(anon_sym_POUND);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(510);
      END_STATE();
    case 750:
      ACCEPT_TOKEN(anon_sym_POUND);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(514);
      END_STATE();
    case 751:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == '#') ADVANCE(748);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(751);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(752);
      END_STATE();
    case 752:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(752);
      END_STATE();
    case 753:
      ACCEPT_TOKEN(sym_bang);
      END_STATE();
    case 754:
      ACCEPT_TOKEN(sym_bang);
      if (lookahead == '=') ADVANCE(733);
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
  [5] = {.lex_state = 5},
  [6] = {.lex_state = 400},
  [7] = {.lex_state = 6},
  [8] = {.lex_state = 6},
  [9] = {.lex_state = 6},
  [10] = {.lex_state = 2},
  [11] = {.lex_state = 3},
  [12] = {.lex_state = 401},
  [13] = {.lex_state = 3},
  [14] = {.lex_state = 7},
  [15] = {.lex_state = 3},
  [16] = {.lex_state = 401},
  [17] = {.lex_state = 3},
  [18] = {.lex_state = 3},
  [19] = {.lex_state = 3},
  [20] = {.lex_state = 3},
  [21] = {.lex_state = 3},
  [22] = {.lex_state = 3},
  [23] = {.lex_state = 401},
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
  [36] = {.lex_state = 401},
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
  [47] = {.lex_state = 402},
  [48] = {.lex_state = 3},
  [49] = {.lex_state = 3},
  [50] = {.lex_state = 3},
  [51] = {.lex_state = 3},
  [52] = {.lex_state = 3},
  [53] = {.lex_state = 3},
  [54] = {.lex_state = 3},
  [55] = {.lex_state = 3},
  [56] = {.lex_state = 3},
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
  [68] = {.lex_state = 400},
  [69] = {.lex_state = 400},
  [70] = {.lex_state = 401},
  [71] = {.lex_state = 401},
  [72] = {.lex_state = 401},
  [73] = {.lex_state = 401},
  [74] = {.lex_state = 401},
  [75] = {.lex_state = 401},
  [76] = {.lex_state = 401},
  [77] = {.lex_state = 401},
  [78] = {.lex_state = 401},
  [79] = {.lex_state = 401},
  [80] = {.lex_state = 401},
  [81] = {.lex_state = 403},
  [82] = {.lex_state = 401},
  [83] = {.lex_state = 401},
  [84] = {.lex_state = 403},
  [85] = {.lex_state = 401},
  [86] = {.lex_state = 401},
  [87] = {.lex_state = 401},
  [88] = {.lex_state = 401},
  [89] = {.lex_state = 401},
  [90] = {.lex_state = 401},
  [91] = {.lex_state = 401},
  [92] = {.lex_state = 401},
  [93] = {.lex_state = 401},
  [94] = {.lex_state = 401},
  [95] = {.lex_state = 401},
  [96] = {.lex_state = 401},
  [97] = {.lex_state = 401},
  [98] = {.lex_state = 401},
  [99] = {.lex_state = 401},
  [100] = {.lex_state = 401},
  [101] = {.lex_state = 401},
  [102] = {.lex_state = 401},
  [103] = {.lex_state = 401},
  [104] = {.lex_state = 401},
  [105] = {.lex_state = 401},
  [106] = {.lex_state = 401},
  [107] = {.lex_state = 401},
  [108] = {.lex_state = 401},
  [109] = {.lex_state = 401},
  [110] = {.lex_state = 401},
  [111] = {.lex_state = 2},
  [112] = {.lex_state = 2},
  [113] = {.lex_state = 401},
  [114] = {.lex_state = 401},
  [115] = {.lex_state = 401},
  [116] = {.lex_state = 8},
  [117] = {.lex_state = 8},
  [118] = {.lex_state = 401},
  [119] = {.lex_state = 1},
  [120] = {.lex_state = 1},
  [121] = {.lex_state = 401},
  [122] = {.lex_state = 403},
  [123] = {.lex_state = 403},
  [124] = {.lex_state = 4},
  [125] = {.lex_state = 403},
  [126] = {.lex_state = 403},
  [127] = {.lex_state = 403},
  [128] = {.lex_state = 4},
  [129] = {.lex_state = 403},
  [130] = {.lex_state = 403},
  [131] = {.lex_state = 403},
  [132] = {.lex_state = 403},
  [133] = {.lex_state = 403},
  [134] = {.lex_state = 401},
  [135] = {.lex_state = 403},
  [136] = {.lex_state = 403},
  [137] = {.lex_state = 403},
  [138] = {.lex_state = 403},
  [139] = {.lex_state = 403},
  [140] = {.lex_state = 403},
  [141] = {.lex_state = 403},
  [142] = {.lex_state = 402},
  [143] = {.lex_state = 0},
  [144] = {.lex_state = 402},
  [145] = {.lex_state = 0},
  [146] = {.lex_state = 402},
  [147] = {.lex_state = 402},
  [148] = {.lex_state = 0},
  [149] = {.lex_state = 0},
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
  [161] = {.lex_state = 402},
  [162] = {.lex_state = 8},
  [163] = {.lex_state = 8},
  [164] = {.lex_state = 8},
  [165] = {.lex_state = 8},
  [166] = {.lex_state = 8},
  [167] = {.lex_state = 8},
  [168] = {.lex_state = 0},
  [169] = {.lex_state = 3},
  [170] = {.lex_state = 3},
  [171] = {.lex_state = 3},
  [172] = {.lex_state = 401},
  [173] = {.lex_state = 401},
  [174] = {.lex_state = 0},
  [175] = {.lex_state = 0},
  [176] = {.lex_state = 401},
  [177] = {.lex_state = 401},
  [178] = {.lex_state = 0},
  [179] = {.lex_state = 0},
  [180] = {.lex_state = 0},
  [181] = {.lex_state = 0},
  [182] = {.lex_state = 401},
  [183] = {.lex_state = 0},
  [184] = {.lex_state = 0},
  [185] = {.lex_state = 0},
  [186] = {.lex_state = 0},
  [187] = {.lex_state = 0},
  [188] = {.lex_state = 0},
  [189] = {.lex_state = 0},
  [190] = {.lex_state = 0},
  [191] = {.lex_state = 401},
  [192] = {.lex_state = 0},
  [193] = {.lex_state = 401},
  [194] = {.lex_state = 0},
  [195] = {.lex_state = 9},
  [196] = {.lex_state = 4},
  [197] = {.lex_state = 4},
  [198] = {.lex_state = 401},
  [199] = {.lex_state = 402},
  [200] = {.lex_state = 401},
  [201] = {.lex_state = 0},
  [202] = {.lex_state = 9},
  [203] = {.lex_state = 401},
  [204] = {.lex_state = 9},
  [205] = {.lex_state = 9},
  [206] = {.lex_state = 4},
  [207] = {.lex_state = 4},
  [208] = {.lex_state = 9},
  [209] = {.lex_state = 4},
  [210] = {.lex_state = 4},
  [211] = {.lex_state = 9},
  [212] = {.lex_state = 0},
  [213] = {.lex_state = 401},
  [214] = {.lex_state = 4},
  [215] = {.lex_state = 401},
  [216] = {.lex_state = 4},
  [217] = {.lex_state = 4},
  [218] = {.lex_state = 0},
  [219] = {.lex_state = 401},
  [220] = {.lex_state = 0},
  [221] = {.lex_state = 4},
  [222] = {.lex_state = 0},
  [223] = {.lex_state = 401},
  [224] = {.lex_state = 0},
  [225] = {.lex_state = 0},
  [226] = {.lex_state = 401},
  [227] = {.lex_state = 0},
  [228] = {.lex_state = 401},
  [229] = {.lex_state = 4},
  [230] = {.lex_state = 401},
  [231] = {.lex_state = 4},
  [232] = {.lex_state = 0},
  [233] = {.lex_state = 4},
  [234] = {.lex_state = 401},
  [235] = {.lex_state = 0},
  [236] = {.lex_state = 4},
  [237] = {.lex_state = 0},
  [238] = {.lex_state = 0},
  [239] = {.lex_state = 0},
  [240] = {.lex_state = 4},
  [241] = {.lex_state = 401},
  [242] = {.lex_state = 401},
  [243] = {.lex_state = 401},
  [244] = {.lex_state = 4},
  [245] = {.lex_state = 4},
  [246] = {.lex_state = 0},
  [247] = {.lex_state = 0},
  [248] = {.lex_state = 0},
  [249] = {.lex_state = 0},
  [250] = {.lex_state = 0},
  [251] = {.lex_state = 0},
  [252] = {.lex_state = 0},
  [253] = {.lex_state = 0},
  [254] = {.lex_state = 0},
  [255] = {.lex_state = 401},
  [256] = {.lex_state = 0},
  [257] = {.lex_state = 0},
  [258] = {.lex_state = 0},
  [259] = {.lex_state = 401},
  [260] = {.lex_state = 0},
  [261] = {.lex_state = 0},
  [262] = {.lex_state = 0},
  [263] = {.lex_state = 0},
  [264] = {.lex_state = 0},
  [265] = {.lex_state = 0},
  [266] = {.lex_state = 0},
  [267] = {.lex_state = 0},
  [268] = {.lex_state = 0},
  [269] = {.lex_state = 0},
  [270] = {.lex_state = 0},
  [271] = {.lex_state = 0},
  [272] = {.lex_state = 0},
  [273] = {.lex_state = 0},
  [274] = {.lex_state = 0},
  [275] = {.lex_state = 0},
  [276] = {.lex_state = 0},
  [277] = {.lex_state = 0},
  [278] = {.lex_state = 0},
  [279] = {.lex_state = 0},
  [280] = {.lex_state = 0},
  [281] = {.lex_state = 0},
  [282] = {.lex_state = 0},
  [283] = {.lex_state = 0},
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
  [294] = {.lex_state = 0},
  [295] = {.lex_state = 0},
  [296] = {.lex_state = 0},
  [297] = {.lex_state = 16},
  [298] = {.lex_state = 0},
  [299] = {.lex_state = 0},
  [300] = {.lex_state = 401},
  [301] = {.lex_state = 16},
  [302] = {.lex_state = 401},
  [303] = {.lex_state = 16},
  [304] = {.lex_state = 0},
  [305] = {.lex_state = 16},
  [306] = {.lex_state = 17},
  [307] = {.lex_state = 17},
  [308] = {.lex_state = 16},
  [309] = {.lex_state = 18},
  [310] = {.lex_state = 17},
  [311] = {.lex_state = 16},
  [312] = {.lex_state = 0},
  [313] = {.lex_state = 0},
  [314] = {.lex_state = 0},
  [315] = {.lex_state = 17},
  [316] = {.lex_state = 0},
  [317] = {.lex_state = 0},
  [318] = {.lex_state = 0},
  [319] = {.lex_state = 0},
  [320] = {.lex_state = 16},
  [321] = {.lex_state = 0},
  [322] = {.lex_state = 402},
  [323] = {.lex_state = 0},
  [324] = {.lex_state = 401},
  [325] = {.lex_state = 16},
  [326] = {.lex_state = 16},
  [327] = {.lex_state = 0},
  [328] = {.lex_state = 401},
  [329] = {.lex_state = 0},
  [330] = {.lex_state = 401},
  [331] = {.lex_state = 401},
  [332] = {.lex_state = 16},
  [333] = {.lex_state = 0},
  [334] = {.lex_state = 0},
  [335] = {.lex_state = 0},
  [336] = {.lex_state = 16},
  [337] = {.lex_state = 401},
  [338] = {.lex_state = 16},
  [339] = {.lex_state = 401},
  [340] = {.lex_state = 16},
  [341] = {.lex_state = 16},
  [342] = {.lex_state = 18},
  [343] = {.lex_state = 401},
  [344] = {.lex_state = 16},
  [345] = {.lex_state = 401},
  [346] = {.lex_state = 16},
  [347] = {.lex_state = 0},
  [348] = {.lex_state = 401},
  [349] = {.lex_state = 401},
  [350] = {.lex_state = 0},
  [351] = {.lex_state = 401},
  [352] = {.lex_state = 16},
  [353] = {.lex_state = 0},
  [354] = {.lex_state = 0},
  [355] = {.lex_state = 0},
  [356] = {.lex_state = 16},
  [357] = {.lex_state = 0},
  [358] = {.lex_state = 0},
  [359] = {.lex_state = 0},
  [360] = {.lex_state = 393},
  [361] = {.lex_state = 0},
  [362] = {.lex_state = 0},
  [363] = {.lex_state = 19},
  [364] = {.lex_state = 16},
  [365] = {.lex_state = 393},
  [366] = {.lex_state = 0},
  [367] = {.lex_state = 0},
  [368] = {.lex_state = 16},
  [369] = {.lex_state = 16},
  [370] = {.lex_state = 16},
  [371] = {.lex_state = 0},
  [372] = {.lex_state = 401},
  [373] = {.lex_state = 0},
  [374] = {.lex_state = 0},
  [375] = {.lex_state = 401},
  [376] = {.lex_state = 16},
  [377] = {.lex_state = 0},
  [378] = {.lex_state = 393},
  [379] = {.lex_state = 16},
  [380] = {.lex_state = 0},
  [381] = {.lex_state = 16},
  [382] = {.lex_state = 16},
  [383] = {.lex_state = 16},
  [384] = {.lex_state = 16},
  [385] = {.lex_state = 0},
  [386] = {.lex_state = 0},
  [387] = {.lex_state = 0},
  [388] = {.lex_state = 393},
  [389] = {.lex_state = 0},
  [390] = {.lex_state = 0},
  [391] = {.lex_state = 0},
  [392] = {.lex_state = 0},
  [393] = {.lex_state = 401},
  [394] = {.lex_state = 0},
  [395] = {.lex_state = 0},
  [396] = {.lex_state = 9},
  [397] = {.lex_state = 0},
  [398] = {.lex_state = 16},
  [399] = {.lex_state = 395},
  [400] = {.lex_state = 393},
  [401] = {.lex_state = 18},
  [402] = {.lex_state = 0},
  [403] = {.lex_state = 0},
  [404] = {.lex_state = 18},
  [405] = {.lex_state = 395},
  [406] = {.lex_state = 0},
  [407] = {.lex_state = 0},
  [408] = {.lex_state = 395},
  [409] = {.lex_state = 0},
  [410] = {.lex_state = 0},
  [411] = {.lex_state = 0},
  [412] = {.lex_state = 19},
  [413] = {.lex_state = 19},
  [414] = {.lex_state = 0},
  [415] = {.lex_state = 0},
  [416] = {.lex_state = 0},
  [417] = {.lex_state = 0},
  [418] = {.lex_state = 0},
  [419] = {.lex_state = 0},
  [420] = {.lex_state = 0},
  [421] = {.lex_state = 751},
  [422] = {.lex_state = 0},
  [423] = {.lex_state = 0},
  [424] = {.lex_state = 0},
  [425] = {.lex_state = 0},
  [426] = {.lex_state = 0},
  [427] = {.lex_state = 5},
  [428] = {.lex_state = 0},
  [429] = {.lex_state = 0},
  [430] = {.lex_state = 402},
  [431] = {.lex_state = 0},
  [432] = {.lex_state = 0},
  [433] = {.lex_state = 0},
  [434] = {.lex_state = 0},
  [435] = {.lex_state = 0},
  [436] = {.lex_state = 5},
  [437] = {.lex_state = 508},
  [438] = {.lex_state = 508},
  [439] = {.lex_state = 512},
  [440] = {.lex_state = 508},
  [441] = {.lex_state = 0},
  [442] = {.lex_state = 19},
  [443] = {.lex_state = 19},
  [444] = {.lex_state = 0},
  [445] = {.lex_state = 0},
  [446] = {.lex_state = 0},
  [447] = {.lex_state = 0},
  [448] = {.lex_state = 0},
  [449] = {.lex_state = 19},
  [450] = {.lex_state = 5},
  [451] = {.lex_state = 5},
  [452] = {.lex_state = 0},
  [453] = {.lex_state = 0},
  [454] = {.lex_state = 0},
  [455] = {.lex_state = 0},
  [456] = {.lex_state = 0},
  [457] = {.lex_state = 0},
  [458] = {.lex_state = 5},
  [459] = {.lex_state = 5},
  [460] = {.lex_state = 0},
  [461] = {.lex_state = 0},
  [462] = {.lex_state = 0},
  [463] = {.lex_state = 0},
  [464] = {.lex_state = 0},
  [465] = {.lex_state = 0},
  [466] = {.lex_state = 5},
  [467] = {.lex_state = 5},
  [468] = {.lex_state = 0},
  [469] = {.lex_state = 0},
  [470] = {.lex_state = 0},
  [471] = {.lex_state = 0},
  [472] = {.lex_state = 5},
  [473] = {.lex_state = 5},
  [474] = {.lex_state = 0},
  [475] = {.lex_state = 0},
  [476] = {.lex_state = 0},
  [477] = {.lex_state = 0},
  [478] = {.lex_state = 0},
  [479] = {.lex_state = 20},
  [480] = {.lex_state = 508},
  [481] = {.lex_state = 512},
  [482] = {.lex_state = 0},
  [483] = {.lex_state = 20},
  [484] = {.lex_state = 508},
  [485] = {.lex_state = 512},
  [486] = {.lex_state = 20},
  [487] = {.lex_state = 20},
  [488] = {.lex_state = 508},
  [489] = {.lex_state = 512},
  [490] = {.lex_state = 20},
  [491] = {.lex_state = 508},
  [492] = {.lex_state = 512},
  [493] = {.lex_state = 20},
  [494] = {.lex_state = 20},
  [495] = {.lex_state = 20},
  [496] = {.lex_state = 0},
  [497] = {.lex_state = 0},
  [498] = {.lex_state = 0},
  [499] = {.lex_state = 0},
  [500] = {.lex_state = 0},
  [501] = {(TSStateId)(-1)},
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
    [sym_program] = STATE(497),
    [sym_prql] = STATE(319),
    [sym_pipeline] = STATE(334),
    [sym_variable] = STATE(334),
    [sym_function_definition] = STATE(334),
    [sym_from_text] = STATE(143),
    [sym_from] = STATE(143),
    [sym_comment] = STATE(1),
    [aux_sym_program_repeat1] = STATE(262),
    [aux_sym_program_repeat2] = STATE(287),
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
    STATE(12), 1,
      aux_sym__friendly_number,
    STATE(77), 1,
      sym_integer,
    STATE(78), 1,
      sym_identifier,
    STATE(79), 1,
      sym__double_quote_string,
    STATE(95), 1,
      sym__single_quote_string,
    STATE(176), 1,
      sym_binary_expression,
    STATE(213), 1,
      sym__expression,
    STATE(435), 1,
      sym__alias_identifier,
    STATE(98), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(100), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(110), 2,
      sym__literal_string,
      sym_decimal_number,
    ACTIONS(17), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(392), 3,
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
    STATE(89), 7,
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
    STATE(12), 1,
      aux_sym__friendly_number,
    STATE(77), 1,
      sym_integer,
    STATE(78), 1,
      sym_identifier,
    STATE(79), 1,
      sym__double_quote_string,
    STATE(95), 1,
      sym__single_quote_string,
    STATE(191), 1,
      sym_binary_expression,
    STATE(213), 1,
      sym__expression,
    STATE(435), 1,
      sym__alias_identifier,
    STATE(98), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(100), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(110), 2,
      sym__literal_string,
      sym_decimal_number,
    ACTIONS(17), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(397), 3,
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
    STATE(89), 7,
      sym_literal,
      sym_f_string,
      sym_s_string,
      sym_field,
      sym_date,
      sym_time,
      sym_timestamp,
  [241] = 33,
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
    STATE(12), 1,
      aux_sym__friendly_number,
    STATE(77), 1,
      sym_integer,
    STATE(78), 1,
      sym_identifier,
    STATE(79), 1,
      sym__double_quote_string,
    STATE(95), 1,
      sym__single_quote_string,
    STATE(191), 1,
      sym_binary_expression,
    STATE(213), 1,
      sym__expression,
    STATE(435), 1,
      sym__alias_identifier,
    STATE(98), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(100), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(110), 2,
      sym__literal_string,
      sym_decimal_number,
    ACTIONS(17), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(397), 3,
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
    STATE(89), 7,
      sym_literal,
      sym_f_string,
      sym_s_string,
      sym_field,
      sym_date,
      sym_time,
      sym_timestamp,
  [360] = 32,
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
    STATE(5), 1,
      sym_comment,
    STATE(12), 1,
      aux_sym__friendly_number,
    STATE(77), 1,
      sym_integer,
    STATE(78), 1,
      sym_identifier,
    STATE(79), 1,
      sym__double_quote_string,
    STATE(95), 1,
      sym__single_quote_string,
    STATE(191), 1,
      sym_binary_expression,
    STATE(213), 1,
      sym__expression,
    STATE(435), 1,
      sym__alias_identifier,
    STATE(98), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(100), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(110), 2,
      sym__literal_string,
      sym_decimal_number,
    ACTIONS(17), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(397), 3,
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
    STATE(89), 7,
      sym_literal,
      sym_f_string,
      sym_s_string,
      sym_field,
      sym_date,
      sym_time,
      sym_timestamp,
  [476] = 21,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(65), 1,
      anon_sym_DASH,
    ACTIONS(67), 1,
      anon_sym_DQUOTE,
    ACTIONS(69), 1,
      anon_sym_SQUOTE,
    ACTIONS(71), 1,
      sym__natural_number,
    ACTIONS(73), 1,
      anon_sym__,
    ACTIONS(75), 1,
      anon_sym_DOT,
    ACTIONS(77), 1,
      anon_sym_BQUOTE,
    ACTIONS(79), 1,
      sym__identifier,
    STATE(6), 1,
      sym_comment,
    STATE(81), 1,
      aux_sym_function_call_repeat1,
    STATE(123), 1,
      aux_sym__friendly_number,
    STATE(126), 1,
      sym_identifier,
    STATE(130), 1,
      sym_integer,
    STATE(136), 1,
      sym_literal,
    STATE(137), 1,
      sym__call_parameter,
    STATE(135), 2,
      sym__literal_string,
      sym_decimal_number,
    STATE(140), 2,
      sym__double_quote_string,
      sym__single_quote_string,
    ACTIONS(63), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    ACTIONS(59), 10,
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
    ACTIONS(61), 16,
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
  [568] = 32,
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
    ACTIONS(81), 1,
      sym_keyword_switch,
    ACTIONS(85), 1,
      anon_sym_LPAREN,
    ACTIONS(87), 1,
      anon_sym_BQUOTE,
    ACTIONS(89), 1,
      sym__identifier,
    STATE(7), 1,
      sym_comment,
    STATE(10), 1,
      sym_identifier,
    STATE(12), 1,
      aux_sym__friendly_number,
    STATE(77), 1,
      sym_integer,
    STATE(79), 1,
      sym__double_quote_string,
    STATE(95), 1,
      sym__single_quote_string,
    STATE(114), 1,
      sym__expression,
    STATE(186), 1,
      sym__agg_rhs_assignment,
    STATE(435), 1,
      sym__alias_identifier,
    ACTIONS(83), 2,
      sym_keyword_average,
      sym_keyword_sum,
    STATE(98), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(100), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(110), 2,
      sym__literal_string,
      sym_decimal_number,
    STATE(187), 2,
      sym_function_call,
      sym_switch,
    ACTIONS(17), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(89), 8,
      sym_literal,
      sym_f_string,
      sym_s_string,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [679] = 32,
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
    ACTIONS(81), 1,
      sym_keyword_switch,
    ACTIONS(85), 1,
      anon_sym_LPAREN,
    ACTIONS(91), 1,
      anon_sym_BQUOTE,
    ACTIONS(93), 1,
      sym__identifier,
    STATE(6), 1,
      sym_identifier,
    STATE(8), 1,
      sym_comment,
    STATE(12), 1,
      aux_sym__friendly_number,
    STATE(77), 1,
      sym_integer,
    STATE(79), 1,
      sym__double_quote_string,
    STATE(95), 1,
      sym__single_quote_string,
    STATE(114), 1,
      sym__expression,
    STATE(186), 1,
      sym__agg_rhs_assignment,
    STATE(435), 1,
      sym__alias_identifier,
    ACTIONS(83), 2,
      sym_keyword_average,
      sym_keyword_sum,
    STATE(98), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(100), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(110), 2,
      sym__literal_string,
      sym_decimal_number,
    STATE(187), 2,
      sym_function_call,
      sym_switch,
    ACTIONS(17), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(89), 8,
      sym_literal,
      sym_f_string,
      sym_s_string,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [790] = 32,
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
    ACTIONS(81), 1,
      sym_keyword_switch,
    ACTIONS(85), 1,
      anon_sym_LPAREN,
    ACTIONS(95), 1,
      anon_sym_BQUOTE,
    ACTIONS(97), 1,
      sym__identifier,
    STATE(9), 1,
      sym_comment,
    STATE(12), 1,
      aux_sym__friendly_number,
    STATE(58), 1,
      sym_identifier,
    STATE(77), 1,
      sym_integer,
    STATE(79), 1,
      sym__double_quote_string,
    STATE(95), 1,
      sym__single_quote_string,
    STATE(114), 1,
      sym__expression,
    STATE(186), 1,
      sym__agg_rhs_assignment,
    STATE(435), 1,
      sym__alias_identifier,
    ACTIONS(83), 2,
      sym_keyword_average,
      sym_keyword_sum,
    STATE(98), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(100), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(110), 2,
      sym__literal_string,
      sym_decimal_number,
    STATE(187), 2,
      sym_function_call,
      sym_switch,
    ACTIONS(17), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(89), 8,
      sym_literal,
      sym_f_string,
      sym_s_string,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [901] = 21,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(101), 1,
      anon_sym_DASH,
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
    STATE(117), 1,
      aux_sym_function_call_repeat1,
    STATE(151), 1,
      aux_sym__friendly_number,
    STATE(153), 1,
      sym_identifier,
    STATE(163), 1,
      sym_integer,
    STATE(166), 1,
      sym__call_parameter,
    STATE(167), 1,
      sym_literal,
    STATE(157), 2,
      sym__double_quote_string,
      sym__single_quote_string,
    STATE(159), 2,
      sym__literal_string,
      sym_decimal_number,
    ACTIONS(99), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    ACTIONS(59), 10,
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
    ACTIONS(61), 12,
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
  [989] = 35,
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
    ACTIONS(117), 1,
      anon_sym_COMMA,
    ACTIONS(119), 1,
      anon_sym_RBRACK,
    STATE(11), 1,
      sym_comment,
    STATE(12), 1,
      aux_sym__friendly_number,
    STATE(15), 1,
      aux_sym_switch_repeat1,
    STATE(77), 1,
      sym_integer,
    STATE(78), 1,
      sym_identifier,
    STATE(79), 1,
      sym__double_quote_string,
    STATE(95), 1,
      sym__single_quote_string,
    STATE(170), 1,
      sym_switch_condition,
    STATE(219), 1,
      sym_binary_expression,
    STATE(226), 1,
      sym_literal,
    STATE(259), 1,
      sym__expression,
    STATE(374), 1,
      aux_sym_switch_repeat2,
    STATE(435), 1,
      sym__alias_identifier,
    STATE(98), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(100), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(110), 2,
      sym__literal_string,
      sym_decimal_number,
    ACTIONS(17), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(89), 6,
      sym_f_string,
      sym_s_string,
      sym_field,
      sym_date,
      sym_time,
      sym_timestamp,
  [1105] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(12), 1,
      sym_comment,
    STATE(16), 1,
      aux_sym__friendly_number,
    ACTIONS(43), 2,
      sym__natural_number,
      anon_sym__,
    ACTIONS(123), 5,
      sym_keyword_from,
      anon_sym_EQ,
      anon_sym_DASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(121), 34,
      ts_builtin_sym_end,
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
  [1162] = 34,
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
    ACTIONS(125), 1,
      anon_sym_COMMA,
    ACTIONS(127), 1,
      anon_sym_RBRACK,
    STATE(11), 1,
      aux_sym_switch_repeat1,
    STATE(12), 1,
      aux_sym__friendly_number,
    STATE(13), 1,
      sym_comment,
    STATE(77), 1,
      sym_integer,
    STATE(78), 1,
      sym_identifier,
    STATE(79), 1,
      sym__double_quote_string,
    STATE(95), 1,
      sym__single_quote_string,
    STATE(170), 1,
      sym_switch_condition,
    STATE(219), 1,
      sym_binary_expression,
    STATE(226), 1,
      sym_literal,
    STATE(259), 1,
      sym__expression,
    STATE(435), 1,
      sym__alias_identifier,
    STATE(98), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(100), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(110), 2,
      sym__literal_string,
      sym_decimal_number,
    ACTIONS(17), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(89), 6,
      sym_f_string,
      sym_s_string,
      sym_field,
      sym_date,
      sym_time,
      sym_timestamp,
  [1275] = 32,
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
    ACTIONS(95), 1,
      anon_sym_BQUOTE,
    ACTIONS(97), 1,
      sym__identifier,
    STATE(12), 1,
      aux_sym__friendly_number,
    STATE(14), 1,
      sym_comment,
    STATE(58), 1,
      sym_identifier,
    STATE(77), 1,
      sym_integer,
    STATE(79), 1,
      sym__double_quote_string,
    STATE(95), 1,
      sym__single_quote_string,
    STATE(223), 1,
      sym_binary_expression,
    STATE(243), 1,
      sym__expression,
    STATE(432), 1,
      sym__agg_rhs_assignment,
    STATE(435), 1,
      sym__alias_identifier,
    STATE(448), 1,
      sym_function_call,
    ACTIONS(83), 2,
      sym_keyword_average,
      sym_keyword_sum,
    STATE(98), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(100), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(110), 2,
      sym__literal_string,
      sym_decimal_number,
    ACTIONS(17), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(89), 7,
      sym_literal,
      sym_f_string,
      sym_s_string,
      sym_field,
      sym_date,
      sym_time,
      sym_timestamp,
  [1384] = 32,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(132), 1,
      anon_sym_LPAREN,
    ACTIONS(137), 1,
      anon_sym_DASH,
    ACTIONS(140), 1,
      anon_sym_DQUOTE,
    ACTIONS(143), 1,
      anon_sym_SQUOTE,
    ACTIONS(146), 1,
      anon_sym_f_DQUOTE,
    ACTIONS(149), 1,
      anon_sym_f_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(152), 1,
      anon_sym_s_DQUOTE,
    ACTIONS(155), 1,
      anon_sym_s_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(158), 1,
      sym__natural_number,
    ACTIONS(161), 1,
      anon_sym__,
    ACTIONS(164), 1,
      anon_sym_DOT,
    ACTIONS(167), 1,
      anon_sym_BQUOTE,
    ACTIONS(170), 1,
      sym__identifier,
    ACTIONS(173), 1,
      anon_sym_AT,
    STATE(12), 1,
      aux_sym__friendly_number,
    STATE(77), 1,
      sym_integer,
    STATE(78), 1,
      sym_identifier,
    STATE(79), 1,
      sym__double_quote_string,
    STATE(95), 1,
      sym__single_quote_string,
    STATE(170), 1,
      sym_switch_condition,
    STATE(219), 1,
      sym_binary_expression,
    STATE(226), 1,
      sym_literal,
    STATE(259), 1,
      sym__expression,
    STATE(435), 1,
      sym__alias_identifier,
    ACTIONS(135), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
    STATE(15), 2,
      sym_comment,
      aux_sym_switch_repeat1,
    STATE(98), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(100), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(110), 2,
      sym__literal_string,
      sym_decimal_number,
    ACTIONS(129), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(89), 6,
      sym_f_string,
      sym_s_string,
      sym_field,
      sym_date,
      sym_time,
      sym_timestamp,
  [1493] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(180), 2,
      sym__natural_number,
      anon_sym__,
    STATE(16), 2,
      aux_sym__friendly_number,
      sym_comment,
    ACTIONS(178), 5,
      sym_keyword_from,
      anon_sym_EQ,
      anon_sym_DASH,
      anon_sym_GT,
      anon_sym_LT,
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
  [1548] = 32,
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
    ACTIONS(183), 1,
      anon_sym_COMMA,
    ACTIONS(185), 1,
      anon_sym_RBRACK,
    STATE(12), 1,
      aux_sym__friendly_number,
    STATE(17), 1,
      sym_comment,
    STATE(77), 1,
      sym_integer,
    STATE(78), 1,
      sym_identifier,
    STATE(79), 1,
      sym__double_quote_string,
    STATE(95), 1,
      sym__single_quote_string,
    STATE(172), 1,
      sym__expression,
    STATE(190), 1,
      sym_assignment,
    STATE(371), 1,
      sym_term,
    STATE(435), 1,
      sym__alias_identifier,
    STATE(98), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(100), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(110), 2,
      sym__literal_string,
      sym_decimal_number,
    ACTIONS(17), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(89), 8,
      sym_literal,
      sym_f_string,
      sym_s_string,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [1657] = 32,
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
    ACTIONS(187), 1,
      anon_sym_LBRACK,
    ACTIONS(189), 1,
      sym_bang,
    STATE(12), 1,
      aux_sym__friendly_number,
    STATE(18), 1,
      sym_comment,
    STATE(77), 1,
      sym_integer,
    STATE(78), 1,
      sym_identifier,
    STATE(79), 1,
      sym__double_quote_string,
    STATE(95), 1,
      sym__single_quote_string,
    STATE(134), 1,
      sym__expression,
    STATE(190), 1,
      sym_assignment,
    STATE(277), 1,
      sym_term,
    STATE(435), 1,
      sym__alias_identifier,
    STATE(98), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(100), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(110), 2,
      sym__literal_string,
      sym_decimal_number,
    ACTIONS(17), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(89), 8,
      sym_literal,
      sym_f_string,
      sym_s_string,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [1766] = 32,
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
    ACTIONS(191), 1,
      anon_sym_LPAREN,
    ACTIONS(193), 1,
      anon_sym_COMMA,
    ACTIONS(195), 1,
      anon_sym_RBRACK,
    STATE(12), 1,
      aux_sym__friendly_number,
    STATE(19), 1,
      sym_comment,
    STATE(77), 1,
      sym_integer,
    STATE(78), 1,
      sym_identifier,
    STATE(79), 1,
      sym__double_quote_string,
    STATE(95), 1,
      sym__single_quote_string,
    STATE(172), 1,
      sym__expression,
    STATE(190), 1,
      sym_assignment,
    STATE(391), 1,
      sym_term,
    STATE(435), 1,
      sym__alias_identifier,
    STATE(98), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(100), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(110), 2,
      sym__literal_string,
      sym_decimal_number,
    ACTIONS(17), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(89), 8,
      sym_literal,
      sym_f_string,
      sym_s_string,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [1875] = 32,
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
    ACTIONS(187), 1,
      anon_sym_LBRACK,
    ACTIONS(189), 1,
      sym_bang,
    STATE(12), 1,
      aux_sym__friendly_number,
    STATE(20), 1,
      sym_comment,
    STATE(77), 1,
      sym_integer,
    STATE(78), 1,
      sym_identifier,
    STATE(79), 1,
      sym__double_quote_string,
    STATE(95), 1,
      sym__single_quote_string,
    STATE(121), 1,
      sym__expression,
    STATE(190), 1,
      sym_assignment,
    STATE(277), 1,
      sym_term,
    STATE(435), 1,
      sym__alias_identifier,
    STATE(98), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(100), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(110), 2,
      sym__literal_string,
      sym_decimal_number,
    ACTIONS(17), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(89), 8,
      sym_literal,
      sym_f_string,
      sym_s_string,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [1984] = 32,
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
    ACTIONS(197), 1,
      anon_sym_COMMA,
    ACTIONS(199), 1,
      anon_sym_RBRACK,
    STATE(12), 1,
      aux_sym__friendly_number,
    STATE(21), 1,
      sym_comment,
    STATE(77), 1,
      sym_integer,
    STATE(78), 1,
      sym_identifier,
    STATE(79), 1,
      sym__double_quote_string,
    STATE(95), 1,
      sym__single_quote_string,
    STATE(172), 1,
      sym__expression,
    STATE(190), 1,
      sym_assignment,
    STATE(373), 1,
      sym_term,
    STATE(435), 1,
      sym__alias_identifier,
    STATE(98), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(100), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(110), 2,
      sym__literal_string,
      sym_decimal_number,
    ACTIONS(17), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(89), 8,
      sym_literal,
      sym_f_string,
      sym_s_string,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [2093] = 33,
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
    STATE(12), 1,
      aux_sym__friendly_number,
    STATE(15), 1,
      aux_sym_switch_repeat1,
    STATE(22), 1,
      sym_comment,
    STATE(77), 1,
      sym_integer,
    STATE(78), 1,
      sym_identifier,
    STATE(79), 1,
      sym__double_quote_string,
    STATE(95), 1,
      sym__single_quote_string,
    STATE(170), 1,
      sym_switch_condition,
    STATE(219), 1,
      sym_binary_expression,
    STATE(226), 1,
      sym_literal,
    STATE(259), 1,
      sym__expression,
    STATE(435), 1,
      sym__alias_identifier,
    ACTIONS(201), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
    STATE(98), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(100), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(110), 2,
      sym__literal_string,
      sym_decimal_number,
    ACTIONS(17), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(89), 6,
      sym_f_string,
      sym_s_string,
      sym_field,
      sym_date,
      sym_time,
      sym_timestamp,
  [2204] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(16), 1,
      aux_sym__friendly_number,
    STATE(23), 1,
      sym_comment,
    ACTIONS(43), 2,
      sym__natural_number,
      anon_sym__,
    ACTIONS(205), 5,
      sym_keyword_from,
      anon_sym_EQ,
      anon_sym_DASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(203), 34,
      ts_builtin_sym_end,
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
  [2261] = 32,
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
    ACTIONS(207), 1,
      anon_sym_COMMA,
    ACTIONS(209), 1,
      anon_sym_RBRACK,
    STATE(12), 1,
      aux_sym__friendly_number,
    STATE(24), 1,
      sym_comment,
    STATE(77), 1,
      sym_integer,
    STATE(78), 1,
      sym_identifier,
    STATE(79), 1,
      sym__double_quote_string,
    STATE(95), 1,
      sym__single_quote_string,
    STATE(172), 1,
      sym__expression,
    STATE(190), 1,
      sym_assignment,
    STATE(366), 1,
      sym_term,
    STATE(435), 1,
      sym__alias_identifier,
    STATE(98), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(100), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(110), 2,
      sym__literal_string,
      sym_decimal_number,
    ACTIONS(17), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(89), 8,
      sym_literal,
      sym_f_string,
      sym_s_string,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [2370] = 31,
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
    ACTIONS(211), 1,
      anon_sym_RBRACK,
    STATE(12), 1,
      aux_sym__friendly_number,
    STATE(25), 1,
      sym_comment,
    STATE(77), 1,
      sym_integer,
    STATE(78), 1,
      sym_identifier,
    STATE(79), 1,
      sym__double_quote_string,
    STATE(95), 1,
      sym__single_quote_string,
    STATE(172), 1,
      sym__expression,
    STATE(190), 1,
      sym_assignment,
    STATE(407), 1,
      sym_term,
    STATE(435), 1,
      sym__alias_identifier,
    STATE(98), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(100), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(110), 2,
      sym__literal_string,
      sym_decimal_number,
    ACTIONS(17), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(89), 8,
      sym_literal,
      sym_f_string,
      sym_s_string,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [2476] = 31,
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
    STATE(12), 1,
      aux_sym__friendly_number,
    STATE(26), 1,
      sym_comment,
    STATE(77), 1,
      sym_integer,
    STATE(78), 1,
      sym_identifier,
    STATE(79), 1,
      sym__double_quote_string,
    STATE(95), 1,
      sym__single_quote_string,
    STATE(134), 1,
      sym__expression,
    STATE(271), 1,
      sym_assignment,
    STATE(272), 1,
      sym_term,
    STATE(435), 1,
      sym__alias_identifier,
    STATE(98), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(100), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(110), 2,
      sym__literal_string,
      sym_decimal_number,
    ACTIONS(17), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(89), 8,
      sym_literal,
      sym_f_string,
      sym_s_string,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [2582] = 31,
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
    STATE(12), 1,
      aux_sym__friendly_number,
    STATE(27), 1,
      sym_comment,
    STATE(77), 1,
      sym_integer,
    STATE(78), 1,
      sym_identifier,
    STATE(79), 1,
      sym__double_quote_string,
    STATE(95), 1,
      sym__single_quote_string,
    STATE(121), 1,
      sym__expression,
    STATE(271), 1,
      sym_assignment,
    STATE(272), 1,
      sym_term,
    STATE(435), 1,
      sym__alias_identifier,
    STATE(98), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(100), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(110), 2,
      sym__literal_string,
      sym_decimal_number,
    ACTIONS(17), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(89), 8,
      sym_literal,
      sym_f_string,
      sym_s_string,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [2688] = 31,
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
      anon_sym_LBRACK,
    STATE(12), 1,
      aux_sym__friendly_number,
    STATE(28), 1,
      sym_comment,
    STATE(77), 1,
      sym_integer,
    STATE(78), 1,
      sym_identifier,
    STATE(79), 1,
      sym__double_quote_string,
    STATE(95), 1,
      sym__single_quote_string,
    STATE(172), 1,
      sym__expression,
    STATE(190), 1,
      sym_assignment,
    STATE(434), 1,
      sym_term,
    STATE(435), 1,
      sym__alias_identifier,
    STATE(98), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(100), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(110), 2,
      sym__literal_string,
      sym_decimal_number,
    ACTIONS(17), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(89), 8,
      sym_literal,
      sym_f_string,
      sym_s_string,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [2794] = 31,
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
    STATE(12), 1,
      aux_sym__friendly_number,
    STATE(29), 1,
      sym_comment,
    STATE(77), 1,
      sym_integer,
    STATE(78), 1,
      sym_identifier,
    STATE(79), 1,
      sym__double_quote_string,
    STATE(95), 1,
      sym__single_quote_string,
    STATE(172), 1,
      sym__expression,
    STATE(190), 1,
      sym_assignment,
    STATE(407), 1,
      sym_term,
    STATE(435), 1,
      sym__alias_identifier,
    STATE(98), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(100), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(110), 2,
      sym__literal_string,
      sym_decimal_number,
    ACTIONS(17), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(89), 8,
      sym_literal,
      sym_f_string,
      sym_s_string,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [2900] = 33,
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
    STATE(12), 1,
      aux_sym__friendly_number,
    STATE(22), 1,
      aux_sym_switch_repeat1,
    STATE(30), 1,
      sym_comment,
    STATE(77), 1,
      sym_integer,
    STATE(78), 1,
      sym_identifier,
    STATE(79), 1,
      sym__double_quote_string,
    STATE(95), 1,
      sym__single_quote_string,
    STATE(170), 1,
      sym_switch_condition,
    STATE(219), 1,
      sym_binary_expression,
    STATE(226), 1,
      sym_literal,
    STATE(259), 1,
      sym__expression,
    STATE(435), 1,
      sym__alias_identifier,
    STATE(98), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(100), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(110), 2,
      sym__literal_string,
      sym_decimal_number,
    ACTIONS(17), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(89), 6,
      sym_f_string,
      sym_s_string,
      sym_field,
      sym_date,
      sym_time,
      sym_timestamp,
  [3010] = 31,
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
    STATE(12), 1,
      aux_sym__friendly_number,
    STATE(31), 1,
      sym_comment,
    STATE(77), 1,
      sym_integer,
    STATE(78), 1,
      sym_identifier,
    STATE(79), 1,
      sym__double_quote_string,
    STATE(95), 1,
      sym__single_quote_string,
    STATE(172), 1,
      sym__expression,
    STATE(190), 1,
      sym_assignment,
    STATE(407), 1,
      sym_term,
    STATE(435), 1,
      sym__alias_identifier,
    STATE(98), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(100), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(110), 2,
      sym__literal_string,
      sym_decimal_number,
    ACTIONS(17), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(89), 8,
      sym_literal,
      sym_f_string,
      sym_s_string,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [3116] = 31,
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
      anon_sym_RBRACK,
    STATE(12), 1,
      aux_sym__friendly_number,
    STATE(32), 1,
      sym_comment,
    STATE(77), 1,
      sym_integer,
    STATE(78), 1,
      sym_identifier,
    STATE(79), 1,
      sym__double_quote_string,
    STATE(95), 1,
      sym__single_quote_string,
    STATE(172), 1,
      sym__expression,
    STATE(190), 1,
      sym_assignment,
    STATE(407), 1,
      sym_term,
    STATE(435), 1,
      sym__alias_identifier,
    STATE(98), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(100), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(110), 2,
      sym__literal_string,
      sym_decimal_number,
    ACTIONS(17), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(89), 8,
      sym_literal,
      sym_f_string,
      sym_s_string,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [3222] = 32,
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
      anon_sym_COMMA,
    ACTIONS(227), 1,
      anon_sym_RBRACK,
    ACTIONS(229), 1,
      anon_sym_EQ_EQ,
    STATE(12), 1,
      aux_sym__friendly_number,
    STATE(33), 1,
      sym_comment,
    STATE(77), 1,
      sym_integer,
    STATE(78), 1,
      sym_identifier,
    STATE(79), 1,
      sym__double_quote_string,
    STATE(95), 1,
      sym__single_quote_string,
    STATE(193), 1,
      sym_binary_expression,
    STATE(259), 1,
      sym__expression,
    STATE(435), 1,
      sym__alias_identifier,
    STATE(98), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(100), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(110), 2,
      sym__literal_string,
      sym_decimal_number,
    ACTIONS(17), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(89), 7,
      sym_literal,
      sym_f_string,
      sym_s_string,
      sym_field,
      sym_date,
      sym_time,
      sym_timestamp,
  [3330] = 31,
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
    STATE(12), 1,
      aux_sym__friendly_number,
    STATE(34), 1,
      sym_comment,
    STATE(77), 1,
      sym_integer,
    STATE(78), 1,
      sym_identifier,
    STATE(79), 1,
      sym__double_quote_string,
    STATE(95), 1,
      sym__single_quote_string,
    STATE(172), 1,
      sym__expression,
    STATE(190), 1,
      sym_assignment,
    STATE(407), 1,
      sym_term,
    STATE(435), 1,
      sym__alias_identifier,
    STATE(98), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(100), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(110), 2,
      sym__literal_string,
      sym_decimal_number,
    ACTIONS(17), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(89), 8,
      sym_literal,
      sym_f_string,
      sym_s_string,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [3436] = 31,
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
    ACTIONS(233), 1,
      anon_sym_LPAREN,
    ACTIONS(235), 1,
      anon_sym_RBRACK,
    STATE(12), 1,
      aux_sym__friendly_number,
    STATE(35), 1,
      sym_comment,
    STATE(77), 1,
      sym_integer,
    STATE(78), 1,
      sym_identifier,
    STATE(79), 1,
      sym__double_quote_string,
    STATE(95), 1,
      sym__single_quote_string,
    STATE(172), 1,
      sym__expression,
    STATE(190), 1,
      sym_assignment,
    STATE(395), 1,
      sym_term,
    STATE(435), 1,
      sym__alias_identifier,
    STATE(98), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(100), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(110), 2,
      sym__literal_string,
      sym_decimal_number,
    ACTIONS(17), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(89), 8,
      sym_literal,
      sym_f_string,
      sym_s_string,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [3542] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(36), 1,
      sym_comment,
    ACTIONS(239), 5,
      sym_keyword_from,
      anon_sym_EQ,
      anon_sym_DASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(237), 36,
      ts_builtin_sym_end,
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
  [3594] = 31,
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
    ACTIONS(233), 1,
      anon_sym_LPAREN,
    ACTIONS(241), 1,
      anon_sym_RBRACK,
    STATE(12), 1,
      aux_sym__friendly_number,
    STATE(37), 1,
      sym_comment,
    STATE(77), 1,
      sym_integer,
    STATE(78), 1,
      sym_identifier,
    STATE(79), 1,
      sym__double_quote_string,
    STATE(95), 1,
      sym__single_quote_string,
    STATE(172), 1,
      sym__expression,
    STATE(190), 1,
      sym_assignment,
    STATE(395), 1,
      sym_term,
    STATE(435), 1,
      sym__alias_identifier,
    STATE(98), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(100), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(110), 2,
      sym__literal_string,
      sym_decimal_number,
    ACTIONS(17), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(89), 8,
      sym_literal,
      sym_f_string,
      sym_s_string,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [3700] = 31,
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
    ACTIONS(233), 1,
      anon_sym_LPAREN,
    ACTIONS(243), 1,
      anon_sym_RBRACK,
    STATE(12), 1,
      aux_sym__friendly_number,
    STATE(38), 1,
      sym_comment,
    STATE(77), 1,
      sym_integer,
    STATE(78), 1,
      sym_identifier,
    STATE(79), 1,
      sym__double_quote_string,
    STATE(95), 1,
      sym__single_quote_string,
    STATE(172), 1,
      sym__expression,
    STATE(190), 1,
      sym_assignment,
    STATE(395), 1,
      sym_term,
    STATE(435), 1,
      sym__alias_identifier,
    STATE(98), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(100), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(110), 2,
      sym__literal_string,
      sym_decimal_number,
    ACTIONS(17), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(89), 8,
      sym_literal,
      sym_f_string,
      sym_s_string,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [3806] = 33,
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
    ACTIONS(245), 1,
      anon_sym_RBRACK,
    STATE(12), 1,
      aux_sym__friendly_number,
    STATE(22), 1,
      aux_sym_switch_repeat1,
    STATE(39), 1,
      sym_comment,
    STATE(77), 1,
      sym_integer,
    STATE(78), 1,
      sym_identifier,
    STATE(79), 1,
      sym__double_quote_string,
    STATE(95), 1,
      sym__single_quote_string,
    STATE(170), 1,
      sym_switch_condition,
    STATE(219), 1,
      sym_binary_expression,
    STATE(226), 1,
      sym_literal,
    STATE(259), 1,
      sym__expression,
    STATE(435), 1,
      sym__alias_identifier,
    STATE(98), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(100), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(110), 2,
      sym__literal_string,
      sym_decimal_number,
    ACTIONS(17), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(89), 6,
      sym_f_string,
      sym_s_string,
      sym_field,
      sym_date,
      sym_time,
      sym_timestamp,
  [3916] = 31,
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
    STATE(12), 1,
      aux_sym__friendly_number,
    STATE(40), 1,
      sym_comment,
    STATE(77), 1,
      sym_integer,
    STATE(78), 1,
      sym_identifier,
    STATE(79), 1,
      sym__double_quote_string,
    STATE(95), 1,
      sym__single_quote_string,
    STATE(172), 1,
      sym__expression,
    STATE(271), 1,
      sym_assignment,
    STATE(272), 1,
      sym_term,
    STATE(435), 1,
      sym__alias_identifier,
    STATE(98), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(100), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(110), 2,
      sym__literal_string,
      sym_decimal_number,
    ACTIONS(17), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(89), 8,
      sym_literal,
      sym_f_string,
      sym_s_string,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [4022] = 30,
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
    STATE(12), 1,
      aux_sym__friendly_number,
    STATE(41), 1,
      sym_comment,
    STATE(77), 1,
      sym_integer,
    STATE(78), 1,
      sym_identifier,
    STATE(79), 1,
      sym__double_quote_string,
    STATE(95), 1,
      sym__single_quote_string,
    STATE(172), 1,
      sym__expression,
    STATE(190), 1,
      sym_assignment,
    STATE(407), 1,
      sym_term,
    STATE(435), 1,
      sym__alias_identifier,
    STATE(98), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(100), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(110), 2,
      sym__literal_string,
      sym_decimal_number,
    ACTIONS(17), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(89), 8,
      sym_literal,
      sym_f_string,
      sym_s_string,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [4125] = 30,
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
    STATE(12), 1,
      aux_sym__friendly_number,
    STATE(42), 1,
      sym_comment,
    STATE(77), 1,
      sym_integer,
    STATE(78), 1,
      sym_identifier,
    STATE(79), 1,
      sym__double_quote_string,
    STATE(95), 1,
      sym__single_quote_string,
    STATE(172), 1,
      sym__expression,
    STATE(190), 1,
      sym_assignment,
    STATE(435), 1,
      sym__alias_identifier,
    STATE(500), 1,
      sym_term,
    STATE(98), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(100), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(110), 2,
      sym__literal_string,
      sym_decimal_number,
    ACTIONS(17), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(89), 8,
      sym_literal,
      sym_f_string,
      sym_s_string,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [4228] = 30,
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
    ACTIONS(233), 1,
      anon_sym_LPAREN,
    STATE(12), 1,
      aux_sym__friendly_number,
    STATE(43), 1,
      sym_comment,
    STATE(77), 1,
      sym_integer,
    STATE(78), 1,
      sym_identifier,
    STATE(79), 1,
      sym__double_quote_string,
    STATE(95), 1,
      sym__single_quote_string,
    STATE(172), 1,
      sym__expression,
    STATE(190), 1,
      sym_assignment,
    STATE(395), 1,
      sym_term,
    STATE(435), 1,
      sym__alias_identifier,
    STATE(98), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(100), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(110), 2,
      sym__literal_string,
      sym_decimal_number,
    ACTIONS(17), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(89), 8,
      sym_literal,
      sym_f_string,
      sym_s_string,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [4331] = 32,
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
    STATE(12), 1,
      aux_sym__friendly_number,
    STATE(22), 1,
      aux_sym_switch_repeat1,
    STATE(44), 1,
      sym_comment,
    STATE(77), 1,
      sym_integer,
    STATE(78), 1,
      sym_identifier,
    STATE(79), 1,
      sym__double_quote_string,
    STATE(95), 1,
      sym__single_quote_string,
    STATE(170), 1,
      sym_switch_condition,
    STATE(219), 1,
      sym_binary_expression,
    STATE(226), 1,
      sym_literal,
    STATE(259), 1,
      sym__expression,
    STATE(435), 1,
      sym__alias_identifier,
    STATE(98), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(100), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(110), 2,
      sym__literal_string,
      sym_decimal_number,
    ACTIONS(17), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(89), 6,
      sym_f_string,
      sym_s_string,
      sym_field,
      sym_date,
      sym_time,
      sym_timestamp,
  [4438] = 29,
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
    STATE(12), 1,
      aux_sym__friendly_number,
    STATE(45), 1,
      sym_comment,
    STATE(77), 1,
      sym_integer,
    STATE(78), 1,
      sym_identifier,
    STATE(79), 1,
      sym__double_quote_string,
    STATE(95), 1,
      sym__single_quote_string,
    STATE(198), 1,
      sym__expression,
    STATE(435), 1,
      sym__alias_identifier,
    ACTIONS(247), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
    STATE(98), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(100), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(110), 2,
      sym__literal_string,
      sym_decimal_number,
    ACTIONS(17), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(89), 8,
      sym_literal,
      sym_f_string,
      sym_s_string,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [4539] = 30,
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
    STATE(12), 1,
      aux_sym__friendly_number,
    STATE(46), 1,
      sym_comment,
    STATE(77), 1,
      sym_integer,
    STATE(78), 1,
      sym_identifier,
    STATE(79), 1,
      sym__double_quote_string,
    STATE(95), 1,
      sym__single_quote_string,
    STATE(203), 1,
      sym_binary_expression,
    STATE(259), 1,
      sym__expression,
    STATE(435), 1,
      sym__alias_identifier,
    STATE(98), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(100), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(110), 2,
      sym__literal_string,
      sym_decimal_number,
    ACTIONS(17), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(89), 7,
      sym_literal,
      sym_f_string,
      sym_s_string,
      sym_field,
      sym_date,
      sym_time,
      sym_timestamp,
  [4641] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(47), 1,
      sym_comment,
    ACTIONS(253), 6,
      sym_keyword_from,
      anon_sym_EQ,
      anon_sym_DASH,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_T,
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
  [4691] = 30,
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
    STATE(12), 1,
      aux_sym__friendly_number,
    STATE(48), 1,
      sym_comment,
    STATE(77), 1,
      sym_integer,
    STATE(78), 1,
      sym_identifier,
    STATE(79), 1,
      sym__double_quote_string,
    STATE(95), 1,
      sym__single_quote_string,
    STATE(203), 1,
      sym_binary_expression,
    STATE(259), 1,
      sym__expression,
    STATE(435), 1,
      sym__alias_identifier,
    STATE(98), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(100), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(110), 2,
      sym__literal_string,
      sym_decimal_number,
    ACTIONS(17), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(89), 7,
      sym_literal,
      sym_f_string,
      sym_s_string,
      sym_field,
      sym_date,
      sym_time,
      sym_timestamp,
  [4793] = 29,
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
    ACTIONS(257), 1,
      anon_sym_LPAREN,
    STATE(12), 1,
      aux_sym__friendly_number,
    STATE(49), 1,
      sym_comment,
    STATE(77), 1,
      sym_integer,
    STATE(78), 1,
      sym_identifier,
    STATE(79), 1,
      sym__double_quote_string,
    STATE(95), 1,
      sym__single_quote_string,
    STATE(118), 1,
      sym__expression,
    STATE(274), 1,
      sym__boolean_expression,
    STATE(435), 1,
      sym__alias_identifier,
    STATE(98), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(100), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(110), 2,
      sym__literal_string,
      sym_decimal_number,
    ACTIONS(17), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(89), 8,
      sym_literal,
      sym_f_string,
      sym_s_string,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [4893] = 28,
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
    STATE(12), 1,
      aux_sym__friendly_number,
    STATE(50), 1,
      sym_comment,
    STATE(77), 1,
      sym_integer,
    STATE(78), 1,
      sym_identifier,
    STATE(79), 1,
      sym__double_quote_string,
    STATE(95), 1,
      sym__single_quote_string,
    STATE(96), 1,
      sym__expression,
    STATE(435), 1,
      sym__alias_identifier,
    STATE(98), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(100), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(110), 2,
      sym__literal_string,
      sym_decimal_number,
    ACTIONS(17), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(89), 8,
      sym_literal,
      sym_f_string,
      sym_s_string,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [4990] = 28,
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
    STATE(12), 1,
      aux_sym__friendly_number,
    STATE(51), 1,
      sym_comment,
    STATE(77), 1,
      sym_integer,
    STATE(78), 1,
      sym_identifier,
    STATE(79), 1,
      sym__double_quote_string,
    STATE(95), 1,
      sym__single_quote_string,
    STATE(241), 1,
      sym__expression,
    STATE(435), 1,
      sym__alias_identifier,
    STATE(98), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(100), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(110), 2,
      sym__literal_string,
      sym_decimal_number,
    ACTIONS(17), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(89), 8,
      sym_literal,
      sym_f_string,
      sym_s_string,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [5087] = 28,
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
    STATE(12), 1,
      aux_sym__friendly_number,
    STATE(52), 1,
      sym_comment,
    STATE(77), 1,
      sym_integer,
    STATE(78), 1,
      sym_identifier,
    STATE(79), 1,
      sym__double_quote_string,
    STATE(95), 1,
      sym__single_quote_string,
    STATE(105), 1,
      sym__expression,
    STATE(435), 1,
      sym__alias_identifier,
    STATE(98), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(100), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(110), 2,
      sym__literal_string,
      sym_decimal_number,
    ACTIONS(17), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(89), 8,
      sym_literal,
      sym_f_string,
      sym_s_string,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [5184] = 29,
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
    STATE(12), 1,
      aux_sym__friendly_number,
    STATE(53), 1,
      sym_comment,
    STATE(77), 1,
      sym_integer,
    STATE(78), 1,
      sym_identifier,
    STATE(79), 1,
      sym__double_quote_string,
    STATE(95), 1,
      sym__single_quote_string,
    STATE(223), 1,
      sym_binary_expression,
    STATE(228), 1,
      sym__expression,
    STATE(435), 1,
      sym__alias_identifier,
    STATE(98), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(100), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(110), 2,
      sym__literal_string,
      sym_decimal_number,
    ACTIONS(17), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(89), 7,
      sym_literal,
      sym_f_string,
      sym_s_string,
      sym_field,
      sym_date,
      sym_time,
      sym_timestamp,
  [5283] = 28,
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
    STATE(12), 1,
      aux_sym__friendly_number,
    STATE(54), 1,
      sym_comment,
    STATE(77), 1,
      sym_integer,
    STATE(78), 1,
      sym_identifier,
    STATE(79), 1,
      sym__double_quote_string,
    STATE(95), 1,
      sym__single_quote_string,
    STATE(200), 1,
      sym__expression,
    STATE(435), 1,
      sym__alias_identifier,
    STATE(98), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(100), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(110), 2,
      sym__literal_string,
      sym_decimal_number,
    ACTIONS(17), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(89), 8,
      sym_literal,
      sym_f_string,
      sym_s_string,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [5380] = 28,
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
    STATE(12), 1,
      aux_sym__friendly_number,
    STATE(55), 1,
      sym_comment,
    STATE(77), 1,
      sym_integer,
    STATE(78), 1,
      sym_identifier,
    STATE(79), 1,
      sym__double_quote_string,
    STATE(95), 1,
      sym__single_quote_string,
    STATE(106), 1,
      sym__expression,
    STATE(435), 1,
      sym__alias_identifier,
    STATE(98), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(100), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(110), 2,
      sym__literal_string,
      sym_decimal_number,
    ACTIONS(17), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(89), 8,
      sym_literal,
      sym_f_string,
      sym_s_string,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [5477] = 29,
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
    STATE(12), 1,
      aux_sym__friendly_number,
    STATE(56), 1,
      sym_comment,
    STATE(77), 1,
      sym_integer,
    STATE(78), 1,
      sym_identifier,
    STATE(79), 1,
      sym__double_quote_string,
    STATE(95), 1,
      sym__single_quote_string,
    STATE(203), 1,
      sym_binary_expression,
    STATE(259), 1,
      sym__expression,
    STATE(435), 1,
      sym__alias_identifier,
    STATE(98), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(100), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(110), 2,
      sym__literal_string,
      sym_decimal_number,
    ACTIONS(17), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(89), 7,
      sym_literal,
      sym_f_string,
      sym_s_string,
      sym_field,
      sym_date,
      sym_time,
      sym_timestamp,
  [5576] = 28,
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
    STATE(12), 1,
      aux_sym__friendly_number,
    STATE(57), 1,
      sym_comment,
    STATE(77), 1,
      sym_integer,
    STATE(78), 1,
      sym_identifier,
    STATE(79), 1,
      sym__double_quote_string,
    STATE(95), 1,
      sym__single_quote_string,
    STATE(115), 1,
      sym__expression,
    STATE(435), 1,
      sym__alias_identifier,
    STATE(98), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(100), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(110), 2,
      sym__literal_string,
      sym_decimal_number,
    ACTIONS(17), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(89), 8,
      sym_literal,
      sym_f_string,
      sym_s_string,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [5673] = 21,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(261), 1,
      anon_sym_DASH,
    ACTIONS(263), 1,
      anon_sym_DQUOTE,
    ACTIONS(265), 1,
      anon_sym_SQUOTE,
    ACTIONS(267), 1,
      sym__natural_number,
    ACTIONS(269), 1,
      anon_sym__,
    ACTIONS(271), 1,
      anon_sym_DOT,
    ACTIONS(273), 1,
      anon_sym_BQUOTE,
    ACTIONS(275), 1,
      sym__identifier,
    STATE(58), 1,
      sym_comment,
    STATE(124), 1,
      aux_sym_function_call_repeat1,
    STATE(206), 1,
      aux_sym__friendly_number,
    STATE(209), 1,
      sym_identifier,
    STATE(214), 1,
      sym_literal,
    STATE(216), 1,
      sym__call_parameter,
    STATE(231), 1,
      sym_integer,
    STATE(244), 2,
      sym__literal_string,
      sym_decimal_number,
    STATE(245), 2,
      sym__double_quote_string,
      sym__single_quote_string,
    ACTIONS(259), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    ACTIONS(61), 4,
      sym_keyword_and,
      sym_keyword_or,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(59), 13,
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
  [5756] = 28,
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
    STATE(12), 1,
      aux_sym__friendly_number,
    STATE(59), 1,
      sym_comment,
    STATE(77), 1,
      sym_integer,
    STATE(78), 1,
      sym_identifier,
    STATE(79), 1,
      sym__double_quote_string,
    STATE(95), 1,
      sym__single_quote_string,
    STATE(107), 1,
      sym__expression,
    STATE(435), 1,
      sym__alias_identifier,
    STATE(98), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(100), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(110), 2,
      sym__literal_string,
      sym_decimal_number,
    ACTIONS(17), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(89), 8,
      sym_literal,
      sym_f_string,
      sym_s_string,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [5853] = 28,
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
    STATE(12), 1,
      aux_sym__friendly_number,
    STATE(60), 1,
      sym_comment,
    STATE(77), 1,
      sym_integer,
    STATE(78), 1,
      sym_identifier,
    STATE(79), 1,
      sym__double_quote_string,
    STATE(95), 1,
      sym__single_quote_string,
    STATE(108), 1,
      sym__expression,
    STATE(435), 1,
      sym__alias_identifier,
    STATE(98), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(100), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(110), 2,
      sym__literal_string,
      sym_decimal_number,
    ACTIONS(17), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(89), 8,
      sym_literal,
      sym_f_string,
      sym_s_string,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [5950] = 28,
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
    STATE(12), 1,
      aux_sym__friendly_number,
    STATE(61), 1,
      sym_comment,
    STATE(77), 1,
      sym_integer,
    STATE(78), 1,
      sym_identifier,
    STATE(79), 1,
      sym__double_quote_string,
    STATE(95), 1,
      sym__single_quote_string,
    STATE(242), 1,
      sym__expression,
    STATE(435), 1,
      sym__alias_identifier,
    STATE(98), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(100), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(110), 2,
      sym__literal_string,
      sym_decimal_number,
    ACTIONS(17), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(89), 8,
      sym_literal,
      sym_f_string,
      sym_s_string,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [6047] = 28,
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
    STATE(12), 1,
      aux_sym__friendly_number,
    STATE(62), 1,
      sym_comment,
    STATE(77), 1,
      sym_integer,
    STATE(78), 1,
      sym_identifier,
    STATE(79), 1,
      sym__double_quote_string,
    STATE(92), 1,
      sym__expression,
    STATE(95), 1,
      sym__single_quote_string,
    STATE(435), 1,
      sym__alias_identifier,
    STATE(98), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(100), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(110), 2,
      sym__literal_string,
      sym_decimal_number,
    ACTIONS(17), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(89), 8,
      sym_literal,
      sym_f_string,
      sym_s_string,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [6144] = 29,
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
    STATE(12), 1,
      aux_sym__friendly_number,
    STATE(63), 1,
      sym_comment,
    STATE(77), 1,
      sym_integer,
    STATE(78), 1,
      sym_identifier,
    STATE(79), 1,
      sym__double_quote_string,
    STATE(95), 1,
      sym__single_quote_string,
    STATE(259), 1,
      sym__expression,
    STATE(435), 1,
      sym__alias_identifier,
    STATE(98), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(100), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(110), 2,
      sym__literal_string,
      sym_decimal_number,
    STATE(173), 2,
      sym_s_string,
      sym_binary_expression,
    ACTIONS(17), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(89), 6,
      sym_literal,
      sym_f_string,
      sym_field,
      sym_date,
      sym_time,
      sym_timestamp,
  [6243] = 28,
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
    STATE(12), 1,
      aux_sym__friendly_number,
    STATE(64), 1,
      sym_comment,
    STATE(77), 1,
      sym_integer,
    STATE(78), 1,
      sym_identifier,
    STATE(79), 1,
      sym__double_quote_string,
    STATE(94), 1,
      sym__expression,
    STATE(95), 1,
      sym__single_quote_string,
    STATE(435), 1,
      sym__alias_identifier,
    STATE(98), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(100), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(110), 2,
      sym__literal_string,
      sym_decimal_number,
    ACTIONS(17), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(89), 8,
      sym_literal,
      sym_f_string,
      sym_s_string,
      sym_field,
      sym_binary_expression,
      sym_date,
      sym_time,
      sym_timestamp,
  [6340] = 29,
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
    STATE(12), 1,
      aux_sym__friendly_number,
    STATE(65), 1,
      sym_comment,
    STATE(77), 1,
      sym_integer,
    STATE(78), 1,
      sym_identifier,
    STATE(79), 1,
      sym__double_quote_string,
    STATE(95), 1,
      sym__single_quote_string,
    STATE(215), 1,
      sym_binary_expression,
    STATE(255), 1,
      sym__expression,
    STATE(435), 1,
      sym__alias_identifier,
    STATE(98), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(100), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(110), 2,
      sym__literal_string,
      sym_decimal_number,
    ACTIONS(17), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(89), 7,
      sym_literal,
      sym_f_string,
      sym_s_string,
      sym_field,
      sym_date,
      sym_time,
      sym_timestamp,
  [6439] = 29,
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
    STATE(12), 1,
      aux_sym__friendly_number,
    STATE(66), 1,
      sym_comment,
    STATE(77), 1,
      sym_integer,
    STATE(78), 1,
      sym_identifier,
    STATE(79), 1,
      sym__double_quote_string,
    STATE(95), 1,
      sym__single_quote_string,
    STATE(230), 1,
      sym_binary_expression,
    STATE(255), 1,
      sym__expression,
    STATE(435), 1,
      sym__alias_identifier,
    STATE(98), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(100), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(110), 2,
      sym__literal_string,
      sym_decimal_number,
    ACTIONS(17), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(89), 7,
      sym_literal,
      sym_f_string,
      sym_s_string,
      sym_field,
      sym_date,
      sym_time,
      sym_timestamp,
  [6538] = 29,
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
    STATE(12), 1,
      aux_sym__friendly_number,
    STATE(67), 1,
      sym_comment,
    STATE(77), 1,
      sym_integer,
    STATE(78), 1,
      sym_identifier,
    STATE(79), 1,
      sym__double_quote_string,
    STATE(95), 1,
      sym__single_quote_string,
    STATE(234), 1,
      sym_binary_expression,
    STATE(255), 1,
      sym__expression,
    STATE(435), 1,
      sym__alias_identifier,
    STATE(98), 2,
      sym__double_f_string,
      sym__triple_f_string,
    STATE(100), 2,
      sym__double_s_string,
      sym__triple_s_string,
    STATE(110), 2,
      sym__literal_string,
      sym_decimal_number,
    ACTIONS(17), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    STATE(89), 7,
      sym_literal,
      sym_f_string,
      sym_s_string,
      sym_field,
      sym_date,
      sym_time,
      sym_timestamp,
  [6637] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(68), 1,
      sym_comment,
    ACTIONS(277), 16,
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
    ACTIONS(279), 21,
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
  [6685] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(69), 1,
      sym_comment,
    ACTIONS(281), 16,
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
    ACTIONS(283), 21,
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
  [6733] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(289), 1,
      anon_sym_COLON,
    ACTIONS(291), 1,
      anon_sym_DOT,
    STATE(70), 1,
      sym_comment,
    ACTIONS(287), 5,
      sym_keyword_from,
      anon_sym_EQ,
      anon_sym_DASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(285), 29,
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
  [6784] = 9,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(297), 1,
      anon_sym_DASH,
    ACTIONS(299), 1,
      anon_sym_PLUS,
    ACTIONS(301), 1,
      anon_sym_Z,
    STATE(71), 1,
      sym_comment,
    STATE(93), 1,
      sym_timezone,
    STATE(442), 1,
      sym_direction,
    ACTIONS(295), 4,
      sym_keyword_from,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(293), 27,
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
  [6841] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(72), 1,
      sym_comment,
    ACTIONS(279), 5,
      sym_keyword_from,
      anon_sym_EQ,
      anon_sym_DASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(277), 31,
      ts_builtin_sym_end,
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
  [6888] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(307), 1,
      anon_sym_COLON,
    ACTIONS(309), 1,
      anon_sym_DOT,
    STATE(73), 1,
      sym_comment,
    ACTIONS(305), 5,
      sym_keyword_from,
      anon_sym_EQ,
      anon_sym_DASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(303), 29,
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
  [6939] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(74), 1,
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
      sym_keyword_window,
      sym_keyword_join,
      sym_keyword_select,
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
  [6986] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(75), 1,
      sym_comment,
    ACTIONS(313), 5,
      sym_keyword_from,
      anon_sym_EQ,
      anon_sym_DASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(311), 30,
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
  [7032] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
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
    ACTIONS(315), 29,
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
  [7080] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(325), 1,
      anon_sym_DOT,
    STATE(77), 1,
      sym_comment,
    ACTIONS(323), 5,
      sym_keyword_from,
      anon_sym_EQ,
      anon_sym_DASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(321), 28,
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
  [7127] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(327), 1,
      anon_sym_DOT,
    STATE(78), 1,
      sym_comment,
    ACTIONS(61), 5,
      sym_keyword_from,
      anon_sym_EQ,
      anon_sym_DASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(59), 28,
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
  [7174] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(333), 1,
      anon_sym_DOT,
    STATE(79), 1,
      sym_comment,
    ACTIONS(331), 5,
      sym_keyword_from,
      anon_sym_EQ,
      anon_sym_DASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(329), 28,
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
  [7221] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(339), 1,
      sym__natural_number,
    STATE(80), 1,
      sym_comment,
    ACTIONS(337), 5,
      sym_keyword_from,
      anon_sym_EQ,
      anon_sym_DASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(335), 28,
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
  [7268] = 21,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(65), 1,
      anon_sym_DASH,
    ACTIONS(67), 1,
      anon_sym_DQUOTE,
    ACTIONS(69), 1,
      anon_sym_SQUOTE,
    ACTIONS(71), 1,
      sym__natural_number,
    ACTIONS(73), 1,
      anon_sym__,
    ACTIONS(75), 1,
      anon_sym_DOT,
    ACTIONS(77), 1,
      anon_sym_BQUOTE,
    ACTIONS(79), 1,
      sym__identifier,
    ACTIONS(341), 1,
      ts_builtin_sym_end,
    STATE(81), 1,
      sym_comment,
    STATE(84), 1,
      aux_sym_function_call_repeat1,
    STATE(123), 1,
      aux_sym__friendly_number,
    STATE(126), 1,
      sym_identifier,
    STATE(130), 1,
      sym_integer,
    STATE(136), 1,
      sym_literal,
    STATE(137), 1,
      sym__call_parameter,
    STATE(135), 2,
      sym__literal_string,
      sym_decimal_number,
    STATE(140), 2,
      sym__double_quote_string,
      sym__single_quote_string,
    ACTIONS(63), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    ACTIONS(343), 12,
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
  [7347] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(82), 1,
      sym_comment,
    ACTIONS(347), 5,
      sym_keyword_from,
      anon_sym_EQ,
      anon_sym_DASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(345), 29,
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
  [7392] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(83), 1,
      sym_comment,
    ACTIONS(305), 5,
      sym_keyword_from,
      anon_sym_EQ,
      anon_sym_DASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(303), 29,
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
  [7437] = 20,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(349), 1,
      ts_builtin_sym_end,
    ACTIONS(356), 1,
      anon_sym_DASH,
    ACTIONS(359), 1,
      anon_sym_DQUOTE,
    ACTIONS(362), 1,
      anon_sym_SQUOTE,
    ACTIONS(365), 1,
      sym__natural_number,
    ACTIONS(368), 1,
      anon_sym__,
    ACTIONS(371), 1,
      anon_sym_DOT,
    ACTIONS(374), 1,
      anon_sym_BQUOTE,
    ACTIONS(377), 1,
      sym__identifier,
    STATE(123), 1,
      aux_sym__friendly_number,
    STATE(126), 1,
      sym_identifier,
    STATE(130), 1,
      sym_integer,
    STATE(136), 1,
      sym_literal,
    STATE(137), 1,
      sym__call_parameter,
    STATE(84), 2,
      sym_comment,
      aux_sym_function_call_repeat1,
    STATE(135), 2,
      sym__literal_string,
      sym_decimal_number,
    STATE(140), 2,
      sym__double_quote_string,
      sym__single_quote_string,
    ACTIONS(353), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    ACTIONS(351), 12,
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
  [7514] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(85), 1,
      sym_comment,
    ACTIONS(317), 5,
      sym_keyword_from,
      anon_sym_EQ,
      anon_sym_DASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(315), 29,
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
  [7559] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(384), 1,
      anon_sym_T,
    STATE(86), 1,
      sym_comment,
    ACTIONS(382), 5,
      sym_keyword_from,
      anon_sym_EQ,
      anon_sym_DASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(380), 28,
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
  [7606] = 4,
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
    ACTIONS(386), 28,
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
  [7650] = 4,
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
    ACTIONS(390), 28,
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
  [7694] = 4,
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
  [7738] = 4,
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
    ACTIONS(398), 28,
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
  [7782] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(91), 1,
      sym_comment,
    ACTIONS(404), 5,
      sym_keyword_from,
      anon_sym_EQ,
      anon_sym_DASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(402), 28,
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
  [7826] = 12,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(410), 1,
      sym_keyword_and,
    ACTIONS(412), 1,
      anon_sym_DASH,
    ACTIONS(414), 1,
      anon_sym_PLUS,
    ACTIONS(420), 1,
      anon_sym_PIPE,
    ACTIONS(424), 1,
      anon_sym_QMARK_QMARK,
    STATE(92), 1,
      sym_comment,
    ACTIONS(408), 2,
      sym_keyword_from,
      anon_sym_EQ,
    ACTIONS(418), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(422), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(416), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(406), 18,
      ts_builtin_sym_end,
      sym_keyword_filter,
      sym_keyword_derive,
      sym_keyword_group,
      sym_keyword_aggregate,
      sym_keyword_sort,
      sym_keyword_take,
      sym_keyword_join,
      sym_keyword_select,
      sym_keyword_or,
      sym_keyword_func,
      sym_keyword_let,
      sym_keyword_from_text,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_DASH_GT,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [7886] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(93), 1,
      sym_comment,
    ACTIONS(428), 5,
      sym_keyword_from,
      anon_sym_EQ,
      anon_sym_DASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(426), 28,
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
  [7930] = 11,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(412), 1,
      anon_sym_DASH,
    ACTIONS(414), 1,
      anon_sym_PLUS,
    ACTIONS(420), 1,
      anon_sym_PIPE,
    ACTIONS(424), 1,
      anon_sym_QMARK_QMARK,
    STATE(94), 1,
      sym_comment,
    ACTIONS(408), 2,
      sym_keyword_from,
      anon_sym_EQ,
    ACTIONS(418), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(422), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(416), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(406), 19,
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
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_DASH_GT,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [7988] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(95), 1,
      sym_comment,
    ACTIONS(331), 5,
      sym_keyword_from,
      anon_sym_EQ,
      anon_sym_DASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(329), 28,
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
  [8032] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(96), 1,
      sym_comment,
    ACTIONS(408), 5,
      sym_keyword_from,
      anon_sym_EQ,
      anon_sym_DASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(406), 28,
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
  [8076] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(97), 1,
      sym_comment,
    ACTIONS(432), 5,
      sym_keyword_from,
      anon_sym_EQ,
      anon_sym_DASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(430), 28,
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
  [8120] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(98), 1,
      sym_comment,
    ACTIONS(436), 5,
      sym_keyword_from,
      anon_sym_EQ,
      anon_sym_DASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(434), 28,
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
  [8164] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(99), 1,
      sym_comment,
    ACTIONS(440), 5,
      sym_keyword_from,
      anon_sym_EQ,
      anon_sym_DASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(438), 28,
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
  [8208] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(100), 1,
      sym_comment,
    ACTIONS(444), 5,
      sym_keyword_from,
      anon_sym_EQ,
      anon_sym_DASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(442), 28,
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
  [8252] = 4,
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
    ACTIONS(446), 28,
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
  [8296] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(102), 1,
      sym_comment,
    ACTIONS(452), 5,
      sym_keyword_from,
      anon_sym_EQ,
      anon_sym_DASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(450), 28,
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
  [8340] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(103), 1,
      sym_comment,
    ACTIONS(456), 5,
      sym_keyword_from,
      anon_sym_EQ,
      anon_sym_DASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(454), 28,
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
  [8384] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(104), 1,
      sym_comment,
    ACTIONS(460), 5,
      sym_keyword_from,
      anon_sym_EQ,
      anon_sym_DASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(458), 28,
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
  [8428] = 8,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(412), 1,
      anon_sym_DASH,
    ACTIONS(414), 1,
      anon_sym_PLUS,
    ACTIONS(420), 1,
      anon_sym_PIPE,
    STATE(105), 1,
      sym_comment,
    ACTIONS(418), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(408), 4,
      sym_keyword_from,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(406), 24,
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
  [8480] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(412), 1,
      anon_sym_DASH,
    ACTIONS(414), 1,
      anon_sym_PLUS,
    STATE(106), 1,
      sym_comment,
    ACTIONS(408), 4,
      sym_keyword_from,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(406), 27,
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
  [8528] = 7,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(412), 1,
      anon_sym_DASH,
    ACTIONS(414), 1,
      anon_sym_PLUS,
    STATE(107), 1,
      sym_comment,
    ACTIONS(418), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(408), 4,
      sym_keyword_from,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(406), 25,
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
  [8578] = 10,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(412), 1,
      anon_sym_DASH,
    ACTIONS(414), 1,
      anon_sym_PLUS,
    ACTIONS(420), 1,
      anon_sym_PIPE,
    STATE(108), 1,
      sym_comment,
    ACTIONS(408), 2,
      sym_keyword_from,
      anon_sym_EQ,
    ACTIONS(418), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(422), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(416), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(406), 20,
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
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_DASH_GT,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_QMARK_QMARK,
  [8634] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(109), 1,
      sym_comment,
    ACTIONS(337), 5,
      sym_keyword_from,
      anon_sym_EQ,
      anon_sym_DASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(335), 28,
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
  [8678] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(110), 1,
      sym_comment,
    ACTIONS(323), 5,
      sym_keyword_from,
      anon_sym_EQ,
      anon_sym_DASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(321), 28,
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
  [8722] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(111), 1,
      sym_comment,
    ACTIONS(277), 16,
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
    ACTIONS(279), 17,
      sym_keyword_filter,
      sym_keyword_derive,
      sym_keyword_group,
      sym_keyword_aggregate,
      sym_keyword_sort,
      sym_keyword_take,
      sym_keyword_join,
      sym_keyword_select,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_and,
      sym_keyword_or,
      sym_keyword_null,
      anon_sym__,
      sym__identifier,
      anon_sym_GT,
      anon_sym_LT,
  [8766] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(112), 1,
      sym_comment,
    ACTIONS(281), 16,
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
    ACTIONS(283), 17,
      sym_keyword_filter,
      sym_keyword_derive,
      sym_keyword_group,
      sym_keyword_aggregate,
      sym_keyword_sort,
      sym_keyword_take,
      sym_keyword_join,
      sym_keyword_select,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_and,
      sym_keyword_or,
      sym_keyword_null,
      anon_sym__,
      sym__identifier,
      anon_sym_GT,
      anon_sym_LT,
  [8810] = 4,
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
    ACTIONS(462), 28,
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
  [8854] = 12,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(410), 1,
      sym_keyword_and,
    ACTIONS(420), 1,
      anon_sym_PIPE,
    ACTIONS(424), 1,
      anon_sym_QMARK_QMARK,
    ACTIONS(468), 1,
      sym_keyword_from,
    ACTIONS(470), 1,
      sym_keyword_or,
    STATE(114), 1,
      sym_comment,
    ACTIONS(414), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(418), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(422), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(416), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(466), 16,
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
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [8912] = 12,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(410), 1,
      sym_keyword_and,
    ACTIONS(420), 1,
      anon_sym_PIPE,
    ACTIONS(424), 1,
      anon_sym_QMARK_QMARK,
    ACTIONS(470), 1,
      sym_keyword_or,
    ACTIONS(474), 1,
      sym_keyword_from,
    STATE(115), 1,
      sym_comment,
    ACTIONS(414), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(418), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(422), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(416), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(472), 16,
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
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [8970] = 20,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(349), 1,
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
    STATE(163), 1,
      sym_integer,
    STATE(166), 1,
      sym__call_parameter,
    STATE(167), 1,
      sym_literal,
    STATE(116), 2,
      sym_comment,
      aux_sym_function_call_repeat1,
    STATE(157), 2,
      sym__double_quote_string,
      sym__single_quote_string,
    STATE(159), 2,
      sym__literal_string,
      sym_decimal_number,
    ACTIONS(476), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    ACTIONS(351), 8,
      sym_keyword_filter,
      sym_keyword_derive,
      sym_keyword_group,
      sym_keyword_aggregate,
      sym_keyword_sort,
      sym_keyword_take,
      sym_keyword_join,
      sym_keyword_select,
  [9043] = 21,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(101), 1,
      anon_sym_DASH,
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
    ACTIONS(341), 1,
      anon_sym_RPAREN,
    STATE(116), 1,
      aux_sym_function_call_repeat1,
    STATE(117), 1,
      sym_comment,
    STATE(151), 1,
      aux_sym__friendly_number,
    STATE(153), 1,
      sym_identifier,
    STATE(163), 1,
      sym_integer,
    STATE(166), 1,
      sym__call_parameter,
    STATE(167), 1,
      sym_literal,
    STATE(157), 2,
      sym__double_quote_string,
      sym__single_quote_string,
    STATE(159), 2,
      sym__literal_string,
      sym_decimal_number,
    ACTIONS(99), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    ACTIONS(343), 8,
      sym_keyword_filter,
      sym_keyword_derive,
      sym_keyword_group,
      sym_keyword_aggregate,
      sym_keyword_sort,
      sym_keyword_take,
      sym_keyword_join,
      sym_keyword_select,
  [9118] = 12,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(410), 1,
      sym_keyword_and,
    ACTIONS(420), 1,
      anon_sym_PIPE,
    ACTIONS(424), 1,
      anon_sym_QMARK_QMARK,
    ACTIONS(470), 1,
      sym_keyword_or,
    ACTIONS(505), 1,
      sym_keyword_from,
    STATE(118), 1,
      sym_comment,
    ACTIONS(414), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(418), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(422), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(416), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(503), 13,
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
  [9173] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(119), 1,
      sym_comment,
    ACTIONS(279), 9,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_and,
      sym_keyword_or,
      sym_keyword_null,
      anon_sym__,
      sym__identifier,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(277), 19,
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
  [9212] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(120), 1,
      sym_comment,
    ACTIONS(283), 9,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_and,
      sym_keyword_or,
      sym_keyword_null,
      anon_sym__,
      sym__identifier,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(281), 19,
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
  [9251] = 13,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(410), 1,
      sym_keyword_and,
    ACTIONS(420), 1,
      anon_sym_PIPE,
    ACTIONS(424), 1,
      anon_sym_QMARK_QMARK,
    ACTIONS(470), 1,
      sym_keyword_or,
    ACTIONS(509), 1,
      sym_keyword_from,
    ACTIONS(511), 1,
      anon_sym_EQ,
    STATE(121), 1,
      sym_comment,
    ACTIONS(414), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(418), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(422), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(416), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(507), 12,
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
  [9308] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(122), 1,
      sym_comment,
    ACTIONS(277), 8,
      ts_builtin_sym_end,
      anon_sym_COLON,
      anon_sym_DASH,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym__natural_number,
      anon_sym_DOT,
      anon_sym_BQUOTE,
    ACTIONS(279), 17,
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
      sym__identifier,
  [9344] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(123), 1,
      sym_comment,
    STATE(127), 1,
      aux_sym__friendly_number,
    ACTIONS(121), 7,
      ts_builtin_sym_end,
      anon_sym_DASH,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym__natural_number,
      anon_sym_DOT,
      anon_sym_BQUOTE,
    ACTIONS(123), 17,
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
      sym__identifier,
  [9382] = 20,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(261), 1,
      anon_sym_DASH,
    ACTIONS(263), 1,
      anon_sym_DQUOTE,
    ACTIONS(265), 1,
      anon_sym_SQUOTE,
    ACTIONS(267), 1,
      sym__natural_number,
    ACTIONS(269), 1,
      anon_sym__,
    ACTIONS(271), 1,
      anon_sym_DOT,
    ACTIONS(273), 1,
      anon_sym_BQUOTE,
    ACTIONS(275), 1,
      sym__identifier,
    STATE(124), 1,
      sym_comment,
    STATE(128), 1,
      aux_sym_function_call_repeat1,
    STATE(206), 1,
      aux_sym__friendly_number,
    STATE(209), 1,
      sym_identifier,
    STATE(214), 1,
      sym_literal,
    STATE(216), 1,
      sym__call_parameter,
    STATE(231), 1,
      sym_integer,
    STATE(244), 2,
      sym__literal_string,
      sym_decimal_number,
    STATE(245), 2,
      sym__double_quote_string,
      sym__single_quote_string,
    ACTIONS(259), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    ACTIONS(341), 4,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [9450] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(125), 1,
      sym_comment,
    STATE(127), 1,
      aux_sym__friendly_number,
    ACTIONS(203), 7,
      ts_builtin_sym_end,
      anon_sym_DASH,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym__natural_number,
      anon_sym_DOT,
      anon_sym_BQUOTE,
    ACTIONS(205), 17,
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
      sym__identifier,
  [9488] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(517), 1,
      anon_sym_COLON,
    STATE(126), 1,
      sym_comment,
    ACTIONS(513), 7,
      ts_builtin_sym_end,
      anon_sym_DASH,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym__natural_number,
      anon_sym_DOT,
      anon_sym_BQUOTE,
    ACTIONS(515), 17,
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
      sym__identifier,
  [9526] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(519), 1,
      sym__natural_number,
    ACTIONS(522), 1,
      anon_sym__,
    STATE(127), 2,
      aux_sym__friendly_number,
      sym_comment,
    ACTIONS(176), 6,
      ts_builtin_sym_end,
      anon_sym_DASH,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      anon_sym_DOT,
      anon_sym_BQUOTE,
    ACTIONS(178), 16,
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
      sym__identifier,
  [9566] = 19,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(528), 1,
      anon_sym_DASH,
    ACTIONS(531), 1,
      anon_sym_DQUOTE,
    ACTIONS(534), 1,
      anon_sym_SQUOTE,
    ACTIONS(537), 1,
      sym__natural_number,
    ACTIONS(540), 1,
      anon_sym__,
    ACTIONS(543), 1,
      anon_sym_DOT,
    ACTIONS(546), 1,
      anon_sym_BQUOTE,
    ACTIONS(549), 1,
      sym__identifier,
    STATE(206), 1,
      aux_sym__friendly_number,
    STATE(209), 1,
      sym_identifier,
    STATE(214), 1,
      sym_literal,
    STATE(216), 1,
      sym__call_parameter,
    STATE(231), 1,
      sym_integer,
    STATE(128), 2,
      sym_comment,
      aux_sym_function_call_repeat1,
    STATE(244), 2,
      sym__literal_string,
      sym_decimal_number,
    STATE(245), 2,
      sym__double_quote_string,
      sym__single_quote_string,
    ACTIONS(525), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
    ACTIONS(349), 4,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [9632] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(129), 1,
      sym_comment,
    ACTIONS(281), 8,
      ts_builtin_sym_end,
      anon_sym_COLON,
      anon_sym_DASH,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym__natural_number,
      anon_sym_DOT,
      anon_sym_BQUOTE,
    ACTIONS(283), 17,
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
      sym__identifier,
  [9668] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(130), 1,
      sym_comment,
    ACTIONS(321), 7,
      ts_builtin_sym_end,
      anon_sym_DASH,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym__natural_number,
      anon_sym_DOT,
      anon_sym_BQUOTE,
    ACTIONS(323), 17,
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
      sym__identifier,
  [9703] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(131), 1,
      sym_comment,
    ACTIONS(552), 7,
      ts_builtin_sym_end,
      anon_sym_DASH,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym__natural_number,
      anon_sym_DOT,
      anon_sym_BQUOTE,
    ACTIONS(554), 17,
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
      sym__identifier,
  [9738] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(132), 1,
      sym_comment,
    ACTIONS(311), 7,
      ts_builtin_sym_end,
      anon_sym_DASH,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym__natural_number,
      anon_sym_DOT,
      anon_sym_BQUOTE,
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
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
      sym_keyword_func,
      sym_keyword_let,
      sym_keyword_from_text,
      anon_sym__,
      sym__identifier,
  [9773] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(133), 1,
      sym_comment,
    ACTIONS(237), 7,
      ts_builtin_sym_end,
      anon_sym_DASH,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym__natural_number,
      anon_sym_DOT,
      anon_sym_BQUOTE,
    ACTIONS(239), 17,
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
      sym__identifier,
  [9808] = 12,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(410), 1,
      sym_keyword_and,
    ACTIONS(420), 1,
      anon_sym_PIPE,
    ACTIONS(424), 1,
      anon_sym_QMARK_QMARK,
    ACTIONS(470), 1,
      sym_keyword_or,
    ACTIONS(556), 1,
      anon_sym_EQ,
    STATE(134), 1,
      sym_comment,
    ACTIONS(414), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(418), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(422), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(416), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(507), 9,
      sym_keyword_filter,
      sym_keyword_derive,
      sym_keyword_group,
      sym_keyword_aggregate,
      sym_keyword_sort,
      sym_keyword_take,
      sym_keyword_join,
      sym_keyword_select,
      anon_sym_RPAREN,
  [9859] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(135), 1,
      sym_comment,
    ACTIONS(321), 7,
      ts_builtin_sym_end,
      anon_sym_DASH,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym__natural_number,
      anon_sym_DOT,
      anon_sym_BQUOTE,
    ACTIONS(323), 17,
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
      sym__identifier,
  [9894] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(136), 1,
      sym_comment,
    ACTIONS(513), 7,
      ts_builtin_sym_end,
      anon_sym_DASH,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym__natural_number,
      anon_sym_DOT,
      anon_sym_BQUOTE,
    ACTIONS(515), 17,
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
      sym__identifier,
  [9929] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(137), 1,
      sym_comment,
    ACTIONS(558), 7,
      ts_builtin_sym_end,
      anon_sym_DASH,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym__natural_number,
      anon_sym_DOT,
      anon_sym_BQUOTE,
    ACTIONS(560), 17,
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
      sym__identifier,
  [9964] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(138), 1,
      sym_comment,
    ACTIONS(458), 7,
      ts_builtin_sym_end,
      anon_sym_DASH,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym__natural_number,
      anon_sym_DOT,
      anon_sym_BQUOTE,
    ACTIONS(460), 17,
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
      sym__identifier,
  [9999] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(139), 1,
      sym_comment,
    ACTIONS(335), 7,
      ts_builtin_sym_end,
      anon_sym_DASH,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym__natural_number,
      anon_sym_DOT,
      anon_sym_BQUOTE,
    ACTIONS(337), 17,
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
      sym__identifier,
  [10034] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(140), 1,
      sym_comment,
    ACTIONS(329), 7,
      ts_builtin_sym_end,
      anon_sym_DASH,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym__natural_number,
      anon_sym_DOT,
      anon_sym_BQUOTE,
    ACTIONS(331), 17,
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
      sym__identifier,
  [10069] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(141), 1,
      sym_comment,
    ACTIONS(398), 7,
      ts_builtin_sym_end,
      anon_sym_DASH,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym__natural_number,
      anon_sym_DOT,
      anon_sym_BQUOTE,
    ACTIONS(400), 17,
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
      sym__identifier,
  [10104] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(123), 1,
      sym_keyword_from,
    STATE(142), 1,
      sym_comment,
    STATE(146), 1,
      aux_sym__friendly_number,
    ACTIONS(562), 2,
      sym__natural_number,
      anon_sym__,
    ACTIONS(121), 19,
      ts_builtin_sym_end,
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
      anon_sym_DOT_DOT,
  [10142] = 15,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(566), 1,
      sym_keyword_from,
    ACTIONS(568), 1,
      sym_keyword_filter,
    ACTIONS(570), 1,
      sym_keyword_derive,
    ACTIONS(572), 1,
      sym_keyword_group,
    ACTIONS(574), 1,
      sym_keyword_aggregate,
    ACTIONS(576), 1,
      sym_keyword_sort,
    ACTIONS(578), 1,
      sym_keyword_take,
    ACTIONS(580), 1,
      sym_keyword_join,
    ACTIONS(582), 1,
      sym_keyword_select,
    STATE(143), 1,
      sym_comment,
    STATE(148), 1,
      aux_sym_transforms_repeat1,
    STATE(312), 1,
      sym_transforms,
    ACTIONS(564), 4,
      ts_builtin_sym_end,
      sym_keyword_func,
      sym_keyword_let,
      sym_keyword_from_text,
    STATE(261), 8,
      sym_derives,
      sym_filter,
      sym_aggregate,
      sym_sorts,
      sym_takes,
      sym_group,
      sym_joins,
      sym_select,
  [10198] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(205), 1,
      sym_keyword_from,
    STATE(144), 1,
      sym_comment,
    STATE(146), 1,
      aux_sym__friendly_number,
    ACTIONS(562), 2,
      sym__natural_number,
      anon_sym__,
    ACTIONS(203), 19,
      ts_builtin_sym_end,
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
      anon_sym_DOT_DOT,
  [10236] = 15,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(568), 1,
      sym_keyword_filter,
    ACTIONS(570), 1,
      sym_keyword_derive,
    ACTIONS(572), 1,
      sym_keyword_group,
    ACTIONS(574), 1,
      sym_keyword_aggregate,
    ACTIONS(576), 1,
      sym_keyword_sort,
    ACTIONS(578), 1,
      sym_keyword_take,
    ACTIONS(580), 1,
      sym_keyword_join,
    ACTIONS(582), 1,
      sym_keyword_select,
    ACTIONS(586), 1,
      sym_keyword_from,
    STATE(145), 1,
      sym_comment,
    STATE(148), 1,
      aux_sym_transforms_repeat1,
    STATE(323), 1,
      sym_transforms,
    ACTIONS(584), 4,
      ts_builtin_sym_end,
      sym_keyword_func,
      sym_keyword_let,
      sym_keyword_from_text,
    STATE(261), 8,
      sym_derives,
      sym_filter,
      sym_aggregate,
      sym_sorts,
      sym_takes,
      sym_group,
      sym_joins,
      sym_select,
  [10292] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(178), 1,
      sym_keyword_from,
    ACTIONS(588), 2,
      sym__natural_number,
      anon_sym__,
    STATE(146), 2,
      aux_sym__friendly_number,
      sym_comment,
    ACTIONS(176), 19,
      ts_builtin_sym_end,
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
      anon_sym_DOT_DOT,
  [10328] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(239), 1,
      sym_keyword_from,
    STATE(147), 1,
      sym_comment,
    ACTIONS(237), 21,
      ts_builtin_sym_end,
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
      sym__natural_number,
      anon_sym__,
      anon_sym_DOT_DOT,
  [10361] = 14,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(568), 1,
      sym_keyword_filter,
    ACTIONS(570), 1,
      sym_keyword_derive,
    ACTIONS(572), 1,
      sym_keyword_group,
    ACTIONS(574), 1,
      sym_keyword_aggregate,
    ACTIONS(576), 1,
      sym_keyword_sort,
    ACTIONS(578), 1,
      sym_keyword_take,
    ACTIONS(580), 1,
      sym_keyword_join,
    ACTIONS(582), 1,
      sym_keyword_select,
    ACTIONS(593), 1,
      sym_keyword_from,
    STATE(148), 1,
      sym_comment,
    STATE(149), 1,
      aux_sym_transforms_repeat1,
    ACTIONS(591), 4,
      ts_builtin_sym_end,
      sym_keyword_func,
      sym_keyword_let,
      sym_keyword_from_text,
    STATE(261), 8,
      sym_derives,
      sym_filter,
      sym_aggregate,
      sym_sorts,
      sym_takes,
      sym_group,
      sym_joins,
      sym_select,
  [10414] = 13,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(597), 1,
      sym_keyword_from,
    ACTIONS(599), 1,
      sym_keyword_filter,
    ACTIONS(602), 1,
      sym_keyword_derive,
    ACTIONS(605), 1,
      sym_keyword_group,
    ACTIONS(608), 1,
      sym_keyword_aggregate,
    ACTIONS(611), 1,
      sym_keyword_sort,
    ACTIONS(614), 1,
      sym_keyword_take,
    ACTIONS(617), 1,
      sym_keyword_join,
    ACTIONS(620), 1,
      sym_keyword_select,
    STATE(149), 2,
      sym_comment,
      aux_sym_transforms_repeat1,
    ACTIONS(595), 4,
      ts_builtin_sym_end,
      sym_keyword_func,
      sym_keyword_let,
      sym_keyword_from_text,
    STATE(261), 8,
      sym_derives,
      sym_filter,
      sym_aggregate,
      sym_sorts,
      sym_takes,
      sym_group,
      sym_joins,
      sym_select,
  [10465] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(150), 1,
      sym_comment,
    ACTIONS(277), 8,
      anon_sym_COLON,
      anon_sym_RPAREN,
      anon_sym_DASH,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym__natural_number,
      anon_sym_DOT,
      anon_sym_BQUOTE,
    ACTIONS(279), 13,
      sym_keyword_filter,
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
      sym__identifier,
  [10497] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(151), 1,
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
    ACTIONS(123), 13,
      sym_keyword_filter,
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
      sym__identifier,
  [10531] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(152), 1,
      sym_comment,
    ACTIONS(281), 8,
      anon_sym_COLON,
      anon_sym_RPAREN,
      anon_sym_DASH,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym__natural_number,
      anon_sym_DOT,
      anon_sym_BQUOTE,
    ACTIONS(283), 13,
      sym_keyword_filter,
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
      sym__identifier,
  [10563] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(623), 1,
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
    ACTIONS(515), 13,
      sym_keyword_filter,
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
      sym__identifier,
  [10597] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(154), 1,
      sym_comment,
    STATE(155), 1,
      aux_sym__friendly_number,
    ACTIONS(203), 7,
      anon_sym_RPAREN,
      anon_sym_DASH,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym__natural_number,
      anon_sym_DOT,
      anon_sym_BQUOTE,
    ACTIONS(205), 13,
      sym_keyword_filter,
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
      sym__identifier,
  [10631] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(625), 1,
      sym__natural_number,
    ACTIONS(628), 1,
      anon_sym__,
    STATE(155), 2,
      aux_sym__friendly_number,
      sym_comment,
    ACTIONS(176), 6,
      anon_sym_RPAREN,
      anon_sym_DASH,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      anon_sym_DOT,
      anon_sym_BQUOTE,
    ACTIONS(178), 12,
      sym_keyword_filter,
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
      sym__identifier,
  [10667] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(156), 1,
      sym_comment,
    ACTIONS(237), 7,
      anon_sym_RPAREN,
      anon_sym_DASH,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym__natural_number,
      anon_sym_DOT,
      anon_sym_BQUOTE,
    ACTIONS(239), 13,
      sym_keyword_filter,
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
      sym__identifier,
  [10698] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(157), 1,
      sym_comment,
    ACTIONS(329), 7,
      anon_sym_RPAREN,
      anon_sym_DASH,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym__natural_number,
      anon_sym_DOT,
      anon_sym_BQUOTE,
    ACTIONS(331), 13,
      sym_keyword_filter,
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
      sym__identifier,
  [10729] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(158), 1,
      sym_comment,
    ACTIONS(398), 7,
      anon_sym_RPAREN,
      anon_sym_DASH,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym__natural_number,
      anon_sym_DOT,
      anon_sym_BQUOTE,
    ACTIONS(400), 13,
      sym_keyword_filter,
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
      sym__identifier,
  [10760] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(159), 1,
      sym_comment,
    ACTIONS(321), 7,
      anon_sym_RPAREN,
      anon_sym_DASH,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym__natural_number,
      anon_sym_DOT,
      anon_sym_BQUOTE,
    ACTIONS(323), 13,
      sym_keyword_filter,
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
      sym__identifier,
  [10791] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(160), 1,
      sym_comment,
    ACTIONS(311), 7,
      anon_sym_RPAREN,
      anon_sym_DASH,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym__natural_number,
      anon_sym_DOT,
      anon_sym_BQUOTE,
    ACTIONS(313), 13,
      sym_keyword_filter,
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
      sym__identifier,
  [10822] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(382), 1,
      sym_keyword_from,
    STATE(161), 1,
      sym_comment,
    ACTIONS(380), 19,
      ts_builtin_sym_end,
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
      anon_sym_DOT_DOT,
  [10853] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(162), 1,
      sym_comment,
    ACTIONS(458), 7,
      anon_sym_RPAREN,
      anon_sym_DASH,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym__natural_number,
      anon_sym_DOT,
      anon_sym_BQUOTE,
    ACTIONS(460), 13,
      sym_keyword_filter,
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
      sym__identifier,
  [10884] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(163), 1,
      sym_comment,
    ACTIONS(321), 7,
      anon_sym_RPAREN,
      anon_sym_DASH,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym__natural_number,
      anon_sym_DOT,
      anon_sym_BQUOTE,
    ACTIONS(323), 13,
      sym_keyword_filter,
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
      sym__identifier,
  [10915] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(164), 1,
      sym_comment,
    ACTIONS(552), 7,
      anon_sym_RPAREN,
      anon_sym_DASH,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym__natural_number,
      anon_sym_DOT,
      anon_sym_BQUOTE,
    ACTIONS(554), 13,
      sym_keyword_filter,
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
      sym__identifier,
  [10946] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(165), 1,
      sym_comment,
    ACTIONS(335), 7,
      anon_sym_RPAREN,
      anon_sym_DASH,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym__natural_number,
      anon_sym_DOT,
      anon_sym_BQUOTE,
    ACTIONS(337), 13,
      sym_keyword_filter,
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
      sym__identifier,
  [10977] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(166), 1,
      sym_comment,
    ACTIONS(558), 7,
      anon_sym_RPAREN,
      anon_sym_DASH,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym__natural_number,
      anon_sym_DOT,
      anon_sym_BQUOTE,
    ACTIONS(560), 13,
      sym_keyword_filter,
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
      sym__identifier,
  [11008] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(167), 1,
      sym_comment,
    ACTIONS(513), 7,
      anon_sym_RPAREN,
      anon_sym_DASH,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym__natural_number,
      anon_sym_DOT,
      anon_sym_BQUOTE,
    ACTIONS(515), 13,
      sym_keyword_filter,
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
      sym__identifier,
  [11039] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(633), 1,
      sym_keyword_from,
    STATE(168), 1,
      sym_comment,
    ACTIONS(631), 18,
      ts_builtin_sym_end,
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
  [11069] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(169), 1,
      sym_comment,
    ACTIONS(635), 7,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
      anon_sym_f_DQUOTE,
      anon_sym_s_DQUOTE,
      anon_sym__,
      sym__identifier,
    ACTIONS(637), 12,
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
  [11099] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(170), 1,
      sym_comment,
    ACTIONS(639), 7,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
      anon_sym_f_DQUOTE,
      anon_sym_s_DQUOTE,
      anon_sym__,
      sym__identifier,
    ACTIONS(641), 12,
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
  [11129] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(171), 1,
      sym_comment,
    ACTIONS(643), 7,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
      anon_sym_f_DQUOTE,
      anon_sym_s_DQUOTE,
      anon_sym__,
      sym__identifier,
    ACTIONS(645), 12,
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
  [11159] = 12,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(410), 1,
      sym_keyword_and,
    ACTIONS(420), 1,
      anon_sym_PIPE,
    ACTIONS(424), 1,
      anon_sym_QMARK_QMARK,
    ACTIONS(470), 1,
      sym_keyword_or,
    ACTIONS(647), 1,
      anon_sym_EQ,
    STATE(172), 1,
      sym_comment,
    ACTIONS(414), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(418), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(422), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(416), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(507), 4,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [11205] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(651), 1,
      sym_keyword_from,
    STATE(173), 1,
      sym_comment,
    ACTIONS(396), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(649), 4,
      ts_builtin_sym_end,
      sym_keyword_func,
      sym_keyword_let,
      sym_keyword_from_text,
    ACTIONS(394), 12,
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
  [11239] = 14,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(564), 1,
      anon_sym_RPAREN,
    ACTIONS(568), 1,
      sym_keyword_filter,
    ACTIONS(572), 1,
      sym_keyword_group,
    ACTIONS(574), 1,
      sym_keyword_aggregate,
    ACTIONS(576), 1,
      sym_keyword_sort,
    ACTIONS(578), 1,
      sym_keyword_take,
    ACTIONS(580), 1,
      sym_keyword_join,
    ACTIONS(653), 1,
      sym_keyword_derive,
    ACTIONS(655), 1,
      sym_keyword_select,
    STATE(174), 1,
      sym_comment,
    STATE(178), 1,
      aux_sym_transforms_repeat1,
    STATE(312), 1,
      sym_transforms,
    STATE(261), 8,
      sym_derives,
      sym_filter,
      sym_aggregate,
      sym_sorts,
      sym_takes,
      sym_group,
      sym_joins,
      sym_select,
  [11289] = 12,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(595), 1,
      anon_sym_RPAREN,
    ACTIONS(599), 1,
      sym_keyword_filter,
    ACTIONS(605), 1,
      sym_keyword_group,
    ACTIONS(608), 1,
      sym_keyword_aggregate,
    ACTIONS(611), 1,
      sym_keyword_sort,
    ACTIONS(614), 1,
      sym_keyword_take,
    ACTIONS(617), 1,
      sym_keyword_join,
    ACTIONS(657), 1,
      sym_keyword_derive,
    ACTIONS(660), 1,
      sym_keyword_select,
    STATE(175), 2,
      sym_comment,
      aux_sym_transforms_repeat1,
    STATE(261), 8,
      sym_derives,
      sym_filter,
      sym_aggregate,
      sym_sorts,
      sym_takes,
      sym_group,
      sym_joins,
      sym_select,
  [11334] = 7,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(663), 1,
      anon_sym_COMMA,
    ACTIONS(665), 1,
      anon_sym_RBRACK,
    STATE(176), 1,
      sym_comment,
    STATE(386), 1,
      aux_sym_aggregate_repeat1,
    ACTIONS(396), 3,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(394), 12,
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
  [11369] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(177), 1,
      sym_comment,
    STATE(361), 1,
      aux_sym_derives_repeat1,
    ACTIONS(404), 3,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(402), 14,
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
  [11400] = 13,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(568), 1,
      sym_keyword_filter,
    ACTIONS(572), 1,
      sym_keyword_group,
    ACTIONS(574), 1,
      sym_keyword_aggregate,
    ACTIONS(576), 1,
      sym_keyword_sort,
    ACTIONS(578), 1,
      sym_keyword_take,
    ACTIONS(580), 1,
      sym_keyword_join,
    ACTIONS(591), 1,
      anon_sym_RPAREN,
    ACTIONS(653), 1,
      sym_keyword_derive,
    ACTIONS(655), 1,
      sym_keyword_select,
    STATE(175), 1,
      aux_sym_transforms_repeat1,
    STATE(178), 1,
      sym_comment,
    STATE(261), 8,
      sym_derives,
      sym_filter,
      sym_aggregate,
      sym_sorts,
      sym_takes,
      sym_group,
      sym_joins,
      sym_select,
  [11447] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(669), 1,
      sym_keyword_from,
    STATE(179), 1,
      sym_comment,
    ACTIONS(667), 16,
      ts_builtin_sym_end,
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
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [11475] = 7,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(673), 1,
      sym_keyword_from,
    ACTIONS(675), 1,
      anon_sym_LBRACK,
    STATE(180), 1,
      sym_comment,
    STATE(258), 1,
      sym__self_join,
    STATE(282), 1,
      sym_conditions,
    ACTIONS(671), 13,
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
  [11509] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(679), 1,
      sym_keyword_from,
    STATE(181), 1,
      sym_comment,
    ACTIONS(677), 16,
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
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [11537] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(182), 1,
      sym_comment,
    ACTIONS(404), 3,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(402), 14,
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
  [11565] = 7,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(675), 1,
      anon_sym_LBRACK,
    ACTIONS(683), 1,
      sym_keyword_from,
    STATE(183), 1,
      sym_comment,
    STATE(256), 1,
      sym_conditions,
    STATE(258), 1,
      sym__self_join,
    ACTIONS(681), 13,
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
  [11599] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(687), 1,
      sym_keyword_from,
    STATE(184), 1,
      sym_comment,
    ACTIONS(685), 16,
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
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [11627] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(691), 1,
      sym_keyword_from,
    STATE(185), 1,
      sym_comment,
    ACTIONS(689), 16,
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
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [11655] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(695), 1,
      sym_keyword_from,
    STATE(186), 1,
      sym_comment,
    ACTIONS(693), 16,
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
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [11683] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(699), 1,
      sym_keyword_from,
    STATE(187), 1,
      sym_comment,
    ACTIONS(697), 16,
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
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [11711] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(703), 1,
      sym_keyword_from,
    STATE(188), 1,
      sym_comment,
    ACTIONS(701), 16,
      ts_builtin_sym_end,
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
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [11739] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(707), 1,
      sym_keyword_from,
    STATE(189), 1,
      sym_comment,
    ACTIONS(705), 16,
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
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [11767] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(509), 1,
      sym_keyword_from,
    STATE(190), 1,
      sym_comment,
    ACTIONS(507), 16,
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
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [11795] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(191), 1,
      sym_comment,
    ACTIONS(709), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
    ACTIONS(396), 3,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(394), 12,
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
  [11825] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(713), 1,
      sym_keyword_from,
    STATE(192), 1,
      sym_comment,
    ACTIONS(711), 16,
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
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [11853] = 7,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(715), 1,
      anon_sym_COMMA,
    ACTIONS(717), 1,
      anon_sym_RBRACK,
    STATE(193), 1,
      sym_comment,
    STATE(353), 1,
      aux_sym_conditions_repeat1,
    ACTIONS(396), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(394), 12,
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
  [11887] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(721), 1,
      sym_keyword_from,
    STATE(194), 1,
      sym_comment,
    ACTIONS(719), 16,
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
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [11915] = 13,
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
    STATE(12), 1,
      aux_sym__friendly_number,
    STATE(77), 1,
      sym_integer,
    STATE(195), 1,
      sym_comment,
    STATE(445), 1,
      sym_literal,
    ACTIONS(43), 2,
      sym__natural_number,
      anon_sym__,
    STATE(95), 2,
      sym__double_quote_string,
      sym__single_quote_string,
    STATE(110), 2,
      sym__literal_string,
      sym_decimal_number,
    ACTIONS(723), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
  [11960] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(196), 1,
      sym_comment,
    ACTIONS(283), 5,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
      anon_sym__,
      sym__identifier,
    ACTIONS(281), 11,
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
  [11987] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(197), 1,
      sym_comment,
    ACTIONS(279), 5,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
      anon_sym__,
      sym__identifier,
    ACTIONS(277), 11,
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
  [12014] = 11,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(410), 1,
      sym_keyword_and,
    ACTIONS(420), 1,
      anon_sym_PIPE,
    ACTIONS(424), 1,
      anon_sym_QMARK_QMARK,
    ACTIONS(470), 1,
      sym_keyword_or,
    STATE(198), 1,
      sym_comment,
    ACTIONS(414), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(418), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(422), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(725), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
    ACTIONS(416), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
  [12055] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(729), 1,
      sym_keyword_from,
    ACTIONS(731), 1,
      anon_sym_DOT_DOT,
    STATE(199), 1,
      sym_comment,
    ACTIONS(727), 14,
      ts_builtin_sym_end,
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
  [12084] = 11,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(410), 1,
      sym_keyword_and,
    ACTIONS(420), 1,
      anon_sym_PIPE,
    ACTIONS(424), 1,
      anon_sym_QMARK_QMARK,
    ACTIONS(470), 1,
      sym_keyword_or,
    STATE(200), 1,
      sym_comment,
    ACTIONS(414), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(418), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(422), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(733), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
    ACTIONS(416), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
  [12125] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(737), 1,
      sym_keyword_from,
    ACTIONS(739), 1,
      anon_sym_EQ,
    STATE(201), 1,
      sym_comment,
    ACTIONS(735), 14,
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
      anon_sym_LBRACK,
  [12154] = 13,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(261), 1,
      anon_sym_DASH,
    ACTIONS(263), 1,
      anon_sym_DQUOTE,
    ACTIONS(265), 1,
      anon_sym_SQUOTE,
    ACTIONS(271), 1,
      anon_sym_DOT,
    STATE(202), 1,
      sym_comment,
    STATE(206), 1,
      aux_sym__friendly_number,
    STATE(221), 1,
      sym_literal,
    STATE(231), 1,
      sym_integer,
    ACTIONS(267), 2,
      sym__natural_number,
      anon_sym__,
    STATE(244), 2,
      sym__literal_string,
      sym_decimal_number,
    STATE(245), 2,
      sym__double_quote_string,
      sym__single_quote_string,
    ACTIONS(741), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
  [12199] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(203), 1,
      sym_comment,
    ACTIONS(396), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(743), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
    ACTIONS(394), 12,
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
  [12228] = 13,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(747), 1,
      anon_sym_DASH,
    ACTIONS(749), 1,
      anon_sym_DQUOTE,
    ACTIONS(751), 1,
      anon_sym_SQUOTE,
    ACTIONS(755), 1,
      anon_sym_DOT,
    STATE(204), 1,
      sym_comment,
    STATE(310), 1,
      aux_sym__friendly_number,
    STATE(340), 1,
      sym_integer,
    STATE(368), 1,
      sym_literal,
    ACTIONS(753), 2,
      sym__natural_number,
      anon_sym__,
    STATE(352), 2,
      sym__double_quote_string,
      sym__single_quote_string,
    STATE(370), 2,
      sym__literal_string,
      sym_decimal_number,
    ACTIONS(745), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
  [12273] = 13,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(101), 1,
      anon_sym_DASH,
    ACTIONS(103), 1,
      anon_sym_DQUOTE,
    ACTIONS(105), 1,
      anon_sym_SQUOTE,
    ACTIONS(111), 1,
      anon_sym_DOT,
    STATE(151), 1,
      aux_sym__friendly_number,
    STATE(163), 1,
      sym_integer,
    STATE(164), 1,
      sym_literal,
    STATE(205), 1,
      sym_comment,
    ACTIONS(107), 2,
      sym__natural_number,
      anon_sym__,
    STATE(157), 2,
      sym__double_quote_string,
      sym__single_quote_string,
    STATE(159), 2,
      sym__literal_string,
      sym_decimal_number,
    ACTIONS(757), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
  [12318] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(206), 1,
      sym_comment,
    STATE(210), 1,
      aux_sym__friendly_number,
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
  [12347] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(207), 1,
      sym_comment,
    STATE(210), 1,
      aux_sym__friendly_number,
    ACTIONS(205), 5,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
      anon_sym__,
      sym__identifier,
    ACTIONS(203), 10,
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
  [12376] = 13,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(65), 1,
      anon_sym_DASH,
    ACTIONS(67), 1,
      anon_sym_DQUOTE,
    ACTIONS(69), 1,
      anon_sym_SQUOTE,
    ACTIONS(75), 1,
      anon_sym_DOT,
    STATE(123), 1,
      aux_sym__friendly_number,
    STATE(130), 1,
      sym_integer,
    STATE(131), 1,
      sym_literal,
    STATE(208), 1,
      sym_comment,
    ACTIONS(71), 2,
      sym__natural_number,
      anon_sym__,
    STATE(135), 2,
      sym__literal_string,
      sym_decimal_number,
    STATE(140), 2,
      sym__double_quote_string,
      sym__single_quote_string,
    ACTIONS(759), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
  [12421] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(761), 1,
      anon_sym_COLON,
    STATE(209), 1,
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
  [12450] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(763), 1,
      sym__natural_number,
    ACTIONS(766), 1,
      anon_sym__,
    STATE(210), 2,
      aux_sym__friendly_number,
      sym_comment,
    ACTIONS(178), 4,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
      sym__identifier,
    ACTIONS(176), 9,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_DASH,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      anon_sym_DOT,
      anon_sym_BQUOTE,
  [12481] = 13,
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
    STATE(12), 1,
      aux_sym__friendly_number,
    STATE(77), 1,
      sym_integer,
    STATE(211), 1,
      sym_comment,
    STATE(444), 1,
      sym_literal,
    ACTIONS(43), 2,
      sym__natural_number,
      anon_sym__,
    STATE(95), 2,
      sym__double_quote_string,
      sym__single_quote_string,
    STATE(110), 2,
      sym__literal_string,
      sym_decimal_number,
    ACTIONS(723), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
  [12526] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(771), 1,
      sym_keyword_from,
    STATE(212), 1,
      sym_comment,
    ACTIONS(769), 14,
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
      anon_sym_LBRACK,
  [12552] = 11,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(410), 1,
      sym_keyword_and,
    ACTIONS(420), 1,
      anon_sym_PIPE,
    ACTIONS(424), 1,
      anon_sym_QMARK_QMARK,
    ACTIONS(470), 1,
      sym_keyword_or,
    ACTIONS(647), 1,
      anon_sym_EQ,
    STATE(213), 1,
      sym_comment,
    ACTIONS(414), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(418), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(422), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(416), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
  [12592] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(214), 1,
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
  [12618] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(773), 1,
      anon_sym_RPAREN,
    STATE(215), 1,
      sym_comment,
    ACTIONS(396), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(394), 12,
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
  [12646] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(216), 1,
      sym_comment,
    ACTIONS(560), 5,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
      anon_sym__,
      sym__identifier,
    ACTIONS(558), 10,
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
  [12672] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(217), 1,
      sym_comment,
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
  [12698] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(777), 1,
      sym_keyword_from,
    STATE(218), 1,
      sym_comment,
    ACTIONS(775), 14,
      ts_builtin_sym_end,
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
  [12724] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(779), 1,
      anon_sym_DASH_GT,
    STATE(219), 1,
      sym_comment,
    ACTIONS(396), 3,
      anon_sym_DASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(394), 11,
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
  [12752] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(783), 1,
      sym_keyword_from,
    STATE(220), 1,
      sym_comment,
    ACTIONS(781), 14,
      ts_builtin_sym_end,
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
  [12778] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(221), 1,
      sym_comment,
    ACTIONS(554), 5,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
      anon_sym__,
      sym__identifier,
    ACTIONS(552), 10,
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
  [12804] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(787), 1,
      sym_keyword_from,
    STATE(222), 1,
      sym_comment,
    ACTIONS(785), 14,
      ts_builtin_sym_end,
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
  [12830] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(223), 1,
      sym_comment,
    ACTIONS(396), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(394), 13,
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
  [12856] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(791), 1,
      sym_keyword_from,
    STATE(224), 1,
      sym_comment,
    ACTIONS(789), 14,
      ts_builtin_sym_end,
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
  [12882] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(795), 1,
      sym_keyword_from,
    STATE(225), 1,
      sym_comment,
    ACTIONS(793), 14,
      ts_builtin_sym_end,
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
  [12908] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(797), 1,
      anon_sym_DASH_GT,
    STATE(226), 1,
      sym_comment,
    ACTIONS(396), 3,
      anon_sym_DASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(394), 11,
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
  [12936] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(801), 1,
      sym_keyword_from,
    STATE(227), 1,
      sym_comment,
    ACTIONS(799), 14,
      ts_builtin_sym_end,
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
  [12962] = 11,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(420), 1,
      anon_sym_PIPE,
    ACTIONS(424), 1,
      anon_sym_QMARK_QMARK,
    ACTIONS(803), 1,
      sym_keyword_and,
    ACTIONS(805), 1,
      sym_keyword_or,
    ACTIONS(807), 1,
      anon_sym_RPAREN,
    STATE(228), 1,
      sym_comment,
    ACTIONS(414), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(418), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(422), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(416), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
  [13002] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(229), 1,
      sym_comment,
    ACTIONS(460), 5,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
      anon_sym__,
      sym__identifier,
    ACTIONS(458), 10,
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
  [13028] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(809), 1,
      anon_sym_RPAREN,
    STATE(230), 1,
      sym_comment,
    ACTIONS(396), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(394), 12,
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
  [13056] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(231), 1,
      sym_comment,
    ACTIONS(323), 5,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
      anon_sym__,
      sym__identifier,
    ACTIONS(321), 10,
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
  [13082] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(813), 1,
      sym_keyword_from,
    STATE(232), 1,
      sym_comment,
    ACTIONS(811), 14,
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
      anon_sym_LBRACK,
  [13108] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(233), 1,
      sym_comment,
    ACTIONS(313), 5,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
      anon_sym__,
      sym__identifier,
    ACTIONS(311), 10,
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
  [13134] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(815), 1,
      anon_sym_RPAREN,
    STATE(234), 1,
      sym_comment,
    ACTIONS(396), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(394), 12,
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
  [13162] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(819), 1,
      sym_keyword_from,
    STATE(235), 1,
      sym_comment,
    ACTIONS(817), 14,
      ts_builtin_sym_end,
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
  [13188] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(236), 1,
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
  [13214] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(737), 1,
      sym_keyword_from,
    STATE(237), 1,
      sym_comment,
    ACTIONS(735), 14,
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
      anon_sym_LBRACK,
  [13240] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(823), 1,
      sym_keyword_from,
    STATE(238), 1,
      sym_comment,
    ACTIONS(821), 14,
      ts_builtin_sym_end,
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
  [13266] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(729), 1,
      sym_keyword_from,
    STATE(239), 1,
      sym_comment,
    ACTIONS(727), 14,
      ts_builtin_sym_end,
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
  [13292] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(240), 1,
      sym_comment,
    ACTIONS(337), 5,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
      anon_sym__,
      sym__identifier,
    ACTIONS(335), 10,
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
  [13318] = 9,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(420), 1,
      anon_sym_PIPE,
    ACTIONS(424), 1,
      anon_sym_QMARK_QMARK,
    STATE(241), 1,
      sym_comment,
    ACTIONS(414), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(418), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(422), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(406), 3,
      sym_keyword_and,
      sym_keyword_or,
      anon_sym_RPAREN,
    ACTIONS(416), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
  [13354] = 10,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(410), 1,
      sym_keyword_and,
    ACTIONS(420), 1,
      anon_sym_PIPE,
    ACTIONS(424), 1,
      anon_sym_QMARK_QMARK,
    STATE(242), 1,
      sym_comment,
    ACTIONS(406), 2,
      sym_keyword_or,
      anon_sym_RPAREN,
    ACTIONS(414), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(418), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(422), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(416), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
  [13392] = 11,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(420), 1,
      anon_sym_PIPE,
    ACTIONS(424), 1,
      anon_sym_QMARK_QMARK,
    ACTIONS(466), 1,
      anon_sym_RPAREN,
    ACTIONS(803), 1,
      sym_keyword_and,
    ACTIONS(805), 1,
      sym_keyword_or,
    STATE(243), 1,
      sym_comment,
    ACTIONS(414), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(418), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(422), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(416), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
  [13432] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(244), 1,
      sym_comment,
    ACTIONS(323), 5,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
      anon_sym__,
      sym__identifier,
    ACTIONS(321), 10,
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
  [13458] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(245), 1,
      sym_comment,
    ACTIONS(331), 5,
      sym_keyword_true,
      sym_keyword_false,
      sym_keyword_null,
      anon_sym__,
      sym__identifier,
    ACTIONS(329), 10,
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
  [13484] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(827), 1,
      sym_keyword_from,
    STATE(246), 1,
      sym_comment,
    ACTIONS(825), 14,
      ts_builtin_sym_end,
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
  [13510] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(831), 1,
      sym_keyword_from,
    STATE(247), 1,
      sym_comment,
    ACTIONS(829), 13,
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
  [13535] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(835), 1,
      sym_keyword_from,
    STATE(248), 1,
      sym_comment,
    ACTIONS(833), 13,
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
  [13560] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(839), 1,
      sym_keyword_from,
    STATE(249), 1,
      sym_comment,
    ACTIONS(837), 13,
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
  [13585] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(843), 1,
      sym_keyword_from,
    STATE(250), 1,
      sym_comment,
    ACTIONS(841), 13,
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
  [13610] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(847), 1,
      sym_keyword_from,
    STATE(251), 1,
      sym_comment,
    ACTIONS(845), 13,
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
  [13635] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(851), 1,
      sym_keyword_from,
    STATE(252), 1,
      sym_comment,
    ACTIONS(849), 13,
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
  [13660] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(855), 1,
      sym_keyword_from,
    STATE(253), 1,
      sym_comment,
    ACTIONS(853), 13,
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
  [13685] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(859), 1,
      sym_keyword_from,
    STATE(254), 1,
      sym_comment,
    ACTIONS(857), 13,
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
  [13710] = 10,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(420), 1,
      anon_sym_PIPE,
    ACTIONS(424), 1,
      anon_sym_QMARK_QMARK,
    ACTIONS(803), 1,
      sym_keyword_and,
    ACTIONS(805), 1,
      sym_keyword_or,
    STATE(255), 1,
      sym_comment,
    ACTIONS(414), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(418), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(422), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(416), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
  [13747] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(863), 1,
      sym_keyword_from,
    STATE(256), 1,
      sym_comment,
    ACTIONS(861), 13,
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
  [13772] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(867), 1,
      sym_keyword_from,
    STATE(257), 1,
      sym_comment,
    ACTIONS(865), 13,
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
  [13797] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(871), 1,
      sym_keyword_from,
    STATE(258), 1,
      sym_comment,
    ACTIONS(869), 13,
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
  [13822] = 10,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(410), 1,
      sym_keyword_and,
    ACTIONS(420), 1,
      anon_sym_PIPE,
    ACTIONS(424), 1,
      anon_sym_QMARK_QMARK,
    ACTIONS(470), 1,
      sym_keyword_or,
    STATE(259), 1,
      sym_comment,
    ACTIONS(414), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(418), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(422), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(416), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
  [13859] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(875), 1,
      sym_keyword_from,
    STATE(260), 1,
      sym_comment,
    ACTIONS(873), 13,
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
  [13884] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(879), 1,
      sym_keyword_from,
    STATE(261), 1,
      sym_comment,
    ACTIONS(877), 13,
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
  [13909] = 13,
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
    ACTIONS(881), 1,
      ts_builtin_sym_end,
    STATE(262), 1,
      sym_comment,
    STATE(286), 1,
      aux_sym_program_repeat2,
    STATE(304), 1,
      aux_sym_program_repeat1,
    STATE(319), 1,
      sym_prql,
    STATE(143), 2,
      sym_from_text,
      sym_from,
    STATE(334), 3,
      sym_pipeline,
      sym_variable,
      sym_function_definition,
  [13952] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(885), 1,
      sym_keyword_from,
    STATE(263), 1,
      sym_comment,
    ACTIONS(883), 13,
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
  [13977] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(889), 1,
      sym_keyword_from,
    STATE(264), 1,
      sym_comment,
    ACTIONS(887), 13,
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
  [14002] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(893), 1,
      sym_keyword_from,
    STATE(265), 1,
      sym_comment,
    ACTIONS(891), 13,
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
  [14027] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(897), 1,
      sym_keyword_from,
    STATE(266), 1,
      sym_comment,
    ACTIONS(895), 13,
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
  [14052] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(901), 1,
      sym_keyword_from,
    STATE(267), 1,
      sym_comment,
    ACTIONS(899), 13,
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
  [14077] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(905), 1,
      sym_keyword_from,
    STATE(268), 1,
      sym_comment,
    ACTIONS(903), 13,
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
  [14102] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(909), 1,
      sym_keyword_from,
    STATE(269), 1,
      sym_comment,
    ACTIONS(907), 13,
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
  [14127] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(913), 1,
      sym_keyword_from,
    STATE(270), 1,
      sym_comment,
    ACTIONS(911), 13,
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
  [14152] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(509), 1,
      sym_keyword_from,
    STATE(271), 1,
      sym_comment,
    ACTIONS(507), 13,
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
  [14177] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(917), 1,
      sym_keyword_from,
    STATE(272), 1,
      sym_comment,
    ACTIONS(915), 13,
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
  [14202] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(921), 1,
      sym_keyword_from,
    STATE(273), 1,
      sym_comment,
    ACTIONS(919), 13,
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
  [14227] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(925), 1,
      sym_keyword_from,
    STATE(274), 1,
      sym_comment,
    ACTIONS(923), 13,
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
  [14252] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(929), 1,
      sym_keyword_from,
    STATE(275), 1,
      sym_comment,
    ACTIONS(927), 13,
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
  [14277] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(933), 1,
      sym_keyword_from,
    STATE(276), 1,
      sym_comment,
    ACTIONS(931), 13,
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
  [14302] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(937), 1,
      sym_keyword_from,
    STATE(277), 1,
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
  [14327] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(941), 1,
      sym_keyword_from,
    STATE(278), 1,
      sym_comment,
    ACTIONS(939), 13,
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
  [14352] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(945), 1,
      sym_keyword_from,
    STATE(279), 1,
      sym_comment,
    ACTIONS(943), 13,
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
  [14377] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(949), 1,
      sym_keyword_from,
    STATE(280), 1,
      sym_comment,
    ACTIONS(947), 13,
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
  [14402] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(953), 1,
      sym_keyword_from,
    STATE(281), 1,
      sym_comment,
    ACTIONS(951), 13,
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
  [14427] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(957), 1,
      sym_keyword_from,
    STATE(282), 1,
      sym_comment,
    ACTIONS(955), 13,
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
  [14452] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(961), 1,
      sym_keyword_from,
    STATE(283), 1,
      sym_comment,
    ACTIONS(959), 13,
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
  [14477] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(284), 1,
      sym_comment,
    STATE(313), 1,
      sym_target,
    ACTIONS(963), 11,
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
  [14500] = 9,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(965), 1,
      ts_builtin_sym_end,
    ACTIONS(967), 1,
      sym_keyword_from,
    ACTIONS(970), 1,
      sym_keyword_func,
    ACTIONS(973), 1,
      sym_keyword_let,
    ACTIONS(976), 1,
      sym_keyword_from_text,
    STATE(143), 2,
      sym_from_text,
      sym_from,
    STATE(285), 2,
      sym_comment,
      aux_sym_program_repeat2,
    STATE(334), 3,
      sym_pipeline,
      sym_variable,
      sym_function_definition,
  [14532] = 10,
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
    ACTIONS(979), 1,
      ts_builtin_sym_end,
    STATE(285), 1,
      aux_sym_program_repeat2,
    STATE(286), 1,
      sym_comment,
    STATE(143), 2,
      sym_from_text,
      sym_from,
    STATE(334), 3,
      sym_pipeline,
      sym_variable,
      sym_function_definition,
  [14566] = 10,
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
    ACTIONS(881), 1,
      ts_builtin_sym_end,
    STATE(285), 1,
      aux_sym_program_repeat2,
    STATE(287), 1,
      sym_comment,
    STATE(143), 2,
      sym_from_text,
      sym_from,
    STATE(334), 3,
      sym_pipeline,
      sym_variable,
      sym_function_definition,
  [14600] = 9,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(574), 1,
      sym_keyword_aggregate,
    ACTIONS(576), 1,
      sym_keyword_sort,
    ACTIONS(578), 1,
      sym_keyword_take,
    ACTIONS(981), 1,
      sym_keyword_window,
    ACTIONS(983), 1,
      anon_sym_RPAREN,
    STATE(288), 1,
      sym_comment,
    STATE(292), 1,
      aux_sym_group_repeat2,
    STATE(333), 4,
      sym_aggregate,
      sym_sorts,
      sym_takes,
      sym_window,
  [14631] = 9,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(574), 1,
      sym_keyword_aggregate,
    ACTIONS(576), 1,
      sym_keyword_sort,
    ACTIONS(578), 1,
      sym_keyword_take,
    ACTIONS(981), 1,
      sym_keyword_window,
    ACTIONS(985), 1,
      anon_sym_RPAREN,
    STATE(289), 1,
      sym_comment,
    STATE(292), 1,
      aux_sym_group_repeat2,
    STATE(333), 4,
      sym_aggregate,
      sym_sorts,
      sym_takes,
      sym_window,
  [14662] = 9,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(574), 1,
      sym_keyword_aggregate,
    ACTIONS(576), 1,
      sym_keyword_sort,
    ACTIONS(578), 1,
      sym_keyword_take,
    ACTIONS(981), 1,
      sym_keyword_window,
    ACTIONS(987), 1,
      anon_sym_RPAREN,
    STATE(290), 1,
      sym_comment,
    STATE(292), 1,
      aux_sym_group_repeat2,
    STATE(333), 4,
      sym_aggregate,
      sym_sorts,
      sym_takes,
      sym_window,
  [14693] = 9,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(574), 1,
      sym_keyword_aggregate,
    ACTIONS(576), 1,
      sym_keyword_sort,
    ACTIONS(578), 1,
      sym_keyword_take,
    ACTIONS(981), 1,
      sym_keyword_window,
    ACTIONS(989), 1,
      anon_sym_RPAREN,
    STATE(291), 1,
      sym_comment,
    STATE(292), 1,
      aux_sym_group_repeat2,
    STATE(333), 4,
      sym_aggregate,
      sym_sorts,
      sym_takes,
      sym_window,
  [14724] = 8,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(991), 1,
      sym_keyword_aggregate,
    ACTIONS(994), 1,
      sym_keyword_sort,
    ACTIONS(997), 1,
      sym_keyword_take,
    ACTIONS(1000), 1,
      sym_keyword_window,
    ACTIONS(1003), 1,
      anon_sym_RPAREN,
    STATE(292), 2,
      sym_comment,
      aux_sym_group_repeat2,
    STATE(333), 4,
      sym_aggregate,
      sym_sorts,
      sym_takes,
      sym_window,
  [14753] = 9,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(574), 1,
      sym_keyword_aggregate,
    ACTIONS(576), 1,
      sym_keyword_sort,
    ACTIONS(578), 1,
      sym_keyword_take,
    ACTIONS(981), 1,
      sym_keyword_window,
    ACTIONS(1005), 1,
      anon_sym_RPAREN,
    STATE(292), 1,
      aux_sym_group_repeat2,
    STATE(293), 1,
      sym_comment,
    STATE(333), 4,
      sym_aggregate,
      sym_sorts,
      sym_takes,
      sym_window,
  [14784] = 8,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(574), 1,
      sym_keyword_aggregate,
    ACTIONS(576), 1,
      sym_keyword_sort,
    ACTIONS(578), 1,
      sym_keyword_take,
    ACTIONS(981), 1,
      sym_keyword_window,
    STATE(289), 1,
      aux_sym_group_repeat2,
    STATE(294), 1,
      sym_comment,
    STATE(333), 4,
      sym_aggregate,
      sym_sorts,
      sym_takes,
      sym_window,
  [14812] = 8,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(574), 1,
      sym_keyword_aggregate,
    ACTIONS(576), 1,
      sym_keyword_sort,
    ACTIONS(578), 1,
      sym_keyword_take,
    ACTIONS(981), 1,
      sym_keyword_window,
    STATE(293), 1,
      aux_sym_group_repeat2,
    STATE(295), 1,
      sym_comment,
    STATE(333), 4,
      sym_aggregate,
      sym_sorts,
      sym_takes,
      sym_window,
  [14840] = 8,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(574), 1,
      sym_keyword_aggregate,
    ACTIONS(576), 1,
      sym_keyword_sort,
    ACTIONS(578), 1,
      sym_keyword_take,
    ACTIONS(981), 1,
      sym_keyword_window,
    STATE(291), 1,
      aux_sym_group_repeat2,
    STATE(296), 1,
      sym_comment,
    STATE(333), 4,
      sym_aggregate,
      sym_sorts,
      sym_takes,
      sym_window,
  [14868] = 10,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(49), 1,
      anon_sym_BQUOTE,
    ACTIONS(1007), 1,
      anon_sym_COMMA,
    ACTIONS(1009), 1,
      anon_sym_RBRACK,
    ACTIONS(1011), 1,
      sym__identifier,
    STATE(188), 1,
      sym_identifier,
    STATE(297), 1,
      sym_comment,
    STATE(364), 1,
      sym_direction,
    STATE(389), 1,
      sym__sort_instruction,
    ACTIONS(299), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
  [14900] = 8,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(574), 1,
      sym_keyword_aggregate,
    ACTIONS(576), 1,
      sym_keyword_sort,
    ACTIONS(578), 1,
      sym_keyword_take,
    ACTIONS(981), 1,
      sym_keyword_window,
    STATE(290), 1,
      aux_sym_group_repeat2,
    STATE(298), 1,
      sym_comment,
    STATE(333), 4,
      sym_aggregate,
      sym_sorts,
      sym_takes,
      sym_window,
  [14928] = 8,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(574), 1,
      sym_keyword_aggregate,
    ACTIONS(576), 1,
      sym_keyword_sort,
    ACTIONS(578), 1,
      sym_keyword_take,
    ACTIONS(981), 1,
      sym_keyword_window,
    STATE(288), 1,
      aux_sym_group_repeat2,
    STATE(299), 1,
      sym_comment,
    STATE(333), 4,
      sym_aggregate,
      sym_sorts,
      sym_takes,
      sym_window,
  [14956] = 9,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(1013), 1,
      anon_sym_DASH,
    ACTIONS(1015), 1,
      anon_sym_AT,
    STATE(142), 1,
      aux_sym__friendly_number,
    STATE(199), 1,
      sym_integer,
    STATE(239), 1,
      sym_range,
    STATE(300), 1,
      sym_comment,
    STATE(430), 1,
      sym_date,
    ACTIONS(562), 2,
      sym__natural_number,
      anon_sym__,
  [14985] = 9,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(49), 1,
      anon_sym_BQUOTE,
    ACTIONS(1011), 1,
      sym__identifier,
    ACTIONS(1017), 1,
      anon_sym_RBRACK,
    STATE(188), 1,
      sym_identifier,
    STATE(301), 1,
      sym_comment,
    STATE(364), 1,
      sym_direction,
    STATE(402), 1,
      sym__sort_instruction,
    ACTIONS(299), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
  [15014] = 9,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(1013), 1,
      anon_sym_DASH,
    ACTIONS(1015), 1,
      anon_sym_AT,
    STATE(142), 1,
      aux_sym__friendly_number,
    STATE(302), 1,
      sym_comment,
    STATE(322), 1,
      sym_integer,
    STATE(347), 1,
      sym_range,
    STATE(430), 1,
      sym_date,
    ACTIONS(562), 2,
      sym__natural_number,
      anon_sym__,
  [15043] = 9,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(49), 1,
      anon_sym_BQUOTE,
    ACTIONS(1011), 1,
      sym__identifier,
    ACTIONS(1019), 1,
      anon_sym_RBRACK,
    STATE(188), 1,
      sym_identifier,
    STATE(303), 1,
      sym_comment,
    STATE(364), 1,
      sym_direction,
    STATE(402), 1,
      sym__sort_instruction,
    ACTIONS(299), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
  [15072] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(1023), 1,
      sym_keyword_from,
    ACTIONS(1025), 1,
      sym_keyword_prql,
    STATE(319), 1,
      sym_prql,
    STATE(304), 2,
      sym_comment,
      aux_sym_program_repeat1,
    ACTIONS(1021), 4,
      ts_builtin_sym_end,
      sym_keyword_func,
      sym_keyword_let,
      sym_keyword_from_text,
  [15095] = 9,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(49), 1,
      anon_sym_BQUOTE,
    ACTIONS(1011), 1,
      sym__identifier,
    ACTIONS(1028), 1,
      anon_sym_LBRACK,
    STATE(188), 1,
      sym_identifier,
    STATE(227), 1,
      sym__sort_instruction,
    STATE(305), 1,
      sym_comment,
    STATE(364), 1,
      sym_direction,
    ACTIONS(299), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
  [15124] = 7,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(205), 1,
      sym__identifier,
    ACTIONS(753), 1,
      sym__natural_number,
    ACTIONS(1030), 1,
      anon_sym__,
    STATE(306), 1,
      sym_comment,
    STATE(307), 1,
      aux_sym__friendly_number,
    ACTIONS(203), 3,
      anon_sym_DASH_GT,
      anon_sym_DOT,
      anon_sym_BQUOTE,
  [15148] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(178), 1,
      sym__identifier,
    ACTIONS(1032), 1,
      sym__natural_number,
    ACTIONS(1035), 1,
      anon_sym__,
    STATE(307), 2,
      aux_sym__friendly_number,
      sym_comment,
    ACTIONS(176), 3,
      anon_sym_DASH_GT,
      anon_sym_DOT,
      anon_sym_BQUOTE,
  [15170] = 8,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(49), 1,
      anon_sym_BQUOTE,
    ACTIONS(1011), 1,
      sym__identifier,
    STATE(188), 1,
      sym_identifier,
    STATE(308), 1,
      sym_comment,
    STATE(364), 1,
      sym_direction,
    STATE(402), 1,
      sym__sort_instruction,
    ACTIONS(299), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
  [15196] = 9,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(49), 1,
      anon_sym_BQUOTE,
    ACTIONS(51), 1,
      sym__identifier,
    ACTIONS(1038), 1,
      sym_keyword_side,
    STATE(183), 1,
      sym__table_selection,
    STATE(201), 1,
      sym_identifier,
    STATE(212), 1,
      sym__table_reference,
    STATE(309), 1,
      sym_comment,
    STATE(326), 1,
      sym__join_definition,
  [15224] = 7,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(123), 1,
      sym__identifier,
    ACTIONS(753), 1,
      sym__natural_number,
    ACTIONS(1030), 1,
      anon_sym__,
    STATE(307), 1,
      aux_sym__friendly_number,
    STATE(310), 1,
      sym_comment,
    ACTIONS(121), 3,
      anon_sym_DASH_GT,
      anon_sym_DOT,
      anon_sym_BQUOTE,
  [15248] = 7,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(1040), 1,
      anon_sym_DASH_GT,
    ACTIONS(1042), 1,
      anon_sym_BQUOTE,
    ACTIONS(1045), 1,
      sym__identifier,
    STATE(344), 1,
      sym_identifier,
    STATE(356), 1,
      sym_parameter,
    STATE(311), 2,
      sym_comment,
      aux_sym_function_definition_repeat1,
  [15271] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(1050), 1,
      sym_keyword_from,
    STATE(312), 1,
      sym_comment,
    ACTIONS(1048), 5,
      ts_builtin_sym_end,
      sym_keyword_func,
      sym_keyword_let,
      sym_keyword_from_text,
      anon_sym_RPAREN,
  [15288] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(1054), 1,
      sym_keyword_from,
    STATE(313), 1,
      sym_comment,
    ACTIONS(1052), 5,
      ts_builtin_sym_end,
      sym_keyword_func,
      sym_keyword_let,
      sym_keyword_prql,
      sym_keyword_from_text,
  [15305] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(1058), 1,
      sym_keyword_from,
    STATE(314), 1,
      sym_comment,
    ACTIONS(1056), 5,
      ts_builtin_sym_end,
      sym_keyword_func,
      sym_keyword_let,
      sym_keyword_prql,
      sym_keyword_from_text,
  [15322] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(315), 1,
      sym_comment,
    ACTIONS(239), 2,
      anon_sym__,
      sym__identifier,
    ACTIONS(237), 4,
      anon_sym_DASH_GT,
      sym__natural_number,
      anon_sym_DOT,
      anon_sym_BQUOTE,
  [15339] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(1063), 1,
      anon_sym_LPAREN,
    STATE(350), 1,
      sym__window_definition,
    STATE(316), 2,
      sym_comment,
      aux_sym_window_definitions_repeat1,
    ACTIONS(1060), 3,
      sym_keyword_rolling,
      sym_keyword_rows,
      sym_keyword_expanding,
  [15358] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(1067), 1,
      sym_keyword_from,
    STATE(317), 1,
      sym_comment,
    ACTIONS(1065), 5,
      ts_builtin_sym_end,
      sym_keyword_func,
      sym_keyword_let,
      sym_keyword_prql,
      sym_keyword_from_text,
  [15375] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(318), 1,
      sym_comment,
    STATE(321), 1,
      aux_sym_window_definitions_repeat1,
    STATE(350), 1,
      sym__window_definition,
    STATE(457), 1,
      sym_window_definitions,
    ACTIONS(1069), 3,
      sym_keyword_rolling,
      sym_keyword_rows,
      sym_keyword_expanding,
  [15396] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(1073), 1,
      sym_keyword_from,
    STATE(319), 1,
      sym_comment,
    ACTIONS(1071), 5,
      ts_builtin_sym_end,
      sym_keyword_func,
      sym_keyword_let,
      sym_keyword_prql,
      sym_keyword_from_text,
  [15413] = 8,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(1075), 1,
      anon_sym_DASH_GT,
    ACTIONS(1077), 1,
      anon_sym_BQUOTE,
    ACTIONS(1079), 1,
      sym__identifier,
    STATE(311), 1,
      aux_sym_function_definition_repeat1,
    STATE(320), 1,
      sym_comment,
    STATE(344), 1,
      sym_identifier,
    STATE(356), 1,
      sym_parameter,
  [15438] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(1081), 1,
      anon_sym_LPAREN,
    STATE(316), 1,
      aux_sym_window_definitions_repeat1,
    STATE(321), 1,
      sym_comment,
    STATE(350), 1,
      sym__window_definition,
    ACTIONS(1069), 3,
      sym_keyword_rolling,
      sym_keyword_rows,
      sym_keyword_expanding,
  [15459] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(731), 1,
      anon_sym_DOT_DOT,
    STATE(322), 1,
      sym_comment,
    ACTIONS(1083), 4,
      sym_keyword_rolling,
      sym_keyword_rows,
      sym_keyword_expanding,
      anon_sym_LPAREN,
  [15475] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(1087), 1,
      sym_keyword_from,
    STATE(323), 1,
      sym_comment,
    ACTIONS(1085), 4,
      ts_builtin_sym_end,
      sym_keyword_func,
      sym_keyword_let,
      sym_keyword_from_text,
  [15491] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(1089), 1,
      anon_sym_DASH,
    STATE(12), 1,
      aux_sym__friendly_number,
    STATE(85), 1,
      sym_integer,
    STATE(324), 1,
      sym_comment,
    ACTIONS(43), 2,
      sym__natural_number,
      anon_sym__,
  [15511] = 7,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(1077), 1,
      anon_sym_BQUOTE,
    ACTIONS(1079), 1,
      sym__identifier,
    STATE(320), 1,
      aux_sym_function_definition_repeat1,
    STATE(325), 1,
      sym_comment,
    STATE(344), 1,
      sym_identifier,
    STATE(356), 1,
      sym_parameter,
  [15533] = 7,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(49), 1,
      anon_sym_BQUOTE,
    ACTIONS(1011), 1,
      sym__identifier,
    STATE(180), 1,
      sym__table_selection,
    STATE(201), 1,
      sym_identifier,
    STATE(212), 1,
      sym__table_reference,
    STATE(326), 1,
      sym_comment,
  [15555] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(1093), 1,
      sym_keyword_from,
    STATE(327), 1,
      sym_comment,
    ACTIONS(1091), 4,
      ts_builtin_sym_end,
      sym_keyword_func,
      sym_keyword_let,
      sym_keyword_from_text,
  [15571] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(1089), 1,
      anon_sym_DASH,
    STATE(12), 1,
      aux_sym__friendly_number,
    STATE(82), 1,
      sym_integer,
    STATE(328), 1,
      sym_comment,
    ACTIONS(43), 2,
      sym__natural_number,
      anon_sym__,
  [15591] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(7), 1,
      sym_keyword_from,
    ACTIONS(15), 1,
      sym_keyword_from_text,
    STATE(329), 1,
      sym_comment,
    STATE(414), 1,
      sym_pipeline,
    STATE(174), 2,
      sym_from_text,
      sym_from,
  [15611] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(1089), 1,
      anon_sym_DASH,
    STATE(12), 1,
      aux_sym__friendly_number,
    STATE(168), 1,
      sym_integer,
    STATE(330), 1,
      sym_comment,
    ACTIONS(43), 2,
      sym__natural_number,
      anon_sym__,
  [15631] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(1089), 1,
      anon_sym_DASH,
    STATE(12), 1,
      aux_sym__friendly_number,
    STATE(83), 1,
      sym_integer,
    STATE(331), 1,
      sym_comment,
    ACTIONS(43), 2,
      sym__natural_number,
      anon_sym__,
  [15651] = 7,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(49), 1,
      anon_sym_BQUOTE,
    ACTIONS(1011), 1,
      sym__identifier,
    STATE(201), 1,
      sym_identifier,
    STATE(212), 1,
      sym__table_reference,
    STATE(264), 1,
      sym__table_selection,
    STATE(332), 1,
      sym_comment,
  [15673] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(333), 1,
      sym_comment,
    ACTIONS(1095), 5,
      sym_keyword_aggregate,
      sym_keyword_sort,
      sym_keyword_take,
      sym_keyword_window,
      anon_sym_RPAREN,
  [15687] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(1099), 1,
      sym_keyword_from,
    STATE(334), 1,
      sym_comment,
    ACTIONS(1097), 4,
      ts_builtin_sym_end,
      sym_keyword_func,
      sym_keyword_let,
      sym_keyword_from_text,
  [15703] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(335), 1,
      sym_comment,
    ACTIONS(1101), 5,
      sym_keyword_aggregate,
      sym_keyword_sort,
      sym_keyword_take,
      sym_keyword_window,
      anon_sym_RPAREN,
  [15717] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(336), 1,
      sym_comment,
    ACTIONS(281), 4,
      anon_sym_COLON,
      anon_sym_DASH_GT,
      anon_sym_BQUOTE,
      sym__identifier,
  [15730] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(1103), 1,
      anon_sym_DOT,
    STATE(306), 1,
      aux_sym__friendly_number,
    STATE(337), 1,
      sym_comment,
    ACTIONS(753), 2,
      sym__natural_number,
      anon_sym__,
  [15747] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(1105), 1,
      sym__natural_number,
    STATE(338), 1,
      sym_comment,
    ACTIONS(335), 3,
      anon_sym_DASH_GT,
      anon_sym_BQUOTE,
      sym__identifier,
  [15762] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(339), 1,
      sym_comment,
    ACTIONS(1107), 4,
      sym_keyword_inner,
      sym_keyword_left,
      sym_keyword_right,
      sym_keyword_full,
  [15775] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(1109), 1,
      anon_sym_DOT,
    STATE(340), 1,
      sym_comment,
    ACTIONS(321), 3,
      anon_sym_DASH_GT,
      anon_sym_BQUOTE,
      sym__identifier,
  [15790] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(341), 1,
      sym_comment,
    ACTIONS(277), 4,
      anon_sym_COLON,
      anon_sym_DASH_GT,
      anon_sym_BQUOTE,
      sym__identifier,
  [15803] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(1111), 1,
      aux_sym__date_token1,
    ACTIONS(1113), 1,
      aux_sym__time_token1,
    STATE(86), 1,
      sym__date,
    STATE(113), 1,
      sym__time,
    STATE(342), 1,
      sym_comment,
  [15822] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(1115), 1,
      anon_sym_DOT,
    STATE(23), 1,
      aux_sym__friendly_number,
    STATE(343), 1,
      sym_comment,
    ACTIONS(43), 2,
      sym__natural_number,
      anon_sym__,
  [15839] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(1117), 1,
      anon_sym_COLON,
    STATE(344), 1,
      sym_comment,
    ACTIONS(1119), 3,
      anon_sym_DASH_GT,
      anon_sym_BQUOTE,
      sym__identifier,
  [15854] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(1121), 1,
      anon_sym_DOT,
    STATE(154), 1,
      aux_sym__friendly_number,
    STATE(345), 1,
      sym_comment,
    ACTIONS(107), 2,
      sym__natural_number,
      anon_sym__,
  [15871] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(49), 1,
      anon_sym_BQUOTE,
    ACTIONS(1011), 1,
      sym__identifier,
    STATE(232), 1,
      sym__table_reference,
    STATE(237), 1,
      sym_identifier,
    STATE(346), 1,
      sym_comment,
  [15890] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(347), 1,
      sym_comment,
    ACTIONS(1083), 4,
      sym_keyword_rolling,
      sym_keyword_rows,
      sym_keyword_expanding,
      anon_sym_LPAREN,
  [15903] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(1123), 1,
      anon_sym_DOT,
    STATE(207), 1,
      aux_sym__friendly_number,
    STATE(348), 1,
      sym_comment,
    ACTIONS(267), 2,
      sym__natural_number,
      anon_sym__,
  [15920] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(1125), 1,
      anon_sym_DOT,
    STATE(125), 1,
      aux_sym__friendly_number,
    STATE(349), 1,
      sym_comment,
    ACTIONS(71), 2,
      sym__natural_number,
      anon_sym__,
  [15937] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(350), 1,
      sym_comment,
    ACTIONS(1127), 4,
      sym_keyword_rolling,
      sym_keyword_rows,
      sym_keyword_expanding,
      anon_sym_LPAREN,
  [15950] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(144), 1,
      aux_sym__friendly_number,
    STATE(351), 1,
      sym_comment,
    ACTIONS(562), 2,
      sym__natural_number,
      anon_sym__,
  [15964] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(352), 1,
      sym_comment,
    ACTIONS(329), 3,
      anon_sym_DASH_GT,
      anon_sym_BQUOTE,
      sym__identifier,
  [15976] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(255), 1,
      anon_sym_RBRACK,
    ACTIONS(1129), 1,
      anon_sym_COMMA,
    STATE(353), 1,
      sym_comment,
    STATE(354), 1,
      aux_sym_conditions_repeat1,
  [15992] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(743), 1,
      anon_sym_RBRACK,
    ACTIONS(1131), 1,
      anon_sym_COMMA,
    STATE(354), 2,
      sym_comment,
      aux_sym_conditions_repeat1,
  [16006] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(217), 1,
      anon_sym_RBRACK,
    ACTIONS(1134), 1,
      anon_sym_COMMA,
    STATE(355), 1,
      sym_comment,
    STATE(362), 1,
      aux_sym_group_repeat1,
  [16022] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(356), 1,
      sym_comment,
    ACTIONS(1136), 3,
      anon_sym_DASH_GT,
      anon_sym_BQUOTE,
      sym__identifier,
  [16034] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(15), 1,
      sym_keyword_from_text,
    ACTIONS(1138), 1,
      anon_sym_LPAREN,
    STATE(145), 1,
      sym_from_text,
    STATE(357), 1,
      sym_comment,
  [16050] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(709), 1,
      anon_sym_RBRACK,
    ACTIONS(1140), 1,
      anon_sym_COMMA,
    STATE(358), 2,
      sym_comment,
      aux_sym_aggregate_repeat1,
  [16064] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(201), 1,
      anon_sym_RBRACK,
    ACTIONS(1143), 1,
      anon_sym_COMMA,
    STATE(359), 2,
      sym_comment,
      aux_sym_switch_repeat2,
  [16078] = 5,
    ACTIONS(1146), 1,
      aux_sym__inner_triple_quotes_token1,
    ACTIONS(1148), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(1150), 1,
      anon_sym_POUND,
    STATE(360), 1,
      sym_comment,
    STATE(378), 1,
      aux_sym__inner_triple_quotes,
  [16094] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(1152), 1,
      anon_sym_COMMA,
    ACTIONS(1154), 1,
      anon_sym_RBRACK,
    STATE(361), 1,
      sym_comment,
    STATE(367), 1,
      aux_sym_derives_repeat1,
  [16110] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(1156), 1,
      anon_sym_COMMA,
    ACTIONS(1159), 1,
      anon_sym_RBRACK,
    STATE(362), 2,
      sym_comment,
      aux_sym_group_repeat1,
  [16124] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(363), 1,
      sym_comment,
    ACTIONS(1161), 3,
      anon_sym_BQUOTE,
      sym__identifier,
      aux_sym__date_token2,
  [16136] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(49), 1,
      anon_sym_BQUOTE,
    ACTIONS(1011), 1,
      sym__identifier,
    STATE(179), 1,
      sym_identifier,
    STATE(364), 1,
      sym_comment,
  [16152] = 5,
    ACTIONS(1146), 1,
      aux_sym__inner_triple_quotes_token1,
    ACTIONS(1150), 1,
      anon_sym_POUND,
    ACTIONS(1163), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    STATE(365), 1,
      sym_comment,
    STATE(378), 1,
      aux_sym__inner_triple_quotes,
  [16168] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(1165), 1,
      anon_sym_COMMA,
    ACTIONS(1167), 1,
      anon_sym_RBRACK,
    STATE(366), 1,
      sym_comment,
    STATE(387), 1,
      aux_sym_group_repeat1,
  [16184] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(1169), 1,
      anon_sym_COMMA,
    ACTIONS(1172), 1,
      anon_sym_RBRACK,
    STATE(367), 2,
      sym_comment,
      aux_sym_derives_repeat1,
  [16198] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(368), 1,
      sym_comment,
    ACTIONS(1174), 3,
      anon_sym_DASH_GT,
      anon_sym_BQUOTE,
      sym__identifier,
  [16210] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(49), 1,
      anon_sym_BQUOTE,
    ACTIONS(1011), 1,
      sym__identifier,
    STATE(369), 1,
      sym_comment,
    STATE(482), 1,
      sym_identifier,
  [16226] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(370), 1,
      sym_comment,
    ACTIONS(321), 3,
      anon_sym_DASH_GT,
      anon_sym_BQUOTE,
      sym__identifier,
  [16238] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(199), 1,
      anon_sym_RBRACK,
    ACTIONS(1176), 1,
      anon_sym_COMMA,
    STATE(371), 1,
      sym_comment,
    STATE(377), 1,
      aux_sym_group_repeat1,
  [16254] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(1178), 1,
      sym_keyword_format,
    ACTIONS(1180), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    STATE(279), 1,
      sym__triple_quote_string,
    STATE(372), 1,
      sym_comment,
  [16270] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(231), 1,
      anon_sym_RBRACK,
    ACTIONS(1182), 1,
      anon_sym_COMMA,
    STATE(355), 1,
      aux_sym_group_repeat1,
    STATE(373), 1,
      sym_comment,
  [16286] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(245), 1,
      anon_sym_RBRACK,
    ACTIONS(1184), 1,
      anon_sym_COMMA,
    STATE(359), 1,
      aux_sym_switch_repeat2,
    STATE(374), 1,
      sym_comment,
  [16302] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(23), 1,
      aux_sym__friendly_number,
    STATE(375), 1,
      sym_comment,
    ACTIONS(43), 2,
      sym__natural_number,
      anon_sym__,
  [16316] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(49), 1,
      anon_sym_BQUOTE,
    ACTIONS(1011), 1,
      sym__identifier,
    STATE(87), 1,
      sym_identifier,
    STATE(376), 1,
      sym_comment,
  [16332] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(231), 1,
      anon_sym_RBRACK,
    ACTIONS(1182), 1,
      anon_sym_COMMA,
    STATE(362), 1,
      aux_sym_group_repeat1,
    STATE(377), 1,
      sym_comment,
  [16348] = 4,
    ACTIONS(1150), 1,
      anon_sym_POUND,
    ACTIONS(1186), 1,
      aux_sym__inner_triple_quotes_token1,
    ACTIONS(1189), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    STATE(378), 2,
      aux_sym__inner_triple_quotes,
      sym_comment,
  [16362] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(379), 1,
      sym_comment,
    ACTIONS(335), 3,
      anon_sym_DASH_GT,
      anon_sym_BQUOTE,
      sym__identifier,
  [16374] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(1191), 1,
      anon_sym_COMMA,
    ACTIONS(1194), 1,
      anon_sym_RBRACK,
    STATE(380), 2,
      sym_comment,
      aux_sym_sorts_repeat1,
  [16388] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(1077), 1,
      anon_sym_BQUOTE,
    ACTIONS(1079), 1,
      sym__identifier,
    STATE(325), 1,
      sym_identifier,
    STATE(381), 1,
      sym_comment,
  [16404] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(382), 1,
      sym_comment,
    ACTIONS(398), 3,
      anon_sym_DASH_GT,
      anon_sym_BQUOTE,
      sym__identifier,
  [16416] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(383), 1,
      sym_comment,
    ACTIONS(311), 3,
      anon_sym_DASH_GT,
      anon_sym_BQUOTE,
      sym__identifier,
  [16428] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(384), 1,
      sym_comment,
    ACTIONS(458), 3,
      anon_sym_DASH_GT,
      anon_sym_BQUOTE,
      sym__identifier,
  [16440] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(1017), 1,
      anon_sym_RBRACK,
    ACTIONS(1196), 1,
      anon_sym_COMMA,
    STATE(380), 1,
      aux_sym_sorts_repeat1,
    STATE(385), 1,
      sym_comment,
  [16456] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(55), 1,
      anon_sym_RBRACK,
    ACTIONS(1198), 1,
      anon_sym_COMMA,
    STATE(358), 1,
      aux_sym_aggregate_repeat1,
    STATE(386), 1,
      sym_comment,
  [16472] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(211), 1,
      anon_sym_RBRACK,
    ACTIONS(1200), 1,
      anon_sym_COMMA,
    STATE(362), 1,
      aux_sym_group_repeat1,
    STATE(387), 1,
      sym_comment,
  [16488] = 5,
    ACTIONS(1146), 1,
      aux_sym__inner_triple_quotes_token1,
    ACTIONS(1150), 1,
      anon_sym_POUND,
    ACTIONS(1202), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    STATE(378), 1,
      aux_sym__inner_triple_quotes,
    STATE(388), 1,
      sym_comment,
  [16504] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(1204), 1,
      anon_sym_COMMA,
    ACTIONS(1206), 1,
      anon_sym_RBRACK,
    STATE(385), 1,
      aux_sym_sorts_repeat1,
    STATE(389), 1,
      sym_comment,
  [16520] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(243), 1,
      anon_sym_RBRACK,
    ACTIONS(1208), 1,
      anon_sym_COMMA,
    STATE(367), 1,
      aux_sym_derives_repeat1,
    STATE(390), 1,
      sym_comment,
  [16536] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(1210), 1,
      anon_sym_COMMA,
    ACTIONS(1212), 1,
      anon_sym_RBRACK,
    STATE(390), 1,
      aux_sym_derives_repeat1,
    STATE(391), 1,
      sym_comment,
  [16552] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(663), 1,
      anon_sym_COMMA,
    ACTIONS(665), 1,
      anon_sym_RBRACK,
    STATE(386), 1,
      aux_sym_aggregate_repeat1,
    STATE(392), 1,
      sym_comment,
  [16568] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(1180), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    STATE(263), 1,
      sym__triple_quote_string,
    STATE(393), 1,
      sym_comment,
  [16581] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(1214), 1,
      sym_keyword_derive,
    STATE(394), 1,
      sym_comment,
    STATE(471), 1,
      sym_derives,
  [16594] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(395), 1,
      sym_comment,
    ACTIONS(1172), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [16605] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(1216), 1,
      sym_keyword_version,
    ACTIONS(1218), 1,
      sym_keyword_target,
    STATE(396), 1,
      sym_comment,
  [16618] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(397), 1,
      sym_comment,
    ACTIONS(709), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [16629] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(398), 1,
      sym_comment,
    ACTIONS(1220), 2,
      anon_sym_BQUOTE,
      sym__identifier,
  [16640] = 4,
    ACTIONS(1146), 1,
      aux_sym__inner_triple_quotes_token1,
    ACTIONS(1150), 1,
      anon_sym_POUND,
    STATE(360), 1,
      aux_sym__inner_triple_quotes,
    STATE(399), 1,
      sym_comment,
  [16653] = 3,
    ACTIONS(1150), 1,
      anon_sym_POUND,
    STATE(400), 1,
      sym_comment,
    ACTIONS(1222), 2,
      aux_sym__inner_triple_quotes_token1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
  [16664] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(1224), 1,
      aux_sym__time_token1,
    STATE(71), 1,
      sym__time,
    STATE(401), 1,
      sym_comment,
  [16677] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(402), 1,
      sym_comment,
    ACTIONS(1194), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [16688] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(403), 1,
      sym_comment,
    ACTIONS(1226), 2,
      sym_keyword_csv,
      sym_keyword_json,
  [16699] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(1111), 1,
      aux_sym__date_token1,
    STATE(161), 1,
      sym__date,
    STATE(404), 1,
      sym_comment,
  [16712] = 4,
    ACTIONS(1146), 1,
      aux_sym__inner_triple_quotes_token1,
    ACTIONS(1150), 1,
      anon_sym_POUND,
    STATE(365), 1,
      aux_sym__inner_triple_quotes,
    STATE(405), 1,
      sym_comment,
  [16725] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(1015), 1,
      anon_sym_AT,
    STATE(168), 1,
      sym_date,
    STATE(406), 1,
      sym_comment,
  [16738] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(407), 1,
      sym_comment,
    ACTIONS(1159), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [16749] = 4,
    ACTIONS(1146), 1,
      aux_sym__inner_triple_quotes_token1,
    ACTIONS(1150), 1,
      anon_sym_POUND,
    STATE(388), 1,
      aux_sym__inner_triple_quotes,
    STATE(408), 1,
      sym_comment,
  [16762] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(31), 1,
      anon_sym_DQUOTE,
    STATE(317), 1,
      sym__double_quote_string,
    STATE(409), 1,
      sym_comment,
  [16775] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(1228), 1,
      anon_sym_BQUOTE,
    STATE(410), 1,
      sym_comment,
  [16785] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(1230), 1,
      anon_sym_COLON,
    STATE(411), 1,
      sym_comment,
  [16795] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(1232), 1,
      aux_sym__date_token2,
    STATE(412), 1,
      sym_comment,
  [16805] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(1234), 1,
      aux_sym__date_token2,
    STATE(413), 1,
      sym_comment,
  [16815] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(1236), 1,
      anon_sym_RPAREN,
    STATE(414), 1,
      sym_comment,
  [16825] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(199), 1,
      anon_sym_RBRACK,
    STATE(415), 1,
      sym_comment,
  [16835] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(1206), 1,
      anon_sym_RBRACK,
    STATE(416), 1,
      sym_comment,
  [16845] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(665), 1,
      anon_sym_RBRACK,
    STATE(417), 1,
      sym_comment,
  [16855] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(1238), 1,
      anon_sym_LPAREN,
    STATE(418), 1,
      sym_comment,
  [16865] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(1167), 1,
      anon_sym_RBRACK,
    STATE(419), 1,
      sym_comment,
  [16875] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(1212), 1,
      anon_sym_RBRACK,
    STATE(420), 1,
      sym_comment,
  [16885] = 3,
    ACTIONS(1150), 1,
      anon_sym_POUND,
    ACTIONS(1240), 1,
      aux_sym_comment_token1,
    STATE(421), 1,
      sym_comment,
  [16895] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(1242), 1,
      anon_sym_DASH,
    STATE(422), 1,
      sym_comment,
  [16905] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(1244), 1,
      anon_sym_DQUOTE,
    STATE(423), 1,
      sym_comment,
  [16915] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(1246), 1,
      anon_sym_DQUOTE,
    STATE(424), 1,
      sym_comment,
  [16925] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(1248), 1,
      anon_sym_SQUOTE,
    STATE(425), 1,
      sym_comment,
  [16935] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(1250), 1,
      anon_sym_DQUOTE,
    STATE(426), 1,
      sym_comment,
  [16945] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(339), 1,
      sym__natural_number,
    STATE(427), 1,
      sym_comment,
  [16955] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(1252), 1,
      anon_sym_LBRACK,
    STATE(428), 1,
      sym_comment,
  [16965] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(1254), 1,
      anon_sym_COLON,
    STATE(429), 1,
      sym_comment,
  [16975] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(1256), 1,
      anon_sym_DOT_DOT,
    STATE(430), 1,
      sym_comment,
  [16985] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(1258), 1,
      anon_sym_LPAREN,
    STATE(431), 1,
      sym_comment,
  [16995] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(1260), 1,
      anon_sym_RPAREN,
    STATE(432), 1,
      sym_comment,
  [17005] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(231), 1,
      anon_sym_RBRACK,
    STATE(433), 1,
      sym_comment,
  [17015] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(1262), 1,
      anon_sym_LPAREN,
    STATE(434), 1,
      sym_comment,
  [17025] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(1264), 1,
      anon_sym_DOT,
    STATE(435), 1,
      sym_comment,
  [17035] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(1266), 1,
      sym__natural_number,
    STATE(436), 1,
      sym_comment,
  [17045] = 3,
    ACTIONS(1150), 1,
      anon_sym_POUND,
    ACTIONS(1268), 1,
      aux_sym__double_quote_string_token1,
    STATE(437), 1,
      sym_comment,
  [17055] = 3,
    ACTIONS(1150), 1,
      anon_sym_POUND,
    ACTIONS(1270), 1,
      aux_sym__double_quote_string_token1,
    STATE(438), 1,
      sym_comment,
  [17065] = 3,
    ACTIONS(1150), 1,
      anon_sym_POUND,
    ACTIONS(1272), 1,
      aux_sym__single_quote_string_token1,
    STATE(439), 1,
      sym_comment,
  [17075] = 3,
    ACTIONS(1150), 1,
      anon_sym_POUND,
    ACTIONS(1274), 1,
      aux_sym__double_quote_string_token1,
    STATE(440), 1,
      sym_comment,
  [17085] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(1276), 1,
      anon_sym_LPAREN,
    STATE(441), 1,
      sym_comment,
  [17095] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(1278), 1,
      aux_sym__date_token2,
    STATE(442), 1,
      sym_comment,
  [17105] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(1280), 1,
      aux_sym__date_token2,
    STATE(443), 1,
      sym_comment,
  [17115] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(1282), 1,
      anon_sym_COMMA,
    STATE(444), 1,
      sym_comment,
  [17125] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(1284), 1,
      anon_sym_COMMA,
    STATE(445), 1,
      sym_comment,
  [17135] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(1286), 1,
      anon_sym_BQUOTE,
    STATE(446), 1,
      sym_comment,
  [17145] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(1288), 1,
      anon_sym_LBRACK,
    STATE(447), 1,
      sym_comment,
  [17155] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(1290), 1,
      anon_sym_RPAREN,
    STATE(448), 1,
      sym_comment,
  [17165] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(1292), 1,
      aux_sym__date_token2,
    STATE(449), 1,
      sym_comment,
  [17175] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(1294), 1,
      sym__natural_number,
    STATE(450), 1,
      sym_comment,
  [17185] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(1105), 1,
      sym__natural_number,
    STATE(451), 1,
      sym_comment,
  [17195] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(1296), 1,
      anon_sym_DQUOTE,
    STATE(452), 1,
      sym_comment,
  [17205] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(1298), 1,
      anon_sym_SQUOTE,
    STATE(453), 1,
      sym_comment,
  [17215] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(1300), 1,
      anon_sym_DASH,
    STATE(454), 1,
      sym_comment,
  [17225] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(1302), 1,
      anon_sym_LBRACK,
    STATE(455), 1,
      sym_comment,
  [17235] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(1304), 1,
      anon_sym_BQUOTE,
    STATE(456), 1,
      sym_comment,
  [17245] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(1306), 1,
      anon_sym_LPAREN,
    STATE(457), 1,
      sym_comment,
  [17255] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(1308), 1,
      sym__natural_number,
    STATE(458), 1,
      sym_comment,
  [17265] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(1310), 1,
      sym__natural_number,
    STATE(459), 1,
      sym_comment,
  [17275] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(1312), 1,
      anon_sym_DQUOTE,
    STATE(460), 1,
      sym_comment,
  [17285] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(1314), 1,
      anon_sym_SQUOTE,
    STATE(461), 1,
      sym_comment,
  [17295] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(1316), 1,
      anon_sym_COLON,
    STATE(462), 1,
      sym_comment,
  [17305] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(1318), 1,
      anon_sym_COLON,
    STATE(463), 1,
      sym_comment,
  [17315] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(1320), 1,
      anon_sym_BQUOTE,
    STATE(464), 1,
      sym_comment,
  [17325] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(1322), 1,
      anon_sym_LPAREN,
    STATE(465), 1,
      sym_comment,
  [17335] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(1324), 1,
      sym__natural_number,
    STATE(466), 1,
      sym_comment,
  [17345] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(1326), 1,
      sym__natural_number,
    STATE(467), 1,
      sym_comment,
  [17355] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(1328), 1,
      anon_sym_DQUOTE,
    STATE(468), 1,
      sym_comment,
  [17365] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(1330), 1,
      anon_sym_SQUOTE,
    STATE(469), 1,
      sym_comment,
  [17375] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(1332), 1,
      anon_sym_BQUOTE,
    STATE(470), 1,
      sym_comment,
  [17385] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(1334), 1,
      anon_sym_RPAREN,
    STATE(471), 1,
      sym_comment,
  [17395] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(1336), 1,
      sym__natural_number,
    STATE(472), 1,
      sym_comment,
  [17405] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(1338), 1,
      sym__natural_number,
    STATE(473), 1,
      sym_comment,
  [17415] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(1340), 1,
      anon_sym_DQUOTE,
    STATE(474), 1,
      sym_comment,
  [17425] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(1342), 1,
      anon_sym_SQUOTE,
    STATE(475), 1,
      sym_comment,
  [17435] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(1344), 1,
      anon_sym_BQUOTE,
    STATE(476), 1,
      sym_comment,
  [17445] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(1346), 1,
      anon_sym_BQUOTE,
    STATE(477), 1,
      sym_comment,
  [17455] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(1348), 1,
      anon_sym_BQUOTE,
    STATE(478), 1,
      sym_comment,
  [17465] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(1350), 1,
      sym__identifier_dot,
    STATE(479), 1,
      sym_comment,
  [17475] = 3,
    ACTIONS(1150), 1,
      anon_sym_POUND,
    ACTIONS(1352), 1,
      aux_sym__double_quote_string_token1,
    STATE(480), 1,
      sym_comment,
  [17485] = 3,
    ACTIONS(1150), 1,
      anon_sym_POUND,
    ACTIONS(1354), 1,
      aux_sym__single_quote_string_token1,
    STATE(481), 1,
      sym_comment,
  [17495] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(1356), 1,
      anon_sym_EQ,
    STATE(482), 1,
      sym_comment,
  [17505] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(1358), 1,
      sym__identifier_dot,
    STATE(483), 1,
      sym_comment,
  [17515] = 3,
    ACTIONS(1150), 1,
      anon_sym_POUND,
    ACTIONS(1360), 1,
      aux_sym__double_quote_string_token1,
    STATE(484), 1,
      sym_comment,
  [17525] = 3,
    ACTIONS(1150), 1,
      anon_sym_POUND,
    ACTIONS(1362), 1,
      aux_sym__single_quote_string_token1,
    STATE(485), 1,
      sym_comment,
  [17535] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(1364), 1,
      sym__identifier_dot,
    STATE(486), 1,
      sym_comment,
  [17545] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(1366), 1,
      sym__identifier_dot,
    STATE(487), 1,
      sym_comment,
  [17555] = 3,
    ACTIONS(1150), 1,
      anon_sym_POUND,
    ACTIONS(1368), 1,
      aux_sym__double_quote_string_token1,
    STATE(488), 1,
      sym_comment,
  [17565] = 3,
    ACTIONS(1150), 1,
      anon_sym_POUND,
    ACTIONS(1370), 1,
      aux_sym__single_quote_string_token1,
    STATE(489), 1,
      sym_comment,
  [17575] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(1372), 1,
      sym__identifier_dot,
    STATE(490), 1,
      sym_comment,
  [17585] = 3,
    ACTIONS(1150), 1,
      anon_sym_POUND,
    ACTIONS(1374), 1,
      aux_sym__double_quote_string_token1,
    STATE(491), 1,
      sym_comment,
  [17595] = 3,
    ACTIONS(1150), 1,
      anon_sym_POUND,
    ACTIONS(1376), 1,
      aux_sym__single_quote_string_token1,
    STATE(492), 1,
      sym_comment,
  [17605] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(1378), 1,
      sym__identifier_dot,
    STATE(493), 1,
      sym_comment,
  [17615] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(1380), 1,
      sym__identifier_dot,
    STATE(494), 1,
      sym_comment,
  [17625] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(1382), 1,
      sym__identifier_dot,
    STATE(495), 1,
      sym_comment,
  [17635] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(119), 1,
      anon_sym_RBRACK,
    STATE(496), 1,
      sym_comment,
  [17645] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(1384), 1,
      ts_builtin_sym_end,
    STATE(497), 1,
      sym_comment,
  [17655] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(1386), 1,
      anon_sym_COLON,
    STATE(498), 1,
      sym_comment,
  [17665] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(717), 1,
      anon_sym_RBRACK,
    STATE(499), 1,
      sym_comment,
  [17675] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(1388), 1,
      anon_sym_RBRACK,
    STATE(500), 1,
      sym_comment,
  [17685] = 1,
    ACTIONS(1390), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 122,
  [SMALL_STATE(4)] = 241,
  [SMALL_STATE(5)] = 360,
  [SMALL_STATE(6)] = 476,
  [SMALL_STATE(7)] = 568,
  [SMALL_STATE(8)] = 679,
  [SMALL_STATE(9)] = 790,
  [SMALL_STATE(10)] = 901,
  [SMALL_STATE(11)] = 989,
  [SMALL_STATE(12)] = 1105,
  [SMALL_STATE(13)] = 1162,
  [SMALL_STATE(14)] = 1275,
  [SMALL_STATE(15)] = 1384,
  [SMALL_STATE(16)] = 1493,
  [SMALL_STATE(17)] = 1548,
  [SMALL_STATE(18)] = 1657,
  [SMALL_STATE(19)] = 1766,
  [SMALL_STATE(20)] = 1875,
  [SMALL_STATE(21)] = 1984,
  [SMALL_STATE(22)] = 2093,
  [SMALL_STATE(23)] = 2204,
  [SMALL_STATE(24)] = 2261,
  [SMALL_STATE(25)] = 2370,
  [SMALL_STATE(26)] = 2476,
  [SMALL_STATE(27)] = 2582,
  [SMALL_STATE(28)] = 2688,
  [SMALL_STATE(29)] = 2794,
  [SMALL_STATE(30)] = 2900,
  [SMALL_STATE(31)] = 3010,
  [SMALL_STATE(32)] = 3116,
  [SMALL_STATE(33)] = 3222,
  [SMALL_STATE(34)] = 3330,
  [SMALL_STATE(35)] = 3436,
  [SMALL_STATE(36)] = 3542,
  [SMALL_STATE(37)] = 3594,
  [SMALL_STATE(38)] = 3700,
  [SMALL_STATE(39)] = 3806,
  [SMALL_STATE(40)] = 3916,
  [SMALL_STATE(41)] = 4022,
  [SMALL_STATE(42)] = 4125,
  [SMALL_STATE(43)] = 4228,
  [SMALL_STATE(44)] = 4331,
  [SMALL_STATE(45)] = 4438,
  [SMALL_STATE(46)] = 4539,
  [SMALL_STATE(47)] = 4641,
  [SMALL_STATE(48)] = 4691,
  [SMALL_STATE(49)] = 4793,
  [SMALL_STATE(50)] = 4893,
  [SMALL_STATE(51)] = 4990,
  [SMALL_STATE(52)] = 5087,
  [SMALL_STATE(53)] = 5184,
  [SMALL_STATE(54)] = 5283,
  [SMALL_STATE(55)] = 5380,
  [SMALL_STATE(56)] = 5477,
  [SMALL_STATE(57)] = 5576,
  [SMALL_STATE(58)] = 5673,
  [SMALL_STATE(59)] = 5756,
  [SMALL_STATE(60)] = 5853,
  [SMALL_STATE(61)] = 5950,
  [SMALL_STATE(62)] = 6047,
  [SMALL_STATE(63)] = 6144,
  [SMALL_STATE(64)] = 6243,
  [SMALL_STATE(65)] = 6340,
  [SMALL_STATE(66)] = 6439,
  [SMALL_STATE(67)] = 6538,
  [SMALL_STATE(68)] = 6637,
  [SMALL_STATE(69)] = 6685,
  [SMALL_STATE(70)] = 6733,
  [SMALL_STATE(71)] = 6784,
  [SMALL_STATE(72)] = 6841,
  [SMALL_STATE(73)] = 6888,
  [SMALL_STATE(74)] = 6939,
  [SMALL_STATE(75)] = 6986,
  [SMALL_STATE(76)] = 7032,
  [SMALL_STATE(77)] = 7080,
  [SMALL_STATE(78)] = 7127,
  [SMALL_STATE(79)] = 7174,
  [SMALL_STATE(80)] = 7221,
  [SMALL_STATE(81)] = 7268,
  [SMALL_STATE(82)] = 7347,
  [SMALL_STATE(83)] = 7392,
  [SMALL_STATE(84)] = 7437,
  [SMALL_STATE(85)] = 7514,
  [SMALL_STATE(86)] = 7559,
  [SMALL_STATE(87)] = 7606,
  [SMALL_STATE(88)] = 7650,
  [SMALL_STATE(89)] = 7694,
  [SMALL_STATE(90)] = 7738,
  [SMALL_STATE(91)] = 7782,
  [SMALL_STATE(92)] = 7826,
  [SMALL_STATE(93)] = 7886,
  [SMALL_STATE(94)] = 7930,
  [SMALL_STATE(95)] = 7988,
  [SMALL_STATE(96)] = 8032,
  [SMALL_STATE(97)] = 8076,
  [SMALL_STATE(98)] = 8120,
  [SMALL_STATE(99)] = 8164,
  [SMALL_STATE(100)] = 8208,
  [SMALL_STATE(101)] = 8252,
  [SMALL_STATE(102)] = 8296,
  [SMALL_STATE(103)] = 8340,
  [SMALL_STATE(104)] = 8384,
  [SMALL_STATE(105)] = 8428,
  [SMALL_STATE(106)] = 8480,
  [SMALL_STATE(107)] = 8528,
  [SMALL_STATE(108)] = 8578,
  [SMALL_STATE(109)] = 8634,
  [SMALL_STATE(110)] = 8678,
  [SMALL_STATE(111)] = 8722,
  [SMALL_STATE(112)] = 8766,
  [SMALL_STATE(113)] = 8810,
  [SMALL_STATE(114)] = 8854,
  [SMALL_STATE(115)] = 8912,
  [SMALL_STATE(116)] = 8970,
  [SMALL_STATE(117)] = 9043,
  [SMALL_STATE(118)] = 9118,
  [SMALL_STATE(119)] = 9173,
  [SMALL_STATE(120)] = 9212,
  [SMALL_STATE(121)] = 9251,
  [SMALL_STATE(122)] = 9308,
  [SMALL_STATE(123)] = 9344,
  [SMALL_STATE(124)] = 9382,
  [SMALL_STATE(125)] = 9450,
  [SMALL_STATE(126)] = 9488,
  [SMALL_STATE(127)] = 9526,
  [SMALL_STATE(128)] = 9566,
  [SMALL_STATE(129)] = 9632,
  [SMALL_STATE(130)] = 9668,
  [SMALL_STATE(131)] = 9703,
  [SMALL_STATE(132)] = 9738,
  [SMALL_STATE(133)] = 9773,
  [SMALL_STATE(134)] = 9808,
  [SMALL_STATE(135)] = 9859,
  [SMALL_STATE(136)] = 9894,
  [SMALL_STATE(137)] = 9929,
  [SMALL_STATE(138)] = 9964,
  [SMALL_STATE(139)] = 9999,
  [SMALL_STATE(140)] = 10034,
  [SMALL_STATE(141)] = 10069,
  [SMALL_STATE(142)] = 10104,
  [SMALL_STATE(143)] = 10142,
  [SMALL_STATE(144)] = 10198,
  [SMALL_STATE(145)] = 10236,
  [SMALL_STATE(146)] = 10292,
  [SMALL_STATE(147)] = 10328,
  [SMALL_STATE(148)] = 10361,
  [SMALL_STATE(149)] = 10414,
  [SMALL_STATE(150)] = 10465,
  [SMALL_STATE(151)] = 10497,
  [SMALL_STATE(152)] = 10531,
  [SMALL_STATE(153)] = 10563,
  [SMALL_STATE(154)] = 10597,
  [SMALL_STATE(155)] = 10631,
  [SMALL_STATE(156)] = 10667,
  [SMALL_STATE(157)] = 10698,
  [SMALL_STATE(158)] = 10729,
  [SMALL_STATE(159)] = 10760,
  [SMALL_STATE(160)] = 10791,
  [SMALL_STATE(161)] = 10822,
  [SMALL_STATE(162)] = 10853,
  [SMALL_STATE(163)] = 10884,
  [SMALL_STATE(164)] = 10915,
  [SMALL_STATE(165)] = 10946,
  [SMALL_STATE(166)] = 10977,
  [SMALL_STATE(167)] = 11008,
  [SMALL_STATE(168)] = 11039,
  [SMALL_STATE(169)] = 11069,
  [SMALL_STATE(170)] = 11099,
  [SMALL_STATE(171)] = 11129,
  [SMALL_STATE(172)] = 11159,
  [SMALL_STATE(173)] = 11205,
  [SMALL_STATE(174)] = 11239,
  [SMALL_STATE(175)] = 11289,
  [SMALL_STATE(176)] = 11334,
  [SMALL_STATE(177)] = 11369,
  [SMALL_STATE(178)] = 11400,
  [SMALL_STATE(179)] = 11447,
  [SMALL_STATE(180)] = 11475,
  [SMALL_STATE(181)] = 11509,
  [SMALL_STATE(182)] = 11537,
  [SMALL_STATE(183)] = 11565,
  [SMALL_STATE(184)] = 11599,
  [SMALL_STATE(185)] = 11627,
  [SMALL_STATE(186)] = 11655,
  [SMALL_STATE(187)] = 11683,
  [SMALL_STATE(188)] = 11711,
  [SMALL_STATE(189)] = 11739,
  [SMALL_STATE(190)] = 11767,
  [SMALL_STATE(191)] = 11795,
  [SMALL_STATE(192)] = 11825,
  [SMALL_STATE(193)] = 11853,
  [SMALL_STATE(194)] = 11887,
  [SMALL_STATE(195)] = 11915,
  [SMALL_STATE(196)] = 11960,
  [SMALL_STATE(197)] = 11987,
  [SMALL_STATE(198)] = 12014,
  [SMALL_STATE(199)] = 12055,
  [SMALL_STATE(200)] = 12084,
  [SMALL_STATE(201)] = 12125,
  [SMALL_STATE(202)] = 12154,
  [SMALL_STATE(203)] = 12199,
  [SMALL_STATE(204)] = 12228,
  [SMALL_STATE(205)] = 12273,
  [SMALL_STATE(206)] = 12318,
  [SMALL_STATE(207)] = 12347,
  [SMALL_STATE(208)] = 12376,
  [SMALL_STATE(209)] = 12421,
  [SMALL_STATE(210)] = 12450,
  [SMALL_STATE(211)] = 12481,
  [SMALL_STATE(212)] = 12526,
  [SMALL_STATE(213)] = 12552,
  [SMALL_STATE(214)] = 12592,
  [SMALL_STATE(215)] = 12618,
  [SMALL_STATE(216)] = 12646,
  [SMALL_STATE(217)] = 12672,
  [SMALL_STATE(218)] = 12698,
  [SMALL_STATE(219)] = 12724,
  [SMALL_STATE(220)] = 12752,
  [SMALL_STATE(221)] = 12778,
  [SMALL_STATE(222)] = 12804,
  [SMALL_STATE(223)] = 12830,
  [SMALL_STATE(224)] = 12856,
  [SMALL_STATE(225)] = 12882,
  [SMALL_STATE(226)] = 12908,
  [SMALL_STATE(227)] = 12936,
  [SMALL_STATE(228)] = 12962,
  [SMALL_STATE(229)] = 13002,
  [SMALL_STATE(230)] = 13028,
  [SMALL_STATE(231)] = 13056,
  [SMALL_STATE(232)] = 13082,
  [SMALL_STATE(233)] = 13108,
  [SMALL_STATE(234)] = 13134,
  [SMALL_STATE(235)] = 13162,
  [SMALL_STATE(236)] = 13188,
  [SMALL_STATE(237)] = 13214,
  [SMALL_STATE(238)] = 13240,
  [SMALL_STATE(239)] = 13266,
  [SMALL_STATE(240)] = 13292,
  [SMALL_STATE(241)] = 13318,
  [SMALL_STATE(242)] = 13354,
  [SMALL_STATE(243)] = 13392,
  [SMALL_STATE(244)] = 13432,
  [SMALL_STATE(245)] = 13458,
  [SMALL_STATE(246)] = 13484,
  [SMALL_STATE(247)] = 13510,
  [SMALL_STATE(248)] = 13535,
  [SMALL_STATE(249)] = 13560,
  [SMALL_STATE(250)] = 13585,
  [SMALL_STATE(251)] = 13610,
  [SMALL_STATE(252)] = 13635,
  [SMALL_STATE(253)] = 13660,
  [SMALL_STATE(254)] = 13685,
  [SMALL_STATE(255)] = 13710,
  [SMALL_STATE(256)] = 13747,
  [SMALL_STATE(257)] = 13772,
  [SMALL_STATE(258)] = 13797,
  [SMALL_STATE(259)] = 13822,
  [SMALL_STATE(260)] = 13859,
  [SMALL_STATE(261)] = 13884,
  [SMALL_STATE(262)] = 13909,
  [SMALL_STATE(263)] = 13952,
  [SMALL_STATE(264)] = 13977,
  [SMALL_STATE(265)] = 14002,
  [SMALL_STATE(266)] = 14027,
  [SMALL_STATE(267)] = 14052,
  [SMALL_STATE(268)] = 14077,
  [SMALL_STATE(269)] = 14102,
  [SMALL_STATE(270)] = 14127,
  [SMALL_STATE(271)] = 14152,
  [SMALL_STATE(272)] = 14177,
  [SMALL_STATE(273)] = 14202,
  [SMALL_STATE(274)] = 14227,
  [SMALL_STATE(275)] = 14252,
  [SMALL_STATE(276)] = 14277,
  [SMALL_STATE(277)] = 14302,
  [SMALL_STATE(278)] = 14327,
  [SMALL_STATE(279)] = 14352,
  [SMALL_STATE(280)] = 14377,
  [SMALL_STATE(281)] = 14402,
  [SMALL_STATE(282)] = 14427,
  [SMALL_STATE(283)] = 14452,
  [SMALL_STATE(284)] = 14477,
  [SMALL_STATE(285)] = 14500,
  [SMALL_STATE(286)] = 14532,
  [SMALL_STATE(287)] = 14566,
  [SMALL_STATE(288)] = 14600,
  [SMALL_STATE(289)] = 14631,
  [SMALL_STATE(290)] = 14662,
  [SMALL_STATE(291)] = 14693,
  [SMALL_STATE(292)] = 14724,
  [SMALL_STATE(293)] = 14753,
  [SMALL_STATE(294)] = 14784,
  [SMALL_STATE(295)] = 14812,
  [SMALL_STATE(296)] = 14840,
  [SMALL_STATE(297)] = 14868,
  [SMALL_STATE(298)] = 14900,
  [SMALL_STATE(299)] = 14928,
  [SMALL_STATE(300)] = 14956,
  [SMALL_STATE(301)] = 14985,
  [SMALL_STATE(302)] = 15014,
  [SMALL_STATE(303)] = 15043,
  [SMALL_STATE(304)] = 15072,
  [SMALL_STATE(305)] = 15095,
  [SMALL_STATE(306)] = 15124,
  [SMALL_STATE(307)] = 15148,
  [SMALL_STATE(308)] = 15170,
  [SMALL_STATE(309)] = 15196,
  [SMALL_STATE(310)] = 15224,
  [SMALL_STATE(311)] = 15248,
  [SMALL_STATE(312)] = 15271,
  [SMALL_STATE(313)] = 15288,
  [SMALL_STATE(314)] = 15305,
  [SMALL_STATE(315)] = 15322,
  [SMALL_STATE(316)] = 15339,
  [SMALL_STATE(317)] = 15358,
  [SMALL_STATE(318)] = 15375,
  [SMALL_STATE(319)] = 15396,
  [SMALL_STATE(320)] = 15413,
  [SMALL_STATE(321)] = 15438,
  [SMALL_STATE(322)] = 15459,
  [SMALL_STATE(323)] = 15475,
  [SMALL_STATE(324)] = 15491,
  [SMALL_STATE(325)] = 15511,
  [SMALL_STATE(326)] = 15533,
  [SMALL_STATE(327)] = 15555,
  [SMALL_STATE(328)] = 15571,
  [SMALL_STATE(329)] = 15591,
  [SMALL_STATE(330)] = 15611,
  [SMALL_STATE(331)] = 15631,
  [SMALL_STATE(332)] = 15651,
  [SMALL_STATE(333)] = 15673,
  [SMALL_STATE(334)] = 15687,
  [SMALL_STATE(335)] = 15703,
  [SMALL_STATE(336)] = 15717,
  [SMALL_STATE(337)] = 15730,
  [SMALL_STATE(338)] = 15747,
  [SMALL_STATE(339)] = 15762,
  [SMALL_STATE(340)] = 15775,
  [SMALL_STATE(341)] = 15790,
  [SMALL_STATE(342)] = 15803,
  [SMALL_STATE(343)] = 15822,
  [SMALL_STATE(344)] = 15839,
  [SMALL_STATE(345)] = 15854,
  [SMALL_STATE(346)] = 15871,
  [SMALL_STATE(347)] = 15890,
  [SMALL_STATE(348)] = 15903,
  [SMALL_STATE(349)] = 15920,
  [SMALL_STATE(350)] = 15937,
  [SMALL_STATE(351)] = 15950,
  [SMALL_STATE(352)] = 15964,
  [SMALL_STATE(353)] = 15976,
  [SMALL_STATE(354)] = 15992,
  [SMALL_STATE(355)] = 16006,
  [SMALL_STATE(356)] = 16022,
  [SMALL_STATE(357)] = 16034,
  [SMALL_STATE(358)] = 16050,
  [SMALL_STATE(359)] = 16064,
  [SMALL_STATE(360)] = 16078,
  [SMALL_STATE(361)] = 16094,
  [SMALL_STATE(362)] = 16110,
  [SMALL_STATE(363)] = 16124,
  [SMALL_STATE(364)] = 16136,
  [SMALL_STATE(365)] = 16152,
  [SMALL_STATE(366)] = 16168,
  [SMALL_STATE(367)] = 16184,
  [SMALL_STATE(368)] = 16198,
  [SMALL_STATE(369)] = 16210,
  [SMALL_STATE(370)] = 16226,
  [SMALL_STATE(371)] = 16238,
  [SMALL_STATE(372)] = 16254,
  [SMALL_STATE(373)] = 16270,
  [SMALL_STATE(374)] = 16286,
  [SMALL_STATE(375)] = 16302,
  [SMALL_STATE(376)] = 16316,
  [SMALL_STATE(377)] = 16332,
  [SMALL_STATE(378)] = 16348,
  [SMALL_STATE(379)] = 16362,
  [SMALL_STATE(380)] = 16374,
  [SMALL_STATE(381)] = 16388,
  [SMALL_STATE(382)] = 16404,
  [SMALL_STATE(383)] = 16416,
  [SMALL_STATE(384)] = 16428,
  [SMALL_STATE(385)] = 16440,
  [SMALL_STATE(386)] = 16456,
  [SMALL_STATE(387)] = 16472,
  [SMALL_STATE(388)] = 16488,
  [SMALL_STATE(389)] = 16504,
  [SMALL_STATE(390)] = 16520,
  [SMALL_STATE(391)] = 16536,
  [SMALL_STATE(392)] = 16552,
  [SMALL_STATE(393)] = 16568,
  [SMALL_STATE(394)] = 16581,
  [SMALL_STATE(395)] = 16594,
  [SMALL_STATE(396)] = 16605,
  [SMALL_STATE(397)] = 16618,
  [SMALL_STATE(398)] = 16629,
  [SMALL_STATE(399)] = 16640,
  [SMALL_STATE(400)] = 16653,
  [SMALL_STATE(401)] = 16664,
  [SMALL_STATE(402)] = 16677,
  [SMALL_STATE(403)] = 16688,
  [SMALL_STATE(404)] = 16699,
  [SMALL_STATE(405)] = 16712,
  [SMALL_STATE(406)] = 16725,
  [SMALL_STATE(407)] = 16738,
  [SMALL_STATE(408)] = 16749,
  [SMALL_STATE(409)] = 16762,
  [SMALL_STATE(410)] = 16775,
  [SMALL_STATE(411)] = 16785,
  [SMALL_STATE(412)] = 16795,
  [SMALL_STATE(413)] = 16805,
  [SMALL_STATE(414)] = 16815,
  [SMALL_STATE(415)] = 16825,
  [SMALL_STATE(416)] = 16835,
  [SMALL_STATE(417)] = 16845,
  [SMALL_STATE(418)] = 16855,
  [SMALL_STATE(419)] = 16865,
  [SMALL_STATE(420)] = 16875,
  [SMALL_STATE(421)] = 16885,
  [SMALL_STATE(422)] = 16895,
  [SMALL_STATE(423)] = 16905,
  [SMALL_STATE(424)] = 16915,
  [SMALL_STATE(425)] = 16925,
  [SMALL_STATE(426)] = 16935,
  [SMALL_STATE(427)] = 16945,
  [SMALL_STATE(428)] = 16955,
  [SMALL_STATE(429)] = 16965,
  [SMALL_STATE(430)] = 16975,
  [SMALL_STATE(431)] = 16985,
  [SMALL_STATE(432)] = 16995,
  [SMALL_STATE(433)] = 17005,
  [SMALL_STATE(434)] = 17015,
  [SMALL_STATE(435)] = 17025,
  [SMALL_STATE(436)] = 17035,
  [SMALL_STATE(437)] = 17045,
  [SMALL_STATE(438)] = 17055,
  [SMALL_STATE(439)] = 17065,
  [SMALL_STATE(440)] = 17075,
  [SMALL_STATE(441)] = 17085,
  [SMALL_STATE(442)] = 17095,
  [SMALL_STATE(443)] = 17105,
  [SMALL_STATE(444)] = 17115,
  [SMALL_STATE(445)] = 17125,
  [SMALL_STATE(446)] = 17135,
  [SMALL_STATE(447)] = 17145,
  [SMALL_STATE(448)] = 17155,
  [SMALL_STATE(449)] = 17165,
  [SMALL_STATE(450)] = 17175,
  [SMALL_STATE(451)] = 17185,
  [SMALL_STATE(452)] = 17195,
  [SMALL_STATE(453)] = 17205,
  [SMALL_STATE(454)] = 17215,
  [SMALL_STATE(455)] = 17225,
  [SMALL_STATE(456)] = 17235,
  [SMALL_STATE(457)] = 17245,
  [SMALL_STATE(458)] = 17255,
  [SMALL_STATE(459)] = 17265,
  [SMALL_STATE(460)] = 17275,
  [SMALL_STATE(461)] = 17285,
  [SMALL_STATE(462)] = 17295,
  [SMALL_STATE(463)] = 17305,
  [SMALL_STATE(464)] = 17315,
  [SMALL_STATE(465)] = 17325,
  [SMALL_STATE(466)] = 17335,
  [SMALL_STATE(467)] = 17345,
  [SMALL_STATE(468)] = 17355,
  [SMALL_STATE(469)] = 17365,
  [SMALL_STATE(470)] = 17375,
  [SMALL_STATE(471)] = 17385,
  [SMALL_STATE(472)] = 17395,
  [SMALL_STATE(473)] = 17405,
  [SMALL_STATE(474)] = 17415,
  [SMALL_STATE(475)] = 17425,
  [SMALL_STATE(476)] = 17435,
  [SMALL_STATE(477)] = 17445,
  [SMALL_STATE(478)] = 17455,
  [SMALL_STATE(479)] = 17465,
  [SMALL_STATE(480)] = 17475,
  [SMALL_STATE(481)] = 17485,
  [SMALL_STATE(482)] = 17495,
  [SMALL_STATE(483)] = 17505,
  [SMALL_STATE(484)] = 17515,
  [SMALL_STATE(485)] = 17525,
  [SMALL_STATE(486)] = 17535,
  [SMALL_STATE(487)] = 17545,
  [SMALL_STATE(488)] = 17555,
  [SMALL_STATE(489)] = 17565,
  [SMALL_STATE(490)] = 17575,
  [SMALL_STATE(491)] = 17585,
  [SMALL_STATE(492)] = 17595,
  [SMALL_STATE(493)] = 17605,
  [SMALL_STATE(494)] = 17615,
  [SMALL_STATE(495)] = 17625,
  [SMALL_STATE(496)] = 17635,
  [SMALL_STATE(497)] = 17645,
  [SMALL_STATE(498)] = 17655,
  [SMALL_STATE(499)] = 17665,
  [SMALL_STATE(500)] = 17675,
  [SMALL_STATE(501)] = 17685,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(421),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 0),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(332),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(381),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(369),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(396),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(372),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(110),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(54),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(45),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(417),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(218),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(343),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(440),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(439),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(438),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(408),
  [39] = {.entry = {.count = 1, .reusable = false}}, SHIFT(437),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(405),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [45] = {.entry = {.count = 1, .reusable = false}}, SHIFT(36),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(436),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(486),
  [51] = {.entry = {.count = 1, .reusable = false}}, SHIFT(72),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(342),
  [55] = {.entry = {.count = 1, .reusable = true}}, SHIFT(238),
  [57] = {.entry = {.count = 1, .reusable = true}}, SHIFT(220),
  [59] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field, 1, .production_id = 7),
  [61] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_field, 1, .production_id = 7),
  [63] = {.entry = {.count = 1, .reusable = false}}, SHIFT(135),
  [65] = {.entry = {.count = 1, .reusable = true}}, SHIFT(349),
  [67] = {.entry = {.count = 1, .reusable = true}}, SHIFT(484),
  [69] = {.entry = {.count = 1, .reusable = true}}, SHIFT(485),
  [71] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [73] = {.entry = {.count = 1, .reusable = false}}, SHIFT(133),
  [75] = {.entry = {.count = 1, .reusable = true}}, SHIFT(458),
  [77] = {.entry = {.count = 1, .reusable = true}}, SHIFT(490),
  [79] = {.entry = {.count = 1, .reusable = false}}, SHIFT(122),
  [81] = {.entry = {.count = 1, .reusable = false}}, SHIFT(455),
  [83] = {.entry = {.count = 1, .reusable = false}}, SHIFT(57),
  [85] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [87] = {.entry = {.count = 1, .reusable = true}}, SHIFT(494),
  [89] = {.entry = {.count = 1, .reusable = false}}, SHIFT(111),
  [91] = {.entry = {.count = 1, .reusable = true}}, SHIFT(483),
  [93] = {.entry = {.count = 1, .reusable = false}}, SHIFT(68),
  [95] = {.entry = {.count = 1, .reusable = true}}, SHIFT(487),
  [97] = {.entry = {.count = 1, .reusable = false}}, SHIFT(119),
  [99] = {.entry = {.count = 1, .reusable = false}}, SHIFT(159),
  [101] = {.entry = {.count = 1, .reusable = true}}, SHIFT(345),
  [103] = {.entry = {.count = 1, .reusable = true}}, SHIFT(491),
  [105] = {.entry = {.count = 1, .reusable = true}}, SHIFT(492),
  [107] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [109] = {.entry = {.count = 1, .reusable = false}}, SHIFT(156),
  [111] = {.entry = {.count = 1, .reusable = true}}, SHIFT(472),
  [113] = {.entry = {.count = 1, .reusable = true}}, SHIFT(495),
  [115] = {.entry = {.count = 1, .reusable = false}}, SHIFT(150),
  [117] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [119] = {.entry = {.count = 1, .reusable = true}}, SHIFT(181),
  [121] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_integer, 1),
  [123] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_integer, 1),
  [125] = {.entry = {.count = 1, .reusable = true}}, SHIFT(496),
  [127] = {.entry = {.count = 1, .reusable = true}}, SHIFT(194),
  [129] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_switch_repeat1, 2), SHIFT_REPEAT(110),
  [132] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_switch_repeat1, 2), SHIFT_REPEAT(66),
  [135] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_switch_repeat1, 2),
  [137] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_switch_repeat1, 2), SHIFT_REPEAT(343),
  [140] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_switch_repeat1, 2), SHIFT_REPEAT(440),
  [143] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_switch_repeat1, 2), SHIFT_REPEAT(439),
  [146] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_switch_repeat1, 2), SHIFT_REPEAT(438),
  [149] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_switch_repeat1, 2), SHIFT_REPEAT(408),
  [152] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_switch_repeat1, 2), SHIFT_REPEAT(437),
  [155] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_switch_repeat1, 2), SHIFT_REPEAT(405),
  [158] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_switch_repeat1, 2), SHIFT_REPEAT(36),
  [161] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_switch_repeat1, 2), SHIFT_REPEAT(36),
  [164] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_switch_repeat1, 2), SHIFT_REPEAT(436),
  [167] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_switch_repeat1, 2), SHIFT_REPEAT(486),
  [170] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_switch_repeat1, 2), SHIFT_REPEAT(72),
  [173] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_switch_repeat1, 2), SHIFT_REPEAT(342),
  [176] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__friendly_number, 2),
  [178] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__friendly_number, 2),
  [180] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__friendly_number, 2), SHIFT_REPEAT(36),
  [183] = {.entry = {.count = 1, .reusable = true}}, SHIFT(415),
  [185] = {.entry = {.count = 1, .reusable = true}}, SHIFT(248),
  [187] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [189] = {.entry = {.count = 1, .reusable = true}}, SHIFT(428),
  [191] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [193] = {.entry = {.count = 1, .reusable = true}}, SHIFT(420),
  [195] = {.entry = {.count = 1, .reusable = true}}, SHIFT(269),
  [197] = {.entry = {.count = 1, .reusable = true}}, SHIFT(433),
  [199] = {.entry = {.count = 1, .reusable = true}}, SHIFT(281),
  [201] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_switch_repeat2, 2),
  [203] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_integer, 2),
  [205] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_integer, 2),
  [207] = {.entry = {.count = 1, .reusable = true}}, SHIFT(419),
  [209] = {.entry = {.count = 1, .reusable = true}}, SHIFT(418),
  [211] = {.entry = {.count = 1, .reusable = true}}, SHIFT(431),
  [213] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [215] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [217] = {.entry = {.count = 1, .reusable = true}}, SHIFT(265),
  [219] = {.entry = {.count = 1, .reusable = true}}, SHIFT(184),
  [221] = {.entry = {.count = 1, .reusable = true}}, SHIFT(441),
  [223] = {.entry = {.count = 1, .reusable = true}}, SHIFT(252),
  [225] = {.entry = {.count = 1, .reusable = true}}, SHIFT(499),
  [227] = {.entry = {.count = 1, .reusable = true}}, SHIFT(283),
  [229] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [231] = {.entry = {.count = 1, .reusable = true}}, SHIFT(275),
  [233] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [235] = {.entry = {.count = 1, .reusable = true}}, SHIFT(280),
  [237] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__friendly_number, 1),
  [239] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__friendly_number, 1),
  [241] = {.entry = {.count = 1, .reusable = true}}, SHIFT(251),
  [243] = {.entry = {.count = 1, .reusable = true}}, SHIFT(249),
  [245] = {.entry = {.count = 1, .reusable = true}}, SHIFT(192),
  [247] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__aggregate_count, 1),
  [249] = {.entry = {.count = 1, .reusable = true}}, SHIFT(253),
  [251] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__date, 5),
  [253] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__date, 5),
  [255] = {.entry = {.count = 1, .reusable = true}}, SHIFT(268),
  [257] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [259] = {.entry = {.count = 1, .reusable = false}}, SHIFT(244),
  [261] = {.entry = {.count = 1, .reusable = true}}, SHIFT(348),
  [263] = {.entry = {.count = 1, .reusable = true}}, SHIFT(488),
  [265] = {.entry = {.count = 1, .reusable = true}}, SHIFT(489),
  [267] = {.entry = {.count = 1, .reusable = true}}, SHIFT(217),
  [269] = {.entry = {.count = 1, .reusable = false}}, SHIFT(217),
  [271] = {.entry = {.count = 1, .reusable = true}}, SHIFT(466),
  [273] = {.entry = {.count = 1, .reusable = true}}, SHIFT(493),
  [275] = {.entry = {.count = 1, .reusable = false}}, SHIFT(197),
  [277] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_identifier, 1),
  [279] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_identifier, 1),
  [281] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_identifier, 3),
  [283] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_identifier, 3),
  [285] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__time, 1),
  [287] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__time, 1),
  [289] = {.entry = {.count = 1, .reusable = true}}, SHIFT(412),
  [291] = {.entry = {.count = 1, .reusable = true}}, SHIFT(331),
  [293] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_timestamp, 4),
  [295] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_timestamp, 4),
  [297] = {.entry = {.count = 1, .reusable = false}}, SHIFT(363),
  [299] = {.entry = {.count = 1, .reusable = true}}, SHIFT(363),
  [301] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [303] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__time, 3),
  [305] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__time, 3),
  [307] = {.entry = {.count = 1, .reusable = true}}, SHIFT(443),
  [309] = {.entry = {.count = 1, .reusable = true}}, SHIFT(324),
  [311] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__double_quote_string, 3),
  [313] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__double_quote_string, 3),
  [315] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__time, 5),
  [317] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__time, 5),
  [319] = {.entry = {.count = 1, .reusable = true}}, SHIFT(328),
  [321] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_literal, 1),
  [323] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_literal, 1),
  [325] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [327] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__alias_identifier, 1),
  [329] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__literal_string, 1),
  [331] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__literal_string, 1),
  [333] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__alias_identifier, 1, .production_id = 6),
  [335] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_decimal_number, 2),
  [337] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_decimal_number, 2),
  [339] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [341] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_call, 2, .production_id = 7),
  [343] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_call, 2, .production_id = 7),
  [345] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__time, 7),
  [347] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__time, 7),
  [349] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_function_call_repeat1, 2),
  [351] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_function_call_repeat1, 2),
  [353] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_function_call_repeat1, 2), SHIFT_REPEAT(135),
  [356] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_call_repeat1, 2), SHIFT_REPEAT(349),
  [359] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_call_repeat1, 2), SHIFT_REPEAT(484),
  [362] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_call_repeat1, 2), SHIFT_REPEAT(485),
  [365] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_call_repeat1, 2), SHIFT_REPEAT(133),
  [368] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_function_call_repeat1, 2), SHIFT_REPEAT(133),
  [371] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_call_repeat1, 2), SHIFT_REPEAT(458),
  [374] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_call_repeat1, 2), SHIFT_REPEAT(490),
  [377] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_function_call_repeat1, 2), SHIFT_REPEAT(122),
  [380] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_date, 2),
  [382] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_date, 2),
  [384] = {.entry = {.count = 1, .reusable = false}}, SHIFT(401),
  [386] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field, 3, .production_id = 19),
  [388] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_field, 3, .production_id = 19),
  [390] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__double_f_string, 3),
  [392] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__double_f_string, 3),
  [394] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expression, 1),
  [396] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__expression, 1),
  [398] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_decimal_number, 3),
  [400] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_decimal_number, 3),
  [402] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expression, 3),
  [404] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__expression, 3),
  [406] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_expression, 3, .production_id = 18),
  [408] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binary_expression, 3, .production_id = 18),
  [410] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [412] = {.entry = {.count = 1, .reusable = false}}, SHIFT(50),
  [414] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [416] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [418] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [420] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [422] = {.entry = {.count = 1, .reusable = false}}, SHIFT(52),
  [424] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [426] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_timestamp, 5),
  [428] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_timestamp, 5),
  [430] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__triple_s_string, 3),
  [432] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__triple_s_string, 3),
  [434] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_f_string, 1),
  [436] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_f_string, 1),
  [438] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__double_s_string, 3),
  [440] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__double_s_string, 3),
  [442] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_s_string, 1),
  [444] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_s_string, 1),
  [446] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__triple_f_string, 3),
  [448] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__triple_f_string, 3),
  [450] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_timezone, 1),
  [452] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_timezone, 1),
  [454] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_timezone, 2),
  [456] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_timezone, 2),
  [458] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__single_quote_string, 3),
  [460] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__single_quote_string, 3),
  [462] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_time, 2),
  [464] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_time, 2),
  [466] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__agg_rhs_assignment, 1, .production_id = 21),
  [468] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__agg_rhs_assignment, 1, .production_id = 21),
  [470] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [472] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__agg_rhs_assignment, 2, .production_id = 24),
  [474] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__agg_rhs_assignment, 2, .production_id = 24),
  [476] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_function_call_repeat1, 2), SHIFT_REPEAT(159),
  [479] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_call_repeat1, 2), SHIFT_REPEAT(345),
  [482] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_call_repeat1, 2), SHIFT_REPEAT(491),
  [485] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_call_repeat1, 2), SHIFT_REPEAT(492),
  [488] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_call_repeat1, 2), SHIFT_REPEAT(156),
  [491] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_function_call_repeat1, 2), SHIFT_REPEAT(156),
  [494] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_call_repeat1, 2), SHIFT_REPEAT(472),
  [497] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_call_repeat1, 2), SHIFT_REPEAT(495),
  [500] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_function_call_repeat1, 2), SHIFT_REPEAT(150),
  [503] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__boolean_expression, 1, .production_id = 5),
  [505] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__boolean_expression, 1, .production_id = 5),
  [507] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_term, 1, .production_id = 8),
  [509] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_term, 1, .production_id = 8),
  [511] = {.entry = {.count = 1, .reusable = false}}, SHIFT(8),
  [513] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__call_parameter, 1, .production_id = 8),
  [515] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__call_parameter, 1, .production_id = 8),
  [517] = {.entry = {.count = 1, .reusable = true}}, SHIFT(208),
  [519] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__friendly_number, 2), SHIFT_REPEAT(133),
  [522] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__friendly_number, 2), SHIFT_REPEAT(133),
  [525] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_function_call_repeat1, 2), SHIFT_REPEAT(244),
  [528] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_call_repeat1, 2), SHIFT_REPEAT(348),
  [531] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_call_repeat1, 2), SHIFT_REPEAT(488),
  [534] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_call_repeat1, 2), SHIFT_REPEAT(489),
  [537] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_call_repeat1, 2), SHIFT_REPEAT(217),
  [540] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_function_call_repeat1, 2), SHIFT_REPEAT(217),
  [543] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_call_repeat1, 2), SHIFT_REPEAT(466),
  [546] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_call_repeat1, 2), SHIFT_REPEAT(493),
  [549] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_function_call_repeat1, 2), SHIFT_REPEAT(197),
  [552] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__call_parameter, 3, .production_id = 29),
  [554] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__call_parameter, 3, .production_id = 29),
  [556] = {.entry = {.count = 1, .reusable = false}}, SHIFT(7),
  [558] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_function_call_repeat1, 1, .production_id = 25),
  [560] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_function_call_repeat1, 1, .production_id = 25),
  [562] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [564] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pipeline, 1),
  [566] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pipeline, 1),
  [568] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [570] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [572] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [574] = {.entry = {.count = 1, .reusable = true}}, SHIFT(447),
  [576] = {.entry = {.count = 1, .reusable = true}}, SHIFT(305),
  [578] = {.entry = {.count = 1, .reusable = true}}, SHIFT(300),
  [580] = {.entry = {.count = 1, .reusable = true}}, SHIFT(309),
  [582] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [584] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable, 4, .production_id = 11),
  [586] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable, 4, .production_id = 11),
  [588] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__friendly_number, 2), SHIFT_REPEAT(147),
  [591] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_transforms, 1),
  [593] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_transforms, 1),
  [595] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_transforms_repeat1, 2),
  [597] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_transforms_repeat1, 2),
  [599] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_transforms_repeat1, 2), SHIFT_REPEAT(49),
  [602] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_transforms_repeat1, 2), SHIFT_REPEAT(27),
  [605] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_transforms_repeat1, 2), SHIFT_REPEAT(28),
  [608] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_transforms_repeat1, 2), SHIFT_REPEAT(447),
  [611] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_transforms_repeat1, 2), SHIFT_REPEAT(305),
  [614] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_transforms_repeat1, 2), SHIFT_REPEAT(300),
  [617] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_transforms_repeat1, 2), SHIFT_REPEAT(309),
  [620] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_transforms_repeat1, 2), SHIFT_REPEAT(20),
  [623] = {.entry = {.count = 1, .reusable = true}}, SHIFT(205),
  [625] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__friendly_number, 2), SHIFT_REPEAT(156),
  [628] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__friendly_number, 2), SHIFT_REPEAT(156),
  [631] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_range, 3, .production_id = 23),
  [633] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_range, 3, .production_id = 23),
  [635] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_switch_condition, 4, .production_id = 30),
  [637] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_switch_condition, 4, .production_id = 30),
  [639] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_switch_repeat1, 1),
  [641] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_switch_repeat1, 1),
  [643] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_switch_condition, 4, .production_id = 31),
  [645] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_switch_condition, 4, .production_id = 31),
  [647] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [649] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_definition, 5, .production_id = 16),
  [651] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_definition, 5, .production_id = 16),
  [653] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [655] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [657] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_transforms_repeat1, 2), SHIFT_REPEAT(26),
  [660] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_transforms_repeat1, 2), SHIFT_REPEAT(18),
  [663] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [665] = {.entry = {.count = 1, .reusable = true}}, SHIFT(222),
  [667] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__sort_instruction, 2),
  [669] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__sort_instruction, 2),
  [671] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_joins, 3, .production_id = 14),
  [673] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_joins, 3, .production_id = 14),
  [675] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [677] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_switch, 4),
  [679] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_switch, 4),
  [681] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_joins, 2, .production_id = 9),
  [683] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_joins, 2, .production_id = 9),
  [685] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_switch, 6),
  [687] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_switch, 6),
  [689] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment, 5, .production_id = 28),
  [691] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_assignment, 5, .production_id = 28),
  [693] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment, 3, .production_id = 22),
  [695] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_assignment, 3, .production_id = 22),
  [697] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment, 3, .production_id = 20),
  [699] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_assignment, 3, .production_id = 20),
  [701] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__sort_instruction, 1),
  [703] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__sort_instruction, 1),
  [705] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment, 5, .production_id = 27),
  [707] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_assignment, 5, .production_id = 27),
  [709] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_aggregate_repeat1, 2),
  [711] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_switch, 5),
  [713] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_switch, 5),
  [715] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [717] = {.entry = {.count = 1, .reusable = true}}, SHIFT(273),
  [719] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_switch, 3),
  [721] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_switch, 3),
  [723] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [725] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__aggregate_count, 2),
  [727] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_takes, 2),
  [729] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_takes, 2),
  [731] = {.entry = {.count = 1, .reusable = true}}, SHIFT(330),
  [733] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_aggregate_operation, 2),
  [735] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__table_reference, 1, .production_id = 3),
  [737] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__table_reference, 1, .production_id = 3),
  [739] = {.entry = {.count = 1, .reusable = true}}, SHIFT(346),
  [741] = {.entry = {.count = 1, .reusable = true}}, SHIFT(244),
  [743] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_conditions_repeat1, 2),
  [745] = {.entry = {.count = 1, .reusable = true}}, SHIFT(370),
  [747] = {.entry = {.count = 1, .reusable = true}}, SHIFT(337),
  [749] = {.entry = {.count = 1, .reusable = true}}, SHIFT(480),
  [751] = {.entry = {.count = 1, .reusable = true}}, SHIFT(481),
  [753] = {.entry = {.count = 1, .reusable = true}}, SHIFT(315),
  [755] = {.entry = {.count = 1, .reusable = true}}, SHIFT(450),
  [757] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [759] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [761] = {.entry = {.count = 1, .reusable = true}}, SHIFT(202),
  [763] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__friendly_number, 2), SHIFT_REPEAT(217),
  [766] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__friendly_number, 2), SHIFT_REPEAT(217),
  [769] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__table_selection, 1, .production_id = 2),
  [771] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__table_selection, 1, .production_id = 2),
  [773] = {.entry = {.count = 1, .reusable = true}}, SHIFT(177),
  [775] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_aggregate, 3),
  [777] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_aggregate, 3),
  [779] = {.entry = {.count = 1, .reusable = true}}, SHIFT(211),
  [781] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_aggregate, 6),
  [783] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_aggregate, 6),
  [785] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_aggregate, 4),
  [787] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_aggregate, 4),
  [789] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sorts, 6),
  [791] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sorts, 6),
  [793] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sorts, 4),
  [795] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sorts, 4),
  [797] = {.entry = {.count = 1, .reusable = true}}, SHIFT(195),
  [799] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sorts, 2),
  [801] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sorts, 2),
  [803] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [805] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [807] = {.entry = {.count = 1, .reusable = true}}, SHIFT(267),
  [809] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [811] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__table_selection, 3, .production_id = 10),
  [813] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__table_selection, 3, .production_id = 10),
  [815] = {.entry = {.count = 1, .reusable = true}}, SHIFT(182),
  [817] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sorts, 5),
  [819] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sorts, 5),
  [821] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_aggregate, 5),
  [823] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_aggregate, 5),
  [825] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sorts, 3),
  [827] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sorts, 3),
  [829] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_group, 6),
  [831] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_group, 6),
  [833] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select, 3),
  [835] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_select, 3),
  [837] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_derives, 5),
  [839] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_derives, 5),
  [841] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_group, 8),
  [843] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_group, 8),
  [845] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_derives, 8),
  [847] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_derives, 8),
  [849] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select, 7),
  [851] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_select, 7),
  [853] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_conditions, 5),
  [855] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_conditions, 5),
  [857] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_group, 7),
  [859] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_group, 7),
  [861] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_joins, 3, .production_id = 9),
  [863] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_joins, 3, .production_id = 9),
  [865] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_group, 9),
  [867] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_group, 9),
  [869] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_conditions, 1),
  [871] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_conditions, 1),
  [873] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_derives, 7),
  [875] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_derives, 7),
  [877] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_transforms_repeat1, 1),
  [879] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_transforms_repeat1, 1),
  [881] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 1),
  [883] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_from_text, 5),
  [885] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_from_text, 5),
  [887] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_from, 2, .production_id = 1),
  [889] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_from, 2, .production_id = 1),
  [891] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select, 6),
  [893] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_select, 6),
  [895] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_group, 5),
  [897] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_group, 5),
  [899] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__boolean_expression, 3, .production_id = 17),
  [901] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__boolean_expression, 3, .production_id = 17),
  [903] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_conditions, 4),
  [905] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_conditions, 4),
  [907] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_derives, 3),
  [909] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_derives, 3),
  [911] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__self_join, 4),
  [913] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__self_join, 4),
  [915] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_derives, 2),
  [917] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_derives, 2),
  [919] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_conditions, 3),
  [921] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_conditions, 3),
  [923] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_filter, 2, .production_id = 4),
  [925] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_filter, 2, .production_id = 4),
  [927] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select, 5),
  [929] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_select, 5),
  [931] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_derives, 4),
  [933] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_derives, 4),
  [935] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select, 2),
  [937] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_select, 2),
  [939] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__triple_quote_string, 3),
  [941] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__triple_quote_string, 3),
  [943] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_from_text, 2),
  [945] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_from_text, 2),
  [947] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_derives, 6),
  [949] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_derives, 6),
  [951] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select, 4),
  [953] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_select, 4),
  [955] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_joins, 4, .production_id = 14),
  [957] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_joins, 4, .production_id = 14),
  [959] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_conditions, 2),
  [961] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_conditions, 2),
  [963] = {.entry = {.count = 1, .reusable = true}}, SHIFT(314),
  [965] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_program_repeat2, 2),
  [967] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat2, 2), SHIFT_REPEAT(332),
  [970] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat2, 2), SHIFT_REPEAT(381),
  [973] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat2, 2), SHIFT_REPEAT(369),
  [976] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat2, 2), SHIFT_REPEAT(372),
  [979] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 2),
  [981] = {.entry = {.count = 1, .reusable = true}}, SHIFT(318),
  [983] = {.entry = {.count = 1, .reusable = true}}, SHIFT(247),
  [985] = {.entry = {.count = 1, .reusable = true}}, SHIFT(257),
  [987] = {.entry = {.count = 1, .reusable = true}}, SHIFT(266),
  [989] = {.entry = {.count = 1, .reusable = true}}, SHIFT(250),
  [991] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_group_repeat2, 2), SHIFT_REPEAT(447),
  [994] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_group_repeat2, 2), SHIFT_REPEAT(305),
  [997] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_group_repeat2, 2), SHIFT_REPEAT(300),
  [1000] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_group_repeat2, 2), SHIFT_REPEAT(318),
  [1003] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_group_repeat2, 2),
  [1005] = {.entry = {.count = 1, .reusable = true}}, SHIFT(254),
  [1007] = {.entry = {.count = 1, .reusable = true}}, SHIFT(416),
  [1009] = {.entry = {.count = 1, .reusable = true}}, SHIFT(246),
  [1011] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [1013] = {.entry = {.count = 1, .reusable = true}}, SHIFT(351),
  [1015] = {.entry = {.count = 1, .reusable = true}}, SHIFT(404),
  [1017] = {.entry = {.count = 1, .reusable = true}}, SHIFT(235),
  [1019] = {.entry = {.count = 1, .reusable = true}}, SHIFT(224),
  [1021] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2),
  [1023] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2),
  [1025] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(396),
  [1028] = {.entry = {.count = 1, .reusable = true}}, SHIFT(297),
  [1030] = {.entry = {.count = 1, .reusable = false}}, SHIFT(315),
  [1032] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__friendly_number, 2), SHIFT_REPEAT(315),
  [1035] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__friendly_number, 2), SHIFT_REPEAT(315),
  [1038] = {.entry = {.count = 1, .reusable = false}}, SHIFT(429),
  [1040] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_function_definition_repeat1, 2),
  [1042] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_definition_repeat1, 2), SHIFT_REPEAT(479),
  [1045] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_definition_repeat1, 2), SHIFT_REPEAT(341),
  [1048] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pipeline, 2),
  [1050] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pipeline, 2),
  [1052] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_prql, 4, .production_id = 13),
  [1054] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_prql, 4, .production_id = 13),
  [1056] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_target, 1),
  [1058] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_target, 1),
  [1060] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_window_definitions_repeat1, 2), SHIFT_REPEAT(498),
  [1063] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_window_definitions_repeat1, 2),
  [1065] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_prql, 4, .production_id = 12),
  [1067] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_prql, 4, .production_id = 12),
  [1069] = {.entry = {.count = 1, .reusable = true}}, SHIFT(498),
  [1071] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 1),
  [1073] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 1),
  [1075] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [1077] = {.entry = {.count = 1, .reusable = true}}, SHIFT(479),
  [1079] = {.entry = {.count = 1, .reusable = true}}, SHIFT(341),
  [1081] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_window_definitions, 1),
  [1083] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__window_definition, 3),
  [1085] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable, 5, .production_id = 11),
  [1087] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable, 5, .production_id = 11),
  [1089] = {.entry = {.count = 1, .reusable = true}}, SHIFT(375),
  [1091] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable, 6, .production_id = 11),
  [1093] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable, 6, .production_id = 11),
  [1095] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_group_repeat2, 1),
  [1097] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_program_repeat2, 1),
  [1099] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_program_repeat2, 1),
  [1101] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_window, 5),
  [1103] = {.entry = {.count = 1, .reusable = true}}, SHIFT(451),
  [1105] = {.entry = {.count = 1, .reusable = true}}, SHIFT(382),
  [1107] = {.entry = {.count = 1, .reusable = true}}, SHIFT(398),
  [1109] = {.entry = {.count = 1, .reusable = true}}, SHIFT(338),
  [1111] = {.entry = {.count = 1, .reusable = true}}, SHIFT(422),
  [1113] = {.entry = {.count = 1, .reusable = false}}, SHIFT(70),
  [1115] = {.entry = {.count = 1, .reusable = true}}, SHIFT(427),
  [1117] = {.entry = {.count = 1, .reusable = true}}, SHIFT(204),
  [1119] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter, 1),
  [1121] = {.entry = {.count = 1, .reusable = true}}, SHIFT(473),
  [1123] = {.entry = {.count = 1, .reusable = true}}, SHIFT(467),
  [1125] = {.entry = {.count = 1, .reusable = true}}, SHIFT(459),
  [1127] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_window_definitions_repeat1, 1),
  [1129] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [1131] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_conditions_repeat1, 2), SHIFT_REPEAT(56),
  [1134] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [1136] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_function_definition_repeat1, 1),
  [1138] = {.entry = {.count = 1, .reusable = true}}, SHIFT(329),
  [1140] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_aggregate_repeat1, 2), SHIFT_REPEAT(5),
  [1143] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_switch_repeat2, 2), SHIFT_REPEAT(44),
  [1146] = {.entry = {.count = 1, .reusable = false}}, SHIFT(400),
  [1148] = {.entry = {.count = 1, .reusable = false}}, SHIFT(278),
  [1150] = {.entry = {.count = 1, .reusable = false}}, SHIFT(421),
  [1152] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [1154] = {.entry = {.count = 1, .reusable = true}}, SHIFT(260),
  [1156] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_group_repeat1, 2), SHIFT_REPEAT(41),
  [1159] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_group_repeat1, 2),
  [1161] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_direction, 1),
  [1163] = {.entry = {.count = 1, .reusable = false}}, SHIFT(97),
  [1165] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [1167] = {.entry = {.count = 1, .reusable = true}}, SHIFT(465),
  [1169] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_derives_repeat1, 2), SHIFT_REPEAT(43),
  [1172] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_derives_repeat1, 2),
  [1174] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter, 3, .production_id = 15),
  [1176] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [1178] = {.entry = {.count = 1, .reusable = true}}, SHIFT(411),
  [1180] = {.entry = {.count = 1, .reusable = true}}, SHIFT(399),
  [1182] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [1184] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [1186] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__inner_triple_quotes, 2), SHIFT_REPEAT(400),
  [1189] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__inner_triple_quotes, 2),
  [1191] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_sorts_repeat1, 2), SHIFT_REPEAT(308),
  [1194] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_sorts_repeat1, 2),
  [1196] = {.entry = {.count = 1, .reusable = true}}, SHIFT(303),
  [1198] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [1200] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [1202] = {.entry = {.count = 1, .reusable = false}}, SHIFT(101),
  [1204] = {.entry = {.count = 1, .reusable = true}}, SHIFT(301),
  [1206] = {.entry = {.count = 1, .reusable = true}}, SHIFT(225),
  [1208] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [1210] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [1212] = {.entry = {.count = 1, .reusable = true}}, SHIFT(276),
  [1214] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [1216] = {.entry = {.count = 1, .reusable = true}}, SHIFT(463),
  [1218] = {.entry = {.count = 1, .reusable = true}}, SHIFT(462),
  [1220] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__join_definition, 3),
  [1222] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__inner_triple_quotes, 1),
  [1224] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [1226] = {.entry = {.count = 1, .reusable = true}}, SHIFT(393),
  [1228] = {.entry = {.count = 1, .reusable = true}}, SHIFT(336),
  [1230] = {.entry = {.count = 1, .reusable = true}}, SHIFT(403),
  [1232] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [1234] = {.entry = {.count = 1, .reusable = true}}, SHIFT(454),
  [1236] = {.entry = {.count = 1, .reusable = true}}, SHIFT(327),
  [1238] = {.entry = {.count = 1, .reusable = true}}, SHIFT(299),
  [1240] = {.entry = {.count = 1, .reusable = false}}, SHIFT(501),
  [1242] = {.entry = {.count = 1, .reusable = true}}, SHIFT(413),
  [1244] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [1246] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [1248] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [1250] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [1252] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [1254] = {.entry = {.count = 1, .reusable = true}}, SHIFT(339),
  [1256] = {.entry = {.count = 1, .reusable = true}}, SHIFT(406),
  [1258] = {.entry = {.count = 1, .reusable = true}}, SHIFT(296),
  [1260] = {.entry = {.count = 1, .reusable = true}}, SHIFT(185),
  [1262] = {.entry = {.count = 1, .reusable = true}}, SHIFT(298),
  [1264] = {.entry = {.count = 1, .reusable = true}}, SHIFT(376),
  [1266] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [1268] = {.entry = {.count = 1, .reusable = false}}, SHIFT(423),
  [1270] = {.entry = {.count = 1, .reusable = false}}, SHIFT(424),
  [1272] = {.entry = {.count = 1, .reusable = false}}, SHIFT(425),
  [1274] = {.entry = {.count = 1, .reusable = false}}, SHIFT(426),
  [1276] = {.entry = {.count = 1, .reusable = true}}, SHIFT(294),
  [1278] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [1280] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [1282] = {.entry = {.count = 1, .reusable = true}}, SHIFT(171),
  [1284] = {.entry = {.count = 1, .reusable = true}}, SHIFT(169),
  [1286] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [1288] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [1290] = {.entry = {.count = 1, .reusable = true}}, SHIFT(189),
  [1292] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [1294] = {.entry = {.count = 1, .reusable = true}}, SHIFT(379),
  [1296] = {.entry = {.count = 1, .reusable = true}}, SHIFT(383),
  [1298] = {.entry = {.count = 1, .reusable = true}}, SHIFT(384),
  [1300] = {.entry = {.count = 1, .reusable = true}}, SHIFT(449),
  [1302] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [1304] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [1306] = {.entry = {.count = 1, .reusable = true}}, SHIFT(394),
  [1308] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [1310] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [1312] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [1314] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [1316] = {.entry = {.count = 1, .reusable = true}}, SHIFT(284),
  [1318] = {.entry = {.count = 1, .reusable = true}}, SHIFT(409),
  [1320] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [1322] = {.entry = {.count = 1, .reusable = true}}, SHIFT(295),
  [1324] = {.entry = {.count = 1, .reusable = true}}, SHIFT(240),
  [1326] = {.entry = {.count = 1, .reusable = true}}, SHIFT(236),
  [1328] = {.entry = {.count = 1, .reusable = true}}, SHIFT(233),
  [1330] = {.entry = {.count = 1, .reusable = true}}, SHIFT(229),
  [1332] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [1334] = {.entry = {.count = 1, .reusable = true}}, SHIFT(335),
  [1336] = {.entry = {.count = 1, .reusable = true}}, SHIFT(165),
  [1338] = {.entry = {.count = 1, .reusable = true}}, SHIFT(158),
  [1340] = {.entry = {.count = 1, .reusable = true}}, SHIFT(160),
  [1342] = {.entry = {.count = 1, .reusable = true}}, SHIFT(162),
  [1344] = {.entry = {.count = 1, .reusable = true}}, SHIFT(196),
  [1346] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [1348] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [1350] = {.entry = {.count = 1, .reusable = true}}, SHIFT(410),
  [1352] = {.entry = {.count = 1, .reusable = false}}, SHIFT(452),
  [1354] = {.entry = {.count = 1, .reusable = false}}, SHIFT(453),
  [1356] = {.entry = {.count = 1, .reusable = true}}, SHIFT(357),
  [1358] = {.entry = {.count = 1, .reusable = true}}, SHIFT(456),
  [1360] = {.entry = {.count = 1, .reusable = false}}, SHIFT(460),
  [1362] = {.entry = {.count = 1, .reusable = false}}, SHIFT(461),
  [1364] = {.entry = {.count = 1, .reusable = true}}, SHIFT(446),
  [1366] = {.entry = {.count = 1, .reusable = true}}, SHIFT(464),
  [1368] = {.entry = {.count = 1, .reusable = false}}, SHIFT(468),
  [1370] = {.entry = {.count = 1, .reusable = false}}, SHIFT(469),
  [1372] = {.entry = {.count = 1, .reusable = true}}, SHIFT(470),
  [1374] = {.entry = {.count = 1, .reusable = false}}, SHIFT(474),
  [1376] = {.entry = {.count = 1, .reusable = false}}, SHIFT(475),
  [1378] = {.entry = {.count = 1, .reusable = true}}, SHIFT(476),
  [1380] = {.entry = {.count = 1, .reusable = true}}, SHIFT(477),
  [1382] = {.entry = {.count = 1, .reusable = true}}, SHIFT(478),
  [1384] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [1386] = {.entry = {.count = 1, .reusable = true}}, SHIFT(302),
  [1388] = {.entry = {.count = 1, .reusable = true}}, SHIFT(270),
  [1390] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 2),
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
