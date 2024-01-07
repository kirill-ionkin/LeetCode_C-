// 506. Relative Ranks
// https://leetcode.com/problems/relative-ranks/description/


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
    vector<string> findRelativeRanks(vector<int>& score) {
        int n = score.size();

        vector<string> ans(n, "");

        unordered_map<int, int> val_map_idx;
        for (int i = 0; i < n; ++i)
        {
            val_map_idx[score[i]] = i;
        }

        vector<int> score_ = score;
        sort(score_.rbegin(), score_.rend());


        for (int i = 0; i < n; ++i)
        {
            int val = score_[i];
            int idx = val_map_idx[val];

            if (i == 0)
                ans[idx] = "Gold Medal";
            else if (i == 1)
                ans[idx] = "Silver Medal";
            else if (i == 2)
                ans[idx] = "Bronze Medal"; 
            else
                ans[idx] = to_string(i + 1);
        }

        return ans;
    }
};