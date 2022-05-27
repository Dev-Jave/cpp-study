/*
 배열의 크기는 상수
 
 */

#include <iostream>
using namespace std;

int main() {
    int arrWithLiteralSzie[5];
    
    const int SIZE{ 5 };
    int arrWithConstSize[SIZE];
    
    int number{ 5 };
    int arrWithVariableSize[number]; // error
    
    int input;
    cin >> input;
    int arrWithUserInputSize[input]; // error
    
    return 0;
}
