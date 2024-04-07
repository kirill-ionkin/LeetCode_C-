// 661. Image Smoother
// https://leetcode.com/problems/image-smoother/description/


#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <unordered_set>
#include <unordered_map>
#include <map>
#include <set>

#include <limits.h>

#include <cmath>

using namespace std;


class Solution {
public:
    int avarege(int i, int j, int n, int m, vector<vector<int>>& img)
    {
        int i_min = max(0, i - 1);
        int i_max = min(i + 1, n - 1);

        int j_min = max(0, j - 1);
        int j_max = min(j + 1, m - 1);

        int sum = 0;
        int count = (i_max - i_min + 1) * (j_max - j_min + 1);
        for (int i_ = i_min; i_ <= i_max; ++i_)
        {
            for (int j_ = j_min; j_ <= j_max; ++j_)
            {
                sum += img[i_][j_];
            }
        }
        
        return sum / count;
    }
    vector<vector<int>> imageSmoother(vector<vector<int>>& img) {
        int n = img.size();
        int m = img[0].size();

        vector<vector<int>> img_smoother = img;
        for (int i = 0; i < n; ++i)
        {
            for (int j = 0; j < m; ++j)
            {
                int smoothed_val = avarege(i, j, n, m, img);
                img_smoother[i][j] = smoothed_val;
            }
        }

        return img_smoother;
    }
};