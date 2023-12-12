// 2639. Find the Width of Columns of a Grid
// https://leetcode.com/problems/find-the-width-of-columns-of-a-grid/description/


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
    vector<int> findColumnWidth(vector<vector<int>>& grid) {
        int m = grid.size();
        int n = grid[0].size();

        vector<int> ans(n, 0);
        for (int j = 0; j < n; ++j)
        {
            int max_width = 0;
            for (int i = 0; i < m; ++i)
            {
                string sij = to_string(grid[i][j]);
                int s_ij_length = sij.size();
                max_width = max(max_width, s_ij_length);
            }
            ans[j] = max_width;
        }

        return ans;
    }
};
