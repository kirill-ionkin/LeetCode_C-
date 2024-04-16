// 2273. Find Resultant Array After Removing Anagrams
// https://leetcode.com/problems/find-resultant-array-after-removing-anagrams/description/


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
    vector<string> removeAnagrams(vector<string>& words) {
        unordered_map<string, string> string_map_sorted_string;
        for (const auto &word: words)
        {
            string sort_word = word;
            sort(sort_word.begin(), sort_word.end());
            string_map_sorted_string[word] = sort_word;
        }
        
        auto iter = words.begin() + 1;
        while (iter != words.end())
        {
            if (string_map_sorted_string[*(iter - 1)] == string_map_sorted_string[*iter])
            {
                words.erase(iter);
            }
            else
            {
                ++iter;
            }
        }

        return words;
    }
};