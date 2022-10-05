//  Point.hpp
#ifndef Point_hpp
#define Point_hpp

#include <iostream>
using namespace std;

class Point{
    friend ostream& operator<<(ostream& out, const Point& right);
    friend istream& operator>>(istream& in, Point& right);
    friend int operator*(const Point& left, const Point& right);
    friend Point& operator-=(Point& left, const Point& right);
    friend Point operator++(Point&, int); // postfix increment
    friend bool operator!=(const Point& left, const Point& right);
    friend bool operator<=(const Point&, const Point&);
public:
    explicit Point(int x = 0, int y = 0);
    Point operator+(const Point& right);
    Point operator-(const Point& right);
    Point& operator=(const Point& right);
    Point& operator+=(const Point& right);
    bool operator==(const Point& right);
    bool operator>(const Point& right);
    Point& operator++(); // prefix increment
private:
    int _x, _y;
};

#endif /* Point_hpp */
