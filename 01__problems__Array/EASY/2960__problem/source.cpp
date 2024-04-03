// 2960. Count Tested Devices After Test Operations
// https://leetcode.com/problems/count-tested-devices-after-test-operations/description/


#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <unordered_set>
#include <unordered_map>
#include <map>
#include <set>

#include <limits.h>

#include <cmath>

using namespace std;


class Solution {
public:
    int countTestedDevices(vector<int>& batteryPercentages) {
        int n = batteryPercentages.size();
        
        int n_tested_devices = 0;
        for (int i = 0; i < n; ++i)
        {
            if (batteryPercentages[i] == 0)
            {
                continue;
            }
            
            ++n_tested_devices;
            for (int j = i + 1; j < n; ++j)
            {
                batteryPercentages[j] = max(0, batteryPercentages[j] - 1);
            }
        }

        return n_tested_devices;
    }
};