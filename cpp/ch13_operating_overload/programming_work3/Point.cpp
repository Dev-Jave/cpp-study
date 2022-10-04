#include "Point.hpp"
#include <iomanip>

// default constructor
Point::Point(int x, int y) : _x{x}, _y{y} {};

ostream& operator<<(ostream& out, const Point& right) {
    out << "(" << right._x << ", " << right._y << " ";
    return out;
}

istream& operator>>(istream& in, Point& right) {
    in.ignore();
    in >> right._x;
    in.ignore(2);
    in >> right._y;
    in.ignore();
    return in;
}

Point Point::operator+(const Point& right) {
    return Point((_x + right._x), (_y + right._y));
}

Point Point::operator-(const Point& right){
    return Point((_x - right._x), (_y - right._y));
}


Point& Point::operator=(const Point& right) {
    _x = right._x;
    _x = right._y;
    return *this;
}

Point operator*(const Point& right, const Point& left) {
    int x = right._x * left._x;
    int y = left._y * left._y;
    return Point(x, y);
}

Point& Point::operator+=(const Point& right) {
    _x += right._x;
    _y += right._y;
    return *this;
}

Point operator-=(Point& left, const Point& right) {
    left = (left - right);
    return left;
}

Point& Point::operator++() { // prefix operator
    ++_x;
    ++_y;
    return *this;
}

Point operator++(Point& point, int) { // postfix operator
    Point tmp{ point };
    ++point;
    return tmp;
}

bool operator!=(Point& left, const Point& right) {
    return !(left == right);
}

bool Point::operator>(const Point& right) {
    return((_x > right._x) && (_y > right._y));
}

bool operator<=(const Point& left, const Point& right) {
    return((left._x <= right._x) && (left._y <= right._y));
}

// 등호 연산자 (member function)
bool Point::operator==(const Point& right) {
    return((_x == right._x) && (_y == right._y));
}

