#include <iostream>
#include <stdexcept> 
#include "matrix.h"

int main() {
    const int SIZE = 3;
    int arr[SIZE][SIZE];

    try {
        std::cout << "Enter the elements for the 2D matrix:" << std::endl;
        for (int i = 0; i < SIZE; i++) {
            for (int j = 0; j < SIZE; j++) {
                std::cin >> arr[i][j];
                if (std::cin.fail()) {
                    throw std::invalid_argument("Invalid input. Please provide numeric values.");
                }
            }
        }

        std::cout << "Original 2D array in matrix format:" << std::endl;
        printMatrix(arr, SIZE);

        transposeMatrix(arr, SIZE);

        std::cout << "Transposed 2D array in matrix format:" << std::endl;
        printMatrix(arr, SIZE);
    } 
    catch (const std::invalid_argument &e) {
        std::cerr << "Error: " << e.what() << std::endl;
    } 
    catch (...) {
        std::cerr << "An unknown error occurred!" << std::endl;
    }

    return 0;
}