// 485. Max Consecutive Ones
// https://leetcode.com/problems/max-consecutive-ones/description/


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
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int max_count_consecutive_ones = 0;
        int count_consecutive_ones = 0;
        for (auto& num: nums)
        {
            if (num == 0)
            {
                max_count_consecutive_ones = max(max_count_consecutive_ones, count_consecutive_ones);
                count_consecutive_ones = 0;
            }
            else
                ++count_consecutive_ones;
        }
        return max(max_count_consecutive_ones, count_consecutive_ones);
    }
};