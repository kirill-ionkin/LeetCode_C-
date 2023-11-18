// 2656. Maximum Sum With Exactly K Elements 
// https://leetcode.com/problems/maximum-sum-with-exactly-k-elements/description/


#include <iostream>
#include <string>
#include <vector>

using namespace std;


class Solution {
public:
    int maximizeSum(vector<int>& nums, int k) {
        int a1 = nums[0];
        for (int num : nums)
            a1 = max(a1, num);

        return a1 * k + k * (k - 1) / 2;
    }
};
