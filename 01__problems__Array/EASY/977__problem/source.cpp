// 977. Squares of a Sorted Array
// https://leetcode.com/problems/squares-of-a-sorted-array/description/


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
    vector<int> sortedSquares(vector<int>& nums) {
        vector<int> ans(nums.size(), 0);

        int l = 0;
        int r = nums.size() - 1;
        int k = ans.size() - 1;

        while (l <= r)
        {
            if (abs(nums[l]) >= abs(nums[r]))
            {
                ans[k--] = nums[l] * nums[l];
                ++l;
            }
            else
            {
                ans[k--] = nums[r] * nums[r];
                --r;
            }
        }

        return ans;
    }
};
