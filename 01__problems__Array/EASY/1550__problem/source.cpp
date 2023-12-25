// 1550. Three Consecutive Odds
// https://leetcode.com/problems/three-consecutive-odds/description/


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
    bool threeConsecutiveOdds(vector<int>& arr) {
        int n = arr.size();

        int i = 2;
        while (i < n)
        {
            if (arr[i] % 2 == 0)
            {
                i += 3;
                continue;
            }
            
            if (arr[i - 1] % 2 == 0)
            {
                i += 2;
                continue;
            }

            if (arr[i - 2] % 2 == 0)
            {
                ++i;
                continue;
            }

            return true;
        }
        return false;
    }
};