// 1005. Maximize Sum Of Array After K Negations
// https://leetcode.com/problems/maximize-sum-of-array-after-k-negations/


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
    int largestSumAfterKNegations(vector<int>& nums, int k) {
        int n = nums.size();
        
        sort(nums.begin(), nums.end());

        int sum = 0;
        int min_abs_num = INT_MAX;
        int i = 0;
        for (; i < n; ++i)
        {
            if (nums[i] < 0 && k > 0)
            {
                sum += -nums[i];
                --k;
            }
            else
            {
                sum += nums[i];
            }

            min_abs_num = min(min_abs_num, abs(nums[i]));
        }

        if (k > 0 && k % 2 == 1)
        {
            sum -= 2 * min_abs_num;
        }

        return sum;
    }
};