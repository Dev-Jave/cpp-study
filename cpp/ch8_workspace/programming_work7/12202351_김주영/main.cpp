#include <iostream>
#include <iomanip>
#include "student.h"
using namespace std;

void printScore(Student param[], int size);

int main() {
    int studentNum;
    int midScore;
    int finalScore;
    
    cout << "Enter the number of Students : ";
    cin >> studentNum;
    
    const int SIZE = studentNum; // 받은 수를 상수에 할당
    Student sArr[SIZE];
    
    for (int i {0}; i < SIZE; i++) {
        cout << "Enter the midterm and final score: ";
        cin >> midScore >> finalScore;
        sArr[i].setStudentInfo(midScore, finalScore);
    }
    
    cout << endl << setw(19) << "midterm";
    cout << setw(6) << "final" << endl;
    printScore(sArr, SIZE);
    
    return 0;
}

void printScore(Student param[], int size) { // 배열에 포함된 객체 정보를 출력하는 함수
    double midAverage{ 0.0 };
    double finalAverage{ 0.0 };
    
    for (int i{ 0 }; i < size; ++i) {
        cout << "Student " << setfill('0') << setw(2) << i+1 << ": ";
        cout << setfill(' ') << setw(7) << right << param[i].getMidScore() << " ";
        cout << setw(5) << right << param[i].getFinalScore() << endl;
        
        midAverage += param[i].getMidScore();
        finalAverage += param[i].getFinalScore();
    }
    
    cout << setw(11) << "Average:";
    cout << fixed << setprecision(1); // 소수점 고정, 소수점 첫 번째 자리수 까지 표기
    cout << setw(8)  << midAverage/size;
    cout << setw(6)  << finalAverage/size << endl;
}


