// 2255. Count Prefixes of a Given String
// https://leetcode.com/problems/count-prefixes-of-a-given-string/description/


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
    int is_prefix(string& word, string& s)
    {
        if (word.size() > s.size())
            return 0;

        for (int i = 0; i < word.size(); ++i)
        {
            if (word[i] != s[i])
                return 0;
        }
        return 1;
    }
    
    int countPrefixes(vector<string>& words, string s) {
        int n_prefix = 0;
        for (auto & word: words)
            n_prefix += is_prefix(word, s);
        

        return n_prefix;
    }
};
