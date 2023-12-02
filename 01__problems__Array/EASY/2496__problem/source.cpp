// 2496. Maximum Value of a String in an Array
// https://leetcode.com/problems/maximum-value-of-a-string-in-an-array/description/


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
    int get_value(const string& str)
    {
        int val = 0;
        int decimal = 1;
        for (int i = str.size() - 1; i >= 0; --i)
        {
            if (str[i] < '0' || str[i] > '9')
                return str.size();
            
            val += (str[i] - '0') * decimal;
            decimal *= 10;
        }
        return val;
    }

    int maximumValue(vector<string>& strs) {
        int max_val = 0;
        for (auto & str: strs)
        {
            max_val = max(max_val, get_value(str));
        }

        return max_val;
    }
};

