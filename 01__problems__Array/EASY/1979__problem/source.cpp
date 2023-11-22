// 1979. Find Greatest Common Divisor of Array
// https://leetcode.com/problems/find-greatest-common-divisor-of-array/description/


#include <iostream>
#include <string>
#include <vector>

using namespace std;


class Solution {
public:
    int findGCD(vector<int>& nums) {
        int max_num = nums[0];
        int min_num = nums[0];

        for (int i = 1; i < nums.size(); ++i)
        {
            if (nums[i] > max_num)
                max_num = nums[i];
            
            else if (nums[i] < min_num)
                min_num = nums[i];
        }

        while (min_num)
        {
            int tmp = max_num;
            max_num = min_num;
            min_num = tmp % min_num;
        }

        return abs(max_num);

    }
};