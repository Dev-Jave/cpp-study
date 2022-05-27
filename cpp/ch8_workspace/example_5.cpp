/*
 객체 배열과 생성자
 생성자에 대한 정의가 되어있지 않으면,
 이전에 객체 설명과 같이 배열을 생성할 때 암묵적으로 생성됨.
 */

#include <iostream>
using namespace std;

class Tmp {
public:
    // Tmp() {};
};

int main() {
    Tmp tmpArr1[3]; // 기본 생성자가 없으므로 암묵적으로 생성 (아래와 동일하게 생성)
    Tmp tmpArr2[3]{ Tmp{} , Tmp{}, Tmp{} };
    
    return 0;
}
