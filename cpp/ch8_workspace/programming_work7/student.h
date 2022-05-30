#ifndef student_h
#define student_h

#include <iostream>

class Student {
private:
    int _midScore;
    int _finalScore;
    
public:
    Student();
    Student(int midScore, int finalScore);
    
    const int getMidScore();
    const int getFinalScore();
    
    void setStudentInfo(int midScore, int finalScore);
};

#endif
