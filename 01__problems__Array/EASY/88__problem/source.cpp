// 88. Merge Sorted Array
// https://leetcode.com/problems/merge-sorted-array/description/


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
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int i = m - 1;
        int j = n - 1;
        int k = n + m - 1;

        while ((i >= 0) && (j >= 0) && (i < k)) 
        {
            if (nums2[j] >= nums1[i])
            {
                nums1[k] = nums2[j];
                --j;
                --k;

            }
            else
            {
                nums1[k] = nums1[i];
                --i;
                --k;
            }
        }

        while (j >= 0)
        {
            nums1[k] = nums2[j];
            --k;
            --j;
        }
    }
};