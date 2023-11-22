// 2185. Counting Words With a Given Prefix
// https://leetcode.com/problems/counting-words-with-a-given-prefix/description/


#include <iostream>
#include <string>
#include <vector>


using namespace std;


class Solution {
public:
    int prefixCount(vector<string>& words, string pref) {
        int n_words = 0;

        for (string & word: words)
        {
            n_words += start_with_prefix(word, pref);
        }

        return n_words;
    }

    int start_with_prefix(const string& str, const string& prefix)
    {
        if (prefix.size() > str.size())
            return 0;
        

        for (int i = 0; i < prefix.size(); ++i)
        {
            if (str[i] != prefix[i])
                return 0;
        }

        return 1;
    }
};