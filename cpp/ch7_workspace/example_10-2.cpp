/*
 member initializer list 와
 함수 내부 초기화의 차이점
 
 const 상수 멤버 데이터의 경우 변수명만 선언했을 때,
 변수 초기화는 member initializer list에서만 초기화 가능
 */

#include <iostream>
#include <string>
using namespace std;

class Student {
private:
    const string subject = "C++"; // 변경 불가
    const int _id;
    const string _name;
    
public:
    Student(int id, string name)
    : _id{ id }, _name{ name } {
        cout << "parameter constructor: " << _id << " " << _name << endl;
    }
    
//    Student(int id, string name) {
//        _id = id; // error
//        _name = name;
//        cout << "parameter constructor: " << _id << " " << _name << endl;
//    }
};

int main() {
    Student s1{ 1, "kjy"};
    
    return 0;
}
