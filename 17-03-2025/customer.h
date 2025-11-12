#ifndef __CUSTOMER_H__
#define __CUSTOMER_H__
#include<string>
#include <iostream>

class ICustomer{
    public:
    void makeCall(int);
    void credit(double);
};

class Customer: public ICustomer 
{
    protected:
    std::string m_id;
    std::string m_name;
    double m_balance;

    public:
    Customer(std::string id, std::string name,double balance);
    double getBalance() const;
    void displayDetails() const;
};

class PrepaidCustomer: public Customer{
    public:
    PrepaidCustomer(std::string id, std::string name, double balance);
    void credit(double);
    void makeCall(int);
};

class PostpaidCustomer: public Customer{
    public:
    PostpaidCustomer(std::string id, std::string name, double balance);
    void credit(double);
    void makeCall(int);
};

#endif