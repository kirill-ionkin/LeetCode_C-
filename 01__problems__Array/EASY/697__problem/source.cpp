// 697. Degree of an Array
// https://leetcode.com/problems/degree-of-an-array/


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
    int findShortestSubArray(vector<int>& nums) {
        int n = nums.size();
        
        unordered_map<int, pair<int, pair<int, int>>> num_map_start_end_idx;
        for (int i = 0; i < n; ++i)
        {
            if (num_map_start_end_idx.find(nums[i]) != num_map_start_end_idx.end())
                {
                    num_map_start_end_idx[nums[i]].second.second = i;
                    ++num_map_start_end_idx[nums[i]].first;
                }
            else
                num_map_start_end_idx[nums[i]] = {1, {i, 0}};
        }

        int degree = 1;
        for (auto &data: num_map_start_end_idx)
            degree = max(degree, data.second.first);

        int min_length = INT_MAX;
        for (auto &data: num_map_start_end_idx)
            if (data.second.first == degree && data.second.second.second != 0)
            {
                min_length = min(min_length, data.second.second.second - data.second.second.first + 1);
            }

        return min_length == INT_MAX ? 1 : min_length;
    }
};