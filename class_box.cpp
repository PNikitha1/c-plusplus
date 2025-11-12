#include<iostream>
using namespace std;

class Box{
    int m_length;
    int m_breadth;
    int m_height;
    public:
    Box(int length,int breadth,int height){
        this->m_length=length;
        this->m_breadth=breadth;
        this->m_height=height;

    }
    int computeVolume(){
        return m_length * m_breadth * m_height;
    }
    int computeTotalSurfaceArea()
    {
        return 2 * (m_length * m_breadth + 
                    m_breadth * m_height + 
                    m_height * m_length);
    }
    void displayBoxDimensions()
    {
        printf("Length: %d\n", m_length);
        printf("Breadth: %d\n", m_breadth);
        printf("Height: %d\n",m_height);
    }
};

int main(){
    Box b1(10,20,30);
    Box b2(39,21,31);
    int vol=b1.computeVolume();
    printf("%d\n",vol);
    vol=b2.computeVolume();
    printf("%d\n",vol);
    int sur=b1.computeTotalSurfaceArea();
    b1.displayBoxDimensions();
    
    printf("%d\n",sur);

}