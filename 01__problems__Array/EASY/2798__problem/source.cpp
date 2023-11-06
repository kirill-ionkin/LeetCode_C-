// 2798. Number of Employees Who Met the Target
// https://leetcode.com/problems/number-of-employees-who-met-the-target/description/


#include <iostream>
#include <string>
#include <vector>

using namespace std;


class Solution {
public:
    int numberOfEmployeesWhoMetTarget(vector<int>& hours, int target) {
        int n_at_least_target = 0;
        for (const auto hour : hours)
        {
            if (hour >= target) ++n_at_least_target;
        }

        return n_at_least_target;
    }
};
