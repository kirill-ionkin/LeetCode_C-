// 2094. Finding 3-Digit Even Numbers
// https://leetcode.com/problems/finding-3-digit-even-numbers/description/


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
    vector<int> findEvenNumbers(vector<int>& digits) {
        vector<int> count(10, 0);
        
        bool any_even_digit = false;
        for (auto& digit: digits)
        {
            if (digit % 2 == 0)
                any_even_digit = true;
        
            ++count[digit];
        }

        if (!any_even_digit)
            return {};
        
        vector<int> ans;
        for (int i = 100; i < 999; i+=2)
        {
            vector<int> current_count(10, 0);
            int tmp = i;
            while (tmp)
            {
                int digit = tmp % 10;
                ++current_count[digit];

                tmp /= 10;
            }

            bool possible = true;
            for (int i = 0; i < 10; ++i)
            {
                if ((current_count[i]) && (current_count[i] > count[i]))
                {
                    possible = false;
                    break;
                }
            }

            if (possible)
                ans.push_back(i);
        }

        return ans;
    }
};