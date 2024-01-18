// 2946. Matrix Similarity After Cyclic Shifts
// https://leetcode.com/problems/matrix-similarity-after-cyclic-shifts/description/


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
    void shift_left(vector<int>& nums, vector<int>& shifted_nums, int k)
    {
        int n = nums.size();

        for (int i = 0; i < n; ++i)
            shifted_nums[(n + i - k) % n] = nums[i];
    }

    void shift_right(vector<int>& nums, vector<int>& shifted_nums, int k)
    {
        int n = nums.size();

        for (int i = 0; i < n; ++i)
            shifted_nums[(i + k) % n] = nums[i];
    }

    bool areSimilar(vector<vector<int>>& mat, int k) {
        int m = mat.size();
        int n = mat[0].size();

        k %= n;
        vector<int> shifted_row(n, 0);
        int i = 0;
        for (auto& row: mat)
        {
            if (i % 2 == 0) shift_left(row, shifted_row, k);
            else shift_right(row, shifted_row, k);

            for (int j = 0 ; j < n; ++j)
            {
                if (row[j] != shifted_row[j])
                    return false;
            }

            ++i;
        }

        return true;
    }
};