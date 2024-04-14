// 2239. Find Closest Number to Zero
// https://leetcode.com/problems/find-closest-number-to-zero/description/


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
    int findClosestNumber(vector<int>& nums) {
        int min_distance = INT_MAX;
        int answer = INT_MAX;
        for (auto &num: nums)
        {
            int distance = abs(num);
            if (distance < min_distance)
            {
                min_distance = distance;
                answer = num;
            }
            else if (distance == min_distance)
            {
                answer = num > 0 ? num : answer;
            }
        }

        return answer;
    }
};