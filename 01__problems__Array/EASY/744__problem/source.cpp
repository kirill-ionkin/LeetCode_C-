// 744. Find Smallest Letter Greater Than Target
// https://leetcode.com/problems/find-smallest-letter-greater-than-target/description/


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
    char nextGreatestLetter(vector<char>& letters, char target) {
        for (auto &ch: letters)
        {
            if (ch > target)
                return ch;
        }

        return letters[0];
    }
};