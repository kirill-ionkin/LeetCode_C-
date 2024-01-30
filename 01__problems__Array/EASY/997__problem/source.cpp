// 997. Find the Town Judge
// https://leetcode.com/problems/find-the-town-judge/description/


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
    int findJudge(int n, vector<vector<int>>& trust) {
        if (n == 1) return 1;


        unordered_set<int> trusted_people;
        unordered_map<int, int> people_map_n_trusted_people;
        
        for (const auto &t: trust)
        {
            trusted_people.insert(t[0]);
            if (trusted_people.count(t[1]) == 0)
            {
                ++people_map_n_trusted_people[t[1]];
            }
        }

        for (const auto &[people, n_trusted]: people_map_n_trusted_people)
        {
            if (trusted_people.count(people) == 0 && n_trusted == n - 1)
                return people;
        }
        return -1;
    }
};