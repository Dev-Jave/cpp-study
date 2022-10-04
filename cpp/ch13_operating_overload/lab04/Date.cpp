#include "Date.hpp"
#include <iostream>
#include <string>
#include "Date.hpp"
using namespace std;

const array<unsigned int, 13> Date::days{
    0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};


Date::Date(int month, int day, int year) {
    setDate(month, day, year);
}

void Date::setDate(int mm, int dd, int yy) {
    if (mm >= 1 && mm <= 12) {
        month = mm;
    }
    else {
        throw invalid_argument{"Month must be 1-12"};
    }
    
    if (yy >= 1900 && yy <= 2100) {
        year = yy;
    }
    else {
        throw invalid_argument{"Year must ne >= 1900 and 2100"};
    }
    if ((mm==2 && leapYear(year) && dd >= 1 && dd <= 29) || (dd >= 1 && dd <= days[mm])) {
        day = dd;
    }
    else {
        throw invalid_argument{"Day is out of range for current month and year"};
    }
}

Date& Date::operator++() {
    helpIncreament();
    return *this;
}

Date Date::operator++(int) {
    Date temp{*this};
    helpIncreament();
    
    return temp;
}

Date& Date::operator+=(unsigned int additionalDays) {
    for (unsigned int i = 0; i < additionalDays; ++i) {
        helpIncreament();
    }
    return *this;
}

bool Date::leapYear(int testYear) {
    return (testYear % 400 == 0 || tesY)
}

