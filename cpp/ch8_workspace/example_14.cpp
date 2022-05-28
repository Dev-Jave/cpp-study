/*
 배열의 함수 사용2
 
 매개변수로 받은 배열을 수정하고 싶을 때 const를 붙이면 안됨.
 const를 붙이지 않은 체 보내진 배열을 수정할 시, 원본 배열도 수정됨.
 
 */

#include <iostream>
using namespace std;

void multiplyByTwo(int numbers[], int size) {
    for (int i = 0; i < size; i++)
        numbers[i] *= 2;
}

//void constMultiplyByTwo(const int numbers[], int size) {
//    for (int i = 0; i < size; i++)
//        numbers[i] *= 2;
//}

void print(const int numbers[], int size) {
    for (int i = 0; i < size; i++)
        cout << numbers[i] << " ";
    cout << endl;
}

int main() {
    // 배열 선언하고 초기화
    int numbers[5] = { 150, 170, 190, 110, 130 };
    print(numbers, 5);
    
    multiplyByTwo(numbers, 5);
    
    print(numbers, 5);
    
    return 0;
}
