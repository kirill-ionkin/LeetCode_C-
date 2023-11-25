// 961. N-Repeated Element in Size 2N Array
// https://leetcode.com/problems/n-repeated-element-in-size-2n-array/description/


#include <iostream>
#include <string>
#include <vector>
#include <unordered_map>


using namespace std;


class Solution {
public:
    int repeatedNTimes(vector<int>& nums) {
        unordered_map<int, int> num_map_count;

        for (int num: nums)
        {
            ++num_map_count[num];

            if (num_map_count[num] == 2)
                return num;
        }

        return 0;
    }
};

