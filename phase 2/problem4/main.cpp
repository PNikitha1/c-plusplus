#include<iostream>
#include "string.h"

int main() {
    char str[100]; 
    
    std::cout << "Enter the string: ";
    std::cin.getline(str, 100);

    if (str[0] == '\0') {
        std::cout << "The string is empty!" << std::endl;
        return 0;
    }
    converting_to_uppercase(str);
    removing_vowels(str);
    reverse_string(str);
    std::cout << "Modified string: " << str << std::endl;

    return 0;
}