// 1413. Minimum Value to Get Positive Step by Step Sum
// https://leetcode.com/problems/minimum-value-to-get-positive-step-by-step-sum/


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
    int minStartValue(vector<int>& nums) {
        int sum = nums[0];
        int min_sum = sum;

        for (int i = 1; i < nums.size(); ++i)
        {
            sum += nums[i];
            min_sum = min(min_sum, sum);
        }

        if (min_sum > 0)
            return 1;
        else
            return -min_sum + 1;
    }
};