#ifndef __VEHICLE_H__
#define __VEHICLE_H__
#include<string>
#include<iostream>

class Vehicle{
    protected:
    std::string m_make;
    std::string m_model;
    int m_year;
    
    public:
    Vehicle(std::string make, std::string model, int year);
    virtual void displayDetails() const ;
    virtual ~Vehicle() = 0;
};

class Car: public Vehicle{
    protected:
    std::string m_color;
    
    public:
    Car(std::string make, std::string model, int year, std::string color);
    void displayDetails() const;
};

class Truck: public Vehicle{
    protected:
    double m_payloadCapacity;
    
    public:
    Truck(std::string make, std::string model, int year, double payloadCapacity);
    void displayDetails() const;
};

class Electric{
    protected:
    double m_batteryCapacity;
    double m_chargeLevel;
    
    public:
    Electric(double batteryCapacity, double chargeLevel);
    virtual void displayElectricDetails() const ;
    virtual ~Electric() = 0;
};

class ElectricCar: public Car, public Electric{
    double m_temparature;
    
    public:
    ElectricCar(std::string make, std::string model, int year, std::string color, double batteryCapacity, double chargeLevel, double temparature);
    void displayDetails() const;
};

class ElectricTruck: public Truck, public Electric{
    double m_temparature;
    
    public:
    ElectricTruck(std::string make, std::string model, int year, double payloadCapacity, double batteryCapacity, double chargeLevel, double temparature);
    void displayDetails() const;
};

#endif