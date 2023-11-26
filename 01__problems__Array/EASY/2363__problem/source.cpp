// 2363. Merge Similar Items
// https://leetcode.com/problems/merge-similar-items/description/


#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <unordered_set>
#include <unordered_map>
#include <map>


using namespace std;


// 1.
class Solution {
public:
    static bool comparator(const vector<int>& v1, const vector<int>& v2)
    {
        return v1[0] < v2[0];
    }

    vector<vector<int>> mergeSimilarItems(vector<vector<int>>& items1, vector<vector<int>>& items2) {
       // sort both items1, items2 
        sort(items1.begin(), items1.end(), comparator);
        sort(items2.begin(), items2.end(), comparator);

        vector<vector<int>> ret;

        int idx1 = 0;
        int idx2 = 0;
        vector<int> item, item1, item2;
        while (idx1 < items1.size() && idx2 < items2.size())
        {
            item1 = items1[idx1];
            item2 = items2[idx2];

            item = (item1[0] <= item2[0]) ? item1 : item2;


            if (ret.size() == 0)
                ret.push_back(item);
            else
            {
                if (ret[ret.size() - 1][0] == item[0])
                    ret[ret.size() - 1][1] += item[1];
                else
                    ret.push_back(item);
            }


            if (item[0] == item1[0])
                ++idx1;
            else
                ++idx2;
        }

        while (idx1 < items1.size())
        {
            if (ret[ret.size() - 1][0] == items1[idx1][0])
                ret[ret.size() - 1][1] += items1[idx1][1];
            else
                ret.push_back(items1[idx1]);
            
            ++idx1;
        }

        while (idx2 < items2.size())
        {
            if (ret[ret.size() - 1][0] == items2[idx2][0])
                ret[ret.size() - 1][1] += items2[idx2][1];
            else
                ret.push_back(items2[idx2]);
            
            ++idx2;
        }

        return ret;
    }
};


// 2.
class Solution {
public:
    vector<vector<int>> mergeSimilarItems(vector<vector<int>>& items1, vector<vector<int>>& items2) {
        map<int, int> ordered_value_with_weight;

        for (int i = 0; i < items1.size(); ++i)
            ordered_value_with_weight[items1[i][0]] += items1[i][1];
        
        for (int i = 0; i < items2.size(); ++i)
            ordered_value_with_weight[items2[i][0]] += items2[i][1];

        vector<vector<int>> ret;
        
        for (auto & data : ordered_value_with_weight)
            ret.push_back({data.first, data.second});

        return ret;
    }
};