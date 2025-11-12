#include<iostream>
#include<string>
#include "electricvehicle.h"

ElectricVehicle::ElectricVehicle(int vehicleId, std::string make, std::string model, double batteryCapacity, double chargeLevel): m_vehicleId(vehicleId), m_make(make), m_model(model), m_batteryCapacity(batteryCapacity), m_chargeLevel(chargeLevel) { }
   
void ElectricVehicle::charge(double hours) {
   const double chargeRate = 10.0; 
    double addedCharge = hours * chargeRate;
    m_chargeLevel = std::min(m_chargeLevel + addedCharge, m_batteryCapacity);
}

void ElectricVehicle::drive(double miles) {
    const double milesPerKWh = 4.0; 
    double requiredCharge = miles / milesPerKWh;
    if (m_chargeLevel >= requiredCharge) {
    m_chargeLevel -= requiredCharge;
    } else {
        std::cout << "Not enough charge to drive " << miles << " miles. Shutting down." << std::endl;
    }
}

void ElectricVehicle::displaydetails() const{
        std::cout << "Vehicle Id : " << m_vehicleId << std::endl;
        std::cout << "Make : " << m_make << std::endl;
        std::cout << "Model : " << m_model << std::endl;
        std::cout << "Battery Capacity : " << m_batteryCapacity << " kWh" << std::endl;
        std::cout << "Charge Level     : " << m_chargeLevel << " kWh" << std::endl;
        std::cout << "----------------------------" << std::endl;
}
    