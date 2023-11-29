// 349. Intersection of Two Arrays
// https://leetcode.com/problems/intersection-of-two-arrays/description/


#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <unordered_set>
#include <unordered_map>
#include <map>
#include <set>


using namespace std;


class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        unordered_set<int> set1(nums1.begin(), nums1.end());
        unordered_set<int> set2(nums2.begin(), nums2.end());

        vector<int> ans;
        for (auto num: set1)
        {
            if (set2.find(num) != set2.end())
                ans.push_back(num);
        }

        return ans;
    }
};