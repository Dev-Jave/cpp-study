/*
 생성자 멤버 함수가 없는 객체
 */


#include <iostream>
#include <string>
using namespace std;

class Student {
private:
    int _id;
    string _name;
    
public:
    void printInfo() {
        cout << _id << " " << _name << endl;
    }
};


int main() {
    Student s1; // 암시적으로 생성
    Student s2 {}; // 암시적으로 생성
    
    s1.printInfo(); // 쓰레기 값 -> 빈 껍데기 객체를 생성했기 때문
}

/*
 빈 객체를 생성해주는 제약 조건
 : 명시적으로 선언된 생성자가 하나라도 존재하면 안됨!!
 */
