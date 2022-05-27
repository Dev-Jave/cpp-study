#include <iostream>
#include <iomanip>
#include "student.h"
using namespace std;

void printScore(Student);

int main() {
    int studentNum;
    
    cout << "Enter the number of Students : ";
    cin >> studentNum;
    
    
    
    return 0;
}

void printScore(Student param[], int size) {
    for (int i{ 0 }; i < size; ++i) {
        
    
        cout << "Student " << setfill('0') << setw(2) << i << ": ";
        cout << setw(7) << right << param[i].getMidScore() << " ";
        cout << setw(5) << right << param[i].getFinalScore() << endl;
    }
}


