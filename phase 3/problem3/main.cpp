#include <iostream>
#include <iomanip>
#include <stdexcept> 
#include "shape.h"

int main(){
    double radius, length, breadth, side1, side2, side3;
    
    try {
        std::cout << "Enter the radius of the circle: ";
        std::cin >> radius;
        if (radius < 0 || std::cin.fail()) {
            throw std::invalid_argument("Invalid radius. Please provide a non-negative number.");
        }
        double Circle = calculateArea(radius);
        std::cout << std::fixed << std::setprecision(5) << "Area of the Circle: " << Circle << std::endl;

        std::cout << "Enter the length and breadth of the rectangle: ";
        std::cin >> length >> breadth;
        if (length < 0 || breadth < 0 || std::cin.fail()) {
            throw std::invalid_argument("Invalid dimensions for the rectangle. Please provide non-negative numbers.");
        }
        double Rectangle = calculateArea(length, breadth);
        std::cout << std::fixed << std::setprecision(2) << "Area of the Rectangle: " << Rectangle << std::endl;

        std::cout << "Enter the three sides of the triangle: ";
        std::cin >> side1 >> side2 >> side3;
        if (side1 <= 0 || side2 <= 0 || side3 <= 0 || std::cin.fail()) {
            throw std::invalid_argument("Invalid sides for the triangle. Please provide positive numbers.");
        }
        double Triangle = calculateArea(side1, side2, side3);
        if (Triangle == -1) {
            std::cout << "The provided sides do not form a valid triangle." << std::endl;
        } else {
            std::cout << std::fixed << std::setprecision(5) << "Area of the Triangle: " << Triangle << std::endl;
        }

    } 
    catch (const std::invalid_argument &e) {
        std::cerr << "Error: " << e.what() << std::endl;
    } 
    catch (...) {
        std::cerr << "An unknown error occurred!" << std::endl;
    }

    return 0;
}