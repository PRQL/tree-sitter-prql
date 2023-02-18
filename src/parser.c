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
#define STATE_COUNT 231
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 105
#define ALIAS_COUNT 0
#define TOKEN_COUNT 63
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 11
#define MAX_ALIAS_SEQUENCE_LENGTH 9
#define PRODUCTION_ID_COUNT 14

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
  anon_sym_LBRACK = 33,
  anon_sym_COMMA = 34,
  anon_sym_RBRACK = 35,
  anon_sym_LPAREN = 36,
  anon_sym_RPAREN = 37,
  anon_sym_DASH = 38,
  anon_sym_PLUS = 39,
  anon_sym_COLON = 40,
  anon_sym_DQUOTE = 41,
  aux_sym__double_quote_string_token1 = 42,
  anon_sym_SQUOTE = 43,
  aux_sym__literal_string_token1 = 44,
  sym__number = 45,
  anon_sym_DOT = 46,
  sym_identifier = 47,
  anon_sym_DOT_DOT = 48,
  anon_sym_EQ = 49,
  anon_sym_STAR = 50,
  anon_sym_SLASH = 51,
  anon_sym_PIPE = 52,
  anon_sym_EQ_EQ = 53,
  anon_sym_BANG_EQ = 54,
  anon_sym_GT = 55,
  anon_sym_GT_EQ = 56,
  anon_sym_LT = 57,
  anon_sym_LT_EQ = 58,
  anon_sym_QMARK_QMARK = 59,
  anon_sym_POUND = 60,
  aux_sym_comment_token1 = 61,
  sym_bang = 62,
  sym_program = 63,
  sym_pipeline = 64,
  sym_transforms = 65,
  sym_from = 66,
  sym_derives = 67,
  sym_filter = 68,
  sym__boolean_expression = 69,
  sym_aggregate = 70,
  sym_aggregate_operation = 71,
  sym__aggregate_count = 72,
  sym_sorts = 73,
  sym_direction = 74,
  sym_takes = 75,
  sym_window = 76,
  sym_window_definitions = 77,
  sym__window_definition = 78,
  sym_group = 79,
  sym_joins = 80,
  sym_conditions = 81,
  sym_select = 82,
  sym_table_reference = 83,
  sym_term = 84,
  sym__expression = 85,
  sym_literal = 86,
  sym__double_quote_string = 87,
  sym__literal_string = 88,
  sym__decimal_number = 89,
  sym_field = 90,
  sym__alias_identifier = 91,
  sym_range = 92,
  sym_assignment = 93,
  sym_binary_expression = 94,
  sym_comment = 95,
  aux_sym_program_repeat1 = 96,
  aux_sym_transforms_repeat1 = 97,
  aux_sym_derives_repeat1 = 98,
  aux_sym_aggregate_repeat1 = 99,
  aux_sym_sorts_repeat1 = 100,
  aux_sym_window_definitions_repeat1 = 101,
  aux_sym_group_repeat1 = 102,
  aux_sym_group_repeat2 = 103,
  aux_sym_conditions_repeat1 = 104,
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
  [anon_sym_LBRACK] = "[",
  [anon_sym_COMMA] = ",",
  [anon_sym_RBRACK] = "]",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [anon_sym_DASH] = "-",
  [anon_sym_PLUS] = "+",
  [anon_sym_COLON] = ":",
  [anon_sym_DQUOTE] = "\"",
  [aux_sym__double_quote_string_token1] = "_double_quote_string_token1",
  [anon_sym_SQUOTE] = "'",
  [aux_sym__literal_string_token1] = "_literal_string_token1",
  [sym__number] = "_number",
  [anon_sym_DOT] = ".",
  [sym_identifier] = "identifier",
  [anon_sym_DOT_DOT] = "..",
  [anon_sym_EQ] = "=",
  [anon_sym_STAR] = "*",
  [anon_sym_SLASH] = "/",
  [anon_sym_PIPE] = "|",
  [anon_sym_EQ_EQ] = "==",
  [anon_sym_BANG_EQ] = "!=",
  [anon_sym_GT] = ">",
  [anon_sym_GT_EQ] = ">=",
  [anon_sym_LT] = "<",
  [anon_sym_LT_EQ] = "<=",
  [anon_sym_QMARK_QMARK] = "\?\?",
  [anon_sym_POUND] = "#",
  [aux_sym_comment_token1] = "comment_token1",
  [sym_bang] = "bang",
  [sym_program] = "program",
  [sym_pipeline] = "pipeline",
  [sym_transforms] = "transforms",
  [sym_from] = "from",
  [sym_derives] = "derives",
  [sym_filter] = "filter",
  [sym__boolean_expression] = "_boolean_expression",
  [sym_aggregate] = "aggregate",
  [sym_aggregate_operation] = "aggregate_operation",
  [sym__aggregate_count] = "aggregate_operation",
  [sym_sorts] = "sorts",
  [sym_direction] = "direction",
  [sym_takes] = "takes",
  [sym_window] = "window",
  [sym_window_definitions] = "window_definitions",
  [sym__window_definition] = "_window_definition",
  [sym_group] = "group",
  [sym_joins] = "joins",
  [sym_conditions] = "conditions",
  [sym_select] = "select",
  [sym_table_reference] = "table_reference",
  [sym_term] = "term",
  [sym__expression] = "_expression",
  [sym_literal] = "literal",
  [sym__double_quote_string] = "_double_quote_string",
  [sym__literal_string] = "_literal_string",
  [sym__decimal_number] = "_decimal_number",
  [sym_field] = "field",
  [sym__alias_identifier] = "_alias_identifier",
  [sym_range] = "range",
  [sym_assignment] = "assignment",
  [sym_binary_expression] = "binary_expression",
  [sym_comment] = "comment",
  [aux_sym_program_repeat1] = "program_repeat1",
  [aux_sym_transforms_repeat1] = "transforms_repeat1",
  [aux_sym_derives_repeat1] = "derives_repeat1",
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
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_DASH] = anon_sym_DASH,
  [anon_sym_PLUS] = anon_sym_PLUS,
  [anon_sym_COLON] = anon_sym_COLON,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [aux_sym__double_quote_string_token1] = aux_sym__double_quote_string_token1,
  [anon_sym_SQUOTE] = anon_sym_SQUOTE,
  [aux_sym__literal_string_token1] = aux_sym__literal_string_token1,
  [sym__number] = sym__number,
  [anon_sym_DOT] = anon_sym_DOT,
  [sym_identifier] = sym_identifier,
  [anon_sym_DOT_DOT] = anon_sym_DOT_DOT,
  [anon_sym_EQ] = anon_sym_EQ,
  [anon_sym_STAR] = anon_sym_STAR,
  [anon_sym_SLASH] = anon_sym_SLASH,
  [anon_sym_PIPE] = anon_sym_PIPE,
  [anon_sym_EQ_EQ] = anon_sym_EQ_EQ,
  [anon_sym_BANG_EQ] = anon_sym_BANG_EQ,
  [anon_sym_GT] = anon_sym_GT,
  [anon_sym_GT_EQ] = anon_sym_GT_EQ,
  [anon_sym_LT] = anon_sym_LT,
  [anon_sym_LT_EQ] = anon_sym_LT_EQ,
  [anon_sym_QMARK_QMARK] = anon_sym_QMARK_QMARK,
  [anon_sym_POUND] = anon_sym_POUND,
  [aux_sym_comment_token1] = aux_sym_comment_token1,
  [sym_bang] = sym_bang,
  [sym_program] = sym_program,
  [sym_pipeline] = sym_pipeline,
  [sym_transforms] = sym_transforms,
  [sym_from] = sym_from,
  [sym_derives] = sym_derives,
  [sym_filter] = sym_filter,
  [sym__boolean_expression] = sym__boolean_expression,
  [sym_aggregate] = sym_aggregate,
  [sym_aggregate_operation] = sym_aggregate_operation,
  [sym__aggregate_count] = sym_aggregate_operation,
  [sym_sorts] = sym_sorts,
  [sym_direction] = sym_direction,
  [sym_takes] = sym_takes,
  [sym_window] = sym_window,
  [sym_window_definitions] = sym_window_definitions,
  [sym__window_definition] = sym__window_definition,
  [sym_group] = sym_group,
  [sym_joins] = sym_joins,
  [sym_conditions] = sym_conditions,
  [sym_select] = sym_select,
  [sym_table_reference] = sym_table_reference,
  [sym_term] = sym_term,
  [sym__expression] = sym__expression,
  [sym_literal] = sym_literal,
  [sym__double_quote_string] = sym__double_quote_string,
  [sym__literal_string] = sym__literal_string,
  [sym__decimal_number] = sym__decimal_number,
  [sym_field] = sym_field,
  [sym__alias_identifier] = sym__alias_identifier,
  [sym_range] = sym_range,
  [sym_assignment] = sym_assignment,
  [sym_binary_expression] = sym_binary_expression,
  [sym_comment] = sym_comment,
  [aux_sym_program_repeat1] = aux_sym_program_repeat1,
  [aux_sym_transforms_repeat1] = aux_sym_transforms_repeat1,
  [aux_sym_derives_repeat1] = aux_sym_derives_repeat1,
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
  [anon_sym_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RPAREN] = {
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
  [anon_sym_COLON] = {
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
  [aux_sym__literal_string_token1] = {
    .visible = false,
    .named = false,
  },
  [sym__number] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_DOT] = {
    .visible = true,
    .named = false,
  },
  [sym_identifier] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_DOT_DOT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ] = {
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
  [anon_sym_EQ_EQ] = {
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
  [sym_pipeline] = {
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
  [sym_conditions] = {
    .visible = true,
    .named = true,
  },
  [sym_select] = {
    .visible = true,
    .named = true,
  },
  [sym_table_reference] = {
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
  [sym__double_quote_string] = {
    .visible = false,
    .named = true,
  },
  [sym__literal_string] = {
    .visible = false,
    .named = true,
  },
  [sym__decimal_number] = {
    .visible = false,
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
  [sym_range] = {
    .visible = true,
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
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_program_repeat1] = {
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
  field_from = 2,
  field_left = 3,
  field_name = 4,
  field_operation = 5,
  field_operator = 6,
  field_predicate = 7,
  field_right = 8,
  field_table = 9,
  field_till = 10,
  field_value = 11,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_alias] = "alias",
  [field_from] = "from",
  [field_left] = "left",
  [field_name] = "name",
  [field_operation] = "operation",
  [field_operator] = "operator",
  [field_predicate] = "predicate",
  [field_right] = "right",
  [field_table] = "table",
  [field_till] = "till",
  [field_value] = "value",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 1},
  [2] = {.index = 1, .length = 1},
  [4] = {.index = 2, .length = 1},
  [5] = {.index = 3, .length = 1},
  [7] = {.index = 4, .length = 3},
  [8] = {.index = 7, .length = 3},
  [9] = {.index = 10, .length = 2},
  [10] = {.index = 12, .length = 4},
  [11] = {.index = 16, .length = 1},
  [12] = {.index = 17, .length = 3},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_name, 0},
  [1] =
    {field_value, 0},
  [2] =
    {field_predicate, 1, .inherited = true},
  [3] =
    {field_predicate, 0},
  [4] =
    {field_left, 0},
    {field_operator, 1},
    {field_right, 2},
  [7] =
    {field_alias, 0},
    {field_operation, 2},
    {field_operator, 1},
  [10] =
    {field_name, 2},
    {field_table, 0},
  [12] =
    {field_alias, 0},
    {field_operation, 2},
    {field_operation, 3},
    {field_operator, 1},
  [16] =
    {field_predicate, 1},
  [17] =
    {field_from, 0},
    {field_operator, 1},
    {field_till, 2},
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
  [3] = {
    [0] = sym_identifier,
  },
  [6] = {
    [1] = sym_term,
  },
  [13] = {
    [2] = sym_literal,
  },
};

static const uint16_t ts_non_terminal_alias_map[] = {
  sym__double_quote_string, 2,
    sym__double_quote_string,
    sym_identifier,
  0,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(244);
      if (lookahead == '!') ADVANCE(402);
      if (lookahead == '"') ADVANCE(298);
      if (lookahead == '#') ADVANCE(396);
      if (lookahead == '\'') ADVANCE(302);
      if (lookahead == '(') ADVANCE(293);
      if (lookahead == ')') ADVANCE(294);
      if (lookahead == '*') ADVANCE(386);
      if (lookahead == '+') ADVANCE(296);
      if (lookahead == ',') ADVANCE(291);
      if (lookahead == '-') ADVANCE(295);
      if (lookahead == '.') ADVANCE(308);
      if (lookahead == '/') ADVANCE(387);
      if (lookahead == ':') ADVANCE(297);
      if (lookahead == '<') ADVANCE(393);
      if (lookahead == '=') ADVANCE(385);
      if (lookahead == '>') ADVANCE(391);
      if (lookahead == '?') ADVANCE(6);
      if (lookahead == 'A') ADVANCE(43);
      if (lookahead == 'C') ADVANCE(84);
      if (lookahead == 'D') ADVANCE(34);
      if (lookahead == 'E') ADVANCE(119);
      if (lookahead == 'F') ADVANCE(7);
      if (lookahead == 'G') ADVANCE(99);
      if (lookahead == 'I') ADVANCE(73);
      if (lookahead == 'J') ADVANCE(89);
      if (lookahead == 'L') ADVANCE(24);
      if (lookahead == 'M') ADVANCE(10);
      if (lookahead == 'O') ADVANCE(92);
      if (lookahead == 'R') ADVANCE(53);
      if (lookahead == 'S') ADVANCE(36);
      if (lookahead == 'T') ADVANCE(9);
      if (lookahead == 'W') ADVANCE(56);
      if (lookahead == '[') ADVANCE(290);
      if (lookahead == ']') ADVANCE(292);
      if (lookahead == 'a') ADVANCE(157);
      if (lookahead == 'c') ADVANCE(198);
      if (lookahead == 'd') ADVANCE(148);
      if (lookahead == 'e') ADVANCE(233);
      if (lookahead == 'f') ADVANCE(121);
      if (lookahead == 'g') ADVANCE(213);
      if (lookahead == 'i') ADVANCE(187);
      if (lookahead == 'j') ADVANCE(203);
      if (lookahead == 'l') ADVANCE(138);
      if (lookahead == 'm') ADVANCE(124);
      if (lookahead == 'o') ADVANCE(206);
      if (lookahead == 'r') ADVANCE(167);
      if (lookahead == 's') ADVANCE(150);
      if (lookahead == 't') ADVANCE(123);
      if (lookahead == 'w') ADVANCE(170);
      if (lookahead == '|') ADVANCE(388);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(241)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(306);
      END_STATE();
    case 1:
      if (lookahead == '"') ADVANCE(298);
      if (lookahead == '#') ADVANCE(396);
      if (lookahead == '\'') ADVANCE(302);
      if (lookahead == '(') ADVANCE(293);
      if (lookahead == '+') ADVANCE(296);
      if (lookahead == ',') ADVANCE(291);
      if (lookahead == '-') ADVANCE(295);
      if (lookahead == '.') ADVANCE(307);
      if (lookahead == 'F') ADVANCE(309);
      if (lookahead == 'T') ADVANCE(332);
      if (lookahead == '[') ADVANCE(290);
      if (lookahead == ']') ADVANCE(292);
      if (lookahead == 'f') ADVANCE(346);
      if (lookahead == 't') ADVANCE(369);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(236)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(306);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(383);
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(298);
      if (lookahead == '#') ADVANCE(396);
      if (lookahead == '\'') ADVANCE(302);
      if (lookahead == ',') ADVANCE(291);
      if (lookahead == '-') ADVANCE(295);
      if (lookahead == '.') ADVANCE(307);
      if (lookahead == 'A') ADVANCE(342);
      if (lookahead == 'C') ADVANCE(330);
      if (lookahead == 'F') ADVANCE(309);
      if (lookahead == 'M') ADVANCE(310);
      if (lookahead == 'S') ADVANCE(335);
      if (lookahead == 'T') ADVANCE(332);
      if (lookahead == ']') ADVANCE(292);
      if (lookahead == 'a') ADVANCE(379);
      if (lookahead == 'c') ADVANCE(367);
      if (lookahead == 'f') ADVANCE(346);
      if (lookahead == 'm') ADVANCE(347);
      if (lookahead == 's') ADVANCE(372);
      if (lookahead == 't') ADVANCE(369);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(235)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(306);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(383);
      END_STATE();
    case 3:
      if (lookahead == '"') ADVANCE(298);
      if (lookahead == '#') ADVANCE(396);
      if (lookahead == '\'') ADVANCE(302);
      if (lookahead == '-') ADVANCE(295);
      if (lookahead == '.') ADVANCE(307);
      if (lookahead == 'A') ADVANCE(344);
      if (lookahead == 'F') ADVANCE(309);
      if (lookahead == 'S') ADVANCE(339);
      if (lookahead == 'T') ADVANCE(332);
      if (lookahead == 'a') ADVANCE(381);
      if (lookahead == 'f') ADVANCE(346);
      if (lookahead == 's') ADVANCE(376);
      if (lookahead == 't') ADVANCE(369);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(237)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(306);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(383);
      END_STATE();
    case 4:
      if (lookahead == '"') ADVANCE(298);
      if (lookahead == '#') ADVANCE(396);
      if (lookahead == '[') ADVANCE(290);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(238)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(383);
      END_STATE();
    case 5:
      if (lookahead == '=') ADVANCE(390);
      END_STATE();
    case 6:
      if (lookahead == '?') ADVANCE(395);
      END_STATE();
    case 7:
      if (lookahead == 'A') ADVANCE(64);
      if (lookahead == 'I') ADVANCE(65);
      if (lookahead == 'R') ADVANCE(87);
      if (lookahead == 'U') ADVANCE(68);
      END_STATE();
    case 8:
      if (lookahead == 'A') ADVANCE(63);
      END_STATE();
    case 9:
      if (lookahead == 'A') ADVANCE(63);
      if (lookahead == 'R') ADVANCE(115);
      END_STATE();
    case 10:
      if (lookahead == 'A') ADVANCE(120);
      if (lookahead == 'I') ADVANCE(74);
      END_STATE();
    case 11:
      if (lookahead == 'A') ADVANCE(49);
      END_STATE();
    case 12:
      if (lookahead == 'A') ADVANCE(110);
      END_STATE();
    case 13:
      if (lookahead == 'A') ADVANCE(78);
      END_STATE();
    case 14:
      if (lookahead == 'C') ADVANCE(50);
      END_STATE();
    case 15:
      if (lookahead == 'C') ADVANCE(107);
      END_STATE();
    case 16:
      if (lookahead == 'C') ADVANCE(108);
      END_STATE();
    case 17:
      if (lookahead == 'D') ADVANCE(283);
      END_STATE();
    case 18:
      if (lookahead == 'D') ADVANCE(86);
      END_STATE();
    case 19:
      if (lookahead == 'D') ADVANCE(26);
      END_STATE();
    case 20:
      if (lookahead == 'D') ADVANCE(57);
      END_STATE();
    case 21:
      if (lookahead == 'D') ADVANCE(33);
      END_STATE();
    case 22:
      if (lookahead == 'D') ADVANCE(21);
      END_STATE();
    case 23:
      if (lookahead == 'D') ADVANCE(61);
      END_STATE();
    case 24:
      if (lookahead == 'E') ADVANCE(41);
      END_STATE();
    case 25:
      if (lookahead == 'E') ADVANCE(15);
      END_STATE();
    case 26:
      if (lookahead == 'E') ADVANCE(278);
      END_STATE();
    case 27:
      if (lookahead == 'E') ADVANCE(251);
      END_STATE();
    case 28:
      if (lookahead == 'E') ADVANCE(255);
      END_STATE();
    case 29:
      if (lookahead == 'E') ADVANCE(257);
      END_STATE();
    case 30:
      if (lookahead == 'E') ADVANCE(247);
      END_STATE();
    case 31:
      if (lookahead == 'E') ADVANCE(260);
      END_STATE();
    case 32:
      if (lookahead == 'E') ADVANCE(249);
      END_STATE();
    case 33:
      if (lookahead == 'E') ADVANCE(116);
      END_STATE();
    case 34:
      if (lookahead == 'E') ADVANCE(96);
      END_STATE();
    case 35:
      if (lookahead == 'E') ADVANCE(47);
      END_STATE();
    case 36:
      if (lookahead == 'E') ADVANCE(67);
      if (lookahead == 'I') ADVANCE(19);
      if (lookahead == 'O') ADVANCE(97);
      if (lookahead == 'T') ADVANCE(22);
      if (lookahead == 'U') ADVANCE(71);
      if (lookahead == 'W') ADVANCE(58);
      END_STATE();
    case 37:
      if (lookahead == 'E') ADVANCE(67);
      if (lookahead == 'O') ADVANCE(97);
      END_STATE();
    case 38:
      if (lookahead == 'E') ADVANCE(95);
      if (lookahead == 'G') ADVANCE(272);
      END_STATE();
    case 39:
      if (lookahead == 'E') ADVANCE(93);
      END_STATE();
    case 40:
      if (lookahead == 'E') ADVANCE(94);
      END_STATE();
    case 41:
      if (lookahead == 'F') ADVANCE(103);
      END_STATE();
    case 42:
      if (lookahead == 'G') ADVANCE(48);
      if (lookahead == 'N') ADVANCE(17);
      END_STATE();
    case 43:
      if (lookahead == 'G') ADVANCE(48);
      if (lookahead == 'N') ADVANCE(17);
      if (lookahead == 'V') ADVANCE(38);
      END_STATE();
    case 44:
      if (lookahead == 'G') ADVANCE(51);
      END_STATE();
    case 45:
      if (lookahead == 'G') ADVANCE(287);
      END_STATE();
    case 46:
      if (lookahead == 'G') ADVANCE(289);
      END_STATE();
    case 47:
      if (lookahead == 'G') ADVANCE(12);
      END_STATE();
    case 48:
      if (lookahead == 'G') ADVANCE(98);
      END_STATE();
    case 49:
      if (lookahead == 'G') ADVANCE(31);
      END_STATE();
    case 50:
      if (lookahead == 'H') ADVANCE(259);
      END_STATE();
    case 51:
      if (lookahead == 'H') ADVANCE(106);
      END_STATE();
    case 52:
      if (lookahead == 'I') ADVANCE(117);
      END_STATE();
    case 53:
      if (lookahead == 'I') ADVANCE(44);
      if (lookahead == 'O') ADVANCE(69);
      END_STATE();
    case 54:
      if (lookahead == 'I') ADVANCE(65);
      if (lookahead == 'R') ADVANCE(87);
      END_STATE();
    case 55:
      if (lookahead == 'I') ADVANCE(65);
      if (lookahead == 'R') ADVANCE(87);
      if (lookahead == 'U') ADVANCE(68);
      END_STATE();
    case 56:
      if (lookahead == 'I') ADVANCE(76);
      END_STATE();
    case 57:
      if (lookahead == 'I') ADVANCE(102);
      END_STATE();
    case 58:
      if (lookahead == 'I') ADVANCE(109);
      END_STATE();
    case 59:
      if (lookahead == 'I') ADVANCE(75);
      END_STATE();
    case 60:
      if (lookahead == 'I') ADVANCE(77);
      END_STATE();
    case 61:
      if (lookahead == 'I') ADVANCE(80);
      END_STATE();
    case 62:
      if (lookahead == 'I') ADVANCE(83);
      END_STATE();
    case 63:
      if (lookahead == 'K') ADVANCE(27);
      END_STATE();
    case 64:
      if (lookahead == 'L') ADVANCE(101);
      END_STATE();
    case 65:
      if (lookahead == 'L') ADVANCE(111);
      END_STATE();
    case 66:
      if (lookahead == 'L') ADVANCE(282);
      END_STATE();
    case 67:
      if (lookahead == 'L') ADVANCE(25);
      END_STATE();
    case 68:
      if (lookahead == 'L') ADVANCE(66);
      END_STATE();
    case 69:
      if (lookahead == 'L') ADVANCE(70);
      if (lookahead == 'W') ADVANCE(100);
      END_STATE();
    case 70:
      if (lookahead == 'L') ADVANCE(60);
      END_STATE();
    case 71:
      if (lookahead == 'M') ADVANCE(274);
      END_STATE();
    case 72:
      if (lookahead == 'M') ADVANCE(245);
      END_STATE();
    case 73:
      if (lookahead == 'N') ADVANCE(285);
      END_STATE();
    case 74:
      if (lookahead == 'N') ADVANCE(262);
      END_STATE();
    case 75:
      if (lookahead == 'N') ADVANCE(253);
      END_STATE();
    case 76:
      if (lookahead == 'N') ADVANCE(18);
      END_STATE();
    case 77:
      if (lookahead == 'N') ADVANCE(45);
      END_STATE();
    case 78:
      if (lookahead == 'N') ADVANCE(23);
      END_STATE();
    case 79:
      if (lookahead == 'N') ADVANCE(105);
      END_STATE();
    case 80:
      if (lookahead == 'N') ADVANCE(46);
      END_STATE();
    case 81:
      if (lookahead == 'N') ADVANCE(82);
      END_STATE();
    case 82:
      if (lookahead == 'N') ADVANCE(39);
      END_STATE();
    case 83:
      if (lookahead == 'N') ADVANCE(16);
      END_STATE();
    case 84:
      if (lookahead == 'O') ADVANCE(114);
      END_STATE();
    case 85:
      if (lookahead == 'O') ADVANCE(69);
      END_STATE();
    case 86:
      if (lookahead == 'O') ADVANCE(118);
      END_STATE();
    case 87:
      if (lookahead == 'O') ADVANCE(72);
      END_STATE();
    case 88:
      if (lookahead == 'O') ADVANCE(113);
      END_STATE();
    case 89:
      if (lookahead == 'O') ADVANCE(59);
      END_STATE();
    case 90:
      if (lookahead == 'P') ADVANCE(13);
      END_STATE();
    case 91:
      if (lookahead == 'P') ADVANCE(248);
      END_STATE();
    case 92:
      if (lookahead == 'R') ADVANCE(284);
      END_STATE();
    case 93:
      if (lookahead == 'R') ADVANCE(279);
      END_STATE();
    case 94:
      if (lookahead == 'R') ADVANCE(246);
      END_STATE();
    case 95:
      if (lookahead == 'R') ADVANCE(11);
      END_STATE();
    case 96:
      if (lookahead == 'R') ADVANCE(52);
      END_STATE();
    case 97:
      if (lookahead == 'R') ADVANCE(104);
      END_STATE();
    case 98:
      if (lookahead == 'R') ADVANCE(35);
      END_STATE();
    case 99:
      if (lookahead == 'R') ADVANCE(88);
      END_STATE();
    case 100:
      if (lookahead == 'S') ADVANCE(288);
      END_STATE();
    case 101:
      if (lookahead == 'S') ADVANCE(29);
      END_STATE();
    case 102:
      if (lookahead == 'S') ADVANCE(112);
      END_STATE();
    case 103:
      if (lookahead == 'T') ADVANCE(280);
      END_STATE();
    case 104:
      if (lookahead == 'T') ADVANCE(250);
      END_STATE();
    case 105:
      if (lookahead == 'T') ADVANCE(268);
      END_STATE();
    case 106:
      if (lookahead == 'T') ADVANCE(281);
      END_STATE();
    case 107:
      if (lookahead == 'T') ADVANCE(254);
      END_STATE();
    case 108:
      if (lookahead == 'T') ADVANCE(276);
      END_STATE();
    case 109:
      if (lookahead == 'T') ADVANCE(14);
      END_STATE();
    case 110:
      if (lookahead == 'T') ADVANCE(32);
      END_STATE();
    case 111:
      if (lookahead == 'T') ADVANCE(40);
      END_STATE();
    case 112:
      if (lookahead == 'T') ADVANCE(62);
      END_STATE();
    case 113:
      if (lookahead == 'U') ADVANCE(91);
      END_STATE();
    case 114:
      if (lookahead == 'U') ADVANCE(79);
      END_STATE();
    case 115:
      if (lookahead == 'U') ADVANCE(28);
      END_STATE();
    case 116:
      if (lookahead == 'V') ADVANCE(270);
      END_STATE();
    case 117:
      if (lookahead == 'V') ADVANCE(30);
      END_STATE();
    case 118:
      if (lookahead == 'W') ADVANCE(252);
      END_STATE();
    case 119:
      if (lookahead == 'X') ADVANCE(90);
      END_STATE();
    case 120:
      if (lookahead == 'X') ADVANCE(264);
      END_STATE();
    case 121:
      if (lookahead == 'a') ADVANCE(178);
      if (lookahead == 'i') ADVANCE(179);
      if (lookahead == 'r') ADVANCE(201);
      if (lookahead == 'u') ADVANCE(182);
      END_STATE();
    case 122:
      if (lookahead == 'a') ADVANCE(177);
      END_STATE();
    case 123:
      if (lookahead == 'a') ADVANCE(177);
      if (lookahead == 'r') ADVANCE(229);
      END_STATE();
    case 124:
      if (lookahead == 'a') ADVANCE(234);
      if (lookahead == 'i') ADVANCE(188);
      END_STATE();
    case 125:
      if (lookahead == 'a') ADVANCE(163);
      END_STATE();
    case 126:
      if (lookahead == 'a') ADVANCE(224);
      END_STATE();
    case 127:
      if (lookahead == 'a') ADVANCE(192);
      END_STATE();
    case 128:
      if (lookahead == 'c') ADVANCE(164);
      END_STATE();
    case 129:
      if (lookahead == 'c') ADVANCE(220);
      END_STATE();
    case 130:
      if (lookahead == 'c') ADVANCE(221);
      END_STATE();
    case 131:
      if (lookahead == 'd') ADVANCE(283);
      END_STATE();
    case 132:
      if (lookahead == 'd') ADVANCE(200);
      END_STATE();
    case 133:
      if (lookahead == 'd') ADVANCE(139);
      END_STATE();
    case 134:
      if (lookahead == 'd') ADVANCE(171);
      END_STATE();
    case 135:
      if (lookahead == 'd') ADVANCE(147);
      END_STATE();
    case 136:
      if (lookahead == 'd') ADVANCE(135);
      END_STATE();
    case 137:
      if (lookahead == 'd') ADVANCE(175);
      END_STATE();
    case 138:
      if (lookahead == 'e') ADVANCE(155);
      END_STATE();
    case 139:
      if (lookahead == 'e') ADVANCE(278);
      END_STATE();
    case 140:
      if (lookahead == 'e') ADVANCE(251);
      END_STATE();
    case 141:
      if (lookahead == 'e') ADVANCE(255);
      END_STATE();
    case 142:
      if (lookahead == 'e') ADVANCE(129);
      END_STATE();
    case 143:
      if (lookahead == 'e') ADVANCE(257);
      END_STATE();
    case 144:
      if (lookahead == 'e') ADVANCE(247);
      END_STATE();
    case 145:
      if (lookahead == 'e') ADVANCE(260);
      END_STATE();
    case 146:
      if (lookahead == 'e') ADVANCE(249);
      END_STATE();
    case 147:
      if (lookahead == 'e') ADVANCE(230);
      END_STATE();
    case 148:
      if (lookahead == 'e') ADVANCE(210);
      END_STATE();
    case 149:
      if (lookahead == 'e') ADVANCE(161);
      END_STATE();
    case 150:
      if (lookahead == 'e') ADVANCE(181);
      if (lookahead == 'i') ADVANCE(133);
      if (lookahead == 'o') ADVANCE(211);
      if (lookahead == 't') ADVANCE(136);
      if (lookahead == 'u') ADVANCE(185);
      if (lookahead == 'w') ADVANCE(172);
      END_STATE();
    case 151:
      if (lookahead == 'e') ADVANCE(181);
      if (lookahead == 'o') ADVANCE(211);
      END_STATE();
    case 152:
      if (lookahead == 'e') ADVANCE(209);
      if (lookahead == 'g') ADVANCE(272);
      END_STATE();
    case 153:
      if (lookahead == 'e') ADVANCE(207);
      END_STATE();
    case 154:
      if (lookahead == 'e') ADVANCE(208);
      END_STATE();
    case 155:
      if (lookahead == 'f') ADVANCE(217);
      END_STATE();
    case 156:
      if (lookahead == 'g') ADVANCE(162);
      if (lookahead == 'n') ADVANCE(131);
      END_STATE();
    case 157:
      if (lookahead == 'g') ADVANCE(162);
      if (lookahead == 'n') ADVANCE(131);
      if (lookahead == 'v') ADVANCE(152);
      END_STATE();
    case 158:
      if (lookahead == 'g') ADVANCE(165);
      END_STATE();
    case 159:
      if (lookahead == 'g') ADVANCE(287);
      END_STATE();
    case 160:
      if (lookahead == 'g') ADVANCE(289);
      END_STATE();
    case 161:
      if (lookahead == 'g') ADVANCE(126);
      END_STATE();
    case 162:
      if (lookahead == 'g') ADVANCE(212);
      END_STATE();
    case 163:
      if (lookahead == 'g') ADVANCE(145);
      END_STATE();
    case 164:
      if (lookahead == 'h') ADVANCE(259);
      END_STATE();
    case 165:
      if (lookahead == 'h') ADVANCE(219);
      END_STATE();
    case 166:
      if (lookahead == 'i') ADVANCE(231);
      END_STATE();
    case 167:
      if (lookahead == 'i') ADVANCE(158);
      if (lookahead == 'o') ADVANCE(183);
      END_STATE();
    case 168:
      if (lookahead == 'i') ADVANCE(179);
      if (lookahead == 'r') ADVANCE(201);
      END_STATE();
    case 169:
      if (lookahead == 'i') ADVANCE(179);
      if (lookahead == 'r') ADVANCE(201);
      if (lookahead == 'u') ADVANCE(182);
      END_STATE();
    case 170:
      if (lookahead == 'i') ADVANCE(190);
      END_STATE();
    case 171:
      if (lookahead == 'i') ADVANCE(216);
      END_STATE();
    case 172:
      if (lookahead == 'i') ADVANCE(222);
      END_STATE();
    case 173:
      if (lookahead == 'i') ADVANCE(189);
      END_STATE();
    case 174:
      if (lookahead == 'i') ADVANCE(191);
      END_STATE();
    case 175:
      if (lookahead == 'i') ADVANCE(194);
      END_STATE();
    case 176:
      if (lookahead == 'i') ADVANCE(197);
      END_STATE();
    case 177:
      if (lookahead == 'k') ADVANCE(140);
      END_STATE();
    case 178:
      if (lookahead == 'l') ADVANCE(215);
      END_STATE();
    case 179:
      if (lookahead == 'l') ADVANCE(225);
      END_STATE();
    case 180:
      if (lookahead == 'l') ADVANCE(282);
      END_STATE();
    case 181:
      if (lookahead == 'l') ADVANCE(142);
      END_STATE();
    case 182:
      if (lookahead == 'l') ADVANCE(180);
      END_STATE();
    case 183:
      if (lookahead == 'l') ADVANCE(184);
      if (lookahead == 'w') ADVANCE(214);
      END_STATE();
    case 184:
      if (lookahead == 'l') ADVANCE(174);
      END_STATE();
    case 185:
      if (lookahead == 'm') ADVANCE(274);
      END_STATE();
    case 186:
      if (lookahead == 'm') ADVANCE(245);
      END_STATE();
    case 187:
      if (lookahead == 'n') ADVANCE(286);
      END_STATE();
    case 188:
      if (lookahead == 'n') ADVANCE(262);
      END_STATE();
    case 189:
      if (lookahead == 'n') ADVANCE(253);
      END_STATE();
    case 190:
      if (lookahead == 'n') ADVANCE(132);
      END_STATE();
    case 191:
      if (lookahead == 'n') ADVANCE(159);
      END_STATE();
    case 192:
      if (lookahead == 'n') ADVANCE(137);
      END_STATE();
    case 193:
      if (lookahead == 'n') ADVANCE(223);
      END_STATE();
    case 194:
      if (lookahead == 'n') ADVANCE(160);
      END_STATE();
    case 195:
      if (lookahead == 'n') ADVANCE(196);
      END_STATE();
    case 196:
      if (lookahead == 'n') ADVANCE(153);
      END_STATE();
    case 197:
      if (lookahead == 'n') ADVANCE(130);
      END_STATE();
    case 198:
      if (lookahead == 'o') ADVANCE(228);
      END_STATE();
    case 199:
      if (lookahead == 'o') ADVANCE(183);
      END_STATE();
    case 200:
      if (lookahead == 'o') ADVANCE(232);
      END_STATE();
    case 201:
      if (lookahead == 'o') ADVANCE(186);
      END_STATE();
    case 202:
      if (lookahead == 'o') ADVANCE(227);
      END_STATE();
    case 203:
      if (lookahead == 'o') ADVANCE(173);
      END_STATE();
    case 204:
      if (lookahead == 'p') ADVANCE(127);
      END_STATE();
    case 205:
      if (lookahead == 'p') ADVANCE(248);
      END_STATE();
    case 206:
      if (lookahead == 'r') ADVANCE(284);
      END_STATE();
    case 207:
      if (lookahead == 'r') ADVANCE(279);
      END_STATE();
    case 208:
      if (lookahead == 'r') ADVANCE(246);
      END_STATE();
    case 209:
      if (lookahead == 'r') ADVANCE(125);
      END_STATE();
    case 210:
      if (lookahead == 'r') ADVANCE(166);
      END_STATE();
    case 211:
      if (lookahead == 'r') ADVANCE(218);
      END_STATE();
    case 212:
      if (lookahead == 'r') ADVANCE(149);
      END_STATE();
    case 213:
      if (lookahead == 'r') ADVANCE(202);
      END_STATE();
    case 214:
      if (lookahead == 's') ADVANCE(288);
      END_STATE();
    case 215:
      if (lookahead == 's') ADVANCE(143);
      END_STATE();
    case 216:
      if (lookahead == 's') ADVANCE(226);
      END_STATE();
    case 217:
      if (lookahead == 't') ADVANCE(280);
      END_STATE();
    case 218:
      if (lookahead == 't') ADVANCE(250);
      END_STATE();
    case 219:
      if (lookahead == 't') ADVANCE(281);
      END_STATE();
    case 220:
      if (lookahead == 't') ADVANCE(254);
      END_STATE();
    case 221:
      if (lookahead == 't') ADVANCE(276);
      END_STATE();
    case 222:
      if (lookahead == 't') ADVANCE(128);
      END_STATE();
    case 223:
      if (lookahead == 't') ADVANCE(269);
      END_STATE();
    case 224:
      if (lookahead == 't') ADVANCE(146);
      END_STATE();
    case 225:
      if (lookahead == 't') ADVANCE(154);
      END_STATE();
    case 226:
      if (lookahead == 't') ADVANCE(176);
      END_STATE();
    case 227:
      if (lookahead == 'u') ADVANCE(205);
      END_STATE();
    case 228:
      if (lookahead == 'u') ADVANCE(193);
      END_STATE();
    case 229:
      if (lookahead == 'u') ADVANCE(141);
      END_STATE();
    case 230:
      if (lookahead == 'v') ADVANCE(270);
      END_STATE();
    case 231:
      if (lookahead == 'v') ADVANCE(144);
      END_STATE();
    case 232:
      if (lookahead == 'w') ADVANCE(252);
      END_STATE();
    case 233:
      if (lookahead == 'x') ADVANCE(204);
      END_STATE();
    case 234:
      if (lookahead == 'x') ADVANCE(264);
      END_STATE();
    case 235:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(235)
      if (lookahead == '"') ADVANCE(298);
      if (lookahead == '#') ADVANCE(396);
      if (lookahead == '\'') ADVANCE(302);
      if (lookahead == ',') ADVANCE(291);
      if (lookahead == '-') ADVANCE(295);
      if (lookahead == '.') ADVANCE(307);
      if (lookahead == 'A') ADVANCE(342);
      if (lookahead == 'C') ADVANCE(330);
      if (lookahead == 'F') ADVANCE(309);
      if (lookahead == 'M') ADVANCE(310);
      if (lookahead == 'S') ADVANCE(335);
      if (lookahead == 'T') ADVANCE(332);
      if (lookahead == ']') ADVANCE(292);
      if (lookahead == 'a') ADVANCE(379);
      if (lookahead == 'c') ADVANCE(367);
      if (lookahead == 'f') ADVANCE(346);
      if (lookahead == 'm') ADVANCE(347);
      if (lookahead == 's') ADVANCE(372);
      if (lookahead == 't') ADVANCE(369);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(306);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(383);
      END_STATE();
    case 236:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(236)
      if (lookahead == '"') ADVANCE(298);
      if (lookahead == '#') ADVANCE(396);
      if (lookahead == '\'') ADVANCE(302);
      if (lookahead == '(') ADVANCE(293);
      if (lookahead == '+') ADVANCE(296);
      if (lookahead == ',') ADVANCE(291);
      if (lookahead == '-') ADVANCE(295);
      if (lookahead == '.') ADVANCE(307);
      if (lookahead == 'F') ADVANCE(309);
      if (lookahead == 'T') ADVANCE(332);
      if (lookahead == '[') ADVANCE(290);
      if (lookahead == ']') ADVANCE(292);
      if (lookahead == 'f') ADVANCE(346);
      if (lookahead == 't') ADVANCE(369);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(306);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(383);
      END_STATE();
    case 237:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(237)
      if (lookahead == '"') ADVANCE(298);
      if (lookahead == '#') ADVANCE(396);
      if (lookahead == '\'') ADVANCE(302);
      if (lookahead == '-') ADVANCE(295);
      if (lookahead == '.') ADVANCE(307);
      if (lookahead == 'A') ADVANCE(344);
      if (lookahead == 'F') ADVANCE(309);
      if (lookahead == 'S') ADVANCE(339);
      if (lookahead == 'T') ADVANCE(332);
      if (lookahead == 'a') ADVANCE(381);
      if (lookahead == 'f') ADVANCE(346);
      if (lookahead == 's') ADVANCE(376);
      if (lookahead == 't') ADVANCE(369);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(306);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(383);
      END_STATE();
    case 238:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(238)
      if (lookahead == '"') ADVANCE(298);
      if (lookahead == '#') ADVANCE(396);
      if (lookahead == '[') ADVANCE(290);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(383);
      END_STATE();
    case 239:
      if (eof) ADVANCE(244);
      if (lookahead == '!') ADVANCE(5);
      if (lookahead == '#') ADVANCE(396);
      if (lookahead == '(') ADVANCE(293);
      if (lookahead == ')') ADVANCE(294);
      if (lookahead == '*') ADVANCE(386);
      if (lookahead == '+') ADVANCE(296);
      if (lookahead == ',') ADVANCE(291);
      if (lookahead == '-') ADVANCE(295);
      if (lookahead == '.') ADVANCE(308);
      if (lookahead == '/') ADVANCE(387);
      if (lookahead == '<') ADVANCE(393);
      if (lookahead == '=') ADVANCE(385);
      if (lookahead == '>') ADVANCE(391);
      if (lookahead == '?') ADVANCE(6);
      if (lookahead == 'A') ADVANCE(42);
      if (lookahead == 'D') ADVANCE(34);
      if (lookahead == 'E') ADVANCE(119);
      if (lookahead == 'F') ADVANCE(55);
      if (lookahead == 'G') ADVANCE(99);
      if (lookahead == 'I') ADVANCE(81);
      if (lookahead == 'J') ADVANCE(89);
      if (lookahead == 'L') ADVANCE(24);
      if (lookahead == 'O') ADVANCE(92);
      if (lookahead == 'R') ADVANCE(53);
      if (lookahead == 'S') ADVANCE(37);
      if (lookahead == 'T') ADVANCE(8);
      if (lookahead == 'W') ADVANCE(56);
      if (lookahead == '[') ADVANCE(290);
      if (lookahead == ']') ADVANCE(292);
      if (lookahead == 'a') ADVANCE(156);
      if (lookahead == 'd') ADVANCE(148);
      if (lookahead == 'e') ADVANCE(233);
      if (lookahead == 'f') ADVANCE(169);
      if (lookahead == 'g') ADVANCE(213);
      if (lookahead == 'i') ADVANCE(195);
      if (lookahead == 'j') ADVANCE(203);
      if (lookahead == 'l') ADVANCE(138);
      if (lookahead == 'o') ADVANCE(206);
      if (lookahead == 'r') ADVANCE(167);
      if (lookahead == 's') ADVANCE(151);
      if (lookahead == 't') ADVANCE(122);
      if (lookahead == 'w') ADVANCE(170);
      if (lookahead == '|') ADVANCE(388);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(242)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(306);
      END_STATE();
    case 240:
      if (eof) ADVANCE(244);
      if (lookahead == '!') ADVANCE(5);
      if (lookahead == '#') ADVANCE(396);
      if (lookahead == '(') ADVANCE(293);
      if (lookahead == ')') ADVANCE(294);
      if (lookahead == '*') ADVANCE(386);
      if (lookahead == '+') ADVANCE(296);
      if (lookahead == ',') ADVANCE(291);
      if (lookahead == '-') ADVANCE(295);
      if (lookahead == '.') ADVANCE(307);
      if (lookahead == '/') ADVANCE(387);
      if (lookahead == '<') ADVANCE(393);
      if (lookahead == '=') ADVANCE(385);
      if (lookahead == '>') ADVANCE(391);
      if (lookahead == '?') ADVANCE(6);
      if (lookahead == 'A') ADVANCE(42);
      if (lookahead == 'D') ADVANCE(34);
      if (lookahead == 'E') ADVANCE(119);
      if (lookahead == 'F') ADVANCE(54);
      if (lookahead == 'G') ADVANCE(99);
      if (lookahead == 'J') ADVANCE(89);
      if (lookahead == 'O') ADVANCE(92);
      if (lookahead == 'R') ADVANCE(85);
      if (lookahead == 'S') ADVANCE(37);
      if (lookahead == 'T') ADVANCE(8);
      if (lookahead == 'W') ADVANCE(56);
      if (lookahead == '[') ADVANCE(290);
      if (lookahead == ']') ADVANCE(292);
      if (lookahead == 'a') ADVANCE(156);
      if (lookahead == 'd') ADVANCE(148);
      if (lookahead == 'e') ADVANCE(233);
      if (lookahead == 'f') ADVANCE(168);
      if (lookahead == 'g') ADVANCE(213);
      if (lookahead == 'j') ADVANCE(203);
      if (lookahead == 'o') ADVANCE(206);
      if (lookahead == 'r') ADVANCE(199);
      if (lookahead == 's') ADVANCE(151);
      if (lookahead == 't') ADVANCE(122);
      if (lookahead == 'w') ADVANCE(170);
      if (lookahead == '|') ADVANCE(388);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(243)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(306);
      END_STATE();
    case 241:
      if (eof) ADVANCE(244);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(241)
      if (lookahead == '!') ADVANCE(402);
      if (lookahead == '"') ADVANCE(298);
      if (lookahead == '#') ADVANCE(396);
      if (lookahead == '\'') ADVANCE(302);
      if (lookahead == '(') ADVANCE(293);
      if (lookahead == ')') ADVANCE(294);
      if (lookahead == '*') ADVANCE(386);
      if (lookahead == '+') ADVANCE(296);
      if (lookahead == ',') ADVANCE(291);
      if (lookahead == '-') ADVANCE(295);
      if (lookahead == '.') ADVANCE(308);
      if (lookahead == '/') ADVANCE(387);
      if (lookahead == ':') ADVANCE(297);
      if (lookahead == '<') ADVANCE(393);
      if (lookahead == '=') ADVANCE(385);
      if (lookahead == '>') ADVANCE(391);
      if (lookahead == '?') ADVANCE(6);
      if (lookahead == 'A') ADVANCE(43);
      if (lookahead == 'C') ADVANCE(84);
      if (lookahead == 'D') ADVANCE(34);
      if (lookahead == 'E') ADVANCE(119);
      if (lookahead == 'F') ADVANCE(7);
      if (lookahead == 'G') ADVANCE(99);
      if (lookahead == 'I') ADVANCE(73);
      if (lookahead == 'J') ADVANCE(89);
      if (lookahead == 'L') ADVANCE(24);
      if (lookahead == 'M') ADVANCE(10);
      if (lookahead == 'O') ADVANCE(92);
      if (lookahead == 'R') ADVANCE(53);
      if (lookahead == 'S') ADVANCE(36);
      if (lookahead == 'T') ADVANCE(9);
      if (lookahead == 'W') ADVANCE(56);
      if (lookahead == '[') ADVANCE(290);
      if (lookahead == ']') ADVANCE(292);
      if (lookahead == 'a') ADVANCE(157);
      if (lookahead == 'c') ADVANCE(198);
      if (lookahead == 'd') ADVANCE(148);
      if (lookahead == 'e') ADVANCE(233);
      if (lookahead == 'f') ADVANCE(121);
      if (lookahead == 'g') ADVANCE(213);
      if (lookahead == 'i') ADVANCE(187);
      if (lookahead == 'j') ADVANCE(203);
      if (lookahead == 'l') ADVANCE(138);
      if (lookahead == 'm') ADVANCE(124);
      if (lookahead == 'o') ADVANCE(206);
      if (lookahead == 'r') ADVANCE(167);
      if (lookahead == 's') ADVANCE(150);
      if (lookahead == 't') ADVANCE(123);
      if (lookahead == 'w') ADVANCE(170);
      if (lookahead == '|') ADVANCE(388);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(306);
      END_STATE();
    case 242:
      if (eof) ADVANCE(244);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(242)
      if (lookahead == '!') ADVANCE(5);
      if (lookahead == '#') ADVANCE(396);
      if (lookahead == '(') ADVANCE(293);
      if (lookahead == ')') ADVANCE(294);
      if (lookahead == '*') ADVANCE(386);
      if (lookahead == '+') ADVANCE(296);
      if (lookahead == ',') ADVANCE(291);
      if (lookahead == '-') ADVANCE(295);
      if (lookahead == '.') ADVANCE(308);
      if (lookahead == '/') ADVANCE(387);
      if (lookahead == '<') ADVANCE(393);
      if (lookahead == '=') ADVANCE(385);
      if (lookahead == '>') ADVANCE(391);
      if (lookahead == '?') ADVANCE(6);
      if (lookahead == 'A') ADVANCE(42);
      if (lookahead == 'D') ADVANCE(34);
      if (lookahead == 'E') ADVANCE(119);
      if (lookahead == 'F') ADVANCE(55);
      if (lookahead == 'G') ADVANCE(99);
      if (lookahead == 'I') ADVANCE(81);
      if (lookahead == 'J') ADVANCE(89);
      if (lookahead == 'L') ADVANCE(24);
      if (lookahead == 'O') ADVANCE(92);
      if (lookahead == 'R') ADVANCE(53);
      if (lookahead == 'S') ADVANCE(37);
      if (lookahead == 'T') ADVANCE(8);
      if (lookahead == 'W') ADVANCE(56);
      if (lookahead == '[') ADVANCE(290);
      if (lookahead == ']') ADVANCE(292);
      if (lookahead == 'a') ADVANCE(156);
      if (lookahead == 'd') ADVANCE(148);
      if (lookahead == 'e') ADVANCE(233);
      if (lookahead == 'f') ADVANCE(169);
      if (lookahead == 'g') ADVANCE(213);
      if (lookahead == 'i') ADVANCE(195);
      if (lookahead == 'j') ADVANCE(203);
      if (lookahead == 'l') ADVANCE(138);
      if (lookahead == 'o') ADVANCE(206);
      if (lookahead == 'r') ADVANCE(167);
      if (lookahead == 's') ADVANCE(151);
      if (lookahead == 't') ADVANCE(122);
      if (lookahead == 'w') ADVANCE(170);
      if (lookahead == '|') ADVANCE(388);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(306);
      END_STATE();
    case 243:
      if (eof) ADVANCE(244);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(243)
      if (lookahead == '!') ADVANCE(5);
      if (lookahead == '#') ADVANCE(396);
      if (lookahead == '(') ADVANCE(293);
      if (lookahead == ')') ADVANCE(294);
      if (lookahead == '*') ADVANCE(386);
      if (lookahead == '+') ADVANCE(296);
      if (lookahead == ',') ADVANCE(291);
      if (lookahead == '-') ADVANCE(295);
      if (lookahead == '.') ADVANCE(307);
      if (lookahead == '/') ADVANCE(387);
      if (lookahead == '<') ADVANCE(393);
      if (lookahead == '=') ADVANCE(385);
      if (lookahead == '>') ADVANCE(391);
      if (lookahead == '?') ADVANCE(6);
      if (lookahead == 'A') ADVANCE(42);
      if (lookahead == 'D') ADVANCE(34);
      if (lookahead == 'E') ADVANCE(119);
      if (lookahead == 'F') ADVANCE(54);
      if (lookahead == 'G') ADVANCE(99);
      if (lookahead == 'J') ADVANCE(89);
      if (lookahead == 'O') ADVANCE(92);
      if (lookahead == 'R') ADVANCE(85);
      if (lookahead == 'S') ADVANCE(37);
      if (lookahead == 'T') ADVANCE(8);
      if (lookahead == 'W') ADVANCE(56);
      if (lookahead == '[') ADVANCE(290);
      if (lookahead == ']') ADVANCE(292);
      if (lookahead == 'a') ADVANCE(156);
      if (lookahead == 'd') ADVANCE(148);
      if (lookahead == 'e') ADVANCE(233);
      if (lookahead == 'f') ADVANCE(168);
      if (lookahead == 'g') ADVANCE(213);
      if (lookahead == 'j') ADVANCE(203);
      if (lookahead == 'o') ADVANCE(206);
      if (lookahead == 'r') ADVANCE(199);
      if (lookahead == 's') ADVANCE(151);
      if (lookahead == 't') ADVANCE(122);
      if (lookahead == 'w') ADVANCE(170);
      if (lookahead == '|') ADVANCE(388);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(306);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(sym_keyword_from);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(sym_keyword_filter);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(sym_keyword_derive);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(sym_keyword_group);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(sym_keyword_aggregate);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(sym_keyword_sort);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(sym_keyword_take);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(sym_keyword_window);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(sym_keyword_join);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(sym_keyword_select);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(sym_keyword_true);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(sym_keyword_true);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(383);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(sym_keyword_false);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(sym_keyword_false);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(383);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(sym_keyword_switch);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(sym_keyword_average);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(sym_keyword_average);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(383);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(sym_keyword_min);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(sym_keyword_min);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(383);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(sym_keyword_max);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(sym_keyword_max);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(383);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(sym_keyword_count);
      if (lookahead == '_') ADVANCE(313);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(383);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(sym_keyword_count);
      if (lookahead == '_') ADVANCE(350);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(383);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(sym_keyword_count);
      if (lookahead == '_') ADVANCE(20);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(sym_keyword_count);
      if (lookahead == '_') ADVANCE(134);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(sym_keyword_stddev);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(sym_keyword_stddev);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(383);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(sym_keyword_avg);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(sym_keyword_avg);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(383);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(sym_keyword_sum);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(sym_keyword_sum);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(383);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(sym_keyword_count_distinct);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(sym_keyword_count_distinct);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(383);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(sym_keyword_side);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(sym_keyword_inner);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(sym_keyword_left);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(sym_keyword_right);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(sym_keyword_full);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(sym_keyword_and);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(sym_keyword_or);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(sym_keyword_in);
      if (lookahead == 'N') ADVANCE(39);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(sym_keyword_in);
      if (lookahead == 'n') ADVANCE(153);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(sym_keyword_rolling);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(sym_keyword_rows);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(sym_keyword_expanding);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(aux_sym__double_quote_string_token1);
      if (lookahead == '#') ADVANCE(398);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(300);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(301);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(aux_sym__double_quote_string_token1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(300);
      if (lookahead == '#') ADVANCE(398);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(301);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(aux_sym__double_quote_string_token1);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(301);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(aux_sym__literal_string_token1);
      if (lookahead == '#') ADVANCE(399);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(304);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(305);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(aux_sym__literal_string_token1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(304);
      if (lookahead == '#') ADVANCE(399);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(305);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(aux_sym__literal_string_token1);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(305);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(sym__number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(306);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(anon_sym_DOT);
      if (lookahead == '.') ADVANCE(384);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'A') ADVANCE(325);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(383);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'A') ADVANCE(345);
      if (lookahead == 'I') ADVANCE(327);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(383);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'A') ADVANCE(322);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(383);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'C') ADVANCE(337);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(383);
      END_STATE();
    case 313:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'D') ADVANCE(323);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(383);
      END_STATE();
    case 314:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'D') ADVANCE(315);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(383);
      END_STATE();
    case 315:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'D') ADVANCE(319);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(383);
      END_STATE();
    case 316:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E') ADVANCE(256);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(383);
      END_STATE();
    case 317:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E') ADVANCE(258);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(383);
      END_STATE();
    case 318:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E') ADVANCE(261);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(383);
      END_STATE();
    case 319:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E') ADVANCE(343);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(383);
      END_STATE();
    case 320:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E') ADVANCE(331);
      if (lookahead == 'G') ADVANCE(273);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(383);
      END_STATE();
    case 321:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E') ADVANCE(331);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(383);
      END_STATE();
    case 322:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'G') ADVANCE(318);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(383);
      END_STATE();
    case 323:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'I') ADVANCE(334);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(383);
      END_STATE();
    case 324:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'I') ADVANCE(329);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(383);
      END_STATE();
    case 325:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'L') ADVANCE(333);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(383);
      END_STATE();
    case 326:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'M') ADVANCE(275);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(383);
      END_STATE();
    case 327:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'N') ADVANCE(263);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(383);
      END_STATE();
    case 328:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'N') ADVANCE(336);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(383);
      END_STATE();
    case 329:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'N') ADVANCE(312);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(383);
      END_STATE();
    case 330:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'O') ADVANCE(341);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(383);
      END_STATE();
    case 331:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'R') ADVANCE(311);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(383);
      END_STATE();
    case 332:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'R') ADVANCE(340);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(383);
      END_STATE();
    case 333:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'S') ADVANCE(317);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(383);
      END_STATE();
    case 334:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'S') ADVANCE(338);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(383);
      END_STATE();
    case 335:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'T') ADVANCE(314);
      if (lookahead == 'U') ADVANCE(326);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(383);
      END_STATE();
    case 336:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'T') ADVANCE(266);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(383);
      END_STATE();
    case 337:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'T') ADVANCE(277);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(383);
      END_STATE();
    case 338:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'T') ADVANCE(324);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(383);
      END_STATE();
    case 339:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'U') ADVANCE(326);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(383);
      END_STATE();
    case 340:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'U') ADVANCE(316);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(383);
      END_STATE();
    case 341:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'U') ADVANCE(328);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(383);
      END_STATE();
    case 342:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'V') ADVANCE(320);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(383);
      END_STATE();
    case 343:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'V') ADVANCE(271);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(383);
      END_STATE();
    case 344:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'V') ADVANCE(321);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(383);
      END_STATE();
    case 345:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'X') ADVANCE(265);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(383);
      END_STATE();
    case 346:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(362);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(383);
      END_STATE();
    case 347:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(382);
      if (lookahead == 'i') ADVANCE(364);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(383);
      END_STATE();
    case 348:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(359);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(383);
      END_STATE();
    case 349:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(373);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(383);
      END_STATE();
    case 350:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(360);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(383);
      END_STATE();
    case 351:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(352);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(383);
      END_STATE();
    case 352:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(356);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(383);
      END_STATE();
    case 353:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(256);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(383);
      END_STATE();
    case 354:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(258);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(383);
      END_STATE();
    case 355:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(261);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(383);
      END_STATE();
    case 356:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(380);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(383);
      END_STATE();
    case 357:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(368);
      if (lookahead == 'g') ADVANCE(273);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(383);
      END_STATE();
    case 358:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(368);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(383);
      END_STATE();
    case 359:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'g') ADVANCE(355);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(383);
      END_STATE();
    case 360:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(371);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(383);
      END_STATE();
    case 361:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(366);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(383);
      END_STATE();
    case 362:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(370);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(383);
      END_STATE();
    case 363:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'm') ADVANCE(275);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(383);
      END_STATE();
    case 364:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(263);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(383);
      END_STATE();
    case 365:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(374);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(383);
      END_STATE();
    case 366:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(349);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(383);
      END_STATE();
    case 367:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(378);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(383);
      END_STATE();
    case 368:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(348);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(383);
      END_STATE();
    case 369:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(377);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(383);
      END_STATE();
    case 370:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(354);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(383);
      END_STATE();
    case 371:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(375);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(383);
      END_STATE();
    case 372:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(351);
      if (lookahead == 'u') ADVANCE(363);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(383);
      END_STATE();
    case 373:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(277);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(383);
      END_STATE();
    case 374:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(267);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(383);
      END_STATE();
    case 375:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(361);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(383);
      END_STATE();
    case 376:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(363);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(383);
      END_STATE();
    case 377:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(353);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(383);
      END_STATE();
    case 378:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(365);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(383);
      END_STATE();
    case 379:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'v') ADVANCE(357);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(383);
      END_STATE();
    case 380:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'v') ADVANCE(271);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(383);
      END_STATE();
    case 381:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'v') ADVANCE(358);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(383);
      END_STATE();
    case 382:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'x') ADVANCE(265);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(383);
      END_STATE();
    case 383:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(383);
      END_STATE();
    case 384:
      ACCEPT_TOKEN(anon_sym_DOT_DOT);
      END_STATE();
    case 385:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead == '=') ADVANCE(389);
      END_STATE();
    case 386:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 387:
      ACCEPT_TOKEN(anon_sym_SLASH);
      END_STATE();
    case 388:
      ACCEPT_TOKEN(anon_sym_PIPE);
      END_STATE();
    case 389:
      ACCEPT_TOKEN(anon_sym_EQ_EQ);
      END_STATE();
    case 390:
      ACCEPT_TOKEN(anon_sym_BANG_EQ);
      END_STATE();
    case 391:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '=') ADVANCE(392);
      END_STATE();
    case 392:
      ACCEPT_TOKEN(anon_sym_GT_EQ);
      END_STATE();
    case 393:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '=') ADVANCE(394);
      END_STATE();
    case 394:
      ACCEPT_TOKEN(anon_sym_LT_EQ);
      END_STATE();
    case 395:
      ACCEPT_TOKEN(anon_sym_QMARK_QMARK);
      END_STATE();
    case 396:
      ACCEPT_TOKEN(anon_sym_POUND);
      END_STATE();
    case 397:
      ACCEPT_TOKEN(anon_sym_POUND);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(401);
      END_STATE();
    case 398:
      ACCEPT_TOKEN(anon_sym_POUND);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(301);
      END_STATE();
    case 399:
      ACCEPT_TOKEN(anon_sym_POUND);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(305);
      END_STATE();
    case 400:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == '#') ADVANCE(397);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(400);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(401);
      END_STATE();
    case 401:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(401);
      END_STATE();
    case 402:
      ACCEPT_TOKEN(sym_bang);
      if (lookahead == '=') ADVANCE(390);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 239},
  [3] = {.lex_state = 239},
  [4] = {.lex_state = 239},
  [5] = {.lex_state = 240},
  [6] = {.lex_state = 239},
  [7] = {.lex_state = 239},
  [8] = {.lex_state = 240},
  [9] = {.lex_state = 239},
  [10] = {.lex_state = 239},
  [11] = {.lex_state = 239},
  [12] = {.lex_state = 239},
  [13] = {.lex_state = 240},
  [14] = {.lex_state = 239},
  [15] = {.lex_state = 240},
  [16] = {.lex_state = 239},
  [17] = {.lex_state = 239},
  [18] = {.lex_state = 239},
  [19] = {.lex_state = 239},
  [20] = {.lex_state = 239},
  [21] = {.lex_state = 239},
  [22] = {.lex_state = 240},
  [23] = {.lex_state = 239},
  [24] = {.lex_state = 239},
  [25] = {.lex_state = 239},
  [26] = {.lex_state = 239},
  [27] = {.lex_state = 2},
  [28] = {.lex_state = 2},
  [29] = {.lex_state = 2},
  [30] = {.lex_state = 239},
  [31] = {.lex_state = 2},
  [32] = {.lex_state = 239},
  [33] = {.lex_state = 1},
  [34] = {.lex_state = 1},
  [35] = {.lex_state = 1},
  [36] = {.lex_state = 1},
  [37] = {.lex_state = 1},
  [38] = {.lex_state = 0},
  [39] = {.lex_state = 1},
  [40] = {.lex_state = 1},
  [41] = {.lex_state = 1},
  [42] = {.lex_state = 239},
  [43] = {.lex_state = 1},
  [44] = {.lex_state = 1},
  [45] = {.lex_state = 1},
  [46] = {.lex_state = 1},
  [47] = {.lex_state = 1},
  [48] = {.lex_state = 0},
  [49] = {.lex_state = 0},
  [50] = {.lex_state = 1},
  [51] = {.lex_state = 1},
  [52] = {.lex_state = 1},
  [53] = {.lex_state = 1},
  [54] = {.lex_state = 1},
  [55] = {.lex_state = 1},
  [56] = {.lex_state = 1},
  [57] = {.lex_state = 1},
  [58] = {.lex_state = 1},
  [59] = {.lex_state = 1},
  [60] = {.lex_state = 239},
  [61] = {.lex_state = 1},
  [62] = {.lex_state = 1},
  [63] = {.lex_state = 1},
  [64] = {.lex_state = 239},
  [65] = {.lex_state = 1},
  [66] = {.lex_state = 3},
  [67] = {.lex_state = 1},
  [68] = {.lex_state = 239},
  [69] = {.lex_state = 239},
  [70] = {.lex_state = 239},
  [71] = {.lex_state = 1},
  [72] = {.lex_state = 1},
  [73] = {.lex_state = 1},
  [74] = {.lex_state = 1},
  [75] = {.lex_state = 1},
  [76] = {.lex_state = 239},
  [77] = {.lex_state = 1},
  [78] = {.lex_state = 1},
  [79] = {.lex_state = 1},
  [80] = {.lex_state = 239},
  [81] = {.lex_state = 1},
  [82] = {.lex_state = 1},
  [83] = {.lex_state = 239},
  [84] = {.lex_state = 239},
  [85] = {.lex_state = 1},
  [86] = {.lex_state = 1},
  [87] = {.lex_state = 1},
  [88] = {.lex_state = 239},
  [89] = {.lex_state = 1},
  [90] = {.lex_state = 1},
  [91] = {.lex_state = 239},
  [92] = {.lex_state = 239},
  [93] = {.lex_state = 1},
  [94] = {.lex_state = 1},
  [95] = {.lex_state = 1},
  [96] = {.lex_state = 1},
  [97] = {.lex_state = 0},
  [98] = {.lex_state = 1},
  [99] = {.lex_state = 1},
  [100] = {.lex_state = 1},
  [101] = {.lex_state = 239},
  [102] = {.lex_state = 239},
  [103] = {.lex_state = 239},
  [104] = {.lex_state = 239},
  [105] = {.lex_state = 239},
  [106] = {.lex_state = 239},
  [107] = {.lex_state = 239},
  [108] = {.lex_state = 239},
  [109] = {.lex_state = 239},
  [110] = {.lex_state = 239},
  [111] = {.lex_state = 0},
  [112] = {.lex_state = 0},
  [113] = {.lex_state = 0},
  [114] = {.lex_state = 0},
  [115] = {.lex_state = 0},
  [116] = {.lex_state = 0},
  [117] = {.lex_state = 0},
  [118] = {.lex_state = 0},
  [119] = {.lex_state = 0},
  [120] = {.lex_state = 0},
  [121] = {.lex_state = 0},
  [122] = {.lex_state = 0},
  [123] = {.lex_state = 0},
  [124] = {.lex_state = 0},
  [125] = {.lex_state = 0},
  [126] = {.lex_state = 0},
  [127] = {.lex_state = 0},
  [128] = {.lex_state = 0},
  [129] = {.lex_state = 0},
  [130] = {.lex_state = 0},
  [131] = {.lex_state = 0},
  [132] = {.lex_state = 0},
  [133] = {.lex_state = 0},
  [134] = {.lex_state = 0},
  [135] = {.lex_state = 0},
  [136] = {.lex_state = 0},
  [137] = {.lex_state = 0},
  [138] = {.lex_state = 0},
  [139] = {.lex_state = 0},
  [140] = {.lex_state = 0},
  [141] = {.lex_state = 0},
  [142] = {.lex_state = 0},
  [143] = {.lex_state = 0},
  [144] = {.lex_state = 0},
  [145] = {.lex_state = 0},
  [146] = {.lex_state = 0},
  [147] = {.lex_state = 0},
  [148] = {.lex_state = 0},
  [149] = {.lex_state = 0},
  [150] = {.lex_state = 0},
  [151] = {.lex_state = 0},
  [152] = {.lex_state = 0},
  [153] = {.lex_state = 0},
  [154] = {.lex_state = 0},
  [155] = {.lex_state = 0},
  [156] = {.lex_state = 0},
  [157] = {.lex_state = 0},
  [158] = {.lex_state = 0},
  [159] = {.lex_state = 1},
  [160] = {.lex_state = 1},
  [161] = {.lex_state = 4},
  [162] = {.lex_state = 0},
  [163] = {.lex_state = 0},
  [164] = {.lex_state = 0},
  [165] = {.lex_state = 0},
  [166] = {.lex_state = 0},
  [167] = {.lex_state = 0},
  [168] = {.lex_state = 0},
  [169] = {.lex_state = 239},
  [170] = {.lex_state = 0},
  [171] = {.lex_state = 0},
  [172] = {.lex_state = 0},
  [173] = {.lex_state = 0},
  [174] = {.lex_state = 0},
  [175] = {.lex_state = 0},
  [176] = {.lex_state = 0},
  [177] = {.lex_state = 0},
  [178] = {.lex_state = 0},
  [179] = {.lex_state = 0},
  [180] = {.lex_state = 0},
  [181] = {.lex_state = 0},
  [182] = {.lex_state = 0},
  [183] = {.lex_state = 0},
  [184] = {.lex_state = 0},
  [185] = {.lex_state = 0},
  [186] = {.lex_state = 0},
  [187] = {.lex_state = 0},
  [188] = {.lex_state = 0},
  [189] = {.lex_state = 0},
  [190] = {.lex_state = 0},
  [191] = {.lex_state = 0},
  [192] = {.lex_state = 0},
  [193] = {.lex_state = 240},
  [194] = {.lex_state = 0},
  [195] = {.lex_state = 0},
  [196] = {.lex_state = 0},
  [197] = {.lex_state = 0},
  [198] = {.lex_state = 0},
  [199] = {.lex_state = 0},
  [200] = {.lex_state = 0},
  [201] = {.lex_state = 0},
  [202] = {.lex_state = 0},
  [203] = {.lex_state = 0},
  [204] = {.lex_state = 0},
  [205] = {.lex_state = 4},
  [206] = {.lex_state = 240},
  [207] = {.lex_state = 0},
  [208] = {.lex_state = 0},
  [209] = {.lex_state = 0},
  [210] = {.lex_state = 0},
  [211] = {.lex_state = 0},
  [212] = {.lex_state = 240},
  [213] = {.lex_state = 400},
  [214] = {.lex_state = 0},
  [215] = {.lex_state = 0},
  [216] = {.lex_state = 0},
  [217] = {.lex_state = 0},
  [218] = {.lex_state = 0},
  [219] = {.lex_state = 240},
  [220] = {.lex_state = 0},
  [221] = {.lex_state = 0},
  [222] = {.lex_state = 303},
  [223] = {.lex_state = 299},
  [224] = {.lex_state = 0},
  [225] = {.lex_state = 299},
  [226] = {.lex_state = 0},
  [227] = {.lex_state = 0},
  [228] = {.lex_state = 0},
  [229] = {.lex_state = 0},
  [230] = {(TSStateId)(-1)},
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
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_DASH] = ACTIONS(1),
    [anon_sym_PLUS] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [anon_sym_SQUOTE] = ACTIONS(1),
    [sym__number] = ACTIONS(1),
    [anon_sym_DOT] = ACTIONS(1),
    [anon_sym_DOT_DOT] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_STAR] = ACTIONS(1),
    [anon_sym_SLASH] = ACTIONS(1),
    [anon_sym_PIPE] = ACTIONS(1),
    [anon_sym_EQ_EQ] = ACTIONS(1),
    [anon_sym_BANG_EQ] = ACTIONS(1),
    [anon_sym_GT] = ACTIONS(1),
    [anon_sym_GT_EQ] = ACTIONS(1),
    [anon_sym_LT] = ACTIONS(1),
    [anon_sym_LT_EQ] = ACTIONS(1),
    [anon_sym_QMARK_QMARK] = ACTIONS(1),
    [anon_sym_POUND] = ACTIONS(3),
    [sym_bang] = ACTIONS(1),
  },
  [1] = {
    [sym_program] = STATE(228),
    [sym_pipeline] = STATE(191),
    [sym_from] = STATE(38),
    [sym_comment] = STATE(1),
    [aux_sym_program_repeat1] = STATE(168),
    [ts_builtin_sym_end] = ACTIONS(5),
    [sym_keyword_from] = ACTIONS(7),
    [anon_sym_POUND] = ACTIONS(3),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(11), 1,
      sym__number,
    STATE(2), 1,
      sym_comment,
    ACTIONS(13), 3,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(9), 32,
      ts_builtin_sym_end,
      sym_keyword_from,
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
      anon_sym_LBRACK,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_DOT_DOT,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PIPE,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_QMARK_QMARK,
  [49] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(17), 1,
      sym__number,
    STATE(3), 1,
      sym_comment,
    ACTIONS(19), 3,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(15), 32,
      ts_builtin_sym_end,
      sym_keyword_from,
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
      anon_sym_LBRACK,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_DOT_DOT,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PIPE,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_QMARK_QMARK,
  [98] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(4), 1,
      sym_comment,
    ACTIONS(23), 3,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(21), 32,
      ts_builtin_sym_end,
      sym_keyword_from,
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
      anon_sym_LBRACK,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_DOT_DOT,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PIPE,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_QMARK_QMARK,
  [144] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(27), 1,
      anon_sym_DOT,
    STATE(5), 1,
      sym_comment,
    ACTIONS(29), 3,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(25), 31,
      ts_builtin_sym_end,
      sym_keyword_from,
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
      anon_sym_LBRACK,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PIPE,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_QMARK_QMARK,
  [192] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(6), 1,
      sym_comment,
    ACTIONS(13), 3,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(9), 32,
      ts_builtin_sym_end,
      sym_keyword_from,
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
      anon_sym_LBRACK,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_DOT_DOT,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PIPE,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_QMARK_QMARK,
  [238] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(7), 1,
      sym_comment,
    ACTIONS(19), 3,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(15), 32,
      ts_builtin_sym_end,
      sym_keyword_from,
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
      anon_sym_LBRACK,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_DOT_DOT,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PIPE,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_QMARK_QMARK,
  [284] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(8), 1,
      sym_comment,
    ACTIONS(33), 3,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(31), 32,
      ts_builtin_sym_end,
      sym_keyword_from,
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
      anon_sym_LBRACK,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_DOT,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PIPE,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_QMARK_QMARK,
  [330] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(9), 1,
      sym_comment,
    ACTIONS(37), 3,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(35), 32,
      ts_builtin_sym_end,
      sym_keyword_from,
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
      anon_sym_LBRACK,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_DOT_DOT,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PIPE,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_QMARK_QMARK,
  [376] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(10), 1,
      sym_comment,
    ACTIONS(41), 3,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(39), 32,
      ts_builtin_sym_end,
      sym_keyword_from,
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
      anon_sym_LBRACK,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_DOT_DOT,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PIPE,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_QMARK_QMARK,
  [422] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(11), 1,
      sym_comment,
    ACTIONS(45), 3,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(43), 32,
      ts_builtin_sym_end,
      sym_keyword_from,
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
      anon_sym_LBRACK,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_DOT_DOT,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PIPE,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_QMARK_QMARK,
  [468] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(12), 1,
      sym_comment,
    ACTIONS(49), 3,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(47), 32,
      ts_builtin_sym_end,
      sym_keyword_from,
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
      anon_sym_LBRACK,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_DOT_DOT,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PIPE,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_QMARK_QMARK,
  [514] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(51), 1,
      anon_sym_DOT,
    STATE(13), 1,
      sym_comment,
    ACTIONS(37), 3,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(35), 31,
      ts_builtin_sym_end,
      sym_keyword_from,
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
      anon_sym_LBRACK,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PIPE,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_QMARK_QMARK,
  [562] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(14), 1,
      sym_comment,
    ACTIONS(55), 3,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(53), 32,
      ts_builtin_sym_end,
      sym_keyword_from,
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
      anon_sym_LBRACK,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_DOT_DOT,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PIPE,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_QMARK_QMARK,
  [608] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(59), 1,
      anon_sym_DOT,
    STATE(15), 1,
      sym_comment,
    ACTIONS(61), 3,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(57), 31,
      ts_builtin_sym_end,
      sym_keyword_from,
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
      anon_sym_LBRACK,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PIPE,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_QMARK_QMARK,
  [656] = 9,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(49), 1,
      anon_sym_EQ,
    ACTIONS(67), 1,
      anon_sym_PIPE,
    STATE(16), 1,
      sym_comment,
    ACTIONS(63), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(65), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(71), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(69), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(47), 22,
      ts_builtin_sym_end,
      sym_keyword_from,
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
      anon_sym_LBRACK,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_QMARK_QMARK,
  [711] = 11,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(49), 1,
      anon_sym_EQ,
    ACTIONS(67), 1,
      anon_sym_PIPE,
    ACTIONS(73), 1,
      sym_keyword_and,
    ACTIONS(75), 1,
      anon_sym_QMARK_QMARK,
    STATE(17), 1,
      sym_comment,
    ACTIONS(63), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(65), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(71), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(69), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(47), 20,
      ts_builtin_sym_end,
      sym_keyword_from,
      sym_keyword_filter,
      sym_keyword_derive,
      sym_keyword_group,
      sym_keyword_aggregate,
      sym_keyword_sort,
      sym_keyword_take,
      sym_keyword_window,
      sym_keyword_join,
      sym_keyword_select,
      sym_keyword_or,
      sym_keyword_rolling,
      sym_keyword_rows,
      sym_keyword_expanding,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [770] = 7,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(67), 1,
      anon_sym_PIPE,
    STATE(18), 1,
      sym_comment,
    ACTIONS(63), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(65), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(49), 3,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(47), 26,
      ts_builtin_sym_end,
      sym_keyword_from,
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
      anon_sym_LBRACK,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_QMARK_QMARK,
  [821] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(19), 1,
      sym_comment,
    ACTIONS(63), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(65), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(49), 3,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(47), 27,
      ts_builtin_sym_end,
      sym_keyword_from,
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
      anon_sym_LBRACK,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_PIPE,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_QMARK_QMARK,
  [870] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(20), 1,
      sym_comment,
    ACTIONS(63), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(49), 3,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(47), 29,
      ts_builtin_sym_end,
      sym_keyword_from,
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
      anon_sym_LBRACK,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PIPE,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_QMARK_QMARK,
  [917] = 10,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(49), 1,
      anon_sym_EQ,
    ACTIONS(67), 1,
      anon_sym_PIPE,
    ACTIONS(75), 1,
      anon_sym_QMARK_QMARK,
    STATE(21), 1,
      sym_comment,
    ACTIONS(63), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(65), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(71), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(69), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(47), 21,
      ts_builtin_sym_end,
      sym_keyword_from,
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
      anon_sym_LBRACK,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [974] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(27), 1,
      anon_sym_DOT,
    STATE(22), 1,
      sym_comment,
    ACTIONS(29), 3,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(25), 28,
      ts_builtin_sym_end,
      sym_keyword_from,
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
      anon_sym_LBRACK,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PIPE,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_QMARK_QMARK,
  [1019] = 12,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(67), 1,
      anon_sym_PIPE,
    ACTIONS(73), 1,
      sym_keyword_and,
    ACTIONS(75), 1,
      anon_sym_QMARK_QMARK,
    ACTIONS(79), 1,
      sym_keyword_or,
    ACTIONS(81), 1,
      anon_sym_EQ,
    STATE(23), 1,
      sym_comment,
    ACTIONS(63), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(65), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(71), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(69), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(77), 16,
      ts_builtin_sym_end,
      sym_keyword_from,
      sym_keyword_filter,
      sym_keyword_derive,
      sym_keyword_group,
      sym_keyword_aggregate,
      sym_keyword_sort,
      sym_keyword_take,
      sym_keyword_window,
      sym_keyword_join,
      sym_keyword_select,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [1077] = 11,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(67), 1,
      anon_sym_PIPE,
    ACTIONS(73), 1,
      sym_keyword_and,
    ACTIONS(75), 1,
      anon_sym_QMARK_QMARK,
    ACTIONS(79), 1,
      sym_keyword_or,
    STATE(24), 1,
      sym_comment,
    ACTIONS(63), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(65), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(71), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(69), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(83), 16,
      ts_builtin_sym_end,
      sym_keyword_from,
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
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [1132] = 11,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(67), 1,
      anon_sym_PIPE,
    ACTIONS(73), 1,
      sym_keyword_and,
    ACTIONS(75), 1,
      anon_sym_QMARK_QMARK,
    ACTIONS(79), 1,
      sym_keyword_or,
    STATE(25), 1,
      sym_comment,
    ACTIONS(63), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(65), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(71), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(69), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(85), 16,
      ts_builtin_sym_end,
      sym_keyword_from,
      sym_keyword_filter,
      sym_keyword_derive,
      sym_keyword_group,
      sym_keyword_aggregate,
      sym_keyword_sort,
      sym_keyword_take,
      sym_keyword_window,
      sym_keyword_join,
      sym_keyword_select,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [1187] = 11,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(67), 1,
      anon_sym_PIPE,
    ACTIONS(73), 1,
      sym_keyword_and,
    ACTIONS(75), 1,
      anon_sym_QMARK_QMARK,
    ACTIONS(79), 1,
      sym_keyword_or,
    STATE(26), 1,
      sym_comment,
    ACTIONS(63), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(65), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(71), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(69), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(87), 16,
      ts_builtin_sym_end,
      sym_keyword_from,
      sym_keyword_filter,
      sym_keyword_derive,
      sym_keyword_group,
      sym_keyword_aggregate,
      sym_keyword_sort,
      sym_keyword_take,
      sym_keyword_window,
      sym_keyword_join,
      sym_keyword_select,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [1242] = 20,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(93), 1,
      sym_keyword_count,
    ACTIONS(95), 1,
      anon_sym_COMMA,
    ACTIONS(97), 1,
      anon_sym_RBRACK,
    ACTIONS(99), 1,
      anon_sym_DASH,
    ACTIONS(101), 1,
      anon_sym_DQUOTE,
    ACTIONS(103), 1,
      anon_sym_SQUOTE,
    ACTIONS(105), 1,
      sym__number,
    ACTIONS(107), 1,
      anon_sym_DOT,
    ACTIONS(109), 1,
      sym_identifier,
    STATE(5), 1,
      sym__double_quote_string,
    STATE(27), 1,
      sym_comment,
    STATE(60), 1,
      sym_binary_expression,
    STATE(109), 1,
      sym__expression,
    STATE(219), 1,
      sym__alias_identifier,
    ACTIONS(89), 2,
      sym_keyword_true,
      sym_keyword_false,
    STATE(4), 2,
      sym_literal,
      sym_field,
    STATE(9), 2,
      sym__literal_string,
      sym__decimal_number,
    STATE(188), 3,
      sym_aggregate_operation,
      sym__aggregate_count,
      sym_assignment,
    ACTIONS(91), 7,
      sym_keyword_average,
      sym_keyword_min,
      sym_keyword_max,
      sym_keyword_stddev,
      sym_keyword_avg,
      sym_keyword_sum,
      sym_keyword_count_distinct,
  [1314] = 19,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(93), 1,
      sym_keyword_count,
    ACTIONS(99), 1,
      anon_sym_DASH,
    ACTIONS(101), 1,
      anon_sym_DQUOTE,
    ACTIONS(103), 1,
      anon_sym_SQUOTE,
    ACTIONS(105), 1,
      sym__number,
    ACTIONS(107), 1,
      anon_sym_DOT,
    ACTIONS(109), 1,
      sym_identifier,
    ACTIONS(111), 1,
      anon_sym_RBRACK,
    STATE(5), 1,
      sym__double_quote_string,
    STATE(28), 1,
      sym_comment,
    STATE(70), 1,
      sym_binary_expression,
    STATE(109), 1,
      sym__expression,
    STATE(219), 1,
      sym__alias_identifier,
    ACTIONS(89), 2,
      sym_keyword_true,
      sym_keyword_false,
    STATE(4), 2,
      sym_literal,
      sym_field,
    STATE(9), 2,
      sym__literal_string,
      sym__decimal_number,
    STATE(192), 3,
      sym_aggregate_operation,
      sym__aggregate_count,
      sym_assignment,
    ACTIONS(91), 7,
      sym_keyword_average,
      sym_keyword_min,
      sym_keyword_max,
      sym_keyword_stddev,
      sym_keyword_avg,
      sym_keyword_sum,
      sym_keyword_count_distinct,
  [1383] = 19,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(93), 1,
      sym_keyword_count,
    ACTIONS(99), 1,
      anon_sym_DASH,
    ACTIONS(101), 1,
      anon_sym_DQUOTE,
    ACTIONS(103), 1,
      anon_sym_SQUOTE,
    ACTIONS(105), 1,
      sym__number,
    ACTIONS(107), 1,
      anon_sym_DOT,
    ACTIONS(109), 1,
      sym_identifier,
    ACTIONS(113), 1,
      anon_sym_RBRACK,
    STATE(5), 1,
      sym__double_quote_string,
    STATE(29), 1,
      sym_comment,
    STATE(70), 1,
      sym_binary_expression,
    STATE(109), 1,
      sym__expression,
    STATE(219), 1,
      sym__alias_identifier,
    ACTIONS(89), 2,
      sym_keyword_true,
      sym_keyword_false,
    STATE(4), 2,
      sym_literal,
      sym_field,
    STATE(9), 2,
      sym__literal_string,
      sym__decimal_number,
    STATE(192), 3,
      sym_aggregate_operation,
      sym__aggregate_count,
      sym_assignment,
    ACTIONS(91), 7,
      sym_keyword_average,
      sym_keyword_min,
      sym_keyword_max,
      sym_keyword_stddev,
      sym_keyword_avg,
      sym_keyword_sum,
      sym_keyword_count_distinct,
  [1452] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(117), 1,
      anon_sym_DOT,
    STATE(30), 1,
      sym_comment,
    ACTIONS(37), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(115), 12,
      ts_builtin_sym_end,
      sym_keyword_from,
      sym_keyword_filter,
      sym_keyword_derive,
      sym_keyword_group,
      sym_keyword_aggregate,
      sym_keyword_sort,
      sym_keyword_take,
      sym_keyword_window,
      sym_keyword_join,
      sym_keyword_select,
      anon_sym_RPAREN,
    ACTIONS(35), 13,
      sym_keyword_and,
      sym_keyword_or,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_DOT_DOT,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PIPE,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_QMARK_QMARK,
  [1495] = 18,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(93), 1,
      sym_keyword_count,
    ACTIONS(99), 1,
      anon_sym_DASH,
    ACTIONS(101), 1,
      anon_sym_DQUOTE,
    ACTIONS(103), 1,
      anon_sym_SQUOTE,
    ACTIONS(105), 1,
      sym__number,
    ACTIONS(107), 1,
      anon_sym_DOT,
    ACTIONS(109), 1,
      sym_identifier,
    STATE(5), 1,
      sym__double_quote_string,
    STATE(31), 1,
      sym_comment,
    STATE(70), 1,
      sym_binary_expression,
    STATE(109), 1,
      sym__expression,
    STATE(219), 1,
      sym__alias_identifier,
    ACTIONS(89), 2,
      sym_keyword_true,
      sym_keyword_false,
    STATE(4), 2,
      sym_literal,
      sym_field,
    STATE(9), 2,
      sym__literal_string,
      sym__decimal_number,
    STATE(192), 3,
      sym_aggregate_operation,
      sym__aggregate_count,
      sym_assignment,
    ACTIONS(91), 7,
      sym_keyword_average,
      sym_keyword_min,
      sym_keyword_max,
      sym_keyword_stddev,
      sym_keyword_avg,
      sym_keyword_sum,
      sym_keyword_count_distinct,
  [1561] = 11,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(67), 1,
      anon_sym_PIPE,
    ACTIONS(73), 1,
      sym_keyword_and,
    ACTIONS(75), 1,
      anon_sym_QMARK_QMARK,
    ACTIONS(79), 1,
      sym_keyword_or,
    STATE(32), 1,
      sym_comment,
    ACTIONS(63), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(65), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(71), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(69), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(119), 10,
      ts_builtin_sym_end,
      sym_keyword_from,
      sym_keyword_filter,
      sym_keyword_derive,
      sym_keyword_group,
      sym_keyword_aggregate,
      sym_keyword_sort,
      sym_keyword_take,
      sym_keyword_join,
      sym_keyword_select,
  [1610] = 20,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(101), 1,
      anon_sym_DQUOTE,
    ACTIONS(103), 1,
      anon_sym_SQUOTE,
    ACTIONS(105), 1,
      sym__number,
    ACTIONS(107), 1,
      anon_sym_DOT,
    ACTIONS(109), 1,
      sym_identifier,
    ACTIONS(121), 1,
      anon_sym_COMMA,
    ACTIONS(123), 1,
      anon_sym_RBRACK,
    ACTIONS(125), 1,
      anon_sym_DASH,
    ACTIONS(127), 1,
      anon_sym_PLUS,
    STATE(22), 1,
      sym__double_quote_string,
    STATE(23), 1,
      sym__expression,
    STATE(33), 1,
      sym_comment,
    STATE(59), 1,
      sym_direction,
    STATE(97), 1,
      sym_assignment,
    STATE(187), 1,
      sym_term,
    STATE(219), 1,
      sym__alias_identifier,
    ACTIONS(89), 2,
      sym_keyword_true,
      sym_keyword_false,
    STATE(9), 2,
      sym__literal_string,
      sym__decimal_number,
    STATE(4), 3,
      sym_literal,
      sym_field,
      sym_binary_expression,
  [1675] = 19,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(101), 1,
      anon_sym_DQUOTE,
    ACTIONS(103), 1,
      anon_sym_SQUOTE,
    ACTIONS(105), 1,
      sym__number,
    ACTIONS(107), 1,
      anon_sym_DOT,
    ACTIONS(109), 1,
      sym_identifier,
    ACTIONS(125), 1,
      anon_sym_DASH,
    ACTIONS(127), 1,
      anon_sym_PLUS,
    ACTIONS(129), 1,
      anon_sym_LBRACK,
    STATE(22), 1,
      sym__double_quote_string,
    STATE(23), 1,
      sym__expression,
    STATE(34), 1,
      sym_comment,
    STATE(58), 1,
      sym_direction,
    STATE(97), 1,
      sym_assignment,
    STATE(113), 1,
      sym_term,
    STATE(219), 1,
      sym__alias_identifier,
    ACTIONS(89), 2,
      sym_keyword_true,
      sym_keyword_false,
    STATE(9), 2,
      sym__literal_string,
      sym__decimal_number,
    STATE(4), 3,
      sym_literal,
      sym_field,
      sym_binary_expression,
  [1737] = 19,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(101), 1,
      anon_sym_DQUOTE,
    ACTIONS(103), 1,
      anon_sym_SQUOTE,
    ACTIONS(105), 1,
      sym__number,
    ACTIONS(107), 1,
      anon_sym_DOT,
    ACTIONS(109), 1,
      sym_identifier,
    ACTIONS(125), 1,
      anon_sym_DASH,
    ACTIONS(127), 1,
      anon_sym_PLUS,
    ACTIONS(131), 1,
      anon_sym_RBRACK,
    STATE(22), 1,
      sym__double_quote_string,
    STATE(23), 1,
      sym__expression,
    STATE(35), 1,
      sym_comment,
    STATE(62), 1,
      sym_direction,
    STATE(97), 1,
      sym_assignment,
    STATE(198), 1,
      sym_term,
    STATE(219), 1,
      sym__alias_identifier,
    ACTIONS(89), 2,
      sym_keyword_true,
      sym_keyword_false,
    STATE(9), 2,
      sym__literal_string,
      sym__decimal_number,
    STATE(4), 3,
      sym_literal,
      sym_field,
      sym_binary_expression,
  [1799] = 19,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(101), 1,
      anon_sym_DQUOTE,
    ACTIONS(103), 1,
      anon_sym_SQUOTE,
    ACTIONS(105), 1,
      sym__number,
    ACTIONS(107), 1,
      anon_sym_DOT,
    ACTIONS(109), 1,
      sym_identifier,
    ACTIONS(125), 1,
      anon_sym_DASH,
    ACTIONS(127), 1,
      anon_sym_PLUS,
    ACTIONS(133), 1,
      anon_sym_RBRACK,
    STATE(22), 1,
      sym__double_quote_string,
    STATE(23), 1,
      sym__expression,
    STATE(36), 1,
      sym_comment,
    STATE(62), 1,
      sym_direction,
    STATE(97), 1,
      sym_assignment,
    STATE(198), 1,
      sym_term,
    STATE(219), 1,
      sym__alias_identifier,
    ACTIONS(89), 2,
      sym_keyword_true,
      sym_keyword_false,
    STATE(9), 2,
      sym__literal_string,
      sym__decimal_number,
    STATE(4), 3,
      sym_literal,
      sym_field,
      sym_binary_expression,
  [1861] = 19,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(101), 1,
      anon_sym_DQUOTE,
    ACTIONS(103), 1,
      anon_sym_SQUOTE,
    ACTIONS(105), 1,
      sym__number,
    ACTIONS(107), 1,
      anon_sym_DOT,
    ACTIONS(109), 1,
      sym_identifier,
    ACTIONS(125), 1,
      anon_sym_DASH,
    ACTIONS(127), 1,
      anon_sym_PLUS,
    ACTIONS(135), 1,
      anon_sym_RBRACK,
    STATE(22), 1,
      sym__double_quote_string,
    STATE(23), 1,
      sym__expression,
    STATE(37), 1,
      sym_comment,
    STATE(62), 1,
      sym_direction,
    STATE(97), 1,
      sym_assignment,
    STATE(198), 1,
      sym_term,
    STATE(219), 1,
      sym__alias_identifier,
    ACTIONS(89), 2,
      sym_keyword_true,
      sym_keyword_false,
    STATE(9), 2,
      sym__literal_string,
      sym__decimal_number,
    STATE(4), 3,
      sym_literal,
      sym_field,
      sym_binary_expression,
  [1923] = 14,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(139), 1,
      sym_keyword_filter,
    ACTIONS(141), 1,
      sym_keyword_derive,
    ACTIONS(143), 1,
      sym_keyword_group,
    ACTIONS(145), 1,
      sym_keyword_aggregate,
    ACTIONS(147), 1,
      sym_keyword_sort,
    ACTIONS(149), 1,
      sym_keyword_take,
    ACTIONS(151), 1,
      sym_keyword_join,
    ACTIONS(153), 1,
      sym_keyword_select,
    STATE(38), 1,
      sym_comment,
    STATE(49), 1,
      aux_sym_transforms_repeat1,
    STATE(194), 1,
      sym_transforms,
    ACTIONS(137), 2,
      ts_builtin_sym_end,
      sym_keyword_from,
    STATE(148), 8,
      sym_derives,
      sym_filter,
      sym_aggregate,
      sym_sorts,
      sym_takes,
      sym_group,
      sym_joins,
      sym_select,
  [1974] = 18,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(99), 1,
      anon_sym_DASH,
    ACTIONS(101), 1,
      anon_sym_DQUOTE,
    ACTIONS(103), 1,
      anon_sym_SQUOTE,
    ACTIONS(105), 1,
      sym__number,
    ACTIONS(107), 1,
      anon_sym_DOT,
    ACTIONS(109), 1,
      sym_identifier,
    ACTIONS(155), 1,
      anon_sym_COMMA,
    ACTIONS(157), 1,
      anon_sym_RBRACK,
    STATE(22), 1,
      sym__double_quote_string,
    STATE(23), 1,
      sym__expression,
    STATE(39), 1,
      sym_comment,
    STATE(97), 1,
      sym_assignment,
    STATE(181), 1,
      sym_term,
    STATE(219), 1,
      sym__alias_identifier,
    ACTIONS(89), 2,
      sym_keyword_true,
      sym_keyword_false,
    STATE(9), 2,
      sym__literal_string,
      sym__decimal_number,
    STATE(4), 3,
      sym_literal,
      sym_field,
      sym_binary_expression,
  [2033] = 18,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(101), 1,
      anon_sym_DQUOTE,
    ACTIONS(103), 1,
      anon_sym_SQUOTE,
    ACTIONS(105), 1,
      sym__number,
    ACTIONS(107), 1,
      anon_sym_DOT,
    ACTIONS(109), 1,
      sym_identifier,
    ACTIONS(125), 1,
      anon_sym_DASH,
    ACTIONS(127), 1,
      anon_sym_PLUS,
    STATE(22), 1,
      sym__double_quote_string,
    STATE(23), 1,
      sym__expression,
    STATE(40), 1,
      sym_comment,
    STATE(62), 1,
      sym_direction,
    STATE(97), 1,
      sym_assignment,
    STATE(198), 1,
      sym_term,
    STATE(219), 1,
      sym__alias_identifier,
    ACTIONS(89), 2,
      sym_keyword_true,
      sym_keyword_false,
    STATE(9), 2,
      sym__literal_string,
      sym__decimal_number,
    STATE(4), 3,
      sym_literal,
      sym_field,
      sym_binary_expression,
  [2092] = 18,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(99), 1,
      anon_sym_DASH,
    ACTIONS(101), 1,
      anon_sym_DQUOTE,
    ACTIONS(103), 1,
      anon_sym_SQUOTE,
    ACTIONS(105), 1,
      sym__number,
    ACTIONS(107), 1,
      anon_sym_DOT,
    ACTIONS(109), 1,
      sym_identifier,
    ACTIONS(159), 1,
      anon_sym_COMMA,
    ACTIONS(161), 1,
      anon_sym_RBRACK,
    STATE(22), 1,
      sym__double_quote_string,
    STATE(23), 1,
      sym__expression,
    STATE(41), 1,
      sym_comment,
    STATE(97), 1,
      sym_assignment,
    STATE(180), 1,
      sym_term,
    STATE(219), 1,
      sym__alias_identifier,
    ACTIONS(89), 2,
      sym_keyword_true,
      sym_keyword_false,
    STATE(9), 2,
      sym__literal_string,
      sym__decimal_number,
    STATE(4), 3,
      sym_literal,
      sym_field,
      sym_binary_expression,
  [2151] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(117), 1,
      anon_sym_DOT,
    STATE(42), 1,
      sym_comment,
    ACTIONS(37), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(163), 4,
      sym_keyword_rolling,
      sym_keyword_rows,
      sym_keyword_expanding,
      anon_sym_LPAREN,
    ACTIONS(35), 13,
      sym_keyword_and,
      sym_keyword_or,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_DOT_DOT,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PIPE,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_QMARK_QMARK,
  [2186] = 19,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(99), 1,
      anon_sym_DASH,
    ACTIONS(101), 1,
      anon_sym_DQUOTE,
    ACTIONS(103), 1,
      anon_sym_SQUOTE,
    ACTIONS(105), 1,
      sym__number,
    ACTIONS(107), 1,
      anon_sym_DOT,
    ACTIONS(109), 1,
      sym_identifier,
    ACTIONS(165), 1,
      anon_sym_COMMA,
    ACTIONS(167), 1,
      anon_sym_RBRACK,
    STATE(22), 1,
      sym__double_quote_string,
    STATE(23), 1,
      sym__expression,
    STATE(43), 1,
      sym_comment,
    STATE(64), 1,
      sym_binary_expression,
    STATE(97), 1,
      sym_assignment,
    STATE(172), 1,
      sym_term,
    STATE(219), 1,
      sym__alias_identifier,
    ACTIONS(89), 2,
      sym_keyword_true,
      sym_keyword_false,
    STATE(4), 2,
      sym_literal,
      sym_field,
    STATE(9), 2,
      sym__literal_string,
      sym__decimal_number,
  [2247] = 18,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(99), 1,
      anon_sym_DASH,
    ACTIONS(101), 1,
      anon_sym_DQUOTE,
    ACTIONS(103), 1,
      anon_sym_SQUOTE,
    ACTIONS(105), 1,
      sym__number,
    ACTIONS(107), 1,
      anon_sym_DOT,
    ACTIONS(109), 1,
      sym_identifier,
    ACTIONS(169), 1,
      anon_sym_RBRACK,
    STATE(22), 1,
      sym__double_quote_string,
    STATE(23), 1,
      sym__expression,
    STATE(44), 1,
      sym_comment,
    STATE(69), 1,
      sym_binary_expression,
    STATE(97), 1,
      sym_assignment,
    STATE(197), 1,
      sym_term,
    STATE(219), 1,
      sym__alias_identifier,
    ACTIONS(89), 2,
      sym_keyword_true,
      sym_keyword_false,
    STATE(4), 2,
      sym_literal,
      sym_field,
    STATE(9), 2,
      sym__literal_string,
      sym__decimal_number,
  [2305] = 17,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(99), 1,
      anon_sym_DASH,
    ACTIONS(101), 1,
      anon_sym_DQUOTE,
    ACTIONS(103), 1,
      anon_sym_SQUOTE,
    ACTIONS(105), 1,
      sym__number,
    ACTIONS(107), 1,
      anon_sym_DOT,
    ACTIONS(109), 1,
      sym_identifier,
    ACTIONS(171), 1,
      anon_sym_RBRACK,
    STATE(22), 1,
      sym__double_quote_string,
    STATE(23), 1,
      sym__expression,
    STATE(45), 1,
      sym_comment,
    STATE(97), 1,
      sym_assignment,
    STATE(196), 1,
      sym_term,
    STATE(219), 1,
      sym__alias_identifier,
    ACTIONS(89), 2,
      sym_keyword_true,
      sym_keyword_false,
    STATE(9), 2,
      sym__literal_string,
      sym__decimal_number,
    STATE(4), 3,
      sym_literal,
      sym_field,
      sym_binary_expression,
  [2361] = 18,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(99), 1,
      anon_sym_DASH,
    ACTIONS(101), 1,
      anon_sym_DQUOTE,
    ACTIONS(103), 1,
      anon_sym_SQUOTE,
    ACTIONS(105), 1,
      sym__number,
    ACTIONS(107), 1,
      anon_sym_DOT,
    ACTIONS(109), 1,
      sym_identifier,
    ACTIONS(173), 1,
      anon_sym_RBRACK,
    STATE(22), 1,
      sym__double_quote_string,
    STATE(23), 1,
      sym__expression,
    STATE(46), 1,
      sym_comment,
    STATE(69), 1,
      sym_binary_expression,
    STATE(97), 1,
      sym_assignment,
    STATE(197), 1,
      sym_term,
    STATE(219), 1,
      sym__alias_identifier,
    ACTIONS(89), 2,
      sym_keyword_true,
      sym_keyword_false,
    STATE(4), 2,
      sym_literal,
      sym_field,
    STATE(9), 2,
      sym__literal_string,
      sym__decimal_number,
  [2419] = 17,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(99), 1,
      anon_sym_DASH,
    ACTIONS(101), 1,
      anon_sym_DQUOTE,
    ACTIONS(103), 1,
      anon_sym_SQUOTE,
    ACTIONS(105), 1,
      sym__number,
    ACTIONS(107), 1,
      anon_sym_DOT,
    ACTIONS(109), 1,
      sym_identifier,
    ACTIONS(175), 1,
      anon_sym_RBRACK,
    STATE(22), 1,
      sym__double_quote_string,
    STATE(23), 1,
      sym__expression,
    STATE(47), 1,
      sym_comment,
    STATE(97), 1,
      sym_assignment,
    STATE(196), 1,
      sym_term,
    STATE(219), 1,
      sym__alias_identifier,
    ACTIONS(89), 2,
      sym_keyword_true,
      sym_keyword_false,
    STATE(9), 2,
      sym__literal_string,
      sym__decimal_number,
    STATE(4), 3,
      sym_literal,
      sym_field,
      sym_binary_expression,
  [2475] = 12,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(179), 1,
      sym_keyword_filter,
    ACTIONS(182), 1,
      sym_keyword_derive,
    ACTIONS(185), 1,
      sym_keyword_group,
    ACTIONS(188), 1,
      sym_keyword_aggregate,
    ACTIONS(191), 1,
      sym_keyword_sort,
    ACTIONS(194), 1,
      sym_keyword_take,
    ACTIONS(197), 1,
      sym_keyword_join,
    ACTIONS(200), 1,
      sym_keyword_select,
    ACTIONS(177), 2,
      ts_builtin_sym_end,
      sym_keyword_from,
    STATE(48), 2,
      sym_comment,
      aux_sym_transforms_repeat1,
    STATE(148), 8,
      sym_derives,
      sym_filter,
      sym_aggregate,
      sym_sorts,
      sym_takes,
      sym_group,
      sym_joins,
      sym_select,
  [2521] = 13,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(139), 1,
      sym_keyword_filter,
    ACTIONS(141), 1,
      sym_keyword_derive,
    ACTIONS(143), 1,
      sym_keyword_group,
    ACTIONS(145), 1,
      sym_keyword_aggregate,
    ACTIONS(147), 1,
      sym_keyword_sort,
    ACTIONS(149), 1,
      sym_keyword_take,
    ACTIONS(151), 1,
      sym_keyword_join,
    ACTIONS(153), 1,
      sym_keyword_select,
    STATE(48), 1,
      aux_sym_transforms_repeat1,
    STATE(49), 1,
      sym_comment,
    ACTIONS(203), 2,
      ts_builtin_sym_end,
      sym_keyword_from,
    STATE(148), 8,
      sym_derives,
      sym_filter,
      sym_aggregate,
      sym_sorts,
      sym_takes,
      sym_group,
      sym_joins,
      sym_select,
  [2569] = 17,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(99), 1,
      anon_sym_DASH,
    ACTIONS(101), 1,
      anon_sym_DQUOTE,
    ACTIONS(103), 1,
      anon_sym_SQUOTE,
    ACTIONS(105), 1,
      sym__number,
    ACTIONS(107), 1,
      anon_sym_DOT,
    ACTIONS(109), 1,
      sym_identifier,
    ACTIONS(205), 1,
      anon_sym_RBRACK,
    STATE(22), 1,
      sym__double_quote_string,
    STATE(23), 1,
      sym__expression,
    STATE(50), 1,
      sym_comment,
    STATE(97), 1,
      sym_assignment,
    STATE(196), 1,
      sym_term,
    STATE(219), 1,
      sym__alias_identifier,
    ACTIONS(89), 2,
      sym_keyword_true,
      sym_keyword_false,
    STATE(9), 2,
      sym__literal_string,
      sym__decimal_number,
    STATE(4), 3,
      sym_literal,
      sym_field,
      sym_binary_expression,
  [2625] = 17,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(99), 1,
      anon_sym_DASH,
    ACTIONS(101), 1,
      anon_sym_DQUOTE,
    ACTIONS(103), 1,
      anon_sym_SQUOTE,
    ACTIONS(105), 1,
      sym__number,
    ACTIONS(107), 1,
      anon_sym_DOT,
    ACTIONS(109), 1,
      sym_identifier,
    ACTIONS(207), 1,
      anon_sym_LBRACK,
    STATE(22), 1,
      sym__double_quote_string,
    STATE(23), 1,
      sym__expression,
    STATE(51), 1,
      sym_comment,
    STATE(97), 1,
      sym_assignment,
    STATE(219), 1,
      sym__alias_identifier,
    STATE(224), 1,
      sym_term,
    ACTIONS(89), 2,
      sym_keyword_true,
      sym_keyword_false,
    STATE(9), 2,
      sym__literal_string,
      sym__decimal_number,
    STATE(4), 3,
      sym_literal,
      sym_field,
      sym_binary_expression,
  [2681] = 17,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(99), 1,
      anon_sym_DASH,
    ACTIONS(101), 1,
      anon_sym_DQUOTE,
    ACTIONS(103), 1,
      anon_sym_SQUOTE,
    ACTIONS(105), 1,
      sym__number,
    ACTIONS(107), 1,
      anon_sym_DOT,
    ACTIONS(109), 1,
      sym_identifier,
    ACTIONS(209), 1,
      anon_sym_LBRACK,
    STATE(22), 1,
      sym__double_quote_string,
    STATE(23), 1,
      sym__expression,
    STATE(52), 1,
      sym_comment,
    STATE(97), 1,
      sym_assignment,
    STATE(127), 1,
      sym_term,
    STATE(219), 1,
      sym__alias_identifier,
    ACTIONS(89), 2,
      sym_keyword_true,
      sym_keyword_false,
    STATE(9), 2,
      sym__literal_string,
      sym__decimal_number,
    STATE(4), 3,
      sym_literal,
      sym_field,
      sym_binary_expression,
  [2737] = 17,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(99), 1,
      anon_sym_DASH,
    ACTIONS(101), 1,
      anon_sym_DQUOTE,
    ACTIONS(103), 1,
      anon_sym_SQUOTE,
    ACTIONS(105), 1,
      sym__number,
    ACTIONS(107), 1,
      anon_sym_DOT,
    ACTIONS(109), 1,
      sym_identifier,
    ACTIONS(211), 1,
      anon_sym_RBRACK,
    STATE(22), 1,
      sym__double_quote_string,
    STATE(23), 1,
      sym__expression,
    STATE(53), 1,
      sym_comment,
    STATE(97), 1,
      sym_assignment,
    STATE(196), 1,
      sym_term,
    STATE(219), 1,
      sym__alias_identifier,
    ACTIONS(89), 2,
      sym_keyword_true,
      sym_keyword_false,
    STATE(9), 2,
      sym__literal_string,
      sym__decimal_number,
    STATE(4), 3,
      sym_literal,
      sym_field,
      sym_binary_expression,
  [2793] = 17,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(99), 1,
      anon_sym_DASH,
    ACTIONS(101), 1,
      anon_sym_DQUOTE,
    ACTIONS(103), 1,
      anon_sym_SQUOTE,
    ACTIONS(105), 1,
      sym__number,
    ACTIONS(107), 1,
      anon_sym_DOT,
    ACTIONS(109), 1,
      sym_identifier,
    STATE(22), 1,
      sym__double_quote_string,
    STATE(23), 1,
      sym__expression,
    STATE(54), 1,
      sym_comment,
    STATE(69), 1,
      sym_binary_expression,
    STATE(97), 1,
      sym_assignment,
    STATE(197), 1,
      sym_term,
    STATE(219), 1,
      sym__alias_identifier,
    ACTIONS(89), 2,
      sym_keyword_true,
      sym_keyword_false,
    STATE(4), 2,
      sym_literal,
      sym_field,
    STATE(9), 2,
      sym__literal_string,
      sym__decimal_number,
  [2848] = 16,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(99), 1,
      anon_sym_DASH,
    ACTIONS(101), 1,
      anon_sym_DQUOTE,
    ACTIONS(103), 1,
      anon_sym_SQUOTE,
    ACTIONS(105), 1,
      sym__number,
    ACTIONS(107), 1,
      anon_sym_DOT,
    ACTIONS(109), 1,
      sym_identifier,
    STATE(22), 1,
      sym__double_quote_string,
    STATE(23), 1,
      sym__expression,
    STATE(55), 1,
      sym_comment,
    STATE(97), 1,
      sym_assignment,
    STATE(131), 1,
      sym_term,
    STATE(219), 1,
      sym__alias_identifier,
    ACTIONS(89), 2,
      sym_keyword_true,
      sym_keyword_false,
    STATE(9), 2,
      sym__literal_string,
      sym__decimal_number,
    STATE(4), 3,
      sym_literal,
      sym_field,
      sym_binary_expression,
  [2901] = 16,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(99), 1,
      anon_sym_DASH,
    ACTIONS(101), 1,
      anon_sym_DQUOTE,
    ACTIONS(103), 1,
      anon_sym_SQUOTE,
    ACTIONS(105), 1,
      sym__number,
    ACTIONS(107), 1,
      anon_sym_DOT,
    ACTIONS(109), 1,
      sym_identifier,
    STATE(22), 1,
      sym__double_quote_string,
    STATE(23), 1,
      sym__expression,
    STATE(56), 1,
      sym_comment,
    STATE(97), 1,
      sym_assignment,
    STATE(111), 1,
      sym_term,
    STATE(219), 1,
      sym__alias_identifier,
    ACTIONS(89), 2,
      sym_keyword_true,
      sym_keyword_false,
    STATE(9), 2,
      sym__literal_string,
      sym__decimal_number,
    STATE(4), 3,
      sym_literal,
      sym_field,
      sym_binary_expression,
  [2954] = 17,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(99), 1,
      anon_sym_DASH,
    ACTIONS(101), 1,
      anon_sym_DQUOTE,
    ACTIONS(103), 1,
      anon_sym_SQUOTE,
    ACTIONS(105), 1,
      sym__number,
    ACTIONS(107), 1,
      anon_sym_DOT,
    ACTIONS(109), 1,
      sym_identifier,
    ACTIONS(213), 1,
      anon_sym_COMMA,
    ACTIONS(215), 1,
      anon_sym_RBRACK,
    STATE(5), 1,
      sym__double_quote_string,
    STATE(57), 1,
      sym_comment,
    STATE(68), 1,
      sym_binary_expression,
    STATE(110), 1,
      sym__expression,
    STATE(219), 1,
      sym__alias_identifier,
    ACTIONS(89), 2,
      sym_keyword_true,
      sym_keyword_false,
    STATE(4), 2,
      sym_literal,
      sym_field,
    STATE(9), 2,
      sym__literal_string,
      sym__decimal_number,
  [3009] = 16,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(99), 1,
      anon_sym_DASH,
    ACTIONS(101), 1,
      anon_sym_DQUOTE,
    ACTIONS(103), 1,
      anon_sym_SQUOTE,
    ACTIONS(105), 1,
      sym__number,
    ACTIONS(107), 1,
      anon_sym_DOT,
    ACTIONS(109), 1,
      sym_identifier,
    STATE(22), 1,
      sym__double_quote_string,
    STATE(23), 1,
      sym__expression,
    STATE(58), 1,
      sym_comment,
    STATE(97), 1,
      sym_assignment,
    STATE(112), 1,
      sym_term,
    STATE(219), 1,
      sym__alias_identifier,
    ACTIONS(89), 2,
      sym_keyword_true,
      sym_keyword_false,
    STATE(9), 2,
      sym__literal_string,
      sym__decimal_number,
    STATE(4), 3,
      sym_literal,
      sym_field,
      sym_binary_expression,
  [3062] = 16,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(99), 1,
      anon_sym_DASH,
    ACTIONS(101), 1,
      anon_sym_DQUOTE,
    ACTIONS(103), 1,
      anon_sym_SQUOTE,
    ACTIONS(105), 1,
      sym__number,
    ACTIONS(107), 1,
      anon_sym_DOT,
    ACTIONS(109), 1,
      sym_identifier,
    STATE(22), 1,
      sym__double_quote_string,
    STATE(23), 1,
      sym__expression,
    STATE(59), 1,
      sym_comment,
    STATE(97), 1,
      sym_assignment,
    STATE(173), 1,
      sym_term,
    STATE(219), 1,
      sym__alias_identifier,
    ACTIONS(89), 2,
      sym_keyword_true,
      sym_keyword_false,
    STATE(9), 2,
      sym__literal_string,
      sym__decimal_number,
    STATE(4), 3,
      sym_literal,
      sym_field,
      sym_binary_expression,
  [3115] = 7,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(217), 1,
      anon_sym_COMMA,
    ACTIONS(219), 1,
      anon_sym_RBRACK,
    STATE(60), 1,
      sym_comment,
    STATE(175), 1,
      aux_sym_aggregate_repeat1,
    ACTIONS(23), 3,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(21), 12,
      sym_keyword_and,
      sym_keyword_or,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PIPE,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_QMARK_QMARK,
  [3150] = 15,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(99), 1,
      anon_sym_DASH,
    ACTIONS(101), 1,
      anon_sym_DQUOTE,
    ACTIONS(103), 1,
      anon_sym_SQUOTE,
    ACTIONS(105), 1,
      sym__number,
    ACTIONS(107), 1,
      anon_sym_DOT,
    ACTIONS(109), 1,
      sym_identifier,
    STATE(5), 1,
      sym__double_quote_string,
    STATE(61), 1,
      sym_comment,
    STATE(76), 1,
      sym__expression,
    STATE(219), 1,
      sym__alias_identifier,
    ACTIONS(89), 2,
      sym_keyword_true,
      sym_keyword_false,
    ACTIONS(221), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
    STATE(9), 2,
      sym__literal_string,
      sym__decimal_number,
    STATE(4), 3,
      sym_literal,
      sym_field,
      sym_binary_expression,
  [3201] = 16,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(99), 1,
      anon_sym_DASH,
    ACTIONS(101), 1,
      anon_sym_DQUOTE,
    ACTIONS(103), 1,
      anon_sym_SQUOTE,
    ACTIONS(105), 1,
      sym__number,
    ACTIONS(107), 1,
      anon_sym_DOT,
    ACTIONS(109), 1,
      sym_identifier,
    STATE(22), 1,
      sym__double_quote_string,
    STATE(23), 1,
      sym__expression,
    STATE(62), 1,
      sym_comment,
    STATE(97), 1,
      sym_assignment,
    STATE(190), 1,
      sym_term,
    STATE(219), 1,
      sym__alias_identifier,
    ACTIONS(89), 2,
      sym_keyword_true,
      sym_keyword_false,
    STATE(9), 2,
      sym__literal_string,
      sym__decimal_number,
    STATE(4), 3,
      sym_literal,
      sym_field,
      sym_binary_expression,
  [3254] = 16,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(99), 1,
      anon_sym_DASH,
    ACTIONS(101), 1,
      anon_sym_DQUOTE,
    ACTIONS(103), 1,
      anon_sym_SQUOTE,
    ACTIONS(105), 1,
      sym__number,
    ACTIONS(107), 1,
      anon_sym_DOT,
    ACTIONS(109), 1,
      sym_identifier,
    ACTIONS(223), 1,
      anon_sym_LPAREN,
    STATE(5), 1,
      sym__double_quote_string,
    STATE(32), 1,
      sym__expression,
    STATE(63), 1,
      sym_comment,
    STATE(147), 1,
      sym__boolean_expression,
    STATE(219), 1,
      sym__alias_identifier,
    ACTIONS(89), 2,
      sym_keyword_true,
      sym_keyword_false,
    STATE(9), 2,
      sym__literal_string,
      sym__decimal_number,
    STATE(4), 3,
      sym_literal,
      sym_field,
      sym_binary_expression,
  [3307] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(64), 1,
      sym_comment,
    STATE(176), 1,
      aux_sym_derives_repeat1,
    ACTIONS(23), 3,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(21), 14,
      sym_keyword_and,
      sym_keyword_or,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PIPE,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_QMARK_QMARK,
  [3338] = 16,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(99), 1,
      anon_sym_DASH,
    ACTIONS(101), 1,
      anon_sym_DQUOTE,
    ACTIONS(103), 1,
      anon_sym_SQUOTE,
    ACTIONS(105), 1,
      sym__number,
    ACTIONS(107), 1,
      anon_sym_DOT,
    ACTIONS(109), 1,
      sym_identifier,
    STATE(22), 1,
      sym__double_quote_string,
    STATE(23), 1,
      sym__expression,
    STATE(65), 1,
      sym_comment,
    STATE(97), 1,
      sym_assignment,
    STATE(196), 1,
      sym_term,
    STATE(219), 1,
      sym__alias_identifier,
    ACTIONS(89), 2,
      sym_keyword_true,
      sym_keyword_false,
    STATE(9), 2,
      sym__literal_string,
      sym__decimal_number,
    STATE(4), 3,
      sym_literal,
      sym_field,
      sym_binary_expression,
  [3391] = 15,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(99), 1,
      anon_sym_DASH,
    ACTIONS(101), 1,
      anon_sym_DQUOTE,
    ACTIONS(103), 1,
      anon_sym_SQUOTE,
    ACTIONS(105), 1,
      sym__number,
    ACTIONS(107), 1,
      anon_sym_DOT,
    ACTIONS(109), 1,
      sym_identifier,
    STATE(5), 1,
      sym__double_quote_string,
    STATE(25), 1,
      sym__expression,
    STATE(66), 1,
      sym_comment,
    STATE(219), 1,
      sym__alias_identifier,
    ACTIONS(89), 2,
      sym_keyword_true,
      sym_keyword_false,
    ACTIONS(225), 2,
      sym_keyword_average,
      sym_keyword_sum,
    STATE(9), 2,
      sym__literal_string,
      sym__decimal_number,
    STATE(4), 3,
      sym_literal,
      sym_field,
      sym_binary_expression,
  [3442] = 15,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(99), 1,
      anon_sym_DASH,
    ACTIONS(103), 1,
      anon_sym_SQUOTE,
    ACTIONS(107), 1,
      anon_sym_DOT,
    ACTIONS(227), 1,
      anon_sym_DQUOTE,
    ACTIONS(229), 1,
      sym__number,
    ACTIONS(231), 1,
      sym_identifier,
    STATE(67), 1,
      sym_comment,
    STATE(92), 1,
      sym__double_quote_string,
    STATE(105), 1,
      sym__expression,
    STATE(117), 1,
      sym_range,
    STATE(219), 1,
      sym__alias_identifier,
    ACTIONS(89), 2,
      sym_keyword_true,
      sym_keyword_false,
    STATE(9), 2,
      sym__literal_string,
      sym__decimal_number,
    STATE(4), 3,
      sym_literal,
      sym_field,
      sym_binary_expression,
  [3492] = 7,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(233), 1,
      anon_sym_COMMA,
    ACTIONS(235), 1,
      anon_sym_RBRACK,
    STATE(68), 1,
      sym_comment,
    STATE(183), 1,
      aux_sym_conditions_repeat1,
    ACTIONS(23), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(21), 12,
      sym_keyword_and,
      sym_keyword_or,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PIPE,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_QMARK_QMARK,
  [3526] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(69), 1,
      sym_comment,
    ACTIONS(23), 3,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(21), 14,
      sym_keyword_and,
      sym_keyword_or,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PIPE,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_QMARK_QMARK,
  [3554] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(70), 1,
      sym_comment,
    ACTIONS(237), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
    ACTIONS(23), 3,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(21), 12,
      sym_keyword_and,
      sym_keyword_or,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PIPE,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_QMARK_QMARK,
  [3584] = 16,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(99), 1,
      anon_sym_DASH,
    ACTIONS(101), 1,
      anon_sym_DQUOTE,
    ACTIONS(103), 1,
      anon_sym_SQUOTE,
    ACTIONS(105), 1,
      sym__number,
    ACTIONS(107), 1,
      anon_sym_DOT,
    ACTIONS(109), 1,
      sym_identifier,
    ACTIONS(239), 1,
      anon_sym_RBRACK,
    STATE(5), 1,
      sym__double_quote_string,
    STATE(71), 1,
      sym_comment,
    STATE(80), 1,
      sym_binary_expression,
    STATE(110), 1,
      sym__expression,
    STATE(219), 1,
      sym__alias_identifier,
    ACTIONS(89), 2,
      sym_keyword_true,
      sym_keyword_false,
    STATE(4), 2,
      sym_literal,
      sym_field,
    STATE(9), 2,
      sym__literal_string,
      sym__decimal_number,
  [3636] = 16,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(99), 1,
      anon_sym_DASH,
    ACTIONS(101), 1,
      anon_sym_DQUOTE,
    ACTIONS(103), 1,
      anon_sym_SQUOTE,
    ACTIONS(105), 1,
      sym__number,
    ACTIONS(107), 1,
      anon_sym_DOT,
    ACTIONS(109), 1,
      sym_identifier,
    ACTIONS(241), 1,
      anon_sym_RBRACK,
    STATE(5), 1,
      sym__double_quote_string,
    STATE(72), 1,
      sym_comment,
    STATE(80), 1,
      sym_binary_expression,
    STATE(110), 1,
      sym__expression,
    STATE(219), 1,
      sym__alias_identifier,
    ACTIONS(89), 2,
      sym_keyword_true,
      sym_keyword_false,
    STATE(4), 2,
      sym_literal,
      sym_field,
    STATE(9), 2,
      sym__literal_string,
      sym__decimal_number,
  [3688] = 15,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(99), 1,
      anon_sym_DASH,
    ACTIONS(103), 1,
      anon_sym_SQUOTE,
    ACTIONS(107), 1,
      anon_sym_DOT,
    ACTIONS(227), 1,
      anon_sym_DQUOTE,
    ACTIONS(231), 1,
      sym_identifier,
    ACTIONS(243), 1,
      sym__number,
    STATE(73), 1,
      sym_comment,
    STATE(92), 1,
      sym__double_quote_string,
    STATE(105), 1,
      sym__expression,
    STATE(171), 1,
      sym_range,
    STATE(219), 1,
      sym__alias_identifier,
    ACTIONS(89), 2,
      sym_keyword_true,
      sym_keyword_false,
    STATE(9), 2,
      sym__literal_string,
      sym__decimal_number,
    STATE(4), 3,
      sym_literal,
      sym_field,
      sym_binary_expression,
  [3738] = 14,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(99), 1,
      anon_sym_DASH,
    ACTIONS(101), 1,
      anon_sym_DQUOTE,
    ACTIONS(103), 1,
      anon_sym_SQUOTE,
    ACTIONS(105), 1,
      sym__number,
    ACTIONS(107), 1,
      anon_sym_DOT,
    ACTIONS(109), 1,
      sym_identifier,
    STATE(5), 1,
      sym__double_quote_string,
    STATE(12), 1,
      sym__expression,
    STATE(74), 1,
      sym_comment,
    STATE(219), 1,
      sym__alias_identifier,
    ACTIONS(89), 2,
      sym_keyword_true,
      sym_keyword_false,
    STATE(9), 2,
      sym__literal_string,
      sym__decimal_number,
    STATE(4), 3,
      sym_literal,
      sym_field,
      sym_binary_expression,
  [3785] = 14,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(99), 1,
      anon_sym_DASH,
    ACTIONS(103), 1,
      anon_sym_SQUOTE,
    ACTIONS(107), 1,
      anon_sym_DOT,
    ACTIONS(227), 1,
      anon_sym_DQUOTE,
    ACTIONS(231), 1,
      sym_identifier,
    ACTIONS(245), 1,
      sym__number,
    STATE(75), 1,
      sym_comment,
    STATE(92), 1,
      sym__double_quote_string,
    STATE(101), 1,
      sym__expression,
    STATE(219), 1,
      sym__alias_identifier,
    ACTIONS(89), 2,
      sym_keyword_true,
      sym_keyword_false,
    STATE(9), 2,
      sym__literal_string,
      sym__decimal_number,
    STATE(4), 3,
      sym_literal,
      sym_field,
      sym_binary_expression,
  [3832] = 11,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(67), 1,
      anon_sym_PIPE,
    ACTIONS(73), 1,
      sym_keyword_and,
    ACTIONS(75), 1,
      anon_sym_QMARK_QMARK,
    ACTIONS(79), 1,
      sym_keyword_or,
    STATE(76), 1,
      sym_comment,
    ACTIONS(63), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(65), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(71), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(247), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
    ACTIONS(69), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
  [3873] = 14,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(99), 1,
      anon_sym_DASH,
    ACTIONS(101), 1,
      anon_sym_DQUOTE,
    ACTIONS(103), 1,
      anon_sym_SQUOTE,
    ACTIONS(105), 1,
      sym__number,
    ACTIONS(107), 1,
      anon_sym_DOT,
    ACTIONS(109), 1,
      sym_identifier,
    STATE(5), 1,
      sym__double_quote_string,
    STATE(16), 1,
      sym__expression,
    STATE(77), 1,
      sym_comment,
    STATE(219), 1,
      sym__alias_identifier,
    ACTIONS(89), 2,
      sym_keyword_true,
      sym_keyword_false,
    STATE(9), 2,
      sym__literal_string,
      sym__decimal_number,
    STATE(4), 3,
      sym_literal,
      sym_field,
      sym_binary_expression,
  [3920] = 14,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(99), 1,
      anon_sym_DASH,
    ACTIONS(101), 1,
      anon_sym_DQUOTE,
    ACTIONS(103), 1,
      anon_sym_SQUOTE,
    ACTIONS(105), 1,
      sym__number,
    ACTIONS(107), 1,
      anon_sym_DOT,
    ACTIONS(109), 1,
      sym_identifier,
    STATE(5), 1,
      sym__double_quote_string,
    STATE(17), 1,
      sym__expression,
    STATE(78), 1,
      sym_comment,
    STATE(219), 1,
      sym__alias_identifier,
    ACTIONS(89), 2,
      sym_keyword_true,
      sym_keyword_false,
    STATE(9), 2,
      sym__literal_string,
      sym__decimal_number,
    STATE(4), 3,
      sym_literal,
      sym_field,
      sym_binary_expression,
  [3967] = 14,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(99), 1,
      anon_sym_DASH,
    ACTIONS(101), 1,
      anon_sym_DQUOTE,
    ACTIONS(103), 1,
      anon_sym_SQUOTE,
    ACTIONS(105), 1,
      sym__number,
    ACTIONS(107), 1,
      anon_sym_DOT,
    ACTIONS(109), 1,
      sym_identifier,
    STATE(5), 1,
      sym__double_quote_string,
    STATE(21), 1,
      sym__expression,
    STATE(79), 1,
      sym_comment,
    STATE(219), 1,
      sym__alias_identifier,
    ACTIONS(89), 2,
      sym_keyword_true,
      sym_keyword_false,
    STATE(9), 2,
      sym__literal_string,
      sym__decimal_number,
    STATE(4), 3,
      sym_literal,
      sym_field,
      sym_binary_expression,
  [4014] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(80), 1,
      sym_comment,
    ACTIONS(23), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(249), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
    ACTIONS(21), 12,
      sym_keyword_and,
      sym_keyword_or,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PIPE,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_QMARK_QMARK,
  [4043] = 15,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(99), 1,
      anon_sym_DASH,
    ACTIONS(101), 1,
      anon_sym_DQUOTE,
    ACTIONS(103), 1,
      anon_sym_SQUOTE,
    ACTIONS(105), 1,
      sym__number,
    ACTIONS(107), 1,
      anon_sym_DOT,
    ACTIONS(109), 1,
      sym_identifier,
    STATE(5), 1,
      sym__double_quote_string,
    STATE(80), 1,
      sym_binary_expression,
    STATE(81), 1,
      sym_comment,
    STATE(110), 1,
      sym__expression,
    STATE(219), 1,
      sym__alias_identifier,
    ACTIONS(89), 2,
      sym_keyword_true,
      sym_keyword_false,
    STATE(4), 2,
      sym_literal,
      sym_field,
    STATE(9), 2,
      sym__literal_string,
      sym__decimal_number,
  [4092] = 14,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(99), 1,
      anon_sym_DASH,
    ACTIONS(101), 1,
      anon_sym_DQUOTE,
    ACTIONS(103), 1,
      anon_sym_SQUOTE,
    ACTIONS(105), 1,
      sym__number,
    ACTIONS(107), 1,
      anon_sym_DOT,
    ACTIONS(109), 1,
      sym_identifier,
    STATE(5), 1,
      sym__double_quote_string,
    STATE(26), 1,
      sym__expression,
    STATE(82), 1,
      sym_comment,
    STATE(219), 1,
      sym__alias_identifier,
    ACTIONS(89), 2,
      sym_keyword_true,
      sym_keyword_false,
    STATE(9), 2,
      sym__literal_string,
      sym__decimal_number,
    STATE(4), 3,
      sym_literal,
      sym_field,
      sym_binary_expression,
  [4139] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(117), 1,
      anon_sym_DOT,
    STATE(83), 1,
      sym_comment,
    ACTIONS(37), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(35), 13,
      sym_keyword_and,
      sym_keyword_or,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_DOT_DOT,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PIPE,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_QMARK_QMARK,
  [4168] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(251), 1,
      anon_sym_DOT,
    STATE(84), 1,
      sym_comment,
    ACTIONS(61), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(57), 13,
      sym_keyword_and,
      sym_keyword_or,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_DOT_DOT,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PIPE,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_QMARK_QMARK,
  [4197] = 14,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(99), 1,
      anon_sym_DASH,
    ACTIONS(103), 1,
      anon_sym_SQUOTE,
    ACTIONS(107), 1,
      anon_sym_DOT,
    ACTIONS(227), 1,
      anon_sym_DQUOTE,
    ACTIONS(231), 1,
      sym_identifier,
    ACTIONS(245), 1,
      sym__number,
    STATE(85), 1,
      sym_comment,
    STATE(92), 1,
      sym__double_quote_string,
    STATE(106), 1,
      sym__expression,
    STATE(219), 1,
      sym__alias_identifier,
    ACTIONS(89), 2,
      sym_keyword_true,
      sym_keyword_false,
    STATE(9), 2,
      sym__literal_string,
      sym__decimal_number,
    STATE(4), 3,
      sym_literal,
      sym_field,
      sym_binary_expression,
  [4244] = 14,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(99), 1,
      anon_sym_DASH,
    ACTIONS(103), 1,
      anon_sym_SQUOTE,
    ACTIONS(107), 1,
      anon_sym_DOT,
    ACTIONS(227), 1,
      anon_sym_DQUOTE,
    ACTIONS(231), 1,
      sym_identifier,
    ACTIONS(245), 1,
      sym__number,
    STATE(86), 1,
      sym_comment,
    STATE(92), 1,
      sym__double_quote_string,
    STATE(108), 1,
      sym__expression,
    STATE(219), 1,
      sym__alias_identifier,
    ACTIONS(89), 2,
      sym_keyword_true,
      sym_keyword_false,
    STATE(9), 2,
      sym__literal_string,
      sym__decimal_number,
    STATE(4), 3,
      sym_literal,
      sym_field,
      sym_binary_expression,
  [4291] = 14,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(99), 1,
      anon_sym_DASH,
    ACTIONS(103), 1,
      anon_sym_SQUOTE,
    ACTIONS(107), 1,
      anon_sym_DOT,
    ACTIONS(227), 1,
      anon_sym_DQUOTE,
    ACTIONS(231), 1,
      sym_identifier,
    ACTIONS(245), 1,
      sym__number,
    STATE(12), 1,
      sym__expression,
    STATE(87), 1,
      sym_comment,
    STATE(92), 1,
      sym__double_quote_string,
    STATE(219), 1,
      sym__alias_identifier,
    ACTIONS(89), 2,
      sym_keyword_true,
      sym_keyword_false,
    STATE(9), 2,
      sym__literal_string,
      sym__decimal_number,
    STATE(4), 3,
      sym_literal,
      sym_field,
      sym_binary_expression,
  [4338] = 11,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(67), 1,
      anon_sym_PIPE,
    ACTIONS(73), 1,
      sym_keyword_and,
    ACTIONS(75), 1,
      anon_sym_QMARK_QMARK,
    ACTIONS(79), 1,
      sym_keyword_or,
    STATE(88), 1,
      sym_comment,
    ACTIONS(63), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(65), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(71), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(253), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
    ACTIONS(69), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
  [4379] = 14,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(99), 1,
      anon_sym_DASH,
    ACTIONS(103), 1,
      anon_sym_SQUOTE,
    ACTIONS(107), 1,
      anon_sym_DOT,
    ACTIONS(227), 1,
      anon_sym_DQUOTE,
    ACTIONS(231), 1,
      sym_identifier,
    ACTIONS(245), 1,
      sym__number,
    STATE(89), 1,
      sym_comment,
    STATE(92), 1,
      sym__double_quote_string,
    STATE(107), 1,
      sym__expression,
    STATE(219), 1,
      sym__alias_identifier,
    ACTIONS(89), 2,
      sym_keyword_true,
      sym_keyword_false,
    STATE(9), 2,
      sym__literal_string,
      sym__decimal_number,
    STATE(4), 3,
      sym_literal,
      sym_field,
      sym_binary_expression,
  [4426] = 14,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(99), 1,
      anon_sym_DASH,
    ACTIONS(101), 1,
      anon_sym_DQUOTE,
    ACTIONS(103), 1,
      anon_sym_SQUOTE,
    ACTIONS(105), 1,
      sym__number,
    ACTIONS(107), 1,
      anon_sym_DOT,
    ACTIONS(109), 1,
      sym_identifier,
    STATE(5), 1,
      sym__double_quote_string,
    STATE(90), 1,
      sym_comment,
    STATE(102), 1,
      sym__expression,
    STATE(219), 1,
      sym__alias_identifier,
    ACTIONS(89), 2,
      sym_keyword_true,
      sym_keyword_false,
    STATE(9), 2,
      sym__literal_string,
      sym__decimal_number,
    STATE(4), 3,
      sym_literal,
      sym_field,
      sym_binary_expression,
  [4473] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(91), 1,
      sym_comment,
    ACTIONS(33), 3,
      anon_sym_DOT,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(31), 13,
      sym_keyword_and,
      sym_keyword_or,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_DOT_DOT,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PIPE,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_QMARK_QMARK,
  [4500] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(255), 1,
      anon_sym_DOT,
    STATE(92), 1,
      sym_comment,
    ACTIONS(29), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(25), 13,
      sym_keyword_and,
      sym_keyword_or,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_DOT_DOT,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PIPE,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_QMARK_QMARK,
  [4529] = 14,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(99), 1,
      anon_sym_DASH,
    ACTIONS(101), 1,
      anon_sym_DQUOTE,
    ACTIONS(103), 1,
      anon_sym_SQUOTE,
    ACTIONS(105), 1,
      sym__number,
    ACTIONS(107), 1,
      anon_sym_DOT,
    ACTIONS(109), 1,
      sym_identifier,
    STATE(5), 1,
      sym__double_quote_string,
    STATE(19), 1,
      sym__expression,
    STATE(93), 1,
      sym_comment,
    STATE(219), 1,
      sym__alias_identifier,
    ACTIONS(89), 2,
      sym_keyword_true,
      sym_keyword_false,
    STATE(9), 2,
      sym__literal_string,
      sym__decimal_number,
    STATE(4), 3,
      sym_literal,
      sym_field,
      sym_binary_expression,
  [4576] = 14,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(99), 1,
      anon_sym_DASH,
    ACTIONS(103), 1,
      anon_sym_SQUOTE,
    ACTIONS(107), 1,
      anon_sym_DOT,
    ACTIONS(227), 1,
      anon_sym_DQUOTE,
    ACTIONS(231), 1,
      sym_identifier,
    ACTIONS(245), 1,
      sym__number,
    STATE(92), 1,
      sym__double_quote_string,
    STATE(94), 1,
      sym_comment,
    STATE(104), 1,
      sym__expression,
    STATE(219), 1,
      sym__alias_identifier,
    ACTIONS(89), 2,
      sym_keyword_true,
      sym_keyword_false,
    STATE(9), 2,
      sym__literal_string,
      sym__decimal_number,
    STATE(4), 3,
      sym_literal,
      sym_field,
      sym_binary_expression,
  [4623] = 14,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(99), 1,
      anon_sym_DASH,
    ACTIONS(101), 1,
      anon_sym_DQUOTE,
    ACTIONS(103), 1,
      anon_sym_SQUOTE,
    ACTIONS(105), 1,
      sym__number,
    ACTIONS(107), 1,
      anon_sym_DOT,
    ACTIONS(109), 1,
      sym_identifier,
    STATE(5), 1,
      sym__double_quote_string,
    STATE(88), 1,
      sym__expression,
    STATE(95), 1,
      sym_comment,
    STATE(219), 1,
      sym__alias_identifier,
    ACTIONS(89), 2,
      sym_keyword_true,
      sym_keyword_false,
    STATE(9), 2,
      sym__literal_string,
      sym__decimal_number,
    STATE(4), 3,
      sym_literal,
      sym_field,
      sym_binary_expression,
  [4670] = 14,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(99), 1,
      anon_sym_DASH,
    ACTIONS(101), 1,
      anon_sym_DQUOTE,
    ACTIONS(103), 1,
      anon_sym_SQUOTE,
    ACTIONS(105), 1,
      sym__number,
    ACTIONS(107), 1,
      anon_sym_DOT,
    ACTIONS(109), 1,
      sym_identifier,
    STATE(5), 1,
      sym__double_quote_string,
    STATE(18), 1,
      sym__expression,
    STATE(96), 1,
      sym_comment,
    STATE(219), 1,
      sym__alias_identifier,
    ACTIONS(89), 2,
      sym_keyword_true,
      sym_keyword_false,
    STATE(9), 2,
      sym__literal_string,
      sym__decimal_number,
    STATE(4), 3,
      sym_literal,
      sym_field,
      sym_binary_expression,
  [4717] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(97), 1,
      sym_comment,
    ACTIONS(77), 16,
      ts_builtin_sym_end,
      sym_keyword_from,
      sym_keyword_filter,
      sym_keyword_derive,
      sym_keyword_group,
      sym_keyword_aggregate,
      sym_keyword_sort,
      sym_keyword_take,
      sym_keyword_window,
      sym_keyword_join,
      sym_keyword_select,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [4742] = 14,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(99), 1,
      anon_sym_DASH,
    ACTIONS(103), 1,
      anon_sym_SQUOTE,
    ACTIONS(107), 1,
      anon_sym_DOT,
    ACTIONS(227), 1,
      anon_sym_DQUOTE,
    ACTIONS(231), 1,
      sym_identifier,
    ACTIONS(245), 1,
      sym__number,
    STATE(92), 1,
      sym__double_quote_string,
    STATE(98), 1,
      sym_comment,
    STATE(103), 1,
      sym__expression,
    STATE(219), 1,
      sym__alias_identifier,
    ACTIONS(89), 2,
      sym_keyword_true,
      sym_keyword_false,
    STATE(9), 2,
      sym__literal_string,
      sym__decimal_number,
    STATE(4), 3,
      sym_literal,
      sym_field,
      sym_binary_expression,
  [4789] = 14,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(99), 1,
      anon_sym_DASH,
    ACTIONS(101), 1,
      anon_sym_DQUOTE,
    ACTIONS(103), 1,
      anon_sym_SQUOTE,
    ACTIONS(105), 1,
      sym__number,
    ACTIONS(107), 1,
      anon_sym_DOT,
    ACTIONS(109), 1,
      sym_identifier,
    STATE(5), 1,
      sym__double_quote_string,
    STATE(20), 1,
      sym__expression,
    STATE(99), 1,
      sym_comment,
    STATE(219), 1,
      sym__alias_identifier,
    ACTIONS(89), 2,
      sym_keyword_true,
      sym_keyword_false,
    STATE(9), 2,
      sym__literal_string,
      sym__decimal_number,
    STATE(4), 3,
      sym_literal,
      sym_field,
      sym_binary_expression,
  [4836] = 14,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(99), 1,
      anon_sym_DASH,
    ACTIONS(101), 1,
      anon_sym_DQUOTE,
    ACTIONS(103), 1,
      anon_sym_SQUOTE,
    ACTIONS(105), 1,
      sym__number,
    ACTIONS(107), 1,
      anon_sym_DOT,
    ACTIONS(109), 1,
      sym_identifier,
    STATE(5), 1,
      sym__double_quote_string,
    STATE(24), 1,
      sym__expression,
    STATE(100), 1,
      sym_comment,
    STATE(219), 1,
      sym__alias_identifier,
    ACTIONS(89), 2,
      sym_keyword_true,
      sym_keyword_false,
    STATE(9), 2,
      sym__literal_string,
      sym__decimal_number,
    STATE(4), 3,
      sym_literal,
      sym_field,
      sym_binary_expression,
  [4883] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(101), 1,
      sym_comment,
    ACTIONS(49), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(257), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(259), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(47), 9,
      sym_keyword_and,
      sym_keyword_or,
      anon_sym_DOT_DOT,
      anon_sym_PIPE,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_QMARK_QMARK,
  [4913] = 11,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(67), 1,
      anon_sym_PIPE,
    ACTIONS(73), 1,
      sym_keyword_and,
    ACTIONS(75), 1,
      anon_sym_QMARK_QMARK,
    ACTIONS(79), 1,
      sym_keyword_or,
    ACTIONS(261), 1,
      anon_sym_RPAREN,
    STATE(102), 1,
      sym_comment,
    ACTIONS(63), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(65), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(71), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(69), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
  [4953] = 7,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(263), 1,
      anon_sym_PIPE,
    STATE(103), 1,
      sym_comment,
    ACTIONS(49), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(257), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(259), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(47), 8,
      sym_keyword_and,
      sym_keyword_or,
      anon_sym_DOT_DOT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_QMARK_QMARK,
  [4985] = 8,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(263), 1,
      anon_sym_PIPE,
    STATE(104), 1,
      sym_comment,
    ACTIONS(257), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(259), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(267), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(47), 4,
      sym_keyword_and,
      sym_keyword_or,
      anon_sym_DOT_DOT,
      anon_sym_QMARK_QMARK,
    ACTIONS(265), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
  [5019] = 11,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(263), 1,
      anon_sym_PIPE,
    ACTIONS(269), 1,
      sym_keyword_and,
    ACTIONS(271), 1,
      sym_keyword_or,
    ACTIONS(273), 1,
      anon_sym_DOT_DOT,
    ACTIONS(275), 1,
      anon_sym_QMARK_QMARK,
    STATE(105), 1,
      sym_comment,
    ACTIONS(257), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(259), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(267), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(265), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
  [5059] = 9,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(263), 1,
      anon_sym_PIPE,
    ACTIONS(275), 1,
      anon_sym_QMARK_QMARK,
    STATE(106), 1,
      sym_comment,
    ACTIONS(257), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(259), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(267), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(47), 3,
      sym_keyword_and,
      sym_keyword_or,
      anon_sym_DOT_DOT,
    ACTIONS(265), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
  [5095] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(107), 1,
      sym_comment,
    ACTIONS(49), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(257), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(47), 11,
      sym_keyword_and,
      sym_keyword_or,
      anon_sym_DOT_DOT,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PIPE,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_QMARK_QMARK,
  [5123] = 10,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(263), 1,
      anon_sym_PIPE,
    ACTIONS(269), 1,
      sym_keyword_and,
    ACTIONS(275), 1,
      anon_sym_QMARK_QMARK,
    STATE(108), 1,
      sym_comment,
    ACTIONS(47), 2,
      sym_keyword_or,
      anon_sym_DOT_DOT,
    ACTIONS(257), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(259), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(267), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(265), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
  [5161] = 11,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(67), 1,
      anon_sym_PIPE,
    ACTIONS(73), 1,
      sym_keyword_and,
    ACTIONS(75), 1,
      anon_sym_QMARK_QMARK,
    ACTIONS(79), 1,
      sym_keyword_or,
    ACTIONS(81), 1,
      anon_sym_EQ,
    STATE(109), 1,
      sym_comment,
    ACTIONS(63), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(65), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(71), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(69), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
  [5201] = 10,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(67), 1,
      anon_sym_PIPE,
    ACTIONS(73), 1,
      sym_keyword_and,
    ACTIONS(75), 1,
      anon_sym_QMARK_QMARK,
    ACTIONS(79), 1,
      sym_keyword_or,
    STATE(110), 1,
      sym_comment,
    ACTIONS(63), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(65), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(71), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(69), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
  [5238] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(279), 1,
      anon_sym_LBRACK,
    STATE(111), 1,
      sym_comment,
    STATE(142), 1,
      sym_conditions,
    ACTIONS(277), 10,
      ts_builtin_sym_end,
      sym_keyword_from,
      sym_keyword_filter,
      sym_keyword_derive,
      sym_keyword_group,
      sym_keyword_aggregate,
      sym_keyword_sort,
      sym_keyword_take,
      sym_keyword_join,
      sym_keyword_select,
  [5263] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(112), 1,
      sym_comment,
    ACTIONS(281), 12,
      ts_builtin_sym_end,
      sym_keyword_from,
      sym_keyword_filter,
      sym_keyword_derive,
      sym_keyword_group,
      sym_keyword_aggregate,
      sym_keyword_sort,
      sym_keyword_take,
      sym_keyword_window,
      sym_keyword_join,
      sym_keyword_select,
      anon_sym_RPAREN,
  [5284] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(113), 1,
      sym_comment,
    ACTIONS(283), 12,
      ts_builtin_sym_end,
      sym_keyword_from,
      sym_keyword_filter,
      sym_keyword_derive,
      sym_keyword_group,
      sym_keyword_aggregate,
      sym_keyword_sort,
      sym_keyword_take,
      sym_keyword_window,
      sym_keyword_join,
      sym_keyword_select,
      anon_sym_RPAREN,
  [5305] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(114), 1,
      sym_comment,
    ACTIONS(285), 12,
      ts_builtin_sym_end,
      sym_keyword_from,
      sym_keyword_filter,
      sym_keyword_derive,
      sym_keyword_group,
      sym_keyword_aggregate,
      sym_keyword_sort,
      sym_keyword_take,
      sym_keyword_window,
      sym_keyword_join,
      sym_keyword_select,
      anon_sym_RPAREN,
  [5326] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(115), 1,
      sym_comment,
    ACTIONS(287), 12,
      ts_builtin_sym_end,
      sym_keyword_from,
      sym_keyword_filter,
      sym_keyword_derive,
      sym_keyword_group,
      sym_keyword_aggregate,
      sym_keyword_sort,
      sym_keyword_take,
      sym_keyword_window,
      sym_keyword_join,
      sym_keyword_select,
      anon_sym_RPAREN,
  [5347] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(116), 1,
      sym_comment,
    ACTIONS(289), 12,
      ts_builtin_sym_end,
      sym_keyword_from,
      sym_keyword_filter,
      sym_keyword_derive,
      sym_keyword_group,
      sym_keyword_aggregate,
      sym_keyword_sort,
      sym_keyword_take,
      sym_keyword_window,
      sym_keyword_join,
      sym_keyword_select,
      anon_sym_RPAREN,
  [5368] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(117), 1,
      sym_comment,
    ACTIONS(291), 12,
      ts_builtin_sym_end,
      sym_keyword_from,
      sym_keyword_filter,
      sym_keyword_derive,
      sym_keyword_group,
      sym_keyword_aggregate,
      sym_keyword_sort,
      sym_keyword_take,
      sym_keyword_window,
      sym_keyword_join,
      sym_keyword_select,
      anon_sym_RPAREN,
  [5389] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(118), 1,
      sym_comment,
    ACTIONS(293), 12,
      ts_builtin_sym_end,
      sym_keyword_from,
      sym_keyword_filter,
      sym_keyword_derive,
      sym_keyword_group,
      sym_keyword_aggregate,
      sym_keyword_sort,
      sym_keyword_take,
      sym_keyword_window,
      sym_keyword_join,
      sym_keyword_select,
      anon_sym_RPAREN,
  [5410] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(119), 1,
      sym_comment,
    ACTIONS(295), 12,
      ts_builtin_sym_end,
      sym_keyword_from,
      sym_keyword_filter,
      sym_keyword_derive,
      sym_keyword_group,
      sym_keyword_aggregate,
      sym_keyword_sort,
      sym_keyword_take,
      sym_keyword_window,
      sym_keyword_join,
      sym_keyword_select,
      anon_sym_RPAREN,
  [5431] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(120), 1,
      sym_comment,
    ACTIONS(297), 12,
      ts_builtin_sym_end,
      sym_keyword_from,
      sym_keyword_filter,
      sym_keyword_derive,
      sym_keyword_group,
      sym_keyword_aggregate,
      sym_keyword_sort,
      sym_keyword_take,
      sym_keyword_window,
      sym_keyword_join,
      sym_keyword_select,
      anon_sym_RPAREN,
  [5452] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(121), 1,
      sym_comment,
    ACTIONS(299), 12,
      ts_builtin_sym_end,
      sym_keyword_from,
      sym_keyword_filter,
      sym_keyword_derive,
      sym_keyword_group,
      sym_keyword_aggregate,
      sym_keyword_sort,
      sym_keyword_take,
      sym_keyword_window,
      sym_keyword_join,
      sym_keyword_select,
      anon_sym_RPAREN,
  [5473] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(122), 1,
      sym_comment,
    ACTIONS(301), 12,
      ts_builtin_sym_end,
      sym_keyword_from,
      sym_keyword_filter,
      sym_keyword_derive,
      sym_keyword_group,
      sym_keyword_aggregate,
      sym_keyword_sort,
      sym_keyword_take,
      sym_keyword_window,
      sym_keyword_join,
      sym_keyword_select,
      anon_sym_RPAREN,
  [5494] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(123), 1,
      sym_comment,
    ACTIONS(303), 11,
      ts_builtin_sym_end,
      sym_keyword_from,
      sym_keyword_filter,
      sym_keyword_derive,
      sym_keyword_group,
      sym_keyword_aggregate,
      sym_keyword_sort,
      sym_keyword_take,
      sym_keyword_join,
      sym_keyword_select,
      anon_sym_RPAREN,
  [5514] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(124), 1,
      sym_comment,
    ACTIONS(305), 11,
      ts_builtin_sym_end,
      sym_keyword_from,
      sym_keyword_filter,
      sym_keyword_derive,
      sym_keyword_group,
      sym_keyword_aggregate,
      sym_keyword_sort,
      sym_keyword_take,
      sym_keyword_join,
      sym_keyword_select,
      anon_sym_RPAREN,
  [5534] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(125), 1,
      sym_comment,
    ACTIONS(307), 11,
      ts_builtin_sym_end,
      sym_keyword_from,
      sym_keyword_filter,
      sym_keyword_derive,
      sym_keyword_group,
      sym_keyword_aggregate,
      sym_keyword_sort,
      sym_keyword_take,
      sym_keyword_join,
      sym_keyword_select,
      anon_sym_RPAREN,
  [5554] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(126), 1,
      sym_comment,
    ACTIONS(309), 11,
      ts_builtin_sym_end,
      sym_keyword_from,
      sym_keyword_filter,
      sym_keyword_derive,
      sym_keyword_group,
      sym_keyword_aggregate,
      sym_keyword_sort,
      sym_keyword_take,
      sym_keyword_join,
      sym_keyword_select,
      anon_sym_RPAREN,
  [5574] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(127), 1,
      sym_comment,
    ACTIONS(311), 11,
      ts_builtin_sym_end,
      sym_keyword_from,
      sym_keyword_filter,
      sym_keyword_derive,
      sym_keyword_group,
      sym_keyword_aggregate,
      sym_keyword_sort,
      sym_keyword_take,
      sym_keyword_join,
      sym_keyword_select,
      anon_sym_RPAREN,
  [5594] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(128), 1,
      sym_comment,
    ACTIONS(313), 10,
      ts_builtin_sym_end,
      sym_keyword_from,
      sym_keyword_filter,
      sym_keyword_derive,
      sym_keyword_group,
      sym_keyword_aggregate,
      sym_keyword_sort,
      sym_keyword_take,
      sym_keyword_join,
      sym_keyword_select,
  [5613] = 9,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(145), 1,
      sym_keyword_aggregate,
    ACTIONS(147), 1,
      sym_keyword_sort,
    ACTIONS(149), 1,
      sym_keyword_take,
    ACTIONS(315), 1,
      sym_keyword_window,
    ACTIONS(317), 1,
      anon_sym_RPAREN,
    STATE(129), 1,
      sym_comment,
    STATE(152), 1,
      aux_sym_group_repeat2,
    STATE(167), 4,
      sym_aggregate,
      sym_sorts,
      sym_takes,
      sym_window,
  [5644] = 9,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(145), 1,
      sym_keyword_aggregate,
    ACTIONS(147), 1,
      sym_keyword_sort,
    ACTIONS(149), 1,
      sym_keyword_take,
    ACTIONS(315), 1,
      sym_keyword_window,
    ACTIONS(319), 1,
      anon_sym_RPAREN,
    STATE(130), 1,
      sym_comment,
    STATE(152), 1,
      aux_sym_group_repeat2,
    STATE(167), 4,
      sym_aggregate,
      sym_sorts,
      sym_takes,
      sym_window,
  [5675] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(131), 1,
      sym_comment,
    ACTIONS(321), 10,
      ts_builtin_sym_end,
      sym_keyword_from,
      sym_keyword_filter,
      sym_keyword_derive,
      sym_keyword_group,
      sym_keyword_aggregate,
      sym_keyword_sort,
      sym_keyword_take,
      sym_keyword_join,
      sym_keyword_select,
  [5694] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(132), 1,
      sym_comment,
    ACTIONS(323), 10,
      ts_builtin_sym_end,
      sym_keyword_from,
      sym_keyword_filter,
      sym_keyword_derive,
      sym_keyword_group,
      sym_keyword_aggregate,
      sym_keyword_sort,
      sym_keyword_take,
      sym_keyword_join,
      sym_keyword_select,
  [5713] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(133), 1,
      sym_comment,
    ACTIONS(325), 10,
      ts_builtin_sym_end,
      sym_keyword_from,
      sym_keyword_filter,
      sym_keyword_derive,
      sym_keyword_group,
      sym_keyword_aggregate,
      sym_keyword_sort,
      sym_keyword_take,
      sym_keyword_join,
      sym_keyword_select,
  [5732] = 9,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(145), 1,
      sym_keyword_aggregate,
    ACTIONS(147), 1,
      sym_keyword_sort,
    ACTIONS(149), 1,
      sym_keyword_take,
    ACTIONS(315), 1,
      sym_keyword_window,
    ACTIONS(327), 1,
      anon_sym_RPAREN,
    STATE(134), 1,
      sym_comment,
    STATE(152), 1,
      aux_sym_group_repeat2,
    STATE(167), 4,
      sym_aggregate,
      sym_sorts,
      sym_takes,
      sym_window,
  [5763] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(135), 1,
      sym_comment,
    ACTIONS(329), 10,
      ts_builtin_sym_end,
      sym_keyword_from,
      sym_keyword_filter,
      sym_keyword_derive,
      sym_keyword_group,
      sym_keyword_aggregate,
      sym_keyword_sort,
      sym_keyword_take,
      sym_keyword_join,
      sym_keyword_select,
  [5782] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(136), 1,
      sym_comment,
    ACTIONS(331), 10,
      ts_builtin_sym_end,
      sym_keyword_from,
      sym_keyword_filter,
      sym_keyword_derive,
      sym_keyword_group,
      sym_keyword_aggregate,
      sym_keyword_sort,
      sym_keyword_take,
      sym_keyword_join,
      sym_keyword_select,
  [5801] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(137), 1,
      sym_comment,
    ACTIONS(333), 10,
      ts_builtin_sym_end,
      sym_keyword_from,
      sym_keyword_filter,
      sym_keyword_derive,
      sym_keyword_group,
      sym_keyword_aggregate,
      sym_keyword_sort,
      sym_keyword_take,
      sym_keyword_join,
      sym_keyword_select,
  [5820] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(138), 1,
      sym_comment,
    ACTIONS(335), 10,
      ts_builtin_sym_end,
      sym_keyword_from,
      sym_keyword_filter,
      sym_keyword_derive,
      sym_keyword_group,
      sym_keyword_aggregate,
      sym_keyword_sort,
      sym_keyword_take,
      sym_keyword_join,
      sym_keyword_select,
  [5839] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(139), 1,
      sym_comment,
    ACTIONS(337), 10,
      ts_builtin_sym_end,
      sym_keyword_from,
      sym_keyword_filter,
      sym_keyword_derive,
      sym_keyword_group,
      sym_keyword_aggregate,
      sym_keyword_sort,
      sym_keyword_take,
      sym_keyword_join,
      sym_keyword_select,
  [5858] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(140), 1,
      sym_comment,
    ACTIONS(339), 10,
      ts_builtin_sym_end,
      sym_keyword_from,
      sym_keyword_filter,
      sym_keyword_derive,
      sym_keyword_group,
      sym_keyword_aggregate,
      sym_keyword_sort,
      sym_keyword_take,
      sym_keyword_join,
      sym_keyword_select,
  [5877] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(141), 1,
      sym_comment,
    ACTIONS(341), 10,
      ts_builtin_sym_end,
      sym_keyword_from,
      sym_keyword_filter,
      sym_keyword_derive,
      sym_keyword_group,
      sym_keyword_aggregate,
      sym_keyword_sort,
      sym_keyword_take,
      sym_keyword_join,
      sym_keyword_select,
  [5896] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(142), 1,
      sym_comment,
    ACTIONS(343), 10,
      ts_builtin_sym_end,
      sym_keyword_from,
      sym_keyword_filter,
      sym_keyword_derive,
      sym_keyword_group,
      sym_keyword_aggregate,
      sym_keyword_sort,
      sym_keyword_take,
      sym_keyword_join,
      sym_keyword_select,
  [5915] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(143), 1,
      sym_comment,
    ACTIONS(345), 10,
      ts_builtin_sym_end,
      sym_keyword_from,
      sym_keyword_filter,
      sym_keyword_derive,
      sym_keyword_group,
      sym_keyword_aggregate,
      sym_keyword_sort,
      sym_keyword_take,
      sym_keyword_join,
      sym_keyword_select,
  [5934] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(144), 1,
      sym_comment,
    ACTIONS(347), 10,
      ts_builtin_sym_end,
      sym_keyword_from,
      sym_keyword_filter,
      sym_keyword_derive,
      sym_keyword_group,
      sym_keyword_aggregate,
      sym_keyword_sort,
      sym_keyword_take,
      sym_keyword_join,
      sym_keyword_select,
  [5953] = 9,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(145), 1,
      sym_keyword_aggregate,
    ACTIONS(147), 1,
      sym_keyword_sort,
    ACTIONS(149), 1,
      sym_keyword_take,
    ACTIONS(315), 1,
      sym_keyword_window,
    ACTIONS(349), 1,
      anon_sym_RPAREN,
    STATE(145), 1,
      sym_comment,
    STATE(152), 1,
      aux_sym_group_repeat2,
    STATE(167), 4,
      sym_aggregate,
      sym_sorts,
      sym_takes,
      sym_window,
  [5984] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(146), 1,
      sym_comment,
    ACTIONS(351), 10,
      ts_builtin_sym_end,
      sym_keyword_from,
      sym_keyword_filter,
      sym_keyword_derive,
      sym_keyword_group,
      sym_keyword_aggregate,
      sym_keyword_sort,
      sym_keyword_take,
      sym_keyword_join,
      sym_keyword_select,
  [6003] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(147), 1,
      sym_comment,
    ACTIONS(353), 10,
      ts_builtin_sym_end,
      sym_keyword_from,
      sym_keyword_filter,
      sym_keyword_derive,
      sym_keyword_group,
      sym_keyword_aggregate,
      sym_keyword_sort,
      sym_keyword_take,
      sym_keyword_join,
      sym_keyword_select,
  [6022] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(148), 1,
      sym_comment,
    ACTIONS(355), 10,
      ts_builtin_sym_end,
      sym_keyword_from,
      sym_keyword_filter,
      sym_keyword_derive,
      sym_keyword_group,
      sym_keyword_aggregate,
      sym_keyword_sort,
      sym_keyword_take,
      sym_keyword_join,
      sym_keyword_select,
  [6041] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(149), 1,
      sym_comment,
    ACTIONS(357), 10,
      ts_builtin_sym_end,
      sym_keyword_from,
      sym_keyword_filter,
      sym_keyword_derive,
      sym_keyword_group,
      sym_keyword_aggregate,
      sym_keyword_sort,
      sym_keyword_take,
      sym_keyword_join,
      sym_keyword_select,
  [6060] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(150), 1,
      sym_comment,
    ACTIONS(359), 10,
      ts_builtin_sym_end,
      sym_keyword_from,
      sym_keyword_filter,
      sym_keyword_derive,
      sym_keyword_group,
      sym_keyword_aggregate,
      sym_keyword_sort,
      sym_keyword_take,
      sym_keyword_join,
      sym_keyword_select,
  [6079] = 9,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(145), 1,
      sym_keyword_aggregate,
    ACTIONS(147), 1,
      sym_keyword_sort,
    ACTIONS(149), 1,
      sym_keyword_take,
    ACTIONS(315), 1,
      sym_keyword_window,
    ACTIONS(361), 1,
      anon_sym_RPAREN,
    STATE(151), 1,
      sym_comment,
    STATE(152), 1,
      aux_sym_group_repeat2,
    STATE(167), 4,
      sym_aggregate,
      sym_sorts,
      sym_takes,
      sym_window,
  [6110] = 8,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(363), 1,
      sym_keyword_aggregate,
    ACTIONS(366), 1,
      sym_keyword_sort,
    ACTIONS(369), 1,
      sym_keyword_take,
    ACTIONS(372), 1,
      sym_keyword_window,
    ACTIONS(375), 1,
      anon_sym_RPAREN,
    STATE(152), 2,
      sym_comment,
      aux_sym_group_repeat2,
    STATE(167), 4,
      sym_aggregate,
      sym_sorts,
      sym_takes,
      sym_window,
  [6139] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(153), 1,
      sym_comment,
    ACTIONS(377), 10,
      ts_builtin_sym_end,
      sym_keyword_from,
      sym_keyword_filter,
      sym_keyword_derive,
      sym_keyword_group,
      sym_keyword_aggregate,
      sym_keyword_sort,
      sym_keyword_take,
      sym_keyword_join,
      sym_keyword_select,
  [6158] = 8,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(145), 1,
      sym_keyword_aggregate,
    ACTIONS(147), 1,
      sym_keyword_sort,
    ACTIONS(149), 1,
      sym_keyword_take,
    ACTIONS(315), 1,
      sym_keyword_window,
    STATE(145), 1,
      aux_sym_group_repeat2,
    STATE(154), 1,
      sym_comment,
    STATE(167), 4,
      sym_aggregate,
      sym_sorts,
      sym_takes,
      sym_window,
  [6186] = 8,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(145), 1,
      sym_keyword_aggregate,
    ACTIONS(147), 1,
      sym_keyword_sort,
    ACTIONS(149), 1,
      sym_keyword_take,
    ACTIONS(315), 1,
      sym_keyword_window,
    STATE(130), 1,
      aux_sym_group_repeat2,
    STATE(155), 1,
      sym_comment,
    STATE(167), 4,
      sym_aggregate,
      sym_sorts,
      sym_takes,
      sym_window,
  [6214] = 8,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(145), 1,
      sym_keyword_aggregate,
    ACTIONS(147), 1,
      sym_keyword_sort,
    ACTIONS(149), 1,
      sym_keyword_take,
    ACTIONS(315), 1,
      sym_keyword_window,
    STATE(134), 1,
      aux_sym_group_repeat2,
    STATE(156), 1,
      sym_comment,
    STATE(167), 4,
      sym_aggregate,
      sym_sorts,
      sym_takes,
      sym_window,
  [6242] = 8,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(145), 1,
      sym_keyword_aggregate,
    ACTIONS(147), 1,
      sym_keyword_sort,
    ACTIONS(149), 1,
      sym_keyword_take,
    ACTIONS(315), 1,
      sym_keyword_window,
    STATE(129), 1,
      aux_sym_group_repeat2,
    STATE(157), 1,
      sym_comment,
    STATE(167), 4,
      sym_aggregate,
      sym_sorts,
      sym_takes,
      sym_window,
  [6270] = 8,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(145), 1,
      sym_keyword_aggregate,
    ACTIONS(147), 1,
      sym_keyword_sort,
    ACTIONS(149), 1,
      sym_keyword_take,
    ACTIONS(315), 1,
      sym_keyword_window,
    STATE(151), 1,
      aux_sym_group_repeat2,
    STATE(158), 1,
      sym_comment,
    STATE(167), 4,
      sym_aggregate,
      sym_sorts,
      sym_takes,
      sym_window,
  [6298] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(159), 1,
      sym_comment,
    ACTIONS(379), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_identifier,
    ACTIONS(381), 5,
      anon_sym_DASH,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym__number,
      anon_sym_DOT,
  [6317] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(160), 1,
      sym_comment,
    ACTIONS(379), 3,
      sym_keyword_true,
      sym_keyword_false,
      sym_identifier,
    ACTIONS(381), 5,
      anon_sym_DASH,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym__number,
      anon_sym_DOT,
  [6336] = 9,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(101), 1,
      anon_sym_DQUOTE,
    ACTIONS(383), 1,
      anon_sym_LBRACK,
    ACTIONS(385), 1,
      sym_identifier,
    STATE(132), 1,
      sym_field,
    STATE(133), 1,
      sym_table_reference,
    STATE(161), 1,
      sym_comment,
    STATE(206), 1,
      sym__double_quote_string,
    STATE(219), 1,
      sym__alias_identifier,
  [6364] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(389), 1,
      anon_sym_LPAREN,
    STATE(162), 1,
      sym_comment,
    STATE(163), 1,
      aux_sym_window_definitions_repeat1,
    STATE(170), 1,
      sym__window_definition,
    ACTIONS(387), 3,
      sym_keyword_rolling,
      sym_keyword_rows,
      sym_keyword_expanding,
  [6385] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(394), 1,
      anon_sym_LPAREN,
    STATE(170), 1,
      sym__window_definition,
    STATE(163), 2,
      sym_comment,
      aux_sym_window_definitions_repeat1,
    ACTIONS(391), 3,
      sym_keyword_rolling,
      sym_keyword_rows,
      sym_keyword_expanding,
  [6404] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(162), 1,
      aux_sym_window_definitions_repeat1,
    STATE(164), 1,
      sym_comment,
    STATE(170), 1,
      sym__window_definition,
    STATE(214), 1,
      sym_window_definitions,
    ACTIONS(387), 3,
      sym_keyword_rolling,
      sym_keyword_rows,
      sym_keyword_expanding,
  [6425] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(165), 1,
      sym_comment,
    ACTIONS(396), 5,
      sym_keyword_aggregate,
      sym_keyword_sort,
      sym_keyword_take,
      sym_keyword_window,
      anon_sym_RPAREN,
  [6439] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(398), 1,
      ts_builtin_sym_end,
    ACTIONS(400), 1,
      sym_keyword_from,
    STATE(38), 1,
      sym_from,
    STATE(191), 1,
      sym_pipeline,
    STATE(166), 2,
      sym_comment,
      aux_sym_program_repeat1,
  [6459] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(167), 1,
      sym_comment,
    ACTIONS(403), 5,
      sym_keyword_aggregate,
      sym_keyword_sort,
      sym_keyword_take,
      sym_keyword_window,
      anon_sym_RPAREN,
  [6473] = 7,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(7), 1,
      sym_keyword_from,
    ACTIONS(405), 1,
      ts_builtin_sym_end,
    STATE(38), 1,
      sym_from,
    STATE(166), 1,
      aux_sym_program_repeat1,
    STATE(168), 1,
      sym_comment,
    STATE(191), 1,
      sym_pipeline,
  [6495] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(169), 1,
      sym_comment,
    ACTIONS(407), 4,
      sym_keyword_inner,
      sym_keyword_left,
      sym_keyword_right,
      sym_keyword_full,
  [6508] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(170), 1,
      sym_comment,
    ACTIONS(409), 4,
      sym_keyword_rolling,
      sym_keyword_rows,
      sym_keyword_expanding,
      anon_sym_LPAREN,
  [6521] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(171), 1,
      sym_comment,
    ACTIONS(411), 4,
      sym_keyword_rolling,
      sym_keyword_rows,
      sym_keyword_expanding,
      anon_sym_LPAREN,
  [6534] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(413), 1,
      anon_sym_COMMA,
    ACTIONS(415), 1,
      anon_sym_RBRACK,
    STATE(172), 1,
      sym_comment,
    STATE(176), 1,
      aux_sym_derives_repeat1,
  [6550] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(131), 1,
      anon_sym_RBRACK,
    ACTIONS(417), 1,
      anon_sym_COMMA,
    STATE(173), 1,
      sym_comment,
    STATE(186), 1,
      aux_sym_sorts_repeat1,
  [6566] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(175), 1,
      anon_sym_RBRACK,
    ACTIONS(419), 1,
      anon_sym_COMMA,
    STATE(174), 1,
      sym_comment,
    STATE(185), 1,
      aux_sym_group_repeat1,
  [6582] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(113), 1,
      anon_sym_RBRACK,
    ACTIONS(421), 1,
      anon_sym_COMMA,
    STATE(175), 1,
      sym_comment,
    STATE(189), 1,
      aux_sym_aggregate_repeat1,
  [6598] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(173), 1,
      anon_sym_RBRACK,
    ACTIONS(423), 1,
      anon_sym_COMMA,
    STATE(176), 1,
      sym_comment,
    STATE(184), 1,
      aux_sym_derives_repeat1,
  [6614] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(131), 1,
      anon_sym_RBRACK,
    ACTIONS(417), 1,
      anon_sym_COMMA,
    STATE(177), 1,
      sym_comment,
    STATE(182), 1,
      aux_sym_sorts_repeat1,
  [6630] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(171), 1,
      anon_sym_RBRACK,
    ACTIONS(425), 1,
      anon_sym_COMMA,
    STATE(178), 1,
      sym_comment,
    STATE(185), 1,
      aux_sym_group_repeat1,
  [6646] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(249), 1,
      anon_sym_RBRACK,
    ACTIONS(427), 1,
      anon_sym_COMMA,
    STATE(179), 2,
      sym_comment,
      aux_sym_conditions_repeat1,
  [6660] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(430), 1,
      anon_sym_COMMA,
    ACTIONS(432), 1,
      anon_sym_RBRACK,
    STATE(174), 1,
      aux_sym_group_repeat1,
    STATE(180), 1,
      sym_comment,
  [6676] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(434), 1,
      anon_sym_COMMA,
    ACTIONS(436), 1,
      anon_sym_RBRACK,
    STATE(178), 1,
      aux_sym_group_repeat1,
    STATE(181), 1,
      sym_comment,
  [6692] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(438), 1,
      anon_sym_COMMA,
    ACTIONS(441), 1,
      anon_sym_RBRACK,
    STATE(182), 2,
      sym_comment,
      aux_sym_sorts_repeat1,
  [6706] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(239), 1,
      anon_sym_RBRACK,
    ACTIONS(443), 1,
      anon_sym_COMMA,
    STATE(179), 1,
      aux_sym_conditions_repeat1,
    STATE(183), 1,
      sym_comment,
  [6722] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(445), 1,
      anon_sym_COMMA,
    ACTIONS(448), 1,
      anon_sym_RBRACK,
    STATE(184), 2,
      sym_comment,
      aux_sym_derives_repeat1,
  [6736] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(450), 1,
      anon_sym_COMMA,
    ACTIONS(453), 1,
      anon_sym_RBRACK,
    STATE(185), 2,
      sym_comment,
      aux_sym_group_repeat1,
  [6750] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(133), 1,
      anon_sym_RBRACK,
    ACTIONS(455), 1,
      anon_sym_COMMA,
    STATE(182), 1,
      aux_sym_sorts_repeat1,
    STATE(186), 1,
      sym_comment,
  [6766] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(457), 1,
      anon_sym_COMMA,
    ACTIONS(459), 1,
      anon_sym_RBRACK,
    STATE(177), 1,
      aux_sym_sorts_repeat1,
    STATE(187), 1,
      sym_comment,
  [6782] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(217), 1,
      anon_sym_COMMA,
    ACTIONS(219), 1,
      anon_sym_RBRACK,
    STATE(175), 1,
      aux_sym_aggregate_repeat1,
    STATE(188), 1,
      sym_comment,
  [6798] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(237), 1,
      anon_sym_RBRACK,
    ACTIONS(461), 1,
      anon_sym_COMMA,
    STATE(189), 2,
      sym_comment,
      aux_sym_aggregate_repeat1,
  [6812] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(190), 1,
      sym_comment,
    ACTIONS(464), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [6823] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(191), 1,
      sym_comment,
    ACTIONS(466), 2,
      ts_builtin_sym_end,
      sym_keyword_from,
  [6834] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(192), 1,
      sym_comment,
    ACTIONS(237), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [6845] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(468), 1,
      sym__number,
    ACTIONS(470), 1,
      anon_sym_DOT,
    STATE(193), 1,
      sym_comment,
  [6858] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(194), 1,
      sym_comment,
    ACTIONS(472), 2,
      ts_builtin_sym_end,
      sym_keyword_from,
  [6869] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(141), 1,
      sym_keyword_derive,
    STATE(195), 1,
      sym_comment,
    STATE(227), 1,
      sym_derives,
  [6882] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(196), 1,
      sym_comment,
    ACTIONS(453), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [6893] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(197), 1,
      sym_comment,
    ACTIONS(448), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [6904] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(198), 1,
      sym_comment,
    ACTIONS(441), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [6915] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(474), 1,
      anon_sym_LPAREN,
    STATE(199), 1,
      sym_comment,
  [6925] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(219), 1,
      anon_sym_RBRACK,
    STATE(200), 1,
      sym_comment,
  [6935] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(476), 1,
      anon_sym_COLON,
    STATE(201), 1,
      sym_comment,
  [6945] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(436), 1,
      anon_sym_RBRACK,
    STATE(202), 1,
      sym_comment,
  [6955] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(478), 1,
      anon_sym_LPAREN,
    STATE(203), 1,
      sym_comment,
  [6965] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(480), 1,
      anon_sym_COLON,
    STATE(204), 1,
      sym_comment,
  [6975] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(482), 1,
      sym_identifier,
    STATE(205), 1,
      sym_comment,
  [6985] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(27), 1,
      anon_sym_DOT,
    STATE(206), 1,
      sym_comment,
  [6995] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(484), 1,
      anon_sym_SQUOTE,
    STATE(207), 1,
      sym_comment,
  [7005] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(486), 1,
      anon_sym_DQUOTE,
    STATE(208), 1,
      sym_comment,
  [7015] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(415), 1,
      anon_sym_RBRACK,
    STATE(209), 1,
      sym_comment,
  [7025] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(459), 1,
      anon_sym_RBRACK,
    STATE(210), 1,
      sym_comment,
  [7035] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(17), 1,
      sym__number,
    STATE(211), 1,
      sym_comment,
  [7045] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(488), 1,
      anon_sym_DOT,
    STATE(212), 1,
      sym_comment,
  [7055] = 3,
    ACTIONS(490), 1,
      anon_sym_POUND,
    ACTIONS(492), 1,
      aux_sym_comment_token1,
    STATE(213), 1,
      sym_comment,
  [7065] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(494), 1,
      anon_sym_LPAREN,
    STATE(214), 1,
      sym_comment,
  [7075] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(235), 1,
      anon_sym_RBRACK,
    STATE(215), 1,
      sym_comment,
  [7085] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(432), 1,
      anon_sym_RBRACK,
    STATE(216), 1,
      sym_comment,
  [7095] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(496), 1,
      sym_keyword_side,
    STATE(217), 1,
      sym_comment,
  [7105] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(498), 1,
      anon_sym_LBRACK,
    STATE(218), 1,
      sym_comment,
  [7115] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(500), 1,
      anon_sym_DOT,
    STATE(219), 1,
      sym_comment,
  [7125] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(502), 1,
      anon_sym_LPAREN,
    STATE(220), 1,
      sym_comment,
  [7135] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(504), 1,
      sym__number,
    STATE(221), 1,
      sym_comment,
  [7145] = 3,
    ACTIONS(490), 1,
      anon_sym_POUND,
    ACTIONS(506), 1,
      aux_sym__literal_string_token1,
    STATE(222), 1,
      sym_comment,
  [7155] = 3,
    ACTIONS(490), 1,
      anon_sym_POUND,
    ACTIONS(508), 1,
      aux_sym__double_quote_string_token1,
    STATE(223), 1,
      sym_comment,
  [7165] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(510), 1,
      anon_sym_LPAREN,
    STATE(224), 1,
      sym_comment,
  [7175] = 3,
    ACTIONS(490), 1,
      anon_sym_POUND,
    ACTIONS(512), 1,
      aux_sym__double_quote_string_token1,
    STATE(225), 1,
      sym_comment,
  [7185] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(514), 1,
      anon_sym_LPAREN,
    STATE(226), 1,
      sym_comment,
  [7195] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(516), 1,
      anon_sym_RPAREN,
    STATE(227), 1,
      sym_comment,
  [7205] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(518), 1,
      ts_builtin_sym_end,
    STATE(228), 1,
      sym_comment,
  [7215] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(520), 1,
      anon_sym_DQUOTE,
    STATE(229), 1,
      sym_comment,
  [7225] = 1,
    ACTIONS(522), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 49,
  [SMALL_STATE(4)] = 98,
  [SMALL_STATE(5)] = 144,
  [SMALL_STATE(6)] = 192,
  [SMALL_STATE(7)] = 238,
  [SMALL_STATE(8)] = 284,
  [SMALL_STATE(9)] = 330,
  [SMALL_STATE(10)] = 376,
  [SMALL_STATE(11)] = 422,
  [SMALL_STATE(12)] = 468,
  [SMALL_STATE(13)] = 514,
  [SMALL_STATE(14)] = 562,
  [SMALL_STATE(15)] = 608,
  [SMALL_STATE(16)] = 656,
  [SMALL_STATE(17)] = 711,
  [SMALL_STATE(18)] = 770,
  [SMALL_STATE(19)] = 821,
  [SMALL_STATE(20)] = 870,
  [SMALL_STATE(21)] = 917,
  [SMALL_STATE(22)] = 974,
  [SMALL_STATE(23)] = 1019,
  [SMALL_STATE(24)] = 1077,
  [SMALL_STATE(25)] = 1132,
  [SMALL_STATE(26)] = 1187,
  [SMALL_STATE(27)] = 1242,
  [SMALL_STATE(28)] = 1314,
  [SMALL_STATE(29)] = 1383,
  [SMALL_STATE(30)] = 1452,
  [SMALL_STATE(31)] = 1495,
  [SMALL_STATE(32)] = 1561,
  [SMALL_STATE(33)] = 1610,
  [SMALL_STATE(34)] = 1675,
  [SMALL_STATE(35)] = 1737,
  [SMALL_STATE(36)] = 1799,
  [SMALL_STATE(37)] = 1861,
  [SMALL_STATE(38)] = 1923,
  [SMALL_STATE(39)] = 1974,
  [SMALL_STATE(40)] = 2033,
  [SMALL_STATE(41)] = 2092,
  [SMALL_STATE(42)] = 2151,
  [SMALL_STATE(43)] = 2186,
  [SMALL_STATE(44)] = 2247,
  [SMALL_STATE(45)] = 2305,
  [SMALL_STATE(46)] = 2361,
  [SMALL_STATE(47)] = 2419,
  [SMALL_STATE(48)] = 2475,
  [SMALL_STATE(49)] = 2521,
  [SMALL_STATE(50)] = 2569,
  [SMALL_STATE(51)] = 2625,
  [SMALL_STATE(52)] = 2681,
  [SMALL_STATE(53)] = 2737,
  [SMALL_STATE(54)] = 2793,
  [SMALL_STATE(55)] = 2848,
  [SMALL_STATE(56)] = 2901,
  [SMALL_STATE(57)] = 2954,
  [SMALL_STATE(58)] = 3009,
  [SMALL_STATE(59)] = 3062,
  [SMALL_STATE(60)] = 3115,
  [SMALL_STATE(61)] = 3150,
  [SMALL_STATE(62)] = 3201,
  [SMALL_STATE(63)] = 3254,
  [SMALL_STATE(64)] = 3307,
  [SMALL_STATE(65)] = 3338,
  [SMALL_STATE(66)] = 3391,
  [SMALL_STATE(67)] = 3442,
  [SMALL_STATE(68)] = 3492,
  [SMALL_STATE(69)] = 3526,
  [SMALL_STATE(70)] = 3554,
  [SMALL_STATE(71)] = 3584,
  [SMALL_STATE(72)] = 3636,
  [SMALL_STATE(73)] = 3688,
  [SMALL_STATE(74)] = 3738,
  [SMALL_STATE(75)] = 3785,
  [SMALL_STATE(76)] = 3832,
  [SMALL_STATE(77)] = 3873,
  [SMALL_STATE(78)] = 3920,
  [SMALL_STATE(79)] = 3967,
  [SMALL_STATE(80)] = 4014,
  [SMALL_STATE(81)] = 4043,
  [SMALL_STATE(82)] = 4092,
  [SMALL_STATE(83)] = 4139,
  [SMALL_STATE(84)] = 4168,
  [SMALL_STATE(85)] = 4197,
  [SMALL_STATE(86)] = 4244,
  [SMALL_STATE(87)] = 4291,
  [SMALL_STATE(88)] = 4338,
  [SMALL_STATE(89)] = 4379,
  [SMALL_STATE(90)] = 4426,
  [SMALL_STATE(91)] = 4473,
  [SMALL_STATE(92)] = 4500,
  [SMALL_STATE(93)] = 4529,
  [SMALL_STATE(94)] = 4576,
  [SMALL_STATE(95)] = 4623,
  [SMALL_STATE(96)] = 4670,
  [SMALL_STATE(97)] = 4717,
  [SMALL_STATE(98)] = 4742,
  [SMALL_STATE(99)] = 4789,
  [SMALL_STATE(100)] = 4836,
  [SMALL_STATE(101)] = 4883,
  [SMALL_STATE(102)] = 4913,
  [SMALL_STATE(103)] = 4953,
  [SMALL_STATE(104)] = 4985,
  [SMALL_STATE(105)] = 5019,
  [SMALL_STATE(106)] = 5059,
  [SMALL_STATE(107)] = 5095,
  [SMALL_STATE(108)] = 5123,
  [SMALL_STATE(109)] = 5161,
  [SMALL_STATE(110)] = 5201,
  [SMALL_STATE(111)] = 5238,
  [SMALL_STATE(112)] = 5263,
  [SMALL_STATE(113)] = 5284,
  [SMALL_STATE(114)] = 5305,
  [SMALL_STATE(115)] = 5326,
  [SMALL_STATE(116)] = 5347,
  [SMALL_STATE(117)] = 5368,
  [SMALL_STATE(118)] = 5389,
  [SMALL_STATE(119)] = 5410,
  [SMALL_STATE(120)] = 5431,
  [SMALL_STATE(121)] = 5452,
  [SMALL_STATE(122)] = 5473,
  [SMALL_STATE(123)] = 5494,
  [SMALL_STATE(124)] = 5514,
  [SMALL_STATE(125)] = 5534,
  [SMALL_STATE(126)] = 5554,
  [SMALL_STATE(127)] = 5574,
  [SMALL_STATE(128)] = 5594,
  [SMALL_STATE(129)] = 5613,
  [SMALL_STATE(130)] = 5644,
  [SMALL_STATE(131)] = 5675,
  [SMALL_STATE(132)] = 5694,
  [SMALL_STATE(133)] = 5713,
  [SMALL_STATE(134)] = 5732,
  [SMALL_STATE(135)] = 5763,
  [SMALL_STATE(136)] = 5782,
  [SMALL_STATE(137)] = 5801,
  [SMALL_STATE(138)] = 5820,
  [SMALL_STATE(139)] = 5839,
  [SMALL_STATE(140)] = 5858,
  [SMALL_STATE(141)] = 5877,
  [SMALL_STATE(142)] = 5896,
  [SMALL_STATE(143)] = 5915,
  [SMALL_STATE(144)] = 5934,
  [SMALL_STATE(145)] = 5953,
  [SMALL_STATE(146)] = 5984,
  [SMALL_STATE(147)] = 6003,
  [SMALL_STATE(148)] = 6022,
  [SMALL_STATE(149)] = 6041,
  [SMALL_STATE(150)] = 6060,
  [SMALL_STATE(151)] = 6079,
  [SMALL_STATE(152)] = 6110,
  [SMALL_STATE(153)] = 6139,
  [SMALL_STATE(154)] = 6158,
  [SMALL_STATE(155)] = 6186,
  [SMALL_STATE(156)] = 6214,
  [SMALL_STATE(157)] = 6242,
  [SMALL_STATE(158)] = 6270,
  [SMALL_STATE(159)] = 6298,
  [SMALL_STATE(160)] = 6317,
  [SMALL_STATE(161)] = 6336,
  [SMALL_STATE(162)] = 6364,
  [SMALL_STATE(163)] = 6385,
  [SMALL_STATE(164)] = 6404,
  [SMALL_STATE(165)] = 6425,
  [SMALL_STATE(166)] = 6439,
  [SMALL_STATE(167)] = 6459,
  [SMALL_STATE(168)] = 6473,
  [SMALL_STATE(169)] = 6495,
  [SMALL_STATE(170)] = 6508,
  [SMALL_STATE(171)] = 6521,
  [SMALL_STATE(172)] = 6534,
  [SMALL_STATE(173)] = 6550,
  [SMALL_STATE(174)] = 6566,
  [SMALL_STATE(175)] = 6582,
  [SMALL_STATE(176)] = 6598,
  [SMALL_STATE(177)] = 6614,
  [SMALL_STATE(178)] = 6630,
  [SMALL_STATE(179)] = 6646,
  [SMALL_STATE(180)] = 6660,
  [SMALL_STATE(181)] = 6676,
  [SMALL_STATE(182)] = 6692,
  [SMALL_STATE(183)] = 6706,
  [SMALL_STATE(184)] = 6722,
  [SMALL_STATE(185)] = 6736,
  [SMALL_STATE(186)] = 6750,
  [SMALL_STATE(187)] = 6766,
  [SMALL_STATE(188)] = 6782,
  [SMALL_STATE(189)] = 6798,
  [SMALL_STATE(190)] = 6812,
  [SMALL_STATE(191)] = 6823,
  [SMALL_STATE(192)] = 6834,
  [SMALL_STATE(193)] = 6845,
  [SMALL_STATE(194)] = 6858,
  [SMALL_STATE(195)] = 6869,
  [SMALL_STATE(196)] = 6882,
  [SMALL_STATE(197)] = 6893,
  [SMALL_STATE(198)] = 6904,
  [SMALL_STATE(199)] = 6915,
  [SMALL_STATE(200)] = 6925,
  [SMALL_STATE(201)] = 6935,
  [SMALL_STATE(202)] = 6945,
  [SMALL_STATE(203)] = 6955,
  [SMALL_STATE(204)] = 6965,
  [SMALL_STATE(205)] = 6975,
  [SMALL_STATE(206)] = 6985,
  [SMALL_STATE(207)] = 6995,
  [SMALL_STATE(208)] = 7005,
  [SMALL_STATE(209)] = 7015,
  [SMALL_STATE(210)] = 7025,
  [SMALL_STATE(211)] = 7035,
  [SMALL_STATE(212)] = 7045,
  [SMALL_STATE(213)] = 7055,
  [SMALL_STATE(214)] = 7065,
  [SMALL_STATE(215)] = 7075,
  [SMALL_STATE(216)] = 7085,
  [SMALL_STATE(217)] = 7095,
  [SMALL_STATE(218)] = 7105,
  [SMALL_STATE(219)] = 7115,
  [SMALL_STATE(220)] = 7125,
  [SMALL_STATE(221)] = 7135,
  [SMALL_STATE(222)] = 7145,
  [SMALL_STATE(223)] = 7155,
  [SMALL_STATE(224)] = 7165,
  [SMALL_STATE(225)] = 7175,
  [SMALL_STATE(226)] = 7185,
  [SMALL_STATE(227)] = 7195,
  [SMALL_STATE(228)] = 7205,
  [SMALL_STATE(229)] = 7215,
  [SMALL_STATE(230)] = 7225,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(213),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [9] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__decimal_number, 3),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [13] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__decimal_number, 3),
  [15] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__decimal_number, 2),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [19] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__decimal_number, 2),
  [21] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expression, 1),
  [23] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__expression, 1),
  [25] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__literal_string, 1),
  [27] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__alias_identifier, 1, .production_id = 3),
  [29] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__literal_string, 1),
  [31] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__double_quote_string, 3),
  [33] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__double_quote_string, 3),
  [35] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_literal, 1),
  [37] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_literal, 1),
  [39] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__decimal_number, 4),
  [41] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__decimal_number, 4),
  [43] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__literal_string, 3),
  [45] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__literal_string, 3),
  [47] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_expression, 3, .production_id = 7),
  [49] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binary_expression, 3, .production_id = 7),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [53] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field, 3, .production_id = 9),
  [55] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_field, 3, .production_id = 9),
  [57] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field, 1, .production_id = 1),
  [59] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__alias_identifier, 1),
  [61] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_field, 1, .production_id = 1),
  [63] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [65] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [67] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [69] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [71] = {.entry = {.count = 1, .reusable = false}}, SHIFT(96),
  [73] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [75] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [77] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_term, 1, .production_id = 2),
  [79] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [81] = {.entry = {.count = 1, .reusable = false}}, SHIFT(66),
  [83] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_range, 3, .production_id = 12),
  [85] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment, 3, .production_id = 8),
  [87] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment, 4, .production_id = 10),
  [89] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [91] = {.entry = {.count = 1, .reusable = false}}, SHIFT(95),
  [93] = {.entry = {.count = 1, .reusable = false}}, SHIFT(61),
  [95] = {.entry = {.count = 1, .reusable = true}}, SHIFT(200),
  [97] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [99] = {.entry = {.count = 1, .reusable = true}}, SHIFT(193),
  [101] = {.entry = {.count = 1, .reusable = true}}, SHIFT(223),
  [103] = {.entry = {.count = 1, .reusable = true}}, SHIFT(222),
  [105] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [107] = {.entry = {.count = 1, .reusable = true}}, SHIFT(221),
  [109] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [111] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [113] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [115] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_takes, 2, .production_id = 6),
  [117] = {.entry = {.count = 1, .reusable = false}}, SHIFT(3),
  [119] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__boolean_expression, 1, .production_id = 5),
  [121] = {.entry = {.count = 1, .reusable = true}}, SHIFT(210),
  [123] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [125] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [127] = {.entry = {.count = 1, .reusable = true}}, SHIFT(160),
  [129] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [131] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [133] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [135] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [137] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pipeline, 1),
  [139] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [141] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [143] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [145] = {.entry = {.count = 1, .reusable = true}}, SHIFT(218),
  [147] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [149] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [151] = {.entry = {.count = 1, .reusable = true}}, SHIFT(217),
  [153] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
  [155] = {.entry = {.count = 1, .reusable = true}}, SHIFT(202),
  [157] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [159] = {.entry = {.count = 1, .reusable = true}}, SHIFT(216),
  [161] = {.entry = {.count = 1, .reusable = true}}, SHIFT(199),
  [163] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__window_definition, 3, .production_id = 13),
  [165] = {.entry = {.count = 1, .reusable = true}}, SHIFT(209),
  [167] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [169] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [171] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [173] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [175] = {.entry = {.count = 1, .reusable = true}}, SHIFT(203),
  [177] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_transforms_repeat1, 2),
  [179] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_transforms_repeat1, 2), SHIFT_REPEAT(63),
  [182] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_transforms_repeat1, 2), SHIFT_REPEAT(52),
  [185] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_transforms_repeat1, 2), SHIFT_REPEAT(51),
  [188] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_transforms_repeat1, 2), SHIFT_REPEAT(218),
  [191] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_transforms_repeat1, 2), SHIFT_REPEAT(34),
  [194] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_transforms_repeat1, 2), SHIFT_REPEAT(67),
  [197] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_transforms_repeat1, 2), SHIFT_REPEAT(217),
  [200] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_transforms_repeat1, 2), SHIFT_REPEAT(161),
  [203] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_transforms, 1),
  [205] = {.entry = {.count = 1, .reusable = true}}, SHIFT(226),
  [207] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [209] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [211] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [213] = {.entry = {.count = 1, .reusable = true}}, SHIFT(215),
  [215] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [217] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [219] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [221] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__aggregate_count, 1),
  [223] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [225] = {.entry = {.count = 1, .reusable = false}}, SHIFT(82),
  [227] = {.entry = {.count = 1, .reusable = true}}, SHIFT(225),
  [229] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [231] = {.entry = {.count = 1, .reusable = false}}, SHIFT(84),
  [233] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [235] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [237] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_aggregate_repeat1, 2),
  [239] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [241] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [243] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [245] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [247] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__aggregate_count, 2),
  [249] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_conditions_repeat1, 2),
  [251] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__alias_identifier, 1),
  [253] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_aggregate_operation, 2),
  [255] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__alias_identifier, 1, .production_id = 3),
  [257] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [259] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [261] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [263] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [265] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [267] = {.entry = {.count = 1, .reusable = false}}, SHIFT(98),
  [269] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [271] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [273] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [275] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [277] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_joins, 5),
  [279] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [281] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sorts, 3),
  [283] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sorts, 2),
  [285] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sorts, 4),
  [287] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sorts, 5),
  [289] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_aggregate, 3),
  [291] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_takes, 2),
  [293] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_aggregate, 5),
  [295] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_aggregate, 6),
  [297] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_aggregate, 4),
  [299] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sorts, 6),
  [301] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sorts, 7),
  [303] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_derives, 4),
  [305] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_derives, 5),
  [307] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_derives, 6),
  [309] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_derives, 3),
  [311] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_derives, 2),
  [313] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__boolean_expression, 3, .production_id = 11),
  [315] = {.entry = {.count = 1, .reusable = true}}, SHIFT(164),
  [317] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [319] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [321] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_from, 2),
  [323] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_reference, 1),
  [325] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select, 2),
  [327] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [329] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_conditions, 5),
  [331] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_reference, 3),
  [333] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_group, 6),
  [335] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_conditions, 4),
  [337] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_group, 9),
  [339] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_conditions, 3),
  [341] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_reference, 2),
  [343] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_joins, 6),
  [345] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_reference, 5),
  [347] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_conditions, 2),
  [349] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [351] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_group, 8),
  [353] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_filter, 2, .production_id = 4),
  [355] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_transforms_repeat1, 1),
  [357] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_group, 7),
  [359] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_reference, 4),
  [361] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [363] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_group_repeat2, 2), SHIFT_REPEAT(218),
  [366] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_group_repeat2, 2), SHIFT_REPEAT(34),
  [369] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_group_repeat2, 2), SHIFT_REPEAT(67),
  [372] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_group_repeat2, 2), SHIFT_REPEAT(164),
  [375] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_group_repeat2, 2),
  [377] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_group, 5),
  [379] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_direction, 1),
  [381] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_direction, 1),
  [383] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [385] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [387] = {.entry = {.count = 1, .reusable = true}}, SHIFT(201),
  [389] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_window_definitions, 1),
  [391] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_window_definitions_repeat1, 2), SHIFT_REPEAT(201),
  [394] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_window_definitions_repeat1, 2),
  [396] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_window, 5),
  [398] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2),
  [400] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(55),
  [403] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_group_repeat2, 1),
  [405] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 1),
  [407] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [409] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_window_definitions_repeat1, 1),
  [411] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__window_definition, 3),
  [413] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [415] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [417] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [419] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [421] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [423] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [425] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [427] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_conditions_repeat1, 2), SHIFT_REPEAT(81),
  [430] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [432] = {.entry = {.count = 1, .reusable = true}}, SHIFT(220),
  [434] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [436] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [438] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_sorts_repeat1, 2), SHIFT_REPEAT(40),
  [441] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_sorts_repeat1, 2),
  [443] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [445] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_derives_repeat1, 2), SHIFT_REPEAT(54),
  [448] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_derives_repeat1, 2),
  [450] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_group_repeat1, 2), SHIFT_REPEAT(65),
  [453] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_group_repeat1, 2),
  [455] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [457] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [459] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [461] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_aggregate_repeat1, 2), SHIFT_REPEAT(31),
  [464] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_sorts_repeat1, 3),
  [466] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 1),
  [468] = {.entry = {.count = 1, .reusable = true}}, SHIFT(212),
  [470] = {.entry = {.count = 1, .reusable = true}}, SHIFT(211),
  [472] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pipeline, 2),
  [474] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
  [476] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [478] = {.entry = {.count = 1, .reusable = true}}, SHIFT(158),
  [480] = {.entry = {.count = 1, .reusable = true}}, SHIFT(169),
  [482] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [484] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [486] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [488] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [490] = {.entry = {.count = 1, .reusable = false}}, SHIFT(213),
  [492] = {.entry = {.count = 1, .reusable = false}}, SHIFT(230),
  [494] = {.entry = {.count = 1, .reusable = true}}, SHIFT(195),
  [496] = {.entry = {.count = 1, .reusable = true}}, SHIFT(204),
  [498] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [500] = {.entry = {.count = 1, .reusable = true}}, SHIFT(205),
  [502] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [504] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [506] = {.entry = {.count = 1, .reusable = false}}, SHIFT(207),
  [508] = {.entry = {.count = 1, .reusable = false}}, SHIFT(208),
  [510] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [512] = {.entry = {.count = 1, .reusable = false}}, SHIFT(229),
  [514] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [516] = {.entry = {.count = 1, .reusable = true}}, SHIFT(165),
  [518] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [520] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [522] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 2),
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
