/*
 + operator overloading (global function)
 */

#include <iostream>
using namespace std;

class Tmp {
    friend Tmp operator+(const Tmp& left, const Tmp& right); // friend 전역 함수 선언
    friend Tmp operator-(const Tmp& left, const Tmp& right); // friend 전역 함수 선언
public:
    explicit Tmp(int a = 1) : _a{ a } {}
    void display() const {
        cout << _a << endl;
    }
private:
    int _a;
};

Tmp operator+(const Tmp& left, const Tmp& right) {
    return Tmp{ left._a + right._a };
}

Tmp operator-(const Tmp& left, const Tmp& right) {
    return Tmp{ left._a - right._a };
}

int main() {
    Tmp t1 = Tmp{5} + Tmp{6};
    t1.display();
}
