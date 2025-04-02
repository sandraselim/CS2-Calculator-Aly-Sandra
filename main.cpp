#include "calculator.h"
#include <iostream>
using namespace std;


int main(){
    cout << "testing add function. Enter 2 numbers" << endl;
    double x,y;
    cin >> x >> y;
    cout << x <<"+"<<y << "=" << add(x,y) <<endl;

    return 0;
}