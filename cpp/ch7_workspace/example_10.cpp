/*
 member initializer list
 
 class name
     : memberData { 값 혹은 매개변수 }
 */

#include <iostream>
#include <string>
using namespace std;

class Student {
private:
    int _id;
    string _name;
    
public:
    Student()
        : _id {0}, _name{ "noname" } { // member initialize list
        cout << "default contructor: " << _id << " " << _name << endl;
    }
    
    Student(int id, string name)
    : _id { id }, _name{ name } {
        cout << "parameter contructor: " << _id << " " << _name << endl;
    }
};

int main() {
    Student s1;
    Student s2{ 1, "pby" };
    Student s3{ s2 };
    
    return  0;
}
