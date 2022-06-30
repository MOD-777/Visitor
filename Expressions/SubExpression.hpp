#ifndef __SUB_EXPRESSION__
#define __SUB_EXPRESSION__

#include "Expression.hpp"
#include "ExpressionVisitor.hpp"

struct  SubExpression : Expression
{
    Expression *left, *right;

    SubExpression(Expression* const left, Expression* const right)
    : left{left}, right{right}{}

    void accept(ExpressionVisitor* visitor) override
    {
        visitor->visit(this);
    }

    ~SubExpression()
    {
        delete left; 
        delete right;
    }
};
#endif