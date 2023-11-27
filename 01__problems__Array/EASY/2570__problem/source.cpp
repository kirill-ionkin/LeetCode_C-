// 2570. Merge Two 2D Arrays by Summing Values
// https://leetcode.com/problems/merge-two-2d-arrays-by-summing-values/description/


#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <unordered_set>
#include <unordered_map>
#include <map>


using namespace std;


class Solution {
public:
    vector<vector<int>> mergeArrays(vector<vector<int>>& nums1, vector<vector<int>>& nums2) {
        map<int, int> id_map_val;

        for (auto & data: nums1)
        {
            id_map_val[data[0]] += data[1];
        }

        for (auto & data: nums2)
        {
            id_map_val[data[0]] += data[1];
        }


        vector<vector<int>> ans;
        for (auto data: id_map_val)
        {
            ans.push_back({data.first, data.second});
        }

        return ans;
    }
};
