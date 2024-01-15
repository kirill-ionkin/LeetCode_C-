// 2869. Minimum Operations to Collect Elements
// https://leetcode.com/problems/minimum-operations-to-collect-elements/description/


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
    int minOperations(vector<int>& nums, int k) {
        int n = nums.size();
        
        vector<int> num_map_idx(51, 0);
        for (int i = 0; i < n; ++i)
        {
            num_map_idx[nums[i]] = i;
        }

        int max_count = 0;
        for (int i = 1; i <= k; ++i)
        {
            max_count = max(max_count, n - 1 - num_map_idx[i] + 1);
        }

        return max_count;
    }
};