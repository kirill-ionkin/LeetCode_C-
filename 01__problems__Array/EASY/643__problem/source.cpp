// 643. Maximum Average Subarray I
// https://leetcode.com/problems/maximum-average-subarray-i/description/


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
    double findMaxAverage(vector<int>& nums, int k) {
        int n = nums.size();

        double sum = 0;
        for (int i = 0; i < k; ++i)
        {
            sum += nums[i];
        }

        double max_sum = sum;

        for (int i = k; i < n; ++i)
        {
            sum += nums[i] - nums[i - k];
            max_sum = max(max_sum, sum);
        }

        return max_sum / k;
    }
};