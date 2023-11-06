// 1929. Concatenation of Array
// https://leetcode.com/problems/concatenation-of-array/description/


#include <iostream>
#include <vector>

using namespace std;


class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        size_t n = nums.size();
        vector<int> ans(2 * n);

        for (size_t i = 0; i < n; ++i)
        {
            ans[i] = ans[i + n] = nums[i];
        }
        return ans;
    }
};