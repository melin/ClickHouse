#include <Parsers/New/AST/CreateViewQuery.h>

#include <Parsers/ASTCreateQuery.h>
#include <Parsers/New/AST/Identifier.h>
#include <Parsers/New/AST/SelectUnionQuery.h>
#include <Parsers/New/ParseTreeVisitor.h>


namespace DB::AST
{

CreateViewQuery::CreateViewQuery(bool attach_, bool if_not_exists_, PtrTo<TableIdentifier> identifier, PtrTo<SelectUnionQuery> query)
    : DDLQuery{identifier, query}, attach(attach_), if_not_exists(if_not_exists_)
{
}

ASTPtr CreateViewQuery::convertToOld() const
{
    auto query = std::make_shared<ASTCreateQuery>();

    {
        auto table_id = getTableIdentifier(get(NAME)->convertToOld());
        query->database = table_id.database_name;
        query->table = table_id.table_name;
        query->uuid = table_id.uuid;
    }

    query->attach = attach;
    query->if_not_exists = if_not_exists;

    query->set(query->select, get(SUBQUERY)->convertToOld());

    return query;
}

}

namespace DB
{

using namespace AST;

antlrcpp::Any ParseTreeVisitor::visitCreateViewStmt(ClickHouseParser::CreateViewStmtContext *ctx)
{
    return std::make_shared<CreateViewQuery>(!!ctx->ATTACH(), !!ctx->IF(), visit(ctx->tableIdentifier()), visit(ctx->subqueryClause()));
}

}
