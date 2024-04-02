// 2951. Find the Peaks
// https://leetcode.com/problems/find-the-peaks/description/


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
    vector<int> findPeaks(vector<int>& mountain) {
        int n = mountain.size();

        vector<int> picks_idxes;
        for (int i = 1; i < n - 1; ++i)
        {
            if ((mountain[i - 1] < mountain[i]) && (mountain[i] > mountain[i + 1]))
            {
                picks_idxes.push_back(i);
            }
        }

        return picks_idxes;
    }
};