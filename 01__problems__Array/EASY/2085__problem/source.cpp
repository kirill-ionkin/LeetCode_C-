// 2085. Count Common Words With One Occurrence
// https://leetcode.com/problems/count-common-words-with-one-occurrence/description/


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
    int countWords(vector<string>& words1, vector<string>& words2) {
        unordered_map<string, pair<int, int>> str_map_count;
        for (auto& word: words1) 
            ++str_map_count[word].first;
        
        for (auto& word: words2)
            ++str_map_count[word].second;
        
        int n  = 0;
        for (auto& data: str_map_count)
        {
            if (data.second.first == 1 && data.second.second == 1)
                ++n;
        }

        return n;
    }
};