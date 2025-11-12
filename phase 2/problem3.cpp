#include <iostream>
#include<iomanip>
#include<cmath>
using namespace std;

double calculateArea(double radius){
    return M_PI * radius * radius;
}

double calculateArea(double length, double breadth){
    return breadth * length;
}

double calculateArea(double side1, double side2, double side3){
    double S = (side1 + side2 + side3) / 2;
    return sqrt(S * (S - side1) * (S - side2) * (S - side3));
}

int main() {
    
    double radius, length, breadth, side1, side2, side3;
    
    cout << "Enter the radius of the circle: ";
    cin >> radius;
    double Circle = calculateArea(radius);
    cout << fixed << setprecision(5) << "Area of the Circle: " << Circle << endl;
    
    cout << "Enter the length and breadth of the rectangle: ";
    cin >> length >> breadth;
    double Rectangle = calculateArea(length, breadth);
    cout << fixed << setprecision(2) << "Area of the Rectangle: " << Rectangle << endl;
    
    cout << "Enter the three sides of the triangle: ";
    cin >> side1 >> side2 >> side3;
    double Triangle = calculateArea(side1, side2, side3);
    cout << fixed << setprecision(5) << "Area of the Triangle: " << Triangle << endl;

    return 0;
}