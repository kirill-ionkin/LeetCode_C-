// 2778. Sum of Squares of Special Elements
// https://leetcode.com/problems/sum-of-squares-of-special-elements/description/


#include <iostream>
#include <string>
#include <vector>

using namespace std;


class Solution {
public:
    int sumOfSquares(vector<int>& nums) {
        int n = nums.size();

        int sum_squares = 0;
        for (int i = 0; i < nums.size(); ++i)
        {
            if (n % (i + 1) == 0)
                sum_squares += nums[i] * nums[i];
        }

        return sum_squares;
    }
};