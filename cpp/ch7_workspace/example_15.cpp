/*
 주어진 범위의 랜덤한 숫자를 생성하는 클래스를
 선언, 정의하고 사용하는 프로그램 예제
 */

#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

class RandomInteger {
private:
    int low;
    int high;
    int value;
    
public:
    RandomInteger(int low, int high); // 생성자
    ~RandomInteger(); // 소멸자
    // 합성 복사 생성자 생성 막기
    RandomInteger(const RandomInteger& randomInteger) = delete;
    void print() const; // 접근자 멤버 함수
};

RandomInteger::RandomInteger(int lw, int hh) // 생성자
: low(lw), high(hh) {
    //srand(time(0)); 시드 생성은 함수 내에서 호출하지 말 것!! (중요)
    int temp = rand();
    value = temp % (high - low + 1) + low;
}

RandomInteger::~RandomInteger() {} // 소멸자

// 접근자 멤버 함수
void RandomInteger::print() const {
    cout << value << endl;
}

// 애플리케이션
int main() {
    srand(time(0));
    
    // 100 ~ 200 범위의 랜덤 숫자 생성
    RandomInteger r1(100, 200);
    cout << "100~200 사이의 랜덤한 숫자: ";
    r1.print();
    
    // 400 ~ 600 범위의 랜덤 숫자 생성
    RandomInteger r2(400, 600);
    cout << "400~600 사이의 랜덤한 숫자: ";
    r2.print();
    
    // 1500~2000 범위의 랜덤 숫자 생성
    RandomInteger r3(1500, 2000);
    cout << "1500~2000 사이의 랜덤한 숫자: ";
    r3.print();
    
}
