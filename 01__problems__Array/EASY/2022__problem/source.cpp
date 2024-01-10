// 2022. Convert 1D Array Into 2D Array
// https://leetcode.com/problems/convert-1d-array-into-2d-array/description/


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
    vector<vector<int>> construct2DArray(vector<int>& original, int m, int n) {
        int length = original.size();

        if (length != m * n)
            return {};
        
        vector<vector<int>> matrix(m, vector<int>(n, 0));
        for (int i = 0; i < length; ++i)
        {
            int row = i / n; 
            int col = i % n;
            matrix[row][col] = original[i];
        }

        return matrix;
    }
};