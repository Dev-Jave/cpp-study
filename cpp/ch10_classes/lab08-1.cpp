// member initializer list

#include <iostream>
#include <string>
using namespace std;

class Student {
private:
    int _id;
    string _name;
public:
    Student()
    : _id{ 0 } , _name{ "nomae" } {
        cout << "default constructor: " << _id << " " << _name << endl;
    }
    Student(int id, string name)
    : _id{ id }, _name{ name } {
        cout << "parameter constructor: " << _id << " " << _name << endl;
    }
    Student(const Student& origin) : _id{origin._id}, _name{origin._name} {
        cout << "copy constructor: " << _id << " " << _name << endl;
    }
};

int main() {
    Student s1;
    Student s2{1, "pby" };
    Student s3{ s2 };
    
    return 0;
}
