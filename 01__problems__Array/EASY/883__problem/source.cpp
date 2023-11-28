// 883. Projection Area of 3D Shapes
// https://leetcode.com/problems/projection-area-of-3d-shapes/description/


#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <unordered_set>
#include <unordered_map>
#include <map>
#include <set>


using namespace std;


class Solution {
public:
    int projectionArea(vector<vector<int>>& grid) {
        int n = grid.size();

        int xy_area = 0;
        int xz_area = 0;
        int yz_area = 0;

        for (int i = 0; i < n; ++i)
        {
            int max_row_val = 0;
            for (int j = 0; j < n; ++j)
            {
                // xy_area
                if (grid[i][j] > 0) ++xy_area;

                max_row_val = max(max_row_val, grid[i][j]);
            }
            xz_area += max_row_val;
        }

        for (int j = 0; j < n; ++j)
        {
            int max_col_val = 0;
            for (int i = 0; i < n; ++i)
            {
                max_col_val = max(max_col_val, grid[i][j]);
            }
            yz_area += max_col_val;
        }

        return xy_area + xz_area + yz_area;
    }
};

