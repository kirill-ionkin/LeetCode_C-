// 1351. Count Negative Numbers in a Sorted Matrix
// https://leetcode.com/problems/count-negative-numbers-in-a-sorted-matrix/description/


#include <iostream>
#include <string>
#include <vector>

using namespace std;


class Solution {
public:
    int countNegatives(vector<vector<int>>& grid) {
        int m = grid.size();
        int n = grid[0].size();

        int n_not_negative = 0;

        int last = n;
        int i =  0;
        for (; i < m; ++i)
        {
            if (last == 0)
            {
                break;
            }

            for (int j = 0; j < last; ++j)
            {
                if (grid[i][j] < 0)
                {
                    last = j;
                    break;
                }
                else
                    ++n_not_negative;
            }
        }
        return m*n - n_not_negative;
    }
};