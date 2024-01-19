// 1886. Determine Whether Matrix Can Be Obtained By Rotation
// https://leetcode.com/problems/determine-whether-matrix-can-be-obtained-by-rotation/description/


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
    bool findRotation(vector<vector<int>>& mat, vector<vector<int>>& target) {
        int n = mat.size();
        vector<int> mat_count(2, 0);
        vector<int> target_count(2, 0);

        for (int i = 0; i < n; ++i)
        {
            for (int j = 0; j < n; ++j)
            {
                ++mat_count[mat[i][j]];
                ++target_count[target[i][j]];
            }
        }

        if (mat_count != target_count)
            return false;

        // 0-degrees check
        if (mat == target)
            return true;

        
        // reverse matrix bu 90 degrees
        int deg = 3;

        while (deg--)
        {
            for (int i = 0; i < n; ++i)
            {
                for (int j = i; j < n; ++j)
                {
                    swap(mat[i][j], mat[j][i]); // transpose matrix
                }
            }

            for (int i = 0; i < n; ++i)
                reverse(mat[i].begin(), mat[i].end());

            if (mat == target)
                return true;
        }

        return false;
    }
};