/*
 circle 객체 예제
 */

#include <iostream>
using namespace std;

// 클래스 정의 : 데이터 멤버와 멤버 함수 선언
class Circle {
private:
    double radius;
public:
    double getRadius() const;
    double getArea() const;
    double getPeriemter() const;
    void setRadius(double value);
};

/*
 함수 뒤 const의 경우 함수가 클래스 멤버인 경우에만 const 키워드를 함수 뒤 삽입 가능하며,
 해당 함수가 속한 객체의 멤버 변수를 변경할 수 없다는 뜻임.
 */

// 멤버 함수 정의 부분
double Circle::getRadius() const {
    return radius;
}

double Circle::getArea() const {
    const double PI = 3.14;
    return (PI * radius * radius);
}

double Circle::getPeriemter() const {
    const double PI = 3.14;
    return (2 * PI * radius);
}

void Circle::setRadius(double value) {
    radius = value;
}

// 애플리케이션 부분
// 클래스를 인스턴스화해서 객체를 만들고 활용

int main() {
    // 첫 번째 circle 객체
    cout << "Circle 1" << endl;
    Circle circle1;
    circle1.setRadius(10.0);
    
    cout << "반지름: " << circle1.getRadius() << endl;
    cout << "넓이: " << circle1.getArea() << endl;
    cout << "둘레: " << circle1.getPeriemter() << endl << endl;
    
    // 두 번째 circle 객체
    cout << "Circle 2" << endl;
    Circle circle2;
    circle2.setRadius(20.0);
    cout << "반지름: " << circle2.getRadius() << endl;
    cout << "넓이: " << circle2.getArea() << endl;
    cout << "둘레: " << circle2.getPeriemter() << endl;
}
