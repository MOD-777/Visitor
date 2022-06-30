#ifndef __EXPRESSION__
#define __EXPRESSION__

#include "ExpressionVisitor.hpp"

struct Expression
{
    virtual void accept(ExpressionVisitor *visitor) = 0;
};
#endif