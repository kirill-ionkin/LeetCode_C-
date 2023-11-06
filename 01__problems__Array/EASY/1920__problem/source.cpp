// 1920. Build Array from Permutation
// https://leetcode.com/problems/build-array-from-permutation/description/


#include <iostream>
#include <vector>

using namespace std;


class Solution {
public:
    vector<int> buildArray(vector<int>& nums) {
        vector<int> ans(nums.size());

        for (size_t i = 0; i < nums.size(); ++i)
            ans[i] = nums[nums[i]];

        return ans;
    }
};