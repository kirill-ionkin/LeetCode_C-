// 1991. Find the Middle Index in Array
// https://leetcode.com/problems/find-the-middle-index-in-array/description/


#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <unordered_set>
#include <unordered_map>
#include <map>
#include <set>


using namespace std;


class Solution {
public:
    int findMiddleIndex(vector<int>& nums) {
        int sum = 0;
        for (auto& num: nums)
            sum += num;
        
        int left_sum = 0;
        int right_sum = sum;

        for (int i = 0;  i < nums.size(); ++i)
        {
            if (i == 0)
                right_sum -= nums[0];
            else if (i < nums.size())
            {
                left_sum += nums[i - 1];
                right_sum -= nums[i];
            }

            if (left_sum == right_sum)
                return i;
        }
        return -1;
    }
};