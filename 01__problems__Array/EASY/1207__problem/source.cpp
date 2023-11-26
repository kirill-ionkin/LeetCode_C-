// 1207. Unique Number of Occurrences
// https://leetcode.com/problems/unique-number-of-occurrences/description/


#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <unordered_set>
#include <unordered_map>


using namespace std;


class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        unordered_map<int, int> num_map_count;
        for (auto num: arr)
        {
            ++num_map_count[num];
        }

        unordered_set<int> unique_counts;
        for (auto data: num_map_count)
            unique_counts.insert(data.second);
        
        return num_map_count.size() == unique_counts.size();
    }
};