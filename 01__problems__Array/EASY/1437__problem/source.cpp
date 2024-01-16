// 1437. Check If All 1's Are at Least Length K Places Away
// https://leetcode.com/problems/check-if-all-1s-are-at-least-length-k-places-away/description/


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
    bool kLengthApart(vector<int>& nums, int k) {
        int n = nums.size();
        bool possible = true;
        
        // find first one
        int i = 0;
        for (; i < n; ++i)
        {
            if (nums[i] == 1)
                break;
        }

        if (i == n - 1)
            return true;
        
        
        int previous_one_idx = i; 
        for (int j = i + 1; j < n; ++j)
        {
            if (nums[j] == 1)
            {
                if (j - previous_one_idx <= k)
                    return false;
                else
                    previous_one_idx = j;
            }
        }
        return true;
    }
};