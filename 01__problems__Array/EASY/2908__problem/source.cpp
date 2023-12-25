// 2908. Minimum Sum of Mountain Triplets I
// https://leetcode.com/problems/minimum-sum-of-mountain-triplets-i/description/


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
    int minimumSum(vector<int>& nums) {
        int n = nums.size();

        int min_sum = 1000;
        for (int i = 0; i < n - 2; ++i)
        {
            for (int j = i + 1; j < n - 1; ++j)
            {
                for (int k = j + 1;k < n; ++k)
                {
                    if (nums[i] < nums[j] && nums[j] > nums[k])
                        min_sum = min(min_sum, nums[i] + nums[j] + nums[k]);
                }
            }
        }

        return min_sum == 1000 ? -1 : min_sum;
    }
};