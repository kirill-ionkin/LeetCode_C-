// 2373. Largest Local Values in a Matrix
// https://leetcode.com/problems/largest-local-values-in-a-matrix/description/


#include <iostream>
#include <string>
#include <vector>

using namespace std;


class Solution {
public:
    int max_from_grid_3_3(vector<vector<int>>& grid, int ic, int jc)
    {
        int max_ = grid[ic][jc];

        for (int i = ic - 1; i <= ic + 1; ++i)
        {
            for (int j = jc - 1; j <= jc + 1; ++j)
            {
                max_ = max(max_, grid[i][j]); 
            }
        }

        return max_;
    }

    vector<vector<int>> largestLocal(vector<vector<int>>& grid) {
        int n = grid.size();

        vector<vector<int>> ans;

        for (int i = 1; i <= n - 2; ++i)
        {
            vector<int> ans_i;
            for (int j = 1; j <= n - 2; ++j)
            {
                ans_i.push_back(max_from_grid_3_3(grid, i, j));                
            }
            ans.push_back(ans_i);
        }

        return ans;
    }
};
