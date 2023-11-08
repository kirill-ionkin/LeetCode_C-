// 2574. Left and Right Sum Differences
// https://leetcode.com/problems/left-and-right-sum-differences/description/


#include <iostream>
#include <string>
#include <vector>

using namespace std;


class Solution {
public:
    vector<int> leftRightDifference(vector<int>& nums) {
        vector<int> ans;

        int sum = 0;
        for (int num: nums) 
            sum += num;

        int right_sum = sum - nums[0];
        int left_sum = 0;
        ans.push_back(abs(left_sum - right_sum));

        for (int i = 1; i < nums.size(); ++i)
        {
            left_sum += nums[i - 1];
            right_sum -= nums[i];
            ans.push_back(abs(left_sum - right_sum));
        }

        return ans;

    }
};
