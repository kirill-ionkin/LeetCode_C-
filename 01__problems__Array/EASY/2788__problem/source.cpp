// 2788. Split Strings by Separator
// https://leetcode.com/problems/split-strings-by-separator/description/


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
    vector<string> splitWordsBySeparator(vector<string>& words, char separator) {
        vector<string> ans;

        for (const auto& word: words)
        {
            string tmp = "";
            for (int i = 0 ; i < word.size(); ++i)
            {
                if (word[i] == separator)
                {
                    if (tmp.size())
                        ans.push_back(tmp);
                    
                    tmp = "";
                }
                else
                    tmp += word[i];
            }
            if (tmp.size())
                ans.push_back(tmp);
        }

        return ans;
    }
};
