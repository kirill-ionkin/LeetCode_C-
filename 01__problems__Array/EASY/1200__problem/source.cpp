// 1200. Minimum Absolute Difference
// https://leetcode.com/problems/minimum-absolute-difference/description/


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
    vector<vector<int>> minimumAbsDifference(vector<int>& arr) {
        vector<vector<int>> ans;
        vector<int> idx = {1};

        sort(arr.begin(), arr.end());

        int min_abs_diff = arr[1] - arr[0];
        for (int i = 2; i < arr.size(); ++i)
        {
            int diff = arr[i] - arr[i - 1];

            if (min_abs_diff == diff)
                idx.push_back(i);
            else if (min_abs_diff > diff)
            {
                min_abs_diff = diff;
                idx.clear();
                idx.push_back(i);
            }
        }

        for (auto& i: idx)
            ans.push_back({arr[i - 1], arr[i]});

        return ans;
    }
};