// 66. Plus One
// https://leetcode.com/problems/plus-one/description/


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
    vector<int> plusOne(vector<int>& digits) {
        int n = digits.size();
        int k = 1;
        
        for (int i = n - 1; i >= 0 && k > 0; --i)
        {
            k = digits[i] + k;
            digits[i] = k % 10;
            k /= 10;
        }

        while (k)
        {
            digits.insert(digits.begin(), k % 10);
            k /= 10;
        }

        return digits;
    }
};