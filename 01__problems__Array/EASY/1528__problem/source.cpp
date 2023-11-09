// 1528. Shuffle String
// https://leetcode.com/problems/shuffle-string/description/


#include <iostream>
#include <string>
#include <vector>

using namespace std;


class Solution {
public:
    string restoreString(string s, vector<int>& indices) {
        string ans = s;
        
        for (int i = 0; i < indices.size(); ++i)
        {
            ans[indices[i]] = s[i];
        }

        return ans;
    }
};
