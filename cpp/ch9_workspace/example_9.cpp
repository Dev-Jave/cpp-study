/*
 직접 참조와 간접 참조
 
 */

#include <iostream>
using namespace std;

int main() {
    // 변수 선언과 초기화
    int score = 92;
    int* pScore = &score;
    
    cout << "score에 직접 접근: " << score << endl;
    cout << "score에 간접 접근: " << *pScore << endl;
    
    return 0;
}
