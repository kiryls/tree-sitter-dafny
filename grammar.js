module.exports = grammar({
  name: 'dafny',

  rules: {
    source_file: $ => seq(
      repeat($.IncludeDirective_), 
      repeat($.TopDecl)
    ),

    IncludeDirective_: $ => seq(
      'include',
      $.stringToken
    ),

    // \b(?!abstract|allocated|as|assert|assume|bool|break|by|calc|case|char|class|codatatype|const|constructor|continue|datatype|decreases|else|ensures|exists|expect|export|extends|false|for|forall|fresh|function|ghost|if|imap|import|in|include|int|invariant|is|iset|iterator|label|lemma|map|match|method|modifies|modify|module|multiset|nameonly|nat|new|newtype|null|object|object?|old|opaque|opened|ORDINALpredicate|print|provides|reads|real|refines|requires|return|returns|reveal|reveals|seq|set|static|string|then|this|trait|true|twostate|type|unchanged|var|while|witness|yield|yields\b)\w+\b

    Attribute: $ => seq('{:', $.AttributeName, optional($.Expressions), '}'),

    AttributeName: $ => $.NoUSIdent,

    NoUSIdent: $ => seq(
      $.noUSNondigitIdChar,
      repeat($.idchar)
    ),

    noUSNondigitIdChar: $ => /[a-zA-Z?']/,
    noUSIdChar: $ => /[a-zA-Z0-9?']/,
    letter: $ => /[a-zA-Z]/,
    digit: $ => /[0-9]/,
    special: $ => /[?_']/,
    nondigitIdChar: $ => /[a-zA-Z?'_]/,
    idchar: $ => /[a-zA-Z0-9?'_]/,

    Ident: $ => $.ident,

    digits: $ => seq($.digit, repeat(seq(optional('_'), $.digit))),

    WildIdent: $ => choice($.NoUSIdent, '_'),
    
    // todo: exclude somehow charToken and reservedwords
    ident: $ => seq(
      $.nondigitIdChar,
      repeat($.idchar)
    ),


    Expressions: $ => seq(
      $.Expression,
      repeat(seq(',', $.Expression))
    ),

    Expression: $ => token('[ expression ]'),


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

    TopDecl: $ => seq(
      repeat($.DeclModifier),
      choice(
        $.SubModuleDecl,
        // todo other possible tokens
      )
    ),

    DeclModifier: $ => choice('abstract', 'ghost', 'static', 'opaque'),

    SubModuleDecl: $ => choice($.ModuleDefinition, $.ModuleImport, $.ModuleExport),

    ModuleDefinition: $ => seq(
      'module',
      repeat($.Attribute),
      $.ModuleQualifiedName,
      optional(seq('refines', $.ModuleQualifiedName)),
      '{',
      repeat($.TopDecl),
      '}'
    ),

    ModuleImport: $ => seq(
      'import',
      optional('opened'),
      choice(
        $.QualifiedModuleExport, 
        seq($.ModuleName, '=', $.QualifiedModuleExport),
        seq($.ModuleName, ':', $.QualifiedModuleExport),
      )
    ),

    QualifiedModuleExport: $ => seq($.ModuleQualifiedName, optional(seq("`", $.ModuleExportSuffix))),
    
    ModuleExportSuffix: $ => choice($.ExportId, seq('{', $.ExportId, repeat(seq(',', $.ExportId)), '}')),

    ModuleExport: $ => seq(
      'export',
      optional($.ExportId),
      optional('...'),
      repeat(choice(
        seq('extends', $.ExportId, repeat(seq(',', $.ExportId))),
        // todo other options
      ))
    ),

    ModuleQualifiedName: $ => seq($.ModuleName, repeat(seq('.', $.ModuleName))),

    ModuleName: $ => $.NoUSIdent,

    ExportId: $ => choice($.NoUSIdent, $.digits),

  }
});
