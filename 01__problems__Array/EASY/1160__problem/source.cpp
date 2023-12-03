// 1160. Find Words That Can Be Formed by Characters
// https://leetcode.com/problems/find-words-that-can-be-formed-by-characters/description/


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
    int countCharacters(vector<string>& words, string chars) {
        unordered_map<char, int> chars_map;
        for (auto& ch: chars)
            ++chars_map[ch];
        
        int good_words_size = 0; 
        for (auto& word: words)
        {
            unordered_map<char, int> word_map;
            int i = 0;
            for (; i < word.size(); ++i)
            {
                char ch = word[i];
                if (chars_map.find(ch) == chars_map.end())
                    break;
                else if (++word_map[ch] > chars_map[ch])
                    break;
            }

            if (i == word.size())
                good_words_size += word.size();
        }
        return good_words_size;
    }
};
