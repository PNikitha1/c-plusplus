#include "vehicle.h"

Vehicle::Vehicle(std::string make, std::string model, int year) 
    : m_make(make), m_model(model), m_year(year) {
    if (year < 1886) { 
        throw std::invalid_argument("Year cannot be earlier than 1886.");
    }
}


void Vehicle::displayDetails() const{
    std::cout << "Make : " << m_make << std::endl;
    std::cout << "Model : " << m_model << std::endl;
    std::cout << "Year : " << m_year << std::endl;
}

Vehicle::~Vehicle() { }

Car::Car(std::string make, std::string model, int year, std::string color)
    : Vehicle(make, model, year), m_color(color) {
    if (color.empty()) { 
        throw std::invalid_argument("Color cannot be an empty string.");
    }
}



void Car::displayDetails() const{
    Vehicle:: displayDetails();
    std::cout << "Color : " << m_color << std::endl;
}

Truck::Truck(std::string make, std::string model, int year, double payloadCapacity)
    : Vehicle(make, model, year), m_payloadCapacity(payloadCapacity) {
    if (payloadCapacity < 0) { 
        throw std::invalid_argument("Payload capacity cannot be negative.");
    }
}

void Truck::displayDetails() const{
    Vehicle:: displayDetails();
    std::cout << "Payload Capacity : " << m_payloadCapacity << std::endl;
}

Electric::Electric(double batteryCapacity, double chargeLevel) 
    : m_batteryCapacity(batteryCapacity), m_chargeLevel(chargeLevel) {
    if (batteryCapacity < 0) { 
        throw std::invalid_argument("Battery capacity cannot be negative.");
    }
    if (chargeLevel < 0 || chargeLevel > batteryCapacity) { 
        throw std::invalid_argument("Charge level must be between 0 and battery capacity.");
    }
}

void Electric::displayElectricDetails() const{
    std::cout << "Battery Capacity : " << m_batteryCapacity << std::endl;
    std::cout << "Charge Level : " << m_chargeLevel << std::endl;
}

Electric::~Electric() { }

ElectricCar::ElectricCar(std::string make, std::string model, int year, std::string color, 
    double batteryCapacity, double chargeLevel, double temparature)
: Car(make, model, year, color), Electric(batteryCapacity, chargeLevel), m_temparature(temparature) {
    if (temparature < -50.0 || temparature > 150.0) { 
        throw std::invalid_argument("Temperature must be between -50.0 and 150.0.");
    }
}

void ElectricCar::displayDetails() const{
    Car::displayDetails();
    Electric::displayElectricDetails();
    std::cout << "Temparature : " << m_temparature << std::endl;
    std::cout << "-------------------------" << std::endl;
}

ElectricTruck::ElectricTruck(std::string make, std::string model, int year, double payloadCapacity, 
    double batteryCapacity, double chargeLevel, double temparature)
: Truck(make, model, year, payloadCapacity), Electric(batteryCapacity, chargeLevel), m_temparature(temparature) {
    if (temparature < -50.0 || temparature > 150.0) { 
        throw std::invalid_argument("Temperature must be between -50.0 and 150.0.");
    }
}

void ElectricTruck::displayDetails() const{
    Truck::displayDetails();
    Electric::displayElectricDetails();
    std::cout << "Temparature : " << m_temparature << std::endl;
    std::cout << "-------------------------" << std::endl;
}