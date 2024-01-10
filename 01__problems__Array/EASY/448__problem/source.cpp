// 448. Find All Numbers Disappeared in an Array
// https://leetcode.com/problems/find-all-numbers-disappeared-in-an-array/description/


#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <unordered_set>
#include <unordered_map>
#include <map>
#include <set>

#include <limits.h>


using namespace std;


class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        int n = nums.size();

        sort(nums.begin(), nums.end());

        vector<int> ans;
        // before first elem
        for (int i = 1; i < nums[0]; ++i)
            ans.push_back(i);

        
        for (int i = 1; i < n; ++i)
        {
            if (nums[i] - nums[i - 1] > 1)
            {
                int current = nums[i - 1] + 1;
                while (current < nums[i])
                    ans.push_back(current++);
            }
        }

        // after last elem
        for (int i = nums[n - 1] + 1; i <= n; ++i)
        {
            ans.push_back(i);
        }

        return ans;
    }
};