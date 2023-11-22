// 2500. Delete Greatest Value in Each Row
// https://leetcode.com/problems/delete-greatest-value-in-each-row/description/


#include <iostream>
#include <string>
#include <vector>
#include <algorithm>


using namespace std;


class Solution {
public:
    int deleteGreatestValue(vector<vector<int>>& grid) {
        // sort each row
        for (vector<int> & row : grid)
            sort(row.rbegin(), row.rend());
        
        int sum = 0;

        int m = grid.size();
        int n = grid[0].size();

        for (int j = 0; j < n; ++j)
        {
            int max_num_from_rows = 0;
            for (int i = 0; i < m; ++i)
            {
                max_num_from_rows = max(max_num_from_rows, grid[i][j]);
            }

            sum += max_num_from_rows;
        }

        return sum;
    }
};