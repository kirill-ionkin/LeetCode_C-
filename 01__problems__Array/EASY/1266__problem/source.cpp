// 1266. Minimum Time Visiting All Points
// https://leetcode.com/problems/minimum-time-visiting-all-points/description/


#include <iostream>
#include <string>
#include <vector>

using namespace std;


class Solution {
public:
    int minTimeToVisitAllPoints(vector<vector<int>>& points) {
        int min_time = 0;

        int prev_x = points[0][0];
        int prev_y = points[0][1];

        for (int i = 0; i < points.size(); ++i)
        {
            min_time += max(abs(prev_x - points[i][0]), abs(prev_y - points[i][1]));

            prev_x = points[i][0];
            prev_y = points[i][1];
        }

        return min_time;
    }
};