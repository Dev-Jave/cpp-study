//  CommissionEmployee.hpp

#ifndef CommissionEmployee_hpp
#define CommissionEmployee_hpp

#include <string>

class CommissionEmployee {
public:
    // 생성자
    CommissionEmployee(const std::string&, const std::string&,
                       const std::string&, double = 0.0, double = 0.0);
    
    void setFirstName(const std::string&); // firstName 설정자
    std::string getFirstName() const; // firstName 접근자
    
    void setLastName(const std::string&); // lastName 설정자
    std::string getLastName() const; // lastName 접근자
    
    void setSocialSecurityNumber(const std::string&); // socialSecurityNumber 설정자
    std::string getSocialSecurityNumber() const; // socialSecurityNumber 접근자
    
    void setGrossSales(double); // grossSales 설정자
    double getGrossSales() const; // grossSales 접근자
    
    void setCommissionRate(double); // commissionRate 설정자
    double getCommissionRate() const; // commissionRate 접근자
    
    double earnings() const; // earnings 계산 멤버 함수
    std::string toString() const; // employee 정보 출력 멤버 함수
private:
    std::string firstName;
    std::string lastName;
    std::string socialSecurityNumber;
    double grossSales;
    double commissionRate;
};

#endif /* CommissionEmployee_hpp */
