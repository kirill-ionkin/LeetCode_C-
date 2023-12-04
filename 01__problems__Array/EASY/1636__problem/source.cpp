// 1636. Sort Array by Increasing Frequency
// https://leetcode.com/problems/sort-array-by-increasing-frequency/description/


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
    static bool compare(pair<int, int>& pair1, pair<int, int>& pair2)
    {
        return pair1.second == pair2.second ? pair1.first > pair2.first :  pair1.second < pair2.second;
    }

    vector<int> frequencySort(vector<int>& nums) {
        unordered_map<int, int> num_map_count;

        for (auto& num: nums)
            ++num_map_count[num];
        
        vector<pair<int, int>> tmp_vector;
        for (auto& data: num_map_count)
            tmp_vector.push_back({data.first, data.second});
        sort(tmp_vector.begin(), tmp_vector.end(), compare);


        vector<int> vector_sort_by_freq;
        for (auto& data: tmp_vector)
            while (num_map_count[data.first]--)
                vector_sort_by_freq.push_back(data.first);

        return vector_sort_by_freq;
    }
};