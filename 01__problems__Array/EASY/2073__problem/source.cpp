// 2073. Time Needed to Buy Tickets
// https://leetcode.com/problems/time-needed-to-buy-tickets/


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
    int timeRequiredToBuy(vector<int>& tickets, int k) {
        int n = tickets.size();
        
        int i = 0;
        int time = 0;
        while (tickets[k] > 0)
        {
            i %= n;

            if (tickets[i] > 0)
            {
                --tickets[i];
                ++time;
            }
            ++i;
        }

        return time;
    }
};