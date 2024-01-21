// 976. Largest Perimeter Triangle
// https://leetcode.com/problems/largest-perimeter-triangle/description/


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
    int largestPerimeter(vector<int>& nums) {
        int n = nums.size();
        
        sort(nums.begin(), nums.end());

        int window_idx = n - 3;
        while (window_idx >= 0)
        {
            int a = nums[window_idx + 2];
            int b = nums[window_idx + 1];
            int c = nums[window_idx];

            if (a < b + c)
            {
                return a + b + c;
            }

            --window_idx;
        }

        return 0;
    }
};