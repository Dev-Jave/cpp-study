#ifndef STUDENT_H
#define STUDENT_H
#include <iostream>
#include <string>


class Student {
private:
    std::string _name;
    int _score;
    static int studentNum;
public:
    Student();
    Student(std::string name, int score);
    std::string getName() const;
    int getScore() const;
    static int getStudentNum();
    
};

#endif
