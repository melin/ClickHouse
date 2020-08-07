#pragma once

#include <Parsers/New/AST/Query.h>

#include <list>


namespace DB::AST
{

class SelectStmt;

class SelectUnionQuery : public Query
{
    public:
        void appendSelect(PtrTo<SelectStmt> stmt);

        ASTPtr convertToOld() const override;
};

}
