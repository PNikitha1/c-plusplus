#include "routeplanner.h"
#include "vehicle.h"

int main() {
    // Create specific vehicles
    Vehicle car("Car");
    Vehicle truck("Truck");
    Vehicle motorcycle("Motorcycle");

    // Create RoutePlanner for different vehicles
    RoutePlanner<Vehicle> carRoutePlanner(car);
    RoutePlanner<Vehicle> truckRoutePlanner(truck);
    RoutePlanner<Vehicle> motorcycleRoutePlanner(motorcycle);

    // Plan routes for the car
    carRoutePlanner.addWaypoint("Start Point");
    carRoutePlanner.addWaypoint("Traffic Light");
    carRoutePlanner.addWaypoint("Destination");
    carRoutePlanner.displayRoute();
    carRoutePlanner.calculateRoute("Moderate Traffic", "Clear Road");

    // Plan routes for the truck
    truckRoutePlanner.addWaypoint("Depot");
    truckRoutePlanner.addWaypoint("Highway");
    truckRoutePlanner.addWaypoint("Warehouse");
    truckRoutePlanner.displayRoute();
    truckRoutePlanner.calculateRoute("Heavy Traffic", "Rough Road");

    // Plan routes for the motorcycle
    motorcycleRoutePlanner.addWaypoint("Home");
    motorcycleRoutePlanner.addWaypoint("Park");
    motorcycleRoutePlanner.addWaypoint("Cafe");
    motorcycleRoutePlanner.displayRoute();
    motorcycleRoutePlanner.calculateRoute("Light Traffic", "Smooth Road");

    return 0;
}