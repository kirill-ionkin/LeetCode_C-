// 3005. Count Elements With Maximum Frequency
// https://leetcode.com/problems/count-elements-with-maximum-frequency/description/


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


class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {
        vector<int> freqs(101, 0);
        for (auto& num: nums)
        {
            ++freqs[num];
        }
        
        int count = 0;
        int max_freq = 0;
        for (auto freq: freqs)
        {
            if (freq == max_freq)
            {
                count += freq;
            }
            else if (freq > max_freq)
            {
                max_freq = freq;
                count = freq;
            }
        }

        return count;
    }
};