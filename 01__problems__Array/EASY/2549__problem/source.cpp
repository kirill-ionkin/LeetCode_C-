// 2549. Count Distinct Numbers on Board
// https://leetcode.com/problems/count-distinct-numbers-on-board/description/?source=submission-noac


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
    int distinctIntegers(int n) {
        if (n == 1)
            return 1;
        else
            return n - 1;
    }
};