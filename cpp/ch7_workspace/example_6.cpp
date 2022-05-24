/*
 기본 생성자 예제
 기본 생성자 : 매개변수가 없는 생성자
 - 객체는 만들어질 때 반드시 생성자가 있어야 함.
 - 그러나 명시적으로 정의된 생성자가 하나도 없다면,
   컴파일러가 기본 생성자를 암시적으로 만듦!! (중요)
 - 생성자도 함수 이기 때문에 오버로딩이 가능함.
 */

#include <iostream>
#include <string>
using namespace std;

class Student {
private:
    int _id;
    string _name;

public:
    Student() { // 생성자의 이름은 반드시 클래스와 동일하게 작성!
        // 매개 변수가 없기 때문에 기본 생성자
        _id = 0;
        _name = "nonoame";
        cout << "default constructor: " << _id << " " << _name << endl;
    }
};

int main() {
    Student s1; // ok
    Student s2(); // function prototype -> 오류는 없지만 잘못된 코드
    Student s3{}; // ok
    
    return 0;
}
