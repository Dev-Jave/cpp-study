/*
 pass-by-value, pass-by-reference 비교
 
 */

#include <iostream>
using namespace std;

//prototype
void passByValue(int val);
void passByRefWithRef(const int& ref);
void passByRefWithRef(int& ref);
void passByRefWithPtr(int* ptr);

int main() {
    int a{5};
    cout << "value of a: " << a << endl;
    cout << "address of a: " << &a << endl << endl;
    
    cout << "call passByValue()" << endl;
    passByValue(a);
    cout << "value of a: " << a << endl << endl;
    
    cout << "call passByRefWithRef()" << endl;
    passByRefWithRef(5);
    passByRefWithRef(a);
    cout << "value of a: " << a << endl << endl;

    cout << "call passByRefWithPtr()" << endl;
    passByRefWithPtr(&a);
    cout << "value of a: " << a << endl << endl;

    return 0;
}

void passByValue(int val) {
    cout << val << endl;
    cout << &val << endl;
    cout << ++val << endl;
}

void passByRefWithRef(const int& ref) {
    cout << ref << endl;
    cout << &ref << endl;
//    cout << ++ref << endl; // error because of const
}

void passByRefWithRef(int& ref) {
    cout << ref << endl;
    cout << &ref << endl;
    cout << ++ref << endl;
}

void passByRefWithPtr(int* ptr) {
    cout << ptr << endl;   // 포인터 메모리에 있는 값  => argument의 메모리 주소 값
    cout << &ptr << endl;  // 포인터의 메모리 주소 값
    cout << *ptr << endl;  // 포인터 역참조 => argument의 메모리에 있는 값
    cout << ++(*ptr) << endl;
}
