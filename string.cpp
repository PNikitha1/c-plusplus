#include<cstring>
#include<iostream>
class Mystring{
    char* m_buf;
    int m_len;
    public:
    Mystring(): m_buf(nullptr),m_len(0){}
    Mystring(const char* buf){
        m_len=strlen(buf);
        m_buf=new char[m_len+1];
        strcpy(m_buf,buf);
    }
    Mystring(const Mystring& ref):m_len(ref.m_len){
        m_buf=new char[m_len];
        strcpy(m_buf,ref.m_buf);
    }
    ~Mystring(){
        if(m_buf!=nullptr){
            delete[] m_buf;
        }
    }
    int length() const {return m_len;}
    char at(int index) const { return m_buf[index];}
    bool equals(const Mystring& ref ){
        return strcmp(m_buf,ref.m_buf)==0;
    }
    void append(Mystring& ref){
        strcat(m_buf,ref.m_buf);
        std::cout<<m_buf<<std::endl;
    }
    void print() const {std::cout<<m_buf<<std::endl;}
};
int main(){
    Mystring s0;
    Mystring s1("abcdefg");
    std::cout<<s1.at(2)<<std::endl;
    std::cout<<s1.length()<<std::endl;
    s1.print();

    Mystring s3(s1);
    std::cout<<s3.length()<<std::endl;

    if(s1.equals(s3)){
        std::cout<<"Equals"<<std::endl;
    }
    s1.append(s3);

}