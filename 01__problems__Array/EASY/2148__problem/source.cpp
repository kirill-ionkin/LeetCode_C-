// 2148. Count Elements With Strictly Smaller and Greater Elements 
// https://leetcode.com/problems/count-elements-with-strictly-smaller-and-greater-elements/description/


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
    int countElements(vector<int>& nums) {
        int n = nums.size();
        if (n <= 2)
            return 0;

        unordered_map<int, int> num_map_count;
        int min_num = nums[0];
        int max_num = nums[0];
        for (int& num: nums)
        {
            min_num = min(min_num, num);
            max_num = max(max_num, num);

            ++num_map_count[num];
        }

        int n_unique = 0;
        int count = 0;
        for (auto& data: num_map_count)
        {
            ++n_unique;
            if (data.first != min_num && data.first != max_num)
                count += data.second;
        }

        return n_unique < 3 ? 0 : count; 
    }
};