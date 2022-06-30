#ifndef __ADD_EXPRESSION__
#define __ADD_EXPRESSION__

#include "Expression.hpp"
#include "ExpressionVisitor.hpp"

struct AddExpression : Expression
{
    Expression *left, *right;

    AddExpression(Expression* const left, Expression* const right)
    : left{left}, right{right}{}

    void accept(ExpressionVisitor* visitor) override
    {
        visitor->visit(this);
    }

    ~AddExpression()
    {
        delete left; 
        delete right;
    }
};
#endif