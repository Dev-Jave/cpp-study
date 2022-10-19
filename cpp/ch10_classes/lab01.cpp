// uniform initialization

#include <iostream>
using namespace std;

class Tmp {
public:
    Tmp() { cout << "constructor" << endl; }
};

int main() {
    int a = 5;
    int b(5);
    int c{ 5 };
    
    int d = 4.5; // double type이 int type으로 암시적 형변환이 일어남.
    cout << d << endl; // 4 (int type)
    // int e{ 4.5 }; // error (1)
    
    Tmp t1(); // function prototype
    Tmp t2{};
}

/// **Summary**
/// 대입연산자, 소괄호, 중괄호를 이용한 초기화 방식이 있음.
/// 중괄호 { } 를 이용한 방식이 바로 유니폼 초기화(uniform initialization)임.
/// 초기화는 꼭 변수만 초기화하는 것이 아니고, 그렇기 때문에 대입연산자(=), 소괄호( )를 이용한 초기화는
/// 종종 대상에 따라 초기화가 안될 때도 있음. 뿐만 아니라 암시적 형변환 등을 막기 위해 유니폼 초기화가 등장함.
///
/// error(1)의 경우 유니폼 초기화를 사용하여 double type으로 암시적 형변환을 막음.
/// 이처럼 유니폼 초기화는 type검사를 엄격하게 할 수 있음.
///
/// ```Tmp t1();```의 경우 Tmp class 객체를 인스턴스화한 t1 변수로 의도하였으나,
/// return type이 Tmp이고 이름이 t1이고 인자가 하나도 없는 함수의 프로토 타입으로 인식됨.
/// ex. void funA();
///
