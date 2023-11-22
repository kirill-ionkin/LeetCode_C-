// 2215. Find the Difference of Two Arrays
// https://leetcode.com/problems/find-the-difference-of-two-arrays/description/


#include <iostream>
#include <string>
#include <vector>
#include <unordered_set>


using namespace std;


class Solution {
public:
    vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2) {
        unordered_set<int> set_nums1(nums1.begin(), nums1.end());
        unordered_set<int> set_nums2(nums2.begin(), nums2.end());
        
        vector<int> distinct_nums1;
        for (auto num : set_nums1)
        {
            if (set_nums2.count(num) == 0)
                distinct_nums1.push_back(num);
        }

        vector<int> distinct_nums2;
        for (auto num : set_nums2)
        {
            if (set_nums1.count(num) == 0)
                distinct_nums2.push_back(num);
        }

        return {distinct_nums1, distinct_nums2};
    }
};
