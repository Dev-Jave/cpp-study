#include <iostream>
using namespace std;

class Tmp {
private:
    int num;
public:
    Tmp() : num{ 0 } {
        cout << "default constructor" << endl;
    }
    Tmp(int a) : num{ a } {
        cout << "paramter constructor" << endl;
    }
    Tmp(const Tmp& origin) : num{ origin.num } {
        cout << "copy constructor" << endl;
    }
//    Tmp& operator=(const Tmp& right) {
//        cout << "operator=" << endl;
//        num = right.num;
//        return *this;
//    }
};

int main() {
    Tmp t1{ 5 };
    Tmp t2 = t1;
    Tmp t3;
    t3 = t1;
}

/// **Summary**
/// 위 코드에서 'operator='을 명시적으로 정의하고 사용하는 경우 출력에서 해당 연산자가 사용되었음을 확인할 수 있음.
/// 그러나 해당 코드를  주석 처리해도 오류가 발생하지 않음.
/// 컴파일러에 의해 자동으로 systhetic operator=가 생성되기 때문임.
/// ```Tmp& operator=(const Tmp& right) {...}```
