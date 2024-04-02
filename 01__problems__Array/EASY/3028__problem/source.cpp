// 3028. Ant on the Boundary
// https://leetcode.com/problems/ant-on-the-boundary/description/


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
    int returnToBoundaryCount(vector<int>& nums) {
        int coord = 0;

        int count = 0;
        for (auto &num: nums)
        {
            coord += num;
            if (coord == 0)
            {
                ++count;
            }
        }

        return count;
    }
};