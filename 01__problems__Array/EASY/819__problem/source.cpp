// 819. Most Common Word
// https://leetcode.com/problems/most-common-word/description/


#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <unordered_set>
#include <unordered_map>
#include <map>
#include <set>

#include <limits.h>

#include <cmath>

using namespace std;


class Solution {
public:
    string mostCommonWord(string paragraph, vector<string>& banned) {
        unordered_set<char> replaced_chars({'!', '?', '\'', ',', ';', '.'});
        unordered_set<string> banned_words(banned.begin(), banned.end());

        unordered_map<string, int> word_map_count;

        // lowercase
        transform(paragraph.begin(), paragraph.end(), paragraph.begin(), [](char c){
            return std::tolower(c);
        });
        // replace chars
        transform(paragraph.begin(), paragraph.end(), paragraph.begin(), [&replaced_chars](char c){
            return replaced_chars.count(c) == 0 ? c : ' ';
        });


        int n = paragraph.size();
        int start = -1;
        int end = -1;
        for (int i = 0; i < n; ++i)
        {
            if (paragraph[i] != ' ')
            {
                if (start == -1)
                {
                    start = end = i;
                }
                else
                {
                    ++end;
                }
            }
            else
            {
                if (start == -1)
                {
                    continue;
                }
                else
                {
                    string word = paragraph.substr(start, end - start + 1);
                    start = end = -1;

                    if (banned_words.count(word) == 0)
                    {
                        ++word_map_count[word];
                    }   
                }
            }
        }

        if (start != -1)
        {
            string word = paragraph.substr(start, end - start + 1);
            if (banned_words.count(word) == 0)
            {
                ++word_map_count[word];
            }
        }

        
        string most_common_word = "";
        int max_count = INT_MIN;
        for (auto& [word, count]: word_map_count)
        {
            if (count > max_count)
            {
                max_count = count;
                most_common_word = word;
            }
        }
        
        return most_common_word;
    }
};