/*
 포인터의 포인터
 
 */

#include <iostream>
using namespace std;

int main() {
    int score = 92;
    int* p = &score;
    int** pp = &p;
    
    cout << score << endl;          // score 변수 메모리에 있는 값
    cout << *p << endl;             // p 변수의 역참조
    cout << *(*pp) << endl << endl; // pp 변수의 역참조의 역참조
    
    cout << p << endl;              // p 변수 메모리에 있는 값 => score 변수의 메모리 주소
    cout << pp << endl;             // pp 변수 메모리에 있는 값 => p 변수의 메모리 주소
    cout << *pp << endl;            // pp 변수의 역참조 => p변수의 메모리에 있는 값 => score 변수의 메모리 주소
    
}
