#include "calculator.h"
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