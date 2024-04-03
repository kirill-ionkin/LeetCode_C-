// 1436. Destination City
// https://leetcode.com/problems/destination-city/description/


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
    string destCity(vector<vector<string>>& paths) {
        unordered_map<string, vector<int>> city_map_info;

        for (auto& path: paths)
        {
            string from_city = path.at(0);
            string to_city = path.at(1);

            if (city_map_info.count(from_city) == 0)
            {
                city_map_info[from_city] = {1, 0};
            }
            else
            {
                city_map_info[from_city][0] = city_map_info[from_city][0] + 1;
            }

            if (city_map_info.count(to_city) == 0)
            {
                city_map_info[to_city] = {0, 1};
            }
            else
            {
                city_map_info[to_city][1] = city_map_info[to_city][1] + 1;
            }
        }
        
        for (auto& [city, info]: city_map_info)
        {
            if (info.at(0) == 0)
            {
                return city;
            }
        }

        return "";
    }
};