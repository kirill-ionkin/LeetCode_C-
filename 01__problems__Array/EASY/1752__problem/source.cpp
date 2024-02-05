// 1752. Check if Array Is Sorted and Rotated
// https://leetcode.com/problems/check-if-array-is-sorted-and-rotated/description/


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
    bool check(vector<int>& nums) {
        int n = nums.size();
        
        vector<int> nums_sorted = nums;
        sort(nums_sorted.begin(), nums_sorted.end());

        for (int x = 0; x < n; ++x)
        {
            bool status = true;
            for (int i = 0; i < n; ++i)
            {
                if (nums_sorted[i] != nums[(i + x) % n])
                {
                    status = false;
                    break;
                }
            }

            if (status == true)
                return true;
        }
        return false;
    }
};