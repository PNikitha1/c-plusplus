#include <iostream>
#include <vector>
#include <algorithm>

class Solution {
public:
    bool containsDuplicate(std::vector<int>& nums) {
        std::sort(nums.begin(), nums.end());
        int n = nums.size();
        for (int i = 1; i < n; i++) {
            if (nums[i] == nums[i - 1])
                return true;
        }
        return false;
    }
};

int main() {
    Solution solution;
    std::vector<int> nums1 = {1, 2, 3, 1};
    std::vector<int> nums2 = {1, 2, 3, 4};

    std::cout << "Example 1: " << (solution.containsDuplicate(nums1) ? "true" : "false") << std::endl;
    std::cout << "Example 2: " << (solution.containsDuplicate(nums2) ? "true" : "false") << std::endl;

    return 0;
}
