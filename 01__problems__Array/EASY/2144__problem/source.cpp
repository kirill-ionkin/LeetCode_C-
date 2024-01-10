// 2144. Minimum Cost of Buying Candies With Discount
// https://leetcode.com/problems/minimum-cost-of-buying-candies-with-discount/description/


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
    int minimumCost(vector<int>& cost) {
        int sum = 0;
        
        sort(cost.begin(), cost.end(), greater<int>());
        for (int i = 0; i < cost.size(); ++i)
        {
            if ((i + 1) % 3 == 0)
                continue;
            
            sum += cost[i];
        }

        return sum;
    }
};