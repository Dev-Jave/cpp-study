/*
 1차원 배열과 포인터
 
 */

#include <iostream>
using namespace std;

int getSum(const int*, int);

int main() {
    // 배열 선언과 초기화
    int arr[5] = { 10, 11, 12, 13, 14};
    
    // 함수 호출
    cout << "요소의 합: " << getSum(arr, 5) << endl;
    
    return 0;
}

int getSum(const int* p , int size) {
    int sum = 0;
    
    for (int i{0}; i < size; i++) {
        cout << *(p+i) << endl;
        sum += *(p+i);
    }
    
    return sum;
}
