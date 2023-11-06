// 1365. How Many Numbers Are Smaller Than the Current Number
// https://leetcode.com/problems/how-many-numbers-are-smaller-than-the-current-number/description/


#include <iostream>
#include <string>
#include <vector>
#include <unordered_map>
#include <algorithm>

using namespace std;


class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        vector<int> nums_copy = nums;

        sort(nums.begin(), nums.end());

        unordered_map<int, int> num_map_c_smaller;
        for (int i = 0; i < nums.size(); ++i)
        {
            if (i == 0)
                num_map_c_smaller[nums[i]] = 0;
            else if (num_map_c_smaller.find(nums[i]) == num_map_c_smaller.end())
                num_map_c_smaller[nums[i]] = i;
        }

        vector<int> ans;
        for (int num : nums_copy)
            ans.push_back(num_map_c_smaller[num]);

        return ans;
    }
};

