// 2418. Sort the People
// https://leetcode.com/problems/sort-the-people/description/


#include <iostream>
#include <string>
#include <vector>
#include <unordered_map>
#include <algorithm>


using namespace std;


class Solution {
public:
    vector<string> sortPeople(vector<string>& names, vector<int>& heights) {
        vector<string> names_height_desc_order;


        unordered_map<int, string> map_names_heights;

        for (int i = 0; i < names.size(); ++i)
        {
            map_names_heights[heights[i]] = names[i];
        }


        sort(heights.rbegin(), heights.rend());


        for (int height : heights)
            names_height_desc_order.push_back(map_names_heights[height]);


        return names_height_desc_order;
    }
};


class Solution2 {
public:
    vector<string> sortPeople(vector<string>& names, vector<int>& heights) {
        vector<pair<int, string>> A;
        for (int i = 0; i < names.size(); ++i)
        {
            A.push_back({heights[i], names[i]});
        }

        sort(A.rbegin(), A.rend());

        vector<string> ans;
        for (int i = 0; i < names.size(); ++i)
        {
            ans.push_back(A[i].second);
        }

        return ans;
    }
};