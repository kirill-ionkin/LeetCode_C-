// 1337. The K Weakest Rows in a Matrix
// https://leetcode.com/problems/the-k-weakest-rows-in-a-matrix/description/


#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <unordered_set>
#include <unordered_map>
#include <set>


using namespace std;


// 1.
class Solution {
public:
    static bool comparator(vector<int>& row1, vector<int>& row2)
    {
        if (row1[1] == row2[1])
            return row1[0] < row2[0];
        else
            return row1[1] < row2[1];
    }

    vector<int> kWeakestRows(vector<vector<int>>& mat, int k) {
        vector<vector<int>> ans;
        for (int i = 0; i < mat.size(); ++i)
        {
            int n_soldiers = 0;
            for (int j = 0; j < mat[i].size(); ++j)
            {
                if (mat[i][j] == 1)
                    ++n_soldiers;
                else
                    break;
            }
            
            ans.push_back({i, n_soldiers});
        }

        sort(ans.begin(), ans.end(), comparator);

        vector<int> idxs;
        for (int i = 0; i < k; ++i)
        {
            idxs.push_back(ans[i][0]);
        }

        return idxs;
    }
};

// 2. ordered_set<pair<int, int>>
class Solution {
public:
    vector<int> kWeakestRows(vector<vector<int>>& mat, int k) {
        set<pair<int, int>> set_count_ids;

        for (int i = 0; i < mat.size(); ++i)
        {
            int n_soldiers = 0;
            for (int j = 0; j < mat[i].size(); ++j)
            {
                if (mat[i][j] == 0)
                    break;

                ++n_soldiers;
            }
            set_count_ids.insert({n_soldiers, i});
        }

        vector<int> ans;
        for (auto& data: set_count_ids)
        {
            if (k == 0)
                break;

            ans.push_back(data.second);
            --k;
        }

        return ans;
    }
};