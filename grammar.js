module.exports = grammar({
  name: 'surface',

  rules: {
    fragment: $ => repeat($._node),

    _node: $ => choice(
      $.element,
      $.text,
      // $.block,
      // $.subblock,
      $.expression,
    ),

    element: $ => choice(
      seq(
        $.start_tag,
        repeat($._node),
        $.end_tag
      ),
      $.self_closing_tag,
      // $.special_component_tag,
    ),

    start_tag: $ => seq(
      '<',
      $.tag_name,
      repeat(choice($.attribute, $.expression)),
      '>'
    ),

    end_tag: $ => seq(
      '</',
      $.tag_name,
      '>'
    ),

    self_closing_tag: $ => seq(
      '<',
      $.tag_name,
      repeat(choice($.attribute, $.expression)),
      '/>'
    ),

    expression: $ => seq( '{', $.expression_value, '}'),

    expression_value: $ => repeat1($._matched_curly_brackets),

    _matched_curly_brackets: $ => choice(
      seq('{', $._matched_curly_brackets, '}'),
      /[^{}]+/,
      '{}'
    ),

    block: $ => seq(
      '{#',
      $.block_name,
      $.expression,
      '}',
    ),

    subblock: $ => seq(
      '{#',
      $.subblock_name,
      optional($.expression),
      '}',
    ),

    attribute: $ => seq(
      $.attribute_name,
      optional(seq('=', $.attribute_value))
    ),

    tag_name: $ => /[^<>{}"'/=\s]+/,
    attribute_name: $ => /[^<>{}"'/=\s]+/,
    block_name: $ => choice('if', 'unless', 'for', 'case'),
    subblock_name: $ => choice('else', 'elseif', 'match'),

    attribute_value: $ => choice(
      /[^<>{}"'=\s]+/,
      seq("'", optional(/[^']+/), "'"),
      seq('"', optional(/[^"]+/), '"'),
      $.expression
    ),


    text: $ => /[^<>{}\s]([^<>{}]*[^<>{}\s])?/,
}})
