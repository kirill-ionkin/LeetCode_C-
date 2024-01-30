// 2748. Number of Beautiful Pairs
// https://leetcode.com/problems/number-of-beautiful-pairs/description/


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
    int first_digit(int n)
    {
        while (n >= 10)
        {
            n /= 10;
        }

        return n;
    }

    int gcd(int a, int b) {
        if (b == 0) return a;
        return gcd(b, a % b);
    }

    int countBeautifulPairs(vector<int>& nums) {
        int n = nums.size();
        int n_pairs = 0;
        for (int i = 0; i < n - 1; ++i)
        {
            for (int j = i + 1; j < n; ++j)
            {
                int first_d = first_digit(nums[i]);
                int last_d = nums[j] % 10;

                if (gcd(first_d, last_d) == 1) ++n_pairs;
            }
        }

        return n_pairs;
    }
};