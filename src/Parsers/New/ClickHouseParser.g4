parser grammar ClickHouseParser;

options {
    tokenVocab = ClickHouseLexer;
}

// Top-level statements

queryList: queryStmt (SEMICOLON queryStmt)* SEMICOLON? EOF;

queryStmt: query (INTO OUTFILE STRING_LITERAL)? (FORMAT identifier)?;

query
    : selectUnionStmt
    ;

// SELECT statement

selectUnionStmt: selectStmt (UNION ALL selectStmt)*;
selectStmt:
    withClause?
    SELECT DISTINCT? columnExprList
    fromClause?
    sampleClause?
    arrayJoinClause?
    prewhereClause?
    whereClause?
    groupByClause?
    havingClause?
    orderByClause?
    limitByClause?
    limitClause?
    settingsClause?
    ;

withClause: WITH columnExprList;
fromClause: FROM joinExpr FINAL?;
sampleClause: SAMPLE ratioExpr (OFFSET ratioExpr)?;
arrayJoinClause: LEFT? ARRAY JOIN columnExprList;
prewhereClause: PREWHERE columnExpr;
whereClause: WHERE columnExpr;
groupByClause: GROUP BY columnExprList (WITH TOTALS)?;
havingClause: HAVING columnExpr;
orderByClause: ORDER BY orderExprList;
limitByClause: LIMIT limitExpr BY columnExprList;
limitClause: LIMIT limitExpr;
settingsClause: SETTINGS settingExprList;

joinExpr
    : tableExpr                                                           # JoinExprTable
    | LPAREN joinExpr RPAREN                                              # JoinExprParens
    | joinExpr (GLOBAL|LOCAL)? joinOp JOIN joinExpr joinConstraintClause  # JoinExprOp
    | joinExpr joinOpCross joinExpr                                       # JoinExprCrossOp
    ;
joinOp
    : (ANY? INNER | INNER ANY?)                                                                                  # JoinOpInner
    | ((OUTER | SEMI | ANTI | ANY | ASOF)? (LEFT | RIGHT) | (LEFT | RIGHT) (OUTER | SEMI | ANTI | ANY | ASOF)?)  # JoinOpLeftRight
    | ((OUTER | ANY)? FULL | FULL (OUTER | ANY)?)                                                                # JoinOpFull
    ;
joinOpCross
    : (GLOBAL|LOCAL)? CROSS JOIN
    | COMMA
    ;
joinConstraintClause
    : ON columnExprList
    | USING LPAREN columnExprList RPAREN
    | USING columnExprList
    ;

limitExpr: NUMBER_LITERAL ((COMMA | OFFSET) NUMBER_LITERAL)?;
orderExprList: orderExpr (COMMA orderExpr)*;
orderExpr: columnExpr (ASCENDING | DESCENDING)? (NULLS (FIRST | LAST))? (COLLATE STRING_LITERAL)?;
ratioExpr: NUMBER_LITERAL (SLASH NUMBER_LITERAL); // TODO: not complete!
settingExprList: settingExpr (COMMA settingExpr)*;
settingExpr: identifier EQ_SINGLE literal;

// Columns

columnExprList: columnExpr (COMMA columnExpr)*;
columnExpr
    : literal                                                                        # ColumnExprLiteral
    | ASTERISK                                                                       # ColumnExprAsterisk
    | columnIdentifier                                                               # ColumnExprIdentifier
    | LPAREN columnExpr RPAREN                                                       # ColumnExprParens
    | LPAREN columnExprList RPAREN                                                   # ColumnExprTuple
    | LBRACKET columnExprList? RBRACKET                                              # ColumnExprArray

    // NOTE: rules below are sorted according to operators' priority - the most priority on top.
    | columnExpr LBRACKET columnExpr RBRACKET                                        # ColumnExprArrayAccess
    | columnExpr DOT NUMBER_LITERAL                                                  # ColumnExprTupleAccess
    | unaryOp columnExpr                                                             # ColumnExprUnaryOp
    | columnExpr IS NOT? NULL_SQL                                                    # ColumnExprIsNull
    | columnExpr binaryOp columnExpr                                                 # ColumnExprBinaryOp
    | columnExpr QUERY columnExpr COLON columnExpr                                   # ColumnExprTernaryOp
    | columnExpr NOT? BETWEEN columnExpr AND columnExpr                              # ColumnExprBetween
    | CASE columnExpr? (WHEN columnExpr THEN columnExpr)+ (ELSE columnExpr)? END     # ColumnExprCase
    // TODO: | CAST LPAREN columnExpr AS identifier RPAREN                                    # ColumnExprCast
    | EXTRACT LPAREN INTERVAL_TYPE FROM columnExpr RPAREN                            # ColumnExprExtract
    | TRIM LPAREN (BOTH | LEADING | TRAILING) STRING_LITERAL FROM columnExpr RPAREN  # ColumnExprTrim
    | INTERVAL columnExpr INTERVAL_TYPE                                              # ColumnExprInterval
    | identifier (LPAREN columnParamList? RPAREN)? LPAREN columnArgList? RPAREN      # ColumnExprFunction
    | columnExpr AS identifier                                                       # ColumnExprAlias
    ;
columnParamList: literal (COMMA literal)*;
columnArgList: columnArgExpr (COMMA columnArgExpr)*;
columnArgExpr: columnExpr | columnLambdaExpr;
columnLambdaExpr:
    ( LPAREN identifier (COMMA identifier)* RPAREN
    |        identifier (COMMA identifier)*
    )
    ARROW columnExpr
    ;
columnIdentifier: (tableIdentifier DOT)? identifier; // TODO: don't forget compound identifier.

// Tables

tableExpr
    : tableIdentifier                                       # TableExprIdentifier
    | tableFunctionExpr                                     # TableExprFunction
    | LPAREN selectStmt RPAREN                              # TableExprSubquery
    | tableExpr AS identifier                               # TableExprAlias
    ;
tableIdentifier: (databaseIdentifier DOT)? identifier;
tableFunctionExpr: identifier LPAREN tableArgList? RPAREN;
tableArgList: tableArgExpr (COMMA tableArgExpr)*;
tableArgExpr
    : literal
    | tableIdentifier
    ;

// Databases

databaseIdentifier: identifier;

// Basics

literal : NUMBER_LITERAL | STRING_LITERAL | NULL_SQL;
identifier: IDENTIFIER; // TODO: not complete!
unaryOp: DASH | NOT;
binaryOp
    : CONCAT
    | ASTERISK
    | SLASH
    | PLUS
    | DASH
    | PERCENT
    | EQ_DOUBLE
    | EQ_SINGLE
    | NOT_EQ
    | LE
    | GE
    | LT
    | GT
    | AND
    | OR
    | NOT? LIKE
    | GLOBAL? NOT? IN
    ;
