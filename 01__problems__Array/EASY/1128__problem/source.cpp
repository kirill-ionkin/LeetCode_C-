// 1128. Number of Equivalent Domino Pairs
// https://leetcode.com/problems/number-of-equivalent-domino-pairs/description/


#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <unordered_set>
#include <unordered_map>
#include <map>
#include <set>

#include <limits.h>

#include <cmath>

using namespace std;


class Solution {
public:
    int numEquivDominoPairs(vector<vector<int>>& dominoes) {
        unordered_map<int, int> domino_map_count;
        for (auto &domino: dominoes)
        {
            int min_num = min(domino[0], domino[1]);
            int max_num = max(domino[0], domino[1]);

            ++domino_map_count[10 * min_num + max_num];
        }

        int count = 0;
        for (auto & [domino, n]: domino_map_count)
        {
            count += n * (n - 1) / 2;
        }

        return count;
    }
};