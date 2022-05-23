/*
 멤버 함수 정의 예제
 
 */

#include <iostream>
#include <string>
using namespace std;

class Student {
private:
    int _studentID;
    string _name;
    
public:
    Student(int studentID, string name);
    void printInfo() const; // 상수 함수 정의
};

Student::Student(int studentID, string name) {
    _studentID = studentID;
    _name = name;
}

void Student::printInfo() const { // 클래스 내의 멤버 데이터 변경 금지
    // _name += " love"; // error
    int i { 0 }; // uniform initialization
    i++; // ok
    cout << _studentID << " " << _name << endl;
}

int main() {
    Student s1{1, "kjy"};
    Student s2{2, "dlwlrma"};
    
    s1.printInfo();
    s2.printInfo();
    
    return 0;
}
