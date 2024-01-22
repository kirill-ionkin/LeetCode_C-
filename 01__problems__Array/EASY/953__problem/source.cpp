// 953. Verifying an Alien Dictionary
// https://leetcode.com/problems/verifying-an-alien-dictionary/description/


#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <unordered_set>
#include <unordered_map>
#include <map>
#include <set>

#include <limits.h>


using namespace std;


class Solution {
public:
    bool isAlienSorted(vector<string>& words, string order) {
        int n = words.size();
        for (int i = 1; i < n; ++i)
        {
            string word1 = words[i - 1];
            string word2 = words[i];

            int j = 0;
            while (word1[j] == word2[j] && j < word1.size() && j < word2.size()) ++j;

            if (j < word1.size() && j < word2.size())
            {
                int r = order.find(word1[j]);
                int l = order.find(word2[j]);

                if (r > l) return false; 
            }
            else if (word1.size() > word2.size())
                return false;
        }

        return true;
    }
};