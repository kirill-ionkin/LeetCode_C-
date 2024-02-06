// 1893. Check if All the Integers in a Range Are Covered
// https://leetcode.com/problems/check-if-all-the-integers-in-a-range-are-covered/


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
    bool isCovered(vector<vector<int>>& ranges, int left, int right) {
        vector<int> num_map_count(50, 0);
        for (auto &range: ranges)
        {
            for (int x = range[0]; x <= range[1]; ++x)
                ++num_map_count[x - 1];
        }

        for (int x = left; x <= right; ++x)
        {
            if (num_map_count[x - 1] == 0) return false;
        } 
        return true;
    }
};