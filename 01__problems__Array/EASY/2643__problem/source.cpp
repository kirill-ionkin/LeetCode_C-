// 2643. Row With Maximum Ones
// https://leetcode.com/problems/row-with-maximum-ones/description/


#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <unordered_set>
#include <unordered_map>


using namespace std;


class Solution {
public:
    vector<int> rowAndMaximumOnes(vector<vector<int>>& mat) {
        int max_count_ones = 0;
        int max_count_row_idx = 0;

        for (int i = 0; i < mat.size(); ++i)
        {
            int count_ones = 0;
            for (int j = 0; j < mat[i].size(); ++j)
            {
                if (mat[i][j] == 1)
                    ++count_ones;
            }

            if (max_count_ones < count_ones)
            {
                max_count_ones = count_ones;
                max_count_row_idx = i;
            }

        }

        return {max_count_row_idx, max_count_ones};
    }
};
