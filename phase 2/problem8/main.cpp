#include "battery.h"

int main(){
    Battery battery1;
    
    std::cout << "Enter battery details (capacity chargeLevel voltage temperature): ";
    std::cin >> battery1;
    
    ++battery1;
    std::cout << "\nAfter incrementing the charge Level:"<< std::endl;
    std::cout << battery1;
    
    --battery1;
    std::cout << "\nAfter decrementing the charge Level:" << std::endl;
    std::cout<<battery1;
    
    Battery* batteryPtr = *battery1;
    std::cout << "\nAccessed battery object using * operator:" << std::endl;
    std::cout << *batteryPtr;
    
    battery1->charge(2);
    battery1->discharge(1.5);
    std::cout << "\nAfter charging and discharging:" << std::endl;
    std::cout << battery1;
    
    std::cout << "\nAccessing charge level using []: " << battery1["chargeLevel"] << std::endl;
    
    battery1["temperature"] = 30.5;
    std::cout << "\nModified temperature using [] operator:" << std::endl;
    std::cout << battery1;
    
    Battery battery2=battery1;
    std::cout << "\nCopied battery details using = operator:" << std::endl;
    std::cout << battery2;
}