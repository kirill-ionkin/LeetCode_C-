// 2717. Semi-Ordered Permutation
// https://leetcode.com/problems/semi-ordered-permutation/description/


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
    int semiOrderedPermutation(vector<int>& nums) {
        int n = nums.size();
        
        int min_number_of_operations = 0;

        int idx1 = -1, idxn = -1;
        for (int i = 0; i < n; ++i)
        {
            if (idx1 != -1 && idxn != -1)
                break;
            
            if (nums[i] == 1)
                idx1 = i;
            else if (nums[i] == n)
                idxn = i;
        }


        if (idx1 > idxn)
            return idx1 + (n - 1 - idxn) - 1;
        return idx1 + (n - 1 - idxn);
    }
};