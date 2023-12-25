// 2833. Furthest Point From Origin
// https://leetcode.com/problems/furthest-point-from-origin/description/


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
    int furthestDistanceFromOrigin(string moves) {
        int left = 0;
        int right = 0;
        int any = 0;
        for (auto& move: moves)
        {
            if (move == 'L')
                ++left;
            else if (move == 'R')
                ++right;
            else
                ++any;
        }

        return abs(left - right) + any;
    }
};