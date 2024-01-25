// 455. Assign Cookies
// https://leetcode.com/problems/assign-cookies/description/


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
    int findContentChildren(vector<int>& g, vector<int>& s) {
        int n_cookies = s.size();

        if (n_cookies == 0)
            return 0;

        sort(g.begin(), g.end());
        sort(s.begin(), s.end());


        int max_number = 0;
        int cookie_idx = n_cookies - 1;
        int child_idx = g.size() - 1;

        while (cookie_idx >= 0 && child_idx >= 0)
        {
            if (s[cookie_idx] >= g[child_idx])
            {
                ++max_number;
                --cookie_idx;
                --child_idx;
            }
            else
                --child_idx;
        }

        return max_number;
    }
};