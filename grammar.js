module.exports = grammar({
    name: 'prql',

    extras: $ => [
        /\s\n/,
        /\s/,
        $.comment,
    ],
    precedences: $ => [
        [
            'binary_plus',
            'binary_times',
            'binary_pipe',
            'binary_relation',
            'alias_assignment',
            'coalesce',
            'range',
            'clause_connective',
            'clause_disjunctive',
        ],
    ],

    rules: {
        program: $ => seq(
            repeat($.prql),
            repeat(
                choice(
                    $.pipeline,
                    $.function_definition,
                    $.variable,
                ),
            ),
        ),

        keyword_from: _ => make_keyword("from"),
        keyword_filter: _ => make_keyword("filter"),
        keyword_derive: _ => make_keyword("derive"),
        keyword_group: _ => make_keyword("group"),
        keyword_aggregate: _ => make_keyword("aggregate"),
        keyword_sort: _ => make_keyword("sort"),
        keyword_take: _ => make_keyword("take"),
        keyword_window: _ => make_keyword("window"),
        keyword_join: _ => make_keyword("join"),
        keyword_select: _ => make_keyword("select"),
        keyword_true: _ => make_keyword("true"),
        keyword_false: _ => make_keyword("false"),
        keyword_switch: _ => make_keyword("switch"),
        keyword_average: _ => make_keyword("average"),
        keyword_min: _ => make_keyword("min"),
        keyword_max: _ => make_keyword("max"),
        keyword_count: _ => make_keyword("count"),
        keyword_stddev: _ => make_keyword("stddev"),
        keyword_avg: _ => make_keyword("avg"),
        keyword_sum: _ => make_keyword("sum"),
        keyword_count_distinct: _ => make_keyword("count_distinct"),
        keyword_side: _ => make_keyword("side"),
        keyword_inner: _ => make_keyword("inner"),
        keyword_left: _ => make_keyword("left"),
        keyword_right: _ => make_keyword("right"),
        keyword_full: _ => make_keyword("full"),
        keyword_and: _ => make_keyword("and"),
        keyword_or: _ => make_keyword("or"),
        keyword_in: _ => make_keyword("in"),
        keyword_rolling: _ => make_keyword("rolling"),
        keyword_rows: _ => make_keyword("rows"),
        keyword_expanding: _ => make_keyword("expanding"),
        keyword_null: _ => make_keyword("null"),

        keyword_func: _ => make_keyword("func"),
        keyword_let: _ => make_keyword("let"),
        keyword_prql: _ => make_keyword("prql"),
        keyword_version: _ => make_keyword("version"),
        keyword_target: _ => make_keyword("target"),

        prql: $ => seq(
            $.keyword_prql,
            choice(
                seq(
                    $.keyword_version,
                    ":",
                    field("version", alias($._double_quote_string, $.literal)),
                ),
                seq(
                    $.keyword_target,
                    ":",
                    field("target", $.target),
                ),
            ),
        ),

        target: $ => choice(
            "sql.ansi",
            "sql.bigquery",
            "sql.clickhouse",
            "sql.generic",
            "sql.hive",
            "sql.mssql",
            "sql.mysql",
            "sql.postgres",
            "sql.sqlite",
            "sql.snowflake",
            "sql.duckdb",
        ),
        keyword_from_text: _ => make_keyword("from_text"),
        keyword_format: _ => make_keyword("format"),
        keyword_csv: _ => make_keyword("csv"),
        keyword_json: _ => make_keyword("json"),

        pipeline: $ => seq(
            choice(
                $.from,
                $.from_text,
            ),
            optional($.transforms),
        ),

        variable: $ => seq(
            $.keyword_let,
            field("name", $.identifier),
            "=",
            choice(
                parens($.pipeline),
                seq(
                    $.from_text,
                    optional($.transforms),
                ),
            ),
        ),

        function_definition: $ => seq(
            $.keyword_func,
            field("name", $.identifier),
            repeat1($.parameter),
            "->",
            field("logic", choice($.binary_expression, $.s_string)),
        ),

        parameter: $ => choice(
            $.identifier,
            seq($.identifier, ":", field("default", $.literal)),
        ),

        _call_parameter: $ => choice(
            seq($.identifier, ":", field("value", $.literal)),
            field("value", $.literal),
            field("value", $.identifier),
        ),

        function_call: $ => prec(2, 
            seq(
                field("name", $.identifier),
                repeat1(alias($._call_parameter, $.parameter)),
            ),
        ),

        from_text: $ => seq(
            $.keyword_from_text,
            optional(
                seq(
                    $.keyword_format,
                    ":",
                    choice(
                        $.keyword_csv,
                        $.keyword_json,
                    )
                ),
            ),
            alias($._triple_quote_string, $.literal),
        ),

        transforms: $ => repeat1(
            choice(
                $.derives,
                $.sorts,
                $.takes,
                $.joins,
                $.filter,
                $.select,
                $.aggregate,
                $.group,
            ),
        ),

        from: $ => seq(
            $.keyword_from,
            $.term,
        ),

        derives: $ => seq(
            $.keyword_derive,
            choice(
                $.term,
                $.assignment,
                $.binary_expression,
                sq_bracket_list(
                    choice(
                        $.term,
                        $.binary_expression,
                        seq('(', $.binary_expression, ')'),
                    ),
                    false
                ),
            )
        ),

        filter: $ => seq(
            $.keyword_filter,
            $._boolean_expression,
            // TODO: (age | in 25..40)
        ),

        _boolean_expression: $ => seq(
            choice(
                parens(field("predicate", $._expression)),
                field("predicate", $._expression),
            ),
        ),

        switch: $ => seq(
            $.keyword_switch,
            sq_bracket_list(repeat1($.switch_condition)),
        ),

        switch_condition: $ => seq(
            choice(
                $.binary_expression,
                field("default", $.literal),
            ),
            "->",
            field("result", $.literal),
            ',',
        ),

        aggregate: $ => seq(
            $.keyword_aggregate,
            sq_bracket_list(
                choice(
                    $.binary_expression,
                    $.aggregate_operation,
                    alias($._aggregate_count, $.aggregate_operation),
                    $.assignment,
                ),
            )
        ),

        aggregate_operation: $ => seq(
            choice(
                $.keyword_min,
                $.keyword_max,
                $.keyword_count_distinct,
                $.keyword_average,
                $.keyword_avg,
                $.keyword_sum,
                $.keyword_stddev,
            ),
            $._expression,
        ),

        _aggregate_count: $ => seq(
            $.keyword_count,
            optional($._expression),
        ),
        
        sorts: $ => seq(
            $.keyword_sort,
            choice(
                sq_bracket_list(
                    seq(
                        optional(
                            $.direction,
                        ),
                        $.term,
                    ),
                    false
                ),
                seq(
                    optional(
                        $.direction,
                    ),
                    $.term,
                ),
            ),
        ),

        direction: $ => prec.left (
            choice(
                '-',
                '+',
            ),
        ),

        takes: $ => seq(
            $.keyword_take,
            choice(
                alias($._natural_number, $.literal),
                $.range
            )
        ),

        window: $ => seq(
            $.keyword_window,
            $.window_definitions,
            '(',
            $.derives,
            ')',
        ),

        window_definitions: $ => repeat1(
            $._window_definition,
        ),

        _window_definition: $ => seq(
            choice(
                $.keyword_rolling,
                $.keyword_rows,
                $.keyword_expanding,
            ),
            ':',
            choice(
                $.range,
                alias($.integer, $.literal),
            )
        ),

        group: $ => seq(
            $.keyword_group,
            choice(
                sq_bracket_list($.term),
                $.term,
            ),
            '(',
                repeat1(
                    choice(
                        $.aggregate,
                        $.sorts,
                        $.takes,
                        $.window,
                    ),
                ),
            ')',
        ),

        joins: $ => seq(
            $.keyword_join,
            seq(
                optional($._join_definition),
                $.term,
                optional($.conditions),
            ),
        ),

        _join_definition: $ => seq(
            seq($.keyword_side, ":"),
            choice(
                $.keyword_inner,
                $.keyword_left,
                $.keyword_right,
                $.keyword_full,
            ),
        ),

        conditions: $ => choice(
            sq_bracket_list($.binary_expression, false),
            $._self_join,
        ),

        _self_join: $ => seq(
            '[',
            '==',
            $.term,
            ']',
        ),


        select: $ => seq(
            $.keyword_select,
            $.table_reference,
        ),

        table_reference: $ => choice(
            sq_bracket_list($.term, false),
            $.term,
            $.field,
        ),

        term: $ => prec(3,
            seq(
                choice(
                    field("value", $._expression),
                    field("value", $.assignment),
                    $._double_quote_string,
                    $.f_string,
                    $.s_string,
                ),
            ),
        ),

        _expression: $ => prec(2,prec.left(
            choice(
                $.field,
                $._double_quote_string,
                $.f_string,
                $.s_string,
                $.date,
                $.time,
                $.timestamp,
                $.binary_expression,
                parens($.binary_expression),
                $.literal,
            ),
        )),

        literal: $ => prec(2,
            choice(
                $.integer,
                $.decimal_number,
                $._literal_string,
                $.keyword_true,
                $.keyword_false,
                $.keyword_null,
            ),
        ),

        f_string: $ => choice(
            $._double_f_string,
            $._triple_f_string,
        ),

        s_string: $ => choice(
            $._double_s_string,
            $._triple_s_string,
        ),

        _double_quote_string: _ => seq('"', /[^"]*/, '"'),

        _inner_triple_quotes: _ => repeat1(choice(/.|\n|\r/)),
        _triple_quote_string: $ => seq('"""', $._inner_triple_quotes, '"""'),

        _double_f_string: _ => seq('f"', /[^"]*/, '"'),
        _triple_f_string: $ => seq('f"""', $._inner_triple_quotes, '"""'),
        _double_s_string: _ => seq('s"', /[^"]*/, '"'),
        _triple_s_string: $ => seq('s"""', $._inner_triple_quotes, '"""'),

        _literal_string: $ => prec(1,
            choice(
                seq("'", /[^']*/, "'"),
                $._double_quote_string,
            ),
        ),

        _natural_number: _ => /\d+/,
        _friendly_number: $ => repeat1(choice($._natural_number, '_')),
        integer: $ => prec.left(seq(optional("-"), $._friendly_number)),
        decimal_number: $ => prec.left(
            choice(
                seq(optional("-"), ".", $._natural_number),
                seq($.integer, ".", $._natural_number),
                seq($.integer, "."),
            ),
        ),

        field: $ => prec(1,
            seq(
                optional(
                    seq(
                        field('table', $._alias_identifier),
                        '.',
                    ),
                ),
                field('name', $.identifier),
            ),
        ),

        _alias_identifier : $ => choice(
            $.identifier,
            alias($._double_quote_string, $.identifier),
        ),

        identifier: _ => /([a-zA-Z_][0-9a-zA-Z_]*)/,

        range:$ => choice (...[
            ['..', 'range'],
        ].map(([operator, range_prec]) =>
            prec.left(range_prec, seq(
              field('from', $._expression),
              field('operator', operator),
              field('till', $._expression)
            ))
          ),
        ),

        assignment: $ => choice(... [
            ['=', 'alias_assignment'],
        ].map(([operator, range_prec]) =>
            prec.left(range_prec, choice(
                seq(
                    field('alias', $._expression),
                    field('operator', operator),
                    field('operation', seq(
                        optional(
                            choice(
                                $.keyword_average,
                                $.keyword_sum,
                            ),
                      ),
                      $._expression),
                    ),
                ),
                seq(
                    field('alias', $._expression),
                    field('operator', operator),
                    choice(
                        field('operator', $.function_call),
                        parens(field('operator', $.function_call)),
                    ),
                ),
                seq(
                    field('alias', $._expression),
                    field('operator', operator),
                    field('operator', $.switch),
                ),
                seq(
                    field('alias', $._expression),
                    field('operator', operator),
                    parens(
                    field('operation', seq(
                        optional(
                            choice(
                                $.keyword_average,
                                $.keyword_sum,
                            ),
                      ),
                      $._expression),
                    ),
                    ),
                ),
            ),
        ))),

        binary_expression: $ => choice(
          ...[
            ['+', 'binary_plus'],
            ['-', 'binary_plus'],
            ['*', 'binary_times'],
            ['/', 'binary_times'],
            ['|', 'binary_pipe'],
            ['==', 'binary_relation'],
            ['!=', 'binary_relation'],
            ['>', 'binary_relation'],
            ['>=', 'binary_relation'],
            ['<', 'binary_relation'],
            ['<=', 'binary_relation'],
            ['??', 'coalesce'],
          ].map(([operator, precedence]) =>
            prec.left(precedence, seq(
              field('left', $._expression),
              field('operator', operator),
              field('right', $._expression)
            ))
          ),
          ...[
            [$.keyword_and, 'clause_connective'],
            [$.keyword_or, 'clause_disjunctive'],
          ].map(([operator, precedence]) =>
            prec.left(precedence, choice(
                seq(
                    field('left', $._expression),
                    field('operator', operator),
                    field('right', $._expression),
                ),
                seq(
                    '(',
                    field('left', $._expression),
                    field('operator', operator),
                    field('right', $._expression),
                    ')',
                ),
            ),
          ),
        ),
        ),

        _date: _ => seq(
            /\d{4}/,
            '-',
            /\d{1,2}/,
            '-',
            /\d{1,2}/,
        ),
        date: $ => seq(
            '@',
            $._date,
        ),

        _time: $ => seq(
            /\d{2}/,
            optional(
                seq(
                    ':',
                    /\d{1,2}/,
                ),
            ),
            optional(
                seq(
                    ':',
                    /\d{1,2}/,
                ),
            ),
            optional(
                seq(
                    '.',
                    $.integer,
                ),
            ),
        ),

        time: $ => seq(
            '@',
            $._time,
        ),

        timestamp: $ => prec.right(seq(
            '@',
            $._date,
            'T',
            $._time,
            optional($.timezone),
        ),
        ),

        timezone: $ => choice(
            'Z',
            seq(
                $.direction,
                /\d{1,2}/,
            ),
        ),


        comment: _ => seq('#', /.*/),

        bang: _ => '!',

    },
});

function comma_list(field, requireFirst) {
  if (requireFirst) {
    return seq(
      field,
      repeat(
        seq(',', field)
      )
    );
  }

  return optional(
    seq(
      field,
      repeat(
        seq(',', field)
      ),
    ),
  );
}

function parens(field) {
  return seq(
    '(',
    field,
    ')',
  )
}

function paren_list(field, requireFirst) {
  return seq(
    '(',
    comma_list(field, requireFirst),
    ')',
  )
}

function sq_bracket_list(field, requireFirst) {
  return seq(
    '[',
    comma_list(field, requireFirst),
    optional(','),
    ']',
  )
}

function make_keyword(word) {
  return new RegExp(word + "|" + word.toUpperCase());
}
