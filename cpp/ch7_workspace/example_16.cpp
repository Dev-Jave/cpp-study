/*
 private 예제
 
 함수도 private로 작성할 수 있음.
 아래 예제와 같이 공개하지 않아도 되는 함수도 private로 처리 가능함.

 */

#include <iostream>
#include <string>
using namespace std;

class Student {
private:
    int _id;
    string _name;
    
    void makeID() { // private 함수
        _id += 12200000;
    }
public:
    Student(int id, string name)
    : _id{id}, _name{name} {
        cout << "paramter constructor: " << _id << " " << _name << endl;
        makeID();
    }
    int getID() const {
        return _id;
    }
};

int main() {
    Student s1{ 2351, "kjy" };
    
    // s1.makeID(); //error
    cout << s1.getID() << endl;
    return 0;
}
