/*
 this pointer 예제
 : 멤버 변수와 매개변수 변수명이 같을 때 사용
 but, initialized list를 사용하면 같아도 상관없음.
 */

#include <iostream>
#include <string>
using namespace std;

class Student {
private:
    int id;
    string name;
    
public:
    Student(int id, string name)
    : id { id } {
        // name = name; 생성된 매개변수를 자기 자신으로 똑같이 할당함. (의미 X)
        this->name = name;
    }
    string getName() const {
        return name;
    }
};

int main() {
    Student s1{ 1, "kjy" };
    cout << s1.getName() << endl;
}
