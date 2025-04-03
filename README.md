#This calculator library provides a set of mathematical functions for arithmetic operations, calculations, and random number generation. We are designing it to be simple, easy to use and integrate in C++ code/projects.

## Features

- **Basic Arithmetic**
  - Addition
  - Subtraction
  - Multiplication
  - Division (with zero division handling)
- **Number Theory**
  - Factorial calculation
  - Greatest Common Divisor (GCD)
  - Least Common Multiple (LCM)
- **Utilities**
  - Random number generation within specified range

## Requirements

- C++ compiler (g++ 9.0+ or equivalent)
- CMake 3.10+
- Git 2.20+

## Installation

1. Clone the repository: 
git clone https://github.com/yourusername/CS2-Calculator-YourName.git
cd CS2-Calculator-YourName

2. Initialize and update submodules (if any):
git submodule update --init --recursive

## Building the Project

### Command Line (g++)

g++ -c calculator.cpp -o calculator.o
g++ test.cpp calculator.o -o calculator_test

### CMake

mkdir build && cd build
cmake ..
make

## Usage

Include the header in your C++ project:

#include "calculator.h"
int main() {
std::cout << "5 + 3 = " << add(5, 3) << std::endl;
std::cout << "GCD(48, 18) = " << gcd(48, 18) << std::endl;
return 0;
}

## Version Control Workflow

1. Create feature branch:
git checkout -b feature-new-function

2. Merge to main after testing:
git checkout main
git merge feature-new-function

3. Resolve conflicts (if any) using:
git mergetool
