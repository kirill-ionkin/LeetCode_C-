// 1356. Sort Integers by The Number of 1 Bits
// https://leetcode.com/problems/sort-integers-by-the-number-of-1-bits/description/


#include <iostream>
#include <string>
#include <vector>
#include <algorithm>


using namespace std;


// 1. 
class Solution {
public:
    // Brian Kerninghan's algorithm implementation
    static int countBins(int num)
    {
        int count = 0;
        while (num)
        {
            num &= num - 1;
            ++count;
        }
        return count;
    }

    static bool compare(int num1, int num2)
    {
        int countbits1 = countBins(num1);
        int countbits2 = countBins(num2);

        if (countbits1 == countbits2)
            return num1 < num2;
        else
            return countbits1 < countbits2;
    }

    vector<int> sortByBits(vector<int>& arr) {
        sort(arr.begin(), arr.end(), compare);

        return arr;
    }
};


// 2.
class Solution {
public:
    int countBins(int n)
    {
        int count = 0;
        while (n)
        {
            count += n&1;
            n >>= 1;
        }

        return count;
    }

    vector<int> sortByBits(vector<int>& arr) {
        vector<pair<int, int>> count_bits_with_num;
        vector<int> ans;

        for (auto num: arr)
            count_bits_with_num.push_back({countBins(num), num});

        sort(count_bits_with_num.begin(), count_bits_with_num.end());

        for (auto elem : count_bits_with_num)
            ans.push_back(elem.second);
        
        return ans;
    }
};