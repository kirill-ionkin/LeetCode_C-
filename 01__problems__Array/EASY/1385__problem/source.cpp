// 1385. Find the Distance Value Between Two Arrays
// https://leetcode.com/problems/find-the-distance-value-between-two-arrays/description/


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
    int bin_search(vector<int>& arr, int value)
    {
        int l = 0;
        int r = arr.size() - 1;

        while (l <= r)
        {
            int mid = l + (r - l) / 2;
            // cout << l << ' ' << r << ' '<< mid << '\n';
            if (arr[mid] >= value)
                r = mid;
            else if (arr[mid] < value)
                l = mid;
            
            if (mid == l && r - l <= 1)
                return r;
        }
        return r;
    }

    int findTheDistanceValue(vector<int>& arr1, vector<int>& arr2, int d) {
        int n2 = arr2.size();

        sort(arr2.begin(), arr2.end());

        int dist = 0;
        if (n2 == 1)
        {
            for (auto& val: arr1)
                if (abs(val - arr2[0]) > d)
                    ++dist;
            
            return dist;
        }

        for (auto& val: arr1)
        {
            int idx = bin_search(arr2, val);

            if (idx == n2 - 1)
            {
                int dist_ = min(abs(val - arr2[idx]), abs(val - arr2[idx - 1]));
                if (dist_ > d)
                    ++dist;
            }
            else if (idx == 0)
            {
                int dist_ = min(abs(val - arr2[idx]), abs(val - arr2[idx + 1]));
                if (dist_ > d)
                    ++dist;
            }
            else
            {
                int dist_ = abs(val - arr2[idx]);

                if (idx - 1 >= 0)
                    dist_ = min(dist_, abs(val - arr2[idx - 1]));
                if (idx + 1 < n2)
                    dist_ = min(dist_, abs(val - arr2[idx + 1]));
                
                if (dist_ > d)
                    ++dist;
            }
        }
        return dist;
    }
};