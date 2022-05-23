/*
 string class 예제
 - 변수와 기능이 합쳐져 class 구성
 */

#include <iostream>
#include <string>
using namespace std;

int main() {
    string s1 = "kjy";
    cout << s1.length() << endl;
    string s2 = s1 + " dlwlrma";
    cout << s2 << endl;
    string s3 = s2.substr(4, 7); // substr => 부분 문자열
    cout << s3 << endl;
    
    return 0;
}

