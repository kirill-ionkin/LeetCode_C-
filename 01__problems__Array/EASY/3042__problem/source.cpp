// 3042. Count Prefix and Suffix Pairs I
// https://leetcode.com/problems/count-prefix-and-suffix-pairs-i/description/


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
    bool is_suffix(const string& lhs, const string& rhs)
    {
        int n1 = lhs.size();
        int n2 = rhs.size();

        int i = 0;
        while (n1 - 1 - i >= 0)
        {
            if (lhs[n1 - 1 - i] != rhs[n2 - 1 - i])
            {
                return false;
            }

            ++i;
        }

        return true;
    }

    bool is_prefix(const string& lhs, const string& rhs)
    {
        for (int i = 0; i < lhs.size(); ++i)
        {
            if (lhs[i] != rhs[i])
            {
                return false;
            }
        }

        return true;
    }

    bool isPrefixAndSuffix(const string& lhs, const string& rhs)
    {
        int n1 = lhs.size();
        int n2 = rhs.size();

        if (n1 > n2)
        {
            return false;
        }

        return is_prefix(lhs, rhs) && is_suffix(lhs, rhs);
    }

    int countPrefixSuffixPairs(vector<string>& words) {
        int n = words.size();
        
        int count = 0;
        for (int i = 0; i < n - 1; ++i)
        {
            for (int j = i + 1; j < n; ++j)
            {
                if (isPrefixAndSuffix(words[i], words[j]))
                {
                    ++count;
                }
            }
        }    

        return count;
    }
};