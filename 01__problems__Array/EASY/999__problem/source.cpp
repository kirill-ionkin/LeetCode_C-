// 999. Available Captures for Rook
// https://leetcode.com/problems/available-captures-for-rook/description/


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
    int numRookCaptures(vector<vector<char>>& board) {
        int ri, rj;
        vector<pair<int, int>> Bs;
        vector<pair<int, int>> ps;

        for (int i = 0; i < 8; ++i)
        {
            for (int j = 0; j < 8; ++j)
            {
                if (board[i][j] == 'R')
                {
                    ri = i;
                    rj = j;
                }
                else if (board[i][j] == 'B')
                    Bs.push_back({i, j});
                else if (board[i][j] == 'p')
                    ps.push_back({i, j});
            }
        }

        vector<int> min_distances_from_R_to_p(4, INT_MAX);
        // 0 - up, 1 - down, 2 - right, 3 - left
        for (auto& idx: ps)
        {
            int pi = idx.first;
            int pj = idx.second;

            if (pi != ri && pj != rj)
                continue;
            
            // find: 0, 1, 2 or 3
            // 0
            if (pi < ri)
            {
                min_distances_from_R_to_p[0] = min(min_distances_from_R_to_p[0], ri - pi); 
            }
            // 1
            else if (pi > ri)
            {
                min_distances_from_R_to_p[1] = min(min_distances_from_R_to_p[1], pi - ri);
            }
            // 2
            else if (pj > rj)
            {
                min_distances_from_R_to_p[2] = min(min_distances_from_R_to_p[2], pj - rj);
            }
            // 3
            else 
            {
                min_distances_from_R_to_p[3] = min(min_distances_from_R_to_p[3], rj - pj);
            }
        }


        for (auto& idx: Bs)
        {
            int bi = idx.first;
            int bj = idx.second;

            if (bi != ri && bj != rj)
                continue;

            // find: 0, 1, 2 or 3
            // 0
            if (bi < ri)
            {
                if (min_distances_from_R_to_p[0] > ri - bi)
                    min_distances_from_R_to_p[0] = -1; 
            }
            // 1
            else if (bi > ri)
            {
                if (min_distances_from_R_to_p[1] > bi - ri)
                    min_distances_from_R_to_p[1] = -1;
            }
            // 2
            else if (bj > rj)
            {
                if (min_distances_from_R_to_p[2] > bj - rj)
                    min_distances_from_R_to_p[2] = -1;
            }
            // 3
            else 
            {
                if (min_distances_from_R_to_p[3] > rj - bj)
                    min_distances_from_R_to_p[3] = -1;
            }
        }


        int ans = 0;
        for (auto& d: min_distances_from_R_to_p)
        {
            if (d > 0 && d != INT_MAX)
                ++ans;
        }

        return ans;
    }
};

