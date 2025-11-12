#include "vehicle.h"

int main(){
    ElectricCar car("Tesla", "Model 3", 2023, "Red", 100, 50, 35.0);
    ElectricTruck truck("Ford", "F-150", 2019, 1000, 100, 65, 60.0);
   
    std::cout << "Display Details : " << std::endl;
    truck.displayDetails();
    car.displayDetails();
    return 0;
}