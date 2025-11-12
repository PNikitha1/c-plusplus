#include "box.h"
#include<iostream>
// Constructor
Box::Box(int length, int breadth, int height) {
    m_length = length;
    m_breadth = breadth;
    m_height = height;
}

// Copy Constructor
Box::Box(Box& ref) {
    m_length = ref.m_length;
    m_breadth = ref.m_breadth;
    m_height = ref.m_height;
}
int Box::computeVolume() const{
    return m_length * m_breadth * m_height;
}
void Box::updateDimensions(int scale){
    m_length *= scale;
    m_breadth *= scale;
    m_height *= scale;
}
void Box::display() const{
    std::cout<<m_length<<'\n';
    std::cout<<m_breadth<<'\n';
    std::cout<<m_height<<'\n';
}