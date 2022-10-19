//  Time.cpp

#include <iomanip> // setw(), setfill() 등 스트림 조정
#include <stdexcept> // invalid_argument 예외 처리
#include <sstream> // ostringstream
#include "Time.hpp"
using  namespace std;

void Time::setTime(int h, int m, int s) {
    if((h >= 0 && h < 24) && (m >= 0 && m < 60) && (s >= 0 && s <60)) {
        hour = h;
        minute = m;
        second = s;
    } else {
        throw invalid_argument("hour, minute and/or second was out or range");
    }
}

string Time::toUniversalString() const {
    ostringstream output;
    
    output << setfill('0') << setw(2) << hour << ":"
    << setw(2) << minute << ":" << setw(2) << second;
    
    return output.str();
}

string Time::toStandardString() const {
    ostringstream output;
    
    output << ((hour == 0 || hour == 12) ? hour : hour%12) << ":"
    << setfill('0') << setw(2) << minute << ":" << setw(2)
    << second << ((hour < 12) ? "AM" : "PM");
    
    return output.str();
}

/// **Summary**
/// ```cout << A << ```와 같이 A라는 string 변수를 cout할 경우, 콘솔 창에 해당 string 값이 인출된다.
/// 위의 ostringstream은 ostringstream 객체인 output에 출력 값을 입력할 경우 해당 객체에 값이 저장된다.
