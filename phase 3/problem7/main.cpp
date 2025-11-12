#include <iostream>
#include "vehicle.h"
#include <vector>
#include <stdexcept>

int main()
{
    try {
        Car car1(1001, "Toyota", "Corolla", 25000, 60.0, "Hybrid");
        Car car2(1002, "Honda", "Civic", 24000, 45.0, "Petrol");
        Truck truck1(2001, "Ford", "F-150", 35000, 75.0, 5.0);
        Truck truck2(2002, "Volvo", "FH16", 80000, 100.0, 10.0);
        Truck truck3(2003, "MAN", "TGX", 75000, 120.0, 12.0);
        
        std::vector<Vehicle*> vehicles = {&car1, &car2, &truck1, &truck2, &truck3};
        
        // Calculate total mileage
        double totalMileage = calculateTotalMileage(vehicles);
        std::cout << "The total Mileage: " << totalMileage << " MPG" << std::endl;

        // Sort and display vehicles by price
        std::cout << "\nSorting Vehicles by Price (Descending Order):" << std::endl;
        sortVehiclesByPrice(vehicles);
        displayVehicleDetails(vehicles);

        // Search for vehicles by ID
        std::cout << "\nSearching for Vehicle with ID 1002:" << std::endl;
        searchVehiclesByvehicleId(vehicles, 1002);

        std::cout << "\nSearching for Vehicle with ID 3001:" << std::endl;
        searchVehiclesByvehicleId(vehicles, 3001);
    }
    catch (const std::invalid_argument& e) {
        std::cerr << "Invalid argument error: " << e.what() << std::endl;
    }
    catch (const std::runtime_error& e) {
        std::cerr << "Runtime error: " << e.what() << std::endl;
    }
    catch (...) {
        std::cerr << "An unknown error occurred!" << std::endl;
    }

    return 0;
}