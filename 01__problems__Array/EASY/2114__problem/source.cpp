// 2114. Maximum Number of Words Found in Sentences
// https://leetcode.com/problems/maximum-number-of-words-found-in-sentences/description/


#include <iostream>
#include <string>
#include <vector>

using namespace std;


class Solution {
public:
    int mostWordsFound(vector<string>& sentences) {
        int max_words = 0;

        for (const string sentence : sentences)
        {
            int words = n_words(sentence);
            max_words = max(max_words, words);
        }

        return max_words;
    }

    int n_words(const string& sentence)
    {
        if (!sentence.size())
            return 0;

        int n = 1;
        for (auto c: sentence)
        {
            if (c == ' ') ++n;
        }

        return n;
    }
};
