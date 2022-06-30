#ifndef __EXPRESSION_VISITOR__
#define __EXPRESSION_VISITOR__

class IntExpression;
class AddExpression;
class SubExpression;
class MulExpression;
class DivExpression;

struct ExpressionVisitor
{
    virtual void visit(IntExpression* ie) = 0;
    virtual void visit(AddExpression* ae) = 0;
    virtual void visit(SubExpression* se) = 0;
    virtual void visit(MulExpression* me) = 0;
    virtual void visit(DivExpression* de) = 0;
};

#endif