// 2319. Check if Matrix Is X-Matrix
// https://leetcode.com/problems/check-if-matrix-is-x-matrix/description/


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
    bool checkXMatrix(vector<vector<int>>& grid) {
        int n = grid.size();

        for (int i = 0; i < n; ++i)
        {
            for (int j = 0 ; j < n; ++j)
            {
                if (i == j || i == n - 1 - j)
                {
                    if (grid[i][j] == 0)
                        return false;
                }
                else if (grid[i][j] != 0)
                    return false;
            }
        }
        return true;
    }
};