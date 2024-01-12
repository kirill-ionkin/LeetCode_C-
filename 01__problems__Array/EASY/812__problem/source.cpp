// 812. Largest Triangle Area
// https://leetcode.com/problems/largest-triangle-area/description/


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
    double calculate_area(vector<vector<int>>& points, int i, int j, int k)
    {
        // point A
        int A_x = points[i][0];
        int A_y = points[i][1];

        // point B
        int B_x = points[j][0];
        int B_y = points[j][1];

        // point C
        int C_x = points[k][0];
        int C_y = points[k][1];

        double area = static_cast<double>(A_x * (B_y - C_y) + B_x * (C_y - A_y) + C_x * (A_y - B_y)) / 2;
        return abs(area);
    }

    double largestTriangleArea(vector<vector<int>>& points) {
        int n = points.size();

        double max_area = 0;
        for (int i = 0; i < n - 2; ++i)
        {
            for (int j = i + 1; j < n - 1; ++j)
            {                
                for (int k = j + 1; k < n; ++k)
                {                    
                    double area = calculate_area(points, i, j, k);
                    max_area = max(max_area, area);
                }
            }
        }

        return max_area;
    }
};