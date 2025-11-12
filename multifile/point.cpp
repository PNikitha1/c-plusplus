#include "point.h"
#include <cmath>
#include<string>

Point::Point(int x,int y){
    this->x=x;
    this->y=y;
}
Point::Point(int x){
    this->x=x;
    this->y=0;
}
Point::Point(){
    this->x=0;
    this->y=0;
}
int Point::getXValue() const{
    return this->x;
}
int Point::getYValue() const{
    return this->y;
}

double Point::distanceFromOrigin() const{
    return sqrt((this->x * this->x)+(this->y * this->y));
}
std::string Point::quadrant(){
    if(x>0 && y>0)
        return "Q1";
    else if(x<0 && y>0)
        return "Q2";
    else if(x<0 && y<0)
        return "Q3";
    else if(x>0 && y<0)
        return "Q4";
    else
        return "None";
}

bool Point::isOrigin(){
    return (x == 0) && (y == 0);
}