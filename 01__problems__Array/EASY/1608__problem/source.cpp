// https://leetcode.com/problems/special-array-with-x-elements-greater-than-or-equal-x/description/
// 1608. Special Array With X Elements Greater Than or Equal X


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
    int specialArray(vector<int>& nums) {
        int count = 0;
        unordered_map<int, int> num_map_count;
        for (auto& num: nums)
        {
            ++num_map_count[num];
            ++count;
        }

        int i = 0;
        while (i <= 1000 && count > 0 && count >= i)
        {
            if (count == i)
                return i;
            else if (num_map_count.find(i) != num_map_count.end())
                count -= num_map_count[i];
            
            ++i;
        }
        return -1;
    }
};