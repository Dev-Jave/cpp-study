//
//  Laptop.hpp

#ifndef Laptop_hpp
#define Laptop_hpp

#include "Device.hpp"
#include <string>

class Laptop : public Device {
public:
    Laptop(const std::string&, const std::string&, std::string, int);
    std::string toString();
    bool operator<(const Laptop&);
    bool operator>(const Laptop&);

private:
    std::string operatingSystem;
    int performanceScore;
};


#endif /* Laptop_hpp */
