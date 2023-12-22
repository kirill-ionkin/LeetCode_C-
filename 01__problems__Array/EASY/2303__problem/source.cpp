// 2303. Calculate Amount Paid in Taxes
// https://leetcode.com/problems/calculate-amount-paid-in-taxes/description/


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
    double calculateTax(vector<vector<int>>& brackets, int income) {
        double taxes = 0;

        int prev_bound = 0;

        int i = 0;
        while (income > 0)
        {
            int delta = min(brackets[i][0] - prev_bound, income);
            taxes += static_cast<double>(delta * brackets[i][1]) / 100;
            
            income -= delta;
            prev_bound = brackets[i][0];
            ++i;
        }

        return taxes;
    }
};