//
//  Server.hpp

#ifndef Server_hpp
#define Server_hpp

#include "Device.hpp"

class Server : public Device {
public:
    Server(const std::string&, const std::string&, std::string, int);
    std::string toString();
private:
    std::string operatingSystem;
    int powerSupply;
};

#endif /* Server_hpp */
