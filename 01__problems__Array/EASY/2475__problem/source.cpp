// 2475. Number of Unequal Triplets in Array
// https://leetcode.com/problems/number-of-unequal-triplets-in-array/description/


#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <unordered_set>
#include <unordered_map>
#include <map>
#include <set>


using namespace std;


// 1. 3 loops 
class Solution {
public:
    int unequalTriplets(vector<int>& nums) {
        int n = nums.size();

        int n_triplets = 0;
        for (int i = 0;  i < n - 2; ++i)
        {
            for (int j = i + 1; j < n - 1; ++j)
            {
                if (nums[i] == nums[j]) continue;
                else
                {
                    for (int k = j + 1; k < n; ++k)
                    {
                        if (nums[k] != nums[j] && nums[k] != nums[i])
                            ++n_triplets;                        
                    }
                }
            }
        }

        return n_triplets;
    }
};


// 2. more effective implementation
