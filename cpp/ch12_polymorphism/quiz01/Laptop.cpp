//
//  Laptop.cpp

#include "Laptop.hpp"
#include <iostream>
#include <sstream>
using namespace std;

Laptop::Laptop(const string& modelName, const string& manufacturer,
               string operatingSystem, int performanceScore)
: Device(modelName, manufacturer) {
    this->operatingSystem = operatingSystem;
    this->performanceScore = performanceScore;
}

string Laptop::toString() {
    ostringstream output;
    
    output << "model : " << getModelName()
    << "\nmanufacturer : " << getManufacturer()
    << "\nperatingSystem : " << operatingSystem
    << "\nperformanceScore : " << performanceScore << endl;
    
    return output.str();
}

bool Laptop::operator<(const Laptop& right) {
    if (performanceScore != right.performanceScore) {
        return (performanceScore < right.performanceScore);
    } else {
        return false;
    }
}

bool Laptop::operator>(const Laptop& right) {
    if (performanceScore != right.performanceScore) {
        return (performanceScore > right.performanceScore);
    } else {
        return false;
    }
}
