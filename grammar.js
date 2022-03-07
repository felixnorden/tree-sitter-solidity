module.exports = grammar({
  name: 'solidity',
  
  rules: {
    source_file: $ => repeat1(choice(
      $.directive,
      $.definition,
//      $.declaration,
    )),

    directive: $ => choice(
//      $.pragma_directive,
      $.import_directive,
    ),

    /* Directives */
    import_directive: $ => seq(
      'import',
      choice(
        seq($.path, optional(seq('as', $.identifier))),
        seq($.symbol_aliases, 'from', $.path),
        seq('*', 'as', $.identifier, 'from', $.path)
      ),
      ';'
    ),

    path: $ => $._non_empty_string_literal,

    /* Does not work in tree-sitter */
    _empty_string_literal: $ => choice(
      seq('"','"'),
      seq('\'', '\'')
    ),
    
    _non_empty_string_literal: $ => choice(
      seq('"', repeat1(choice($.double_quoted_printable, $.escape_sequence)),'"'),
      seq('\'', repeat1(choice($.single_quoted_printable, $.escape_sequence)), '\'')
    ),

    double_quoted_printable: _ => /[\u0020-\u0021\u0023-\u005B\u005D-\u007E]+/u,
    single_quoted_printable: _ => /[\u0020-\u0026\u0028-\u005B\u005D-\u007E]+/u,

    escape_sequence: _ => seq(
      '\\',
      choice(
        // /['"\\nrt\n\r]+/,
        seq('u', /[0-9A-Fa-f]{4}/),
        seq('x', /[0-9A-Fa-f]{2}/)
      )
    ),

    identifier: $ => choice(
      $._identifier,
      'error',
      'from',
      'revert'
    ),

    literal: $ => choice(
      $.string_literal,
      $.number_literal,
      $.boolean_literal,
     // $.hex_string_literal,
     // $.unicode_string_literal
    ),

    boolean_literal: _ => choice(
      'true',
      'false'
    ),

    string_literal: $ => repeat1(choice(
      $._non_empty_string_literal,
      // $._empty_string_literal
    )),

    number_literal: $ => seq(choice(
        $.decimal_number,
        $.hex_number
      ),
      optional($.number_unit)
    ),

    decimal_number: $ => seq(
      choice(
        $._decimal_number,
        seq(
          optional($._decimal_number),
          '.',
          $._decimal_number
        )
      ),
      optional(seq(
        /[eE]/,
        optional('-'),
        $._decimal_number
      ))
    ),

    _decimal_number: _ => seq(repeat(/\d+[_]+/), /\d+/),

    number_unit: _ => choice(
      'wei',
      'gwei',
      'ether',
      'seconds',
      'minutes',
      'hours',
      'days',
      'weeks',
      'years',
    ),

    symbol_aliases: $ => seq(
      '{',
      choice(seq(
          $.identifier,
          'as',
          $.identifier
        ),
        $.identifier
      ),
      repeat(seq(
        ',',
          choice(seq(
              $.identifier,
              'as',
              $.identifier
            ),
            $.identifier
        ),
      )),
      '}'
    ),

    hex_number: $ => seq(
      '0x',
      $._hex_number
    ),

    _hex_number: _ => /[0-9A-Fa-f]*[0-9A-Fa-f_]*[0-9A-Fa-f]+/,

    _identifier: _ => seq(
      /[a-zA-Z$_]/,
      optional(/[a-zA-Z0-9$_]+/)
    ),

    /* Definitions */
    definition: $ => choice(
      $.contract_definition,
//      $.enum_definition,
//      $.error_definition,
//      $.function_definition,
//      $.interface_definition,
//      $.library_definition,
//      $.struct_definition,
//      $.user_defined_value_type_definition,
    ),

    contract_definition: $ => seq(
      optional('abstract'),
      'contract',
      $.identifier,
      optional(
        seq(
          'is',
          $.inheritance_specifier,
          repeat(seq(
            ',',
            $.inheritance_specifier
          ))
        )
      ),
      '{',
      repeat($.contract_body_element),
      '}'
    ),

    inheritance_specifier: $ => seq(
      $.identifier_path,
      optional($.call_argument_list)
    ),

    identifier_path: $ => seq(
      $.identifier,
      repeat(seq(
        '.',
        $.identifier
      ))
    ),

    call_argument_list: $ => seq(
      '(',
      choice(
        seq(
          $.expression,
          repeat(seq(
            ',',
            $.expression
          ))
        ),
        seq(
          '{',
          optional(seq(
            seq(
              $.identifier,
              ':',
              $.expression
            ),
            repeat(
              seq(
                ',',
                $.identifier,
                ':',
                $.expression
              )
            )
          )),
          '}'
        ),
      ),
      ')'
    ),

    expression: $ => choice(
      $.identifier,
      $.literal
    ),
    contract_body_element: $ => 'hello',
//    declaration: $ => $.constant_variable_declaration,
  }

})
