/*
 객체 배열과 생성자 2
 기본 생성자와 매개변수를 가진 생성자가 둘 다 존재할 때,
 */

#include <iostream>
using namespace std;

class Tmp {
public:
    Tmp () {}
    Tmp(int a, int b){}
    void setData(int a, int b) {};
};

int main() {
    Tmp tmpArr1[3];
    for (int i{0}; i < 3; ++i)
        tmpArr1[i].setData(i * 2 + 1, i * 2 + 2);
    Tmp tmpArr2[3]{ Tmp{1, 2}, Tmp{3, 4}, Tmp{5, 6} };
    
    return 0;
}


