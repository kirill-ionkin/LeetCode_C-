// 821. Shortest Distance to a Character
// https://leetcode.com/problems/shortest-distance-to-a-character/description/


#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <unordered_set>
#include <unordered_map>
#include <map>
#include <set>


using namespace std;


class Solution {
public:
    vector<int> shortestToChar(string s, char c) {
        vector<int> tmp;
        for (int i = 0; i < s.size(); ++i)
        {
            if (s[i] == c)
                tmp.push_back(i);
        }

        vector<int> ans(s.size(), 0);
        
        int j = 0;
        int i_0 = tmp[0];
        while (j <= i_0)
        {
            ans[j] = i_0 - j;
            ++j;
        }
        
        for (int i = 1; i < tmp.size(); ++i)
        {
            while (j <= tmp[i])
            {
                ans[j] = min(j - tmp[i - 1], tmp[i] - j);
                ++j; 
            }
        }

        while (j < ans.size())
        {
            ans[j] = j - tmp[tmp.size() - 1];
            ++j;
        }

        return ans;
    }
};