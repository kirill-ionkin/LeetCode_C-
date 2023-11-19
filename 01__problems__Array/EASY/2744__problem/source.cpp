// 2744. Find Maximum Number of String Pairs
// https://leetcode.com/problems/find-maximum-number-of-string-pairs/description/


#include <iostream>
#include <string>
#include <vector>

using namespace std;


class Solution {
public:
    int equal(string word1, string word2)
    {
        int n1 = word1.size();
        int n2 = word2.size();

        if (n1 != n2)
            return 0;


        for (int i = 0; i < n1; ++i)
        {
            if (word1[i] != word2[n1 - 1 - i])
                return 0;
        }
        return 1;
    }


    int maximumNumberOfStringPairs(vector<string>& words) {
        int n = 0;

        for (int i = 0; i < words.size() - 1; ++i)
        {
            for (int j = i + 1; j < words.size(); ++j)
            {
                n += equal(words[i], words[j]);
            }
        }

        return n;
    }
};