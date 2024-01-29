// 2784. Check if Array is Good
// https://leetcode.com/problems/check-if-array-is-good/description/


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
    bool isGood(vector<int>& nums) {
        int n = nums.size() - 1;
        
        vector<int> base(n, 0);

        for (auto& num: nums)
        {
            if (num > n) return false;
            else if (num != n && ++base[num - 1] == 2) return false;
            else if (num == n && ++base[num - 1] > 2) return false;
        }

        return true;
    }
};