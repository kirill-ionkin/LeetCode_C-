// 942. DI String Match
// https://leetcode.com/problems/di-string-match/description/


#include <iostream>
#include <string>
#include <vector>

using namespace std;


class Solution {
public:
    vector<int> diStringMatch(string s) {
        int n  = s.size();

        int l = 0;
        int r = n;

        vector<int> ans;

        for (int i = 0; i < n; ++i)
        {
            if (s[i] == 'I')
            {
                ans.push_back(l);
                ++l;
            }
            else
            {
                ans.push_back(r);
                --r;
            }
        }
        ans.push_back(l);

        return ans;
    }
};
