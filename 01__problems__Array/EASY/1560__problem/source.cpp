// 1560. Most Visited Sector in a Circular Track
// https://leetcode.com/problems/most-visited-sector-in-a-circular-track/description/


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
    vector<int> mostVisited(int n, vector<int>& rounds) {
        int m = rounds.size();

        vector<int> sector_map_visited_times(n, 0);
        
        for (int i = 0; i < m - 1; ++i)
        {
            int current_sector = rounds[i];
            int end_sector = rounds[i + 1];

            while (current_sector != end_sector)
            {

                ++sector_map_visited_times[current_sector - 1];

                (++current_sector);
                current_sector = (current_sector > n) ? current_sector % n : current_sector;
                
            }
        }
        ++sector_map_visited_times[rounds[m - 1] - 1];

        int max_visited_times = 0;
        for (auto& count: sector_map_visited_times)
            max_visited_times = max(max_visited_times, count);
        
        vector<int> ans;
        for (int i = 0; i < n; ++i)
        {
            if (sector_map_visited_times[i] == max_visited_times)
                ans.push_back(i + 1);
        }

        return ans;
    }
};