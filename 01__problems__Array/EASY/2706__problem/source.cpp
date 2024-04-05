// 2706. Buy Two Chocolates
// https://leetcode.com/problems/buy-two-chocolates/description/


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
    int buyChoco(vector<int>& prices, int money) {
        sort(prices.begin(), prices.end());
        
        int sum_prices = prices.at(0) + prices.at(1);
        return (sum_prices > money) ? money : money - sum_prices;
    }
};