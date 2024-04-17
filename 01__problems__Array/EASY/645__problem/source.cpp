// 645. Set Mismatch
// https://leetcode.com/problems/set-mismatch/description/


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
    vector<int> findErrorNums(vector<int>& nums) {
        int n = nums.size();

        unordered_set<int> unique_nums(nums.begin(), nums.end());

        int nums_sum = 0;
        int unique_nums_sum = 0;
        for (auto& num: nums)
        {
            nums_sum += num;
        }
        for (auto& num: unique_nums)
        {
            unique_nums_sum += num;
        }
        int expected_sum = n * (n + 1) / 2;

        return {nums_sum - unique_nums_sum, expected_sum - unique_nums_sum};
    }
};