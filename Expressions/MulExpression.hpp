#ifndef __MUL_EXPRESSION__
#define __MUL_EXPRESSION__

#include "Expression.hpp"
#include "ExpressionVisitor.hpp"

struct MulExpression : Expression
{
    Expression *left, *right;

    MulExpression(Expression* const left, Expression* const right)
    : left{left}, right{right}{}

    void accept(ExpressionVisitor* visitor) override
    {
        visitor->visit(this);
    }

    ~MulExpression()
    {
        delete left; 
        delete right;
    }
};
#endif