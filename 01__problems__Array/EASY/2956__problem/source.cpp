// 2956. Find Common Elements Between Two Arrays
// https://leetcode.com/problems/find-common-elements-between-two-arrays/description/


#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <unordered_set>
#include <unordered_map>
#include <map>
#include <set>

#include <limits.h>

#include <cmath>

using namespace std;


class Solution {
public:
    vector<int> findIntersectionValues(vector<int>& nums1, vector<int>& nums2) {
        unordered_set<int> set1(nums1.begin(), nums1.end());
        unordered_set<int> set2(nums2.begin(), nums2.end());
    
        int count1 = 0;
        for (int i = 0; i < nums1.size(); ++i)
        {
            if (set2.count(nums1[i]) != 0)
            {
                ++count1;
            }
        }   

        int count2 = 0;
        for (int i = 0; i < nums2.size(); ++i)
        {
            if (set1.count(nums2[i]) != 0)
            {
                ++count2;
            }
        }

        return {count1, count2};
    }   
};