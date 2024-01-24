// 121. Best Time to Buy and Sell Stock
// https://leetcode.com/problems/best-time-to-buy-and-sell-stock/


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
    int maxProfit(vector<int>& prices) {
        int best = 0;
        
        int n = prices.size();

        if (n == 1)
            return best;
        
        int min_l = INT_MAX;
        int max_r = INT_MIN;
        vector<int> min_left(n, 0);
        vector<int> max_right(n, 0);
        for (int i = 0; i < n; ++i)
        {
            min_l = min(min_l, prices[i]);
            min_left[i] = min_l;
        }

        for (int i = n - 1; i >= 0; --i)
        {
            max_r = max(max_r, prices[i]);
            max_right[i] = max_r;
        }

        for (int i = 1; i < n; ++i)
        {
            best = max(best, max_right[i] - min_left[i - 1]);
        }

        return best;

    }
};