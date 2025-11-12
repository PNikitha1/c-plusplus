#include "vehicle.h"

Vehicle::Vehicle(const std::string& type) : vehicleType(type) {}

std::string Vehicle::getVehicleType() const {
    return vehicleType;
}