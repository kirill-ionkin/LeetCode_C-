// 989. Add to Array-Form of Integer
// https://leetcode.com/problems/add-to-array-form-of-integer/description/


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
    vector<int> addToArrayForm(vector<int>& num, int k) {
        int n = num.size();

        for (int i = n - 1; i >= 0 && k; --i)
        {
            int sum = num[i] + k % 10;
            num[i] = sum % 10;
            k /= 10;
            k += sum / 10;
        }

        while (k)
        {
            num.insert(num.begin(), k % 10);
            k /= 10;
        }

        return num;
    }
};