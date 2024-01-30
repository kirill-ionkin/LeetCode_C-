// 2644. Find the Maximum Divisibility Score
// https://leetcode.com/problems/find-the-maximum-divisibility-score/description/


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
    int maxDivScore(vector<int>& nums, vector<int>& divisors) {
        unordered_set<int> seen_divisors;

        int max_score = INT_MIN;
        int divisor_max_score = divisors[0];

        for (int &divisor: divisors)
        {
            if (seen_divisors.count(divisor) == 0)
            {
                int score = 0;
                for (int j = 0; j < nums.size(); ++j)
                {
                    if (nums[j] % divisor == 0) ++score;
                }

                if (score > max_score)
                {
                    max_score = score;
                    divisor_max_score = divisor;
                }
                else if (score == max_score && divisor < divisor_max_score)
                    divisor_max_score = divisor;
            }
        }

        return divisor_max_score;
    }
};