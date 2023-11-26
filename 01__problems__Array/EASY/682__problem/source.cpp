// 682. Baseball Game
// https://leetcode.com/problems/baseball-game/description/


#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <unordered_set>
#include <unordered_map>


using namespace std;


class Solution {
public:
    int calPoints(vector<string>& operations) {
        vector<int> scores;

        for (const auto& operation: operations)
        {
            if (operation == "+")
                scores.push_back(scores[scores.size() - 2] + scores[scores.size() - 1]);
            else if (operation == "D")
                scores.push_back(scores[scores.size() - 1] * 2);
            else if (operation == "C")
                scores.pop_back();
            else
                scores.push_back(stoi(operation));
        }

        int sum = 0;
        for (int score: scores)
            sum += score;
        
        return sum;
    }
};