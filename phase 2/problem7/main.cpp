#include<iostream>
#include "vehicle.h"
#include<vector>

int main()
{
    Car car1(1001, "Toyota", "Corolla", 25000, 60.0, "Hybrid");
    Car car2(1002, "Honda", "Civic", 24000, 45, "Petrol");
    Truck truck1(2001, "Ford", "F-150", 35000, 75, 5.0);
    Truck truck2(2002, "Volvo", "FH16", 80000, 100, 10.0);
    Truck truck3(2003, "MAN", "TGX", 75000, 120, 12.0);
    
    std::vector<Vehicle*> vehicle= {&car1, &car2, &truck1, &truck2, &truck3};
    
    double totalMileage = calculateTotalMileage(vehicle);
    std::cout << "The total Mileage : " << totalMileage << std::endl;
    
    std::cout << "\nSorting Vehicles by Price (Descending Order):" << std::endl;
    sortVehiclesByPrice(vehicle);
    displayVehicleDetails(vehicle);
    
    std::cout << "\nSearching for Vehicle with ID 1002:" << std::endl;
    searchVehiclesByvehicleId(vehicle, 1002);

    std::cout << "\nSearching for Vehicle with ID 3001:" << std::endl;
    searchVehiclesByvehicleId(vehicle, 3001);
    
    return 0;
}