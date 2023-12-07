// 2562. Find the Array Concatenation Value
// https://leetcode.com/problems/find-the-array-concatenation-value/description/


#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <unordered_set>
#include <unordered_map>
#include <map>
#include <set>


using namespace std;


class Solution {
public:
    long long findTheArrayConcVal(vector<int>& nums) {
        long long concat_val = 0;

        int l = 0;
        int r = nums.size() - 1;

        while (l < r)
        {
            string l_str = to_string(nums[l]);
            string r_str = to_string(nums[r]);

            concat_val +=  stoll(l_str + r_str);

            ++l;
            r--;
        }

        if (l == r)
            concat_val += nums[l];

        return concat_val;
    }
};