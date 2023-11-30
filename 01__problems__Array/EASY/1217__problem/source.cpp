// 1217. Minimum Cost to Move Chips to The Same Position
// https://leetcode.com/problems/minimum-cost-to-move-chips-to-the-same-position/description/


#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <unordered_set>
#include <unordered_map>
#include <map>
#include <set>


using namespace std;


class Solution {
public:
    int minCostToMoveChips(vector<int>& position) {
        int n_even = 0;
        int n_odd = 0;

        for (int pos: position)
        {
            if (pos % 2)
            {
                ++n_odd;
            }
            else
            {
                ++n_even;
            }
        }

        return min(n_odd, n_even);  
    }
};