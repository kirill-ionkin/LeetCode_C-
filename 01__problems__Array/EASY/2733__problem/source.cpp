// 2733. Neither Minimum nor Maximum
// https://leetcode.com/problems/neither-minimum-nor-maximum/description/


#include <iostream>
#include <string>
#include <vector>

using namespace std;


class Solution {
public:
    int findNonMinOrMax(vector<int>& nums) {
        if (nums.size() <= 2)
            return -1;
        
        int min_n = min(nums[0], nums[1]);
        int max_n = max(nums[0], nums[1]);

        for (int i = 2; i < nums.size(); ++i)
        {
            int n_i = nums[i];
            if (n_i > max_n)
                return max_n;
            else if (n_i < min_n)
                return min_n;
            else if (min_n < n_i && n_i < max_n)
                return n_i;
        }
        return -1;
    }
};
