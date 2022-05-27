/*
 배열을 함수에 전달
 : 배열을 함수로 전달하려면 배열과 배열의 길이 둘 다 전달할 것!
 */

#include <iostream>
using namespace std;

void printArray(const int param[], int size) {
    for (int i {0}; i < size; ++i)
        cout << param[i] << endl;
}

int main() {
    const int SIZE = 5;
    int arr[SIZE];
    for (int i{ 0 }; i < SIZE; ++i)
        cin >> arr[i];
    printArray(arr, SIZE);
    
    return 0;
}
