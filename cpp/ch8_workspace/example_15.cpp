/*
 const static 변수
 : static 변수의 경우 선언은 class 내부에서,
   초기화는 외부에서 해주는 게 원칙임.
   그러나 const static 변수의 경우 선언과 동시에 초기화

 멤버 데이터를 아래 선언해도
 코드 상 위에서 사용 가능
 */

#pragma once
#include <iostream>
#include <array>

class Tmp {
public:
    static void print() {
        std::cout << a << std::endl;
    }
    
private:
    static const int a{5};
    std::array<int, a> b;
};
