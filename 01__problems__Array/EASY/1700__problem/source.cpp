// 1700. Number of Students Unable to Eat Lunch
// https://leetcode.com/problems/number-of-students-unable-to-eat-lunch/description/


#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <unordered_set>
#include <unordered_map>
#include <map>
#include <set>


using namespace std;


// interesting task
class Solution {
public:
    int countStudents(vector<int>& students, vector<int>& sandwiches) {
        // reverse sandwiches order
        std::reverse(sandwiches.begin(), sandwiches.end());
        int top = sandwiches.size() - 1;

        int students_start_idx = 0;
        int n_without_eat = 0;

        while (students_start_idx < students.size())
        {
            if (n_without_eat == students.size() - students_start_idx)
                return n_without_eat;
            
            if (students[students_start_idx] == sandwiches[top])
            {
                n_without_eat = 0;

                ++students_start_idx;
                --top;
            }
            else
            {
                ++n_without_eat;
                students.push_back(students[students_start_idx++]);
                
            }
        }
        return 0;
    }
};