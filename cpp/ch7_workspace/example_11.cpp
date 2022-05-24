/*
 소멸자 예제
 
 stack 개념에 의해 마지막으로 쌓여진 스택이 먼저 제거됨.
 */

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
        cout << "parameter constructor: "
        << _id << " " << _name << endl;
    }
    
    ~Student() {
        cout << "destructor: " << _id << " " << _name << endl;
    }
};

int main() {
    Student s1{ 1, "kjy" };
    Student s2{ 2, "dlwlrma" };
    
    return  0;
}
