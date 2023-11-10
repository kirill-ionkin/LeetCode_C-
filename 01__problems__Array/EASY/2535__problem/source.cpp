// 2535. Difference Between Element Sum and Digit Sum of an Array
// https://leetcode.com/problems/difference-between-element-sum-and-digit-sum-of-an-array/description/


#include <iostream>
#include <string>
#include <vector>

using namespace std;


class Solution {
public:
    int sum_digits(int num)
    {
        int sum = 0;
        while (num)
        {
            sum += (num % 10);
            num /= 10;
        }

        return sum;
    }

    int differenceOfSum(vector<int>& nums) {
        int element_sum = 0;
        int digit_sum = 0;

        for (int i = 0; i < nums.size(); ++i)
        {
            element_sum += nums[i];
            digit_sum += sum_digits(nums[i]);
        }

        return abs(element_sum - digit_sum);
    }
};