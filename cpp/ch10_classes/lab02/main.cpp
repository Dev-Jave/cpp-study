//  main.cpp

#include <iostream>
#include "Time.hpp"
using namespace std;

void displayTime(const string& message, const Time& time) {
    cout << message << "\nUniversal time: " << time.toUniversalString()
    << "\nStandard time: " << time.toStandardString() << "\n\n";
}

int main() {
    Time t; // Time Class 인스턴스화
    
    displayTime("Inital Time:", t);
    t.setTime(13, 27, 6); // 시간 변경
    displayTime("After setTime", t);
    
    try {
        t.setTime(99, 99, 99);
    } catch (invalid_argument& e) {
        cout << "Exception: " << e.what() << "\n\n";
    }
    
    displayTime("After attempting to set an invalid time:", t);
}

/// **Summary**
/// try & catch는 c++ 표준 예외처리 방식이다.
/// ``` try {
///             throw exception object
///         } catch( ... ) { }
/// ```
/// try block안에서 예외 상황이 발생하면 throw 구문을 이용해 예외 객체를 catch block으로 던짐.
/// 만약 try 구문은 있는데 catch 구문이 없다면 예외상황에 그대로 에러가 발생함.
/// 또한 메인함수 구문 내의 함수 내에서 throw 구문이 작동했는데 try, catch 구문이 없다면,
/// scope를 한 단계 더 위로 탐색하게 되는데 main함수 위의 스코프는 전역 스코프임. 전역 스코프까지
/// 예외객체가 전달될 경우 프로그램이 처리를 할 수 없어 터지게 됨.
