#include "vehicle.h"
#include <iostream>
#include <stdexcept>

int main() {
    try {
        // Create ElectricCar object with valid parameters
        ElectricCar car("Tesla", "Model 3", 2023, "Red", 100, 50, 35.0);

        // Create ElectricTruck object with valid parameters
        ElectricTruck truck("Ford", "F-150", 2019, 1000, 100, 65, 60.0);

        std::cout << "Display Details: " << std::endl;
        truck.displayDetails();
        car.displayDetails();
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