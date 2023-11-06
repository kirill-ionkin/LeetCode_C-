// 2011. Final Value of Variable After Performing Operations
// https://leetcode.com/problems/final-value-of-variable-after-performing-operations/description/


#include <iostream>
#include <string>
#include <vector>

using namespace std;


class Solution {
public:
    int finalValueAfterOperations(vector<string>& operations) {
        int x = 0;
        for (const auto&  operation : operations)
        {
            if (operation == "--X" || operation == "X--") --x;
            else if (operation == "++X" || operation == "X++") ++x;
        }

        return x;
    }
};