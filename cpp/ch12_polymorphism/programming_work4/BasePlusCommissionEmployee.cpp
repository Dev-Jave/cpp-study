// BasePlusCommissionEmployee.cpp

#include <iomanip>
#include <sstream>
#include <stdexcept>
#include "BasePlusCommissionEmployee.hpp"
using namespace std;

BasePlusCommissionEmployee::BasePlusCommissionEmployee( // 생성자
        const string& first, const string& last, const string& ssn,
        double sales, double rate, double salary)
: CommissionEmployee(first, last, ssn, sales, rate) {
    setBaseSalary(salary); // salary 값 검증 및 설정
}

// baseSalary 설정자
void BasePlusCommissionEmployee::setBaseSalary(double salary) {
    if (salary < 0.0) {
        throw invalid_argument("Salary must be >= 0.0");
    }
    baseSalary = salary;
}

// baseSalary 접근자
double BasePlusCommissionEmployee::getBaseSalary() const {
    return baseSalary;
}

// earnings 계산
double BasePlusCommissionEmployee::earnings() const {
    return baseSalary + (getCommissionRate() * getGrossSales());
}

// employee 정보 출력
string BasePlusCommissionEmployee::toString() const {
    ostringstream output;
    output << fixed << setprecision(2);
    
    // base class의 private 변수는 상속받아도 접근이 불가능하므로, 접근자 함수를 통해 값을 가져온다.
    output << "base-salaried commission employee: " << getFirstName()
    << ' ' << getLastName() << "\nsocial security number: " << getSocialSecurityNumber()
    << "\ngross sales: " << getGrossSales()
    << "\ncommission rate: " << getCommissionRate()
    << "\nbase salary: " << baseSalary;
    return output.str();
}


