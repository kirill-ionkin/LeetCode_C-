// 2441. Largest Positive Integer That Exists With Its Negative
// https://leetcode.com/problems/largest-positive-integer-that-exists-with-its-negative/description/


#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <unordered_set>
#include <unordered_map>
#include <map>
#include <set>


using namespace std;


class Solution {
public:
    int findMaxK(vector<int>& nums) {
        sort(nums.begin(), nums.end());

        int r = nums.size() - 1;
        int l = 0;
        while (nums[r] > 0 && nums[l] < 0 && l < r)
        {
            if (-nums[l] == nums[r])
                return nums[r];
            else if (-nums[l] > nums[r])
                ++l;
            else if (-nums[l] < nums[r])
                --r;
        }
        return -1;
    }
};