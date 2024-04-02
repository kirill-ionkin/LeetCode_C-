// 2859. Sum of Values at Indices With K Set Bits
// https://leetcode.com/problems/sum-of-values-at-indices-with-k-set-bits/description/


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
    int n_ones_in_bin(int x)
    {
        int count = 0;
        for (; x; ++count)
            x &= x - 1;
        return count;
    }


    int sumIndicesWithKSetBits(vector<int>& nums, int k) {
        int n = nums.size();
        
        int sum = 0;
        for (int i = 0; i < n; ++i)
        {
            if (n_ones_in_bin(i) == k)
            {
                sum += nums[i];
            }
        }

        return sum;
    }
};

