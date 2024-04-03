// 2965. Find Missing and Repeated Values
// https://leetcode.com/problems/find-missing-and-repeated-values/description/


#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <unordered_set>
#include <unordered_map>
#include <map>
#include <set>

#include <limits.h>

#include <cmath>

using namespace std;


class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
        int n = grid.size();
        
        vector<int> nums(n*n + 1, 0);
        for (auto &row: grid)
        {
            for (auto& num: row)
            {
                ++nums[num];
            }
        }

        vector<int> ans(2, 0);
        for (int i = 1; i < n*n + 1; ++i)
        {
            if (nums[i] == 1)
            {
                continue;
            }
            else if (nums[i] == 0)
            {
                ans[1] = i;
            }
            else
            {
                ans[0] = i;
            }
        }

        return ans;
    }
};