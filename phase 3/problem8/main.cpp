#include "battery.h"
#include <iostream>
#include <stdexcept> // For exception handling

int main() {
    try {
        Battery battery1;

        std::cout << "Enter battery details (capacity chargeLevel voltage temperature): ";
        std::cin >> battery1;
        if (std::cin.fail()) { 
            throw std::runtime_error("Input error: Failed to read battery details.");
        }

        ++battery1;
        std::cout << "\nAfter incrementing the charge Level:" << std::endl;
        std::cout << battery1;

        --battery1;
        std::cout << "\nAfter decrementing the charge Level:" << std::endl;
        std::cout << battery1;

        Battery* batteryPtr = *battery1;
        std::cout << "\nAccessed battery object using * operator:" << std::endl;
        std::cout << *batteryPtr;

        battery1->charge(2);
        battery1->discharge(1.5);
        std::cout << "\nAfter charging and discharging:" << std::endl;
        std::cout << battery1;

        try {
            std::cout << "\nAccessing charge level using []: " << battery1["chargeLevel"] << std::endl;
            battery1["temperature"] = 30.5;
            std::cout << "\nModified temperature using [] operator:" << std::endl;
            std::cout << battery1;
        } catch (const std::invalid_argument& e) {
            std::cerr << "Error while accessing/modifying battery parameter: " << e.what() << std::endl;
        }

        Battery battery2 = battery1;
        std::cout << "\nCopied battery details using = operator:" << std::endl;
        std::cout << battery2;
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