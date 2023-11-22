// 561. Array Partition
// https://leetcode.com/problems/array-partition/description/


#include <iostream>
#include <string>
#include <vector>
#include <algorithm>


using namespace std;


class Solution {
public:
    int arrayPairSum(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        
        int sum = 0;
        int i = 0;
        while (i < nums.size())
        {
            sum += nums[i];
            i += 2;
        }

        return sum;
    }
};