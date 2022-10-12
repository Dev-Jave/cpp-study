// uniform initialization

#include <iostream>
using namespace std;

class Tmp {
public:
    Tmp() { cout << "constructor" << endl; }
};

int main() {
    int a = 5;
    int b(5);
    int c{ 5 };
    
    int d = 4.5;
    // int e{ 4.5 }; // error
    
    Tmp t1(); // function prototype
    Tmp t2{};
}
