// 1684. Count the Number of Consistent Strings
// https://leetcode.com/problems/count-the-number-of-consistent-strings/description/


#include <iostream>
#include <string>
#include <vector>
#include <unordered_set>

using namespace std;


class Solution {
public:
    int countConsistentStrings(string allowed, vector<string>& words) {
        unordered_set<char> allowed_chars;

        for (auto char_ : allowed)
            allowed_chars.insert(char_);
        
        int n = 0;
        for (string word: words)
        {
            
            int i;
            for(i = 0; i < word.size(); ++i)
            {
                if (allowed_chars.find(word[i]) == allowed_chars.end())
                    break;
            }

            if (i == word.size())
                n++;
            
        }

        return n;
    }
};

