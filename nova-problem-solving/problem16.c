#include <stdio.h>

int missingNumber(int* nums, int numsSize) {
    int missing_number = 0;
    int num[numsSize + 1];
    for(int i = 0; i < numsSize; i++){
        num[i] = nums[i];
    }
    num[numsSize] = 0;
    
    for (int i = 1; i < numsSize; ++i) {
        int key = num[i];
        int j = i - 1;

        while (j >= 0 && num[j] > key) {
            num[j + 1] = num[j];
            j = j - 1;
        }
        num[j + 1] = key;
    }

    for(int i = 0; i <= numsSize; i++){
        if(num[i] != missing_number){
            break;
        }
        missing_number++;
    }
    return missing_number;
}

int main() {
    int nums[] = {3, 0, 1};
    int numsSize = sizeof(nums) / sizeof(nums[0]);
    int result = missingNumber(nums, numsSize);
    printf("The missing number is: %d\n", result);
    return 0;
}
