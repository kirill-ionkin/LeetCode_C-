// 136. Single Number
// https://leetcode.com/problems/single-number/description/


#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <unordered_set>
#include <unordered_map>
#include <map>
#include <set>


using namespace std;


// bitwise property!
class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int ans = 0;
        for (auto num: nums)
            ans ^= num;
        
        return ans;
    }
};