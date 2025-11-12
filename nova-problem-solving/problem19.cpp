#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>
#include <cmath>

class Solution {
public:
    std::vector<std::vector<int>> fourSum(std::vector<int>& nums, int target) {
        std::sort(nums.begin(), nums.end());
        return kSum(nums, target, 0, 4);
    }

    std::vector<std::vector<int>> kSum(std::vector<int>& nums, long long target, int start, int k) {
        std::vector<std::vector<int>> result;

        if (start == nums.size()) {
            return result;
        }

        long long average_value = target / k;
        if (nums[start] > average_value || average_value > nums.back()) {
            return result;
        }

        if (k == 2) {
            return twoSum(nums, target, start);
        }

        for (int i = start; i < nums.size(); ++i) {
            if (i == start || nums[i - 1] != nums[i]) {
                for (std::vector<int>& subset : kSum(nums, target - nums[i], i + 1, k - 1)) {
                    result.push_back({nums[i]});
                    result.back().insert(result.back().end(), subset.begin(), subset.end());
                }
            }
        }

        return result;
    }

    std::vector<std::vector<int>> twoSum(std::vector<int>& nums, long long target, int start) {
        std::vector<std::vector<int>> result;
        int left = start, right = nums.size() - 1;

        while (left < right) {
            int current_sum = nums[left] + nums[right];
            if (current_sum < target || (left > start && nums[left] == nums[left - 1])) {
                ++left;
            } else if (current_sum > target || (right < nums.size() - 1 && nums[right] == nums[right + 1])) {
                --right;
            } else {
                result.push_back({nums[left++], nums[right--]});
            }
        }

        return result;
    }
};

int main() {
    Solution solution;

    std::vector<int> nums1 = {1,0,-1,0,-2,2};
    int target1 = 0;
    std::vector<std::vector<int>> result1 = solution.fourSum(nums1, target1);
    std::cout << "Example 1 results:\n";
    for (const auto& quadruplet : result1) {
        for (int num : quadruplet) {
            std::cout << num << " ";
        }
        std::cout << "\n";
    }

    std::vector<int> nums2 = {0, 0, 0, 0};
    int target2 = 0;
    std::vector<std::vector<int>> result2 = solution.fourSum(nums2, target2);
    std::cout << "Example 2 results:\n";
    for (const auto& quadruplet : result2) {
        for (int num : quadruplet) {
            std::cout << num << " ";
        }
        std::cout << "\n";
    }

    return 0;
}
