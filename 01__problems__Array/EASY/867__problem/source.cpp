// 867. Transpose Matrix
// https://leetcode.com/problems/transpose-matrix/description/


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
    vector<vector<int>> transpose(vector<vector<int>>& matrix) {
        int m = matrix.size();
        int n = matrix[0].size();


        vector<vector<int>> matrix_t(n, vector<int>(m, 0));

        for (int i = 0; i < m; ++i)
        {
            for (int j = 0; j < n; ++j)
            {
                matrix_t[j][i] = matrix[i][j];
            }
        }

        return matrix_t;
    }
};