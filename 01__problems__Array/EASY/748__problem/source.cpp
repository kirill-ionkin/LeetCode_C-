// 748. Shortest Completing Word
// https://leetcode.com/problems/shortest-completing-word/description/


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
    string shortestCompletingWord(string licensePlate, vector<string>& words) {
        unordered_map<char, int> char_map_count;
        for (auto& ch: licensePlate)
        {
            if (isalpha(ch) && ch != ' ')
                ++char_map_count[tolower(ch)];
        }
            
        int max_intersection = 0;
        int length = INT_MAX;
        int pointer = 0;
        for (int i = 0; i < words.size(); ++i)
        {
            unordered_map<char, int> word__char_map_cout;
            for (auto& ch: words[i])
            {
                ++word__char_map_cout[ch];
            }

            int intersection = 0;

            for (auto& data: char_map_count)
            {
                if (word__char_map_cout.find(data.first) != word__char_map_cout.end())
                {
                    if (data.second > word__char_map_cout[data.first])
                        break;
                    else
                        intersection += data.second;
                }
                else break;
            }


            if ((intersection > max_intersection) || ((intersection == max_intersection) && (words[i].size() < length)))
            {
                pointer = i;
                length = words[i].size();
                max_intersection = intersection;
            }
        }

        return words[pointer];
    }
};