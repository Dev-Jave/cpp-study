//
//  Server.cpp

#include "Server.hpp"
#include <string>
#include <sstream>
using namespace std;

Server::Server(const string& modelName, const string& manufacturer, string operatingSystem, int powerSupply)
: Device(modelName, manufacturer) {
    this->operatingSystem = operatingSystem;
    this->powerSupply = powerSupply;
}

string Server::toString() {
    ostringstream output;
    
    output << "Device model: " << getModelName() <<
    "\nDevice manufacturer: " << getManufacturer() <<
    "\nOperating System: " << operatingSystem <<
    "\nPower Supply " << powerSupply << "W\n";
    
    return output.str();
}
