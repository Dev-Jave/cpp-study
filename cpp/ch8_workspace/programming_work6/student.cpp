#include "student.hpp"
#include <iostream>
using namespace std;

int Student::studentNum = 0;

Student::Student()
:_name(""), _score(0) {}

Student::Student(string name, int score)
:_name(name), _score(score) {
    studentNum++;
}

string Student::getName() const {
    return _name;
}

int Student::getScore() const {
    return _score;
}

int Student::getStudentNum() {
    return studentNum;
}

