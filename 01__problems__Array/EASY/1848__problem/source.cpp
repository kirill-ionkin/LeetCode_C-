// 1848. Minimum Distance to the Target Element
// https://leetcode.com/problems/minimum-distance-to-the-target-element/description/


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
    int getMinDistance(vector<int>& nums, int target, int start) {
        int n = nums.size();

        int min_dist = INT_MAX;
        for (int i = 0; i < n; ++i)
        {
            if (nums[i] == target)
                min_dist = min(min_dist, abs(i - start));

            if (min_dist == 0)
                return 0;
        
        }

        return min_dist;
    }
};