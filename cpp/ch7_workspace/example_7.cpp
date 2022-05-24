/*
 매개변수 생성자 예제
 
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
        cout << "parameter contructor: " << _id << " " << _name << endl;
    }
};

int main() {
    Student s1{ 1, "kjy"};
    Student s2( 2, "dlwlrma");
    // Student s3; -> error
    
    return 0;
}
