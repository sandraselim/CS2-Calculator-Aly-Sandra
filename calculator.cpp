#include "calculator.h"
#include <cstdlib>
#include <ctime>
#include <iostream>
using namespace std;

double add(double a, double b){
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
    return a/b;
}

int gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}



int lcm(int a, int b) 
{
    
    return (a * b) / gcd(a, b);
}


double factorial(double n) {
    double result = 1; // Start with 1 as the base case

    
    for (double i = 1; i <= n; i++) {
        result *= i;
    }

    return result; // Return the final factorial value
}


int randomnumber(int lower, int upper) 
{
    srand(time(0));
    return rand() % (upper - lower + 1) + lower;
}