#include <Parsers/New/AST/UseQuery.h>

#include <Parsers/ASTUseQuery.h>
#include <Parsers/New/AST/Identifier.h>
#include <Parsers/New/ParseTreeVisitor.h>


namespace DB::AST
{

UseQuery::UseQuery(PtrTo<DatabaseIdentifier> identifier)
{
    children.push_back(identifier);
}

ASTPtr UseQuery::convertToOld() const
{
    auto query = std::make_shared<ASTUseQuery>();

    // TODO

    return query;
}

}

namespace DB
{

using namespace AST;

antlrcpp::Any ParseTreeVisitor::visitUseStmt(ClickHouseParser::UseStmtContext *ctx)
{
    return std::make_shared<UseQuery>(visit(ctx->databaseIdentifier()).as<PtrTo<DatabaseIdentifier>>());
}

}
