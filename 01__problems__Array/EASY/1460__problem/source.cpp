// 1460. Make Two Arrays Equal by Reversing Subarrays
// https://leetcode.com/problems/make-two-arrays-equal-by-reversing-subarrays/description/


#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <unordered_set>
#include <unordered_map>
#include <map>
#include <set>


using namespace std;


class Solution {
public:
    bool canBeEqual(vector<int>& target, vector<int>& arr) {
        unordered_map<int, int> target_map;
        unordered_map<int, int> arr_map;

        for (auto& num: target)
            ++target_map[num];
        
        for (auto & num: arr)
            ++arr_map[num];
        
        if ((target_map.size() == arr_map.size()) && (target_map == arr_map))
            return true;
        return false;
    }
};
