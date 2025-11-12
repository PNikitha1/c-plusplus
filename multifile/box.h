#ifndef __BOX_H
#define __BOX_H

class Box {
    int m_length;
    int m_breadth;
    int m_height;
public:
    Box(int length, int breadth, int height);
    Box(Box& ref);
    int computeVolume() const;
    void updateDimensions(int scale);
    void display() const;
};

#endif
