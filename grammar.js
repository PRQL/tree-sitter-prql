module.exports = grammar({
    name: 'prql',

    precedences: $ => [
        [
            'binary_plus',
            'binary_times',
            'binary_pipe',
            'binary_relation',
            'coalesce',
            'range',
        ],
    ],

    rules: {
        program: $ => repeat(
            $.pipeline,
            // $.function,
            // $.variable,

        ),

        keyword_from: _ => make_keyword("from"),
        keyword_filter: _ => make_keyword("filter"),
        keyword_derive: _ => make_keyword("derive"),
        keyword_group: _ => make_keyword("group"),
        keyword_aggregate: _ => make_keyword("aggregate"),
        keyword_sort: _ => make_keyword("sort"),
        keyword_take: _ => make_keyword("take"),
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

        pipeline: $ => seq(
            $.from,
            $.transforms,
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
            )
        ),

        from: $ => seq(
            $.keyword_from,
            $.term,
        ),

        derives: $ => seq(
            $.keyword_derive,
            choice(
                $.term,
                bracket_list(
                    choice(
                        $.term,
                        $.binary_expression),
                    false),
            )
        ),

        filter: $ => seq(
            $.keyword_filter,
            field("predicate", $._expression),
        ),

        aggregate: $ => seq(
            $.keyword_aggregate,
            bracket_list(
                choice(
                    $.binary_expression,
                    $.aggregate_operation,
                ),
            )
        ),

        aggregate_operation: $ => seq(
            choice(
                $.keyword_min,
                $.keyword_max,
                $.keyword_count,
                $.keyword_count_distinct,
                $.keyword_average,
                $.keyword_avg,
                $.keyword_sum,
                $.keyword_stddev,
            ),
            $._expression,
        ),

        sorts: $ => seq(
            $.keyword_sort,
            $.term,
        ),

        takes: $ => seq(
            $.keyword_take,
            choice(
                alias($._number, $.term),
                $.binary_expression
            )
        ),

        joins: $ => seq(
            $.keyword_join,
        ),

        select: $ => seq(
            $.keyword_select,
            $.selects,
        ),

        selects: $ => bracket_list($.term, false),

        term: $ => seq(
            choice(
                field("value", $._expression),
                $._double_quote_string,
            ),
        ),

        _expression: $ => prec(1,
            choice(
                $.field,
                $.binary_expression,
                $.literal,
            ),
        ),


        literal: $ => prec(2,
            choice(
                $._number,
                $._decimal_number,
                $._literal_string,
                $.keyword_true,
                $.keyword_false,
            ),
        ),

        _double_quote_string: _ => seq('"', /[^"]*/, '"'),

        _literal_string: $ => prec(1,
            choice(
                seq("'", /[^']*/, "'"),
                $._double_quote_string,
            ),
        ),

        _number: _ => /\d+/,

        _decimal_number: $ => choice(
            seq(optional("-"), ".", $._number),
            seq(optional("-"), $._number, ".", $._number),
            seq(optional("-"), $._number, "."),
        ),

        field: $ => field('name', $.identifier),

        identifier: _ => /([a-zA-Z_][0-9a-zA-Z_]*)/,

        binary_expression: $ => choice(
          ...[
            ['+', 'binary_plus'],
            ['-', 'binary_plus'],
            ['*', 'binary_times'],
            ['/', 'binary_times'],
            ['|', 'binary_pipe'],
            ['=', 'binary_relation'],
            ['==', 'binary_relation'],
            ['>', 'binary_relation'],
            ['>=', 'binary_relation'],
            ['<', 'binary_relation'],
            ['<=', 'binary_relation'],
            ['..', 'range'],
            ['??', 'coalesce'],
          ].map(([operator, precedence]) =>
            prec.left(precedence, seq(
              field('left', $._expression),
              field('operator', operator),
              field('right', $._expression)
            ))
          ),
        ),

        _number: _ => /\d+/,
        _decimal_number: $ => choice(
            seq(optional("-"), ".", $._number),
            seq(optional("-"), $._number, ".", $._number),
            seq(optional("-"), $._number, "."),
        ),

        _double_quote_string: _ => seq('"', /[^"]*/, '"'),
        _literal_string: $ => prec(1,
            choice(
                seq("'", /[^']*/, "'"),
                $._double_quote_string,
            ),
        ),

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

function bracket_list(field, requireFirst) {
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
