// 3010. Divide an Array Into Subarrays With Minimum Cost I
// https://leetcode.com/problems/divide-an-array-into-subarrays-with-minimum-cost-i/description/


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
    int minimumCost(vector<int>& nums) {
        int n = nums.size();
        
        int min1, min2;
        if (nums[1] <= nums[2])
        {
            min1 = nums[1];
            min2 = nums[2];
        }
        else 
        {
            min1 = nums[2];
            min2 = nums[1];
        }

        for (int i = 3; i < n; ++i)
        {
            int num = nums[i];

            if (num <= min1)
            {
                min2 = min1;
                min1 = num;
            }
            else if (num < min2)
            {
                min2 = num;
            }
        } 

        return nums[0] + min1 + min2;
    }
};