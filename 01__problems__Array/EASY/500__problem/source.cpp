// 500. Keyboard Row
// https://leetcode.com/problems/keyboard-row/


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
    vector<string> findWords(vector<string>& words) {
        unordered_set<char> row1_set = {'q', 'w', 'e', 'r', 't', 'y', 'u', 'i', 'o', 'p'};
        unordered_set<char> row2_set = {'a', 's', 'd', 'f', 'g', 'h', 'j', 'k', 'l'};
        unordered_set<char> row3_set = {'z', 'x', 'c', 'v', 'b', 'n', 'm'};
        
        vector<string> ans;
        for (auto& word: words)
        {
            unordered_set<int> rows;
            for (auto c: word)
            {
                // to lowercase
                c = tolower(c);

                if (row1_set.find(c) != row1_set.end())
                    rows.insert(1);
                else if (row2_set.find(c) != row2_set.end())
                    rows.insert(2);
                else if (row3_set.find(c) != row3_set.end())
                    rows.insert(3);
                
                if (rows.size() > 1)
                    break;
            }
            if (rows.size() == 1)
                ans.push_back(word);
        }

        return ans;
    }
};
