/*
 참조 (Reference)
 
 1. 참조 변수는 일반적인 변수와 다르게 메모리 위에 새로운 영역을 잡지 않음.
 2. 기존에 있던 변수와 연결해서 기존에 있던 변수에 새로운 이름을 붙여주는 것임.
 3. 원본 변수가 있어야먄 생성 가능함. (null reference X)
 
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
    // int& ref2 = c;   // 상수 타입에 int reference로 연결 시
                      // 원본 변수의 훼손 가능성 때문에 error
    const int& ref2 = c;
    
    // int& ref3 = 5;   // 변수가 아닌 수에 연결할 수 없음.
    const int& ref3 = 5;
    
    // double& rNum = num; // null reference X
}
