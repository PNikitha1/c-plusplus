#include "customer.h"

Customer::Customer(std::string id, std::string name,double balance): m_id(id), m_name(name), m_balance(balance){}

double Customer::getBalance() const{
    return m_balance;
}
void Customer::displayDetails() const{
    std::cout << "Name : " << m_name
              << "\n Id: " << m_id
              << "\n Balance : " << m_balance;
}

PrepaidCustomer::PrepaidCustomer(std::string id, std::string name,double balance): Customer(id, name, balance) {}

void PrepaidCustomer::credit(double amount){
    m_balance += amount;
    std::cout << "Credited " << amount << " to Prepaid Account. New Balance: " << m_balance << std::endl;
}
void PrepaidCustomer::makeCall(int min){
    double cost = min * 0.5; // Assume cost is 0.5 per minute
    if (m_balance >= cost) {
        m_balance -= cost;
        std::cout << "Call for " << min << " minutes. Cost: " << cost << ", Remaining Balance: " << m_balance << std::endl;
    } else {
        std::cout << "Insufficient balance for a call." << std::endl;
    }
}

PostpaidCustomer::PostpaidCustomer(std::string id, std::string name, double balance)
    : Customer(id, name, balance) {}

void PostpaidCustomer::credit(double amount) {
    m_balance -= amount; // Assume crediting reduces the bill
    if (m_balance < 0) m_balance = 0; // Ensure no negative balance
    std::cout << "Payment of " << amount << " received. Outstanding Balance: " << m_balance << std::endl;
}

void PostpaidCustomer::makeCall(int minutes) {
    double cost = minutes * 0.5; // Assume cost is 0.5 per minute
    m_balance += cost; // Add call cost to postpaid bill
    std::cout << "Call for " << minutes << " minutes. Cost: " << cost << ", Updated Outstanding Balance: " << m_balance << std::endl;
}



