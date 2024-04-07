// 3033. Modify the Matrix
// https://leetcode.com/problems/modify-the-matrix/description/


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
    vector<vector<int>> modifiedMatrix(vector<vector<int>>& matrix) {
        int m = matrix.size();
        int n = matrix[0].size();

        vector<int> cols_max(n, 0);
        for (int j = 0; j < n; ++j)
        {
            int col_max = -1;
            for (int i = 0; i < m; ++i)
            {
                col_max = max(col_max, matrix[i][j]);
            }

            cols_max[j] = col_max;
        }

        for (int j = 0; j < n; ++j)
        {
            for (int i = 0; i < m; ++i)
            {
                if (matrix[i][j] == -1)
                {
                    matrix[i][j] = cols_max[j];
                }
            }
        }

        return matrix;
    }
};