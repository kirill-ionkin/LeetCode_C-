// 2451. Odd String Difference
// https://leetcode.com/problems/odd-string-difference/description/


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
    string oddString(vector<string>& words) {
        map<vector<int>, int> difference_map_count;
        map<vector<int>, string> difference_map_word;
        
        int n = words[0].size();
        int iter = 0;
        for (auto& word: words)
        {
            ++iter;

            vector<int> difference(n - 1, 0);
            for (int i = 0; i < n - 1; ++i)
            {
                difference[i] = word[i + 1] - word[i]; 
            }

            difference_map_word[difference] = word;
            ++difference_map_count[difference];
            

            if (iter >= 3 && difference_map_word.size() == 2)
            {
                for (auto& data: difference_map_count)
                    {
                        if (data.second == 1)
                            return difference_map_word[data.first];
                    }
            }
        }

        return "";
    }
};