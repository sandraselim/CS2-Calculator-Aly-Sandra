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
// Function to calculate GCD using the Euclidean algorithm
int gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

// Function to calculate LCM for double values
double lcm(double a, double b) {
    double maxVal;
if (a > b) {
    maxVal = a;
} else {
    maxVal = b;
} // Start with the larger number
    double lcm = maxVal;
   // Increment until we find a number divisible by both a and b
   while (true) {
    if (fmod(lcm, a) == 0 && fmod(lcm, b) == 0) { // Check divisibility
        return lcm; // Found the LCM
    }
    lcm += maxVal; // Increment by maxVal
    }
}

// Function to calculate the factorial of a number
double factorial(double n) {
    double result = 1; // Start with 1 as the base case

    // Multiply numbers from 1 to n
    for (double i = 1; i <= n; i++) {
        result *= i;
    }

    return result; // Return the final factorial value
}


int main() {
    srand(time(0)); // Seed the random number generator with the current time

    int lower = 10; // Lower bound of the range
    int upper = 50; // Upper bound of the range

    // Generate a random number in the range [lower, upper]
    int randomNum = rand() % (upper - lower + 1) + lower;

    std::cout << "Random number between " << lower << " and " << upper << ": " << randomNum << std::endl;
    return 0;
}
