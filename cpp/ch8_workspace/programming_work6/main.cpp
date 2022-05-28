#include <iostream>
#include <vector>
#include "student.hpp"
using namespace std;

void findMinMaxStudent(vector<Student> vS, Student param[]);

int main() {
    vector<Student> vS;
    Student minMaxArr[2]{};
    string name;
    int score;
    
    cout << "Enter the name and score of student." << endl;
    cout << "(EOF to quit) ? ";
    
    while (cin >> name >> score) {
        vS.push_back(Student{ name, score });
        cout << "(EOF to quit) ? ";
    }
    
    cout << "The number of students: " << Student::getStudentNum() << endl;
    findMinMaxStudent(vS, minMaxArr);
    
    cout << "Minimum and Maximum scores" << endl;
    cout << minMaxArr[0].getName() << " " << minMaxArr[0].getScore() << " ";
    cout << minMaxArr[1].getName() << " " << minMaxArr[1].getScore() << endl;
    
    return 0;
}

void findMinMaxStudent(vector<Student> vS, Student param[]) {
    param[0] = vS[0]; // Min
    param[1] = vS[0]; // Max
    
    for (int i {0}; i < vS.size(); i++) {
        if (param[0].getScore() > vS[i].getScore())
            param[0] = vS[i];
        
        if (param[1].getScore() < vS[i].getScore())
            param[1] = vS[i];
    }
}
