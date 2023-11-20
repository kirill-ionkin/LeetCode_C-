// 1827. Minimum Operations to Make the Array Increasing
// https://leetcode.com/problems/minimum-operations-to-make-the-array-increasing/description/


#include <iostream>
#include <string>
#include <vector>

using namespace std;


class Solution {
public:
    int minOperations(vector<int>& nums) {
        int min_operations = 0;

        int prev_num = nums[0];

        for (int i = 1; i < nums.size(); ++i)
        {
            if (nums[i] <= prev_num)
            {
                min_operations += (prev_num - nums[i] + 1);
                ++prev_num;
            }
            else
                prev_num = nums[i];
        }

        return min_operations;
    }
};