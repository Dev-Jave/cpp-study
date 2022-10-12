//
//  main.cpp

#include <iostream>
#include <iomanip>
#include "Server.hpp"
#include "Laptop.hpp"
using namespace std;

int main() {
    Server server("ProLiant", "HP", "RHEL", 1200);
    Server server2("PowerEdge", "Dell", "Ubuntu", 1400);
    
    Laptop laptop("Macbook pro", "Apple", "Mac OS", 1898);
    Laptop laptop2("Gram", "LG", "Window 11", 1518);
    
    cout << server.toString() << endl << endl;
    cout << server2.toString() << endl;
    
    cout << laptop.toString() << endl;
    cout << laptop2.toString() << endl << endl;
    
    cout << boolalpha << (laptop < laptop2) << endl;
    cout << boolalpha << (laptop > laptop2) << endl;
}
