#include<vector>
#include <iostream>
#include<string>
#include<iomanip>
using namespace std;

enum EngineType{
    PETROL,
    DIESEL,
    ELECTRIC,
    HYBRID
};

string engineTypeToString(EngineType type) {
    switch (type) {
        case PETROL: return "Petrol";
        case DIESEL: return "Diesel";
        case ELECTRIC: return "Electric";
        case HYBRID: return "Hybrid"; 
        default: return "Unknown";
    }
}
class Engine{
    private:
    EngineType m_engineType;
    double m_capacity;
    
    public:
    Engine(): m_engineType(PETROL), m_capacity(0){ }
    Engine(EngineType engineType, double capacity):
    m_engineType(engineType), m_capacity(capacity){ }
    
    EngineType getEngineType() const{
        return m_engineType;
    }
    
    double getCapacity() const{
        return m_capacity;
    }
};

class Vehicle{
    protected:
    string m_make;
    string m_model;
    int m_year;
    double m_price;
    Engine m_engine;
    
    public:
    Vehicle(string make,string model, int year,double price, Engine engine):
    m_make(make), m_model(model), m_year(year), m_price(price), m_engine(engine){ }
    
    virtual double calculateMileage() const = 0;
    virtual void printDetails() const = 0; 

    friend void displayOutput(const Vehicle& vehicle);

    string getMake() const{
        return m_make;
    }
    string getModel() const{
        return m_model;
    }
    int getYear() const{
        return m_year;
    }
    
    double getPrice() const{
        return m_price; 
    }
    Engine getEngine() const{
        return m_engine;
    }
    
};

void displayOutput(const Vehicle& vehicle) {
    cout << "\nMake: " << vehicle.m_make
         << "\nModel: " << vehicle.m_model
         << "\nYear: " << vehicle.m_year
         << fixed << setprecision(2) << "\nPrice: " << vehicle.m_price
         << "\nEngine Type: " << engineTypeToString(vehicle.m_engine.getEngineType())
         << "\nEngine Capacity: " << vehicle.m_engine.getCapacity() << endl;
}

class TouristVehicle: public Vehicle{
    int m_seats;
    string m_transmission;
    
    public:
    TouristVehicle(string make,string model, int year,double price, Engine engine,int seats,string transmission):
    Vehicle(make, model,year,price, engine),m_seats(seats),m_transmission(transmission){}
    double calculateMileage() const {
    return 100.0 / m_engine.getCapacity(); 
    }
    
    void printDetails() const {
        displayOutput(*this); 
        cout << "Seats: " << m_seats
             << "\nTransmission: " << m_transmission
             << "\nMileage: " << calculateMileage() << " km/l" << endl;
        cout << "---------------------------" << endl;
    }

};

class PrivateVehicle: public Vehicle{
    int m_doors;
    string m_transmission;
    
    public:
    PrivateVehicle(string make,string model, int year,double price, Engine engine,int doors,string transmission):
    Vehicle(make, model,year,price,engine),m_doors(doors),m_transmission(transmission){}
    double calculateMileage()  const{
    return 120.0 / m_engine.getCapacity();  
    }
    
     void printDetails() const  {
        displayOutput(*this); 
        cout << "Doors: " << m_doors
             << "\nTransmission: " << m_transmission
             << "\nMileage: " << calculateMileage() << " km/l" << endl;
        cout << "---------------------------" << endl;
    }

};
double calculateTotalPrice(const vector<Vehicle*>& vehicles){
    double totalPrice = 0.0;
    for(const auto& vehicle : vehicles){
        totalPrice += vehicle->getPrice();
    }
    return totalPrice;
}

int main()
{
    Engine engine1(PETROL, 1.5);

    TouristVehicle t("Toyota", "Innova", 2020, 2000000, engine1, 7, "Automatic");
    t.printDetails();

    PrivateVehicle p("Honda", "Civic", 2021, 1800000, engine1, 4, "Manual");
    p.printDetails();

    vector<Vehicle*> vehicle={&t, &p};
    double totalPrice = calculateTotalPrice(vehicle);
    cout << fixed << setprecision(2) <<"Total price : " << totalPrice << endl;
    return 0;
}