// 118. Pascal's Triangle
// https://leetcode.com/problems/pascals-triangle/


#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <unordered_set>
#include <unordered_map>


using namespace std;


class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> base = {{1}};

        for (int i = 1; i < numRows; ++i)
        {
            int n = base.size();
            vector<int> pascal_i = {1};
            for (int j = 1; j < base[n - 1].size(); ++j)
            {
                pascal_i.push_back(base[n - 1][j - 1] + base[n - 1][j]);
            }
            pascal_i.push_back(1);
            
            base.push_back(pascal_i);
        }
    
        return base;
    }
};

