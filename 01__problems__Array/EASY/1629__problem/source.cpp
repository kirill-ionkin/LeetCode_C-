// 1629. Slowest Key
// https://leetcode.com/problems/slowest-key/


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
    char slowestKey(vector<int>& releaseTimes, string keysPressed) {
        int n = releaseTimes.size();

        unordered_map<char, int> char_map_max_time;

        int previos_time = 0;
        for (int i = 0; i < n; ++i)
        {
            if (char_map_max_time.find(keysPressed[i]) == char_map_max_time.end())
                char_map_max_time[keysPressed[i]] = releaseTimes[i] - previos_time;
            else
                char_map_max_time[keysPressed[i]] = max(releaseTimes[i] - previos_time, char_map_max_time[keysPressed[i]]);
            
            previos_time = releaseTimes[i];
        }

        char slowest_char;
        int duration = 0;
        for (auto& data: char_map_max_time)
        {
            if ((data.second > duration) || ((data.second == duration) && (data.first > slowest_char)))
            {   
                slowest_char = data.first;
                duration = data.second;
            }
        }

        return slowest_char;
    }
};