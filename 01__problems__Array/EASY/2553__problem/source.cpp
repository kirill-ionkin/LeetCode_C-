// 2553. Separate the Digits in an Array
// https://leetcode.com/problems/separate-the-digits-in-an-array/description/


#include <iostream>
#include <string>
#include <vector>

using namespace std;


class Solution {
public:
    vector<int> separateDigits(vector<int>& nums) {
        vector<int> ans;

        for (auto num: nums)
        {
            vector<int> tmp;
            while (num)
            {
                tmp.push_back(num % 10);
                num /= 10;
            }

            for (auto rit = tmp.rbegin(); rit != tmp.rend(); ++rit)
            ans.push_back(*rit);
        }

        return ans;
    }
};