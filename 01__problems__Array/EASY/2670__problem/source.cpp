// 2670. Find the Distinct Difference Array
// https://leetcode.com/problems/find-the-distinct-difference-array/description/


#include <iostream>
#include <string>
#include <vector>
#include <unordered_set>
#include <unordered_map>


using namespace std;


// 1.
class Solution {
public:
    vector<int> distinctDifferenceArray(vector<int>& nums) {
        unordered_set<int> right_set(nums.begin(), nums.end());
        unordered_set<int> left_set;
        unordered_map<int, int> right_map;

        for (int num: nums)
            ++right_map[num];
        
        vector<int> diff;
        for (int i = 0; i < nums.size(); ++i)
        {
            left_set.insert(nums[i]);

            --right_map[nums[i]];

            if (right_map[nums[i]] == 0)
                right_set.erase(nums[i]);

            
            diff.push_back(left_set.size() - right_set.size());
        }

        return diff;
    }
};


// 2. 
class Solution {
public:
    vector<int> distinctDifferenceArray(vector<int>& nums) {
        int n = nums.size();
        
        unordered_set<int> s_lr;
        unordered_set<int> s_rl;

        vector<int> n_unique_elem_lr(n);
        vector<int> n_unique_elem_rl(n);

        for (int i = 0; i < n; ++i)
        {
            s_lr.insert(nums[i]);
            n_unique_elem_lr[i] = s_lr.size();
        }

        for (int i = n - 1; i >= 0; --i)
        {
            s_rl.insert(nums[i]);
            n_unique_elem_rl[n - 1 - i] = s_rl.size();
        }

        
        vector<int> diff(n);
        for (int i = 0; i < n - 1; ++i)
        {
            diff[i] = n_unique_elem_lr[i] - n_unique_elem_rl[n - 2 - i];
        }
        diff[n-1] = n_unique_elem_lr[n - 1];

        return diff;
    }
};