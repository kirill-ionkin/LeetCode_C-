// 2341. Maximum Number of Pairs in Array
// https://leetcode.com/problems/maximum-number-of-pairs-in-array/description/


#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <unordered_set>
#include <unordered_map>


using namespace std;


class Solution {
public:
    vector<int> numberOfPairs(vector<int>& nums) {
        unordered_map<int, int> num_map_count;
        for (int num: nums)
            ++num_map_count[num];

        int n_pairs = 0;
        int n_garbage = 0;

        for (auto& data: num_map_count)
        {
            n_pairs += data.second / 2;
            n_garbage += data.second % 2;
        }

        return {n_pairs, n_garbage};
    }
};