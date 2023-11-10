// 1816. Truncate Sentence
// https://leetcode.com/problems/truncate-sentence/description/


#include <iostream>
#include <string>
#include <vector>

using namespace std;


class Solution {
public:
    string truncateSentence(string s, int k) {
        int k_ = 0;

        int i = 0;
        while (i < s.size())
        {
            if (k_ == k)
                return s.substr(0, i - 1);
            
            if (s[i] == ' ')
                ++k_;

            ++i;
        }
        return s;
    }
};


class Solution {
public:
    string truncateSentence(string s, int k) {
        int k_ = 0;
        string ans;

        for (int i = 0; i < s.size(); ++i)
        {
            if (s[i] == ' ')
                ++k_;
        
            if (k_ == k)
                break;
            
            ans.push_back(s[i]);
        }   
        return ans;
    }
};