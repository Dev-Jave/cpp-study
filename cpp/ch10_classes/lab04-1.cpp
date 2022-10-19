#include <iostream>
#include <string>
using namespace std;

class Student{
private:
    int _id;
    string _name;
public:
    Student(int id, string name) {
        _id = id;
        _name = name;
        cout << "parameter constructor" << _id << " " << _name << endl;
     }
};

int main() {
    Student s1{1, "pby"};
    Student s2(2, "wook");
    // Student s3; // error
    
    // 명시적으로 매개변수 생성자가 있기 때문에 기본생성자에 대한 암묵적 생성이 불가능함.
    
    return 0;
}

/// **Summary**
/// 기본 생성자는 소괄호를 사용하면 안되는 반면, 매개변수 생성자는 소괄호를 통해 생성자를 호출할 수 있음.
/// 위 코드의 기본 생성자 `Student s3;` 의 경우 명시적으로 정의된 생성자가 있기 때문에,
/// 암묵적 생성이 불가능함.
/// 참고로 매개변수 생성자는 컴파일러에 의한 synthetic constructor를 제공하지 않음.
