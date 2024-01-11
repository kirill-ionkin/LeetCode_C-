// 2347. Best Poker Hand
// https://leetcode.com/problems/best-poker-hand/description/


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
    string bestHand(vector<int>& ranks, vector<char>& suits) {
        unordered_map<int, int> rank_map_count;
        for (auto& rank: ranks)
            ++rank_map_count[rank];
        
        unordered_map<char, int> suit_map_count;
        for (auto& suit: suits)
            ++suit_map_count[suit];
        
        int suit_max_count = 1;
        for (auto& data: suit_map_count)
        {
            if (data.second == 5)
                return "Flush";                
        }


        int rank_max_count = 1;
        for (auto& data: rank_map_count)
            rank_max_count = max(rank_max_count, data.second);
        if (rank_max_count >= 3)
            return "Three of a Kind";
        else if (rank_max_count == 2)
            return "Pair";
        
        return "High Card";
    }
};