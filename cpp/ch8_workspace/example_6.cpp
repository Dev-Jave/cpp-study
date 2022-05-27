/*
 객체 배열과 생성자
 기본 생성자든, 매개변수를 가진 생성자든, 생성자가 있다면
 암묵적 생성이 불가능함.
 
 */

#include <iostream>
using namespace std;

class Tmp {
public:
    Tmp(int a, int b){}
};

int main() {
    // Tmp tmpArr1[3] // error
    Tmp tmpArr2[3]{ Tmp{1,2}, Tmp{3,4}, Tmp{5,6} };
    
    return 0;
}
