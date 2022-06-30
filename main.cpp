#include "IntExpression.hpp"
#include "AddExpression.hpp"
#include "SubExpression.hpp"
#include "MulExpression.hpp"
#include "DivExpression.hpp"

#include "ExpressionPrinter.hpp"
#include "ExpressionEvaluator.hpp"

#include <iostream>

int main(int, char**) {
    auto add = new AddExpression{
        new IntExpression{1},
        new AddExpression{
            new IntExpression{2},
            new IntExpression{3}
        }
    };

    auto sub = new SubExpression{
        new IntExpression{1},
        new AddExpression{
            new IntExpression{2},
            new IntExpression{3}
        }
    };

    auto mul = new MulExpression{
        new IntExpression{2},
        new AddExpression{
            new IntExpression{2},
            new IntExpression{3}
        }
    };

    auto div = new DivExpression{
        new IntExpression{10},
        new AddExpression{
            new IntExpression{2},
            new IntExpression{3}
        }
    };

    auto printExpresion = [](auto expression){    
        ExpressionPrinter ep;
        ExpressionEvaluator ev;
        ep.visit(expression);
        ev.visit(expression);
        std::cout << ep.str() << " = " << ev.result << std::endl;
    };

    printExpresion(add);
    printExpresion(sub);
    printExpresion(mul);
    printExpresion(div);

}
