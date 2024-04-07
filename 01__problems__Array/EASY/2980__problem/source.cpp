// 2980. Check if Bitwise OR Has Trailing Zeros
// https://leetcode.com/problems/check-if-bitwise-or-has-trailing-zeros/description/


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
    bool hasTrailingZeros(vector<int>& nums) {
        int count = 0;
        for (auto& num: nums)
        {
            if (num % 2 == 0)
            {
                ++count;
            }
        }

        return count >= 2;
    }
};