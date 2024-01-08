// 283. Move Zeroes
// https://leetcode.com/problems/move-zeroes/description/


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
    void moveZeroes(vector<int>& nums) {
        int n = nums.size();

        // find zero
        int zero_idx = -1;
        for (int i = 0; i < n; ++i)
        {
            if (nums[i] == 0)
            {
                zero_idx = i;
                break;
            }
        }

        if (zero_idx != -1)
        {
            int i = zero_idx + 1;
            while (i < n)
            {
                if (nums[i] != 0)
                {
                    nums[zero_idx++] = nums[i];
                    nums[i] = 0;
                }
                    
                
                ++i;
            }
        }
    }
};