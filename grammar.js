module.exports = grammar({
  name: 'surface',

  rules: {
    fragment: $ => repeat($._node),

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
        repeat($._node),
        $.end_tag
      ),
      $.self_closing_tag,
    ),

    block: $ => seq(
      $.start_block,
      repeat($._node),
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
      optional(
        choice(
          '=',
          '...',
          '^',
        )
      ),
      $.expression_value,
      '}'
    ),

    expression_value: $ => choice(
      /[^{}]+/,
      '{}',
      seq(
        '{',
        alias($.expression_value, 'expression_value'),
        '}'
      ),
    ),

    public_comment: $ => seq(
      '<!--', 
      alias(
        choice(
          repeat1(/[^-]+|-/), 
          $.public_comment
        ), 
        'comment'
      ),
      '-->'
    ),

    private_comment: $ => seq(
      '{!--', 
      alias(
        choice(
          repeat1(
            /[^-]+|-/
          ), 
          $.private_comment
        ), 
        'comment'
      ),
      '--}'
    ),

    block: $ => seq(
      $.start_block,
      repeat(
        choice(
          $.subblock,
          $._node
        )
      ),
      $.end_block
    ),

    start_block: $ => seq(
      '{#',
      $.block_name,
      optional($.expression_value),
      '}',
    ),

    block_name: $ => choice(
      'if', 
      'unless', 
      'for', 
      'case', 
    ),

    end_block: $ => seq(
      '{/', 
      $.block_name,
      '}',
    ),

    subblock: $ => seq(
      '{#',
      $.subblock_name,
      optional($.expression_value),
      '}',
    ),

    subblock_name: $ => choice(
      'else',
      'elseif',
      'match'
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
