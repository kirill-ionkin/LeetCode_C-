// 746. Min Cost Climbing Stairs
// https://leetcode.com/problems/min-cost-climbing-stairs/description/


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
    int minCostClimbingStairs(vector<int>& cost) {
        int n = cost.size();

        vector<int> min_cost(n + 2, 0);
        for (int i = 0; i < n; ++i)
        {
            min_cost[2 + i] = min(min_cost[2 + i - 1], min_cost[2 + i - 2]) + cost[i];
        }

        return min(min_cost[n], min_cost[n + 1]);
    }
};