// 1732. Find the Highest Altitude
// https://leetcode.com/problems/find-the-highest-altitude/description/


#include <iostream>
#include <string>
#include <vector>

using namespace std;


class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int altitude = 0;
        int max_altitud = altitude;
        for (int g: gain)
        {
            altitude += g;
            max_altitud = max(max_altitud, altitude);
        }

        return max_altitud;
    }
};
