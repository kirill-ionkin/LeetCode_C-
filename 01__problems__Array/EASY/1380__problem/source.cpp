// 1380. Lucky Numbers in a Matrix
// https://leetcode.com/problems/lucky-numbers-in-a-matrix/description/


#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <unordered_set>
#include <unordered_map>
#include <map>
#include <set>


using namespace std;


// 1.
class Solution {
public:
    vector<int> luckyNumbers (vector<vector<int>>& matrix) {
        int m = matrix.size();
        int n = matrix[0].size();
        

        vector<int> min_rows(m, 0);
        vector<int> max_cols(n, 0);
        
        // find min on each row
        for (int i = 0; i < m; ++i)
        {
            int min_row = matrix[i][0];
            for (int j = 1; j < n; ++j)
            {
                min_row = min(min_row, matrix[i][j]);
            }
            min_rows[i] = min_row;
        }

        // find max on each col
        for (int j = 0; j < n; ++j)
        {
            int max_col = matrix[0][j];
            for (int i = 1; i < m; ++i)
            {
                max_col = max(max_col, matrix[i][j]);
            }
            max_cols[j] = max_col;
        }

        vector<int> ans;
        for (int i = 0; i < m; ++i)
        {
            for (int j = 0; j < n; ++j)
            {
                if (min_rows[i] == max_cols[j])
                    ans.push_back(min_rows[i]);
            }
        }

        return ans;
    }
};


// 2. optimize last step
class Solution {
public:
    vector<int> luckyNumbers (vector<vector<int>>& matrix) {
        int m = matrix.size();
        int n = matrix[0].size();
        

        vector<int> min_rows(m, 0);
        vector<int> max_cols(n, 0);
        
        // find min on each row
        for (int i = 0; i < m; ++i)
        {
            int min_row = matrix[i][0];
            for (int j = 1; j < n; ++j)
            {
                min_row = min(min_row, matrix[i][j]);
            }
            min_rows[i] = min_row;
        }

        // find max on each col
        for (int j = 0; j < n; ++j)
        {
            int max_col = matrix[0][j];
            for (int i = 1; i < m; ++i)
            {
                max_col = max(max_col, matrix[i][j]);
            }
            max_cols[j] = max_col;
        }

        vector<int> ans;
        sort(min_rows.begin(), min_rows.end());
        sort(max_cols.begin(), max_cols.end());

        int i = 0;
        int j = 0;

        while (i < min_rows.size() && j < max_cols.size())
        {
            if (min_rows[i] > max_cols[j])
                ++j;
            else if (min_rows[i] < max_cols[j])
                ++i;
            else
            {
                ans.push_back(min_rows[i]);
                ++i;
                ++j;
            }
        }
        return ans;
    }
};