#include <iostream>
#include "matrix.h"

int main() {
    const int SIZE = 3;
    int arr[SIZE][SIZE];

    std::cout << "Enter the elements for the 2D matrix:" << std::endl;
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            std::cin >> arr[i][j];
        }
    }

    std::cout << "Original 2D array in matrix format:" << std::endl;
    printMatrix(arr, SIZE);

    transposeMatrix(arr, SIZE);

    std::cout << "Transposed 2D array in matrix format:" << std::endl;
    printMatrix(arr, SIZE);

    return 0;
}
