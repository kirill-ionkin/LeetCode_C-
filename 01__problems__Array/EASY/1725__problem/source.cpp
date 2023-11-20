// 1725. Number Of Rectangles That Can Form The Largest Square
// https://leetcode.com/problems/number-of-rectangles-that-can-form-the-largest-square/description/


#include <iostream>
#include <string>
#include <vector>

using namespace std;


class Solution {
public:
    int countGoodRectangles(vector<vector<int>>& rectangles) {
        int max_k = 0; 
        int n = 1;

        for (int i = 0; i < rectangles.size(); ++i)
        {
            int k = min(rectangles[i][0], rectangles[i][1]);

            if (max_k == k) ++n;
            else if (max_k < k) 
            {
                max_k = k;
                n = 1;
            }
        }

        return n;
    }
};