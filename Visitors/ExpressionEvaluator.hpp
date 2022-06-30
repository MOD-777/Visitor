#ifndef __EXPRESSION_EVALUATOR__
#define __EXPRESSION_EVALUATOR__

#include "ExpressionVisitor.hpp"
#include "AddExpression.hpp"
#include "SubExpression.hpp"
#include "MulExpression.hpp"
#include "DivExpression.hpp"

struct ExpressionEvaluator : ExpressionVisitor
{
    double result;
    void visit(IntExpression* ie) override
    {
        result = ie->value;
    }

    void visit(AddExpression* ae) override
    {
        ae->left->accept(this);
        auto temp = result;
        ae->right->accept(this);
        result += temp;
    }

    void visit(SubExpression* se) override
    {
        se->left->accept(this);
        auto temp = result;
        se->right->accept(this);
        result = temp - result;
    }

    void visit(MulExpression* me) override
    {
        me->left->accept(this);
        auto temp = result;
        me->right->accept(this);
        result *= temp;
    }

    void visit(DivExpression* de) override
    {
        de->left->accept(this);
        auto temp = result;
        de->right->accept(this);
        result = temp/result;
    } 
};
#endif