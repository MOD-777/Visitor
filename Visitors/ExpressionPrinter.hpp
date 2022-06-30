#ifndef __EXPRESSION_PRINTER__
#define __EXPRESSION_PRINTER__

#include "ExpressionVisitor.hpp"
#include "AddExpression.hpp"
#include "SubExpression.hpp"
#include "MulExpression.hpp"
#include "DivExpression.hpp"

#include <sstream>
#include <iostream>

struct ExpressionPrinter : ExpressionVisitor
{
    std::ostringstream oss;
    std::string str() const { return oss.str(); }
    void visit(IntExpression* ie) override
    {
        oss << ie->value;
    }

    void visit(AddExpression* ae) override
    {
        oss << "(";
        ae->left->accept(this);
        oss << "+";
        ae->right->accept(this);
        oss << ")";
    }

    void visit(SubExpression* se) override
    {
        oss << "(";
        se->left->accept(this);
        oss << "-";
        se->right->accept(this);
        oss << ")";
    }

    void visit(MulExpression* me) override
    {
        oss << "(";
        me->left->accept(this);
        oss << "*";
        me->right->accept(this);
        oss << ")";
    }

    void visit(DivExpression* de) override
    {
        oss << "(";
        de->left->accept(this);
        oss << "/";
        de->right->accept(this);
        oss << ")";
    }
};
#endif