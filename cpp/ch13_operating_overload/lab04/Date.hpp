#ifndef Date_hpp
#define Date_hpp

#include <array>
#include <iostream>

class Date {
    friend std::ostream& operator<<(std::ostream&, const Date&);
public:
    Date(int m = 1, int d = 1, int y = 1900); // 기본 생성자
    void setDate(int , int ,int); // month, day, year 값 설정
    Date& operator++(); // 전위 증감 연산자
    Date operator++(int); // 후위 증감 연산자
    Date& operator+=(unsigned int);
    static bool leapYear(int); // 운년인지 확인
    bool endOfMonth(int) const; // day가 month의 마지막 day인지 확인
private:
    unsigned int month;
    unsigned int day;
    unsigned int year;
    
    static const std::array<unsigned int, 13> days; // 각 월의 일
    void helpIncreament(); // 날짜 증가 함수
};

#endif /* Date_hpp */
