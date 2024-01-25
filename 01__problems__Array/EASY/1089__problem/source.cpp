// 1089. Duplicate Zeros
// https://leetcode.com/problems/duplicate-zeros/


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
    void duplicateZeros(vector<int>& arr) {
        int n = arr.size();

        int n_elems = 0;
        int n_zeros = 0;
        bool half = false;
        int i = 0;
        for (; i < n; ++i)
        {
            ++n_elems;
            if (arr[i] == 0)
            {
                ++n_zeros;
                ++n_elems;
            }

            if (n_elems >= n)
                break;
        }

        if (n_elems > n) half = true;

        if (n_zeros && half)
        {
            --n_zeros;
            half = false;
            arr[n - 1] = 0;
            --i;
        }

        while (i >= 0)
        {
            if (arr[i] != 0)
            {
                arr[i + n_zeros] = arr[i];
            }
            else
            {
                --n_zeros;
                arr[i + n_zeros] = 0;
                arr[i + n_zeros + 1] = 0;
            }

            --i;
        }
    }
};