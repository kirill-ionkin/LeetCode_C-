// 1287. Element Appearing More Than 25% In Sorted Array
// https://leetcode.com/problems/element-appearing-more-than-25-in-sorted-array/description/


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
    int findSpecialInteger(vector<int>& arr) {
        int n = arr.size();

        int min_n = ceil(static_cast<float>(n) / 4);
        if (n % 4 == 0)
            ++min_n;
        
        int count = 0;
        int previous_elem = -1; 
        for (auto &num: arr)
        {
            if (num != previous_elem)
            {
                if (count >= min_n)
                    return previous_elem;
                
                previous_elem = num;
                count = 1;
            }
            else
            {
                ++count;
            }
        }
        return arr[n - 1];
    }
};