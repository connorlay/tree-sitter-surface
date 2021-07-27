module.exports = grammar({
  name: 'surface',

  rules: {
    fragment: $ => repeat($._node),

    _node: $ => choice(
      $.tag,
      $.text,
      $.expression,
      $.block,
      $.comment,
    ),

    tag: $ => choice(
      seq(
        $.start_tag,
        repeat($._node),
        $.end_tag
      ),
      $.self_closing_tag,
      seq(
        $.start_markdown,
        $.text,
        $.end_markdown
      ),
    ),

    block: $ => seq(
      $.start_block,
      repeat($._node),
      $.end_block
    ),

    start_markdown: $ => seq(
      '<',
      alias('#Markdown', $.tag_name),
      repeat(
        choice(
          $.attribute, 
          $.expression
        )
      ),
      '>'
    ),

    end_markdown: $ => seq(
      '</',
      alias('#Markdown', $.tag_name),
      '>'
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

    comment: $ => choice(
      $._public_comment,
      $._private_comment,
    ),

    _public_comment: $ => seq(
      '<!--', 
      alias(
        choice(
          repeat1(/[^-]+|-/), 
          $._public_comment
        ), 
        'comment'
      ),
      '-->'
    ),

    _private_comment: $ => seq(
      '{!--', 
      alias(
        choice(
          repeat1(
            /[^-]+|-/
          ), 
          $._private_comment
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

    tag_name: $ => /[^\-<>{}!"'/=\s]+/,

    attribute_name: $ => /[^<>{}"'/=\s]+/,

    text: $ => /[^<>{}\s]([^<>{}]*[^<>{}\s])?/,
}})
