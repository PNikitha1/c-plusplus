#include<iostream>
class Complex
{
    double m_real;
    double m_imag;
    public:
    //Complex()=default;       //OK, from C++11
    Complex():m_real(0),m_imag(0) { }
    Complex(double real,double imag):m_real(real),m_imag(imag) { }
    Complex operator+(const Complex& rhs)
    {
        double treal,timag;
        treal = m_real + rhs.m_real; //this->m_real + rhs.real
        timag = m_imag + rhs.m_imag;
        //Complex tempResult(treal,timag);
        //return tempResult;
        return Complex(treal,timag);
    }
    bool operator==(const Complex& rhs)
    {
        return m_real == rhs.m_real && m_imag == rhs.m_imag;
    }
    void display()
    {
        std::cout << m_real << "+" << m_imag << "i" << "\n";
    }
};
int main()
{
    Complex c1(2,3);    //2+3i
    Complex c2(1,4);    //1+4j
    Complex c3,c4,c5;
    c3 = c1 + c2;       // c1.operator+(c2)
    //c4 = c1 - c2;       // c1.operator-(c2)
    //c5 = c1 * c2;       // c1.operator*(c2)
    c3.display();

    Complex c6(2,3);
    Complex c7(4,7);
    if(c1==c6)          // c1.operator==(c6)
        std::cout << "Yes\n";
    else    
        std::cout << "No\n";
    //c1==c7)
    
    return 0;
}