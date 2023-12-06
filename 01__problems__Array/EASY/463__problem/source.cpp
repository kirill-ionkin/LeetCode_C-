// 463. Island Perimeter
// https://leetcode.com/problems/island-perimeter/description/


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
    int islandPerimeter(vector<vector<int>>& grid) {
        int m = grid.size();
        int n = grid[0].size();

        int p = 0;
        for (int i = 0; i < m; ++i)
        {
            for (int j = 0; j < n; ++j)
            {
                if (grid[i][j] == 1)
                {
                    p += 4;

                    // check, is there neighbours
                    // 1. down
                    if (i + 1 < m && grid[i + 1][j] == 1)
                        --p;
                    
                    // 2. up
                    if (i - 1 >= 0 && grid[i - 1][j] == 1)
                        --p;
                    
                    // right
                    if (j + 1 < n && grid[i][j + 1] == 1)
                        --p;
                    
                    // left
                    if (j - 1 >= 0 && grid[i][j - 1] == 1)
                        --p;
                }
            }
        }
        return p;
    }
};
