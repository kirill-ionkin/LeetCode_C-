// 2057. Smallest Index With Equal Value
// https://leetcode.com/problems/smallest-index-with-equal-value/description/


#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <unordered_set>
#include <unordered_map>
#include <map>
#include <set>


using namespace std;


class Solution {
public:
    int smallestEqual(vector<int>& nums) {
        for (int i = 0; i < nums.size(); ++i)
        {
            if (i % 10 == nums[i])
                return i;
        }

        return -1;
    }
};