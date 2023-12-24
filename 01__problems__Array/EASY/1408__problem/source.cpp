// 1408. String Matching in an Array
// https://leetcode.com/problems/string-matching-in-an-array/description/


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
    vector<string> stringMatching(vector<string>& words) {
        // sort words by size
        sort(words.begin(), words.end(), [](const string& first, const string& second){
            return first.size() <= second.size();
        });

        vector<string> ans;
        for (int i = 0; i < words.size() - 1; ++i)
        {
            for (int j = i + 1; j < words.size(); ++j)
            {
                if (words[j].find(words[i]) != string::npos)
                {
                    ans.push_back(words[i]);
                    break;
                }
            }
        }

        return ans;
    }
};