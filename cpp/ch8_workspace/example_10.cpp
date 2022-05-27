/*
 숫자 배열 거꾸로 출력하기
 */

#include <iostream>
using namespace std;

int main() {
    // 선언
    const int SIZE = 10;
    int arr[SIZE];
    int number;
    
    // 사용자로부터 크기를 입력받고 유효성 검사
    do {
        cout << "크기를 입력하세요.(1~10)";
        cin >> number;
    } while ( number < 1 || number > SIZE);
    
    // 원하는 값 입력 받기
    cout << number << "개의 숫자를 입력하세요." << endl;
    for (int i{0}; i < number; ++i)
        cin >> arr[i];
    
    // 입력된 정수들을 거꾸로 입력
    cout << "입력한 숫자들을 거꾸로 출력: ";
    for (int i = number-1; i >= 0; --i)
        cout << arr[i] << "  ";
    
    return 0;
}

