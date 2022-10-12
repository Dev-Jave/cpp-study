//  main.cpp

#include <iostream>
#include <iomanip>
#include "BasePlusCommissionEmployee.hpp"
using namespace std;

int main() {
    
    // BasePlusCommissionEmployee 객체 초기화
    BasePlusCommissionEmployee employee{"Bob", "Lewis", "333-33-3333",
        5000, .04, 300};
    
    // commission employee 정보 출력
    cout << fixed << setprecision(2); // 소수점 두 자리까지 고정 출력
    cout << "Employee information obtained by get functions: \n"
    << "\nFirst name is " << employee.getFirstName()
    << "\nLast name is " << employee.getLastName()
    << "\nSocial Security number is " << employee.getSocialSecurityNumber()
    << "\nGross sales is " << employee.getGrossSales()
    << "\nCommission rate is " << employee.getCommissionRate()
    << "\nBase salary is " << employee.getBaseSalary() << endl;
    
    employee.setBaseSalary(1000); // base salary 설정
    cout << "\nUpdated employee information from function toString : \n\n"
    << employee.toString();
    
    // 직원의 earning 출력
    cout << "\n\nEmployee's earnings: $" << employee.earnings() << endl;
}

