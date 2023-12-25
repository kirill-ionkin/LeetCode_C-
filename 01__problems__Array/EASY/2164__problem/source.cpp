// 2164. Sort Even and Odd Indices Independently
// https://leetcode.com/problems/sort-even-and-odd-indices-independently/description/


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
    vector<int> sortEvenOdd(vector<int>& nums) {
        int n = nums.size();

        vector<int> nums_odd_idx;
        vector<int> nums_even_idx;
        for (int i = 0; i < n; ++i)
        {
            if (i % 2 == 0)
                nums_even_idx.push_back(nums[i]);
            else
                nums_odd_idx.push_back(nums[i]);
        }

        // sort odd
        sort(nums_odd_idx.begin(), nums_odd_idx.end(), [](const int& num1, const int& num2){return num1 > num2;});
        // sort even
        sort(nums_even_idx.begin(), nums_even_idx.end());

        vector<int> ans(n, 0);
        int i = 0, j = 0;
        while (i < nums_even_idx.size())
        {
            ans[j] = nums_even_idx[i];
            i++;
            j += 2;
        }

        i = 0, j = 1;
        while (i < nums_odd_idx.size())
        {
            ans[j] = nums_odd_idx[i];
            i++;
            j += 2;
        }

        return ans;
    }
};