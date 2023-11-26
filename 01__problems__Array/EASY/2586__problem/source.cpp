// 2586. Count the Number of Vowel Strings in Range
// https://leetcode.com/problems/count-the-number-of-vowel-strings-in-range/description/


#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <unordered_set>
#include <unordered_map>


using namespace std;


// 1.
class Solution {
public:
    int vowelStrings(vector<string>& words, int left, int right) {
        unordered_set<char> vowel_chars = {'a', 'e', 'i', 'o', 'u'};

        int n = 0;
        for (int i = left; i <= right; ++i)
        {
            char first_char = words[i][0];
            char last_char = words[i][words[i].size() - 1];

            if (vowel_chars.find(first_char) != vowel_chars.end() && vowel_chars.find(last_char) != vowel_chars.end())
            {
                ++n;
            }
        }

        return n;
    }
};


// 2.
class Solution {
public:
    int vowelStrings(vector<string>& words, int left, int right) {
        int n = 0;
        for (int i = left; i <= right; ++i)
        {
            char fc = words[i][0];
            char lc = words[i][words[i].size() - 1];

            if ((fc == 'a' || fc == 'e' || fc == 'i' || fc == 'o' || fc == 'u') && (lc == 'a' || lc == 'e' || lc == 'i' || lc == 'o' || lc == 'u'))
                ++n;
        }

        return n;
    }
};