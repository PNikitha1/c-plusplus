#include<iostream>
using namespace std;

class Account{
    string id;
    string name;
    double balance;

    public:
    Account(string id, string name, double balance){
        this->id=id;
        this->name=name;
        this->balance=balance;
    }
    void credit(double amount){
        balance=balance+amount;
    }
    void debit(double amount){
        if(amount>balance){
            cout<<"Insufficient Balance";
        }
        else{
            balance=balance-amount;
        }
    }
    void display() const
    {
        cout<<"Account Id "<<id<<'\n';
        cout<<"Account Name "<<name<<'\n';
        cout<<"Account Balance "<<balance<<'\n';
    }
    
};

int main(){
    Account a("4224","Nikitha",100000);
    a.credit(10000);
    a.debit(1000);
    a.display();
    return 0;
}