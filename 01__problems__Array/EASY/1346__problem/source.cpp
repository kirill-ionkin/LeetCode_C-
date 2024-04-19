// 1346. Check If N and Its Double Exist
// https://leetcode.com/problems/check-if-n-and-its-double-exist/description/


#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <unordered_set>
#include <unordered_map>
#include <map>
#include <set>

#include <limits.h>

#include <cmath>

using namespace std;


class Solution {
public:
    bool checkIfExist(vector<int>& arr) {
        unordered_set<int> nums;
        for (auto &num: arr)
        {
            if (nums.count(num * 2) != 0)
            {
                return true;
            }
            else if ((num % 2 == 0) && (nums.count(num / 2) != 0))
            {
                return true;
            }

            nums.insert(num);
        }
        
        return false;
    }
};