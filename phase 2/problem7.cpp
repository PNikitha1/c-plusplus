#include <iostream>
#include<vector>
#include<algorithm>
using namespace std;

class Vehicle{
    
    protected:
    int m_vehicleId;
    string m_make;
    string m_model;
    double m_price;
    double m_mileage;
   
    public:
    Vehicle( int vehicleId, string make, string model, double price, double mileage):
    m_vehicleId(vehicleId), m_make(make), m_model(model), m_price(price), m_mileage(mileage) { }
    
    virtual ~Vehicle(){    }
    
    virtual void displayDetails() const{
       cout << "Vehicle Id : " << m_vehicleId << endl;
       cout << "Make : " << m_make << endl;
       cout << "Model : " << m_model << endl;
       cout << "Price : " << m_price << endl;
       cout << "Mileage : " << m_mileage << endl;
    }
    
    
    
    int getVehicleId() const{
        return m_vehicleId;
    }
    
    double getPrice() const{
        return m_price;
    }
    
    double getMileage() const{
        return m_mileage;
    }
};

class Car : public Vehicle{
    string m_engineType;
     
    public:
    Car( int vehicleId, string make, string model, double price,double mileage, string engineType): Vehicle(vehicleId, make, model, price,mileage), m_engineType(engineType) { }
    
    void displayDetails() const override{
        Vehicle::displayDetails();
        cout << "Engine Type : " << m_engineType << endl;
        cout << "--------------------------------------" << endl;
    }
    
};

class Truck : public Vehicle{
    double m_payloadCapacity;
     
    public:
    Truck( int vehicleId, string make, string model,double price, double mileage, double payloadCapacity): Vehicle(vehicleId, make, model, price, mileage), m_payloadCapacity(payloadCapacity) { }
    
    void displayDetails() const override{
        Vehicle::displayDetails();
        cout << "Payload Capacity : " << m_payloadCapacity << endl;
        cout << "--------------------------------------" << endl;
    }
    
};

void displayVehicleDetails(const vector<Vehicle*>& vehicles){
    for(const auto& vehicle : vehicles){
        vehicle -> displayDetails();
    }
}

double calculateTotalMileage(const vector<Vehicle*>& vehicles){
    double totalMileage = 0;
    for(const auto& vehicle: vehicles){
        totalMileage += vehicle->getMileage();
    }
    return totalMileage;
}

void sortVehiclesByPrice(vector<Vehicle*>& vehicles){
    sort(vehicles.begin(), vehicles.end(), [](Vehicle* a, Vehicle* b){
        return a->getPrice() > b->getPrice();
    });
}

void searchVehiclesByvehicleId(const vector<Vehicle*>& vehicles, int vehicleId){
    for(const auto& vehicle : vehicles){
        if(vehicle->getVehicleId() == vehicleId){
            cout << "Vehicle Found : " << endl;
            vehicle->displayDetails();
            return;
        }
    }
    cout << "Vehicle with ID " << vehicleId << " not found." << endl;
}

int main()
{
    Car car1(1001, "Toyota", "Corolla", 25000, 60.0, "Hybrid");
    Car car2(1002, "Honda", "Civic", 24000, 45, "Petrol");
    Truck truck1(2001, "Ford", "F-150", 35000, 75, 5.0);
    Truck truck2(2002, "Volvo", "FH16", 80000, 100, 10.0);
    Truck truck3(2003, "MAN", "TGX", 75000, 120, 12.0);

    //Vehicle** vehicles = new Vehicle*[NUM_VEHICLEs]
    //car1 = new Car(/*  /*)
    //vehicles[0]=car1;
    //car2= new Car
    //vehicles[1]=cae2;
    //truck1 = new Truck
    //vehicles[2]=truck1
    
    vector<Vehicle*> vehicle= {&car1, &car2, &truck1, &truck2, &truck3};
    
    double totalMileage = calculateTotalMileage(vehicle);
    cout << "The total Mileage : " << totalMileage << endl;
    
    cout << "\nSorting Vehicles by Price (Descending Order):" << endl;
    sortVehiclesByPrice(vehicle);
    displayVehicleDetails(vehicle);
    
    cout << "\nSearching for Vehicle with ID 1002:" << endl;
    searchVehiclesByvehicleId(vehicle, 1002);
    
    return 0;
}