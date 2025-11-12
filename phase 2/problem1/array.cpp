#include "array.h"

void sorting(int arr[], int size){
    for(int i = 1; i < size; i++){
        for(int j = i; j > 0; j--){
            if(arr[j] < arr[j-1]){
                int t = arr[j];
                arr[j] = arr[j-1];
                arr[j-1] = t;
            }
        }
    }
}