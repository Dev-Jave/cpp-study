/*
 for-each
 배열과 반복문
 */

#include <iostream>
using namespace std;

int main() {
    int arr[5];
    for (int i{ 0 }; i < 5; ++i)
        arr[i] = i + 1;
    
    for (int i{ 0 }; i < 5; ++i)
        cout << arr[i] << endl;
    
    int arr2[5];
    for (int i{ 0 }; i < 5; ++i)
        arr2[i] += 1;
    for (int element : arr)
        cout << element << endl;
    
    return 0;
}
