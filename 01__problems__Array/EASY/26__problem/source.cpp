// 26. Remove Duplicates from Sorted Array
// https://leetcode.com/problems/remove-duplicates-from-sorted-array/description/


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
    int removeDuplicates(vector<int>& nums) {
        int n = nums.size();
        
        int last_num = -101;
        int n_unique = 0;
        for (int i = 0; i < n; ++i)
        {
            if (nums[i] != last_num)
            {
                ++n_unique;
                nums[n_unique - 1] = last_num = nums[i];
            }
        }

        return n_unique;
    }
};