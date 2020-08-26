
// Generated from ClickHouseParser.g4 by ANTLR 4.8

#pragma once


#include "antlr4-runtime.h"


namespace DB {


class  ClickHouseParser : public antlr4::Parser {
public:
  enum {
    INTERVAL_TYPE = 1, ADD = 2, AFTER = 3, ALIAS = 4, ALL = 5, ALTER = 6, 
    AND = 7, ANTI = 8, ANY = 9, ARRAY = 10, AS = 11, ASCENDING = 12, ASOF = 13, 
    BETWEEN = 14, BOTH = 15, BY = 16, CASE = 17, CAST = 18, CHECK = 19, 
    CLUSTER = 20, COLLATE = 21, COLUMN = 22, COMMENT = 23, CREATE = 24, 
    CROSS = 25, DATABASE = 26, DAY = 27, DEDUPLICATE = 28, DEFAULT = 29, 
    DELETE = 30, DESC = 31, DESCENDING = 32, DESCRIBE = 33, DISK = 34, DISTINCT = 35, 
    DROP = 36, ELSE = 37, END = 38, ENGINE = 39, EXISTS = 40, EXTRACT = 41, 
    FINAL = 42, FIRST = 43, FORMAT = 44, FROM = 45, FULL = 46, GLOBAL = 47, 
    GROUP = 48, HAVING = 49, HOUR = 50, ID = 51, IF = 52, IN = 53, INF = 54, 
    INNER = 55, INSERT = 56, INTERVAL = 57, INTO = 58, IS = 59, JOIN = 60, 
    KEY = 61, LAST = 62, LEADING = 63, LEFT = 64, LIKE = 65, LIMIT = 66, 
    LOCAL = 67, MATERIALIZED = 68, MINUTE = 69, MODIFY = 70, MONTH = 71, 
    NAN_SQL = 72, NOT = 73, NULL_SQL = 74, NULLS = 75, OFFSET = 76, ON = 77, 
    OPTIMIZE = 78, OR = 79, ORDER = 80, OUTER = 81, OUTFILE = 82, PARTITION = 83, 
    PREWHERE = 84, PRIMARY = 85, QUARTER = 86, RIGHT = 87, SAMPLE = 88, 
    SECOND = 89, SELECT = 90, SEMI = 91, SET = 92, SETTINGS = 93, SHOW = 94, 
    TABLE = 95, TABLES = 96, TEMPORARY = 97, THEN = 98, TIES = 99, TO = 100, 
    TOTALS = 101, TRAILING = 102, TRIM = 103, TTL = 104, UNION = 105, USE = 106, 
    USING = 107, VALUES = 108, VOLUME = 109, WEEK = 110, WHEN = 111, WHERE = 112, 
    WITH = 113, YEAR = 114, IDENTIFIER = 115, FLOATING_LITERAL = 116, HEXADECIMAL_LITERAL = 117, 
    INTEGER_LITERAL = 118, STRING_LITERAL = 119, ARROW = 120, ASTERISK = 121, 
    BACKQUOTE = 122, BACKSLASH = 123, COLON = 124, COMMA = 125, CONCAT = 126, 
    DASH = 127, DOT = 128, EQ_DOUBLE = 129, EQ_SINGLE = 130, GE = 131, GT = 132, 
    LBRACKET = 133, LE = 134, LPAREN = 135, LT = 136, NOT_EQ = 137, PERCENT = 138, 
    PLUS = 139, QUERY = 140, QUOTE_SINGLE = 141, RBRACKET = 142, RPAREN = 143, 
    SEMICOLON = 144, SLASH = 145, UNDERSCORE = 146, SINGLE_LINE_COMMENT = 147, 
    MULTI_LINE_COMMENT = 148, WHITESPACE = 149
  };

  enum {
    RuleQueryList = 0, RuleQueryStmt = 1, RuleQuery = 2, RuleAlterStmt = 3, 
    RuleAlterTableClause = 4, RuleCheckStmt = 5, RuleCreateStmt = 6, RuleSchemaClause = 7, 
    RuleEngineClause = 8, RulePartitionByClause = 9, RulePrimaryKeyClause = 10, 
    RuleSampleByClause = 11, RuleTtlClause = 12, RuleEngineExpr = 13, RuleTableElementExpr = 14, 
    RuleTableColumnDfnt = 15, RuleTableColumnPropertyExpr = 16, RuleTtlExpr = 17, 
    RuleDescribeStmt = 18, RuleDropStmt = 19, RuleInsertStmt = 20, RuleValuesClause = 21, 
    RuleValueTupleExpr = 22, RuleOptimizeStmt = 23, RulePartitionClause = 24, 
    RuleSelectUnionStmt = 25, RuleSelectStmt = 26, RuleWithClause = 27, 
    RuleFromClause = 28, RuleSampleClause = 29, RuleArrayJoinClause = 30, 
    RulePrewhereClause = 31, RuleWhereClause = 32, RuleGroupByClause = 33, 
    RuleHavingClause = 34, RuleOrderByClause = 35, RuleLimitByClause = 36, 
    RuleLimitClause = 37, RuleSettingsClause = 38, RuleJoinExpr = 39, RuleJoinOp = 40, 
    RuleJoinOpCross = 41, RuleJoinConstraintClause = 42, RuleLimitExpr = 43, 
    RuleOrderExprList = 44, RuleOrderExpr = 45, RuleRatioExpr = 46, RuleSettingExprList = 47, 
    RuleSettingExpr = 48, RuleSetStmt = 49, RuleShowStmt = 50, RuleUseStmt = 51, 
    RuleValueExprList = 52, RuleValueExpr = 53, RuleColumnTypeExpr = 54, 
    RuleColumnExprList = 55, RuleColumnsExpr = 56, RuleColumnExpr = 57, 
    RuleColumnParamList = 58, RuleColumnArgList = 59, RuleColumnArgExpr = 60, 
    RuleColumnLambdaExpr = 61, RuleColumnIdentifier = 62, RuleTableExpr = 63, 
    RuleTableIdentifier = 64, RuleTableArgList = 65, RuleTableArgExpr = 66, 
    RuleDatabaseIdentifier = 67, RuleLiteral = 68, RuleKeyword = 69, RuleIdentifier = 70, 
    RuleUnaryOp = 71, RuleBinaryOp = 72, RuleEnumValue = 73
  };

  ClickHouseParser(antlr4::TokenStream *input);
  ~ClickHouseParser();

  virtual std::string getGrammarFileName() const override;
  virtual const antlr4::atn::ATN& getATN() const override { return _atn; };
  virtual const std::vector<std::string>& getTokenNames() const override { return _tokenNames; }; // deprecated: use vocabulary instead.
  virtual const std::vector<std::string>& getRuleNames() const override;
  virtual antlr4::dfa::Vocabulary& getVocabulary() const override;


  class QueryListContext;
  class QueryStmtContext;
  class QueryContext;
  class AlterStmtContext;
  class AlterTableClauseContext;
  class CheckStmtContext;
  class CreateStmtContext;
  class SchemaClauseContext;
  class EngineClauseContext;
  class PartitionByClauseContext;
  class PrimaryKeyClauseContext;
  class SampleByClauseContext;
  class TtlClauseContext;
  class EngineExprContext;
  class TableElementExprContext;
  class TableColumnDfntContext;
  class TableColumnPropertyExprContext;
  class TtlExprContext;
  class DescribeStmtContext;
  class DropStmtContext;
  class InsertStmtContext;
  class ValuesClauseContext;
  class ValueTupleExprContext;
  class OptimizeStmtContext;
  class PartitionClauseContext;
  class SelectUnionStmtContext;
  class SelectStmtContext;
  class WithClauseContext;
  class FromClauseContext;
  class SampleClauseContext;
  class ArrayJoinClauseContext;
  class PrewhereClauseContext;
  class WhereClauseContext;
  class GroupByClauseContext;
  class HavingClauseContext;
  class OrderByClauseContext;
  class LimitByClauseContext;
  class LimitClauseContext;
  class SettingsClauseContext;
  class JoinExprContext;
  class JoinOpContext;
  class JoinOpCrossContext;
  class JoinConstraintClauseContext;
  class LimitExprContext;
  class OrderExprListContext;
  class OrderExprContext;
  class RatioExprContext;
  class SettingExprListContext;
  class SettingExprContext;
  class SetStmtContext;
  class ShowStmtContext;
  class UseStmtContext;
  class ValueExprListContext;
  class ValueExprContext;
  class ColumnTypeExprContext;
  class ColumnExprListContext;
  class ColumnsExprContext;
  class ColumnExprContext;
  class ColumnParamListContext;
  class ColumnArgListContext;
  class ColumnArgExprContext;
  class ColumnLambdaExprContext;
  class ColumnIdentifierContext;
  class TableExprContext;
  class TableIdentifierContext;
  class TableArgListContext;
  class TableArgExprContext;
  class DatabaseIdentifierContext;
  class LiteralContext;
  class KeywordContext;
  class IdentifierContext;
  class UnaryOpContext;
  class BinaryOpContext;
  class EnumValueContext; 

  class  QueryListContext : public antlr4::ParserRuleContext {
  public:
    QueryListContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<QueryStmtContext *> queryStmt();
    QueryStmtContext* queryStmt(size_t i);
    antlr4::tree::TerminalNode *EOF();
    std::vector<antlr4::tree::TerminalNode *> SEMICOLON();
    antlr4::tree::TerminalNode* SEMICOLON(size_t i);


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  QueryListContext* queryList();

  class  QueryStmtContext : public antlr4::ParserRuleContext {
  public:
    QueryStmtContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    QueryContext *query();
    antlr4::tree::TerminalNode *INTO();
    antlr4::tree::TerminalNode *OUTFILE();
    antlr4::tree::TerminalNode *STRING_LITERAL();
    antlr4::tree::TerminalNode *FORMAT();
    IdentifierContext *identifier();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  QueryStmtContext* queryStmt();

  class  QueryContext : public antlr4::ParserRuleContext {
  public:
    QueryContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    AlterStmtContext *alterStmt();
    CheckStmtContext *checkStmt();
    CreateStmtContext *createStmt();
    DescribeStmtContext *describeStmt();
    DropStmtContext *dropStmt();
    InsertStmtContext *insertStmt();
    OptimizeStmtContext *optimizeStmt();
    SelectUnionStmtContext *selectUnionStmt();
    SetStmtContext *setStmt();
    ShowStmtContext *showStmt();
    UseStmtContext *useStmt();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  QueryContext* query();

  class  AlterStmtContext : public antlr4::ParserRuleContext {
  public:
    AlterStmtContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    AlterStmtContext() = default;
    void copyFrom(AlterStmtContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  AlterTableStmtContext : public AlterStmtContext {
  public:
    AlterTableStmtContext(AlterStmtContext *ctx);

    antlr4::tree::TerminalNode *ALTER();
    antlr4::tree::TerminalNode *TABLE();
    TableIdentifierContext *tableIdentifier();
    std::vector<AlterTableClauseContext *> alterTableClause();
    AlterTableClauseContext* alterTableClause(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  AlterStmtContext* alterStmt();

  class  AlterTableClauseContext : public antlr4::ParserRuleContext {
  public:
    AlterTableClauseContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    AlterTableClauseContext() = default;
    void copyFrom(AlterTableClauseContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  AlterTableDropClauseContext : public AlterTableClauseContext {
  public:
    AlterTableDropClauseContext(AlterTableClauseContext *ctx);

    antlr4::tree::TerminalNode *DROP();
    antlr4::tree::TerminalNode *COLUMN();
    IdentifierContext *identifier();
    antlr4::tree::TerminalNode *IF();
    antlr4::tree::TerminalNode *EXISTS();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  AlterTableModifyClauseContext : public AlterTableClauseContext {
  public:
    AlterTableModifyClauseContext(AlterTableClauseContext *ctx);

    antlr4::tree::TerminalNode *MODIFY();
    antlr4::tree::TerminalNode *COLUMN();
    TableColumnDfntContext *tableColumnDfnt();
    antlr4::tree::TerminalNode *IF();
    antlr4::tree::TerminalNode *EXISTS();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  AlterTableAddClauseContext : public AlterTableClauseContext {
  public:
    AlterTableAddClauseContext(AlterTableClauseContext *ctx);

    antlr4::tree::TerminalNode *ADD();
    antlr4::tree::TerminalNode *COLUMN();
    TableColumnDfntContext *tableColumnDfnt();
    antlr4::tree::TerminalNode *IF();
    antlr4::tree::TerminalNode *NOT();
    antlr4::tree::TerminalNode *EXISTS();
    antlr4::tree::TerminalNode *AFTER();
    IdentifierContext *identifier();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  AlterTableCommentClauseContext : public AlterTableClauseContext {
  public:
    AlterTableCommentClauseContext(AlterTableClauseContext *ctx);

    antlr4::tree::TerminalNode *COMMENT();
    antlr4::tree::TerminalNode *COLUMN();
    IdentifierContext *identifier();
    antlr4::tree::TerminalNode *STRING_LITERAL();
    antlr4::tree::TerminalNode *IF();
    antlr4::tree::TerminalNode *EXISTS();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  AlterTableClauseContext* alterTableClause();

  class  CheckStmtContext : public antlr4::ParserRuleContext {
  public:
    CheckStmtContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *CHECK();
    antlr4::tree::TerminalNode *TABLE();
    TableIdentifierContext *tableIdentifier();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  CheckStmtContext* checkStmt();

  class  CreateStmtContext : public antlr4::ParserRuleContext {
  public:
    CreateStmtContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    CreateStmtContext() = default;
    void copyFrom(CreateStmtContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  CreateTableStmtContext : public CreateStmtContext {
  public:
    CreateTableStmtContext(CreateStmtContext *ctx);

    antlr4::tree::TerminalNode *CREATE();
    antlr4::tree::TerminalNode *TABLE();
    TableIdentifierContext *tableIdentifier();
    SchemaClauseContext *schemaClause();
    antlr4::tree::TerminalNode *TEMPORARY();
    antlr4::tree::TerminalNode *IF();
    antlr4::tree::TerminalNode *NOT();
    antlr4::tree::TerminalNode *EXISTS();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  CreateDatabaseStmtContext : public CreateStmtContext {
  public:
    CreateDatabaseStmtContext(CreateStmtContext *ctx);

    antlr4::tree::TerminalNode *CREATE();
    antlr4::tree::TerminalNode *DATABASE();
    DatabaseIdentifierContext *databaseIdentifier();
    antlr4::tree::TerminalNode *IF();
    antlr4::tree::TerminalNode *NOT();
    antlr4::tree::TerminalNode *EXISTS();
    EngineExprContext *engineExpr();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  CreateStmtContext* createStmt();

  class  SchemaClauseContext : public antlr4::ParserRuleContext {
  public:
    SchemaClauseContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    SchemaClauseContext() = default;
    void copyFrom(SchemaClauseContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  SchemaAsSubqueryClauseContext : public SchemaClauseContext {
  public:
    SchemaAsSubqueryClauseContext(SchemaClauseContext *ctx);

    antlr4::tree::TerminalNode *AS();
    SelectUnionStmtContext *selectUnionStmt();
    EngineClauseContext *engineClause();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  SchemaAsTableClauseContext : public SchemaClauseContext {
  public:
    SchemaAsTableClauseContext(SchemaClauseContext *ctx);

    antlr4::tree::TerminalNode *AS();
    TableIdentifierContext *tableIdentifier();
    EngineClauseContext *engineClause();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  SchemaAsFunctionClauseContext : public SchemaClauseContext {
  public:
    SchemaAsFunctionClauseContext(SchemaClauseContext *ctx);

    antlr4::tree::TerminalNode *AS();
    IdentifierContext *identifier();
    antlr4::tree::TerminalNode *LPAREN();
    antlr4::tree::TerminalNode *RPAREN();
    TableArgListContext *tableArgList();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  SchemaDescriptionClauseContext : public SchemaClauseContext {
  public:
    SchemaDescriptionClauseContext(SchemaClauseContext *ctx);

    antlr4::tree::TerminalNode *LPAREN();
    std::vector<TableElementExprContext *> tableElementExpr();
    TableElementExprContext* tableElementExpr(size_t i);
    antlr4::tree::TerminalNode *RPAREN();
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);
    EngineClauseContext *engineClause();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  SchemaClauseContext* schemaClause();

  class  EngineClauseContext : public antlr4::ParserRuleContext {
  public:
    EngineClauseContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    EngineExprContext *engineExpr();
    OrderByClauseContext *orderByClause();
    PartitionByClauseContext *partitionByClause();
    PrimaryKeyClauseContext *primaryKeyClause();
    SampleByClauseContext *sampleByClause();
    TtlClauseContext *ttlClause();
    SettingsClauseContext *settingsClause();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  EngineClauseContext* engineClause();

  class  PartitionByClauseContext : public antlr4::ParserRuleContext {
  public:
    PartitionByClauseContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *PARTITION();
    antlr4::tree::TerminalNode *BY();
    ColumnExprContext *columnExpr();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  PartitionByClauseContext* partitionByClause();

  class  PrimaryKeyClauseContext : public antlr4::ParserRuleContext {
  public:
    PrimaryKeyClauseContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *PRIMARY();
    antlr4::tree::TerminalNode *KEY();
    ColumnExprContext *columnExpr();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  PrimaryKeyClauseContext* primaryKeyClause();

  class  SampleByClauseContext : public antlr4::ParserRuleContext {
  public:
    SampleByClauseContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *SAMPLE();
    antlr4::tree::TerminalNode *BY();
    ColumnExprContext *columnExpr();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  SampleByClauseContext* sampleByClause();

  class  TtlClauseContext : public antlr4::ParserRuleContext {
  public:
    TtlClauseContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *TTL();
    std::vector<TtlExprContext *> ttlExpr();
    TtlExprContext* ttlExpr(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  TtlClauseContext* ttlClause();

  class  EngineExprContext : public antlr4::ParserRuleContext {
  public:
    EngineExprContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ENGINE();
    IdentifierContext *identifier();
    antlr4::tree::TerminalNode *NULL_SQL();
    antlr4::tree::TerminalNode *EQ_SINGLE();
    antlr4::tree::TerminalNode *LPAREN();
    antlr4::tree::TerminalNode *RPAREN();
    ColumnExprListContext *columnExprList();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  EngineExprContext* engineExpr();

  class  TableElementExprContext : public antlr4::ParserRuleContext {
  public:
    TableElementExprContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    TableElementExprContext() = default;
    void copyFrom(TableElementExprContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  TableElementExprColumnContext : public TableElementExprContext {
  public:
    TableElementExprColumnContext(TableElementExprContext *ctx);

    TableColumnDfntContext *tableColumnDfnt();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  TableElementExprContext* tableElementExpr();

  class  TableColumnDfntContext : public antlr4::ParserRuleContext {
  public:
    TableColumnDfntContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    IdentifierContext *identifier();
    ColumnTypeExprContext *columnTypeExpr();
    TableColumnPropertyExprContext *tableColumnPropertyExpr();
    antlr4::tree::TerminalNode *TTL();
    ColumnExprContext *columnExpr();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  TableColumnDfntContext* tableColumnDfnt();

  class  TableColumnPropertyExprContext : public antlr4::ParserRuleContext {
  public:
    TableColumnPropertyExprContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ColumnExprContext *columnExpr();
    antlr4::tree::TerminalNode *DEFAULT();
    antlr4::tree::TerminalNode *MATERIALIZED();
    antlr4::tree::TerminalNode *ALIAS();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  TableColumnPropertyExprContext* tableColumnPropertyExpr();

  class  TtlExprContext : public antlr4::ParserRuleContext {
  public:
    TtlExprContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ColumnExprContext *columnExpr();
    antlr4::tree::TerminalNode *DELETE();
    antlr4::tree::TerminalNode *TO();
    antlr4::tree::TerminalNode *DISK();
    antlr4::tree::TerminalNode *STRING_LITERAL();
    antlr4::tree::TerminalNode *VOLUME();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  TtlExprContext* ttlExpr();

  class  DescribeStmtContext : public antlr4::ParserRuleContext {
  public:
    DescribeStmtContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *TABLE();
    TableIdentifierContext *tableIdentifier();
    antlr4::tree::TerminalNode *DESCRIBE();
    antlr4::tree::TerminalNode *DESC();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  DescribeStmtContext* describeStmt();

  class  DropStmtContext : public antlr4::ParserRuleContext {
  public:
    DropStmtContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    DropStmtContext() = default;
    void copyFrom(DropStmtContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  DropDatabaseStmtContext : public DropStmtContext {
  public:
    DropDatabaseStmtContext(DropStmtContext *ctx);

    antlr4::tree::TerminalNode *DROP();
    antlr4::tree::TerminalNode *DATABASE();
    DatabaseIdentifierContext *databaseIdentifier();
    antlr4::tree::TerminalNode *IF();
    antlr4::tree::TerminalNode *EXISTS();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  DropTableStmtContext : public DropStmtContext {
  public:
    DropTableStmtContext(DropStmtContext *ctx);

    antlr4::tree::TerminalNode *DROP();
    antlr4::tree::TerminalNode *TABLE();
    TableIdentifierContext *tableIdentifier();
    antlr4::tree::TerminalNode *TEMPORARY();
    antlr4::tree::TerminalNode *IF();
    antlr4::tree::TerminalNode *EXISTS();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  DropStmtContext* dropStmt();

  class  InsertStmtContext : public antlr4::ParserRuleContext {
  public:
    InsertStmtContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *INSERT();
    antlr4::tree::TerminalNode *INTO();
    TableIdentifierContext *tableIdentifier();
    ValuesClauseContext *valuesClause();
    antlr4::tree::TerminalNode *LPAREN();
    std::vector<IdentifierContext *> identifier();
    IdentifierContext* identifier(size_t i);
    antlr4::tree::TerminalNode *RPAREN();
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  InsertStmtContext* insertStmt();

  class  ValuesClauseContext : public antlr4::ParserRuleContext {
  public:
    ValuesClauseContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *VALUES();
    std::vector<ValueTupleExprContext *> valueTupleExpr();
    ValueTupleExprContext* valueTupleExpr(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);
    SelectUnionStmtContext *selectUnionStmt();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ValuesClauseContext* valuesClause();

  class  ValueTupleExprContext : public antlr4::ParserRuleContext {
  public:
    ValueTupleExprContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LPAREN();
    ValueExprListContext *valueExprList();
    antlr4::tree::TerminalNode *RPAREN();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ValueTupleExprContext* valueTupleExpr();

  class  OptimizeStmtContext : public antlr4::ParserRuleContext {
  public:
    OptimizeStmtContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *OPTIMIZE();
    antlr4::tree::TerminalNode *TABLE();
    TableIdentifierContext *tableIdentifier();
    PartitionClauseContext *partitionClause();
    antlr4::tree::TerminalNode *FINAL();
    antlr4::tree::TerminalNode *DEDUPLICATE();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  OptimizeStmtContext* optimizeStmt();

  class  PartitionClauseContext : public antlr4::ParserRuleContext {
  public:
    PartitionClauseContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *PARTITION();
    ColumnExprContext *columnExpr();
    antlr4::tree::TerminalNode *ID();
    antlr4::tree::TerminalNode *STRING_LITERAL();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  PartitionClauseContext* partitionClause();

  class  SelectUnionStmtContext : public antlr4::ParserRuleContext {
  public:
    SelectUnionStmtContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<SelectStmtContext *> selectStmt();
    SelectStmtContext* selectStmt(size_t i);
    std::vector<antlr4::tree::TerminalNode *> UNION();
    antlr4::tree::TerminalNode* UNION(size_t i);
    std::vector<antlr4::tree::TerminalNode *> ALL();
    antlr4::tree::TerminalNode* ALL(size_t i);


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  SelectUnionStmtContext* selectUnionStmt();

  class  SelectStmtContext : public antlr4::ParserRuleContext {
  public:
    SelectStmtContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *SELECT();
    ColumnExprListContext *columnExprList();
    WithClauseContext *withClause();
    antlr4::tree::TerminalNode *DISTINCT();
    FromClauseContext *fromClause();
    SampleClauseContext *sampleClause();
    ArrayJoinClauseContext *arrayJoinClause();
    PrewhereClauseContext *prewhereClause();
    WhereClauseContext *whereClause();
    GroupByClauseContext *groupByClause();
    HavingClauseContext *havingClause();
    OrderByClauseContext *orderByClause();
    LimitByClauseContext *limitByClause();
    LimitClauseContext *limitClause();
    SettingsClauseContext *settingsClause();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  SelectStmtContext* selectStmt();

  class  WithClauseContext : public antlr4::ParserRuleContext {
  public:
    WithClauseContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *WITH();
    ColumnExprListContext *columnExprList();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  WithClauseContext* withClause();

  class  FromClauseContext : public antlr4::ParserRuleContext {
  public:
    FromClauseContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *FROM();
    JoinExprContext *joinExpr();
    antlr4::tree::TerminalNode *FINAL();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  FromClauseContext* fromClause();

  class  SampleClauseContext : public antlr4::ParserRuleContext {
  public:
    SampleClauseContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *SAMPLE();
    std::vector<RatioExprContext *> ratioExpr();
    RatioExprContext* ratioExpr(size_t i);
    antlr4::tree::TerminalNode *OFFSET();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  SampleClauseContext* sampleClause();

  class  ArrayJoinClauseContext : public antlr4::ParserRuleContext {
  public:
    ArrayJoinClauseContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ARRAY();
    antlr4::tree::TerminalNode *JOIN();
    ColumnExprListContext *columnExprList();
    antlr4::tree::TerminalNode *LEFT();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ArrayJoinClauseContext* arrayJoinClause();

  class  PrewhereClauseContext : public antlr4::ParserRuleContext {
  public:
    PrewhereClauseContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *PREWHERE();
    ColumnExprContext *columnExpr();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  PrewhereClauseContext* prewhereClause();

  class  WhereClauseContext : public antlr4::ParserRuleContext {
  public:
    WhereClauseContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *WHERE();
    ColumnExprContext *columnExpr();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  WhereClauseContext* whereClause();

  class  GroupByClauseContext : public antlr4::ParserRuleContext {
  public:
    GroupByClauseContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *GROUP();
    antlr4::tree::TerminalNode *BY();
    ColumnExprListContext *columnExprList();
    antlr4::tree::TerminalNode *WITH();
    antlr4::tree::TerminalNode *TOTALS();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  GroupByClauseContext* groupByClause();

  class  HavingClauseContext : public antlr4::ParserRuleContext {
  public:
    HavingClauseContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *HAVING();
    ColumnExprContext *columnExpr();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  HavingClauseContext* havingClause();

  class  OrderByClauseContext : public antlr4::ParserRuleContext {
  public:
    OrderByClauseContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ORDER();
    antlr4::tree::TerminalNode *BY();
    OrderExprListContext *orderExprList();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  OrderByClauseContext* orderByClause();

  class  LimitByClauseContext : public antlr4::ParserRuleContext {
  public:
    LimitByClauseContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LIMIT();
    LimitExprContext *limitExpr();
    antlr4::tree::TerminalNode *BY();
    ColumnExprListContext *columnExprList();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  LimitByClauseContext* limitByClause();

  class  LimitClauseContext : public antlr4::ParserRuleContext {
  public:
    LimitClauseContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LIMIT();
    LimitExprContext *limitExpr();
    antlr4::tree::TerminalNode *WITH();
    antlr4::tree::TerminalNode *TIES();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  LimitClauseContext* limitClause();

  class  SettingsClauseContext : public antlr4::ParserRuleContext {
  public:
    SettingsClauseContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *SETTINGS();
    SettingExprListContext *settingExprList();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  SettingsClauseContext* settingsClause();

  class  JoinExprContext : public antlr4::ParserRuleContext {
  public:
    JoinExprContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    JoinExprContext() = default;
    void copyFrom(JoinExprContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  JoinExprOpContext : public JoinExprContext {
  public:
    JoinExprOpContext(JoinExprContext *ctx);

    std::vector<JoinExprContext *> joinExpr();
    JoinExprContext* joinExpr(size_t i);
    JoinOpContext *joinOp();
    antlr4::tree::TerminalNode *JOIN();
    JoinConstraintClauseContext *joinConstraintClause();
    antlr4::tree::TerminalNode *GLOBAL();
    antlr4::tree::TerminalNode *LOCAL();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  JoinExprTableContext : public JoinExprContext {
  public:
    JoinExprTableContext(JoinExprContext *ctx);

    TableExprContext *tableExpr();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  JoinExprParensContext : public JoinExprContext {
  public:
    JoinExprParensContext(JoinExprContext *ctx);

    antlr4::tree::TerminalNode *LPAREN();
    JoinExprContext *joinExpr();
    antlr4::tree::TerminalNode *RPAREN();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  JoinExprCrossOpContext : public JoinExprContext {
  public:
    JoinExprCrossOpContext(JoinExprContext *ctx);

    std::vector<JoinExprContext *> joinExpr();
    JoinExprContext* joinExpr(size_t i);
    JoinOpCrossContext *joinOpCross();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  JoinExprContext* joinExpr();
  JoinExprContext* joinExpr(int precedence);
  class  JoinOpContext : public antlr4::ParserRuleContext {
  public:
    JoinOpContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    JoinOpContext() = default;
    void copyFrom(JoinOpContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  JoinOpFullContext : public JoinOpContext {
  public:
    JoinOpFullContext(JoinOpContext *ctx);

    antlr4::tree::TerminalNode *FULL();
    antlr4::tree::TerminalNode *OUTER();
    antlr4::tree::TerminalNode *ANY();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  JoinOpInnerContext : public JoinOpContext {
  public:
    JoinOpInnerContext(JoinOpContext *ctx);

    antlr4::tree::TerminalNode *INNER();
    antlr4::tree::TerminalNode *ANY();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  JoinOpLeftRightContext : public JoinOpContext {
  public:
    JoinOpLeftRightContext(JoinOpContext *ctx);

    antlr4::tree::TerminalNode *LEFT();
    antlr4::tree::TerminalNode *RIGHT();
    antlr4::tree::TerminalNode *OUTER();
    antlr4::tree::TerminalNode *SEMI();
    antlr4::tree::TerminalNode *ANTI();
    antlr4::tree::TerminalNode *ANY();
    antlr4::tree::TerminalNode *ASOF();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  JoinOpContext* joinOp();

  class  JoinOpCrossContext : public antlr4::ParserRuleContext {
  public:
    JoinOpCrossContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *CROSS();
    antlr4::tree::TerminalNode *JOIN();
    antlr4::tree::TerminalNode *GLOBAL();
    antlr4::tree::TerminalNode *LOCAL();
    antlr4::tree::TerminalNode *COMMA();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  JoinOpCrossContext* joinOpCross();

  class  JoinConstraintClauseContext : public antlr4::ParserRuleContext {
  public:
    JoinConstraintClauseContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ON();
    ColumnExprListContext *columnExprList();
    antlr4::tree::TerminalNode *USING();
    antlr4::tree::TerminalNode *LPAREN();
    antlr4::tree::TerminalNode *RPAREN();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  JoinConstraintClauseContext* joinConstraintClause();

  class  LimitExprContext : public antlr4::ParserRuleContext {
  public:
    LimitExprContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> INTEGER_LITERAL();
    antlr4::tree::TerminalNode* INTEGER_LITERAL(size_t i);
    antlr4::tree::TerminalNode *COMMA();
    antlr4::tree::TerminalNode *OFFSET();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  LimitExprContext* limitExpr();

  class  OrderExprListContext : public antlr4::ParserRuleContext {
  public:
    OrderExprListContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<OrderExprContext *> orderExpr();
    OrderExprContext* orderExpr(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  OrderExprListContext* orderExprList();

  class  OrderExprContext : public antlr4::ParserRuleContext {
  public:
    OrderExprContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ColumnExprContext *columnExpr();
    antlr4::tree::TerminalNode *NULLS();
    antlr4::tree::TerminalNode *COLLATE();
    antlr4::tree::TerminalNode *STRING_LITERAL();
    antlr4::tree::TerminalNode *ASCENDING();
    antlr4::tree::TerminalNode *DESCENDING();
    antlr4::tree::TerminalNode *DESC();
    antlr4::tree::TerminalNode *FIRST();
    antlr4::tree::TerminalNode *LAST();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  OrderExprContext* orderExpr();

  class  RatioExprContext : public antlr4::ParserRuleContext {
  public:
    RatioExprContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> INTEGER_LITERAL();
    antlr4::tree::TerminalNode* INTEGER_LITERAL(size_t i);
    antlr4::tree::TerminalNode *SLASH();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  RatioExprContext* ratioExpr();

  class  SettingExprListContext : public antlr4::ParserRuleContext {
  public:
    SettingExprListContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<SettingExprContext *> settingExpr();
    SettingExprContext* settingExpr(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  SettingExprListContext* settingExprList();

  class  SettingExprContext : public antlr4::ParserRuleContext {
  public:
    SettingExprContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    IdentifierContext *identifier();
    antlr4::tree::TerminalNode *EQ_SINGLE();
    LiteralContext *literal();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  SettingExprContext* settingExpr();

  class  SetStmtContext : public antlr4::ParserRuleContext {
  public:
    SetStmtContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *SET();
    SettingExprListContext *settingExprList();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  SetStmtContext* setStmt();

  class  ShowStmtContext : public antlr4::ParserRuleContext {
  public:
    ShowStmtContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    ShowStmtContext() = default;
    void copyFrom(ShowStmtContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  ShowCreateTableStmtContext : public ShowStmtContext {
  public:
    ShowCreateTableStmtContext(ShowStmtContext *ctx);

    antlr4::tree::TerminalNode *SHOW();
    antlr4::tree::TerminalNode *CREATE();
    antlr4::tree::TerminalNode *TABLE();
    TableIdentifierContext *tableIdentifier();
    antlr4::tree::TerminalNode *TEMPORARY();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  ShowTablesStmtContext : public ShowStmtContext {
  public:
    ShowTablesStmtContext(ShowStmtContext *ctx);

    antlr4::tree::TerminalNode *SHOW();
    antlr4::tree::TerminalNode *TABLES();
    antlr4::tree::TerminalNode *TEMPORARY();
    DatabaseIdentifierContext *databaseIdentifier();
    antlr4::tree::TerminalNode *LIKE();
    antlr4::tree::TerminalNode *STRING_LITERAL();
    WhereClauseContext *whereClause();
    LimitClauseContext *limitClause();
    antlr4::tree::TerminalNode *FROM();
    antlr4::tree::TerminalNode *IN();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  ShowStmtContext* showStmt();

  class  UseStmtContext : public antlr4::ParserRuleContext {
  public:
    UseStmtContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *USE();
    DatabaseIdentifierContext *databaseIdentifier();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  UseStmtContext* useStmt();

  class  ValueExprListContext : public antlr4::ParserRuleContext {
  public:
    ValueExprListContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<ValueExprContext *> valueExpr();
    ValueExprContext* valueExpr(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ValueExprListContext* valueExprList();

  class  ValueExprContext : public antlr4::ParserRuleContext {
  public:
    ValueExprContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    ValueExprContext() = default;
    void copyFrom(ValueExprContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  ValueExprArrayContext : public ValueExprContext {
  public:
    ValueExprArrayContext(ValueExprContext *ctx);

    antlr4::tree::TerminalNode *LBRACKET();
    antlr4::tree::TerminalNode *RBRACKET();
    ValueExprListContext *valueExprList();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  ValueExprTupleContext : public ValueExprContext {
  public:
    ValueExprTupleContext(ValueExprContext *ctx);

    ValueTupleExprContext *valueTupleExpr();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  ValueExprLiteralContext : public ValueExprContext {
  public:
    ValueExprLiteralContext(ValueExprContext *ctx);

    LiteralContext *literal();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  ValueExprContext* valueExpr();

  class  ColumnTypeExprContext : public antlr4::ParserRuleContext {
  public:
    ColumnTypeExprContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    ColumnTypeExprContext() = default;
    void copyFrom(ColumnTypeExprContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  ColumnTypeExprNestedContext : public ColumnTypeExprContext {
  public:
    ColumnTypeExprNestedContext(ColumnTypeExprContext *ctx);

    std::vector<IdentifierContext *> identifier();
    IdentifierContext* identifier(size_t i);
    antlr4::tree::TerminalNode *LPAREN();
    std::vector<ColumnTypeExprContext *> columnTypeExpr();
    ColumnTypeExprContext* columnTypeExpr(size_t i);
    antlr4::tree::TerminalNode *RPAREN();
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  ColumnTypeExprParamContext : public ColumnTypeExprContext {
  public:
    ColumnTypeExprParamContext(ColumnTypeExprContext *ctx);

    IdentifierContext *identifier();
    antlr4::tree::TerminalNode *LPAREN();
    ColumnParamListContext *columnParamList();
    antlr4::tree::TerminalNode *RPAREN();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  ColumnTypeExprSimpleContext : public ColumnTypeExprContext {
  public:
    ColumnTypeExprSimpleContext(ColumnTypeExprContext *ctx);

    IdentifierContext *identifier();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  ColumnTypeExprComplexContext : public ColumnTypeExprContext {
  public:
    ColumnTypeExprComplexContext(ColumnTypeExprContext *ctx);

    IdentifierContext *identifier();
    antlr4::tree::TerminalNode *LPAREN();
    std::vector<ColumnTypeExprContext *> columnTypeExpr();
    ColumnTypeExprContext* columnTypeExpr(size_t i);
    antlr4::tree::TerminalNode *RPAREN();
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  ColumnTypeExprEnumContext : public ColumnTypeExprContext {
  public:
    ColumnTypeExprEnumContext(ColumnTypeExprContext *ctx);

    IdentifierContext *identifier();
    antlr4::tree::TerminalNode *LPAREN();
    std::vector<EnumValueContext *> enumValue();
    EnumValueContext* enumValue(size_t i);
    antlr4::tree::TerminalNode *RPAREN();
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  ColumnTypeExprContext* columnTypeExpr();

  class  ColumnExprListContext : public antlr4::ParserRuleContext {
  public:
    ColumnExprListContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<ColumnsExprContext *> columnsExpr();
    ColumnsExprContext* columnsExpr(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ColumnExprListContext* columnExprList();

  class  ColumnsExprContext : public antlr4::ParserRuleContext {
  public:
    ColumnsExprContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    ColumnsExprContext() = default;
    void copyFrom(ColumnsExprContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  ColumnsExprColumnContext : public ColumnsExprContext {
  public:
    ColumnsExprColumnContext(ColumnsExprContext *ctx);

    ColumnExprContext *columnExpr();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  ColumnsExprAsteriskContext : public ColumnsExprContext {
  public:
    ColumnsExprAsteriskContext(ColumnsExprContext *ctx);

    antlr4::tree::TerminalNode *ASTERISK();
    TableIdentifierContext *tableIdentifier();
    antlr4::tree::TerminalNode *DOT();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  ColumnsExprSubqueryContext : public ColumnsExprContext {
  public:
    ColumnsExprSubqueryContext(ColumnsExprContext *ctx);

    antlr4::tree::TerminalNode *LPAREN();
    SelectUnionStmtContext *selectUnionStmt();
    antlr4::tree::TerminalNode *RPAREN();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  ColumnsExprContext* columnsExpr();

  class  ColumnExprContext : public antlr4::ParserRuleContext {
  public:
    ColumnExprContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    ColumnExprContext() = default;
    void copyFrom(ColumnExprContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  ColumnExprTernaryOpContext : public ColumnExprContext {
  public:
    ColumnExprTernaryOpContext(ColumnExprContext *ctx);

    std::vector<ColumnExprContext *> columnExpr();
    ColumnExprContext* columnExpr(size_t i);
    antlr4::tree::TerminalNode *QUERY();
    antlr4::tree::TerminalNode *COLON();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  ColumnExprAliasContext : public ColumnExprContext {
  public:
    ColumnExprAliasContext(ColumnExprContext *ctx);

    ColumnExprContext *columnExpr();
    antlr4::tree::TerminalNode *AS();
    IdentifierContext *identifier();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  ColumnExprExtractContext : public ColumnExprContext {
  public:
    ColumnExprExtractContext(ColumnExprContext *ctx);

    antlr4::tree::TerminalNode *EXTRACT();
    antlr4::tree::TerminalNode *LPAREN();
    antlr4::tree::TerminalNode *INTERVAL_TYPE();
    antlr4::tree::TerminalNode *FROM();
    ColumnExprContext *columnExpr();
    antlr4::tree::TerminalNode *RPAREN();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  ColumnExprSubqueryContext : public ColumnExprContext {
  public:
    ColumnExprSubqueryContext(ColumnExprContext *ctx);

    antlr4::tree::TerminalNode *LPAREN();
    SelectUnionStmtContext *selectUnionStmt();
    antlr4::tree::TerminalNode *RPAREN();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  ColumnExprTrimContext : public ColumnExprContext {
  public:
    ColumnExprTrimContext(ColumnExprContext *ctx);

    antlr4::tree::TerminalNode *TRIM();
    antlr4::tree::TerminalNode *LPAREN();
    antlr4::tree::TerminalNode *STRING_LITERAL();
    antlr4::tree::TerminalNode *FROM();
    ColumnExprContext *columnExpr();
    antlr4::tree::TerminalNode *RPAREN();
    antlr4::tree::TerminalNode *BOTH();
    antlr4::tree::TerminalNode *LEADING();
    antlr4::tree::TerminalNode *TRAILING();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  ColumnExprLiteralContext : public ColumnExprContext {
  public:
    ColumnExprLiteralContext(ColumnExprContext *ctx);

    LiteralContext *literal();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  ColumnExprArrayContext : public ColumnExprContext {
  public:
    ColumnExprArrayContext(ColumnExprContext *ctx);

    antlr4::tree::TerminalNode *LBRACKET();
    antlr4::tree::TerminalNode *RBRACKET();
    ColumnExprListContext *columnExprList();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  ColumnExprTupleContext : public ColumnExprContext {
  public:
    ColumnExprTupleContext(ColumnExprContext *ctx);

    antlr4::tree::TerminalNode *LPAREN();
    ColumnExprListContext *columnExprList();
    antlr4::tree::TerminalNode *RPAREN();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  ColumnExprArrayAccessContext : public ColumnExprContext {
  public:
    ColumnExprArrayAccessContext(ColumnExprContext *ctx);

    std::vector<ColumnExprContext *> columnExpr();
    ColumnExprContext* columnExpr(size_t i);
    antlr4::tree::TerminalNode *LBRACKET();
    antlr4::tree::TerminalNode *RBRACKET();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  ColumnExprBetweenContext : public ColumnExprContext {
  public:
    ColumnExprBetweenContext(ColumnExprContext *ctx);

    std::vector<ColumnExprContext *> columnExpr();
    ColumnExprContext* columnExpr(size_t i);
    antlr4::tree::TerminalNode *BETWEEN();
    antlr4::tree::TerminalNode *AND();
    antlr4::tree::TerminalNode *NOT();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  ColumnExprParensContext : public ColumnExprContext {
  public:
    ColumnExprParensContext(ColumnExprContext *ctx);

    antlr4::tree::TerminalNode *LPAREN();
    ColumnExprContext *columnExpr();
    antlr4::tree::TerminalNode *RPAREN();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  ColumnExprUnaryOpContext : public ColumnExprContext {
  public:
    ColumnExprUnaryOpContext(ColumnExprContext *ctx);

    UnaryOpContext *unaryOp();
    ColumnExprContext *columnExpr();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  ColumnExprTupleAccessContext : public ColumnExprContext {
  public:
    ColumnExprTupleAccessContext(ColumnExprContext *ctx);

    ColumnExprContext *columnExpr();
    antlr4::tree::TerminalNode *DOT();
    antlr4::tree::TerminalNode *INTEGER_LITERAL();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  ColumnExprCaseContext : public ColumnExprContext {
  public:
    ColumnExprCaseContext(ColumnExprContext *ctx);

    antlr4::tree::TerminalNode *CASE();
    antlr4::tree::TerminalNode *END();
    std::vector<ColumnExprContext *> columnExpr();
    ColumnExprContext* columnExpr(size_t i);
    std::vector<antlr4::tree::TerminalNode *> WHEN();
    antlr4::tree::TerminalNode* WHEN(size_t i);
    std::vector<antlr4::tree::TerminalNode *> THEN();
    antlr4::tree::TerminalNode* THEN(size_t i);
    antlr4::tree::TerminalNode *ELSE();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  ColumnExprIntervalContext : public ColumnExprContext {
  public:
    ColumnExprIntervalContext(ColumnExprContext *ctx);

    antlr4::tree::TerminalNode *INTERVAL();
    ColumnExprContext *columnExpr();
    antlr4::tree::TerminalNode *INTERVAL_TYPE();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  ColumnExprIsNullContext : public ColumnExprContext {
  public:
    ColumnExprIsNullContext(ColumnExprContext *ctx);

    ColumnExprContext *columnExpr();
    antlr4::tree::TerminalNode *IS();
    antlr4::tree::TerminalNode *NULL_SQL();
    antlr4::tree::TerminalNode *NOT();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  ColumnExprIdentifierContext : public ColumnExprContext {
  public:
    ColumnExprIdentifierContext(ColumnExprContext *ctx);

    ColumnIdentifierContext *columnIdentifier();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  ColumnExprBinaryOpContext : public ColumnExprContext {
  public:
    ColumnExprBinaryOpContext(ColumnExprContext *ctx);

    std::vector<ColumnExprContext *> columnExpr();
    ColumnExprContext* columnExpr(size_t i);
    BinaryOpContext *binaryOp();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  ColumnExprAsteriskContext : public ColumnExprContext {
  public:
    ColumnExprAsteriskContext(ColumnExprContext *ctx);

    antlr4::tree::TerminalNode *ASTERISK();
    TableIdentifierContext *tableIdentifier();
    antlr4::tree::TerminalNode *DOT();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  ColumnExprFunctionContext : public ColumnExprContext {
  public:
    ColumnExprFunctionContext(ColumnExprContext *ctx);

    IdentifierContext *identifier();
    std::vector<antlr4::tree::TerminalNode *> LPAREN();
    antlr4::tree::TerminalNode* LPAREN(size_t i);
    std::vector<antlr4::tree::TerminalNode *> RPAREN();
    antlr4::tree::TerminalNode* RPAREN(size_t i);
    ColumnArgListContext *columnArgList();
    ColumnParamListContext *columnParamList();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  ColumnExprContext* columnExpr();
  ColumnExprContext* columnExpr(int precedence);
  class  ColumnParamListContext : public antlr4::ParserRuleContext {
  public:
    ColumnParamListContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<LiteralContext *> literal();
    LiteralContext* literal(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ColumnParamListContext* columnParamList();

  class  ColumnArgListContext : public antlr4::ParserRuleContext {
  public:
    ColumnArgListContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<ColumnArgExprContext *> columnArgExpr();
    ColumnArgExprContext* columnArgExpr(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ColumnArgListContext* columnArgList();

  class  ColumnArgExprContext : public antlr4::ParserRuleContext {
  public:
    ColumnArgExprContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ColumnLambdaExprContext *columnLambdaExpr();
    ColumnExprContext *columnExpr();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ColumnArgExprContext* columnArgExpr();

  class  ColumnLambdaExprContext : public antlr4::ParserRuleContext {
  public:
    ColumnLambdaExprContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ARROW();
    ColumnExprContext *columnExpr();
    antlr4::tree::TerminalNode *LPAREN();
    std::vector<IdentifierContext *> identifier();
    IdentifierContext* identifier(size_t i);
    antlr4::tree::TerminalNode *RPAREN();
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ColumnLambdaExprContext* columnLambdaExpr();

  class  ColumnIdentifierContext : public antlr4::ParserRuleContext {
  public:
    ColumnIdentifierContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<IdentifierContext *> identifier();
    IdentifierContext* identifier(size_t i);
    TableIdentifierContext *tableIdentifier();
    std::vector<antlr4::tree::TerminalNode *> DOT();
    antlr4::tree::TerminalNode* DOT(size_t i);


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ColumnIdentifierContext* columnIdentifier();

  class  TableExprContext : public antlr4::ParserRuleContext {
  public:
    TableExprContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    TableExprContext() = default;
    void copyFrom(TableExprContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  TableExprIdentifierContext : public TableExprContext {
  public:
    TableExprIdentifierContext(TableExprContext *ctx);

    TableIdentifierContext *tableIdentifier();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  TableExprSubqueryContext : public TableExprContext {
  public:
    TableExprSubqueryContext(TableExprContext *ctx);

    antlr4::tree::TerminalNode *LPAREN();
    SelectUnionStmtContext *selectUnionStmt();
    antlr4::tree::TerminalNode *RPAREN();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  TableExprAliasContext : public TableExprContext {
  public:
    TableExprAliasContext(TableExprContext *ctx);

    TableExprContext *tableExpr();
    IdentifierContext *identifier();
    antlr4::tree::TerminalNode *AS();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  TableExprFunctionContext : public TableExprContext {
  public:
    TableExprFunctionContext(TableExprContext *ctx);

    IdentifierContext *identifier();
    antlr4::tree::TerminalNode *LPAREN();
    antlr4::tree::TerminalNode *RPAREN();
    TableArgListContext *tableArgList();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  TableExprContext* tableExpr();
  TableExprContext* tableExpr(int precedence);
  class  TableIdentifierContext : public antlr4::ParserRuleContext {
  public:
    TableIdentifierContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    IdentifierContext *identifier();
    DatabaseIdentifierContext *databaseIdentifier();
    antlr4::tree::TerminalNode *DOT();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  TableIdentifierContext* tableIdentifier();

  class  TableArgListContext : public antlr4::ParserRuleContext {
  public:
    TableArgListContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<TableArgExprContext *> tableArgExpr();
    TableArgExprContext* tableArgExpr(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  TableArgListContext* tableArgList();

  class  TableArgExprContext : public antlr4::ParserRuleContext {
  public:
    TableArgExprContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    LiteralContext *literal();
    TableIdentifierContext *tableIdentifier();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  TableArgExprContext* tableArgExpr();

  class  DatabaseIdentifierContext : public antlr4::ParserRuleContext {
  public:
    DatabaseIdentifierContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    IdentifierContext *identifier();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  DatabaseIdentifierContext* databaseIdentifier();

  class  LiteralContext : public antlr4::ParserRuleContext {
  public:
    LiteralContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *FLOATING_LITERAL();
    antlr4::tree::TerminalNode *HEXADECIMAL_LITERAL();
    antlr4::tree::TerminalNode *INTEGER_LITERAL();
    antlr4::tree::TerminalNode *INF();
    antlr4::tree::TerminalNode *NAN_SQL();
    antlr4::tree::TerminalNode *PLUS();
    antlr4::tree::TerminalNode *DASH();
    antlr4::tree::TerminalNode *STRING_LITERAL();
    antlr4::tree::TerminalNode *NULL_SQL();
    IdentifierContext *identifier();
    antlr4::tree::TerminalNode *LPAREN();
    antlr4::tree::TerminalNode *RPAREN();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  LiteralContext* literal();

  class  KeywordContext : public antlr4::ParserRuleContext {
  public:
    KeywordContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *AFTER();
    antlr4::tree::TerminalNode *ALIAS();
    antlr4::tree::TerminalNode *ALL();
    antlr4::tree::TerminalNode *ALTER();
    antlr4::tree::TerminalNode *AND();
    antlr4::tree::TerminalNode *ANTI();
    antlr4::tree::TerminalNode *ANY();
    antlr4::tree::TerminalNode *ARRAY();
    antlr4::tree::TerminalNode *AS();
    antlr4::tree::TerminalNode *ASCENDING();
    antlr4::tree::TerminalNode *ASOF();
    antlr4::tree::TerminalNode *BETWEEN();
    antlr4::tree::TerminalNode *BOTH();
    antlr4::tree::TerminalNode *BY();
    antlr4::tree::TerminalNode *CASE();
    antlr4::tree::TerminalNode *CAST();
    antlr4::tree::TerminalNode *CHECK();
    antlr4::tree::TerminalNode *CLUSTER();
    antlr4::tree::TerminalNode *COLLATE();
    antlr4::tree::TerminalNode *CREATE();
    antlr4::tree::TerminalNode *CROSS();
    antlr4::tree::TerminalNode *DATABASE();
    antlr4::tree::TerminalNode *DAY();
    antlr4::tree::TerminalNode *DEDUPLICATE();
    antlr4::tree::TerminalNode *DEFAULT();
    antlr4::tree::TerminalNode *DELETE();
    antlr4::tree::TerminalNode *DESC();
    antlr4::tree::TerminalNode *DESCENDING();
    antlr4::tree::TerminalNode *DESCRIBE();
    antlr4::tree::TerminalNode *DISK();
    antlr4::tree::TerminalNode *DISTINCT();
    antlr4::tree::TerminalNode *DROP();
    antlr4::tree::TerminalNode *ELSE();
    antlr4::tree::TerminalNode *END();
    antlr4::tree::TerminalNode *ENGINE();
    antlr4::tree::TerminalNode *EXISTS();
    antlr4::tree::TerminalNode *EXTRACT();
    antlr4::tree::TerminalNode *FINAL();
    antlr4::tree::TerminalNode *FIRST();
    antlr4::tree::TerminalNode *FORMAT();
    antlr4::tree::TerminalNode *FULL();
    antlr4::tree::TerminalNode *GLOBAL();
    antlr4::tree::TerminalNode *GROUP();
    antlr4::tree::TerminalNode *HAVING();
    antlr4::tree::TerminalNode *HOUR();
    antlr4::tree::TerminalNode *ID();
    antlr4::tree::TerminalNode *IF();
    antlr4::tree::TerminalNode *IN();
    antlr4::tree::TerminalNode *INNER();
    antlr4::tree::TerminalNode *INSERT();
    antlr4::tree::TerminalNode *INTERVAL();
    antlr4::tree::TerminalNode *INTO();
    antlr4::tree::TerminalNode *IS();
    antlr4::tree::TerminalNode *JOIN();
    antlr4::tree::TerminalNode *KEY();
    antlr4::tree::TerminalNode *LAST();
    antlr4::tree::TerminalNode *LEADING();
    antlr4::tree::TerminalNode *LEFT();
    antlr4::tree::TerminalNode *LIKE();
    antlr4::tree::TerminalNode *LIMIT();
    antlr4::tree::TerminalNode *LOCAL();
    antlr4::tree::TerminalNode *MATERIALIZED();
    antlr4::tree::TerminalNode *MINUTE();
    antlr4::tree::TerminalNode *MODIFY();
    antlr4::tree::TerminalNode *MONTH();
    antlr4::tree::TerminalNode *NOT();
    antlr4::tree::TerminalNode *NULLS();
    antlr4::tree::TerminalNode *OFFSET();
    antlr4::tree::TerminalNode *ON();
    antlr4::tree::TerminalNode *OPTIMIZE();
    antlr4::tree::TerminalNode *OR();
    antlr4::tree::TerminalNode *ORDER();
    antlr4::tree::TerminalNode *OUTER();
    antlr4::tree::TerminalNode *OUTFILE();
    antlr4::tree::TerminalNode *PARTITION();
    antlr4::tree::TerminalNode *PREWHERE();
    antlr4::tree::TerminalNode *PRIMARY();
    antlr4::tree::TerminalNode *QUARTER();
    antlr4::tree::TerminalNode *RIGHT();
    antlr4::tree::TerminalNode *SAMPLE();
    antlr4::tree::TerminalNode *SECOND();
    antlr4::tree::TerminalNode *SEMI();
    antlr4::tree::TerminalNode *SET();
    antlr4::tree::TerminalNode *SETTINGS();
    antlr4::tree::TerminalNode *SHOW();
    antlr4::tree::TerminalNode *TABLE();
    antlr4::tree::TerminalNode *TABLES();
    antlr4::tree::TerminalNode *TEMPORARY();
    antlr4::tree::TerminalNode *THEN();
    antlr4::tree::TerminalNode *TIES();
    antlr4::tree::TerminalNode *TOTALS();
    antlr4::tree::TerminalNode *TRAILING();
    antlr4::tree::TerminalNode *TRIM();
    antlr4::tree::TerminalNode *TO();
    antlr4::tree::TerminalNode *TTL();
    antlr4::tree::TerminalNode *UNION();
    antlr4::tree::TerminalNode *USE();
    antlr4::tree::TerminalNode *VALUES();
    antlr4::tree::TerminalNode *VOLUME();
    antlr4::tree::TerminalNode *WEEK();
    antlr4::tree::TerminalNode *WHEN();
    antlr4::tree::TerminalNode *WITH();
    antlr4::tree::TerminalNode *YEAR();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  KeywordContext* keyword();

  class  IdentifierContext : public antlr4::ParserRuleContext {
  public:
    IdentifierContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *IDENTIFIER();
    antlr4::tree::TerminalNode *INTERVAL_TYPE();
    KeywordContext *keyword();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  IdentifierContext* identifier();

  class  UnaryOpContext : public antlr4::ParserRuleContext {
  public:
    UnaryOpContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *DASH();
    antlr4::tree::TerminalNode *NOT();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  UnaryOpContext* unaryOp();

  class  BinaryOpContext : public antlr4::ParserRuleContext {
  public:
    BinaryOpContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *CONCAT();
    antlr4::tree::TerminalNode *ASTERISK();
    antlr4::tree::TerminalNode *SLASH();
    antlr4::tree::TerminalNode *PLUS();
    antlr4::tree::TerminalNode *DASH();
    antlr4::tree::TerminalNode *PERCENT();
    antlr4::tree::TerminalNode *EQ_DOUBLE();
    antlr4::tree::TerminalNode *EQ_SINGLE();
    antlr4::tree::TerminalNode *NOT_EQ();
    antlr4::tree::TerminalNode *LE();
    antlr4::tree::TerminalNode *GE();
    antlr4::tree::TerminalNode *LT();
    antlr4::tree::TerminalNode *GT();
    antlr4::tree::TerminalNode *AND();
    antlr4::tree::TerminalNode *OR();
    antlr4::tree::TerminalNode *LIKE();
    antlr4::tree::TerminalNode *NOT();
    antlr4::tree::TerminalNode *IN();
    antlr4::tree::TerminalNode *GLOBAL();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  BinaryOpContext* binaryOp();

  class  EnumValueContext : public antlr4::ParserRuleContext {
  public:
    EnumValueContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *STRING_LITERAL();
    antlr4::tree::TerminalNode *EQ_SINGLE();
    antlr4::tree::TerminalNode *INTEGER_LITERAL();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  EnumValueContext* enumValue();


  virtual bool sempred(antlr4::RuleContext *_localctx, size_t ruleIndex, size_t predicateIndex) override;
  bool joinExprSempred(JoinExprContext *_localctx, size_t predicateIndex);
  bool columnExprSempred(ColumnExprContext *_localctx, size_t predicateIndex);
  bool tableExprSempred(TableExprContext *_localctx, size_t predicateIndex);

private:
  static std::vector<antlr4::dfa::DFA> _decisionToDFA;
  static antlr4::atn::PredictionContextCache _sharedContextCache;
  static std::vector<std::string> _ruleNames;
  static std::vector<std::string> _tokenNames;

  static std::vector<std::string> _literalNames;
  static std::vector<std::string> _symbolicNames;
  static antlr4::dfa::Vocabulary _vocabulary;
  static antlr4::atn::ATN _atn;
  static std::vector<uint16_t> _serializedATN;


  struct Initializer {
    Initializer();
  };
  static Initializer _init;
};

}  // namespace DB
