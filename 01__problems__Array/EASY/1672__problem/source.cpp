// 1672. Richest Customer Wealth
// https://leetcode.com/problems/richest-customer-wealth/description/


#include <iostream>
#include <string>
#include <vector>

using namespace std;


class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int max_wealth = 0;
        int wealth;
        
        for(int i = 0; i < accounts.size(); ++i)
        {
            wealth = 0;
            for (int j = 0; j < accounts[i].size(); ++j)
            {
                wealth += accounts[i][j];
            }
            max_wealth = max(max_wealth, wealth);
        }

        return max_wealth;
    }
};
