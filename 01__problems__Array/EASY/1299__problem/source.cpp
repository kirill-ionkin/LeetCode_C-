// 1299. Replace Elements with Greatest Element on Right Side
// https://leetcode.com/problems/replace-elements-with-greatest-element-on-right-side/description/


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
    vector<int> replaceElements(vector<int>& arr) {
        int n = arr.size();
        vector<int> ans(n, -1);

        int current_max = 0;
        for (int i = n - 2; i >= 0; --i)
        {
            current_max = max(current_max, arr[i + 1]);
            ans[i] = current_max;
        }

        return ans;
    }
};