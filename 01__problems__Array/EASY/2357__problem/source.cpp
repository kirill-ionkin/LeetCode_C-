// 2357. Make Array Zero by Subtracting Equal Amounts
// https://leetcode.com/problems/make-array-zero-by-subtracting-equal-amounts/description/


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
    int minimumOperations(vector<int>& nums) {
        unordered_set<int> set_nums;
        for (auto & num: nums)
        {
            if ((num != 0) && (set_nums.find(num) == set_nums.end()))
                set_nums.insert(num);
        }

        return set_nums.size();
    }
};
