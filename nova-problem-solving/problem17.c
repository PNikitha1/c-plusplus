#include <stdio.h>

double findMedianSortedArrays(int* nums1, int nums1Size, int* nums2, int nums2Size) {
    double temp[nums1Size + nums2Size];
    int i = 0, j = 0, k = 0;
    while (i < nums1Size && j < nums2Size) {
        if (nums1[i] < nums2[j]) {
            temp[k++] = nums1[i++];
        } else {
            temp[k++] = nums2[j++];
        }
    }
    while (i != nums1Size) {
        temp[k++] = nums1[i++];
    }
    while (j != nums2Size) {
        temp[k++] = nums2[j++];
    }

    if (k % 2 != 0) {
        return temp[k / 2];
    }

    return (temp[k / 2] + temp[k / 2 - 1]) / 2;
}

int main() {
    int nums1[] = {1, 4};
    int nums1Size = sizeof(nums1) / sizeof(nums1[0]);
    int nums2[] = {2, 3};
    int nums2Size = sizeof(nums2) / sizeof(nums2[0]);

    double median = findMedianSortedArrays(nums1, nums1Size, nums2, nums2Size);
    printf("The median is: %.2f\n", median);

    return 0;
}
