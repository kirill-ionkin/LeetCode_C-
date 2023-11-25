// 905. Sort Array By Parity
// https://leetcode.com/problems/sort-array-by-parity/description/


#include <iostream>
#include <string>
#include <vector>

using namespace std;


class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
        int n = nums.size();
        
        
        int odd_idx = 0;
        
        // find first even idx
        int even_idx = -1;
        for (int i = 0; i < n; ++i)
        {
            if (nums[i] % 2)
            {
                even_idx = i;
                break;
            }  
        }

        // check, is there any even numbers
        if (even_idx == -1)
            return nums;


        while (odd_idx < n)
        {
            if (nums[odd_idx] % 2 == 0 && even_idx < odd_idx)
            {
                int tmp = nums[odd_idx];
                nums[odd_idx] = nums[even_idx];
                nums[even_idx] = tmp;

                ++even_idx;
            }

            ++odd_idx;

        }

        return nums;
    }
};
