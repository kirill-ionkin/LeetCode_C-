// 1470. Shuffle the Array
// https://leetcode.com/problems/shuffle-the-array/description/


#include <iostream>
#include <string>
#include <vector>

using namespace std;


class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        vector<int> ans;
        // ans.reserve(2 * n);

        for (int i = 0; i < n; ++i)
        {   
            ans.push_back(nums[i]);
            ans.push_back(nums[i + n]);
        }   

        return ans;
    }
};