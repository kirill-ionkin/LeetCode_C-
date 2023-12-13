// 1394. Find Lucky Integer in an Array
// https://leetcode.com/problems/find-lucky-integer-in-an-array/description/


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
    int findLucky(vector<int>& arr) {
        unordered_map<int, int> n_map_count;
        for (auto& n: arr)
            ++n_map_count[n];
        
        int ans = -1;
        for (auto& data: n_map_count)
        {
            if (data.first == data.second && data.first > ans)
                ans = data.first;
        }

        return ans;
    }
};