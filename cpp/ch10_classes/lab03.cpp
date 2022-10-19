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

/// **Summary**
/// 메인함수 내의 객체 생성문의 경우 생성자를 호출하는 개념으로 이해할 수 있음.
/// 모든 생성자는 반드시 class이름과 동일하게 작성해야 하며 앞에 return 타입은 없음.
/// 위의 코드는 매개변수가 아예 없는 기본생성자에 대한 예시임.
/// 위와 같이 class 내에 생성자가 단 하나도 없을 경우 컴파일러에 의해 기본 생성자를 암시적으로 생성함.
/// 암시적으로 만들어진 생성자를 synthetic constructor(합성 생성자)라고 부르기도 함.
/// #주의 : 명시적으로 정의된 생성자가 단 하나라도 있으면 안됨.
/// 합성 생성자의 경우 변수 초기화가 안됨.
