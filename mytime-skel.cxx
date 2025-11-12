#include<iostream>
class MyTime
{
    int m_hours;
    int m_minutes;
    public:
    //MyTime()=default;//C++11 feature
    MyTime():m_hours(0),m_minutes(0) { }
    MyTime(int hours,int minutes):m_hours(hours),m_minutes(minutes){ }
    MyTime(int hours):m_hours(hours),m_minutes(0) { }
    MyTime operator+(const MyTime& rhs)
    {
        int thour,tminutes;
        thour = m_hours + rhs.m_hours;
        tminutes = m_minutes + rhs.m_minutes;
        if(tminutes > 60){
            thour += 1;
            tminutes %= 60;
        }
        return MyTime(thour,tminutes);
    }
    bool operator==(const MyTime& rhs){
        return m_hours == rhs.m_hours && m_minutes == rhs.m_minutes;
    }
    MyTime operator+(int minutes){
        int thours,tminutes;

        tminutes = m_minutes + minutes;
        if(tminutes > 60){
            thours = m_hours + 1;
            tminutes %= 60;
        }
        return MyTime(thours,tminutes);
    }
    void printTime() const
    {
        std::cout << m_hours << ":" << m_minutes << "\n";
    }
};
int main()
{
    MyTime t1(10,20);
    MyTime t2(1,50);
    MyTime t3;
    t3= t1+t2;
    MyTime t4(8);       //8:00
    t3.printTime();
    
    MyTime t6;
    t6 = t1 + 25;
    t6.printTime();
    MyTime t5(10,20);
    if(t1 == t5){
        std::cout<<"YES\n";
    }
}