// 1502. Can Make Arithmetic Progression From Sequence
// https://leetcode.com/problems/can-make-arithmetic-progression-from-sequence/description/


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
    bool canMakeArithmeticProgression(vector<int>& arr) {
        sort(arr.begin(), arr.end());

        int diff = arr[1] - arr[0];
        for (int i = 1; i < arr.size(); ++i)
        {
            if (diff != arr[i] - arr[i - 1])
                return false;
        }
        return true;
    }
};
