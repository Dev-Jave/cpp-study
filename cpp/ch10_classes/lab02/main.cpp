//
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
