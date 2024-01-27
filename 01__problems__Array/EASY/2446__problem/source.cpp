// 2446. Determine if Two Events Have Conflict
// https://leetcode.com/problems/determine-if-two-events-have-conflict/description/


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
    int convert_to_minutes(string &time)
    {
        int hours = stoi(time.substr(0, 2));
        int minutes = stoi(time.substr(3, 2));

        return 60 * hours + minutes;
    }

    bool haveConflict(vector<string>& event1, vector<string>& event2) {
        int event1_start_time = convert_to_minutes(event1[0]);
        int event1_end_time = convert_to_minutes(event1[1]);
        
        int event2_start_time = convert_to_minutes(event2[0]);
        int event2_end_time = convert_to_minutes(event2[1]);

        int start_time_intersection = max(event1_start_time, event2_start_time);
        int end_time_intersection = min(event1_end_time, event2_end_time);

        if (start_time_intersection <= end_time_intersection)
            return true;
        return false;
    }
};