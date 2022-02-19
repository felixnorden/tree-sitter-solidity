module.exports = grammar({
  name: 'solidity',
  
  rules: {
    source_file: $ => repeat1(choice(
      $.directive,
//      $.definition,
//      $.declaration,
    )),

    directive: $ => choice(
//      $.pragma_directive,
      $.import_directive,
    ),

    import_directive: $ => seq(
      'import',
      choice(
        seq($.path, optional( seq('as', $.identifier))),
        seq($.symbol_aliases, 'from', $.path),
        seq('*', 'as', $.identifier, 'from', $.path)
      ),
      ';'
    ),

    path: $ => $.non_empty_string_literal,

    non_empty_string_literal: $ => choice(
      seq('"', optional(choice($.double_quoted_printable, $.escape_sequence)),'"'),
      seq('\'', optional(choice($.single_quoted_printable, $.escape_sequence)), '\'')
    ),

    double_quoted_printable: $ => /[\u0020-\u0021\u0023-\u005B\u005D-\u007E]+/u,
    single_quoted_printable: $ => /[\u0020-\u0026\u0028-\u005B\u005D-\u007E]+/u,

    escape_sequence: $ => seq(
      '\\',
      choice(
        /['"\\nrt\n\r]+/,
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

    symbol_aliases: $ => seq(
      '{',
      choice(seq(
        $.identifier,
        'as',
        $.identifier
        ),
        $.identifier),
      repeat(seq(
        ',',
      choice(seq(
        $.identifier,
        'as',
        $.identifier
        ),
        $.identifier),
      )),
      '}'
    ),

    _identifier: $ => seq(
      /[a-zA-Z$_]/,
      optional(/[a-zA-Z0-9$_]+/)
    ),

//    definition: $ => choice(
//      $.contract_definition,
//      $.enum_definition,
//      $.error_definition,
//      $.function_definition,
//      $.interface_definition,
//      $.library_definition,
//      $.struct_definition,
//      $.user_defined_value_type_definition,
//    ),

//    declaration: $ => $.constant_variable_declaration,
  }

})
