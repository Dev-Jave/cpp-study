//
//  Device.cpp

#include "Device.hpp"
#include <sstream>
using namespace std;

Device::Device(string modelName, string manufacturer)
: modelName{ modelName }, manufacturer { manufacturer } {}

void Device::setDeviceInfo(string mn, string mf) {
    modelName = mn;
    manufacturer = mf;
}

string Device::getModelName() const { return modelName; }

string Device::getManufacturer() const { return manufacturer; }

string Device::toString() const {
    ostringstream output;
    output << "model name is : " << modelName << "\n"
    << " manufacturer is : " << manufacturer << endl;
    return output.str();
}


