// 2465. Number of Distinct Averages
// https://leetcode.com/problems/number-of-distinct-averages/description/


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
    int distinctAverages(vector<int>& nums) {
        int n = nums.size();

        sort(nums.begin(), nums.end());

        unordered_set<double> unique_averages;
        int l = 0, r = n - 1;
        while (l < r)
        {
            double average = static_cast<double>(nums[l] + nums[r]) / 2;
            unique_averages.insert(average);

            ++l;
            --r;
        }

        return  static_cast<int>(unique_averages.size());
    }
};