// main.cpp
#include <iostream>
#include "Point.hpp"
using namespace std;

int main() {
    Point p1, p2;
    cout << "Input 2 points: ";
    cin >> p1 >> p2;

    if (p1 == p2) cout << "p1 == p2" << endl;
    if (p1 != p2) cout << "p1 != p2" << endl;
    if (p1 > p2) cout << "p1 > p2" << endl;
    if (p1 <= p2) cout << "p1 <= p2" << endl;

    cout << endl;
    cout << "p1 + p2 = " << (p1 + p2) << endl;
    cout << "p1 * p2 = " << (p1 * p2) << endl;

    cout << endl;
    p1 -= p2++;
    cout << "p1 -= p2++" << endl;
    ++p1 += p2;
    cout << "++p1 += p2" << endl;
    cout << "p1 = " << p1 << endl;
}
