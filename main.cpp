#include "calculator.h"
#include <cstdlib>
#include <ctime>
#include <iostream>

using namespace std;

int main()
{
    srand(time(0));
    double a = 10.5, b = 5.2;
    cout << "Addition of " << a << " and " << b << ": " << add(a, b) << endl;


    cout << "Subtraction of " << a << " and " << b << ": " << subtract(a, b) << endl;


    cout << "Multiplication of " << a << " and " << b << ": " << multiply(a, b) << endl;


    cout << "Division of " << a << " by " << b << ": " << divide(a, b) << endl;
    cout << "Division of " << a << " by 0 (invalid case): ";
    divide(a, 0);


    int x = 56, y = 98;
    cout << "GCD of " << x << " and " << y << ": " << gcd(x, y) << endl;


    double c = 12.0, d = 15.0;
    cout << "LCM of " << c << " and " << d << ": " << lcm(c, d) << endl;


    double n = 5.0;
    cout << "Factorial of " << n << ": " << factorial(n) << endl;


    int lower = 1, upper = 100;
    int randomNum = randomnumber(lower, upper);
    cout << "Random number between " << lower << " and " << upper << ": " << randomNum << endl;

    string exp = "3 + 4 * ( 2 - 1 ) / 5";
    //string exp = "5*(1+2-3+4)/2";
    cout << "Also we can evaluate expressions: the experssion: " << exp << " = " << evaluateExpression(exp) << endl;

    cout << "you can also try an experssion of your choice: ";
    cin >> exp;
    cout << "experssion: " << exp << " = " << evaluateExpression(exp) << endl;
    return 0;
}