// 2540. Minimum Common Value
// https://leetcode.com/problems/minimum-common-value/description/


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
    int getCommon(vector<int>& nums1, vector<int>& nums2) {
        int n1 = nums1.size();
        int n2 = nums2.size();

        int i = 0, j = 0;
        while (i < n1 && j < n2)
        {
            if (nums1[i] == nums2[j])
                return nums1[i];
            else if (nums1[i] > nums2[j]) ++j;
            else ++i;
        }

        return -1;
    }
};