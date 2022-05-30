#include <iostream>
#include <cmath>
#include "fraction.hpp"
using namespace std;

// 매개변수가 있는 생성자는 불변 속성에 따라서
// 분자와 분모 값을 받고 약분하여 분수 객체를 생성
Fraction::Fraction(int num, int den = 1)
: numer(num), denom(den) {
    normalize();
}


void Fraction::normalize() {
    // 분모가 0인 경우
    if (denom == 0) {
        cout << "잘못된 분모 값입니다. 프로그램을 중단합니다." << endl;
        abort();
    }
}
