// 1961. Check If String Is a Prefix of Array
// https://leetcode.com/problems/check-if-string-is-a-prefix-of-array/description/


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
    bool isPrefixString(string s, vector<string>& words) {
        int n = words.size();
        int n_s = s.size();

        int n_words = 0;
        for (auto &word: words)
        {
            n_words += word.size();

            if (n_words == n_s) break;
            else if (n_words > n_s) return false;
        }

        if (n_words != n_s) return false;
        

        int idx = 0, i = 0;
        while (i < n)
        {
            int m = words[i].size();
            int j = 0;
            while (j < m)
            {
                if (s[idx] != words[i][j])
                    return false;
                else
                {
                    ++j;
                    ++idx;
                }

                if (idx >= n_s) return true;
            }

            ++i;
        }

        return true;
    }
};