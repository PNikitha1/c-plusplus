#include <iostream>
#include<vector>
#include<algorithm>
#include "vehicle.h"

Vehicle::Vehicle( int vehicleId, std::string make, std::string model, double price, double mileage):
    m_vehicleId(vehicleId), m_make(make), m_model(model), m_price(price), m_mileage(mileage) { }
    
    
void Vehicle::displayDetails() const{
       std::cout << "Vehicle Id : " << m_vehicleId << std::endl;
       std::cout << "Make : " << m_make << std::endl;
       std::cout << "Model : " << m_model << std::endl;
       std::cout << "Price : " << m_price << std::endl;
       std::cout << "Mileage : " << m_mileage << "MPG" << std::endl;
}
    
Vehicle::~Vehicle() { }
    
int Vehicle::getVehicleId() const{
        return m_vehicleId;
}
    
double Vehicle::getPrice() const{
        return m_price;
}
    
double Vehicle::getMileage() const{
        return m_mileage;
}

Car::Car( int vehicleId, std::string make, std::string model, double price,double mileage, std::string engineType): Vehicle(vehicleId, make, model, price,mileage), m_engineType(engineType) { }
    
void Car::displayDetails() const {
        Vehicle::displayDetails();
        std::cout << "Engine Type : " << m_engineType << std::endl;
        std::cout << "--------------------------------------" << std::endl;
}

Truck::Truck( int vehicleId, std::string make, std::string model,double price, double mileage, double payloadCapacity): Vehicle(vehicleId, make, model, price, mileage), m_payloadCapacity(payloadCapacity) { }
    
void Truck::displayDetails() const {
        Vehicle::displayDetails();
        std::cout << "Payload Capacity : " << m_payloadCapacity << std::endl;
        std::cout << "--------------------------------------" << std::endl;
}

void displayVehicleDetails(const std::vector<Vehicle*>& vehicles){
    for(const auto& vehicle : vehicles){
        vehicle -> displayDetails();
    }
}

double calculateTotalMileage(const std::vector<Vehicle*>& vehicles) {
    if (vehicles.empty()) {
        throw std::runtime_error("No vehicles available to calculate mileage.");
    }

    double totalMileage = 0;
    for (const auto& vehicle : vehicles) {
        totalMileage += vehicle->getMileage();
    }
    return totalMileage;
}

void sortVehiclesByPrice(std::vector<Vehicle*>& vehicles) {
    if (vehicles.empty()) {
        throw std::runtime_error("No vehicles available to sort.");
    }

    std::sort(vehicles.begin(), vehicles.end(), [](Vehicle* a, Vehicle* b) {
        return a->getPrice() > b->getPrice();
    });
}

void searchVehiclesByvehicleId(const std::vector<Vehicle*>& vehicles, int vehicleId) {
    if (vehicles.empty()) {
        throw std::runtime_error("No vehicles available for search.");
    }

    for (const auto& vehicle : vehicles) {
        if (vehicle->getVehicleId() == vehicleId) {
            std::cout << "Vehicle Found: " << std::endl;
            vehicle->displayDetails();
            return;
        }
    }

    // If no vehicle is found, throw an exception
    throw std::invalid_argument("Vehicle with ID " + std::to_string(vehicleId) + " not found.");
}