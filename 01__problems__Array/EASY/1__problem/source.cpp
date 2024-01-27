// 1. Two Sum
// https://leetcode.com/problems/two-sum/description/


#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <unordered_set>
#include <unordered_map>
#include <map>
#include <set>

#include <limits.h>


using namespace std;


class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n = nums.size();
        
        unordered_map<int, int> diff_map_idx;
        for (int i = 0; i < n; ++i)
        {
            int diff = target - nums[i];
            if (diff_map_idx.count(nums[i]))
                return {diff_map_idx[nums[i]], i};
            else
                diff_map_idx[diff] = i;
        }

        return {};
    }
};