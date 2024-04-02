// 2942. Find Words Containing Character
// https://leetcode.com/problems/find-words-containing-character/description/


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
    vector<int> findWordsContaining(vector<string>& words, char x) {
        int n = words.size();
        
        vector<int> idxes;
        for (int i = 0; i < n; ++i)
        {
            if (words[i].find(x) != std::string::npos)
            {
                idxes.push_back(i);
            }
        }

        return idxes;
    }
};