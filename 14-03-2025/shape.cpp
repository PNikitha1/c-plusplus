class Shape{
    public:
    //  virtual double area(){return 0;}
    //  virtual double circumference(){return 0;}
    //another method of the calling the function
    virtual double area()=0;
     virtual double circumference()=0;
};

class Circle: public Shape{
    double PI=3.14;
    int m_radius;
    public:
    Circle(int radius): m_radius(radius){}
    double area(){ return PI * m_radius * m_radius;}
    double circumference(){
        return 2 * m_radius * PI;
    }
};

class Polygon: public Shape{
    int m_sides;
    public:
    Polygon(int sides):m_sides(sides){}
};

class Rectangle: public Polygon{
    int m_length;
    int m_breadth;
    public:
    Rectangle(int length,int breadth): Polygon(4),m_length(length),m_breadth(breadth){}
    double area(){return m_length * m_breadth;}
    double circumference(){return 2 * ( m_breadth + m_length );}
};

class Triangle: public Polygon{
    int m_length;
    int m_height;

};

int main(){
    Circle c1(15);
    Shape *p1=&c1;
    Shape &ref=c1;
    

}