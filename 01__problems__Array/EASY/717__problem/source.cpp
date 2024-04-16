// 717. 1-bit and 2-bit Characters
// https://leetcode.com/problems/1-bit-and-2-bit-characters/description/


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
    bool isOneBitCharacter(vector<int>& bits) {
        int n = bits.size();

        int i = 0;
        while (i < n - 1)
        {
            if ((i == n - 2) && (bits[i] == 1))
            {
                return false;
            }
            else if (bits[i])
            {
                i += 2;
            }
            else
            {
                ++i;
            }
        }
        return true;
    }
};