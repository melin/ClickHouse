#pragma once

#include <Parsers/New/AST/INode.h>

#include <Core/Field.h>

#include <Token.h>
#include <tree/TerminalNode.h>

#include <sstream>


namespace DB::AST
{

class Literal : public INode
{
    public:
        enum class LiteralType
        {
            NULL_LITERAL,
            NUMBER,
            STRING,
        };

        static PtrTo<Literal> createNull(antlr4::tree::TerminalNode * literal);
        static PtrTo<NumberLiteral> createNumber(antlr4::tree::TerminalNode * literal, bool minus = false);
        static PtrTo<StringLiteral> createString(antlr4::tree::TerminalNode * literal);

        ASTPtr convertToOld() const override;

        bool is(LiteralType what) const { return type == what; }

    protected:
        antlr4::tree::TerminalNode * token; // not const because 'getSymbol()' is not const too.

        Literal(LiteralType type, antlr4::tree::TerminalNode * literal);

        template <typename T>
        std::optional<T> asNumber(bool minus) const
        {
            T number;
            std::stringstream ss(String(minus ? "-" : "+") + token->getSymbol()->getText());
            ss >> number;
            if (ss.fail())
                return {};
            return number;
        }

        template <typename T>
        std::optional<T> asString() const
        {
            return token->getSymbol()->getText().substr(1, token->getSymbol()->getText().size() - 2);
        }

    private:
        LiteralType type;

        String dumpInfo() const override { return token->getSymbol()->getText(); }
};

class NumberLiteral : public Literal
{
    public:
        explicit NumberLiteral(antlr4::tree::TerminalNode * literal, bool minus_) : Literal(LiteralType::NUMBER, literal), minus(minus_) {}

        template <typename T>
        std::optional<T> as() const
        {
            return asNumber<T>(minus);
        }

    private:
        const bool minus;
};

class StringLiteral : public Literal
{
    public:
        explicit StringLiteral(antlr4::tree::TerminalNode * literal) : Literal(LiteralType::STRING, literal) {}

        template <typename T>
        T as() const
        {
            return asString<T>();
        }
};

}
