// parameter constructor

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
