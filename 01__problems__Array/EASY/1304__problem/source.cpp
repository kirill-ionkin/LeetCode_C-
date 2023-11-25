// 1304. Find N Unique Integers Sum up to Zero
// https://leetcode.com/problems/find-n-unique-integers-sum-up-to-zero/description/


#include <iostream>
#include <string>
#include <vector>

using namespace std;


class Solution {
public:
    vector<int> sumZero(int n) {
        vector<int> ans;
        for (int i = 0; i < n / 2; ++i)
        {
            ans.push_back(i + 1);
            ans.push_back(-(i + 1));
        }

        if (n % 2)
            ans.push_back(0);

        return ans;
    }
};