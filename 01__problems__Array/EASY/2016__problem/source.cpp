// 2016. Maximum Difference Between Increasing Elements
// https://leetcode.com/problems/maximum-difference-between-increasing-elements/description/


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
    int maximumDifference(vector<int>& nums) {
        int n = nums.size();

        vector<int> max_num_right(n, 0);
        vector<int> min_num_left(n, 0);

        // min
        int min_left = INT_MAX;
        for (int i = 0; i < n; ++i)
        {
            min_left = min(min_left, nums[i]);
            min_num_left[i] = min_left;
        }

        // max
        int max_right = INT_MIN;
        for (int i = n - 1; i >= 0; --i)
        {
            max_right = max(max_right, nums[i]);
            max_num_right[i] = max_right;
        }

        int max_diff = -1;
        for (int i = 0; i < n - 1; ++i)
        {  
            int diff = max_num_right[i + 1] - min_num_left[i];
            if (diff > 0 && diff > max_diff) max_diff = diff;
        }

        return max_diff;
    }
};