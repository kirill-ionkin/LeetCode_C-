// 2154. Keep Multiplying Found Values by Two
// https://leetcode.com/problems/keep-multiplying-found-values-by-two/description/


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
    int binary_search(vector<int>& nums, int val)
    {
        int l = 0;
        int r = nums.size() -1 ;
        
        while (l <= r)
        {
            int middle = (l + r) / 2;

            if (nums[middle] == val)
                return middle;
            else if (nums[middle] > val)
                r = middle - 1;
            else
                l = middle + 1;
        }
        return -1;
    }

    int findFinalValue(vector<int>& nums, int original) {
        sort(nums.begin(), nums.end());

        while (true)
        {
            if (binary_search(nums, original) == -1)
                return original;
            
            original *= 2;
        }
    }
};
