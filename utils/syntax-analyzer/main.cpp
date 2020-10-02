#include <Parsers/IAST.h>
#include <Parsers/New/AST/Query.h>
#include <Parsers/New/parseQuery.h>
#include <Parsers/parseQuery.h>
#include <Parsers/ParserQuery.h>

#include <support/Any.h>

#include <iostream>
#include <iterator>
#include <string>

using namespace DB;

int main(int argc, const char **)
{
    if (argc > 1)
    {
        std::cerr << "No arguments needed. Reads query from input until EOF" << std::endl;
        return 1;
    }

    std::istreambuf_iterator<char> begin(std::cin), end;
    std::string query(begin, end);

    {
        std::vector<String> queries;
        splitMultipartQuery(query, queries, 10000000, 10000);
        for (const auto & q : queries)
        {
            std::cout << std::endl << "Query:" << std::endl;
            std::cout << q << std::endl;

            ParserQuery parser(q.data() + q.size(), true);
            ASTPtr orig_ast = parseQuery(parser, q, 10000000, 10000);

            std::cout << std::endl << "New AST:" << std::endl;
            auto new_ast = parseQuery(q);
            new_ast->dump();

            auto old_ast = new_ast->convertToOld();
            if (orig_ast)
            {
                std::cout << std::endl << "Original AST:" << std::endl;
                orig_ast->dumpTree(std::cout);
            }
            if (old_ast)
            {
                std::cout << std::endl << "Converted AST:" << std::endl;
                old_ast->dumpTree(std::cout);
            }
        }
    }
}