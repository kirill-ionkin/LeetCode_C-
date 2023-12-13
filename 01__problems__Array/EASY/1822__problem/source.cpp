// 1822. Sign of the Product of an Array
// https://leetcode.com/problems/sign-of-the-product-of-an-array/description/


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
    int arraySign(vector<int>& nums) {
        int n_neg = 0;
        for (auto& num: nums)
        {
            if (num == 0)
                return 0;
            
            if (num < 0)
                ++n_neg;
        }

        return (n_neg % 2) ? -1 : 1;
    }
};