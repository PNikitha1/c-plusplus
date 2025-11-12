#include<iostream>
#include "array.h"

int main(){
    int n;
    
    std::cout << "Enter the size of the array:" << std::endl;
    std::cin >> n;
    int* arr = new int[n];
    
    std::cout << "Enter the " << n << " elements:" << std::endl;
    for(int i = 0; i < n; i++){ 
        std::cin >> arr[i];
    }
    
    std::cout << "Sorting the array using insertion sort:" << std::endl;
    sorting(arr,n);

    std::cout << "After sorting the array elements" << std::endl;
    for(int i = 0; i < n; i++){
        std::cout << arr[i] << std::endl;
    }
    
    delete[] arr;

    return 0;
}