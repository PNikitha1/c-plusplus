#ifndef __VEHICLE_H__
#define __VEHICLE_H__
#include<string>
#include<vector>

class Vehicle{
    
    protected:
    int m_vehicleId;
    std::string m_make;
    std::string m_model;
    double m_price;
    double m_mileage;
   
    public:
    Vehicle( int vehicleId, std::string make, std::string model, double price, double mileage);
    virtual ~Vehicle() = 0;
    
    virtual void displayDetails() const = 0;
    int getVehicleId() const;
    
    double getPrice() const;
    
    double getMileage() const;
};

class Car : public Vehicle{
    std::string m_engineType;
     
    public:
    Car( int vehicleId, std::string make, std::string model, double price,double mileage, std::string engineType);
    void displayDetails() const;
};

class Truck : public Vehicle{
    double m_payloadCapacity;
     
    public:
    Truck( int vehicleId, std::string make, std::string model,double price, double mileage, double payloadCapacity);
    void displayDetails() const;
};

void displayVehicleDetails(const std::vector<Vehicle*>& vehicles);
double calculateTotalMileage(const std::vector<Vehicle*>& vehicles);
void sortVehiclesByPrice(std::vector<Vehicle*>& vehicles);
void searchVehiclesByvehicleId(const std::vector<Vehicle*>& vehicles, int vehicleId);

#endif