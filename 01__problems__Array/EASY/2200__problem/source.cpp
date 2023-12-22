// 2200. Find All K-Distant Indices in an Array
// https://leetcode.com/problems/find-all-k-distant-indices-in-an-array/description/


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
    vector<int> findKDistantIndices(vector<int>& nums, int key, int k) {
        int n = nums.size();

        vector<int> ans;
        for (int i = 0; i < n; ++i)
        {
            if (nums[i] == key)
            {
                int l = max(i - k, 0);
                int r = min(i + k, n - 1);

                if (ans.size() > 0)
                    l = max(l, ans[ans.size() - 1]);
                
                while (l <= r)
                {
                    if (ans.size() == 0)
                        ans.push_back(l);
                    else if (ans.size() > 0 && l > ans[ans.size() - 1])
                        ans.push_back(l);
                    
                    ++l;
                }
            }
        }

        return ans;
    }
};