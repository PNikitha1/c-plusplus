#include<iostream>
using namespace std;

class Battery{
    double m_capacity;
    double m_chargeLevel;
    double m_voltage;
    double m_temperature;
    
    public:
    Battery()
        : m_capacity(0), m_chargeLevel(0), m_voltage(0), m_temperature(0) {}
    
    void charge(double hours){
        double reChargeRate = 10 * hours;
        m_chargeLevel = min(m_chargeLevel + reChargeRate, m_capacity);
    }
    void discharge(double hours){
        double disChargeRate = 12 * hours;
        m_chargeLevel = max(m_chargeLevel - disChargeRate,0.0);
    }
    
    double getCapacity(){
        return m_capacity;
    }
    
    double getChargeLevel(){
        return m_chargeLevel;
    }
    
    double getVoltage(){
        return m_voltage;
    }
    
    double getTemperature(){
        return m_temperature;
    }
    
    friend istream &operator>>( istream  &input, Battery &b ) 
    { 
        input >> b.m_capacity >> b.m_chargeLevel >> b.m_voltage >> b.m_temperature;
        return input;            
    }
    friend ostream &operator<<( ostream &output, const Battery &b ) 
    { 
        output << "\nCapacity : " << b.m_capacity << "\nCharge Level : " << b.m_chargeLevel << "\nVoltage : " << b.m_voltage << "\nTemparature : " << b.m_temperature << endl;
        return output;            
    }
    
    Battery* operator->(){
        return this;
    }
    
    void operator++(){
        m_chargeLevel = min(m_chargeLevel + 1, m_capacity);
    }
    void operator--(){
        m_chargeLevel = max(m_chargeLevel - 1, 0.0);
    }
    void operator=(const Battery& b){
        m_capacity=b.m_capacity;
        m_chargeLevel=b.m_chargeLevel;
        m_voltage=b.m_voltage;
        m_temperature=b.m_temperature;
   }
    
    Battery* operator*() {
        return this; 
    }
    
    double& operator[](const string& parameter){
        if(parameter == "capacity")
            return m_capacity;
        else if(parameter == "chargeLevel")
            return m_chargeLevel;
        else if(parameter == "voltage")
            return m_voltage;
        else if(parameter == "temperature")
            return m_temperature;
        else{
            throw invalid_argument("Invalid parameter");
        }    
    }

};

int main(){
    Battery battery1;
    
    cout << "Enter battery details (capacity chargeLevel voltage temperature): ";
    cin >> battery1;
    
    ++battery1;
    cout<<"\nAfter incrementing the charge Level:"<<endl;
    cout<<battery1;
    
    --battery1;
    cout<<"\nAfter decrementing the charge Level:"<<endl;
    cout<<battery1;
    
    Battery* batteryPtr = *battery1;
    cout << "\nAccessed battery object using * operator:" << endl;
    cout << *batteryPtr;
    
    battery1->charge(2);
    battery1->discharge(1.5);
    cout << "\nAfter charging and discharging:" << endl;
    cout << battery1;
    
    cout << "\nAccessing charge level using []: " << battery1["chargeLevel"] << endl;
    
    battery1["temperature"] = 30.5;
    cout << "\nModified temperature using [] operator:" << endl;
    cout << battery1;
    
    Battery battery2=battery1;
    cout << "\nCopied battery details using = operator:" << endl;
    cout << battery2;
}