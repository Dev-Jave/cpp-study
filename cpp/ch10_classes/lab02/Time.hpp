//
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
