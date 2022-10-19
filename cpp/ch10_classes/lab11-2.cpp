#include <iostream>
#include <string>
using namespace std;

class Student {
private:
    int _id;
    string _name;
private:
    int num;
public:
    Student() = default;
    Student(int id, string name)
    : _id{ id }, _name{ name } {}
    Student(const Student& origin) = default;
    Student& operator=(const Student& right) = default;
    ~Student() = default;
};

int main() {
    Student s1;
    Student s2{1, "pby"};
    Student s3{ s1 };
    s3 = s2;
}
