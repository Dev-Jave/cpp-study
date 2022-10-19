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
    Student() = delete;
    Student(int id, string name)
    : _id{ id }, _name{ name } {}
    Student(const Student& origin) = delete;
    Student& operator=(const Student& right) = delete;
    ~Student() = delete;
};

int main() {
    Student s1;
    Student s2{ 1, "pby" };
    Student s3{ s1 };
    s3 = s2;
}

/// **Summary**
///
