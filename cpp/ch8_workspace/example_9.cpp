/*
 배열을 함수애 전달2
 배열을 함수에 전달해서 값을 변경하면 main함수 내에서도 배열 값이 변경됨.
 */

#include <iostream>
using namespace std;

void copyArr(const int srcArr[], int dstArr[], int size) { // const 생략 가능
    for (int i {0}; i < size; ++i)
        dstArr[i] = srcArr[i];
}

int main() {
    const int SIZE = 5;
    
    int source[SIZE];
    for (int i { 0 }; i < SIZE; ++i)
        cin >> source[i];
    
    int destination[SIZE]{};
    copyArr(source, destination, SIZE);
    for (int n : destination)
        cout << n << endl;
    
    return 0;
}
