// 896. Monotonic Array
// https://leetcode.com/problems/monotonic-array/description/


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
    bool isMonotonic(vector<int>& nums) {
        int n = nums.size();

        if (n == 1)
            return true;
        
        // le
        int count = 0;
        for (int i = 1; i < n; ++i)
        {
            if (nums[i - 1] <= nums[i])
                ++count;
            else
                break;
        }
        if (count == n - 1)
            return true;
        

        // ge
        count = 0;
        for (int i = 1; i < n; ++i)
        {
            if (nums[i - 1] >= nums[i])
                ++count;
            else
                break;
        }
        if (count == n - 1)
            return true;
        
        return false;
    }
};