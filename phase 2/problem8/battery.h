#ifndef __BATTERY_H__
#define __BATTERY_H__
#include<iostream>
#include<string>

class Battery{
    double m_capacity;
    double m_chargeLevel;
    double m_voltage;
    double m_temperature;
    
    public:
    Battery();
    virtual ~Battery() ;
    void charge(double hours);
    void discharge(double hours);
    double getCapacity();    
    double getChargeLevel();
    double getVoltage();
    double getTemperature();
    friend std::istream &operator>>( std::istream  &input, Battery &b );
    friend std::ostream &operator<<( std::ostream &output, const Battery &b );
    Battery* operator->();
    void operator++();
    void operator--();
    void operator=(const Battery& b);
    Battery* operator*();
    double& operator[](const std::string& parameter); 
};

#endif