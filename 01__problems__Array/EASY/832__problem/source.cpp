// 832. Flipping an Image
// https://leetcode.com/problems/flipping-an-image/description/


#include <iostream>
#include <string>
#include <vector>

using namespace std;


class Solution {
public:
    int reverse(int n)
    {
        if (n == 1)
            return 0;
        return 1;
    }

    vector<vector<int>> flipAndInvertImage(vector<vector<int>>& image) {
        int n = image.size();

        int tmp;

        for (int i = 0; i < n; ++i)
        {
            for (int j = 0; j <= (n - 1) / 2; ++j)
            {
                tmp = image[i][j];
                image[i][j] = image[i][n - 1 - j];
                image[i][n - 1 - j] = tmp;
            }
        }

        for (int i = 0; i < n; ++i)
        {
            for (int j = 0; j < n; ++j)
                image[i][j] = reverse(image[i][j]);
        }

        return image;
    }
};