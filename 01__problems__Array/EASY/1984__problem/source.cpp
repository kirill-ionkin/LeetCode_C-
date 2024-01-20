// 1984. Minimum Difference Between Highest and Lowest of K Scores
// https://leetcode.com/problems/minimum-difference-between-highest-and-lowest-of-k-scores/description/


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
    int minimumDifference(vector<int>& nums, int k) {
        int n = nums.size();
        
        if (k == 1)
            return 0;
        
        sort(nums.begin(), nums.end());

        int min_diff = INT_MAX;

        int end = k - 1;
        while (end < n)
        {
            min_diff = min(min_diff, nums[end] - nums[end - (k - 1)]);
            ++end;
        }

        return min_diff;
    }
};