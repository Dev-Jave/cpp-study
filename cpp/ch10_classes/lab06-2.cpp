#include <iostream>
using namespace std;

class Tmp {
public:
    explicit Tmp(int a) {
        _a = a;
    }
    void display() const {
        cout << _a << endl;
    }
private:
    int _a;
};

int main() {
    Tmp t1{ 5 };
    Tmp t2 = 3; // error
    t2.display();
}

/// **Summary**
/// 변환 생성자 앞에 'explicit' 키워드를 붙이면 변환 생성 기능을 막음.
/// 따라서 `Tmp t2 = 3;`에서 에러가 발생하는 것을 확인할 수 있음.
