// 724. Find Pivot Index
// https://leetcode.com/problems/find-pivot-index/description/


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
    int pivotIndex(vector<int>& nums) {
        int sum = 0;
        for (auto& num: nums)
            sum += num;
        
        int left_sum = 0;
        int right_sum = sum - nums[0];
        for (int i = 0; i < nums.size(); ++i)
        {
            if (i)
            {
                left_sum += nums[i - 1];
                right_sum -= nums[i];
            }

            if (left_sum == right_sum)
                return i;
        }
        
        return -1;
    }
};