#include <Parsers/New/AST/ColumnTypeExpr.h>

#include <Parsers/ASTFunction.h>
#include <Parsers/New/AST/Identifier.h>
#include <Parsers/New/AST/Literal.h>
#include <Parsers/New/ParseTreeVisitor.h>


namespace DB::AST
{

EnumValue::EnumValue(PtrTo<StringLiteral> name, PtrTo<NumberLiteral> value)
{
    children.push_back(name);
    children.push_back(value);
}

// static
PtrTo<ColumnTypeExpr> ColumnTypeExpr::createSimple(PtrTo<Identifier> identifier)
{
    return PtrTo<ColumnTypeExpr>(new ColumnTypeExpr(ExprType::SIMPLE, {identifier}));
}

// static
PtrTo<ColumnTypeExpr> ColumnTypeExpr::createComplex(PtrTo<Identifier> identifier, PtrTo<ColumnTypeExprList> list)
{
    return PtrTo<ColumnTypeExpr>(new ColumnTypeExpr(ExprType::COMPLEX, {identifier, list}));
}

// static
PtrTo<ColumnTypeExpr> ColumnTypeExpr::createEnum(PtrTo<Identifier> identifier, PtrTo<EnumValueList> list)
{
    return PtrTo<ColumnTypeExpr>(new ColumnTypeExpr(ExprType::ENUM, {identifier, list}));
}

// static
PtrTo<ColumnTypeExpr> ColumnTypeExpr::createParam(PtrTo<Identifier> identifier, PtrTo<ColumnParamList> list)
{
    return PtrTo<ColumnTypeExpr>(new ColumnTypeExpr(ExprType::PARAM, {identifier, list}));
}

// static
PtrTo<ColumnTypeExpr> ColumnTypeExpr::createNested(PtrTo<Identifier> identifier, NestedParamList params)
{
    PtrList list;

    list.push_back(identifier);
    for (const auto & param : params)
    {
        list.push_back(param.first);
        list.push_back(param.second);
    }

    return PtrTo<ColumnTypeExpr>(new ColumnTypeExpr(ExprType::NESTED, list));
}

ColumnTypeExpr::ColumnTypeExpr(ExprType type, PtrList exprs) : expr_type(type)
{
    children = exprs;
}

ASTPtr ColumnTypeExpr::convertToOld() const
{
    auto func = std::make_shared<ASTFunction>();

    func->name = children[NAME]->as<Identifier>()->getName();
    if (expr_type != ExprType::SIMPLE)
    {
        func->arguments = children[LIST]->convertToOld();
        func->children.push_back(func->arguments);
    }

    return func;
}

}

namespace DB
{

using namespace AST;

antlrcpp::Any ParseTreeVisitor::visitColumnTypeExprSimple(ClickHouseParser::ColumnTypeExprSimpleContext *ctx)
{
    return ColumnTypeExpr::createSimple(visit(ctx->identifier()));
}

antlrcpp::Any ParseTreeVisitor::visitColumnTypeExprParam(ClickHouseParser::ColumnTypeExprParamContext *ctx)
{
    return ColumnTypeExpr::createParam(visit(ctx->identifier()), visit(ctx->columnExprList()));
}

antlrcpp::Any ParseTreeVisitor::visitColumnTypeExprEnum(ClickHouseParser::ColumnTypeExprEnumContext *ctx)
{
    auto list = std::make_shared<EnumValueList>();
    for (auto * value : ctx->enumValue()) list->append(visit(value));
    return ColumnTypeExpr::createEnum(visit(ctx->identifier()), list);
}

antlrcpp::Any ParseTreeVisitor::visitColumnTypeExprComplex(ClickHouseParser::ColumnTypeExprComplexContext *ctx)
{
    auto list = std::make_shared<ColumnTypeExprList>();
    for (auto * expr : ctx->columnTypeExpr()) list->append(visit(expr));
    return ColumnTypeExpr::createComplex(visit(ctx->identifier()), list);
}

antlrcpp::Any ParseTreeVisitor::visitColumnTypeExprNested(ClickHouseParser::ColumnTypeExprNestedContext *ctx)
{
    ColumnTypeExpr::NestedParamList list;

    for (size_t i = 0; i < ctx->columnTypeExpr().size(); ++i)
        list.emplace_back(visit(ctx->identifier(i + 1)), visit(ctx->columnTypeExpr(i)));

    return ColumnTypeExpr::createNested(visit(ctx->identifier(0)), list);
}

antlrcpp::Any ParseTreeVisitor::visitEnumValue(ClickHouseParser::EnumValueContext *ctx)
{
    return std::make_shared<EnumValue>(Literal::createString(ctx->STRING_LITERAL()), visit(ctx->numberLiteral()));
}

}
