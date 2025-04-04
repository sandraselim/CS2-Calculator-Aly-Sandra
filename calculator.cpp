#include "calculator.h"
#include "stackt.h"
#include <cstdlib>
#include <iostream>
using namespace std;

double add(double a, double b) {
    return a + b;
}

double subtract(double a, double b) {
    return a - b;
}

double multiply(double a, double b) {
    return a * b;
}

double divide(double a, double b) {
    if (b == 0) {
        cout << "invalid denominator" << endl;
        return 0;
    }
    return a / b;
}

int gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }

    return a;
}



int lcm(int a, int b)
{
    return (a * b) / gcd(a, b);
}


double factorial(double n) {
    double result = 1; // Start with 1 as the base case

    for (int i = 1; i <= n; i++) {
        result *= i;
    }

    return result; // Return the final factorial value
}


int randomnumber(int lower, int upper)
{
    return rand() % (upper - lower + 1) + lower;
}

int getOrder(char op)
{
    switch (op)
    {
    case '(':
        return 0;
    case '+':
        return 1;
    case '-':
        return 2;
    case '*':
        return 3;
    case '/':
        return 4;
    case ')':
        return 5;
    default:
        return -1;
    }
}

double evaluate(char op, double rightOperand, double leftOperand)
{
    switch (op)
    {
    case '+':
        return rightOperand + leftOperand;
    case '-':
        return rightOperand - leftOperand;
    case '*':
        return rightOperand * leftOperand;
    case '/':
        return rightOperand / leftOperand;
    default:
        return -1;
    }
}


double evaluateExpression(string exp)
{
    Stackt<double> numStack(exp.size());
    Stackt<char> operatorStack(exp.size());

    for (int i = 0; i < exp.size(); i++)
    {
        char current = exp.at(i);
        if (current == ' ')
        {
            continue;
        }
        else
        {
            int order = getOrder(current);
            if (order == -1)       // -1 means it's not an operator aka a number
            {
                numStack.push(int(current - '0'));
            }
            else
            {
                if (operatorStack.isEmpty())
                {
                    operatorStack.push(current);
                }
                else if (current == '(')
                {
                    operatorStack.push(current);
                }
                else if (current == ')')
                {
                    while (operatorStack.peek() != '(')
                    {
                        char poppedOp = operatorStack.pop();
                        double eval = evaluate(poppedOp, numStack.pop(), numStack.pop());
                        numStack.push(eval);
                    }
                    operatorStack.pop();
                }
                else if (getOrder(operatorStack.peek()) <= order)
                {
                    operatorStack.push(current);
                }
                else
                {
                    while ((!operatorStack.isEmpty()) && (getOrder(operatorStack.peek()) > order))
                    {
                        char poppedOp = operatorStack.pop();
                        double eval = evaluate(poppedOp, numStack.pop(), numStack.pop());
                        numStack.push(eval);

                    }
                    operatorStack.push(current);

                }
            }
        }

    }



    while (!operatorStack.isEmpty())
    {
        char poppedOp = operatorStack.pop();
        double eval = evaluate(poppedOp, numStack.pop(), numStack.pop());
        numStack.push(eval);
    }

    return numStack.pop();
}
