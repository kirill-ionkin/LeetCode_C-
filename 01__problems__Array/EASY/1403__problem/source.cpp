// 1403. Minimum Subsequence in Non-Increasing Order
// https://leetcode.com/problems/minimum-subsequence-in-non-increasing-order/description/


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
    vector<int> minSubsequence(vector<int>& nums) {
        sort(nums.begin(), nums.end(), greater<>());

        int r_sum = 0;
        for (auto num: nums)
            r_sum += num;
        
        int l_sum = 0;
        vector<int> ans;
        for (auto num: nums)
        {
            l_sum += num;
            r_sum -= num;
            ans.push_back(num);
            
            if (l_sum > r_sum)
                break;
        }

        return ans;
    }
};