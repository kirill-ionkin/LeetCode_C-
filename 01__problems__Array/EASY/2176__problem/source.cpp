// 2176. Count Equal and Divisible Pairs in an Array
// https://leetcode.com/problems/count-equal-and-divisible-pairs-in-an-array/description/


#include <iostream>
#include <string>
#include <vector>

using namespace std;


class Solution {
public:
    int countPairs(vector<int>& nums, int k) {
        int n = nums.size();

        int n_pairs = 0;

        for (int i = 0; i < n - 1; ++i)
        {
            for (int j = i + 1; j < n; ++j)
            {
                if (nums[i] == nums[j] && i * j % k == 0)
                    ++n_pairs;
            }
        }

        return n_pairs;
    }
};