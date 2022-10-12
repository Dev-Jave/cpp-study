//  CommissionEmployee.cpp

#include <iomanip>
#include <stdexcept>
#include <sstream>
#include "CommissionEmployee.hpp"
using namespace std;

// 생성자
CommissionEmployee::CommissionEmployee(const string& first, const string& last,
                                       const string& ssn, double sales, double rate) {
    firstName = first;
    lastName = last;
    socialSecurityNumber = ssn;
    setGrossSales(sales);
    setCommissionRate(rate);
}

// firstName 설정자
void CommissionEmployee::setFirstName(const string& first) {
    firstName = first;
}

// firstName 접근자
string CommissionEmployee::getFirstName() const {
    return firstName;
}

// lastName 설정자
void CommissionEmployee::setLastName(const string& last) {
    lastName = last;
}

// lastName 접근자
string CommissionEmployee::getLastName() const {
    return lastName;
}

// socialSecurityNumber 설정자
void CommissionEmployee::setSocialSecurityNumber(const string& ssn) {
    socialSecurityNumber = ssn;
}

// socialSecurityNumber 접근자
string CommissionEmployee::getSocialSecurityNumber() const {
    return socialSecurityNumber;
}

// grossSales 설정자
void CommissionEmployee::setGrossSales(double sales) {
    if (sales < 0.0) { // 유효성 검증
        throw invalid_argument("Gross sales must be >= 0.0");
    }
    grossSales = sales;
}

// grossSales 접근자
double CommissionEmployee::getGrossSales() const {
    return grossSales;
}

// commissionRate 설정자
void CommissionEmployee::setCommissionRate(double rate) {
    if(rate <= 0.0 || rate >= 1.0) { // 유효성 검증
        throw invalid_argument("Commission rate must be > 0.0 and < 1.0");
    }
    commissionRate = rate;
}

// commissionRate 접근자
double CommissionEmployee::getCommissionRate() const {
    return commissionRate;
}

// earnings 계산
double CommissionEmployee::earnings() const {
    return commissionRate * grossSales;
}

// employee 정보 출력
string CommissionEmployee::toString() const {
    ostringstream output;
    output << fixed << setprecision(2);
    output << "commision employee: " << firstName << " " << lastName
    << "\nsocial security number: " << socialSecurityNumber
    << "\ngrossSales: " << grossSales
    << "\ncommissionRate: " << commissionRate;
    return output.str();
}
