// 3074. Apple Redistribution into Boxes
// https://leetcode.com/problems/apple-redistribution-into-boxes/description/


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
    int minimumBoxes(vector<int>& apple, vector<int>& capacity) {
        int apple_count = 0;
        for (auto& ap: apple)
        {
            apple_count += ap;
        }

        sort(capacity.begin(), capacity.end());

        int n = capacity.size();
        int all_capacity = 0;
        int i = n - 1;
        while (all_capacity < apple_count)
        {
            all_capacity += capacity[i];
            --i;
        }

        return n - 1 - i;
    }
};