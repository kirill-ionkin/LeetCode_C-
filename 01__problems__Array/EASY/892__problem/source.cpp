// 892. Surface Area of 3D Shapes
// https://leetcode.com/problems/surface-area-of-3d-shapes/description/


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
    int caclulate_surface_area(vector<vector<int>>& grid, int i, int j)
    {
        int n_ij = grid[i][j];

        int surface_area = 2 + 4 * n_ij;
        
        // upper    
        if (i - 1 >= 0)
            surface_area -= min(grid[i - 1][j], n_ij);

        // lower
        if (i + 1 < grid.size())
            surface_area -= min(grid[i + 1][j], n_ij);
        
        // left
        if (j - 1 >= 0)
            surface_area -= min(grid[i][j - 1], n_ij);

        // right
        if (j + 1 < grid.size())
            surface_area -= min(grid[i][j + 1], n_ij);
        
        return surface_area;
    }

    int surfaceArea(vector<vector<int>>& grid) {
        int n = grid.size();

        int surface_area = 0;
        for (int i = 0; i < n; ++i)
        {
            for (int j = 0; j < n; ++j)
            {
                if (grid[i][j] > 0)
                    surface_area += caclulate_surface_area(grid, i, j);
            }
        }

        return surface_area;
    }
};