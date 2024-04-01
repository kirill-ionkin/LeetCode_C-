// 1652. Defuse the Bomb
// https://leetcode.com/problems/defuse-the-bomb/description/


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
    vector<int> decrypt(vector<int>& code, int k) {
        int n = code.size();
        
        vector<int> decrypted_code(n, 0);
        if (k == 0)
        {
            return decrypted_code;
        }
        
        int sum_k_elems = 0;
        int start_idx, end_idx;
        if (k < 0)
        {
            start_idx = n + k;
            end_idx = n - 1;
        }
        else
        {
            start_idx = 1;
            end_idx = k;
        }

        // calculate first sum of k elems
        for (int i = start_idx; i <= end_idx; ++i)
        {
            sum_k_elems += code[i];
        }
        
        int i = 0;
        decrypted_code[i] = sum_k_elems;
        for (int i = 1; i < n; ++i)
        {
            sum_k_elems -= code[start_idx];
            start_idx = (++start_idx) % n;
            end_idx = (++end_idx) % n;
            sum_k_elems += code[end_idx];

            decrypted_code[i] = sum_k_elems;
        }

        return decrypted_code;
    }
};