// 303. Range Sum Query - Immutable
// https://leetcode.com/problems/range-sum-query-immutable/description/


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


class NumArray {
public:
    NumArray(vector<int>& nums) {
        data.reserve(nums.size());
        for (auto num: nums)
        {
            data.push_back(num);
        }
    }
    
    int sumRange(int left, int right) {
        int sum = 0;
        for (int i = left; i <= right; ++i)
        {
            sum += this->data[i];
        }

        return sum;
    }
private:
    vector<int> data;
};

/**
 * Your NumArray object will be instantiated and called as such:
 * NumArray* obj = new NumArray(nums);
 * int param_1 = obj->sumRange(left,right);
 */