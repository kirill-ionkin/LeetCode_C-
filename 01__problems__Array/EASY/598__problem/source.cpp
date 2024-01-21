// 598. Range Addition II
// https://leetcode.com/problems/range-addition-ii/description/


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
    int maxCount(int m, int n, vector<vector<int>>& ops) {
        int min_width = m;
        int min_height = n;
        for (auto &op: ops)
        {
            int w = op[0];
            int h = op[1];

            min_width = min(min_width, w);
            min_height = min(min_height, h);
        }

        return min_width * min_height;
    }
};