#include<stdexcept>
#include<iostream>
class Mystack
{
private:
    int m_top;
    int *m_arr;
    int m_len;
public:
    Mystack(int len): m_len(len) {}
   ~Mystack(){
        while(m_arr != nullptr)
            delete[] m_arr;
   }
    void push(int x){
        if(m_top==m_len){
            throw std::overflow_error("Stak is overflow");
        }
        m_arr[m_top++]=x;
    }
    int pop(){
        if(m_top==-1){
            throw std::underflow_error("stack underflow");
        }
        return m_arr[m_top--];
    }
};

int main(){
    try{
    Mystack s1(10);
    s1.push(24);
    s1.push(43);
    s1.pop();
    Mystack s2(23);
    s2.push(42);
    s2.pop();
    s2.pop();
    }
    catch(std::underflow_error& e){
        std::cout<<e.what()<<"\n";
    }
    catch(std::overflow_error& oe){
        std::cout<<oe.what()<<"\n";
    }
}

