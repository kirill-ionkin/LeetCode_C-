// 2032. Two Out of Three
// https://leetcode.com/problems/two-out-of-three/description/


#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <unordered_set>
#include <unordered_map>


using namespace std;


class Solution {
public:
    vector<int> twoOutOfThree(vector<int>& nums1, vector<int>& nums2, vector<int>& nums3) {
        unordered_set<int> set1(nums1.begin(), nums1.end());
        unordered_set<int> set2(nums2.begin(), nums2.end());
        unordered_set<int> set3(nums3.begin(), nums3.end());

        unordered_map<int, int> num_map_count;

        for (auto num: set1)
            ++num_map_count[num];

        for (auto num: set2)
            ++num_map_count[num];

        for (auto num: set3)
            ++num_map_count[num];

        vector<int> res;
        for (auto data: num_map_count)
        {
            if (data.second > 1)
                res.push_back(data.first);
        }

        return res;
    }
};
