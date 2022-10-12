//
//  Device.hpp

#ifndef Device_hpp
#define Device_hpp

#include <string>

class Device {
public:
    Device(std::string modelName = 0, std::string manufacturer = 0);
    void setDeviceInfo(std::string, std::string);
    std::string getModelName() const;
    std::string getManufacturer() const;
    std::string toString() const;
private:
    std::string modelName;
    std::string manufacturer;
};

#endif /* Device_hpp */
