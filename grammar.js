module.exports = grammar({
  name: 'surface',

  rules: {
    fragment: $ => repeat($._node),

    _node: $ => choice(
      $.element,
      $.text,
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

    expression: $ => seq(
      choice('{', '{=', '{...', '{^'),
      repeat1($._matched_curly_brackets), 
      '}'
    ),

    attribute: $ => seq(
      $.attribute_name,
      optional(seq('=', $.attribute_value))
    ),

    tag_name: $ => /[^<>{}"'/=\s]+/,
    attribute_name: $ => /[^<>{}"'/=\s]+/,

    attribute_value: $ => choice(
      /[^<>{}"'=\s]+/,
      seq("'", optional(/[^']+/), "'"),
      seq('"', optional(/[^"]+/), '"'),
      $.expression
    ),

    _matched_curly_brackets: $ => choice(
      seq('{', $._matched_curly_brackets, '}'),
      /[^{}]+/,
      '{}'
    ),

    text: $ => /[^<>{}\s]([^<>{}]*[^<>{}\s])?/,
}})
