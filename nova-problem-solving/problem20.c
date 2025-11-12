#include <stdio.h>
#include <stdbool.h>

int removeDuplicates(int* nums, int numsSize) {
    int uniqueCount = 0;
    for(int i = 0; i < numsSize; i++){
        bool isUnique = true;
        for(int j = 0; j < i; j++){
            if(nums[i] == nums[j]){
                isUnique = false;
                break;
            }
        }
        if(isUnique){
            nums[uniqueCount] = nums[i];
            uniqueCount++;
        }
    }
    return uniqueCount;
}

int main() {
    int nums[] = {1, 1, 2, 2, 3, 4, 4, 5};
    int numsSize = sizeof(nums) / sizeof(nums[0]);
    int newSize = removeDuplicates(nums, numsSize);

    printf("Array after removing duplicates: ");
    for(int i = 0; i < newSize; i++) {
        printf("%d ", nums[i]);
    }
    printf("\nNew size: %d\n", newSize);

    return 0;
}
