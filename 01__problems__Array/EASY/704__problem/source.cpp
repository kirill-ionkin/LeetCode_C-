// 704. Binary Search
// https://leetcode.com/problems/binary-search/description/


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
    int search(vector<int>& nums, int target) {
        int n = nums.size();

        int l = 0, r = n - 1;

        while (l <= r)
        {
            int middle = l + (r - l) / 2;
            if (nums[middle] == target)
                return middle;
            else if (nums[middle] > target)
                r = middle - 1;
            else if (nums[middle] < target)
                l = middle + 1;
        }

        return -1;
    }
};