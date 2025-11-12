#include<iostream>
#include "string.h"
#include<stdexcept> 

int main() {
    char str[100];

    try {
        std::cout << "Enter the string: ";
        std::cin.getline(str, 100);

        if (std::cin.fail()) { 
            throw std::runtime_error("Input error: Failed to read the string.");
        }

        if (str[0] == '\0') { 
            throw std::invalid_argument("The string is empty!");
        }

        converting_to_uppercase(str);
        removing_vowels(str);
        reverse_string(str);
        std::cout << "Modified string: " << str << std::endl;
    } 
    catch (const std::invalid_argument &e) {
        std::cerr << "Error: " << e.what() << std::endl;
    } 
    catch (const std::runtime_error &e) {
        std::cerr << "Error: " << e.what() << std::endl;
    } 
    catch (...) {
        std::cerr << "An unknown error occurred!" << std::endl;
    }

    return 0;
}