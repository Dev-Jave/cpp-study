/*
 class 예제
 - 각각 main함수 에서 선언한 객체 s1, s2는 Student 객체 내부의 _studentID, _name을 가짐.
 - s1._StudentID, s2._StudentID와 같은 형태로 구분 가능함.
 - Student 객체는 printInfo 함수를 내부에 가짐.
 - 여기서 Student는 타입, s1, s2는 인스턴스를 의미함.
 */

#include <iostream>
#include <string>
using namespace std;

class Student {
private: // 접근 제한자 (외부 접근 x)
    int _studentID; // 데이터 멤버, 멤버 데이터
    string _name;
     
public:
    Student(int studentID, string name) {
        _studentID = studentID;
        _name = name;
    }
    
    void printInfo() { 
        cout << _studentID << " " << _name << endl;
    }
}; // class를 마치면 세미콜론을 적을 것.

int main() {
    Student s1{1, "kjy"};
    Student s2{2, "dlwlrma"};
    
    s1.printInfo();
    s2.printInfo();
    
    return 0;
}
