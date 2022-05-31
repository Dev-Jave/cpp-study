#include <iostream>
#include "student.h"
using namespace std;

Student::Student()
:_midScore(0), _finalScore(0) {}

Student::Student(int midScore, int finalScore)
    :_midScore(midScore), _finalScore(finalScore) {}

void Student::setStudentInfo(int midScore, int finalScore) {
    _midScore = midScore;
    _finalScore = finalScore;
}

const int Student::getMidScore() {
    return _midScore;
}

const int Student::getFinalScore() {
    return _finalScore;
}






