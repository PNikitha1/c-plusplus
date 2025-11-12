#include "shape.h"

double calculateArea(double radius){
    return M_PI * radius * radius;
}

double calculateArea(double length, double breadth){
    return breadth * length;
}

double calculateArea(double side1, double side2, double side3){
    if (side1 + side2 <= side3 || side1 + side3 <= side2 || side2 + side3 <= side1) {
        return -1; // Returning -1 for invalid triangles
    }
        
    double S = (side1 + side2 + side3) / 2;
    return sqrt(S * (S - side1) * (S - side2) * (S - side3));
}