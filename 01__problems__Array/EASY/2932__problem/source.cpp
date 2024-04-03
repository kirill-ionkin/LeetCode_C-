// 2932. Maximum Strong Pair XOR I
// https://leetcode.com/problems/maximum-strong-pair-xor-i/description/


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
    int maximumStrongPairXor(vector<int>& nums) {
        int n = nums.size();
        
        int max_xor = 0;
        for (int i = 0; i < n - 1; ++i)
        {
            for (int j = i + 1; j < n; ++j)
            {
                int x = nums[i];
                int y = nums[j];

                if (abs(x - y) <= min(x, y))
                {
                    max_xor = max(max_xor, x^y);
                }
            }
        }

        return max_xor;
    }
};