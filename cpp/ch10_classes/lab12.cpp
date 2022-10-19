#include <iostream>
#include <string>
using namespace std;

class Phone {
public:
    Phone(string n) { cout << "Phone constructor" << endl; }
    ~Phone() { cout << "Phone destructor" << endl; }
private:
    string _name;
};

class Person {
public:
    Person(string n, Phone& p) : _name{ n }, _phone{ p }
    { cout << "Person constructor" << endl; }
    ~Person() { cout << "Person destructor" << endl; }
private:
    string _name;
    const Phone _phone;
};

int main() {
    Phone ip{ "iPhone 12" };
    Person psn{ "pby", ip };
}
