/*
 참조의 활용
 
 */

#include <iostream>
using namespace std;

// Prototype
void passByValue(int);
void passByReference(int&);

int main() {
    int num = 10;
    passByValue(num);
    passByValue(5);
    
    cout << num << endl;
    
    passByReference(num);
    // passByReference(5); //error
    // 참조로 전달을 사용할 때는 매개변수에 값을 지정할 수 없음!
    
    cout << num << endl;
    
    return 0;
}

void passByValue(int num) {
    num++;
    cout << "pass-by-value : ";
    cout << num << endl;
}

void passByReference(int& num) {
    num++;
    cout << "pass-by-reference : ";
    cout << num << endl;
}


