#include <iostream>
using namespace std;

class ElectricVehicle{
    int m_vehicleId;
    string m_make;
    string m_model;
    double m_batteryCapacity;
    double m_chargeLevel;
    
    public:
    ElectricVehicle(int vehicleId, string make, string model, double batteryCapacity, double chargeLevel): m_vehicleId(vehicleId), m_make(make), m_model(model), m_batteryCapacity(batteryCapacity), m_chargeLevel(chargeLevel) { }
   
   void charge(double hours) {
    const double chargeRate = 10.0; 
    double addedCharge = hours * chargeRate;
    m_chargeLevel = min(m_chargeLevel + addedCharge, m_batteryCapacity);
    }

    void drive(double miles) {
        const double milesPerKWh = 4.0; 
        double requiredCharge = miles / milesPerKWh;
        if (m_chargeLevel >= requiredCharge) {
        m_chargeLevel -= requiredCharge;
        } else {
        cout << "Not enough charge to drive " << miles << " miles. Shutting down." << endl;
        }
    }

    void displaydetails() const{
        cout << "Vehicle Id : " << m_vehicleId << endl;
        cout << "Make : " << m_make << endl;
        cout << "Model : " << m_model << endl;
        cout << "Battery Capacity : " << m_batteryCapacity << " kWh" << endl;
        cout << "Charge Level     : " << m_chargeLevel << " kWh" << endl;
        cout << "----------------------------" << endl;
    }
    
};

int main()
{
    ElectricVehicle ev1(12345, "Tesla", "Model 3", 100.0, 50.0);
    ElectricVehicle ev2(67890, "Nissan", "Leaf", 60.0, 30.0);
    
    ev1.charge(6);
    ev1.drive(100);
    
    ev2.charge(1.5);
    ev2.drive(50);
    
    cout << "DIsplaying the details of both object : " << endl;
    ev1.displaydetails();
    ev2.displaydetails();
    
    return 0;
}