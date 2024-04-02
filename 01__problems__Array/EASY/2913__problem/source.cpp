// 2913. Subarrays Distinct Element Sum of Squares I
// https://leetcode.com/problems/subarrays-distinct-element-sum-of-squares-i/description/


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
    int sumCounts(vector<int>& nums) {
        int n = nums.size();

        int sum = n;
        for (int i = 0; i < n - 1; ++i)
        {
            unordered_set<int> unique_elems({nums[i]});
            for (int j = i + 1; j < n; ++j)
            {
                unique_elems.insert(nums[j]);
                
                sum += std::pow(unique_elems.size(), 2);
            }
        }

        return sum;
    }
};