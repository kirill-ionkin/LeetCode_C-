// 2455. Average Value of Even Numbers That Are Divisible by Three
// https://leetcode.com/problems/average-value-of-even-numbers-that-are-divisible-by-three/description/


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
    int averageValue(vector<int>& nums) {
        int count = 0;
        int sum = 0;
        for (int& num: nums)
        {
            if (num % 6 == 0)
            {
                sum += num;
                ++count;
            }
        }

        if (count == 0)
            return 0;
        
        return static_cast<double>(sum) / count;
    }
};