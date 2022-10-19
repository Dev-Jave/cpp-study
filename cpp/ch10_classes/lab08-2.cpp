#include <iostream>
#include <string>
using namespace std;

class Student {
private:
    const string subject = "C++";
    const int _id;
    string _name;
public:
    Student(int id, string name)
    : _id{ id }, _name{ name } {
        // _id = id; // error
        cout << "parameter constructor: " << _id << " " << "name" << endl;
    }
};

int main() {
    Student s1{1, "pby"};
    
    return 0;
}

/// **Summary**
/// member initializer list는 const 변수를 초기화하는 데에도 쓸 수 있음.
