// 1122. Relative Sort Array
// https://leetcode.com/problems/relative-sort-array/description/


#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <unordered_set>
#include <unordered_map>
#include <map>
#include <set>


using namespace std;


class Solution {
public:
    vector<int> relativeSortArray(vector<int>& arr1, vector<int>& arr2) {
        vector<int> ans;
        vector<int> end;

        unordered_map<int, int> n_map_count;
        for (auto& n: arr1)
            ++n_map_count[n];
        
        for (auto& n: arr2)
        {
            while (n_map_count[n]--)
            {
                ans.push_back(n);
            }
        }
        
        // for (auto& data: n_map_count)
        //     cout << data.first << ' ' << data.second << '\n';

        for (auto& data: n_map_count)
        {
            if (data.second != -1)
            {
                while (data.second--)
                    end.push_back(data.first);
            }
                
        }

        sort(end.begin(), end.end());
        for (auto& n: end)
            ans.push_back(n);
        
        return ans;
    }
};