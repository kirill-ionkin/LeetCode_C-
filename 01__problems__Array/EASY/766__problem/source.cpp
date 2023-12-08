// 766. Toeplitz Matrix
// https://leetcode.com/problems/toeplitz-matrix/description/


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
    bool isToeplitzMatrix(vector<vector<int>>& matrix) {
        int m =  matrix.size();
        int n = matrix[0].size();

        int start_j = 0;
        while (start_j < n)
        {
            int i = 0;
            int j = start_j;
            int same_elem = matrix[i][j];
            while (++i < m && ++j < n)
            {
                if (matrix[i][j] != same_elem)
                    return false;
            }
            ++start_j;
        }

        int start_i = 1;
        while (start_i < m)
        {
            int j = 0;
            int i = start_i;
            int same_elem = matrix[i][j];
            while (++i < m && ++j < n)
            {
                if (matrix[i][j] != same_elem)
                    return false;
            }
            ++start_i;
        }

        return true;
    }
};