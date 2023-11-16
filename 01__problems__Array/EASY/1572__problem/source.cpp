// 1572. Matrix Diagonal Sum
// https://leetcode.com/problems/matrix-diagonal-sum/description/


#include <iostream>
#include <string>
#include <vector>

using namespace std;


class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
        int n = mat.size();

        int sum_diag = 0;
        for (int i = 0; i < mat.size(); ++i)
        {
            sum_diag += mat[i][i];
            sum_diag += mat[n - 1 - i][i];    
        }

        if (n % 2)
            sum_diag -= mat[n / 2][n / 2];
        return sum_diag;
    }
};
