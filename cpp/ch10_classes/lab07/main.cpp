#include <iostream>
#include <stdexcept>
#include "Time.hpp"
using namespace std;

void displayTime(const string& message, const Time& time) {
    cout << message << "\nUniversal time: " << time.toUnivrsalString()
    << "\nStandard time: " << time.toStandardString() << "\n\n";
}

int main() {
    Time t1;
    Time t2{2};
    Time t3{21, 34};
    Time t4{12, 25, 42};
    
    cout << "생성자 정보:\n\n";
    displayTime("t1: 모든 인자들이 기본입니다.", t1);
    displayTime("t2: hour만 값을 정하고 나머지는 기본입니다.", t2);
    displayTime("t3: hour, minute의 값을 정하고 second는 기본입니다.", t3);
    displayTime("t4: hour, minute, second 모두 값을 정했습니다.", t4);
    
    try {
        Time t5{27, 74, 99}; // 모두 유효하지 않은 값임.
    }
    catch (invalid_argument& e) {
        cerr << "t5를 초기화하는 도중 생긴 예외 : " << e.what() << endl;
    }
}
