// 108. Convert Sorted Array to Binary Search Tree
// https://leetcode.com/problems/convert-sorted-array-to-binary-search-tree/description/


#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <unordered_set>
#include <unordered_map>
#include <map>
#include <set>


using namespace std;


// Definition for a binary tree node.
struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};


// 1. Like bin search idea
class Solution {
public:
    TreeNode* helper(vector<int>& nums, int left, int right)
    {
        if (left <= right)
        {
            int mid = left + (right - left) / 2;
            TreeNode* root = new TreeNode(nums[mid]);
            root->right = helper(nums, mid + 1, right);   
            root->left = helper(nums, left, mid - 1);

            return root;
        }
        return nullptr;
    }

    TreeNode* sortedArrayToBST(vector<int>& nums) {
        return helper(nums, 0, nums.size() - 1);
    }
};