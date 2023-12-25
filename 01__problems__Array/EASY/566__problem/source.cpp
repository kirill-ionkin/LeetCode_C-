// 566. Reshape the Matrix
// https://leetcode.com/problems/reshape-the-matrix/description/


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
    vector<vector<int>> matrixReshape(vector<vector<int>>& mat, int r, int c) {
        int m = mat.size();
        int n = mat[0].size();

        if (m * n != r * c)
            return mat;
        
        vector<vector<int>> reshaped_mat(r, vector<int>(c, 0));
        int k = 0;
        for (int i = 0; i < m; ++i)
        {
            for (int j = 0; j < n; ++j)
            {
                int i_ = k / c;
                int j_ = k % c;
                reshaped_mat[i_][j_] = mat[i][j];
                ++k;
            }
        }

        return reshaped_mat;
    }
};