// 1051. Height Checker
// https://leetcode.com/problems/height-checker/description/


#include <iostream>
#include <string>
#include <vector>
#include <algorithm>


using namespace std;


class Solution {
public:
    int heightChecker(vector<int>& heights) {
        vector<int> heights_sorted(heights);
        sort(heights_sorted.begin(), heights_sorted.end());

        int n_diff = 0;
        for (int i = 0; i < heights.size(); ++i)
        {
            if (heights[i] != heights_sorted[i])
                ++n_diff;
        }

        return n_diff;
    }
};