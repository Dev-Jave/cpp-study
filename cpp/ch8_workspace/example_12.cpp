/*
 접근 연산
 
 */

#include <iostream>
using namespace std;

int main()
{
    // 배열과 변수 선언
    const int SIZE{ 10 };
    int numbers[SIZE]{};
    int count{ 0 };
    
    // 초기화
    int sum{ 0 };
    double average;
    
    // 숫자 입력
    while (count < SIZE && cin >> numbers[count])
        count++;
    
    int smallest = numbers[0];
    int largest = numbers[0];
    
    for(int i{ 0 }; i < count; i++) {
        sum += numbers[i];
        if (numbers[i] < smallest)
            smallest = numbers[i];
        if (numbers[i] > largest)
            largest = numbers[i];
    }
    
    average = static_cast<double>(sum) / count;
    
    // 결과 출력
    cout << "입력된 숫자는 " << count;
    cout << "개 입니다." << endl;
    cout << "합계: " << sum << endl;
    cout << "평균: " << average << endl;
    cout << "최소값: " << smallest << endl;
    cout << "최대값: " << largest << endl;
    
    return 0;
}
