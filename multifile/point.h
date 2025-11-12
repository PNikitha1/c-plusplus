#ifndef __POINT_H
#define __POINT_H
#include<string>

class Point{
    int x;
    int y;
    public:
    Point(int,int);
    Point(int);
    Point();
    int getXValue() const;
    int getYValue() const;
    double distanceFromOrigin() const;
    std::string quadrant();
    bool isOrigin();
};

#endif
