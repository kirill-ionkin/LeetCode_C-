// 2899. Last Visited Integers
// https://leetcode.com/problems/last-visited-integers/description/


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
    vector<int> lastVisitedIntegers(vector<string>& words) {
        vector<int> nums;
        vector<int> ans;
        
        int n_consecutive_prev = 0;
        for (int i = 0; i < words.size(); ++i)
        {
            if (words[i] != "prev")
            {
                nums.push_back(stoi(words[i]));
                n_consecutive_prev = 0;
            }
            else
            {
                ++n_consecutive_prev;

                if (n_consecutive_prev > nums.size())
                    ans.push_back(-1);
                else
                    ans.push_back(nums[nums.size() - n_consecutive_prev]);
            }
        }

        return ans;
    }
};