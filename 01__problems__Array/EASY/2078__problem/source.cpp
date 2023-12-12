// 2078. Two Furthest Houses With Different Colors
// https://leetcode.com/problems/two-furthest-houses-with-different-colors/description/


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
    int maxDistance(vector<int>& colors) {
        int n = colors.size();

        int other_color_left_idx = 0;
        for (int i = 1; i < n; ++i)
        {
            if (colors[i] != colors[0])
                other_color_left_idx = i;
        }

        int other_color_right_idx = n - 1;
        for (int i = n - 1; i >= 0; --i)
        {
            if (colors[i] != colors[n - 1])
                other_color_right_idx = i;
        }

        return max(other_color_left_idx, n - 1 - other_color_right_idx);
    }
};