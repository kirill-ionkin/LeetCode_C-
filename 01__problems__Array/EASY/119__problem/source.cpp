// 119. Pascal's Triangle II
// https://leetcode.com/problems/pascals-triangle-ii/description/


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
    vector<int> getRow(int rowIndex) {
        if (rowIndex == 0)
            return {1};
        else if (rowIndex == 1)
            return {1, 1};
        
        vector<int> previous_row = {1, 1};
        for (int i = 2; i <= rowIndex; ++i)
        {
            vector<int> current_row = {1};
            for (int i = 0; i < previous_row.size() - 1; ++i)
            {
                current_row.push_back(previous_row[i] + previous_row[i + 1]);
            }
            current_row.push_back(1);

            previous_row = current_row;
        }

        return previous_row;
    }
};