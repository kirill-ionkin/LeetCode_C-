// 1598. Crawler Log Folder
// https://leetcode.com/problems/crawler-log-folder/description/


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
    int minOperations(vector<string>& logs) {
        int depth = 0;

        for (auto& log: logs)
        {
            if (log == "../")
                depth = max(0, depth - 1);
            else if (log != "./")
                ++depth;
        }
        
        return depth;
    }
};