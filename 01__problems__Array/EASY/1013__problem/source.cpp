// 1013. Partition Array Into Three Parts With Equal Sum
// https://leetcode.com/problems/partition-array-into-three-parts-with-equal-sum/description/


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
    bool canThreePartsEqualSum(vector<int>& arr) {
        int n = arr.size();

        int sum = 0;
        vector<int> left_sum(n, 0);
        for (int i = 0; i < n; ++i)
        {
            left_sum[i] = (i == 0) ? arr[i] : left_sum[i - 1] + arr[i];

            sum += arr[i];
        }

        if (sum % 3)
        {
            return false;
        }

        vector<int> right_sum(n, 0);
        for (int i = n - 1; i >= 0; --i)
        {
            right_sum[i] = (i == n - 1) ? arr[i] : right_sum[i + 1] + arr[i];
        }

        int x = sum / 3;
        
        int idx1 = -1;
        for (int i = 0; i < n; ++i)
        {
            if (left_sum[i] == x)
            {
                idx1 = i;
                break;
            }
        }
        if (idx1 == -1) return false;

        int idx2 = -1;
        for (int i = n - 1; i >= 0; --i)
        {
            if (right_sum[i] == x)
            {
                idx2 = i;
                break;
            }
        }
        if (idx2 == -1) return false;

        if (idx1 + 1 < idx2)
        {
            return true;
        }
        return false;
    }
};