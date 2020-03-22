#include "Calculator.h"

double Calculator::Calculate(double x, char oper, double y)
{
    switch (oper)
    {
    case '+':
        return x + y;
    case '-':
        return x - y;
    case '*':
        return x * y;
    case '/':
        return x / y;
    case '^':
        return square(x, y);
    default:
        return 0.0;
    }
}

double Calculator::square(double a, double b)
{
    int c = a;
    for (int i = 1; i < b; i++)
       a= a* c;
    return a;
}

