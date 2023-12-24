// 169. Majority Element
// https://leetcode.com/problems/majority-element/description/


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
    int majorityElement(vector<int>& nums) {
        int candidate = 0;
        int count = 0;

        for (auto& num: nums)
        {
            if (count == 0)
            {
                candidate = num;
            }

            if (num == candidate)
            {
                ++count;
            }
            else
                --count;
        }

        return candidate;
    }
};