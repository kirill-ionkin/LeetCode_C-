// 2432. The Employee That Worked on the Longest Task
// https://leetcode.com/problems/the-employee-that-worked-on-the-longest-task/


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
    int hardestWorker(int n, vector<vector<int>>& logs) {
        int max_time = logs[0][1];
        int id_max_time = logs[0][0];

        int task_end_time = max_time;
        for (int i = 1; i < logs.size(); ++i)
        {
            int time = logs[i][1] - task_end_time;
            
            if (time > max_time)
            {
                id_max_time = logs[i][0];
                max_time = time;
            }
            else if (time == max_time)
                id_max_time = min(id_max_time, logs[i][0]);
            
            task_end_time = logs[i][1];
        }

        return id_max_time;

    }
};