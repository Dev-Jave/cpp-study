#include <iostream>
using namespace std;

class Tmp {
private:
    int _a;
public:
    Tmp(int a) { // parameter constructor
        _a = a;
    }
    void display() const {
        cout << _a << endl;
    }
};

int main() {
    Tmp t1{ 5 };
    Tmp t2 = 3;
    t2.display();
}

/// **Summary**
/// 위 생성자 `Tmp(int a) { ... }`처럼 기본 타입(int, double ...) 변수 하나만을 매개변수로 받는 경우
/// 변환생성자로로써 기능할 수 있음.
/// 메인함수 내에서  `Tmp t2 = 3;`의 경우 기본적으로 대입연산자를 사용하기 위해선 왼쪽(Tmp)과 오른쪽(int)의 데이터 타입이 일치하여야 함.
/// 위쪽에 있는 생성자가 변환생성자이기 때문에 해당 대입 연산이 허용됨.
