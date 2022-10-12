// parameter constructor

#include <iostream>
#include <string>
using namespace std;

class Student{
private:
    int _id;
    string _name;
public:
    Student(int id, string name) {
        _id = id;
        _name = name;
        cout << "parameter constructor" << _id << " " << _name << endl;
     }
};

int main() {
    Student s1{1, "pby"};
    Student s2{2, "wook"};
    // Student s3; // error
    
    // 명시적으로 매개변수 생성자가 있기 때문에 기본생성자에 대한 암묵적 생성이 불가능함.
    
    return 0;
}
