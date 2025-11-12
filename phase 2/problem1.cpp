#include <iostream>
using namespace std;

int main() {
    int n;
    
    cout << "Enter the size of the array:" << endl;
    cin >> n;
    int* arr = new int[n];
    
    cout << "Enter the " << n << " elements:" <<endl;
    for(int i = 0; i < n; i++){ 
        cin >> arr[i];
    }
    
    cout << "Sorting the array using insertion sort:" << endl;
    for(int i = 1; i < n; i++){
        for(int j = i; j > 0; j--){
            if(arr[j] < arr[j-1]){
                int t = arr[j];
                arr[j] = arr[j-1];
                arr[j-1] = t;
            }
        }
    }
    
    cout << "After sorting the array elements" << endl;
    for(int i = 0; i < n; i++){
        cout << arr[i] << endl;
    }
    
    delete[] arr;

    return 0;
}