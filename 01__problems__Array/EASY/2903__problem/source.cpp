// 2903. Find Indices With Index and Value Difference I
// https://leetcode.com/problems/find-indices-with-index-and-value-difference-i/description/


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
    vector<int> findIndices(vector<int>& nums, int indexDifference, int valueDifference) {
        int n = nums.size();
        
        for (int i = 0; i < n - indexDifference; ++i)
        {
            for (int j = i + indexDifference; j < n; ++j)
            {
                if (abs(nums[i] - nums[j]) >= valueDifference)
                {
                    return {i, j};
                }
            }
        }

        return {-1, -1};
    }
};