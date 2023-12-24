// 1491. Average Salary Excluding the Minimum and Maximum Salary
// https://leetcode.com/problems/average-salary-excluding-the-minimum-and-maximum-salary/description/


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
    double average(vector<int>& salary) {
        double sum = 0;
        int n = salary.size();

        int min_salary = min(salary[0], salary[1]);
        int max_salary = max(salary[0], salary[1]);

        for (auto& s: salary)
        {
            sum += s;

            if (s < min_salary)
                min_salary = s;
            else if (s > max_salary)
                max_salary = s;
        }

        return (sum - min_salary - max_salary) / (n - 2);
    }
};