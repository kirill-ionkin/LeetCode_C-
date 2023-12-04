// 922. Sort Array By Parity II
// https://leetcode.com/problems/sort-array-by-parity-ii/description/


#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <unordered_set>
#include <unordered_map>
#include <map>
#include <set>


using namespace std;


// 1. inplace: memory - O(1)
class Solution {
public:
    vector<int> sortArrayByParityII(vector<int>& nums) {
        int even_idx = 0;
        int odd_idx = 1;

        bool even_swap = false;
        bool odd_swap = false;


        while (even_idx < nums.size() && odd_idx < nums.size())
        {
            if (nums[even_idx] % 2 == 0)
            {
                even_idx += 2;
            }
            else
            {
                even_swap = true;
            }

            if (nums[odd_idx] % 2 == 1)
            {
                odd_idx += 2;
            }
            else
            {
                odd_swap = true;
            }

            if (even_swap && odd_swap)
            {
                int tmp = nums[even_idx];
                nums[even_idx] = nums[odd_idx];
                nums[odd_idx] = tmp;
                
                even_idx += 2; 
                odd_idx += 2;

                even_swap = false;
                odd_swap = false;
            }
        }

        return nums;
    }
};


// 2. inplace, but more readable
class Solution {
public:
    vector<int> sortArrayByParityII(vector<int>& nums) {
        int even_idx = 0;
        int odd_idx = 1;

        while (even_idx < nums.size() && odd_idx < nums.size())
        {
            if ((nums[even_idx] % 2 != 0) && (nums[odd_idx] % 2 != 1))
            {
                int tmp = nums[even_idx];
                nums[even_idx] = nums[odd_idx];
                nums[odd_idx] = tmp;

                even_idx += 2;
                odd_idx += 2;
                continue;
            }
            
            if (nums[even_idx] % 2 == 0)
            {
                even_idx += 2;
            }

            if (nums[odd_idx] % 2 == 1)
            {
                odd_idx += 2;
            }
        }

        return nums;
    }
};