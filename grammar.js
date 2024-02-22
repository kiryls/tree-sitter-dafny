module.exports = grammar({
  name: 'dafny',

  rules: {
    source_file: $ => repeat($.IncludeDirective_),

    IncludeDirective_: $ => seq(
      'include',
      $.stringToken
    ),

    stringToken: $ => choice(
      seq( '"', repeat(choice($.stringChar, $.escapedChar)), '"'),
      seq( '@', '"', repeat(choice($.verbatimStringChar, seq('"', '"'))), '"'),
    ),

    stringChar: $ => /[^"\\\n\r]/,

    escapedChar: $ => choice(
      "\\'",
      '\\"',
      '\\\\',
      '\\0',
      '\\n',
      '\\r',
      '\\t',
      seq('\\u', $.hexdigit, $.hexdigit, $.hexdigit, $.hexdigit),
      seq('\\U{', repeat1($.hexdigit), '}'),
    ),

    verbatimStringChar: $ => /[^"]/,

    hexdigit: $ => /[0-9a-fA-F]/,
  }
});
