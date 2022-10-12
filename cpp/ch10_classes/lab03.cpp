// default constructor

#include <iostream>
#include <string>
using namespace std;

class Student{
private:
    int _id;
    string _name;
public:
    // Student() {} // synthetic default constructor
    void printInfor() {
        cout << _id << " " <<_name << endl;
    }
};

int main() {
    Student s1;
    Student s2(); // function prototype;
    Student s3{};
    
    s1.printInfor(); // 암묵적으로 생성된 기본생성자이기 때문에 쓰레기값 출력
}

