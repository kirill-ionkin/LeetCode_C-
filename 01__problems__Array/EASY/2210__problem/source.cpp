// 2210. Count Hills and Valleys in an Array
// https://leetcode.com/problems/count-hills-and-valleys-in-an-array/description/


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
    int countHillValley(vector<int>& nums) {
        int n = nums.size();

        int count = 0;
        int prev_increment = 0;

        int left_idx = -1;
        int right_idx = -1;
        for (int i = 1; i < n - 1; ++i)
        {
            if (nums[i - 1] == nums[i])
            {
                continue;
            }

            // find left not equal neighbour
            left_idx = i - 1;
            while (left_idx >= 0)
            {
                if (nums[left_idx] != nums[i])
                {
                    break;
                }
                --left_idx;
            }

            // find right not equal neighbour
            right_idx = i + 1;
            while (right_idx < n)
            {
                if (nums[right_idx] != nums[i])
                {
                    break;
                }
                ++right_idx;
            }

            if ((left_idx == -1) || (right_idx == n))
            {
                prev_increment = 0;
                continue;
            }
            else 
            {
                prev_increment = 0;

                if ((nums[i] > nums[left_idx]) && (nums[i] > nums[right_idx]))
                {
                    prev_increment = 1;
                }
                else if ((nums[i] < nums[left_idx]) && (nums[i] < nums[right_idx]))
                {
                    prev_increment = 1;
                }
            }

            count += prev_increment;
        }

        return count;
    }
};