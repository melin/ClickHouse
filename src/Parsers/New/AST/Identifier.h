#pragma once

#include <Parsers/New/AST/INode.h>


namespace DB::AST
{

class Identifier : public INode
{
    public:
        explicit Identifier(const String & name_);

        const auto & getName() const { return name; }

        ASTPtr convertToOld() const override;

        virtual String getQualifiedName() const { return name; };

    protected:
        mutable String name; // protected and non-const because identifiers may become `column.nested` from `table.column`

        String dumpInfo() const override { return getQualifiedName(); }
};

class DatabaseIdentifier : public Identifier
{
    public:
        explicit DatabaseIdentifier(PtrTo<Identifier> name);
};

class TableIdentifier : public Identifier
{
    public:
        TableIdentifier(PtrTo<DatabaseIdentifier> database, PtrTo<Identifier> name);

        auto getDatabase() const { return db; }
        void makeCompound() const;

        String getQualifiedName() const override { return (db ? db->getQualifiedName() + "." : String()) + getName(); }

    private:
        mutable PtrTo<DatabaseIdentifier> db;
};

class ColumnIdentifier : public Identifier
{
    public:
        ColumnIdentifier(PtrTo<TableIdentifier> table, PtrTo<Identifier> name, PtrTo<Identifier> nested);

        auto getTable() const { return table; }
        void makeCompound() const;

        String getQualifiedName() const override { return (table ? table->getQualifiedName() + "." : String()) + getName(); }

    private:
        mutable PtrTo<TableIdentifier> table;
        mutable PtrTo<Identifier> nested;
};

}
