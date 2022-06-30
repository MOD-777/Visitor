#ifndef __INT_EXPRESSION__
#define __INT_EXPRESSION__

#include "Expression.hpp"
#include "ExpressionVisitor.hpp"

struct IntExpression : Expression
{
    int value;
    explicit IntExpression(const int value) : value(value){};

    void accept(ExpressionVisitor* visitor) override
    {
        visitor->visit(this);
    }
};
#endif