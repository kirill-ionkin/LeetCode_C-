// 599. Minimum Index Sum of Two Lists
// 599. Minimum Index Sum of Two Lists


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
    vector<string> findRestaurant(vector<string>& list1, vector<string>& list2) {
        unordered_map<string, int> string_map_idx;
        
        for (int i = 0; i < list1.size(); ++i)
        {
            string_map_idx[list1[i]] = i;
        }

        vector<string> common_strings;
        int min_idx_sum = INT_MAX;
        for (int j = 0; j < list2.size(); ++j)
        {
            if (string_map_idx.count(list2[j]) != 0)
            {
                int i = string_map_idx[list2[j]]; 
                if (i + j == min_idx_sum)
                    common_strings.push_back(list2[j]);
                else if (i + j < min_idx_sum)
                {
                    min_idx_sum = i + j;
                    common_strings.clear();
                    common_strings.push_back(list2[j]);

                }
            }
        }

        return common_strings;
    }
};