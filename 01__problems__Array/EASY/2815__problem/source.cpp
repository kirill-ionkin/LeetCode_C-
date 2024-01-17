// 2815. Max Pair Sum in an Array
// https://leetcode.com/problems/max-pair-sum-in-an-array/


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
    int maxSum(vector<int>& nums) {
        unordered_map<int, vector<int>> max_digit_map_nums;
        for (auto& num: nums)
        {
            int current_num = num, max_digit = 0;
            while (current_num > 0)
            {
                max_digit = max(max_digit, current_num % 10);

                current_num /= 10;
            }

            max_digit_map_nums[max_digit].push_back(num);
        }

        int max_sum = -1;
        for (auto& data: max_digit_map_nums)
        {
            if (data.second.size() >= 2)
            {
                int max1 = max(data.second[0], data.second[1]);
                int max2 = min(data.second[0], data.second[1]);
                for (int i = 2; i < data.second.size(); ++i)
                {
                    int num = data.second[i];
                    if (num >= max1)
                    {
                        max2 = max1;
                        max1 = num;
                    }
                    else if ((num < max1) && (num > max2))
                    {
                        max2 = num;
                    }
                }
                max_sum = max(max_sum, max1+max2);
            }
        }

        return max_sum;
    }
};