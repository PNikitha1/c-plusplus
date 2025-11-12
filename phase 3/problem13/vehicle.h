#ifndef __VEHICLE_H__
#define __VEHICLE_H__

#include <string>

class Vehicle {
private:
    std::string vehicleType;

public:
    Vehicle(const std::string& type);

    std::string getVehicleType() const;
};

#endif