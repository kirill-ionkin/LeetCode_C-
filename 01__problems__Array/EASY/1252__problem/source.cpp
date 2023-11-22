// 1252. Cells with Odd Values in a Matrix
// https://leetcode.com/problems/cells-with-odd-values-in-a-matrix/description/


#include <iostream>
#include <string>
#include <vector>

using namespace std;


class Solution {
public:
    void increment_row_i(vector<vector<int>>& matrix, int i)
    {
        int m = matrix[i].size();

        for (int j = 0 ; j < m; ++j)
        {
            ++matrix[i][j];
        }
    }

    void increment_col_j(vector<vector<int>>& matrix, int j)
    {
        int n = matrix.size();

        for (int i = 0; i < n; ++i)
        {
            ++matrix[i][j];
        }
    }

    int oddCells(int m, int n, vector<vector<int>>& indices) {
        vector<vector<int>> matrix(m, vector<int>(n));

        for (vector<int> idxs: indices)
        {
            int i = idxs[0];
            int j = idxs[1];

            increment_row_i(matrix, i);
            increment_col_j(matrix, j);
        }

        int n_odds = 0;
        for (int i = 0; i < m; ++i)
        {
            for (int j = 0; j < n; ++j)
            {
                if (matrix[i][j] % 2 == 1)
                    ++n_odds;
            }
        }

        return n_odds;
    }
};