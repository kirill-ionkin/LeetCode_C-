// 3105. Longest Strictly Increasing or Strictly Decreasing Subarray
// https://leetcode.com/problems/longest-strictly-increasing-or-strictly-decreasing-subarray/description/


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
    int longestMonotonicSubarray(vector<int>& nums) {
        int n = nums.size();
        
        int max_length = 1;

        int start = 0;
        int end = 0;

        // increasing
        while (end < n)
        {
            if (start == end)
            {
                ++end;
                continue;
            }

            if (nums[end - 1] < nums[end])
            {
                max_length = max(max_length, end - start + 1);
                ++end;
            }
            else
            {
                max_length = max(max_length, end - start);
                start = end;
                ++end;
            }
        }
        max_length = max(max_length, end - start);

        // decreasing
        start = 0;
        end = 0;
        while (end < n)
        {
            if (start == end)
            {
                ++end;
                continue;
            }

            if (nums[end - 1] > nums[end])
            {
                max_length = max(max_length, end - start + 1);
                ++end;
            }
            else
            {
                max_length = max(max_length, end - start);
                start = end;
                ++end;
            }
        }
        max_length = max(max_length, end - start);

        return max_length;
    }
};