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

    DeclModifier: $ => choice('abstract', 'ghost', 'static', 'opaque'),

    TopDecl: $ => seq(
      repeat($.DeclModifier),
      choice(
        $.SubModuleDecl,
        $.ClassDecl
        // todo other possible tokens
      )
    ),


    //
    // Modules
    //

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

    //
    // Classes
    //

    ClassDecl: $ => seq(
      'class',
      repeat($.Attribute),
      $.ClassName,
      optional($.GenericParameters),
      optional(
        choice(
          seq('extends', $.Type, repeat(seq(',', $.Type))), 
          $.ellipsis
        )
      ),
      '{',
      repeat(seq(
        repeat($.DeclModifier),
        $.ClassMemberDecl  
      )),
      '}',
    ),

    ClassName: $ => $.NoUSIdent,

    GenericParameters: $ => seq(
      '<',
      optional($.Variance),
      $.TypeVariableName,
      repeat($.TypeParameterCharacteristics),
      repeat(seq( ',', $.TypeVariableName, repeat($.TypeParameterCharacteristics))),
      '>'
    ),

    Variance: $ => choice('*', '+', '!', '-'),

    TypeVariableName: $ => $.NoUSIdent,

    TypeParameterCharacteristics: $ => seq(
      '(',
      $.TPCharOption,
      repeat(seq(',', $.TPCharOption)),
      ')'
    ),

    TPCharOption: $ => choice('==', '0', '00', seq('!', 'new')),

    ClassMemberDecl: $ => choice(
      $.FieldDecl,
      $.ConstantFieldDecl,
      // $.FunctionDecl,
      $.MethodDecl
    ),

    FieldDecl: $ => seq(
      'var',
      repeat($.Attribute),
      $.FIdentType,
      repeat(seq(',', $.FIdentType))
    ),

    ConstantFieldDecl: $ => seq(
      'const',
      repeat($.Attribute),
      $.CIdentType,
      optional($.ellipsis),
      optional(seq( ':=', $.Expression))
    ),


    //
    // Functions
    //
    

    //
    // Methods
    //

    MethodDecl: $ => seq(
      $.MethodKeyword_,
      repeat($.Attribute),
      optional($.MethodFunctionName),
      choice($.MethodSignature_, $.ellipsis),
      repeat($.MethodSpec),
      optional($.BlockStmt)
    ),

    MethodKeyword_: $ => choice(
      'method',
      'constructor',
      'lemma',
      seq('twostate', 'lemma'),
      seq('least', 'lemma'),
      seq('greatest', 'lemma')
    ),

    MethodSignature_: $ => seq(
      optional($.GenericParameters),
      optional($.KType),
      $.Formals,
      optional(seq('returns', $.Formals))
    ),

    KType: $ => seq('[', choice('nat', 'ORDINAL'), ']'),

    Formals: $ => seq(
      '(',
      optional(seq($.GIdentType, repeat(seq(',', $.GIdentType)))),
      ')'
    ),

    MethodSpec: $ => choice(
      // $.ModifiesClause,
      $.RequiresClause,
      // $.EnsuresClause,
      // $.DecreasesClause
    ),


    //
    // Clauses
    //
    
    RequiresClause: $ => seq(
      'requires',
      repeat($.Attribute),
      optional(seq($.LabelName, ':')),
      $.Expression
    ),
    
    LabelName: $ => $.NoUSIdentOrDigits,


    //
    // Statements
    //

    Stmt: $ => seq(repeat(seq('label', $.LabelName, ':')), $.NonLabeledStmt),

    NonLabeledStmt: $ => choice(
      // $.AssertStmt,
      // $.AssumeStmt,
      $.BlockStmt,
      // $.BreakStmt,
      // $.CalcStmt,
      // ...
      ),

    BlockStmt: $ => seq('{', repeat($.Stmt), '}'),




    //
    // Types
    //

    Type: $ => '[Type]',


    //
    // Strings
    //

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




    // \b(?!abstract|allocated|as|assert|assume|bool|break|by|calc|case|char|class|codatatype|const|constructor|continue|datatype|decreases|else|ensures|exists|expect|export|extends|false|for|forall|fresh|function|ghost|if|imap|import|in|include|int|invariant|is|iset|iterator|label|lemma|map|match|method|modifies|modify|module|multiset|nameonly|nat|new|newtype|null|object|object?|old|opaque|opened|ORDINALpredicate|print|provides|reads|real|refines|requires|return|returns|reveal|reveals|seq|set|static|string|then|this|trait|true|twostate|type|unchanged|var|while|witness|yield|yields\b)\w+\b
    
    ellipsis: $ => '...',

    Attribute: $ => seq('{:', $.AttributeName, optional($.Expressions), '}'),

    AttributeName: $ => $.NoUSIdent,

    MethodFunctionName: $ => $.NoUSIdentOrDigits,

    NoUSIdent: $ => seq(
      $.noUSNondigitIdChar,
      repeat($.idchar)
    ),

    FIdentType: $ => seq($.NoUSIdentOrDigits, ':', $.Type),

    CIdentType: $ => seq($.NoUSIdentOrDigits, optional(seq(':', $.Type))),

    GIdentType: $ => seq(
      repeat(choice('ghost', 'new', 'nameonly', 'only')),
      $.IdentType,
      optional(seq(':=', $.Expression))
    ),

    IdentType: $ => seq($.WildIdent, ':', $.Type),

    NoUSIdentOrDigits: $ => choice($.NoUSIdent, $.digits),

    noUSNondigitIdChar: $ => /[a-zA-Z?']/,
    noUSIdChar: $ => /[a-zA-Z0-9?']/,
    letter: $ => /[a-zA-Z]/,
    digit: $ => /[0-9]/,
    special: $ => /[?_']/,
    nondigitIdChar: $ => /[a-zA-Z?'_]/,
    idchar: $ => /[a-zA-Z0-9?'_]/,

    digits: $ => seq($.digit, repeat(seq(optional('_'), $.digit))),

    hexdigit: $ => /[0-9a-fA-F]/,

    Ident: $ => $.ident,

    WildIdent: $ => choice($.NoUSIdent, '_'),
    
    // todo: exclude somehow charToken and reservedwords
    ident: $ => seq(
      $.nondigitIdChar,
      repeat($.idchar)
    ),


    //
    // Expressions
    //

    Expressions: $ => seq(
      $.Expression,
      repeat(seq(',', $.Expression))
    ),

    Expression: $ => seq($.EquivExpression, optional(seq(';', $.Expression))),

    EquivExpression: $ => seq($.ImpliesExpliesExpression, repeat(seq('<==>', $.ImpliesExpliesExpression))),

    ImpliesExpliesExpression: $ => '#'


  }
});
