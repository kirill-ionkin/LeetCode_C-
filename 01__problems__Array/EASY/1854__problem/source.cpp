// 1854. Maximum Population Year
// https://leetcode.com/problems/maximum-population-year/description/


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
    int maximumPopulation(vector<vector<int>>& logs) {
        vector<int> population(101);
        for (auto& log: logs)
        {
            for (int i = log[0]; i < log[1]; ++i)
            {
                ++population[i - 1950];
            }
        }

        int max_population = 0;
        int year = logs[0][0];
        for (int i = 0; i < population.size(); ++i)
        {
            if (population[i] > max_population)
            {
                max_population = population[i];
                year = i + 1950;
            }
        }
        return year;
    }
};