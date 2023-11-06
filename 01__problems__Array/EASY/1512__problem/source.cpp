// 1512. Number of Good Pairs
// https://leetcode.com/problems/number-of-good-pairs/description/


#include <iostream>
#include <vector>

using namespace std;


class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        int n = nums.size();
        int count_good_pairs = 0;


        for (int i = 0; i < n - 1; ++i)
        {
            for (int j = i + 1; j < n; ++j)
            {
                if (nums[i] == nums[j]) ++count_good_pairs;
            }
        }

        return count_good_pairs;
    }
};


// Решение с помощью unordered_map
class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        int n_good_pairs = 0;
        unordered_map<int, int> counter;

        for (auto num: nums)
            counter[num]++;

        for (const auto& [k, v] : counter)
            n_good_pairs += (v * (v - 1)) / 2;
        
        return n_good_pairs;
    }
};