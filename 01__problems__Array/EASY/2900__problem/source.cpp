// 2900. Longest Unequal Adjacent Groups Subsequence I
// https://leetcode.com/problems/longest-unequal-adjacent-groups-subsequence-i/description/


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
    vector<string> getLongestSubsequence(vector<string>& words, vector<int>& groups) {
        int n = words.size();
        
        vector<string> answer = {words[0]};
        int prev = groups[0];

        for (int i = 1; i < n; ++i)
        {
            if (groups[i] != prev)
            {
                answer.push_back(words[i]);
                prev = groups[i];
            }
        }

        return answer;
    }
};