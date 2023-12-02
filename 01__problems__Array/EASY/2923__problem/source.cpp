// 2923. Find Champion I
// https://leetcode.com/problems/find-champion-i/description/


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
    int findChampion(vector<vector<int>>& grid) {
        int n = grid.size();

        for (int i = 0; i < n; ++i)
        {
            int n_ones = 0;
            for (int j = 0; j < n; ++j)
            {
                if (i == j)
                    continue;
                else if (grid[i][j])
                    ++n_ones;
                else
                    break;
            }

            if (n_ones == n - 1)
                return i;
        }
        return n - 1;
    }
};