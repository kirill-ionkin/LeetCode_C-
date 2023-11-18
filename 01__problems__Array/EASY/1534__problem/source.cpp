// 1534. Count Good Triplets
// https://leetcode.com/problems/count-good-triplets/description/


#include <iostream>
#include <string>
#include <vector>

using namespace std;


class Solution {
public:
    int countGoodTriplets(vector<int>& arr, int a, int b, int c) {
        int n_good_triplets = 0;
        int n = arr.size();

        for (int i = 0; i < n - 2; ++i)
        {
            for (int j = i + 1; j < n - 1; ++j)
            {
                for (int k = j + 1; k < n; ++k)
                {
                    if (abs(arr[i] - arr[j]) <= a && abs(arr[j] - arr[k]) <= b && abs(arr[i] - arr[k]) <= c )
                        ++n_good_triplets;
                }
            }
        }

        return n_good_triplets;
    }
};
