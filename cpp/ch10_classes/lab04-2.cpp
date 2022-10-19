#include <iostream>
#include <string>
using namespace std;

class Student {
private:
    int _id;
    string _name;
public:
    Student() {
        _id = 0;
        _name = "noname";
        cout << "default constructor: "
        << _id << " " << _name << endl;
    }
    Student(int id, string name) {
        _id = id;
        _name = name;
        cout << "parameter constructor: "
        << _id << " " << _name << endl;
    }
};

int main() {
    Student s1{1, "pby"};
    Student s2{2, "wook"};
    Student s3;
    
    return 0;
}

/// **Summary**
/// 위와 같이 생성자가 하나라도 있는 경우 기본 생성자를 사용하려면
/// 내가 직접 기본 생성자를 선언해주어야 함.
