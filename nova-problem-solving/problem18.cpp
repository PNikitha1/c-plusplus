#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>
#include <cmath>

class Solution {
public:
    int threeSumClosest(std::vector<int>& nums, int target) {
        std::sort(nums.begin(), nums.end());
        int closest_sum = INT_MAX / 2;  
        
        for (int i = 0; i < nums.size() - 2; ++i) {
            int left = i + 1, right = nums.size() - 1;
            while (left < right) {
                int current_sum = nums[i] + nums[left] + nums[right];
                if (std::abs(current_sum - target) < std::abs(closest_sum - target)) {
                    closest_sum = current_sum;
                }
                if (current_sum < target) {
                    ++left;
                } else if (current_sum > target) {
                    --right;
                } else {
                    return current_sum;
                }
            }
        }
        
        return closest_sum;
    }
};

int main() {
    Solution solution;

    std::vector<int> nums1 = {-1, 2, 1, -4};
    int target1 = 1;
    std::cout << "Example 1: " << solution.threeSumClosest(nums1, target1) << std::endl;

    std::vector<int> nums2 = {0, 0, 0};
    int target2 = 1;
    std::cout << "Example 2: " << solution.threeSumClosest(nums2, target2) << std::endl;

    return 0;
}
