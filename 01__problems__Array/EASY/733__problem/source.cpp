// 733. Flood Fill
// https://leetcode.com/problems/flood-fill/description/


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
    void fill(vector<vector<int>>& image, int i, int j, int target_color, int color, set<pair<int, int>>& seen)
    {
        if (seen.find({i, j}) != seen.end())
            return;
        
        seen.insert({i, j});

        if (image[i][j] != target_color)
            return;
        
        image[i][j] = color;
        
        // up
        if (i - 1 >= 0)
            fill(image, i - 1, j, target_color, color, seen);

        // down
        if (i + 1 < image.size())
            fill(image, i + 1, j, target_color, color, seen);
        
        // left
        if (j - 1 >= 0)
            fill(image, i, j - 1, target_color, color, seen);

        // right
        if (j + 1 < image[0].size())
            fill(image, i, j + 1, target_color, color, seen);
    }

    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
        int m = image.size();
        int n = image[0].size();

        int target_color = image[sr][sc];
        set<pair<int, int>> seen;
        fill(image, sr, sc, target_color, color, seen);

        return image;
    }
};