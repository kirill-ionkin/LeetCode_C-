// 1779. Find Nearest Point That Has the Same X or Y Coordinate
// https://leetcode.com/problems/find-nearest-point-that-has-the-same-x-or-y-coordinate/description/


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
    int nearestValidPoint(int x, int y, vector<vector<int>>& points) {
        int idx = -1;
        int min_dist = INT_MAX;
        
        for (int i = 0; i < points.size(); ++i)
        {
            int xi = points[i][0];
            int yi = points[i][1];

            if (xi != x && yi != y)
                continue;

            int dist = abs(x - xi) + abs(y - yi);
            if (dist < min_dist)
            {
                min_dist = dist;
                idx = i;
            }
        }

        return idx;
    }
};

