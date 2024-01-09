// 217. Contains Duplicate
// https://leetcode.com/problems/contains-duplicate/description/


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
    bool containsDuplicate(vector<int>& nums) {
        unordered_map<int, int> num_map_count;
        
        for (auto &num: nums)
        {
            if (++num_map_count[num] > 1)
                return true; 
        }
        return false;
    }
};