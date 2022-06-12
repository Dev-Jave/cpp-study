/*
 특수한 포인터
 
 */

#include <iostream>
using namespace std;

void nullCheck(int* p);

int main() {
    int x = 7;
    int* p = &x;
    
    nullCheck(p);
    
    p = nullptr;
    
    nullCheck(p);
    
    return 0;
}

void nullCheck(int* p) {
    if (p) {
        cout << "p is not null pointer" << endl;
    } else {
        cout << "p is null pointer" << endl;
    }
}
