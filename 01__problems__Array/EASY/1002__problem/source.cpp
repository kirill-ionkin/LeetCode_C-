// 1002. Find Common Characters
// https://leetcode.com/problems/find-common-characters/description/


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
    vector<string> commonChars(vector<string>& words) {
        vector<int> intersection(26, 0);
        for (auto& c: words[0])
            ++intersection[c - 'a'];
        
        for (int i = 1; i < words.size(); ++i)
        {
            vector<int> tmp(26, 0);
            for (auto& c: words[i])
            {
                ++tmp[c - 'a'];
            }
            

            for (int i = 0; i < 26; ++i)
            {
                intersection[i] = min(intersection[i], tmp[i]);
            }
        }

        vector<string> ans;
        for (int i = 0; i < 26; ++i)
        {
            while (intersection[i]--)
            {
                string s;
                s.push_back('a' + i);
                ans.push_back(s);
            }
        }

        return ans;
    }
};