#include<iostream>
#include "swap.h" 
int main(){
    int n1, n2;
    
    std::cout << "Enter two numbers :" << std::endl;
    std::cin >> n1 >> n2;
    
    std::cout << "Before swapping the values:" << std::endl;
    std::cout << n1 << " " << n2 << std::endl;
    
    swap(n1, n2);
    
    std::cout << "After swapping the values:" << std::endl;
    std::cout << n1 << " " << n2 << std::endl;

    return 0;
}