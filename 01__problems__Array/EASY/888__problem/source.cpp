// 888. Fair Candy Swap
// https://leetcode.com/problems/fair-candy-swap/description/


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
    vector<int> fairCandySwap(vector<int>& aliceSizes, vector<int>& bobSizes) {
        int alice_sum = 0;
        for (auto &num: aliceSizes)
            alice_sum += num;
        
        int bob_sum = 0;
        for (auto &num: bobSizes)
            bob_sum += num;
        
        // sum_alice - x + y = sum_bob + x - y
        // x - y = (sum_alice - sum_bob) / 2
        // d = x - y
        
        int d = (alice_sum - bob_sum) / 2;

        unordered_set<int> y_plus_d;
        for (auto &num: bobSizes)
            y_plus_d.insert(num + d);

        for (auto &num: aliceSizes)
        {
            if (y_plus_d.find(num) != y_plus_d.end())
                return {num, num - d};
        }

        return {-1, -1};
    }
};