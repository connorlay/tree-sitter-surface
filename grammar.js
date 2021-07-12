module.exports = grammar({
  name: 'surface',

  rules: {
    fragment: $ => repeat($._node),

    _node: $ => choice(
      $.element,
      $.text
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
      repeat($.attribute),
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
      repeat($.attribute),
      '/>'
    ),

    attribute: $ => seq(
      $.attribute_name,
      optional(seq('=', $.attribute_value))
    ),

    tag_name: $ => /[^<>"'/=\s]+/,
    attribute_name: $ => /[^<>"'/=\s]+/,

    attribute_value: $ => choice(
      /[^<>{}"'=\s]+/,
      seq("'", optional(/[^']+/), "'"),
      seq('"', optional(/[^"]+/), '"'),
      seq('{', optional($.elixir_expression),'}')
    ),

    elixir_expression: $ => repeat1($._no_dangling_curly),

    _no_dangling_curly: $ => choice(
      seq('{', $._no_dangling_curly, '}'),
      /[^{}]+/,
      '{}'
    ),

    text: $ => /[^<>\s]([^<>]*[^<>\s])?/,
}})
