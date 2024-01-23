// 1275. Find Winner on a Tic Tac Toe Game
// https://leetcode.com/problems/find-winner-on-a-tic-tac-toe-game/description/


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
    string tictactoe(vector<vector<int>>& moves) {
        int n = moves.size();

        vector<int> A_rows(3, 0);
        vector<int> A_cols(3, 0);
        vector<int> A_diag(2, 0);

        vector<int> B_rows(3, 0);
        vector<int> B_cols(3, 0);
        vector<int> B_diag(2, 0);

        
        for (int i = 0; i < n; ++i)
        {
            int rowi = moves[i][0];
            int coli = moves[i][1];

            if (i % 2 == 0)
            {
                ++A_rows[rowi];
                ++A_cols[coli];

                if (rowi == coli && rowi == 1)
                {
                    ++A_diag[0];
                    ++A_diag[1];
                }
                else if (rowi == coli)
                    ++A_diag[0];
                else if (abs(rowi - coli) == 2)
                    ++A_diag[1];
                
                if (A_rows[rowi] == 3 || A_cols[coli] == 3 || A_diag[0] == 3 || A_diag[1] == 3)
                    return "A";
            }
            else
            {
                ++B_rows[rowi];
                ++B_cols[coli];

                if (rowi == coli && rowi == 1)
                {
                    ++B_diag[0];
                    ++B_diag[1];
                }
                else if (rowi == coli)
                    ++B_diag[0];
                else if (abs(rowi - coli) == 2)
                    ++B_diag[1];
                
                if (B_rows[rowi] == 3 || B_cols[coli] == 3 || B_diag[0] == 3 || B_diag[1] == 3)
                    return "B";
            }
        }

        if (n < 9)
            return "Pending";
        
        return "Draw";
    }
};