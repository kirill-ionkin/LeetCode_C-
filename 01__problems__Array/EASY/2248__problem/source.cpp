// 2248. Intersection of Multiple Arrays
// https://leetcode.com/problems/intersection-of-multiple-arrays/description/


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
    vector<int> intersection(vector<vector<int>>& nums) {
        int n = nums.size();

        unordered_map<int, int> num_map_count;
        for (auto& num: nums)
        {
            for (auto& elem: num)
            {
                ++num_map_count[elem];
            }
        }
        
        vector<int> ans;
        for (auto& data: num_map_count)
        {
            if (data.second == n)
                ans.push_back(data.first); 
        }

        sort(ans.begin(), ans.end());
        return ans;
    }
};