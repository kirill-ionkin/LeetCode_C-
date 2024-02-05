// 747. Largest Number At Least Twice of Others
// https://leetcode.com/problems/largest-number-at-least-twice-of-others/description/


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
    int dominantIndex(vector<int>& nums) {
        int max1_idx = nums[0] >= nums[1] ? 0 : 1;
        int max2_idx = max1_idx == 1 ? 0 : 1;

        for (int i = 2; i < nums.size(); ++i)
        {
            if (nums[i] >= nums[max1_idx])
            {
                max2_idx = max1_idx;
                max1_idx = i;
            }
            else if (nums[max2_idx] < nums[i] && nums[i] <= nums[max1_idx])
            {
                max2_idx = i;
            }
        }
        
        if (nums[max2_idx] == 0)
        {
            if (nums[max1_idx] == 0) return -1;
            return max1_idx;
        }
        return (nums[max1_idx] / nums[max2_idx] >= 2) ? max1_idx : -1;
    }
};