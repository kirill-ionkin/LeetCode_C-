// 2506. Count Pairs Of Similar Strings
// https://leetcode.com/problems/count-pairs-of-similar-strings/description/


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
    int similarPairs(vector<string>& words) {
        vector<unordered_set<char>> words_set;
        for (auto& word: words)
        {
            unordered_set<char> tmp(word.begin(), word.end());
            words_set.push_back(tmp);
        }

        int n_pairs = 0;
        for (int i = 0; i < words.size() - 1; ++i)
        {
            for (int j = i + 1; j < words.size(); ++j)
            {
                if (words_set[i].size() != words_set[j].size())
                    continue;
                

                bool equal = true;
                for (auto& c: words_set[i])
                {
                    if (words_set[j].find(c) == words_set[j].end())
                    {
                        equal = false;
                        break;
                    }
                }
                if (equal)
                    ++n_pairs;
            }
        }

        return n_pairs;
    }
};
