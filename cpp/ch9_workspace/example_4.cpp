/*
 참조로 전달을 사용해서
 스왑함수 만들기
 
 */

#include <iostream>
using namespace std;

void swap(int& first, int& second);

int main() {
    // 변수 2개 정의
    int x = 10;
    int y = 20;
    
    // 스왑하기 전에 x와 y의 값을 출력
    cout << "스왑하기 전에 x와 y의 값" << endl;
    cout << "x : " << x << " y : " << y << endl;
    
    // swap 함수를 호출해서 변수 x와 y를 스왑
    swap(x, y);
    
    cout << "스왑한 후의 x와 y의 값" << endl;
    cout << "x : " << x << " y : " << y << endl;
    
    return 0;
}

void swap(int& first, int& second) {
    int temp = first;
    
    first = second;
    second = temp;
}

