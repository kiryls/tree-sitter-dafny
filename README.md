# Dafny Syntax for Treesitter
This project aims to convert a snippet of Dafny code into an html which can be easily converted into LaTeX code with syntax highlighting (atm there is no easy way to do so)

## Todos
- [/] Dafny
    - [x] Includedirective_
    - [x] stringToken
        - [x] stringChar
        - [x] escapedChar
        - [x] verbatimStringChar
    - [/] TopDecl
        - [x] DeclModifier
        - [x] SubModuleDecl
            - [x] ModuleDefinition
                - [x] Attribute
                    - [x] AttributeName
                    - [/] Expressions
                        - [/] Expression
                            - [/] EquivExpression
                                - [#] ImpliesExpliesExpression
                - [x] ModuleQualifiedName
                    - [x] ModuleName
                        - [x] NoUSIdent
            - [x] ModuleImport
            - [x] ModuleExport
        - [/] ClassDecl
            - [x] Attribute
            - [x] ClassName
            - [x] GenericParameters
                - [x] Variance
                - [x] TypeVariableName
                - [x] TypeParameterCharacteristics
                    - [x] TPCharOption
                - [#] Type
                - [x] ellipsis
                - [x] DeclModifier
                - [/] ClassMemberDecl
        - [/] ClassMemberDecl
          - [x] FieldDecl
            - [x] Attribute
            - [x] FIdentType
          - [x] ConstantFieldDecl
            - [x] Attribute
            - [x] CIdentType
            - [x] ellipsis
            - [x] Expression
          - [ ] FunctionDecl
          - [ ] MethodDecl

