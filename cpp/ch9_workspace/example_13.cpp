/*
 포인터로 스왑하는 함수
 */

#include <iostream>
using namespace std;

void swap(int* first, int* second);

int main() {
    // 변수 2개 정의
    int x = 10;
    int y = 20;
    
    // 스왑하기 전에 x와 y값 출력
    cout << "스왑하기 전의 x와 y값" << endl;
    cout << "x: " << x << " " << "y: " << y << endl;
    
    swap(&x, &y);
    
    // 스왑한 후 x와 y값 출력
    cout << "스왑한 후에 x와 y값" << endl;
    cout << "x: " << x << " " << "y: " << y << endl;
}

void swap(int* first, int* second) {
    int temp = *first;
    *first = *second;
    *second = temp;
}




