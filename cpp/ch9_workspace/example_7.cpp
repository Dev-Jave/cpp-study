/*
 포인터
 
 변수 앞에 & 기호를 붙이면 해당 변수의 메모리 시작 주소를 의미함.
 */

#include <iostream>
using namespace std;

int main() {
    int a { 5 };
    cout << a << endl;              // 변수 a의 실제 메모리에 저장된 값
    cout << &a << endl << endl;     // 변수 a의 메모리 주소
    
    int* ptr1 = &a;
    cout << ptr1 << endl;           // 포인터의 실제 메모리에 저장된 값, 즉 변수 a의 메모리 주소
    cout << &ptr1 << endl;          // 포인터의 메모리 주소
    cout << *ptr1 << endl;          // 역참조를 통해 변수 a 메모리에 저장된 값
    
    int b;
    b = 7;
    int* ptr2;                      // 포인터는 Reference와 달리 빈 값을 만들어 놓을 수 있음.
    ptr2 = &b;
}

 
