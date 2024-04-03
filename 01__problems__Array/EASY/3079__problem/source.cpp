// 3079. Find the Sum of Encrypted Integers
// https://leetcode.com/problems/find-the-sum-of-encrypted-integers/description/


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
    int encrypt(int n)
    {
        int count = 0;
        int max_digit = 0;
        while (n)
        {
            ++count;
            max_digit = max(n % 10, max_digit);

            n /= 10;
        }

        int encrypted_n = 0;
        while (count)
        {
            --count;
            encrypted_n += pow(10, count) * max_digit;
        }

        return encrypted_n;
    }

    int sumOfEncryptedInt(vector<int>& nums) {
        int sum = 0;
        for (auto& num: nums)
        {
            sum += encrypt(num);
        }

        return sum;
    }
};