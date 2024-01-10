// 1331. Rank Transform of an Array
// https://leetcode.com/problems/rank-transform-of-an-array/description/


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
    vector<int> arrayRankTransform(vector<int>& arr) {
        int n = arr.size();
        if (n == 0)
            return arr;

        vector<int> sorted_arr = arr;
        sort(sorted_arr.begin(), sorted_arr.end());
        
        int rank = 1;
        unordered_map<int, int> n_map_rank; n_map_rank[sorted_arr[0]] = rank;
        for (int i = 1; i < n; ++i)
        {
            if (sorted_arr[i] != sorted_arr[i - 1])
                n_map_rank[sorted_arr[i]] = ++rank;
        }

        for (int i = 0; i < n; ++i)
        {
            sorted_arr[i] = n_map_rank[arr[i]];
        }

        return sorted_arr;
    }
};