// 575. Distribute Candies
// https://leetcode.com/problems/distribute-candies/description/


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
    int distributeCandies(vector<int>& candyType) {
        unordered_set<int> unique_candy_types(candyType.begin(), candyType.end());

        return min(candyType.size() / 2, unique_candy_types.size());
    }
};