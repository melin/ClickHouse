#pragma once

#include <Parsers/New/AST/INode.h>


namespace DB::AST
{

class JoinConstraintClause : public SimpleClause<ColumnExprList>
{
    public:
        enum class ConstraintType
        {
            ON,
            USING,
        };

        JoinConstraintClause(ConstraintType type, PtrTo<ColumnExprList> list);

        auto getType() const { return type; }

    private:
        const ConstraintType type;
};

class JoinExpr : public INode
{
    public:
        enum class JoinOpType
        {
            INNER,
            INNER_ALL,
            INNER_ANY,
            INNER_ASOF,
            LEFT,
            LEFT_SEMI,
            LEFT_ALL,
            LEFT_ANTI,
            LEFT_ANY,
            LEFT_ASOF,
            RIGHT,
            RIGHT_SEMI,
            RIGHT_ALL,
            RIGHT_ANTI,
            RIGHT_ANY,
            RIGHT_ASOF,
            FULL,
            FULL_ALL,
            FULL_ANY,
            CROSS,
        };
        enum class JoinOpMode
        {
            DEFAULT,  // actual mode depends on setting's 'distributed_product_mode' value
            GLOBAL,
            LOCAL,
        };

        static PtrTo<JoinExpr> createTableExpr(PtrTo<TableExpr> expr, bool final);
        static PtrTo<JoinExpr> createJoinOp(PtrTo<JoinExpr> left_expr, PtrTo<JoinExpr> right_expr, JoinOpType op, JoinOpMode mode, PtrTo<JoinConstraintClause> clause);

        ASTPtr convertToOld() const override;  // returns topologically sorted elements as ASTExpressionList

    private:
        enum ChildIndex : UInt8
        {
            TABLE = 0,       // TableExpr
            LEFT_EXPR = 0,   // JoinExpr
            RIGHT_EXPR = 1,  // JoinExpr
            CONSTRAINT = 2,  // JoinConstraintClause
        };
        enum class ExprType
        {
            TABLE,
            JOIN_OP,
        };

        ExprType expr_type;
        JoinOpType op_type = JoinOpType::INNER;
        JoinOpMode op_mode = JoinOpMode::DEFAULT;
        bool final = false;

        JoinExpr(ExprType type, bool final, PtrList exprs);
        JoinExpr(ExprType type, JoinOpType op, JoinOpMode mode, PtrList exprs);
};

}
