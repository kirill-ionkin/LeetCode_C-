// 2917. Find the K-or of an Array
// https://leetcode.com/problems/find-the-k-or-of-an-array/description/


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
    int findKOr(vector<int>& nums, int k) {
        int ans = 0;
        for (int i = 0; i < 32; ++i)
        {
            int count_ones = 0;
            for (auto& num: nums)
            {
                if (num & (1 << i))
                {
                    ++count_ones;
                }
            }

            if (count_ones >= k)
            {
                ans += pow(2, i);
            }
        }

        return ans;
    }
};