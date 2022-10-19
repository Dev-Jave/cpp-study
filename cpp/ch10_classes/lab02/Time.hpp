//  Time.hpp

#ifndef Time_hpp
#define Time_hpp

#include <string>

class Time {
public:
    void setTime(int, int, int); // 시간, 분, 초 설정
    std::string toUniversalString() const; // 24시간 기준
    std::string toStandardString() const; // 12시간 기준
private:
    unsigned int hour{0}; // 0 - 23
    unsigned int minute{0}; // 0 - 59
    unsigned int second{0}; // 0 - 59
};


#endif /* Time_hpp */

/// **Summary**
/// 컴파일은 .cpp 파일을 기준으로 컴파일을 진행함.
/// lab02의 경우 main.cpp, Time.cpp가 각각 main.obj, Time.obj가 되고
/// 모든 object 파일을 묶어서 컴파일을 진행함.
/// header파일은 파일 자체가 copy된다고 볼 수 있음. 따라서 하나의 파일에만 include하면 됨.
/// header파일이 너무 커지거나, 여러번 include 될 수록 프로그램 용량이 매우 커짐.
///
/// 구글이 'GO'라는 언어를 새로 만들게 된 배경에는 기존의 웹서버를 C++로 만들고 컴파일을 했는데
/// 그 당시 컴파일 시간이 45분 가까이 나왔다고 함. 그래서 이를 뜯어 고치고자 새로 언어를 만들었다고 함.
///
/// ```
/// #ifndef TIME_H                      #pragma once
/// #define TIME_H                      ...
/// ...
/// #endif
/// ```
/// 위의 두 가지 방식은 모두 동일하게 작동하며, heder파일을 include할 때 중복 include를 방지하기 위해서임.
/// 굳이 차이를 언급하자면, 왼쪽은 code 속에 구문이 있기 때문에 include가 발생할 때마다 일단 한번 읽고
/// 비교를 해야 함. 그러나 오른쪽은 전처리기에 지시하는 방식이므로 한번 처리하면 그 다음부터는 무시함.
/// 왼쪽이 있는 것은 표준 방식이라 어느 컴파일러에서나 보장함. 오른쪽은 once가 표준이 아님.
