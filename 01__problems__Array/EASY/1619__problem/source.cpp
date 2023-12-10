// 1619. Mean of Array After Removing Some Elements
// https://leetcode.com/problems/mean-of-array-after-removing-some-elements/description/


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
    double trimMean(vector<int>& arr) {
        sort(arr.begin(), arr.end());

        int n = arr.size();
        
        int drop = n / 20;
        double sum = 0;
        for (int i = 0  + drop; i < n - drop; ++i)
        {
            sum += arr[i];
        }

        return sum / (n - 2 * drop);
    }
};