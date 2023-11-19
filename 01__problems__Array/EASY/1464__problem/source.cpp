// 1464. Maximum Product of Two Elements in an Array
// https://leetcode.com/problems/maximum-product-of-two-elements-in-an-array/description/


#include <iostream>
#include <string>
#include <vector>

using namespace std;


class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int max_num1 = max(nums[0], nums[1]);
        int max_num2 = min(nums[0], nums[1]);

        int tmp;
        for (int i = 2; i < nums.size(); ++i)
        {
            tmp = nums[i];

            if  (tmp >= max_num1)
            {
                max_num2 = max_num1;
                max_num1 = tmp;
            }
            else if(tmp > max_num2)
            {
                max_num2 = tmp;
            }
        }

        return (max_num1 - 1) * (max_num2 - 1);
    }
};