// 1748. Sum of Unique Elements
// https://leetcode.com/problems/sum-of-unique-elements/description/


#include <iostream>
#include <string>
#include <vector>
#include <unordered_map>


using namespace std;


class Solution {
public:
    int sumOfUnique(vector<int>& nums) {
        unordered_map<int, int> num_map_count;

        for (int num: nums)
            num_map_count[num]++;
        
        int sum = 0;
        for (auto & it: num_map_count)
        {
            if (it.second == 1)
                sum += it.first;
        }
        
        return sum;
    }
};
