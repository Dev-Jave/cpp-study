#include <iostream>
#include <string>
using namespace std;

class Student {
private:
    int _id;
    string _name;
public:
    Student(int id, string name) {
        _id = id;
        _name = name;
        cout << "parameter Constructor: " << _id << " " << _name << endl;
    }
//    Student(const Student& origin) {
//        _id = origin._id;
//        _name = origin._name;
//        cout << "copy constructor: " << _id << " " << _name << endl;
//    }
    
    // 복사생성자의 경우 명시적으로 없어도 오류 없이 복사가 됨.
    
    void displayName() const {
        cout << "id : " << _id << endl;
    }
};

int main() {
    Student s1{1, "pby"}; // parameter constructor
    Student s2{ s1 }; // copy constructor
    s1.displayName();
    s2.displayName();
    
    return 0;
}

/// **Summary**
/// `Student s2{ s1 }`의 경우 s1 객체를 s2 객체에 '복사' 하는 방식임.
/// 복사생성자의 매개변수 타입은 반드시 레퍼런스(&)타입으로 받아야 함. 안그러면 에러 발생
/// 레퍼런스 타입이 아니라면 매개변수 객체인 origin으로 s1이 넘겨질 때 복사가 일어남.
/// 그 과정에서 또 복사 생성자가 호출되고 무한 반복으로 이어짐.
/// const는 간단한 예제에서는 붙이지 않아도 에러가 발생하지 않음.
/// 그러나 매개변수로 전달받는 인자가 r-value일 때 const type이 아니라면 받을 수 없음.
///
/// 복사 생성자는 명시적으로 복사 생성자가 정의되지 않아도 컴파일러에 의해 synthetic constructor가 만들어짐.
/// 복사 생성자는 기본 생성자와는 달리 다른 생성자가 있어도 암묵적 생성이 제공됨.
