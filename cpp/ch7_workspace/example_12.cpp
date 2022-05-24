/*
synthetic member (defalt)

 default를 붙이면 컴파일러가 기본적으로 만들어주는 형태로 사용할 것임을 명시
 default를 붙이는 이유는 좀 더 명시적으로 나타내기 위해
 */

#include <iostream>
#include <string>
using namespace std;

class Student {
private:
    int _id;
    string _name;
    
public:
    Student() = default; // 컴파일러가 기본적으로 만들어주는 객체를 사용할 것.
    Student(int id, string name)
    : _id{ id }, _name{ name } {
        cout << "parameter constructor: " << _id << " " << _name << endl;
    }
    Student(const Student& origin) = default;
    ~Student() = default;
};

int main() {
    Student s1;
    Student s2{ 1, "kjy" };
    Student s3{ s2 };
    
    return 0;
}
