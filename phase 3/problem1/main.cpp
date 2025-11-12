#include <iostream>
#include <stdexcept>
#include "array.h"

int main() {
    int n;

    try {
        std::cout << "Enter the size of the array:" << std::endl;
        std::cin >> n;

        if (n <= 0) {
            throw std::invalid_argument("Array size must be positive.");
        }

        int* arr = new int[n]; 

        std::cout << "Enter the " << n << " elements:" << std::endl;
        for (int i = 0; i < n; i++) {
            std::cin >> arr[i];
        }

        std::cout << "Sorting the array using insertion sort" << std::endl;
        sorting(arr, n);

        std::cout << "After sorting the array elements:" << std::endl;
        for (int i = 0; i < n; i++) {
            std::cout << arr[i] << std::endl;
        }

        delete[] arr;

    } catch (std::bad_alloc& e) {
        std::cerr << "Memory allocation failed: " << e.what() << std::endl;
    } catch (std::invalid_argument& e) {
        std::cerr << "Invalid input: " << e.what() << std::endl;
    } catch (...) {
        std::cerr << "An unexpected error occurred." << std::endl;
    }

    return 0;
}