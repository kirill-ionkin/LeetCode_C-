// 2395. Find Subarrays With Equal Sum
// https://leetcode.com/problems/find-subarrays-with-equal-sum/description/


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
    bool findSubarrays(vector<int>& nums) {
        unordered_map<int, int> sum_map_count;

        int n = nums.size();
        for (int i = 1; i < n; ++i)
        {
            int sum = nums[i - 1] + nums[i];

            if (++sum_map_count[sum] == 2)
                return true;
        }

        return false;
    }
};