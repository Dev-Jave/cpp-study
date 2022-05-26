/*
 static member 예제
 static member 특징
 1) 객체 내부에 존재하지 않고 객체 외부에 하나만 존재
 2) 모든 객체가 공유해서 사용
 3) 객체가 단 하나도 없더라도 사용 가능
 */

#include <iostream>
#include <string>
using namespace std;

class Student {
private:
    int id;
    string name;
    static int countTotal;
    
public:
    Student(int id, string name)
    : id{ id }, name { name } {
        countTotal++;   
    }
    
    static int getCountTotal() {
     // id++ => error
     // 수정하지 못하는게 아니라 사용하지 못하는 것임.
        return countTotal;
    }
};

/* 인라인 함수가 아닌 클래스 외부에 정의 할 때
 
 int Student::getCountTotal() {
    return countTotal;
 }

 일반 멤버 함수와 동일하게 작성하고,
 static member 함수라고 할지라도 앞에 static 기호 붙이지 X
 
 */

int Student::countTotal{ 0 }; // 초기화 할 때 static 붙이지 않음 주의

int main() {
    Student s1{ 1, "kjy" };
    Student s2{ 2, "dlwlrma" };
    cout << Student::getCountTotal() << endl; // 일반적으로는 클래스 이름으로 사용
    cout << s1.getCountTotal() << endl; // 지양할 것
    cout << s2.getCountTotal() << endl; // 지양할 것
    
    return 0;
}

