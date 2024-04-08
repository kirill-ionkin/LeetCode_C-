// 594. Longest Harmonious Subsequence
// https://leetcode.com/problems/longest-harmonious-subsequence/description/


#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <unordered_set>
#include <unordered_map>
#include <map>
#include <set>

#include <limits.h>

#include <cmath>

using namespace std;


class Solution {
public:
    int findLHS(vector<int>& nums) {
        int n = nums.size();

        sort(nums.begin(), nums.end());
        int right_idx = 0;
        int left_idx = 0;
        int max_length = 0;
        int length = 0;

        while (right_idx < n)
        { 
            if (nums[right_idx] - nums[left_idx] == 1)
            {
                max_length = max(max_length, right_idx - left_idx + 1);
            }
            else if (nums[right_idx] - nums[left_idx] > 1)
            {
                while (nums[right_idx] - nums[left_idx] > 1)
                {
                    ++left_idx;
                }
            }
            ++right_idx;
        }

        return max_length;
    }
};