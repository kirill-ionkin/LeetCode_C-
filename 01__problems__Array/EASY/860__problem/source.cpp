// 860. Lemonade Change
// https://leetcode.com/problems/lemonade-change/description/


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
    bool lemonadeChange(vector<int>& bills) {
       int n_fives = 0;
       int n_tens = 0;

       for (int& bill: bills)
       {
           if (bill == 5)
            ++n_fives;
            else if (bill == 10)
            {
                if (n_fives >= 1) 
                {
                    --n_fives;
                    ++n_tens;
                }
                else return false;
            }
            else
            {
                if (n_tens >= 1 && n_fives >= 1)
                {
                    --n_tens;
                    --n_fives;
                }
                else if (n_fives >= 3)
                    n_fives -= 3;
                else
                    return false;
            }
       }
       return true; 
    }
};