/*
 복사 생성자 예제
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
    
    Student(const Student& origin) {
        _id = origin._id;
        _name = origin._name;
        cout << "copy constructor: " << _id << " " << _name << endl;
    }
};

int main() {
    Student s1{1, "pby"};
    Student s2{ s1 };
    
    return 0;
}
