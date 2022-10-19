#ifndef Time_hpp
#define Time_hpp

#include <string>

class Time {
public:
    explicit Time(int = 0, int = 0, int = 0); // default constructor
    
    // set functions
    void setTime(int, int ,int);
    void setHour(int);
    void setMinute(int);
    void setSecond(int);
    
    // get functions
    unsigned int getHour() const;
    unsigned int getMinute() const;
    unsigned int getSecond() const;
    
    std::string toUnivrsalString() const;
    std::string toStandardString() const;
private:
    unsigned int hour{0}; // 0 - 23
    unsigned int minute{0}; // 0 - 59
    unsigned int second{0}; // 0 - 59
};

#endif /* Time_hpp */
