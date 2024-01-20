// 350. Intersection of Two Arrays II
// https://leetcode.com/problems/intersection-of-two-arrays-ii/description/


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
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        vector<int> counts1(1001, 0);
        vector<int> counts2(1001, 0);
        for (int &num: nums1)
            ++counts1[num];

        for (int &num: nums2)
            ++counts2[num];

        vector<int> intersection;
        for (int i = 0; i <= 1000; ++i)
        {
            if (counts1[i] != 0 && counts2[i] != 0)
            {
                int n_iterations = min(counts1[i], counts2[i]);
                for (int j = 0; j < n_iterations; ++j)
                    intersection.push_back(i);
            }
        }

        return intersection;
    }
};