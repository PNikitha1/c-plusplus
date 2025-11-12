#include "battery.h"

Battery::Battery()
    : m_capacity(0), m_chargeLevel(0), m_voltage(0), m_temperature(0) {}
    
void Battery::charge(double hours){
    double reChargeRate = 10 * hours;
    m_chargeLevel = std::min(m_chargeLevel + reChargeRate, m_capacity);
}

Battery::~Battery() { }

void Battery::discharge(double hours){
    double disChargeRate = 12 * hours;
    m_chargeLevel = std::max(m_chargeLevel - disChargeRate,0.0);
}
    
double Battery::getCapacity(){
    return m_capacity;
}
    
double Battery::getChargeLevel(){
    return m_chargeLevel;
}
    
double Battery::getVoltage(){
    return m_voltage;
}
    
double Battery::getTemperature(){
    return m_temperature;
}
    
std::istream &operator>>( std::istream  &input, Battery &b ) 
{ 
    input >> b.m_capacity >> b.m_chargeLevel >> b.m_voltage >> b.m_temperature;
    return input;            
}

std::ostream &operator<<( std::ostream &output, const Battery &b ) 
{ 
    output << "Battery Details:" << std::endl;
    output << "  Capacity       : " << b.m_capacity << " Ah" << std::endl;
    output << "  Charge Level   : " << b.m_chargeLevel << " Ah" << std::endl;
    output << "  Voltage        : " << b.m_voltage << " V" << std::endl;
    output << "  Temperature    : " << b.m_temperature << " C" << std::endl;
    return output;            
}
    
Battery* Battery::operator->(){
    return this;
}
    
void Battery::operator++(){
    m_chargeLevel = std::min(m_chargeLevel + 1, m_capacity);
}

void Battery::operator--(){
    m_chargeLevel = std::max(m_chargeLevel - 1, 0.0);
}

void Battery::operator=(const Battery& b){
    m_capacity=b.m_capacity;
    m_chargeLevel=b.m_chargeLevel;
    m_voltage=b.m_voltage;
    m_temperature=b.m_temperature;
}
    
Battery* Battery::operator*() {
    return this; 
}
    
double& Battery::operator[](const std::string& parameter){
    if(parameter == "capacity")
        return m_capacity;
    else if(parameter == "chargeLevel")
        return m_chargeLevel;
    else if(parameter == "voltage")
        return m_voltage;
    else if(parameter == "temperature")
        return m_temperature;
    else{
        throw std::invalid_argument("Invalid parameter");
    }    
}