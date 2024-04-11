// 3046. Split the Array
// https://leetcode.com/problems/split-the-array/


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
    bool isPossibleToSplit(vector<int>& nums) {
        vector<int> num_map_count(101, 0);

        for (auto &num: nums)
        {
            if (++num_map_count[num] > 2)
            {
                return false;
            }
        }

        return true;
    }
};