#include "Point.hpp"
#include <iomanip>

// default constructor
Point::Point(int x, int y) : _x{x}, _y{y} {};

// stream operator
ostream& operator<<(ostream& out, const Point& right) {
    out << "(" << right._x << ", " << right._y << ")";
    return out;
}

istream& operator>>(istream& in, Point& right) {
    in.ignore(255, '(');
    in >> right._x;
    in.ignore(255, ',');
    in >> right._y;
    in.ignore();
    return in;
}

// 덧셈,뺄셈,곱셈 연산자
Point Point::operator+(const Point& right) {
    return Point((_x + right._x), (_y + right._y));
}

Point Point::operator-(const Point& right){
    return Point(_x - right._x, _y - right._y);
}

int operator*(const Point& left, const Point& right) {
    int x = right._x * left._x;
    int y = right._y * left._y;
    return x + y;
}

// 전위, 후위 증가 연산자
Point& Point::operator++() { // prefix operator
    ++_x;
    ++_y;
    cout << "prefix" << endl;
    return *this;
}

Point operator++(Point& point, int) { // postfix operator
    Point tmp = point;
    cout << tmp << endl;
    ++point;
    cout << "postfix" << endl;
    cout << tmp << endl;
    return tmp;
}

// 할당 연산자
Point& Point::operator=(const Point& right) {
    _x = right._x;
    _y = right._y;
    return *this;
}

// 복합 할당 연산자
Point& Point::operator+=(const Point& right) {
    _x += right._x;
    _y += right._y;
    return *this;
}

Point& operator-=(Point& left, const Point& right) {
    left = (left - right);
    return left;
}

// 일치 연산자
bool Point::operator==(const Point& right) {
    return((_x == right._x) && (_y == right._y));
}

bool operator!=(Point& left, const Point& right) {
    return !(left == right);
}

// 관계 연산자
bool Point::operator>(const Point& right) {
    return(_x + _y > right._x + right._y);
}

bool operator<=(const Point& left, const Point& right) {
    return(left._x + left._y <= right._x + right._y);
}
