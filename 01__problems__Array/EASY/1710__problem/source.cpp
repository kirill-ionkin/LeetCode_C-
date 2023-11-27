// 1710. Maximum Units on a Truck
// https://leetcode.com/problems/maximum-units-on-a-truck/description/


#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <unordered_set>
#include <unordered_map>


using namespace std;


class Solution {
public:
    static bool comparator(vector<int>& data1, vector<int>& data2)
    {
        return data1[1] > data2[1];
    }

    int maximumUnits(vector<vector<int>>& boxTypes, int truckSize) {
        sort(boxTypes.begin(), boxTypes.end(), comparator);

        
        int sum = 0;
        for (auto & boxType : boxTypes)
        {
            int n = min(boxType[0], truckSize);
            sum += n * boxType[1];

            truckSize -= n;

            if (truckSize == 0)
                break;
        }

        return sum;
    }
};