#include "vehicle.h"
std::string engineTypeToString(EngineType type) {
    switch (type) {
        case PETROL: return "Petrol";
        case DIESEL: return "Diesel";
        case ELECTRIC: return "Electric";
        case HYBRID: return "Hybrid"; 
        default: return "Unknown";
    }
}

Engine::Engine(): m_engineType(PETROL), m_capacity(1.0){ }

Engine::Engine(EngineType engineType, double capacity)
    : m_engineType(engineType), m_capacity(capacity) {
    if (capacity <= 0) { 
        throw std::invalid_argument("Engine capacity must be greater than zero.");
    }
}

    
EngineType Engine::getEngineType() const{
    return m_engineType;
}
    
double Engine::getCapacity() const{
    return m_capacity;
}

Vehicle::Vehicle(std::string make, std::string model, int year, double price, Engine engine)
    : m_make(make), m_model(model), m_year(year), m_price(price), m_engine(engine) {
    if (year < 1886) { 
        throw std::invalid_argument("Year cannot be earlier than 1886.");
    }
    if (price < 0) { 
        throw std::invalid_argument("Price cannot be negative.");
    }
}

std::string Vehicle::getMake() const{
    return m_make;
}
std::string Vehicle::getModel() const{
    return m_model;
}
int Vehicle::getYear() const{
    return m_year;
}

double Vehicle::getPrice() const{
    return m_price; 
}
Engine Vehicle::getEngine() const{
    return m_engine;
}

void displayOutput(const Vehicle& vehicle) {
    std::cout << "\nMake: " << vehicle.m_make
         << "\nModel: " << vehicle.m_model
         << "\nYear: " << vehicle.m_year
         << std::fixed << std::setprecision(2) << "\nPrice: " << vehicle.m_price
         << "\nEngine Type: " << engineTypeToString(vehicle.m_engine.getEngineType())
         << "\nEngine Capacity: " << vehicle.m_engine.getCapacity() << std::endl;
}

TouristVehicle::TouristVehicle(std::string make, std::string model, int year, double price, Engine engine, int seats, std::string transmission)
    : Vehicle(make, model, year, price, engine), m_seats(seats), m_transmission(transmission) {
    if (seats <= 0) { 
        throw std::invalid_argument("Number of seats must be greater than zero.");
    }
    if (transmission.empty()) { 
        throw std::invalid_argument("Transmission type cannot be empty.");
    }
}

double TouristVehicle::calculateMileage() const {
    if (m_engine.getCapacity() == 0)
        throw std::runtime_error("Engine capacity cannot be zero.");
    return 100.0 / m_engine.getCapacity();
}
    
void TouristVehicle::printDetails() const {
    displayOutput(*this); 
    std::cout << "Seats: " << m_seats
             << "\nTransmission: " << m_transmission
             << "\nMileage: " << calculateMileage() << " km/l" << std::endl;
    std::cout << "---------------------------" << std::endl;
}

PrivateVehicle::PrivateVehicle(std::string make, std::string model, int year, double price, Engine engine, int doors, std::string transmission)
    : Vehicle(make, model, year, price, engine), m_doors(doors), m_transmission(transmission) {
    if (doors <= 0) {
        throw std::invalid_argument("Number of doors must be greater than zero.");
    }
    if (transmission.empty()) {
        throw std::invalid_argument("Transmission type cannot be empty.");
    }
}

double PrivateVehicle::calculateMileage()  const{
    if (m_engine.getCapacity() == 0)
        throw std::runtime_error("Engine capacity cannot be zero.");
    return 120.0 / m_engine.getCapacity();  
}

void PrivateVehicle::printDetails() const  {
    displayOutput(*this); 
    std::cout << "Doors: " << m_doors
         << "\nTransmission: " << m_transmission
         << "\nMileage: " << calculateMileage() << " km/l" << std::endl;
    std::cout << "---------------------------" << std::endl;
}

double calculateTotalPrice(const std::vector<Vehicle*>& vehicles){
    if (vehicles.empty()) {
        throw std::runtime_error("The vehicle list is empty. Cannot calculate the total price.");
    }

    double totalPrice = 0.0;
    for(const auto& vehicle : vehicles){
        totalPrice += vehicle->getPrice();
    }
    return totalPrice;
}

