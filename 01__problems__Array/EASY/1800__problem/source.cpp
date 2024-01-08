// 1800. Maximum Ascending Subarray Sum
// https://leetcode.com/problems/maximum-ascending-subarray-sum/description/


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
    int maxAscendingSum(vector<int>& nums) {
        int n = nums.size();
        
        int current_sum = nums[0];
        int max_sum = current_sum;

        for (int i = 1; i < n; ++i)
        {
            if (nums[i] > nums[i - 1])
                current_sum += nums[i];
            else
            {
                max_sum = max(max_sum, current_sum);
                current_sum = nums[i];
            }
        }
        max_sum = max(max_sum, current_sum);

        return max_sum;
    }
};