template<typename T>
class Mystack
{
private:
    int m_top;
    T *m_arr;
    int m_len;
public:
    Mystack(int len): m_len(len) {}
   ~Mystack(){
        while(m_arr != nullptr)
            delete[] m_arr;
   }
    void push(T x){
        m_arr[m_top++]=x;
    }
    T pop(){
        return m_arr[m_top--];
    }
};

int main(){
    Mystack<int> s1(10);
    s1.push(24);
    s1.push(43);
    s1.pop();
    Mystack<float> s2(23);
    s2.push(42);
}

