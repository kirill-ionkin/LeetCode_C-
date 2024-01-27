// 2133. Check if Every Row and Column Contains All Numbers
// https://leetcode.com/problems/check-if-every-row-and-column-contains-all-numbers/description/


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
    void clear_vector(vector<int>& data)
    {
        for (int i = 0; i < data.size(); ++i)
            data[i] = 0;
    }

    bool checkValid(vector<vector<int>>& matrix) {
        int n = matrix.size();

        vector<int> row(n, 0);
        vector<int> col(n, 0);
        for (int i = 0; i < n; ++i)
        {
            for (int j = 0; j < n; ++j)
            {
                int n_ij = matrix[i][j];
                int n_ji = matrix[j][i];

                if (row[n_ij - 1] == 1 || col[n_ji - 1] == 1)
                    return false;
                else
                {
                    ++row[n_ij - 1];
                    ++col[n_ji - 1];
                }
            }
            clear_vector(row);
            clear_vector(col);
        }

        return true;
    }
};