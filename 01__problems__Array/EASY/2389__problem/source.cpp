// 2389. Longest Subsequence With Limited Sum
// https://leetcode.com/problems/longest-subsequence-with-limited-sum/description/


#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <unordered_set>
#include <unordered_map>
#include <map>
#include <set>


using namespace std;


// 1. for loop
class Solution {
public:
    vector<int> answerQueries(vector<int>& nums, vector<int>& queries) {
        sort(nums.begin(), nums.end());
        if (nums.size() > 1)
        {
            for (int i = 1; i < nums.size(); ++i)
                nums[i] += nums[i - 1];
        }

        vector<int> ans;
        for (int query: queries)
        {
            int i = 0;
            for ( ;i < nums.size(); ++i)
            {
                if (nums[i] > query)
                {
                    ans.push_back(i);
                    break;
                }
            }

            if (i == nums.size())
                ans.push_back(nums.size());
        }

        return ans;
    }
};


// 2. binary search
class Solution {
public:
    int bin_search(vector<int>& nums, int val)
    {
        int l = 0;
        int r = nums.size() - 1;

        while (l <= r)
        {
            int mid = l + (r - l) / 2;
            
            if (nums[mid] == val) {
                return mid + 1;
            } else if (nums[mid] < val) {
                l = mid + 1;
            } else {
                r = mid - 1;
            }
        }
        return l;
    }

    vector<int> answerQueries(vector<int>& nums, vector<int>& queries) {
        sort(nums.begin(), nums.end());
        if (nums.size() > 1)
        {
            for (int i = 1; i < nums.size(); ++i)
                nums[i] += nums[i - 1];
        }

        vector<int> ans;
        for (int query: queries)
            ans.push_back(bin_search(nums, query));

        return ans;
    }
};