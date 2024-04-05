// 2678. Number of Senior Citizens
// https://leetcode.com/problems/number-of-senior-citizens/description/


#include <iostream>
#include <string>
#include <vector>


using namespace std;


class Solution {
public:
    int countSeniors(vector<string>& details) {
        int n_seniors = 0;
        for (string d: details)
        {
            int age = (d[11] - '0') * 10 + (d[12] - '0');

            if (age > 60)
                ++n_seniors;
        }
        
        return n_seniors;
    }
};