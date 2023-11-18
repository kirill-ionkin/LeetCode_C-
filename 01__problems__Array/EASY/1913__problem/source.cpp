// 1913. Maximum Product Difference Between Two Pairs
// https://leetcode.com/problems/maximum-product-difference-between-two-pairs/description/


#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;


class Solution {
public:
    int maxProductDifference(vector<int>& nums) {
        int n = nums.size();

        sort(nums.begin(), nums.end());

        return nums[n - 1] * nums[n - 2] - nums[0] * nums[1];
    }
};