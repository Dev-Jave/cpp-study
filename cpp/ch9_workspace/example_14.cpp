/*
 built-in array와 포인터
 
 */

#include <iostream>
using namespace std;

int main() {
    int b[]{10, 20, 30, 40};
    int* bPtr{b}; // or int* bPtr{&b[0]};
    
    cout << "Array b displayed with:" << endl << endl;
    cout << "Array subscript notation" << endl;
    
    for (size_t i{0}; i < 4; ++i) {
        cout << "b[" << i << "] = " << b[i] << endl;
    }
    
    cout << endl << "Pointer/offset notation where ";
    cout << "the pointer is array name" << endl;
    
    for (size_t offset1{0}; offset1 < 4; ++offset1) {
        cout << "*(b + " << offset1 << ") = " << *(b + offset1) << endl;
    }
    
    cout << endl << "Pointer subscript noation" << endl;
    
    for (size_t j{0}; j < 4; ++j) {
        cout << "bPtr[" << j << "] = " << bPtr[j] << endl;
    }
    
    cout << endl << "Pointer offset notation" << endl;
    
    for (size_t offset2{0}; offset2 < 4; ++offset2) {
        cout << "*(bPtr + " << offset2 << ") = " << *(bPtr + offset2) << endl;
    }
    
    return 0;
}
