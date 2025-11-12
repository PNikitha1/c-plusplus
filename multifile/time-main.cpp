#include <iostream>
#include "time.h"

int main() {
    int h, m, s, ns;
    std::string tstr;
    
    std::cin >> h >> m >> s;
    MyTime t1(h, m, s);
    
    std::cin >> ns;
    MyTime t2(ns);
    
    std::cin >> tstr;
    MyTime t3(tstr);
    
    std::cout << t1.hours() << "," << t1.minutes() << "," << t1.seconds() << "\n";
    std::cout << t2.hours() << "," << t2.minutes() << "," << t2.seconds() << "\n";
    std::cout << t3.hours() << "," << t3.minutes() << "," << t3.seconds() << "\n";
    
    std::cout << t1.timestr() << "\n";
    std::cout << t2.timestr() << "\n";
    std::cout << t3.timestr() << "\n";
    
    std::cout << t1.elapsed() << "\n";
    std::cout << t2.elapsed() << "\n";
    std::cout << t3.elapsed() << "\n";
    
    return 0;
}
