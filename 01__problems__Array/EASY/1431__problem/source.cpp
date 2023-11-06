// 1431. Kids With the Greatest Number of Candies
// https://leetcode.com/problems/kids-with-the-greatest-number-of-candies/description/


#include <iostream>
#include <string>
#include <vector>

using namespace std;


class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        vector<bool> ans;
        int greatest_number = 0;

        for (int n_candies: candies)
        {
            greatest_number = max(greatest_number, n_candies);
        }
        
        for (int i = 0; i < candies.size(); ++i)
        {
            if (candies[i] + extraCandies >= greatest_number)
                ans.push_back(true);
            else    
                ans.push_back(false);
        }

        return ans;
    }
};

