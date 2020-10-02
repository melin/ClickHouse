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

        static PtrTo<Literal> createNull();
        static PtrTo<NumberLiteral> createNumber(antlr4::tree::TerminalNode * literal, bool negative = false);
        static PtrTo<NumberLiteral> createNumber(const String& literal); // checks first symbol for '-' character
        static PtrTo<StringLiteral> createString(antlr4::tree::TerminalNode * literal);
        static PtrTo<StringLiteral> createString(const String& literal); // without quotes

        ASTPtr convertToOld() const override;

        bool is(LiteralType what) const { return type == what; }

    protected:
        const String token; // STRING is stored without quotes

        Literal(LiteralType type, const String & token);

        template <typename T>
        std::optional<T> asNumber(bool minus) const
        {
            T number;
            std::stringstream ss(String(minus ? "-" : "+") + token);
            ss >> number;
            if (ss.fail() || !ss.eof())
                return {};
            return number;
        }

        template <typename T>
        std::optional<T> asString() const { return token; }

    private:
        LiteralType type;

        String dumpInfo() const override { return token; }
};

class NumberLiteral : public Literal
{
    public:
        explicit NumberLiteral(antlr4::tree::TerminalNode * literal);
        explicit NumberLiteral(const String & literal);

        void makeNegative() { minus = true; }

        template <typename T> std::optional<T> as() const { return asNumber<T>(minus); }

    private:
        bool minus = false;
};

class StringLiteral : public Literal
{
    public:
        explicit StringLiteral(antlr4::tree::TerminalNode * literal)
            : Literal(LiteralType::STRING, literal->getSymbol()->getText().substr(1, literal->getSymbol()->getText().size() - 2))
        {
        }
        explicit StringLiteral(const String & literal) : Literal(LiteralType::STRING, literal) {}

        template <typename T>
        T as() const
        {
            return asString<T>();
        }
};

}