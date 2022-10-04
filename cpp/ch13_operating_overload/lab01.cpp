/*
 function overloading
 */

#include <iostream>
using namespace std;

int add(int num1, int num2) {
    return num1 + num2;
}

double add(double num1, double num2) {
    return num1 + num2;
}

int add(int num1, int num2, int num3) {
    return num1 + num2 + num3;
}

int main() {
    cout << add(2, 3) << endl;
    cout << add(2.1, 3.1) << endl;
    cout << add(2, 3, 4) << endl;
    // cout << add(2.1, 3) << endl; // error
}

