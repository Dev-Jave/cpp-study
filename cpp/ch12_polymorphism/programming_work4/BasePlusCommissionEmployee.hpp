//  BasePlusCommissionEmployee.hpp

#ifndef BasePlusCommissionEmployee_hpp
#define BasePlusCommissionEmployee_hpp

#include "CommissionEmployee.hpp"

// CommissionEmployee 클래스 상속
class BasePlusCommissionEmployee : public CommissionEmployee {
public:
    // 생성자
    BasePlusCommissionEmployee(const std::string&, const std::string&,
                               const std::string&, double = 0.0, double = 0.0, double = 0.0);
    void setBaseSalary(double); // baseSalary 설정자
    double getBaseSalary() const; // baseSalary 접근자
    double earnings() const; // earnings 계산 멤버 함수
    std::string toString() const; // 직원 정보 출력 멤버 함수
private:
    double baseSalary; 
};

#endif /* BasePlusCommissionEmployee_hpp */
