// 2605. Form Smallest Number From Two Digit Arrays
// https://leetcode.com/problems/form-smallest-number-from-two-digit-arrays/description/


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
    int minNumber(vector<int>& nums1, vector<int>& nums2) {
        sort(nums1.begin(), nums1.end());
        sort(nums2.begin(), nums2.end());

        int i = 0;
        int j = 0;
        while (i < nums1.size() && j < nums2.size())
        {
            if (nums1[i] == nums2[j])
                return nums1[i];
            else if (nums1[i] > nums2[j])
            {
                ++j;
                continue;
            }
            else
            {
                ++i;
                continue;
            }
        }

        return min(nums1[0], nums2[0]) * 10 + max(nums1[0], nums2[0]); 
    }
};