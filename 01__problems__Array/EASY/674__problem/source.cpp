// 674. Longest Continuous Increasing Subsequence
// https://leetcode.com/problems/longest-continuous-increasing-subsequence/description/


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
    int findLengthOfLCIS(vector<int>& nums) {
        int max_length = 1;
        int length = 1;
        
        int prev = nums[0];
        for (int i = 1; i < nums.size(); ++i)
        {
            if (nums[i] > prev)
            {
                ++length;
            }
            else
            {
                max_length = max(max_length, length);
                length = 1;
            }
            
            prev = nums[i];
        }
        max_length = max(length, max_length);

        return max_length;
    }
};