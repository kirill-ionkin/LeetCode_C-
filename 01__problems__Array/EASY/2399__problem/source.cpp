// 2399. Check Distances Between Same Letters
// https://leetcode.com/problems/check-distances-between-same-letters/description/


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
    bool checkDistances(string s, vector<int>& distance) {
        unordered_set<char> seen;

        for (int i = 0; i < s.size() && seen.size() < distance.size() / 2; ++i)
        {
            char c = s[i];

            if (seen.find(c) != seen.end())
                continue;
            
            seen.insert(c);
            
            int j = i + distance[c - 'a'] + 1;
            if (j >= s.size() || c != s[j])
                return false;
        }
        return true;
    }
};
