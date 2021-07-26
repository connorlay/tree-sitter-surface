module.exports = grammar({
  name: 'surface',

  rules: {
    fragment: $ => repeat(
      $._node
    ),

    _node: $ => choice(
      $.tag,
      $.text,
      $.expression,
      $.block,
      $.public_comment,
      $.private_comment,
    ),

    tag: $ => choice(
      seq(
        $.start_tag,
        repeat(
          $._node
        ),
        $.end_tag
      ),
      $.self_closing_tag,
    ),

    block: $ => seq(
      $.start_block,
      repeat(
        $._node
      ),
      $.end_block
    ),

    start_tag: $ => seq(
      '<',
      $.tag_name,
      repeat(
        choice(
          $.attribute, 
          $.expression
        )
      ),
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
      repeat(
        choice(
          $.attribute, 
          $.expression
        )
      ),
      '/>'
    ),

    expression: $ => seq(
      '{', 
      $.expression_value, 
      '}'
    ),

    expression_value: $ => repeat1(
      $._matched_curly_brackets
    ),

    public_comment: $ => seq(
      '<!--', 
      /[^<>-]+/, // use an external scanner to improve this
      '-->'
    ),

    private_comment: $ => seq( 
      '{!--', 
      /[^{}-]+/, // use an external scanner to improve this
      '--}'
    ),

    _matched_curly_brackets: $ => choice(
      seq(
        '{', 
        $._matched_curly_brackets, 
        '}'
      ),
      /[^{}]+/, // use an external scanner to improve this
      '{}'
    ),

    block: $ => seq(
      $.start_block,
      repeat(
        $._node
      ),
      $.end_block
    ),

    start_block: $ => seq(
      '{#',
      $.block_name,
      $.expression_value,
      '}',
    ),

    end_block: $ => seq(
      '{/', 
      $.block_name,
      '}',
    ),

    attribute: $ => seq(
      $.attribute_name,
      optional(
        seq(
          '=', 
          $.attribute_value
        )
      )
    ),

    tag_name: $ => /[^\-<>{}!"'/=\s]+/,

    attribute_name: $ => /[^<>{}"'/=\s]+/,

    block_name: $ => choice(
      'if', 
      'unless', 
      'for', 
      'case', 
      'else', 
      'elseif', 
      'match'
    ),

    attribute_value: $ => choice(
      /[^<>{}"'=\s]+/,
      seq(
        "'", 
        optional(/[^']+/), 
        "'"
      ),
      seq(
        '"', 
        optional(/[^"]+/), 
        '"'
      ),
      $.expression
    ),

    text: $ => /[^<>{}\s]([^<>{}]*[^<>{}\s])?/,
}})
