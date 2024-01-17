// 2855. Minimum Right Shifts to Sort the Array
// https://leetcode.com/problems/minimum-right-shifts-to-sort-the-array/


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
    int minimumRightShifts(vector<int>& nums) {
        int n = nums.size();

        int right_shift = 0;
        int count_less_previous = 0;
        int idx_less_previous = 0;

        for (int i = 1; i < n; ++i)
        {
            if (nums[i] < nums[i - 1])
            {
                if (++count_less_previous > 1)
                    return -1;
                else
                    idx_less_previous = i;
            }
        }

        if (count_less_previous == 1)
        {
            if (nums[n - 1] < nums[0])
                return n - idx_less_previous;
            return -1;
        }

        return right_shift;
    }
};