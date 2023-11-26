// 944. Delete Columns to Make Sorted
// https://leetcode.com/problems/delete-columns-to-make-sorted/description/


#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <unordered_set>
#include <unordered_map>


using namespace std;


class Solution {
public:
    int minDeletionSize(vector<string>& strs) {
        if (strs.size() == 1)
            return 0;
        

        int n_cols_to_del = 0;

        for (int j = 0; j < strs[0].size(); ++j)
        {
            for (int i = 1; i < strs.size(); ++i)
            {
                if (strs[i - 1][j] > strs[i][j])
                {
                    ++n_cols_to_del;
                    break;
                }
            }
        }

        return n_cols_to_del;
    }
};

