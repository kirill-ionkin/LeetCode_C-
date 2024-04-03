// 2848. Points That Intersect With Cars
// https://leetcode.com/problems/points-that-intersect-with-cars/description/


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
    int numberOfPoints(vector<vector<int>>& nums) {
        vector<int> points(101, 0);
        for (auto& num: nums)
        {
            int start = num.at(0);
            int end = num.at(1);

            for (int i = start; i < end + 1; ++i)
            {
                points[i] = 1;
            }
        }

        int sum = 0;
        for (auto point: points)
        {
            sum += point;
        }
        return sum;
    }
};