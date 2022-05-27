#include <iostream>
#include "student.h"
using namespace std;

Student::Student(int midScore, int finalScore)
    :_midScore(midScore), _finalScore(finalScore) {}

const int Student::getMidScore() {
    return _midScore;
}

const int Student::getFinalScore() {
    return _finalScore;
}






