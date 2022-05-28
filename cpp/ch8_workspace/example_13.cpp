/*
 배열의 함수 사용
 
 */

#include <iostream>
using namespace std;

void print(const int numbers[], int size) { // -> 배열 요소를 수정하지 않음.
    for (int i = 0; i < size; i++)
        cout << numbers[i] << " ";
}

int main() {
    // 배열 선언하고 초기화
    int numbers[15] = {5, 7, 9, 11, 13 };
    
    // print 함수 호출
    print(numbers, 5);
    
    return 0;
}
