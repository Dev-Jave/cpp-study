/*
 참조의 활용2
 
 */

#include <iostream>
using namespace std;

int& fun1() {
    int a{ 5 };
    return a;
}

void fun2() {
    int b { 5 };
}

int main() {
    int& r = fun1();
    r = 7;
    cout << r << endl;
    fun2();  
    cout << r << endl;
    
    return 0;
}
