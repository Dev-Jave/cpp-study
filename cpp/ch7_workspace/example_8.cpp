/*
 복사 생성자 예제
 int a{ 5 } 와 같은 유니폼 초기화 처럼,
 이미 만들어진 객체를 복사해서 만드는 것.
 
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
        cout << "parameter constructor: " << _id << " " << _name << endl;
    }
    
    // 복사 생성자의 매개변수는 앞에 const를 붙여주고, (안붙여도 에러는 나지 않음)
    // 참조자 기호 붙여 줄 것!
    Student(const Student& origin) {
        _id = origin._id; // 새로 생성된 객체의 (나의) id에 참조한 매개변수 객체의 id를 할당함.
        _name = origin._name;
        cout << "copy constructor: " << _id << " " << _name << endl;
    }
    
    void getId() {
        cout << _id << endl;
    }
    
    void modifyId(int newId) {
        _id = newId;
    }

};

int main() {
    Student s1{1, "pby"};
    Student s2{ s1 }; // 복사 생성자가 없을 시 오류 생성
    Student s3 = s1;
    
    s1.getId();
    s2.getId();
    
    s1.modifyId(4);
    s1.getId(); // 4
    s2.getId(); // 1
    
    
    return 0;
}

/*
 복사 생성자도 명시적으로 만들어진 생성자가 없으면 암시적으로 생성해줌.
 Student(const Student& origin) {
     _id = origin._id;
     _name = origin._name;
 }
 과 멤버데이터에 맞게 생성해줌.
 */
