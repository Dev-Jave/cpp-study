/*
 배열의 초기화
 */

#include <iostream>
using namespace std;

int main() {
    int a[5];
    for (int i{ 0 }; i < 5; ++i)
        cout << a[i] << " ";
    cout << endl;
    
    int b[5]{ 1, 2, 3, 4, 5 };
    for (int i{0}; i < 5; ++i )
        cout << b[i] << " ";
    cout << endl;
    
    int c[5]{ 1, 2 };
    // int c[5] = { 1, 2 };
    for (int i{ 0 }; i < 5; ++i)
        cout << c[i] << " ";
    cout << endl;
    
    int d[]{ 1, 2, 3, 4, 5 };
    // int d[] = { 1, 2, 3, 4, 5};
    for (int i{ 0 }; i < 5; ++i)
        cout << d[i] << " ";
    cout << endl;
    
    int e[5]{};
    for (int i { 0 }; i < 5; ++i)
        cout << e[i] << " ";
    cout << endl;
    
    return 0;
}
