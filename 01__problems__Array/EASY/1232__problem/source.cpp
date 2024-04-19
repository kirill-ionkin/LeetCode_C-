// 1232. Check If It Is a Straight Line
// https://leetcode.com/problems/check-if-it-is-a-straight-line/description/


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
    bool checkStraightLine(vector<vector<int>>& coordinates) {
        int n = coordinates.size();
        
        int x1 = coordinates[0][0];
        int y1 = coordinates[0][1];
        int x2 = coordinates[1][0];
        int y2 = coordinates[1][1];
        for (int i = 2; i < n; ++i)
        {
            int xi = coordinates[i][0];
            int yi = coordinates[i][1]; 

            if ((yi - y1) * (x2 - x1) != (xi - x1) * (y2 - y1))
            {
                return false;
            }
        }
        return true;
    }
};