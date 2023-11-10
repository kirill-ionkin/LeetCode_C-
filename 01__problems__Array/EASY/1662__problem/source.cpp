// 1662. Check If Two String Arrays are Equivalent
// https://leetcode.com/problems/check-if-two-string-arrays-are-equivalent/description/


#include <iostream>
#include <string>
#include <vector>

using namespace std;


class Solution {
public:
    bool arrayStringsAreEqual(vector<string>& word1, vector<string>& word2) {
        string w1;
        string w2;


        int len_word1 = 0;
        int len_word2 = 0;
        
        for (string word : word1)
        {
            len_word1 += word.size();
            w1.append(word);
        }

        
        for (string word : word2)
        {
            len_word2 += word.size();
            w2.append(word);
        }


        if (len_word1 != len_word2)
            return false;
        
        for(int i = 0; i < w1.size(); ++i)
        {
            if (w1[i] != w2[i])
                return false;
        }
        return true;
    }
};


class Solution {
public:
    bool arrayStringsAreEqual(vector<string>& word1, vector<string>& word2) {
        string w1 = "";
        string w2 = "";

        for (string word: word1)
            w1 += word;
        for (string word: word2)
            w2 += word;
        
        if (w1.size() != w2.size()) return false;

        for (int i = 0; i < w1.size(); ++i)
            if (w1[i] != w2[i]) return false;
        
        return true;
    }
};

