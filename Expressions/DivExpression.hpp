#ifndef __DIV_EXPRESSION__
#define __DIV_EXPRESSION__

#include "Expression.hpp"
#include "ExpressionVisitor.hpp"

struct DivExpression : Expression
{
    Expression *left, *right;

    DivExpression(Expression* const left, Expression* const right)
    : left{left}, right{right}{}

    void accept(ExpressionVisitor* visitor) override
    {
        visitor->visit(this);
    }

    ~DivExpression()
    {
        delete left; 
        delete right;
    }
};
#endif