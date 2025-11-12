#include "vehicle.h"
#include <iostream>
#include <stdexcept>
#include <vector>
#include <iomanip>

int main() {
    try {
        Engine engine1(PETROL, 1.5);

        TouristVehicle t("Toyota", "Innova", 2020, 2000000, engine1, 7, "Automatic");
        t.printDetails();

        PrivateVehicle p("Honda", "Civic", 2021, 1800000, engine1, 4, "Manual");
        p.printDetails();

        std::vector<Vehicle*> vehicle = {&t, &p};

        double totalPrice = calculateTotalPrice(vehicle);
        std::cout << std::fixed << std::setprecision(2) << "Total price: " << totalPrice << std::endl;
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