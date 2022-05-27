#ifndef student_h
#define student_h

class Student {
private:
    int _midScore;
    int _finalScore;
    
public:
    Student(int midScore, int finalScore);
    
    const int getMidScore();
    const int getFinalScore();
    void printScore(Student param[], int SIZE);
    
};


#endif
