#include<iostream>
#include "swap.h"
#include<stdexcept> 

int main(){
    int n1, n2;
    
    try {
        std::cout << "Enter two numbers :" << std::endl;
        std::cin >> n1 >> n2;

        if(std::cin.fail()) {
            throw std::invalid_argument("Invalid input. Please enter numeric values.");
        }
        
        std::cout << "Before swapping the values:" << std::endl;
        std::cout << n1 << " " << n2 << std::endl;

        swap(n1, n2);

        std::cout << "After swapping the values:" << std::endl;
        std::cout << n1 << " " << n2 << std::endl;
    } 
    catch (const std::invalid_argument& e) {
        std::cerr << "Error: " << e.what() << std::endl;
    } 
    catch (...) {
        std::cerr << "An unknown error occurred!" << std::endl;
    }

    return 0;
}