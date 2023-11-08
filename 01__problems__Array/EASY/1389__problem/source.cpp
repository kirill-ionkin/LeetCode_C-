// 1389. Create Target Array in the Given Order
// https://leetcode.com/problems/create-target-array-in-the-given-order/description/


#include <iostream>
#include <string>
#include <vector>

using namespace std;


class Solution {
public:
    vector<int> createTargetArray(vector<int>& nums, vector<int>& index) {
        vector<int> ans;

        for (int i = 0; i < nums.size(); ++i)
        {
            ans.insert(ans.begin() + index[i], nums[i]);
        }
        return ans;
    }
};
