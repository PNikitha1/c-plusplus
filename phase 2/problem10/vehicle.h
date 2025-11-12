#ifndef __VEHICLE_H__
#define __VEHICLE_H__
#include<vector>
#include <iostream>
#include<string>
#include<iomanip>

enum EngineType{
    PETROL,
    DIESEL,
    ELECTRIC,
    HYBRID
};

std::string engineTypeToString(EngineType type);

class Engine{
    private:
    EngineType m_engineType;
    double m_capacity;
    
    public:
    Engine();
    Engine(EngineType engineType, double capacity);
    EngineType getEngineType() const;
    double getCapacity() const;
};

class Vehicle{
    protected:
    std::string m_make;
    std::string m_model;
    int m_year;
    double m_price;
    Engine m_engine;
    
    public:
    Vehicle(std::string make, std::string model, int year,double price, Engine engine);
    virtual double calculateMileage() const = 0;
    virtual void printDetails() const = 0; 
    friend void displayOutput(const Vehicle& vehicle);
    std::string getMake() const;
    std::string getModel() const;
    int getYear() const;
    double getPrice() const;
    Engine getEngine() const;
};


class TouristVehicle: public Vehicle{
    int m_seats;
    std::string m_transmission;
    
    public:
    TouristVehicle(std::string make, std::string model, int year, double price, Engine engine, int seats, std::string transmission);
    double calculateMileage() const;
    void printDetails() const;
};

class PrivateVehicle: public Vehicle{
    int m_doors;
    std::string m_transmission;
    
    public:
    PrivateVehicle(std::string make, std::string model, int year, double price, Engine engine, int doors, std::string transmission);
    double calculateMileage() const;
    void printDetails() const;
};

double calculateTotalPrice(const std::vector<Vehicle*>& vehicles);


#endif