// 27. Remove Element
// https://leetcode.com/problems/remove-element/


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
    int removeElement(vector<int>& nums, int val) {
        int n = nums.size();

        bool is_val = false;
        int idx = 0;
        int val_idx = -1;
        int count = 0;
        while (idx < n)
        {
            if (nums[idx] == val) ++count;

            if (nums[idx] == val && !is_val)
            {
                val_idx = idx;
                is_val = true;
            }
            else if (nums[idx] != val && is_val)
            {
                // swap
                int tmp = nums[val_idx];
                nums[val_idx] = nums[idx];
                nums[idx] = tmp;

                ++val_idx;
            }

            ++idx;
        }
        
        return n - count;
    }
};