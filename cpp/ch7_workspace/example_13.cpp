/*
 delete 예제
 */

#include <iostream>
#include <string>
using namespace std;

class Student {
private:
    int _id;
    string _name;
    
public:
    Student() = delete; // 기본생성자 호출을 허용하지 않음.
    Student(int id, string name)
    : _id{ id }, _name{ name } {
        cout << "parameter constructor: " << _id << " " << _name << endl;
    }
    Student(const Student& origin) = delete; // 복사 행위를 허용하지 않음.
    ~Student() = delete; // 기본 소멸자 호출을 금지
};

int main() {
    Student s1; // error -> 기본 생성자를 막았기 때문
    Student s2{ 1, "kjy" }; // error -> 정상적으로 생성되고 소멸되어야 하는데 소멸자를 막아버렸기 때문
    Student s3{ s2 }; // error -> 복사 행위를 막았기 때문
    
    return 0;
}
