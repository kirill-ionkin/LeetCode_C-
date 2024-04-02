// 3065. Minimum Operations to Exceed Threshold Value I
// https://leetcode.com/problems/minimum-operations-to-exceed-threshold-value-i/description/


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
    int minOperations(vector<int>& nums, int k) {
        int count = 0;
        for (auto &num: nums)
        {
            if (num < k)
            {
                ++count;
            }
        }

        return count;
    }
};