// 1184. Distance Between Bus Stops
// https://leetcode.com/problems/distance-between-bus-stops/description/


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
    int distanceBetweenBusStops(vector<int>& distance, int start, int destination) {
        int n = distance.size();
        
        int sum = 0;
        for (int& d: distance)
            sum += d;
        
        int time = 0;
        int i = start;
        while (i != destination)
        {
            time += distance[i];
            ++i;
            i %= n;
        }

        return min(time, sum - time);
    }
};