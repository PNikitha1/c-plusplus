#include<iostream>
#include"point.h"

int main()
{
    int x,y;
    std::cin >> x >> y;
    Point p1(x,y);
    std::cout << p1.getXValue() << "," << p1.getYValue() << "\n";
    std::cout << p1.distanceFromOrigin() << "\n";
    std::cout << p1.quadrant() << "\n";
    std::cout << p1.isOrigin() << "\n";
    
    std::cin >> x;
    Point p2(x);
    std::cout << p2.getXValue() << "," << p2.getYValue() << "\n";
    std::cout << p2.distanceFromOrigin() << "\n";
    std::cout << p2.quadrant() << "\n";
    std::cout << p2.isOrigin() << "\n";
    
    Point p3;
    std::cout << p3.getXValue() << "," << p3.getYValue() << "\n";
    std::cout << p3.distanceFromOrigin() << "\n";
    std::cout << p3.quadrant() << "\n";
    std::cout << p3.isOrigin() << "\n";
    
    std::cin >> y;
    Point p4(0,y);
    std::cout << p4.getXValue() << "," << p4.getYValue() << "\n";
    std::cout << p4.distanceFromOrigin() << "\n";
    std::cout << p4.quadrant() << "\n";
    std::cout << p4.isOrigin() << "\n";
    return 0;
}