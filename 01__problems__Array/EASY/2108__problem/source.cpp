// 2108. Find First Palindromic String in the Array
// https://leetcode.com/problems/find-first-palindromic-string-in-the-array/description/


#include <iostream>
#include <string>
#include <vector>

using namespace std;


class Solution {
public:
    bool is_palindrom(string str)
    {
        int l = 0;
        int r = str.size() - 1;

        while (l <= r)
        {
            if (str[l] != str[r])
                return false;
            ++l;
            --r;
        }
        return true;
    }

    string firstPalindrome(vector<string>& words) {
        int n = words.size();

        for (int i = 0; i < n; ++i)
        {
            if (is_palindrom(words[i]))
                return words[i];
        }

        return "";
    }
};