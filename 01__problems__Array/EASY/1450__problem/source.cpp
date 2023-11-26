// 1450. Number of Students Doing Homework at a Given Time
// https://leetcode.com/problems/number-of-students-doing-homework-at-a-given-time/description/


#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <unordered_set>
#include <unordered_map>


using namespace std;


class Solution {
public:
    int busyStudent(vector<int>& startTime, vector<int>& endTime, int queryTime) {
        int n_students = 0;
        
        for (int i = 0; i < startTime.size(); ++i)
        {
            if (startTime[i] <= queryTime && queryTime <= endTime[i])
                ++n_students;
        }

        return n_students;
    }
};
