// 496. Next Greater Element I
// https://leetcode.com/problems/next-greater-element-i/description/


#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <unordered_set>
#include <unordered_map>
#include <map>
#include <set>


using namespace std;


// map + stack
class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int, int> num_map_idx;
        vector<int> stack_nums;

        for (auto& num: nums2)
        {
            while (!stack_nums.empty() && stack_nums.back() < num)
            {
                num_map_idx[stack_nums.back()] = num;
                stack_nums.pop_back();
            }

            stack_nums.push_back(num);
        }

        for (int i = 0; i < nums1.size(); ++i)
        {
            if (num_map_idx.find(nums1[i]) == num_map_idx.end())
                nums1[i] = -1;
            else
                nums1[i] = num_map_idx[nums1[i]];
        }

        return nums1;
    }
};