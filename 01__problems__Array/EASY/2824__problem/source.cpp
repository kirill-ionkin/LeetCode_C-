// 2824. Count Pairs Whose Sum is Less than Target
// https://leetcode.com/problems/count-pairs-whose-sum-is-less-than-target/description/


#include <iostream>
#include <string>
#include <vector>

using namespace std;


class Solution {
public:
    int countPairs(vector<int>& nums, int target) {
        int n = 0;

        for (int i = 0; i < nums.size(); ++i)
        {
            for (int j = i + 1; j < nums.size(); ++j)
            {
                if(nums[i] + nums[j] < target) ++n;
            }
        }
        return n;
    }
};
