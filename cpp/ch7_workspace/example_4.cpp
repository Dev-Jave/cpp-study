/*
 클래스 정의 예제
 - 2번 예제외 달리 public에서 함수 프로토타입으로 정의만 해주고,
   함수 선언은 외부에서 할 것.
 
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
    
    void printInfo(); // 함수 선언만! (함수 프로토타입)
};

// 멤버 함수 정의
Student::Student(int studentID, string name) {
    _studentID = studentID;
    _name = name;
}

// 생성자 이름을 맨 앞에 붙이는 걸로 착각하지 말 것.
void Student::printInfo() { // 함수 외부 선언
    cout << _studentID << " " << _name << endl;
}

// 애플리케이션 정의
int main() {
    Student s1{1, "kjy"};
    Student s2{2, "dlwlrma"};
    
    s1.printInfo();
    s2.printInfo();
    
    return 0;
}
