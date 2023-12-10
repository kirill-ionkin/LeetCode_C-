// 806. Number of Lines To Write String
// https://leetcode.com/problems/number-of-lines-to-write-string/description/


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
    vector<int> numberOfLines(vector<int>& widths, string s) {
        vector<int> ans(2, 0);
        int n_lines = 1;

        int line_length = 100;
        int i = 0;
        while (i < s.size())
        {
            int width = widths[s[i] - 'a'];
            
            if (line_length >= width)
            {
                line_length -= width;
            }
            else
            {
                ++n_lines;
                line_length = 100 - width;
            }
            ++i;
        }

        return {n_lines, 100 - line_length};
    }
};