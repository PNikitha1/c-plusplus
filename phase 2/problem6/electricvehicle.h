#ifndef __ELECTRICVEHICLE_H__
#define __ELECTRICVEHICLE_H__
#include<string>

class ElectricVehicle{
    int m_vehicleId;
    std::string m_make;
    std::string m_model;
    double m_batteryCapacity;
    double m_chargeLevel;
    
    public:
    ElectricVehicle(int vehicleId, std::string make, std::string model, double batteryCapacity, double chargeLevel);

    void charge(double hours);
    void drive(double miles);
    void displaydetails() const;
    
};
#endif