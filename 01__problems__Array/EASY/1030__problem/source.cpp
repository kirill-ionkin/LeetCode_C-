// 1030. Matrix Cells in Distance Order
// https://leetcode.com/problems/matrix-cells-in-distance-order/description/


#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <unordered_set>
#include <unordered_map>
#include <map>
#include <set>


using namespace std;


// 1. Highly not optimal decision!
class Solution {
public:
    vector<vector<int>> allCellsDistOrder(int rows, int cols, int rCenter, int cCenter) {
        vector<vector<int>> ans;

        for (int i = 0; i < rows; ++i)
        {
            for (int j = 0; j < cols; ++j)
                ans.push_back({i, j});
        }

        sort(ans.begin(), ans.end(), DistanceComparator(rCenter, cCenter));

        return ans;
    }




private:
    struct DistanceComparator
    {
        DistanceComparator(int rCenter, int cCenter) : rCenter{rCenter},  cCenter{cCenter}
        {}

        bool operator()(const vector<int>& cell1, const vector<int>& cell2)
        {
            return distance_to_Center(cell1) <= distance_to_Center(cell2);
        }

        int distance_to_Center(const vector<int>& cell)
        {
            return abs(cell[0] - rCenter) + abs(cell[1] - cCenter);
        }

        int rCenter;
        int cCenter;
    };

};


// 2. 

