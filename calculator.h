#ifndef CALCULATOR_H
#define CALCULATOR_H

#include <string>
using namespace std;


double add(double a, double b);
double subtract(double a, double b);
double multiply(double a, double b);
double divide(double a, double b);
int lcm(int a, int b);
double factorial(double n);
int gcd(int a, int b);
int randomnumber(int a, int b);
double evaluateExpression(string exp);

#endif