#include<iostream>
#include "electricvehicle.h"

int main()
{
    ElectricVehicle ev1(12345, "Tesla", "Model 3", 75.0, 50.0);
    ElectricVehicle ev2(67890, "Nissan", "Leaf", 60.0, 30.0);
    
    ev1.charge(2);
    ev1.drive(100);
    
    ev2.charge(1.5);
    ev2.drive(50);
    
    std::cout << "DIsplaying the details of both object : " << std::endl;
    ev1.displaydetails();
    ev2.displaydetails();
    
    return 0;
}