// 1539. Kth Missing Positive Number
// https://leetcode.com/problems/kth-missing-positive-number/description/


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
    int findKthPositive(vector<int>& arr, int k) {
        int n = arr.size();

        if (k < arr[0])
            return k;
        else if (k > arr[n - 1] - n)
            return arr[n - 1] + (k - (arr[n - 1] - n));
        
        int count = max(0, arr[0] - 1);
        int missing = 0, i = 1;
        for (; i < n; ++i)
        {
            int missing = arr[i] - arr[i - 1] - 1;
            if (count + missing >= k)
            {
                break;
            }
            count += missing;
        }

        return arr[i - 1] + (k - count);
    }
};