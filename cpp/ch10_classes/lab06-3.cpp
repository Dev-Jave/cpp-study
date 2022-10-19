#include <iostream>
using namespace std;

class Tmp {
public:
    Tmp(int a) {
        cout << a << endl;
    }
};

void fun(Tmp a) {}

int main() {
    fun(5);
}

/// **Summary**
/// 앞서 예제와 마찬가지로, 함수의 매개변수는 객체 타입이고 해당 함수를 호출할 때 인자가 기본 타입인 경우임.
/// 해당 상황에서도 변환 생성자로 적용이 되고 explicit 키워드를 생성자 앞에 붙이면 에러가 나는 것을 확인할 수 있음.
