/*
 포인터
 
 */

#include <iostream>
using namespace std;

int main() {
    int a { 5 };
    cout << a << endl;
    cout << &a << endl << endl;
    
    int* ptr1 = &a;
    cout << ptr1 << endl;
    cout << &ptr1 << endl;
    cout << *ptr1 << endl;
    
    int b;
    b = 7;
    int* ptr2;
    ptr2 = &b;
}
