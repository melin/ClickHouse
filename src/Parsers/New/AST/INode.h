#pragma once

#include <Parsers/New/AST/fwd_decl.h>

#include <common/demangle.h>
#include <Common/TypePromotion.h>
#include <Parsers/ASTExpressionList.h>

#include <iostream>


namespace DB::AST
{

class INode : public TypePromotion<INode>
{
    public:
        virtual ~INode() = default;
        virtual ASTPtr convertToOld() const { return ASTPtr(); }

        void dump() const { dump(0); }

    protected:
        PtrList children;  // children potentially may point to |nullptr|

    private:
        void dump(int indentation) const
        {
            for (auto i = 0; i < indentation; ++i) std::cout << " ";
            std::cout << "⭸ " << dumpInfo() << " (" << demangle(typeid(*this).name()) << ")" << std::endl;
            for (const auto & child : children) if (child) child->dump(indentation + 1);
        }

        virtual String dumpInfo() const { return ""; }
};

template <class T, char Separator>
class List : public INode {
    public:
        void append(PtrTo<T> node) { children.push_back(node); }

        auto begin() const { return children.cbegin(); }
        auto end() const { return children.cend(); }

        ASTPtr convertToOld() const override
        {
            auto list = std::make_shared<ASTExpressionList>();
            for (const auto & child : *this) list->children.emplace_back(child->convertToOld());
            return list;
        }
};

}
