// 1295. Find Numbers with Even Number of Digits
// https://leetcode.com/problems/find-numbers-with-even-number-of-digits/description/


#include <iostream>
#include <string>
#include <vector>

using namespace std;


class Solution {
public:
    int even_n_of_digits(int n)
    {
        int count = 0;
        while (n)
        {
            n /= 10;
            ++count;
        }

        return (count + 1) % 2;
    }

    int findNumbers(vector<int>& nums) {
        int number_of_even  = 0;
        for (auto n : nums)
            number_of_even += even_n_of_digits(n);
        
        return number_of_even;
    }
};