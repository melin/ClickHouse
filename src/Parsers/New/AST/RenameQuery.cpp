#include <Parsers/New/AST/RenameQuery.h>

#include <Parsers/StorageID.h>
#include <Parsers/ASTIdentifier.h>
#include <Parsers/ASTRenameQuery.h>
#include <Parsers/New/AST/Identifier.h>
#include <Parsers/New/ParseTreeVisitor.h>


namespace DB::AST
{

RenameQuery::RenameQuery(PtrTo<List<TableIdentifier>> list) : DDLQuery{list}
{
}

ASTPtr RenameQuery::convertToOld() const
{
    auto query = std::make_shared<ASTRenameQuery>();

    for (auto table = get<List<TableIdentifier>>(EXPRS)->begin(), end = get<List<TableIdentifier>>(EXPRS)->end(); table != end; ++table)
    {
        ASTRenameQuery::Element element;

        if (auto database = (*table)->as<TableIdentifier>()->getDatabase())
            element.from.database = database->getName();
        element.from.table = (*table)->as<TableIdentifier>()->getName();

        ++table;

        if (auto database = (*table)->as<TableIdentifier>()->getDatabase())
            element.to.database = database->getName();
        element.to.table = (*table)->as<TableIdentifier>()->getName();

        query->elements.push_back(element);
    }

    return query;
}

}

namespace DB
{

using namespace AST;

antlrcpp::Any ParseTreeVisitor::visitRenameStmt(ClickHouseParser::RenameStmtContext *ctx)
{
    auto list = std::make_shared<List<TableIdentifier>>();
    for (auto * identifier : ctx->tableIdentifier()) list->push(visit(identifier));
    return std::make_shared<RenameQuery>(list);
}

}
