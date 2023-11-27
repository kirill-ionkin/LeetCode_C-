// 2206. Divide Array Into Equal Pairs
// https://leetcode.com/problems/divide-array-into-equal-pairs/description/


#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <unordered_set>
#include <unordered_map>


using namespace std;


class Solution {
public:
    bool divideArray(vector<int>& nums) {
        unordered_map<int, int> num_map_count;
        for (auto num: nums)
            ++num_map_count[num];
        
        for (auto & data: num_map_count)
        {
            if (data.second % 2)
                return false;
        }

        return true;
    }
};
