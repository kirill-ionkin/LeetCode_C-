// 628. Maximum Product of Three Numbers
// https://leetcode.com/problems/maximum-product-of-three-numbers/description/


#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <unordered_set>
#include <unordered_map>
#include <map>
#include <set>

#include <limits.h>

#include <cmath>

using namespace std;


class Solution {
public:
    int maximumProduct(vector<int>& nums) {
        int n = nums.size();
        
        sort(nums.begin(), nums.end());

        int d1 = nums[n - 1] * nums[n - 2] * nums[n - 3];
        int d2 = nums[0] * nums[1] * nums[n - 1];

        return max(d1, d2);
    }
};