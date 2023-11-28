// 2053. Kth Distinct String in an Array
// https://leetcode.com/problems/kth-distinct-string-in-an-array/description/


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
    string kthDistinct(vector<string>& arr, int k) {
        unordered_map<string, int> str_map_count;

        for (auto & str: arr)
            ++str_map_count[str];
        
        for (auto & str: arr)
        {
            if (str_map_count[str] == 1)
                if (--k == 0)
                    return str;
        }

        return "";
    }
};