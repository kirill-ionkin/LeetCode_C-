// 2529. Maximum Count of Positive Integer and Negative Integer
// https://leetcode.com/problems/maximum-count-of-positive-integer-and-negative-integer/description/


#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <unordered_set>
#include <unordered_map>
#include <map>
#include <set>


using namespace std;


// 1. loop
class Solution {
public:
    int maximumCount(vector<int>& nums) {
        int n_pos = 0;
        int n_neg = 0;
        for (int i = 0; i < nums.size(); ++i)
        {
            if (nums[i] < 0)
                ++n_neg;
            else if (nums[i] > 0)
                ++n_pos;
        }

        return max(n_neg, n_pos);
    }
};


// 2. binary search
