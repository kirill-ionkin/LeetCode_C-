// 1260. Shift 2D Grid
// https://leetcode.com/problems/shift-2d-grid/description/


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
    vector<vector<int>> shiftGrid(vector<vector<int>>& grid, int k) {
        int m = grid.size();
        int n = grid[0].size();

        vector<vector<int>> ans(m, vector<int>(n));
        
        k %= (m * n);

        int idx = 0;
        while (idx < m * n)
        {
            int i = idx / n;
            int j = idx % n;

            int i_ = (idx + k) / n % m;
            int j_ = (idx + k) % n;

            ans[i_][j_] = grid[i][j];

            ++idx;
        }

        return ans;
    }
};