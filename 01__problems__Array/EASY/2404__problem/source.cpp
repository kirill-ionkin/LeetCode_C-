// 2404. Most Frequent Even Element
// https://leetcode.com/problems/most-frequent-even-element/description/


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
    int mostFrequentEven(vector<int>& nums) {
        unordered_map<int, int> even_num_map_count;
        for (int &num: nums)
        {
            if (num % 2 == 0)
                ++even_num_map_count[num];
        }

        if (even_num_map_count.size() == 0)
            return -1;
        
        int max_count = INT_MIN;
        int min_num = INT_MAX;
        for (auto const & [num, count]: even_num_map_count)
        {
            if (count > max_count)
            {
                max_count = count;
                min_num=  num;
            }
            else if (count == max_count)
            {
                min_num = min(min_num, num);
            }
        }

        return min_num;
    }   
};