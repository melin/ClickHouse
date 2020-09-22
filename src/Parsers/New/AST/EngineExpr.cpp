#include <Parsers/New/AST/EngineExpr.h>

#include <Parsers/ASTCreateQuery.h>
#include <Parsers/ASTFunction.h>
#include <Parsers/New/AST/ColumnExpr.h>
#include <Parsers/New/AST/Identifier.h>
#include <Parsers/New/AST/Literal.h>
#include <Parsers/New/AST/SelectUnionQuery.h>
#include <Parsers/New/ParseTreeVisitor.h>


namespace DB::AST
{

PartitionByClause::PartitionByClause(PtrTo<ColumnExpr> expr)
{
    children.push_back(expr);
}

ASTPtr PartitionByClause::convertToOld() const
{
    return children[EXPR]->convertToOld();
}

PrimaryKeyClause::PrimaryKeyClause(PtrTo<ColumnExpr> expr)
{
    children.push_back(expr);
}

SampleByClause::SampleByClause(PtrTo<ColumnExpr> expr)
{
    children.push_back(expr);
}

TTLClause::TTLClause(PtrTo<TTLExprList> list)
{
    children.assign(list->begin(), list->end());
}

EngineClause::EngineClause(PtrTo<EngineExpr> expr)
{
    children.resize(MAX_INDEX);

    children[ENGINE] = expr;
}

void EngineClause::setOrderByClause(PtrTo<OrderByClause> clause)
{
    children[ORDER_BY] = clause;
}

void EngineClause::setPartitionByClause(PtrTo<PartitionByClause> clause)
{
    children[PARTITION_BY] = clause;
}

void EngineClause::setPrimaryKeyClause(PtrTo<PrimaryKeyClause> clause)
{
    children[PRIMARY_KEY] = clause;
}

void EngineClause::setSampleByClause(PtrTo<SampleByClause> clause)
{
    children[SAMPLE_BY] = clause;
}

void EngineClause::setTTLClause(PtrTo<TTLClause> clause)
{
    children[TTL] = clause;
}

void EngineClause::setSettingsClause(PtrTo<SettingsClause> clause)
{
    children[SETTINGS] = clause;
}

ASTPtr EngineClause::convertToOld() const
{
    auto storage = std::make_shared<ASTStorage>();

    storage->set(storage->engine, children[ENGINE]->convertToOld());
    if (has(PARTITION_BY)) storage->set(storage->partition_by, children[PARTITION_BY]->convertToOld());
    if (has(PRIMARY_KEY)) storage->set(storage->primary_key, children[PRIMARY_KEY]->convertToOld());
    if (has(ORDER_BY)) storage->set(storage->order_by, children[ORDER_BY]->convertToOld());
    if (has(SAMPLE_BY)) storage->set(storage->sample_by, children[SAMPLE_BY]->convertToOld());
    if (has(TTL)) storage->set(storage->ttl_table, children[TTL]->convertToOld());

    return storage;
}

EngineExpr::EngineExpr(PtrTo<Identifier> identifier, PtrTo<ColumnExprList> args)
{
    children.push_back(identifier);
    children.push_back(args);
}

ASTPtr EngineExpr::convertToOld() const
{
    auto expr = std::make_shared<ASTFunction>();

    expr->name = children[NAME]->as<Identifier>()->getName();
    if (has(ARGS))
    {
        expr->arguments = children[ARGS]->convertToOld();
        expr->children.push_back(expr->arguments);
    }

    return expr;
}

TTLExpr::TTLExpr(PtrTo<ColumnExpr> expr, TTLType type, PtrTo<StringLiteral> literal) : ttl_type(type)
{
    children.push_back(expr);
    children.push_back(literal);
    (void)ttl_type; // TODO
}

}

namespace DB
{

using namespace AST;

antlrcpp::Any ParseTreeVisitor::visitEngineClause(ClickHouseParser::EngineClauseContext *ctx)
{
    auto clause = std::make_shared<EngineClause>(visit(ctx->engineExpr()).as<PtrTo<EngineExpr>>());

    if (!ctx->orderByClause().empty()) clause->setOrderByClause(visit(ctx->orderByClause(0)));
    if (!ctx->partitionByClause().empty()) clause->setPartitionByClause(visit(ctx->partitionByClause(0)));
    if (!ctx->primaryKeyClause().empty()) clause->setPrimaryKeyClause(visit(ctx->primaryKeyClause(0)));
    if (!ctx->sampleByClause().empty()) clause->setSampleByClause(visit(ctx->sampleByClause(0)));
    if (!ctx->ttlClause().empty()) clause->setTTLClause(visit(ctx->ttlClause(0)));
    if (!ctx->settingsClause().empty()) clause->setSettingsClause(visit(ctx->settingsClause(0)));

    return clause;
}

antlrcpp::Any ParseTreeVisitor::visitEngineExpr(ClickHouseParser::EngineExprContext *ctx)
{
    auto list = ctx->columnExprList() ? visit(ctx->columnExprList()).as<PtrTo<ColumnExprList>>() : nullptr;
    return std::make_shared<EngineExpr>(visit(ctx->identifierOrNull()), list);
}

antlrcpp::Any ParseTreeVisitor::visitPartitionByClause(ClickHouseParser::PartitionByClauseContext *ctx)
{
    return std::make_shared<PartitionByClause>(visit(ctx->columnExpr()).as<PtrTo<ColumnExpr>>());
}

antlrcpp::Any ParseTreeVisitor::visitPrimaryKeyClause(ClickHouseParser::PrimaryKeyClauseContext *ctx)
{
    return std::make_shared<PrimaryKeyClause>(visit(ctx->columnExpr()).as<PtrTo<ColumnExpr>>());
}

antlrcpp::Any ParseTreeVisitor::visitSampleByClause(ClickHouseParser::SampleByClauseContext *ctx)
{
    return std::make_shared<SampleByClause>(visit(ctx->columnExpr()).as<PtrTo<ColumnExpr>>());
}

antlrcpp::Any ParseTreeVisitor::visitTtlClause(ClickHouseParser::TtlClauseContext *ctx)
{
    auto list = std::make_shared<TTLExprList>();
    for (auto * expr : ctx->ttlExpr()) list->append(visit(expr));
    return std::make_shared<TTLClause>(list);
}

antlrcpp::Any ParseTreeVisitor::visitTtlExpr(ClickHouseParser::TtlExprContext *ctx)
{
    TTLExpr::TTLType type;
    PtrTo<StringLiteral> literal;

    if (ctx->DELETE()) type = TTLExpr::TTLType::DELETE;
    else if (ctx->DISK()) type = TTLExpr::TTLType::TO_DISK;
    else if (ctx->VOLUME()) type = TTLExpr::TTLType::TO_VOLUME;
    else __builtin_unreachable();

    if (ctx->STRING_LITERAL()) literal = Literal::createString(ctx->STRING_LITERAL());

    return std::make_shared<TTLExpr>(visit(ctx->columnExpr()), type, literal);
}

}
