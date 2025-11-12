#include<iostream>
using namespace std;

class Vehicle{
    protected:
    string m_make;
    string m_model;
    int m_year;
    
    public:
    Vehicle(string make, string model, int year):
     m_make(make), m_model(model), m_year(year) { }
    virtual void displayDetails() const{
        cout << "Make : " << m_make << endl;
        cout << "Model : " << m_model << endl;
        cout << "Year : " << m_year << endl;
    }
    
    virtual ~Vehicle(){
        
    }
    
};

class Car: public Vehicle{
    protected:
    string m_color;
    
    public:
    Car(string make, string model, int year, string color):
    Vehicle(make, model, year), m_color(color) { }
    void displayDetails() const{
        Vehicle:: displayDetails();
        cout << "Color : " << m_color << endl;
        cout << "-------------------------" << endl;
    }
};

class Truck: public Vehicle{
    protected:
    double m_payloadCapacity;
    
    public:
    Truck(string make, string model, int year, double payloadCapacity):
    Vehicle(make, model, year), m_payloadCapacity(payloadCapacity) { }
    void displayDetails() const{
        Vehicle:: displayDetails();
        cout << "Payload Capacity : " << m_payloadCapacity << endl;
        cout << "-------------------------" << endl;
    }
};

class Electric{
    protected:
    double m_batteryCapacity;
    double m_chargeLevel;
    
    public:
    Electric(double batteryCapacity, double chargeLevel):
    m_batteryCapacity(batteryCapacity), m_chargeLevel(chargeLevel) { }
    virtual void displayElectricDetails() const{
        cout << "Battery Capacity : " << m_batteryCapacity << endl;
        cout << "Charge Level : " << m_chargeLevel << endl;
    }
    virtual ~Electric() = default;
    
};

class ElectricCar: public Car, public Electric{
    double m_temparature;
    
    public:
    ElectricCar(string make, string model, int year, string color, double batteryCapacity, double chargeLevel, double temparature):
     Car(make, model, year, color),Electric( batteryCapacity, chargeLevel), m_temparature(temparature) {}
    void displayDetails() const{
        Car::displayDetails();
        Electric::displayElectricDetails();
        cout << "Temparature : " << m_temparature << endl;
        cout << "-------------------------" << endl;
    }
    
};

class ElectricTruck: public Truck, public Electric{
    double m_temparature;
    
    public:
    ElectricTruck(string make, string model, int year, double payloadCapacity, double batteryCapacity, double chargeLevel, double temparature):
     Truck(make, model, year, payloadCapacity),Electric( batteryCapacity, chargeLevel), m_temparature(temparature) {}
    void displayDetails() const{
        Truck::displayDetails();
        Electric::displayElectricDetails();
        cout << "Temparature : " << m_temparature << endl;
        cout << "-------------------------" << endl;
    }
    
};
 
int main(){
    ElectricCar car("Tesla", "Model 3", 2023, "Red", 100, 50, 35.0);
    ElectricTruck truck("Ford", "F-150", 2019, 1000, 100, 65, 60.0);
   
    cout << "Display Details : " << endl;
    truck.displayDetails();
    car.displayDetails();
}