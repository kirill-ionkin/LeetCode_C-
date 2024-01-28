// 228. Summary Ranges
// https://leetcode.com/problems/summary-ranges/description/


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
    vector<string> summaryRanges(vector<int>& nums) {
        int n = nums.size();

        vector<string> ans;

        int i = 0;
        int start = -1;
        int end = -1;
        while (i < n)
        {
            if (start != -1 && end != -1)
            {
                if (nums[i] == nums[end] + 1) end = i;
                else
                {
                    ans.push_back(to_string(nums[start]) + "->" + to_string(nums[end]));
                    start = i;
                    end = -1;
                }
            }
            else if (start != -1 && end == -1)
            {
                if (nums[i] == nums[start] + 1) end = i;
                else
                {
                    ans.push_back(to_string(nums[start]));
                    start = i;
                }
            }
            else if (start == -1)
            {
                start = i;
            }

            ++i;
        }

        if (start != -1 && end != -1)
            ans.push_back(to_string(nums[start]) + "->" + to_string(nums[end]));
        else if (start != -1 && end == -1)
            ans.push_back(to_string(nums[start]));


        return ans;
    }
};