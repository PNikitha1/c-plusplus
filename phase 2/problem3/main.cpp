#include <iostream>
#include<iomanip>
#include "shape.h"

int main(){
    double radius, length, breadth, side1, side2, side3;
    
    std::cout << "Enter the radius of the circle: ";
    std::cin >> radius;
    double Circle = calculateArea(radius);
    std::cout << std::fixed << std::setprecision(5) << "Area of the Circle: " << Circle << std::endl;
    
    std::cout << "Enter the length and breadth of the rectangle: ";
    std::cin >> length >> breadth;
    double Rectangle = calculateArea(length, breadth);
    std::cout << std::fixed << std::setprecision(2) << "Area of the Rectangle: " << Rectangle << std::endl;
    
    std::cout << "Enter the three sides of the triangle: ";
    std::cin >> side1 >> side2 >> side3;
    double Triangle = calculateArea(side1, side2, side3);
    if (Triangle == -1) {
        std::cout << "The provided sides do not form a valid triangle." << std::endl;
    } else {
        std::cout << std::fixed << std::setprecision(5) << "Area of the Triangle: " << Triangle << std::endl;
    }
    
    return 0;
}