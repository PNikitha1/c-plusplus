#ifndef __ROUTE_PLANNER_H__
#define __ROUTE_PLANNER_H__

#include <iostream>
#include <string>
#include <vector>

template <typename VehicleType>
class RoutePlanner {
private:
    std::vector<std::string> route;  
    VehicleType vehicle;           

public:
    RoutePlanner(const VehicleType& vehicle) : vehicle(vehicle) {}

    void addWaypoint(const std::string& waypoint) {
        route.push_back(waypoint);
    }

    void displayRoute() const {
        std::cout << "Planned Route for " << vehicle.getVehicleType() << ":" << std::endl;
        for (const auto& waypoint : route) {
            std::cout << "- " << waypoint << std::endl;
        }
    }

    template <typename Traffic, typename RoadCondition>
    void calculateRoute(const Traffic& trafficPattern, const RoadCondition& roadCondition) {
        std::cout << "Calculating route for " << vehicle.getVehicleType() << "..." << std::endl;
        std::cout << "Traffic Pattern: " << trafficPattern << std::endl;
        std::cout << "Road Condition: " << roadCondition << std::endl;
    }
};

#endif