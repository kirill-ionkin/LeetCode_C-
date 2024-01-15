// 2190. Most Frequent Number Following Key In an Array
// https://leetcode.com/problems/most-frequent-number-following-key-in-an-array/description/


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
    int mostFrequent(vector<int>& nums, int key) {
        int n = nums.size();
        
        unordered_map<int, int> target_map_count;
        for (int i = 0; i < n - 1; ++i)
        {
            if (nums[i] == key)
                ++target_map_count[nums[i + 1]];
        }
        
        int max_target = -1;
        int max_count = 0;
        for (auto& data: target_map_count)
        {
            if (data.second > max_count)
            {
                max_target = data.first;
                max_count = data.second;
            }
        }

        return max_target;
    }
};