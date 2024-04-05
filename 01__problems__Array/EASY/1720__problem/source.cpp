// 1720. Decode XORed Array
// https://leetcode.com/problems/decode-xored-array/description/


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
    vector<int> decode(vector<int>& encoded, int first) {
        vector<int> origins = {first};
        int last = first;
        for (auto &res: encoded)
        {
            last = res ^ last;
            origins.push_back(last);
        }

        return origins;
    }
};