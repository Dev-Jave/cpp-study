/*
 참조
 
 */


#include <iostream>
using namespace std;

int main() {
    int a{ 5 };
    int b{ 7 };
    
    int& ref1 = a;
    cout << ref1 << endl;
    
    ref1 = b;
    cout << a << endl;
    cout << b << endl;
    
    const int c{ 9 };
    // int& ref2 = c;   // error
    const int& ref2 = c;
    
    // int& ref3 = 5;   // error
    const int& ref3 = 5;
}
