// 3069. Distribute Elements Into Two Arrays I
// https://leetcode.com/problems/distribute-elements-into-two-arrays-i/description/


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
    vector<int> resultArray(vector<int>& nums) {
        vector<int> arr1 = {nums[0]};
        vector<int> arr2 = {nums[1]};

        int idx1 = 0;
        int idx2 = 0;
        for (int i = 2; i < nums.size(); ++i)
        {
            if (arr1[idx1] > arr2[idx2])
            {
                arr1.push_back(nums[i]);
                ++idx1;
            }
            else
            {
                arr2.push_back(nums[i]);
                ++idx2;
            }
        }

        arr1.insert(arr1.end(), arr2.begin(), arr2.end());

        return arr1;
    }
};