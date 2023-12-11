// 2460. Apply Operations to an Array
// https://leetcode.com/problems/apply-operations-to-an-array/description/


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
    vector<int> applyOperations(vector<int>& nums) {
        for (int i = 0; i < nums.size() - 1; ++i)
        {
            if (nums[i] == nums[i + 1])
            {
                nums[i] = nums[i] * 2;
                nums[i + 1] = 0;
            }
        }
        
        int zero_idx = -1;
        for (int i = 0; i < nums.size(); ++i)
        {
            if (zero_idx == -1 && nums[i] == 0)
                zero_idx = i;
            else if (zero_idx != -1 && nums[i] != 0)
            {
                int tmp = nums[i];
                nums[i] = nums[zero_idx];
                nums[zero_idx] = tmp;

                ++zero_idx;
            }
        }

        return nums;
    }
};