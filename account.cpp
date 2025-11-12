#include<string>
#include<iostream>
struct Account
{
    std::string m_id;
    std::string m_name;
    double m_balance;
};
void initializeAccountDetails(struct Account* ptr, std::string id, std::string name, double balance)
{
    ptr->m_id=id;
    ptr->m_name=name;
    ptr->m_balance=balance;
}
void debit(struct Account* ptr, double amout)
{
    if(amout>ptr->m_balance){
        std::cout<<"Insufficinet file";
    }
    else{
    ptr->m_balance=ptr->m_balance-amout;
    std::cout<<"Debit "<<ptr->m_balance<<'\n';
    }


}
void credit(struct Account* ptr, double amout)
{
    ptr->m_balance=ptr->m_balance+amout;
    std::cout<<"Credit "<<ptr->m_balance<<'\n';

}
void display(struct Account* ptr)
{
    std::cout<<"Account Id "<<ptr->m_id<<'\n';
    std::cout<<"Account Name "<<ptr->m_name<<'\n';
    std::cout<<"Account Balance "<<ptr->m_balance<<'\n';
}
int main()
{
    struct Account a1;
    initializeAccountDetails(&a1, "1001","xxx", 5000.0);
    credit(&a1, 2000);
    debit(&a1,3200);
    display(&a1);
    return 0;
}
