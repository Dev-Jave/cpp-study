/*
 circle 클래스 예제
 */

#include <iostream>
using namespace std;

class Circle {
private:
    double radius;
    
public:
    Circle(double radius);          // 매개변수가 있는 생성자
    Circle();                       // 기본 생성자
    ~Circle();                      // 소멸자
    Circle(const Circle& circle);   // 복사 생성자
    void setRadius(double radius);  // 설정자
    double getRadius() const;       // 접근자
    double getArea() const;         // 접근자
    double getPerimeter() const;    // 접근자
};

Circle::Circle(double rds) // 매개변수 생성자
: radius(rds) {
    cout << "매개변수가 있는 생성자 호출" << endl;
}

Circle::Circle() // 기본 생성자
:radius(0.0) {
    cout << "기본 생성자 호출" << endl;
}

Circle::~Circle() { // 소멸자
    cout << "소멸 생성자 호출" << radius << endl;
}

Circle::Circle(const Circle& circle) // 복사 생성자
: radius(circle.radius) {
    cout << "복사 생성자 호출" << endl;
}

void Circle::setRadius(double value) {
    radius = value;
}

double Circle::getRadius() const {
    return radius;
}

double Circle::getArea() const {
    const double PI = 3.14;
    return (PI * radius * radius);
}

double Circle::getPerimeter() const {
    const double PI = 3.14;
    return ( 2 * PI * radius);
}

// 애플리케이션
int main() {
    // circle1 인스턴스화 후에 멤버 함수 호출
    Circle circle1(5.2);
    cout << "반지름: " << circle1.getRadius() << endl;
    cout << "넓이: " << circle1.getArea() << endl;
    cout << "둘레: " << circle1.getPerimeter() << endl;
    
    // circle2 인스턴스화 후에 멤버 함수 호출
    Circle circle2(circle1);
    cout << "반지름: " << circle2.getRadius() << endl;
    cout << "넓이: " << circle2.getArea() << endl;
    cout << "둘레: " << circle2.getPerimeter() << endl;
    
    // circle3 인스턴스화 후에 멤버 함수 호출
    Circle circle3;
    cout << "반지름: " << circle3.getRadius() << endl;
    cout << "넓이: " << circle3.getArea() << endl;
    cout << "둘레: " << circle3.getPerimeter() << endl;
}
