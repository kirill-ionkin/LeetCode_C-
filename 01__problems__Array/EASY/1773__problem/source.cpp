// 1773. Count Items Matching a Rule
// https://leetcode.com/problems/count-items-matching-a-rule/description/


#include <iostream>
#include <string>
#include <vector>

using namespace std;


class Solution {
public:
    int countMatches(vector<vector<string>>& items, string ruleKey, string ruleValue) {
        int rule = 0;
        if (ruleKey == "color") 
            rule = 1;
        else if (ruleKey == "name") 
            rule = 2;
        
        int count = 0;
        for (int i = 0; i < items.size(); ++i)
        {
            if (items[i][rule] == ruleValue)
                ++count;
        }
        
        
        return count;
    }
};