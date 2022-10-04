# Chapter 13. 연산자 오버로드
## 01. 객체의 역할
### 1) 호스트 객체
 클래스 멤버 함수를 정의했다면, 인스턴스 앞에 점을 찍고 멤버함수를 호출할 수 있다. 
 ```cpp
 void Fun::functionOne(...)
 {
    ...
 }
 int main()
 {
    fun1.functionOne(...); // fun1이 호스트 객체
    fun2.functionOne(...); // fun2이 호스트 객체 
 }
 ```
 위 코드에서 멤버 함수 ```functionOne```은 첫 번째 호출의 경우 fun1, 두 번째 호출의 경우 fun2를 **호스트 객체**로 사용한다. <span style='color: black; background-color:#f1f8ff;'>호스트 객체는 함수 호출의 주체</span>라고 할 수 있다.  
어떤 인스턴스를 호스트 객체로 사용할지는 계속 바뀌기 때문에 인스턴스 멤버 함수 내부에서는 호스트 객체(자기 자신)를 가리키려면 this라는 포인터를 사용해야 한다. _ex) 첫 번째 호출  때 functionOne 함수 내부에서 this 포인터 사용 시 fun1 객체 가리킴_  
  
  즉 멤버 <span style='color: black; background-color:#f1f8ff;'>함수 내부에서 *this가 곧 호스트 객체</span>다.
  ```cpp
  void Fun::multiplyByTwo() {
    cout << num * 2; // 단순하게 num에 접근
  }
  
  void Fun::multiplyByThree() {
    cout << (this->num) * 2; // 컴파일러가 내부적으로 num에 접근
  }
  ```
**객체 보호**  
멤버함수는 호스트 객체를 변경할 수도 변경하지 않을 수도 있다.
- 데이터 멤버 값을 지정 ➤ 호스트 객체 변경 (_setter 함수_)
- 데이터 멤버 값을 출력 ➤ 호스트 객체 변경 X (_getter 함수_)  
따라서 **멤버함수 뒤에 const 한정자를 붙여서 멤버함수가 호스트 객체를 변경하지 못하게 할 수 있다.** 
```cpp
// 선언
void input(...);
void output(...) const;

// 정의
void Fun::input(...) {...;};
void Fun::output(...) const {...;} // 호스트 객체 변경 불가

// 호출
fun1.input(...);
fun1.output(...);
```  
### 2) 매개변수 객체
> 매개변수 객체(parameter object) : 매개변수로 전달된 객체  

호스트 객체는 내부에서 숨겨지지만, 매개변수 객체는 명시적으로 활용해야 한다.
- 값으로 전달 (pass-by-value)
- 참조로 전달 (pass-by-reference)
- 포인터로 전달 (pass-by-pointer)
### 3) 리턴 객체
## 02. 연산자 오버로드
### 1) 연산자 오버로드의 개념
> 연산자 오버로드(Operating Overload) : 어떤 연산자를 사용해서 어떤 처리를 할 수 있게 해주는 문법

C++은 연산자라는 기호를 사용하여 정수와 부동 소수점 등의 기본 자료형을 조작할 수 있다. 가령 x + y라는 형태로 사용할 수 있는 int, long, long long, double, long double 등의 자료형에 사용할 수 있다.
```cpp
14 + 20 // 정수의 덧셈
14.21 + 20.45 // 부동 소수점의 덧셈
```
정수의 덧셈과 부동 소수점의 덧셈은 내부적으로 일어나는 처리가 다르지만 같은 연산자를 활용한다. 즉 연산자가 오버로드된 것이다.  
### 2) 연산자의 범주

### 3) 연산자 오버로드 규칙
* 우선 순위 : 연산자 우선 순위는 변경할 수 없음.
* 결합 방향 : 연산자 결합 방향도 변경할 수 없음.

## 03. 멤버 함수로 오버로드
### 1) 단항 연산자
단항 연산자는 호스트 객체가 곧 피연산자이다. 따라서 매개변수 객체가 추가로 필요하지 않다.
```cpp
// 선언
const Fraction operator+() const;
const Fraction operator-() const;

const Fraction Fraction::operator+() const {
  Fraction temp(+numer, denum); // 새로운 객체 생성
  return temp;
}

const Fraction Fraction::operator+() const {
  Fraction temp(+numer, denum); // 새로운 객체 생성
  return temp;
}
const Fraction

// 음수 연산자 정의
```
### 2) 이항 연산자
### 3) 이외의 연산자
## 04. 비멤버 함수로 오버로드
## 05. 자료형 변환