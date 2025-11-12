#include<iostream>
#include "electricvehicle.h"
#include<stdexcept> // For exception handling

int main()
{
    try {
        ElectricVehicle ev1(12345, "Tesla", "Model 3", 75.0, 50.0);
        ElectricVehicle ev2(67890, "Nissan", "Leaf", 60.0, 30.0);

        // Charging and driving the first EV
        ev1.charge(2); 
        ev1.drive(100); 
        
        // Charging and driving the second EV
        ev2.charge(1.5); 
        ev2.drive(50); 
        
        std::cout << "Displaying the details of both objects: " << std::endl;
        ev1.displaydetails();
        ev2.displaydetails();
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