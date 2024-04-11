// 3038. Maximum Number of Operations With the Same Score I
// https://leetcode.com/problems/maximum-number-of-operations-with-the-same-score-i/description/


#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <unordered_set>
#include <unordered_map>
#include <map>
#include <set>

#include <limits.h>

#include <cmath>

using namespace std;


class Solution {
public:
    int maxOperations(vector<int>& nums) {
        int n = nums.size();

        int score = nums[0] + nums[1];
        int max_number_of_operations = 1;
        for (int i = 2; i < n; i += 2)
        {
            if (nums[i] + nums[i + 1] != score)
            {
                break;
            }

            ++max_number_of_operations;
        }

        return max_number_of_operations;
    }
};