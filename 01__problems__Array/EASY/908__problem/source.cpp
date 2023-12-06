// 908. Smallest Range I
// https://leetcode.com/problems/smallest-range-i/description/


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
    int smallestRangeI(vector<int>& nums, int k) {
        int min_num = nums[0];
        int max_num = nums[0];

        for (auto & num: nums)
        {
            if (num < min_num)
                min_num = num;
            else if (num > max_num)
                max_num = num;
        }

        return max(0, max_num - min_num - 2 * k);
    }
};